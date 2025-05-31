`timescale 1ns/1ps
import croc_pkg::*; // For SbrObiCfg if needed for ID_WIDTH default

module obi_spi_peripheral #(
  parameter int ADDR_WIDTH_OBI  = 32, // OBI Address width
  parameter int DATA_WIDTH_OBI  = 32, // OBI Data width
  parameter int ID_WIDTH_OBI    = SbrObiCfg.IdWidth, // OBI ID width
  parameter int SPI_DATA_BITS   = 8
) (
  input  logic        clk_i,    // System clock
  input  logic        rst_ni,   // Asynchronous reset, active low

  // OBI Slave Interface
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

  // SPI Master Interface (3-Wire: SCK, MOSI - CS & DC are external)
  output logic        sck_o,
  output logic        mosi_o

  
);

  // Register Address Offsets
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

  // Internal Registers
  logic [7:0] ctrl_reg_q, ctrl_reg_d;
  logic       status_busy_q;
  logic [SPI_DATA_BITS-1:0] data_tx_reg_q, data_tx_reg_d;
  logic [7:0] clk_div_reg_q, clk_div_reg_d;

  // OBI Latched Signals
  logic       req_latch_q;
  logic       we_latch_q;
  logic [11:0] addr_offset_latch_q;
  logic [ID_WIDTH_OBI-1:0] id_latch_q;

  // SPI FSM
  typedef enum logic [2:0] { S_IDLE, S_LOAD_SHIFT, S_SHIFT_BIT, S_TRANSFER_DONE } spi_state_e;
  spi_state_e spi_state_q, spi_state_d;

  logic [$clog2(SPI_DATA_BITS):0] bit_count_q, bit_count_d; // Counts bits remaining
  logic [$clog2(200):0] sck_div_counter_q, sck_div_counter_d;
  logic sck_internal_q, sck_internal_d; // Base for SCK generation
  logic [SPI_DATA_BITS-1:0] mosi_shift_reg_q, mosi_shift_reg_d;
  logic spi_clk_phase;

  // OBI Grant Logic
  assign gnt_o = req_i;

  // Combinational logic for next-state (_d) signals
  always_comb begin
    logic is_shift_edge; 

    ctrl_reg_d     = ctrl_reg_q;
    data_tx_reg_d  = data_tx_reg_q;
    clk_div_reg_d  = clk_div_reg_q;

    if (req_i && we_i && gnt_o) begin
      case (addr_i[11:0])
        REG_CTRL_OFFSET:    if (be_i[0]) ctrl_reg_d = wdata_i[7:0];
        REG_DATA_TX_OFFSET: if (be_i[0]) data_tx_reg_d = wdata_i[SPI_DATA_BITS-1:0];
        REG_CLK_DIV_OFFSET: if (be_i[0]) clk_div_reg_d = wdata_i[7:0];
        default:;
      endcase
    end

    spi_state_d       = spi_state_q;
    sck_internal_d    = sck_internal_q;
    sck_div_counter_d = sck_div_counter_q;
    bit_count_d       = bit_count_q;
    mosi_shift_reg_d  = mosi_shift_reg_q;

    sck_o  = ctrl_reg_q[CTRL_CPOL_BIT];
    mosi_o = 1'bz;

    if (ctrl_reg_q[CTRL_ENABLE_BIT]) begin
      case (spi_state_q)
        S_IDLE: begin
          sck_internal_d = 1'b0;
          sck_div_counter_d = '0;
          sck_o = ctrl_reg_q[CTRL_CPOL_BIT];
          if (ctrl_reg_q[CTRL_START_XFER_BIT] && !status_busy_q) begin
            spi_state_d = S_LOAD_SHIFT;
            ctrl_reg_d[CTRL_START_XFER_BIT] = 1'b0;
            //$display("%t [OBI_SPI_FSM] IDLE: Start detected. Clearing START_XFER bit in ctrl_reg_d.", $time);
          end
        end

        S_LOAD_SHIFT: begin
          mosi_shift_reg_d  = data_tx_reg_q;
          bit_count_d       = SPI_DATA_BITS;
          sck_div_counter_d = '0;
          sck_internal_d    = 1'b0;
          spi_state_d       = S_SHIFT_BIT;
          sck_o = ctrl_reg_q[CTRL_CPOL_BIT];
          //$display("%t [OBI_SPI_FSM] LOAD -> SHIFT, tx_data=0x%h", $time, data_tx_reg_q);
        end

        S_SHIFT_BIT: begin
          sck_o = sck_internal_q ^ ctrl_reg_q[CTRL_CPOL_BIT];
          mosi_o = mosi_shift_reg_q[SPI_DATA_BITS-1];

          if (sck_div_counter_q == clk_div_reg_q) begin
            sck_div_counter_d = '0;
            sck_internal_d    = ~sck_internal_q;

            if (ctrl_reg_q[CTRL_CPHA_BIT] == 1'b1) begin
                is_shift_edge = (sck_internal_q == ctrl_reg_q[CTRL_CPOL_BIT]);
            end else begin
                is_shift_edge = (sck_internal_q != ctrl_reg_q[CTRL_CPOL_BIT]);
            end

            if (is_shift_edge) begin
              if (bit_count_q > 0) begin
                mosi_shift_reg_d = {mosi_shift_reg_q[SPI_DATA_BITS-2:0], 1'b0};
                bit_count_d = bit_count_q - 1;
                if ((bit_count_q - 1) == 0) begin 
                  spi_state_d = S_TRANSFER_DONE;
                end
              end else begin 
                spi_state_d = S_TRANSFER_DONE; 
              end
            end
          end else begin
            sck_div_counter_d = sck_div_counter_q + 1;
          end
        end 

        S_TRANSFER_DONE: begin
          sck_o = ctrl_reg_q[CTRL_CPOL_BIT];
          spi_state_d       = S_IDLE;
          //$display("%t [OBI_SPI_FSM] COMPLETE -> IDLE", $time);
        end
        default: begin
          spi_state_d = S_IDLE;
        end
      endcase
    end else begin
      sck_o = 1'bz;
      mosi_o = 1'bz;
      spi_state_d = S_IDLE;
    end
  end 

  // Registered logic
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      req_latch_q         <= 1'b0;
      we_latch_q          <= 1'b0;
      addr_offset_latch_q <= '0;
      id_latch_q          <= '0;
      ctrl_reg_q          <= {4'b0, 1'b1, 1'b1, 1'b0, 1'b0};
      data_tx_reg_q       <= '0;
      clk_div_reg_q       <= 8'h01;
      spi_state_q       <= S_IDLE;
      sck_internal_q    <= 1'b0;
      sck_div_counter_q <= '0;
      bit_count_q       <= '0;
      mosi_shift_reg_q  <= '0;
    end else begin
      if (req_i && gnt_o) begin
        req_latch_q         <= req_i;
        we_latch_q          <= we_i;
        addr_offset_latch_q <= addr_i[11:0];
        id_latch_q          <= aid_i;
      end else if (!req_i) begin
        req_latch_q <= 1'b0;
      end

      ctrl_reg_q    <= ctrl_reg_d;
      data_tx_reg_q <= data_tx_reg_d;
      clk_div_reg_q <= clk_div_reg_d;

      spi_state_q       <= spi_state_d;
      sck_internal_q    <= sck_internal_d;
      sck_div_counter_q <= sck_div_counter_d;
      bit_count_q       <= bit_count_d;
      mosi_shift_reg_q  <= mosi_shift_reg_d;
    end
  end

  // OBI Response Assignments
  assign rvalid_o = req_latch_q;
  assign rid_o    = id_latch_q;

  logic is_ctrl_access_latch;
  logic is_status_access_latch;
  logic is_data_tx_access_latch;
  logic is_clk_div_access_latch;
  logic is_valid_addr_latch;

  assign is_ctrl_access_latch    = (addr_offset_latch_q == REG_CTRL_OFFSET);
  assign is_status_access_latch  = (addr_offset_latch_q == REG_STATUS_OFFSET);
  assign is_data_tx_access_latch = (addr_offset_latch_q == REG_DATA_TX_OFFSET);
  assign is_clk_div_access_latch = (addr_offset_latch_q == REG_CLK_DIV_OFFSET);
  assign is_valid_addr_latch     = is_ctrl_access_latch || is_status_access_latch || is_data_tx_access_latch || is_clk_div_access_latch;
    
  assign status_busy_q = (spi_state_q != S_IDLE);

  assign err_o = req_latch_q && (
                  (we_latch_q && is_status_access_latch) ||
                  !is_valid_addr_latch
                 );

  always_comb begin
    rdata_o = 32'h0;
    if (req_latch_q && !we_latch_q && !err_o) begin
      case (addr_offset_latch_q)
        REG_CTRL_OFFSET:    rdata_o = {24'h0, ctrl_reg_q};
        REG_STATUS_OFFSET:  rdata_o = {31'h0, status_busy_q};
        REG_DATA_TX_OFFSET: rdata_o = {{(32-SPI_DATA_BITS){1'b0}}, data_tx_reg_q};
        REG_CLK_DIV_OFFSET: rdata_o = {24'h0, clk_div_reg_q};
        default: ;
      endcase
    end
  end

  assign spi_clk_phase = (sck_div_counter_q >= clk_div_reg_q);

endmodule
