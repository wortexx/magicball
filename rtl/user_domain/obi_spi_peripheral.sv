`timescale 1ns/1ps
import croc_pkg::*; // For SbrObiCfg type definition

module obi_spi_peripheral #(
  parameter int ADDR_WIDTH_OBI  = 32,
  parameter int DATA_WIDTH_OBI  = 32,
  parameter int ID_WIDTH_OBI    = SbrObiCfg.IdWidth,
  parameter int SPI_DATA_BITS   = 8
) (
  input  logic        clk_i,
  input  logic        rst_ni,
  input  logic        req_i,
  input  logic        we_i,
  input  logic [3:0]  be_i,
  input  logic [ADDR_WIDTH_OBI-1:0] addr_i,
  input  logic [DATA_WIDTH_OBI-1:0] wdata_i,
  input  logic [ID_WIDTH_OBI-1:0] aid_i,
  output logic        gnt_o,
  output logic        rvalid_o,
  output logic [DATA_WIDTH_OBI-1:0] rdata_o,
  output logic [ID_WIDTH_OBI-1:0] rid_o,
  output logic        err_o,
  output logic        sck_o,
  output logic        mosi_o
);

  // Register Offsets
  localparam logic [11:0] REG_CTRL_OFFSET     = 12'h000;
  localparam logic [11:0] REG_STATUS_OFFSET   = 12'h004;
  localparam logic [11:0] REG_DATA_TX_OFFSET  = 12'h008;
  localparam logic [11:0] REG_CLK_DIV_OFFSET  = 12'h00C;

  // Control Register Bits
  localparam int CTRL_ENABLE_BIT      = 0;
  localparam int CTRL_START_XFER_BIT  = 1;
  localparam int CTRL_CPOL_BIT        = 2;
  localparam int CTRL_CPHA_BIT        = 3;

  // Status Register Bits
  localparam int STATUS_BUSY_BIT     = 0;

  // --- Internal Registers and State ---
  logic [7:0]               ctrl_reg_q;
  logic [SPI_DATA_BITS-1:0]   data_tx_reg_q;
  logic [7:0]               clk_div_q;
  
  typedef enum logic [1:0] { S_IDLE, S_RUN } spi_state_e;
  spi_state_e               spi_state_q, spi_state_d;
  
  logic [$clog2(SPI_DATA_BITS):0] bit_cnt_q, bit_cnt_d;
  logic [7:0]               sck_div_cnt_q, sck_div_cnt_d;
  logic                     sck_phase_q, sck_phase_d;
  logic [SPI_DATA_BITS-1:0]   mosi_shifter_q, mosi_shifter_d;

  // --- OBI Handshake Logic ---
  logic                     req_latch_q;
  logic                     we_latch_q;
  logic [11:0]              addr_offset_latch_q;
  logic [ID_WIDTH_OBI-1:0]    id_latch_q;
  
  assign gnt_o = req_i;
  assign rvalid_o = req_latch_q;
  assign status_busy_q = (spi_state_q != S_IDLE);

  // --- Core Logic ---
  // Combinational logic for FSM and outputs
  always_comb begin
    // Defaults
    spi_state_d = spi_state_q;
    sck_phase_d = sck_phase_q;
    sck_div_cnt_d = sck_div_cnt_q;
    bit_cnt_d = bit_cnt_q;
    mosi_shifter_d = mosi_shifter_q;

    // Default output values: SCK at idle level, MOSI low.
    sck_o = ctrl_reg_q[CTRL_CPOL_BIT];
    mosi_o = 1'b0;

    if (ctrl_reg_q[CTRL_ENABLE_BIT]) begin
      case (spi_state_q)
        S_IDLE: begin
          if (ctrl_reg_q[CTRL_START_XFER_BIT]) begin
            spi_state_d = S_RUN;
          end
        end
        
        S_RUN: begin
          // Drive outputs during transfer
          sck_o = sck_phase_q ^ ctrl_reg_q[CTRL_CPOL_BIT];
          mosi_o = mosi_shifter_q[SPI_DATA_BITS-1];
          
          if (sck_div_cnt_q == clk_div_q) begin
            sck_div_cnt_d = '0;
            sck_phase_d = ~sck_phase_q;

            // Decrement bit counter at the end of a full SCK cycle
            if (~sck_phase_q) begin // On falling edge of internal phase clock
              bit_cnt_d = bit_cnt_q - 1;
              if (bit_cnt_q == 1) begin // If this was the last bit...
                spi_state_d = S_IDLE;   // ...return to idle
              end
            end
          end else begin
            sck_div_cnt_d = sck_div_cnt_q + 1;
          end
        end
      endcase
    end
  end

  // Registered logic (all flip-flops)
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      req_latch_q <= 1'b0;
      we_latch_q <= 1'b0;
      addr_offset_latch_q <= '0;
      id_latch_q <= '0;
      ctrl_reg_q <= '0;
      data_tx_reg_q <= '0;
      clk_div_q <= 8'h01;
      spi_state_q <= S_IDLE;
      mosi_shifter_q <= '0;
      sck_phase_q <= 1'b0;
      sck_div_cnt_q <= '0;
      bit_cnt_q <= '0;
    end else begin
      // OBI Handshake
      req_latch_q <= req_i && gnt_o;
      if (req_i && gnt_o) begin
        we_latch_q <= we_i;
        addr_offset_latch_q <= addr_i[11:0];
        id_latch_q <= aid_i;
      end

      // FSM state register
      spi_state_q <= spi_state_d;

      // FSM counters and shifters
      sck_phase_q <= sck_phase_d;
      sck_div_cnt_q <= sck_div_cnt_d;
      bit_cnt_q <= bit_cnt_d;
      mosi_shifter_q <= mosi_shifter_d;

      // On entering the RUN state, load the shifters and counters
      if (spi_state_q == S_IDLE && spi_state_d == S_RUN) begin
        mosi_shifter_q <= data_tx_reg_q;
        bit_cnt_q <= SPI_DATA_BITS;
        sck_div_cnt_q <= '0;
        sck_phase_q <= 1'b0;
      end
      
      // Shift data on the appropriate edge (non-sampling edge)
      if (spi_state_q == S_RUN) begin
        if (sck_phase_q == ctrl_reg_q[CTRL_CPHA_BIT]) begin
            mosi_shifter_q <= {mosi_shifter_q[SPI_DATA_BITS-2:0], 1'b0};
        end
      end

      // Handle register writes from OBI
      if (req_i && we_i && gnt_o) begin
        case (addr_i[11:2])
          (REG_CTRL_OFFSET >> 2):    ctrl_reg_q <= wdata_i[7:0];
          (REG_DATA_TX_OFFSET >> 2): data_tx_reg_q <= wdata_i[SPI_DATA_BITS-1:0];
          (REG_CLK_DIV_OFFSET >> 2): clk_div_q <= wdata_i[7:0];
        endcase
      end else if (spi_state_q == S_IDLE && spi_state_d == S_RUN) begin
          // Auto-clear the start bit once the FSM acknowledges it
          ctrl_reg_q[CTRL_START_XFER_BIT] <= 1'b0;
      end
    end
  end

  // OBI Response logic
  assign rid_o = id_latch_q;
  always_comb begin
    logic is_valid_addr_latch;
    is_valid_addr_latch = (addr_offset_latch_q == REG_CTRL_OFFSET) ||
                          (addr_offset_latch_q == REG_STATUS_OFFSET) ||
                          (addr_offset_latch_q == REG_DATA_TX_OFFSET) ||
                          (addr_offset_latch_q == REG_CLK_DIV_OFFSET);
    
    err_o = req_latch_q && ((we_latch_q && addr_offset_latch_q == REG_STATUS_OFFSET) || !is_valid_addr_latch);
    
    rdata_o = 32'h0;
    if (req_latch_q && !we_latch_q && !err_o) begin
      case (addr_offset_latch_q)
        REG_CTRL_OFFSET:    rdata_o = {24'h0, ctrl_reg_q};
        REG_STATUS_OFFSET:  rdata_o = {31'h0, status_busy_q};
        REG_DATA_TX_OFFSET: rdata_o = {24'h0, data_tx_reg_q};
        REG_CLK_DIV_OFFSET: rdata_o = {24'h0, clk_div_q};
        default:;
      endcase
    end
  end

endmodule
