 `timescale 1ns/1ps

module obi_spi_peripheral (
  input  logic        clk_i,
  input  logic        rst_ni,

  // OBI Slave Interface
  input  logic        req_i,
  input  logic        we_i,
  input  logic [3:0]  be_i,
  input  logic [31:0] addr_i,
  input  logic [31:0] wdata_i,
  output logic        gnt_o,
  output logic        rvalid_o,
  output logic [31:0] rdata_o,

  // SPI Master Interface
  output logic        sck_o,
  output logic        mosi_o,
  output logic        cs_no // Active Low
);

  // Parameters & Addresses
  localparam int ADDR_WIDTH      = 32;
  localparam int DATA_WIDTH      = 32;
  localparam int SPI_DATA_BITS   = 8;
  localparam int SPI_CLK_DIVIDER = 2; // For 5MHz SPI with 20MHz clk_i

  localparam logic [11:0] SPI_CTRL_ADDR_OFFSET   = 12'h000;
  localparam logic [11:0] SPI_TX_ADDR_OFFSET     = 12'h004;
  localparam logic [11:0] SPI_STATUS_ADDR_OFFSET = 12'h008;

  // FSM States
  typedef enum logic [1:0] {
    IDLE, LOAD, SHIFT, COMPLETE
  } state_e;

  state_e state_q, state_d;

  // Internal Registers and Wires
  logic        start_flag_q, start_flag_d;
  logic [SPI_DATA_BITS-1:0] tx_data_q, tx_data_d;
  logic [$clog2(SPI_DATA_BITS)-1:0] bit_cnt_q, bit_cnt_d;
  logic [$clog2(SPI_CLK_DIVIDER*2)-1:0] spi_clk_cnt_q, spi_clk_cnt_d;
  logic        rvalid_q;
  logic [DATA_WIDTH-1:0] rdata_q;
  logic        spi_clk_phase;
  logic [1:0]  status_bits;
  logic        busy;
  logic        done_q;
  logic        gnt_for_read, gnt_for_write;
  logic        read_req_accepted; // Registered flag for accepted read

  // OBI Grant Logic
  assign gnt_for_read = !we_i && (addr_i[11:0] == SPI_STATUS_ADDR_OFFSET);
  assign gnt_for_write = we_i && (state_q == IDLE) &&
                         ((addr_i[11:0] == SPI_TX_ADDR_OFFSET) || (addr_i[11:0] == SPI_CTRL_ADDR_OFFSET));
  assign gnt_o = req_i && (gnt_for_read || gnt_for_write);

  // Status Logic
  assign busy = (state_q != IDLE) && (state_q != COMPLETE);
  assign status_bits = {done_q, busy};

  // SPI Clock Generation
  assign spi_clk_phase = (spi_clk_cnt_q >= SPI_CLK_DIVIDER);

  // Combinational FSM Logic
  always_comb begin
    // ... (FSM logic remains the same as previous correct version) ...
    state_d        = state_q;
    bit_cnt_d      = bit_cnt_q;
    spi_clk_cnt_d  = spi_clk_cnt_q;
    start_flag_d   = start_flag_q;
    tx_data_d      = tx_data_q;
    cs_no          = 1'b1;
    sck_o          = 1'b0;
    mosi_o         = tx_data_q[bit_cnt_q]; // Corrected MOSI logic

    case (state_q)
      IDLE: begin
        cs_no = 1'b1;
        if (start_flag_q) begin state_d = LOAD; start_flag_d = 1'b0; end
      end
      LOAD: begin
        cs_no = 1'b0; bit_cnt_d = SPI_DATA_BITS - 1; spi_clk_cnt_d = '0;
        mosi_o = tx_data_q[SPI_DATA_BITS-1]; state_d = SHIFT;
      end
      SHIFT: begin
        logic [$clog2(SPI_DATA_BITS)-1:0] next_bit_idx_calc;
        cs_no = 1'b0; sck_o = spi_clk_phase; spi_clk_cnt_d = spi_clk_cnt_q + 1;
        if (spi_clk_cnt_q == (SPI_CLK_DIVIDER*2 - 1)) begin
          next_bit_idx_calc = (bit_cnt_q == 0) ? bit_cnt_q : (bit_cnt_q - 1);
          mosi_o = tx_data_q[next_bit_idx_calc];
        end
        if (spi_clk_cnt_q == (SPI_CLK_DIVIDER*2 - 1)) begin
          spi_clk_cnt_d = '0;
          if (bit_cnt_q == 0) begin state_d = COMPLETE; end
          else begin bit_cnt_d = bit_cnt_q - 1; end
        end
      end
      COMPLETE: begin cs_no = 1'b1; state_d = IDLE; end
      default: state_d = IDLE;
    endcase
  end

  // Sequential Logic
  assign rvalid_o = rvalid_q;
  assign rdata_o  = rdata_q;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      state_q             <= IDLE;
      tx_data_q           <= '0;
      start_flag_q        <= 1'b0;
      bit_cnt_q           <= '0;
      spi_clk_cnt_q       <= '0;
      rvalid_q            <= 1'b0;
      rdata_q             <= '0;
      done_q              <= 1'b0;
      read_req_accepted   <= 1'b0; // Reset registered flag
    end else begin
      // Update done signal
      done_q <= (state_q == SHIFT && state_d == COMPLETE);

      // Update state and other registers
      state_q       <= state_d;
      bit_cnt_q     <= bit_cnt_d;
      spi_clk_cnt_q <= spi_clk_cnt_d;
      start_flag_q  <= start_flag_d;
      tx_data_q     <= tx_data_d;

      // OBI Write Handling
      if (req_i && we_i && gnt_o) begin
        unique case (addr_i[11:0])
          SPI_TX_ADDR_OFFSET: begin if (be_i[0]) tx_data_q <= wdata_i[SPI_DATA_BITS-1:0]; end
          SPI_CTRL_ADDR_OFFSET: begin start_flag_q <= 1'b1; end
          default:;
        endcase
      end else if (state_q == IDLE && state_d == LOAD) begin
         start_flag_q <= 1'b0;
      end

      // *** Standard OBI Read Path Logic ***
      // 1. Latch if a valid read request was granted THIS cycle
      read_req_accepted <= req_i && !we_i && gnt_o && (addr_i[11:0] == SPI_STATUS_ADDR_OFFSET);

      // 2. Assert rvalid_q on the cycle AFTER the read request was accepted
      rvalid_q <= read_req_accepted;

      // 3. Latch the read data WHEN the read request was accepted (previous cycle, indicated by rvalid_q being high now)
      if (rvalid_q) begin // If rvalid_q is high this cycle...
         // ... it means read_req_accepted was high LAST cycle.
         // Latch the status bits from the previous cycle.
         // Note: Requires status_bits to be based on _q registers.
         rdata_q <= DATA_WIDTH'(status_bits);
         $display("%t [DUT_OBI_READ] rvalid_o is HIGH. Outputting rdata_q=0x%h (status={done:%b, busy:%b})",
                  $time, rdata_q, status_bits[1], status_bits[0]);
      end else begin
         rdata_q <= '0; // Clear data when not valid
      end

    end
  end
endmodule
/*
//done 1 ,  tb  fails

`timescale 1ns/1ps 

module obi_spi_peripheral ( 
  input  logic        clk_i,  
  input  logic        rst_ni, 

  // OBI Slave Interface 
  input  logic        req_i,    
  input  logic        we_i,      
  input  logic [3:0]  be_i,     
  input  logic [31:0] addr_i,    
  input  logic [31:0] wdata_i,  
  output logic        gnt_o,     
  output logic        rvalid_o,  
  output logic [31:0] rdata_o,   

  // SPI Master Interface 
  output logic        sck_o,   
  output logic        mosi_o,  
  output logic        cs_no 
);

  
  // Parameters & Addresses
  
  localparam int ADDR_WIDTH      = 32;
  localparam int DATA_WIDTH      = 32;
  localparam int SPI_DATA_BITS   = 8;
  localparam int SPI_CLK_DIVIDER = 4; //2.5 Mhz now? 

  // Relative offsets within this peripheral's 4KB address range
  localparam logic [11:0] SPI_CTRL_ADDR_OFFSET   = 12'h000; // Write here to start SPI
  localparam logic [11:0] SPI_TX_ADDR_OFFSET     = 12'h004; // Write 8-bit data here before start
  localparam logic [11:0] SPI_STATUS_ADDR_OFFSET = 12'h008; // Read here for {done, busy} status

  
  // FSM States
  
  typedef enum logic [1:0] {
    IDLE, LOAD, SHIFT, COMPLETE
  } state_e;

  state_e state_q, state_d;

  
  // Internal Registers and Wires
  
  logic        start_flag_q, start_flag_d;
  logic [SPI_DATA_BITS-1:0] tx_data_q, tx_data_d;
  logic [$clog2(SPI_DATA_BITS)-1:0] bit_cnt_q, bit_cnt_d;
  logic [$clog2(SPI_CLK_DIVIDER*2)-1:0] spi_clk_cnt_q, spi_clk_cnt_d;
  logic        rvalid_q;
  logic [DATA_WIDTH-1:0] rdata_q;
  logic        spi_clk_phase;
  logic        status_read_req;
  logic [1:0]  status_bits;
  logic        busy;
  logic        done_q; // Registered done signal
  logic        gnt_for_read, gnt_for_write;
  logic        read_req_accepted;

  
  // OBI Grant Logic (Combinational)
  
  assign gnt_for_read = !we_i && (addr_i[11:0] == SPI_STATUS_ADDR_OFFSET);
  assign gnt_for_write = we_i && (state_q == IDLE) &&
                         ((addr_i[11:0] == SPI_TX_ADDR_OFFSET) || (addr_i[11:0] == SPI_CTRL_ADDR_OFFSET));
  assign gnt_o = req_i && (gnt_for_read || gnt_for_write);

  
  // Status Logic (Combinational)
  
  //assign busy = (state_q != IDLE) && (state_q != COMPLETE);
  //assign status_bits = {done_q, busy};
  //assign status_bits = {(state_q == COMPLETE), busy};
assign busy = (state_q == SHIFT) || (state_q == LOAD);
assign done = (state_q == COMPLETE);
assign status_bits = {done, busy};

  
  // SPI Clock Generation Logic (Combinational)
  
  assign spi_clk_phase = (spi_clk_cnt_q >= SPI_CLK_DIVIDER);

  
  // Combinational Logic (FSM Next State and Outputs)
  
  always_comb begin
    // Defaults
    state_d        = state_q;
    bit_cnt_d      = bit_cnt_q;
    spi_clk_cnt_d  = spi_clk_cnt_q;
    start_flag_d   = start_flag_q;
    tx_data_d      = tx_data_q;
    cs_no          = 1'b1; // Default inactive HIGH
    sck_o          = 1'b0;
    mosi_o         = tx_data_q[SPI_DATA_BITS-1 - bit_cnt_q];

    // FSM Logic
    case (state_q)
      IDLE: begin
        cs_no = 1'b1;
        if (start_flag_q) begin
          state_d      = LOAD;
          start_flag_d = 1'b0;
        end
      end
      LOAD: begin
        cs_no         = 1'b0; // Assert CS low
        bit_cnt_d     = SPI_DATA_BITS - 1;
        spi_clk_cnt_d = '0;
        mosi_o        = tx_data_q[SPI_DATA_BITS-1];
        state_d       = SHIFT;
      end
      SHIFT: begin
        logic [$clog2(SPI_DATA_BITS):0] next_bit_idx_calc = '0;
        cs_no = 1'b0; // Keep CS low
        sck_o = spi_clk_phase;
        spi_clk_cnt_d = spi_clk_cnt_q + 1;

        if (spi_clk_cnt_q == (SPI_CLK_DIVIDER*2 - 1)) begin
          next_bit_idx_calc = (bit_cnt_q == 0) ? 0 : (SPI_DATA_BITS - 1 - (bit_cnt_q - 1));
          mosi_o = tx_data_q[next_bit_idx_calc];
        end

        if (spi_clk_cnt_q == (SPI_CLK_DIVIDER*2 - 1)) begin
          spi_clk_cnt_d = '0;
          if (bit_cnt_q == 0) begin
            state_d = COMPLETE;
          end else begin
            bit_cnt_d = bit_cnt_q - 1;
          end
        end
      end // SHIFT
      COMPLETE: begin
        cs_no   = 1'b1; // Deassert CS high
        state_d = IDLE;
      end
      default: begin
        state_d = IDLE;
        cs_no   = 1'b1;
        sck_o   = 1'b0;
        mosi_o  = 1'b0;
      end
    endcase
  end

  
  // Sequential Logic (Registers updated on Clock Edge)
  
  assign rvalid_o = rvalid_q;
  assign rdata_o  = rdata_q;

always_ff @(posedge clk_i or negedge rst_ni) begin
  if (!rst_ni) begin
    state_q           <= IDLE;
    tx_data_q         <= '0;
    start_flag_q      <= 1'b0;
    bit_cnt_q         <= '0;
    spi_clk_cnt_q     <= '0;
    rvalid_q          <= 1'b0;
    rdata_q           <= '0;
    done_q            <= 1'b0;
    read_req_accepted <= 1'b0;
  end else begin

    // Debug display for SHIFT -> COMPLETE transition
   // if (state_q == SHIFT) begin
     // $display("%t : [SPI_DEBUG] state_q=%s, state_d=%s, condition=(%b)",
       //        $time, state_q.name(), state_d.name(), (state_q == SHIFT && state_d == COMPLETE));
    //end

    // DONE signal control logic
    if (state_q == SHIFT && state_d == COMPLETE) begin
      done_q <= 1'b1;
    end else if (read_req_accepted && done_q) begin
      $display("%t : [SPI_DEBUG] Clearing done_q on status read", $time);
      done_q <= 1'b0;
    end else begin
      done_q <= 1'b0;
    end

    // State and data registers
    state_q       <= state_d;
    bit_cnt_q     <= bit_cnt_d;
    spi_clk_cnt_q <= spi_clk_cnt_d;
    start_flag_q  <= start_flag_d;
    tx_data_q     <= tx_data_d;

    // OBI Write Handling
    if (req_i && we_i && gnt_o) begin
      unique case (addr_i[11:0])
        SPI_TX_ADDR_OFFSET: begin
          if (be_i[0]) tx_data_q <= wdata_i[SPI_DATA_BITS-1:0];
        end
        SPI_CTRL_ADDR_OFFSET: begin
          start_flag_q <= 1'b1;
        end
        default: ;
      endcase
    end else if (state_q == IDLE && state_d == LOAD) begin
      start_flag_q <= 1'b0;
    end

    // OBI Read Handling
    read_req_accepted <= req_i && !we_i && gnt_o && (addr_i[11:0] == SPI_STATUS_ADDR_OFFSET);
    rvalid_q <= read_req_accepted;

    if (read_req_accepted) begin
      rdata_q <= DATA_WIDTH'(status_bits);
    end else if (!rvalid_q) begin
      rdata_q <= '0;
    end
  end
end

endmodule


*/
/* 

//tb pass, no done
`timescale 1ns/1ps

module obi_spi_peripheral (
  // Clock and Reset
  input  logic        clk_i,
  input  logic        rst_ni,

  // OBI Slave Interface
  input  logic        req_i,
  input  logic        we_i,
  input  logic [3:0]  be_i,
  input  logic [31:0] addr_i,
  input  logic [31:0] wdata_i,
  output logic        gnt_o,
  output logic        rvalid_o,
  output logic [31:0] rdata_o,

  // SPI Master Interface
  output logic        sck_o,
  output logic        mosi_o,
  output logic        cs_no
);

  // Parameters & Addresses

  localparam int ADDR_WIDTH      = 32;
  localparam int DATA_WIDTH      = 32;
  localparam int SPI_DATA_BITS   = 8;
  localparam int SPI_CLK_DIVIDER = 4; 

  //  Relative offsets within this peripheral's 4KB address range 
  localparam logic [11:0] SPI_CTRL_ADDR_OFFSET   = 12'h000; // Write here to start SPI
  localparam logic [11:0] SPI_TX_ADDR_OFFSET     = 12'h004; // Write 8-bit data here before start
  localparam logic [11:0] SPI_STATUS_ADDR_OFFSET = 12'h008; // Read here for {done, busy} status

  
  // FSM States
  
  typedef enum logic [1:0] {
    IDLE, LOAD, SHIFT, COMPLETE
  } state_e;

  state_e state_q, state_d;

  
  // Internal Registers and Wires
  
  logic        start_flag_q, start_flag_d;
  logic [SPI_DATA_BITS-1:0] tx_data_q, tx_data_d;
  logic [$clog2(SPI_DATA_BITS)-1:0] bit_cnt_q, bit_cnt_d;
  logic [$clog2(SPI_CLK_DIVIDER*2)-1:0] spi_clk_cnt_q, spi_clk_cnt_d;
  logic        rvalid_q;
  logic [DATA_WIDTH-1:0] rdata_q;
  logic [ADDR_WIDTH-1:0] granted_addr_q; ////added for debug to latch addr_i when gnt_o goes high
  logic        spi_clk_phase;
  logic        status_read_req;
  logic [1:0]  status_bits;
  logic        busy;
  //logic        done;
  logic        done_q, done_d;
  logic        gnt_for_read, gnt_for_write;

  
  // OBI Grant Logic (Combinational)
  
  // Grant reads ONLY if address offset matches STATUS register
  assign gnt_for_read = !we_i && (addr_i[11:0] == SPI_STATUS_ADDR_OFFSET);

  // Grant writes ONLY when IDLE and address offset matches TX or CTRL register
  assign gnt_for_write = we_i && (state_q == IDLE) &&
                         ((addr_i[11:0] == SPI_TX_ADDR_OFFSET) || (addr_i[11:0] == SPI_CTRL_ADDR_OFFSET));

  // Final grant signal
  assign gnt_o = req_i && (gnt_for_read || gnt_for_write);

  
  // Status Logic (Combinational)
  
  assign busy = (state_q != IDLE) && (state_q != COMPLETE);
  //assign done = (state_q == COMPLETE);
  assign done = done_q; 
  assign status_bits = {done, busy};

  
  // SPI Clock Generation Logic (Combinational)
  
  assign spi_clk_phase = (spi_clk_cnt_q >= SPI_CLK_DIVIDER);

  
  // Combinational Logic (FSM Next State and Outputs)
  
  always_comb begin
    // Defaults
    state_d        = state_q;
    bit_cnt_d      = bit_cnt_q;
    spi_clk_cnt_d  = spi_clk_cnt_q;
    start_flag_d   = start_flag_q;
    tx_data_d      = tx_data_q;
    cs_no          = 1'b1; // Default inactive HIGH
    sck_o          = 1'b0;
    mosi_o         = tx_data_q[SPI_DATA_BITS-1 - bit_cnt_q];

    // FSM Logic
    case (state_q)
      IDLE: begin
        cs_no = 1'b1;
        if (start_flag_q) begin
          state_d      = LOAD;
          start_flag_d = 1'b0;
        end
      end
      LOAD: begin
        cs_no         = 1'b0; // Assert CS low
        bit_cnt_d     = SPI_DATA_BITS - 1;
        spi_clk_cnt_d = '0;
        mosi_o        = tx_data_q[SPI_DATA_BITS-1];
        state_d       = SHIFT;
      end
      SHIFT: begin
        logic [$clog2(SPI_DATA_BITS):0] next_bit_idx_calc = '0;
        cs_no = 1'b0; // Keep CS low
        sck_o = spi_clk_phase;
        spi_clk_cnt_d = spi_clk_cnt_q + 1;

        if (spi_clk_cnt_q == (SPI_CLK_DIVIDER*2 - 1)) begin
          next_bit_idx_calc = (bit_cnt_q == 0) ? 0 : (SPI_DATA_BITS - 1 - (bit_cnt_q - 1));
          mosi_o = tx_data_q[next_bit_idx_calc];
        end

        if (spi_clk_cnt_q == (SPI_CLK_DIVIDER*2 - 1)) begin
          spi_clk_cnt_d = '0;
          if (bit_cnt_q == 0) begin
            state_d = COMPLETE;
          end else begin
            bit_cnt_d = bit_cnt_q - 1;
          end
        end
      end // SHIFT
      COMPLETE: begin
        cs_no   = 1'b1; // Desassert CS high
        state_d = IDLE;
      end
      default: begin
        state_d = IDLE;
        cs_no   = 1'b1;
        sck_o   = 1'b0;
        mosi_o  = 1'b0;
      end
    endcase
  end

  
  // Sequential Logic 
  
  // Drive registered outputs from _q signals
  assign rvalid_o = rvalid_q; // Ensure output is driven
  assign rdata_o  = rdata_q;  // Ensure output is driven

  // Combinational check if status read was granted *this cycle*
  // Uses the internal grant signal gnt_o and correct address offset comparison

  assign status_read_req = !we_i && (granted_addr_q == SPI_STATUS_ADDR_OFFSET);
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      state_q       <= IDLE;
      tx_data_q     <= '0;
      start_flag_q  <= 1'b0;
      bit_cnt_q     <= '0;
      spi_clk_cnt_q <= '0;
      rvalid_q      <= 1'b0;
      rdata_q       <= '0;
      granted_addr_q <= '0;                    //same as above 
    end else begin
      // Default register updates
      state_q       <= state_d;
      bit_cnt_q     <= bit_cnt_d;
      spi_clk_cnt_q <= spi_clk_cnt_d;
      start_flag_q  <= start_flag_d;
      tx_data_q     <= tx_data_d;
      if (gnt_o) begin                        //
        granted_addr_q <= addr_i[11:0];            //  same as above latching i_addr
      end                                     // 
      // OBI Write Handling (Requires internal gnt_o to be high)
      if (req_i && we_i && gnt_o) begin
        // Check lower bits of address for offset match
        unique case (addr_i[11:0])
          SPI_TX_ADDR_OFFSET: begin
            if (be_i[0]) begin
              tx_data_q <= wdata_i[SPI_DATA_BITS-1:0];
            end
          end
          SPI_CTRL_ADDR_OFFSET: begin
            start_flag_q <= 1'b1;
          end
          default:;
        endcase
      end else if (state_q == IDLE && state_d == LOAD) begin
         // Clear start flag when FSM consumes it
         start_flag_q <= 1'b0;
      end

      // OBI Read Path Logic
      // Update rvalid register based on grant *this cycle*
      rvalid_q <= status_read_req;

      // Update rdata register WHEN rvalid_q IS HIGH (was high previous cycle)
      if (rvalid_q) begin
        rdata_q <= DATA_WIDTH'(status_bits);
        //$display("rdata_q = 0x%08h at %0t (done=%b, busy=%b)", rdata_q, $time, done_q, busy);
      end else begin
        rdata_q <= '0;
      end
      done_d = done_q;

      if (state_q == COMPLETE && state_d == IDLE)
        done_d = 1'b1;

      if (status_read_req)
        done_d = 1'b0;

      done_q <= done_d;

    end // else: !if(!rst_ni)
  end // always_ff

endmodule

*/
