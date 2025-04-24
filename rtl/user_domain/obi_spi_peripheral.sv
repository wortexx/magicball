`timescale 1ns/1ps // Simulation time units

module obi_spi_peripheral (
  // Clock and Reset
  input  logic        clk_i,  // System clock
  input  logic        rst_ni, // Async reset, low active

  // OBI Slave Interface (Connects to CPU/Bus)
  input  logic        req_i,     // Master wants to access
  input  logic        we_i,      // Master wants to write (1) or read (0)
  input  logic [3:0]  be_i,      // Which bytes on wdata_i are valid for writes
  input  logic [31:0] addr_i,    // Address master wants to access
  input  logic [31:0] wdata_i,   // Data master wants to write
  output logic        gnt_o,     // We grant access to the master
  output logic        rvalid_o,  // We signal that read data is valid
  output logic [31:0] rdata_o,   // Data we provide for reads

  // SPI Master Interface (Connects to SPI Device)
  output logic        sck_o,   // SPI clock output
  output logic        mosi_o,  // SPI data output (Master Out)
  output logic        cs_o     // SPI chip select output (Active Low)
);

  // Parameters & Addresses
  localparam int ADDR_WIDTH      = 32;
  localparam int DATA_WIDTH      = 32;
  localparam int SPI_DATA_BITS   = 8;  // Standard 8 bits per SPI transfer
  // Divider to create SPI clock from system clock: spi_freq = clk_i / (2 * DIVIDER)
  localparam int SPI_CLK_DIVIDER = 4;  // Adjust this based on clk_i and desired SPI speed (e.g., <= 5MHz)

  localparam logic [ADDR_WIDTH-1:0] SPI_CTRL_ADDR   = 32'h00; // Write here to start SPI
  localparam logic [ADDR_WIDTH-1:0] SPI_TX_ADDR     = 32'h04; // Write 8-bit data here before start
  localparam logic [ADDR_WIDTH-1:0] SPI_STATUS_ADDR = 32'h08; // Read here for {done, busy} status

  //--------------------------------------------------------------------------
  // State Machine Definition
  //--------------------------------------------------------------------------
  typedef enum logic [1:0] {
    IDLE,      // Doing nothing, waiting for start
    LOAD,      // Preparing counters, asserting CS
    SHIFT,     // Sending SPI bits
    COMPLETE   // Finished sending for 1 cycle
  } state_e;

  state_e      state_q, state_d;          // FSM current state (_q) and next state (_d) logic

  //--------------------------------------------------------------------------
  // Internal Registers and Wires
  //--------------------------------------------------------------------------
  // Registers holding state between clock cycles (_q = output of FF)
  logic        start_flag_q;             // Holds the start command until processed
  logic [SPI_DATA_BITS-1:0] tx_data_q;   // Holds the 8 bits to be sent via SPI
  logic [$clog2(SPI_DATA_BITS)-1:0] bit_cnt_q; // Counts bits remaining in SPI transfer (7 down to 0)
  logic [$clog2(SPI_CLK_DIVIDER*2)-1:0] spi_clk_cnt_q; // Counts system clocks to generate SPI clock timing
  logic        rvalid_q;                 // Register driving rvalid_o output
  logic [DATA_WIDTH-1:0] rdata_q;        // Register driving rdata_o output

  // Combinational logic / Wires (_d = input to FF, others are pure combinational)
  logic        start_flag_d;             // Next value logic for start_flag_q
  logic [SPI_DATA_BITS-1:0] tx_data_d;   // Next value logic for tx_data_q
  logic [$clog2(SPI_DATA_BITS)-1:0] bit_cnt_d; // Next value logic for bit_cnt_q
  logic [$clog2(SPI_CLK_DIVIDER*2)-1:0] spi_clk_cnt_d; // Next value logic for spi_clk_cnt_q

  logic        spi_clk_phase;            // Is SPI clock counter in high phase?
  logic        status_read_req;          // Was a status read granted this cycle?
  logic [1:0]  status_bits;              // Combinational {done, busy} status value
  logic        busy;                     // Is FSM busy?
  logic        done;                     // Did FSM just complete?
  logic        gnt_for_read, gnt_for_write; // Grant conditions

  //--------------------------------------------------------------------------
  // OBI Grant Logic (Determines when to assert gnt_o)
  //--------------------------------------------------------------------------
  assign gnt_for_read = !we_i && ((addr_i & 32'hFFF) == SPI_STATUS_ADDR);
  //assign gnt_for_read = !we_i && (addr_i == SPI_STATUS_ADDR); // Ok to grant status reads anytime
  assign gnt_for_write = we_i && (state_q == IDLE) &&         // Ok to grant writes ONLY when IDLE
                         ((addr_i == SPI_TX_ADDR) || (addr_i == SPI_CTRL_ADDR));
  assign gnt_o = req_i && (gnt_for_read || gnt_for_write);     // Grant if requested and conditions met

  //--------------------------------------------------------------------------
  // Status Logic
  //--------------------------------------------------------------------------
  assign busy = (state_q != IDLE) && (state_q != COMPLETE); // Busy if not IDLE or COMPLETE
  assign done = (state_q == COMPLETE);                   // Done only in COMPLETE state
  assign status_bits = {done, busy};                       // Combine for reading via OBI

  //--------------------------------------------------------------------------
  // SPI Clock Generation Logic
  //--------------------------------------------------------------------------
  assign spi_clk_phase = (spi_clk_cnt_q >= SPI_CLK_DIVIDER);

  //--------------------------------------------------------------------------
  // Combinational Logic (FSM Next State and Outputs)
  //--------------------------------------------------------------------------
  // This block calculates the '_d' signals (inputs to registers) and outputs
  // based on the '_q' signals (current register values) and inputs.
  always_comb begin
    // Default assignments: Assume no change unless logic below overrides
    state_d        = state_q;
    bit_cnt_d      = bit_cnt_q;
    spi_clk_cnt_d  = spi_clk_cnt_q;
    start_flag_d   = start_flag_q;
    tx_data_d      = tx_data_q; // Use _d suffix for consistency in this block

    // Default output assignments
    cs_o           = 1'b1;
    sck_o          = 1'b0;
    mosi_o         = tx_data_q[SPI_DATA_BITS-1 - bit_cnt_q];

    // FSM transitions and output overrides based on current state (state_q)
    case (state_q)
      IDLE: begin
        if (start_flag_q) begin
          state_d      = LOAD;
          start_flag_d = 1'b0; // Assign to _d signal
        end
      end

      LOAD: begin
        cs_o          = 1'b0;
        bit_cnt_d     = SPI_DATA_BITS - 1;
        spi_clk_cnt_d = '0;
        mosi_o        = tx_data_q[SPI_DATA_BITS-1]; // Use current tx_data_q
        state_d       = SHIFT;
      end

      SHIFT: begin
        logic [$clog2(SPI_DATA_BITS):0] next_bit_idx_calc = '0; // Intermediate variable ok
        cs_o  = 1'b0;
        sck_o = spi_clk_phase;
        spi_clk_cnt_d = spi_clk_cnt_q + 1; // Calculate next value for counter

        // Update MOSI data at the start of the SCK cycle (when SCK is low)
        if (spi_clk_cnt_q == (SPI_CLK_DIVIDER*2 - 1)) begin // If end of SCK cycle...
          // Calculate index for the *next* bit to be sent
          next_bit_idx_calc = (bit_cnt_q == 0) ? 0 : (SPI_DATA_BITS - 1 - (bit_cnt_q - 1));
          mosi_o = tx_data_q[next_bit_idx_calc]; // Output based on current tx_data_q
        end
        // else keep current bit data on MOSI (default assignment handles this)

        // At the end of a full SCK cycle
        if (spi_clk_cnt_q == (SPI_CLK_DIVIDER*2 - 1)) begin
          spi_clk_cnt_d = '0; // Assign to _d signal
          if (bit_cnt_q == 0) begin // Was that the last bit?
            state_d = COMPLETE; // Assign to _d signal
          end else begin
            bit_cnt_d = bit_cnt_q - 1; // Assign to _d signal
          end
        end
      end // SHIFT

      COMPLETE: begin
        cs_o    = 1'b1;
        state_d = IDLE; // Assign to _d signal
      end

      default: begin
        state_d = IDLE; // Assign to _d signal
        cs_o    = 1'b1;
        sck_o   = 1'b0;
        mosi_o  = 1'b0;
      end
    endcase
  end

  //--------------------------------------------------------------------------
  // Sequential Logic (Registers updated on Clock Edge)
  //--------------------------------------------------------------------------
  // Drive registered outputs from _q signals
  assign rvalid_o = rvalid_q;
  assign rdata_o  = rdata_q;

  // Combinational check if status read granted this cycle
  //assign status_read_req = req_i && !we_i && gnt_o && (addr_i == SPI_STATUS_ADDR);
 // assign status_read_req = gnt_for_read && req_i;
    assign status_read_req = req_i && !we_i && gnt_o && ((addr_i & 32'hFFF) == SPI_STATUS_ADDR);
  // This block updates all registers (_q signals) based on their corresponding
  // _d signals (calculated above) or direct input logic.
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      state_q       <= IDLE;
      tx_data_q     <= '0;
      start_flag_q  <= 1'b0;
      bit_cnt_q     <= '0;
      spi_clk_cnt_q <= '0;
      rvalid_q      <= 1'b0;
      rdata_q       <= '0;
    end else begin
      // Update state registers from their _d inputs
      state_q       <= state_d;
      bit_cnt_q     <= bit_cnt_d;
      spi_clk_cnt_q <= spi_clk_cnt_d;
      start_flag_q  <= start_flag_d; // Use start_flag_d calculated in always_comb
      tx_data_q     <= tx_data_d;    // Use tx_data_d as default

      // OBI Write Handling (Overrides tx_data_q and start_flag_q based on inputs)
      // Note: This logic directly assigns to _q signals based on *current* inputs and grant.
      // It takes precedence over the default _q <= _d assignment for start_flag and tx_data.
      if (req_i && we_i && gnt_o) begin
        unique case (addr_i)
          SPI_TX_ADDR: begin
            if (be_i[0]) begin
              // Directly update tx_data_q based on current inputs if write granted
              tx_data_q <= wdata_i[SPI_DATA_BITS-1:0];
            end
          end
          SPI_CTRL_ADDR: begin
            // Directly update start_flag_q based on current inputs if write granted
            start_flag_q <= 1'b1;
          end
          default:;
        endcase
      // If start flag was consumed (state moving IDLE->LOAD), ensure start_flag_q stays low
      // This overrides the default start_flag_q <= start_flag_d assignment in this specific case.
      end else if (state_q == IDLE && state_d == LOAD) begin
         start_flag_q <= 1'b0;
      end
      // Else: start_flag_q <= start_flag_d (handled by default update above)


      // OBI Read Path Logic if (req_i && !we_i && gnt_o) begin
        $display("%t : SPI PERIPH READ REQ -> addr_i = 0x%08h | gnt_o = %b | rvalid_q = %b | we_i = %b", 
                 $time, addr_i, gnt_o, rvalid_q, we_i);
     // rvalid_q <= status_read_req; // Update rvalid register based on grant last cycle
      //rvalid_q <= req_i && gnt_for_read;
      if (status_read_req) begin
        // Update rdata register based on current status bits when read granted
        rdata_q <= DATA_WIDTH'(status_bits);      
      end else begin
        rdata_q <= '0; // Clear read data register otherwise
      end
    end // else: !if(!rst_ni)
  end // always_ff

endmodule
