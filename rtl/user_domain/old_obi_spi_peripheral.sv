`timescale 1ns/1ps

module obi_spi_peripheral (
  input  logic        clk_i,
  input  logic        rst_ni,

  // OBI interface
  input  logic        req_i,
  input  logic        we_i,
  input  logic [31:0] addr_i,
  input  logic [31:0] wdata_i,
  output logic        gnt_o,
  output logic        rvalid_o,
  output logic [31:0] rdata_o,

  // SPI output
  output logic        sck_o,
  output logic        mosi_o,
  output logic        cs_o
);

  localparam int SPI_CTRL_ADDR   = 32'h00000000;
  localparam int SPI_TX_ADDR     = 32'h00000004;
  localparam int SPI_STATUS_ADDR = 32'h00000008;

  typedef enum logic [1:0] {
    IDLE, LOAD, SHIFT, COMPLETE
  } state_t;

  logic [7:0]  tx_reg;
  logic [2:0]  bit_cnt_q, bit_cnt_d;
  logic        start_flag;
  logic        busy, done;
  state_t      state_q, state_d;

  assign gnt_o    = req_i;
  assign rvalid_o = (addr_i == SPI_STATUS_ADDR) && req_i && !we_i;
  assign rdata_o  = {30'b0, done, busy};

  // FSM Sequential Logic
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      tx_reg     <= 8'd0;
      start_flag <= 1'b0;
      bit_cnt_q  <= 3'd0;
      state_q    <= IDLE;
    end else begin
      state_q    <= state_d;
      bit_cnt_q  <= bit_cnt_d;

      if (req_i && we_i) begin
        case (addr_i)
          SPI_TX_ADDR:   tx_reg     <= wdata_i[7:0];
          SPI_CTRL_ADDR: start_flag <= 1'b1;
        endcase
      end else if (state_q == COMPLETE) begin
        start_flag <= 1'b0;
      end
    end
  end

  // FSM Combinational Logic
  always_comb begin
    state_d   = state_q;
    bit_cnt_d = bit_cnt_q;
    busy      = 1'b0;
    done      = 1'b0;
    cs_o      = 1'b1;
    sck_o     = 1'b0;
    mosi_o    = tx_reg[7 - bit_cnt_q];

    case (state_q)
      IDLE: begin
        if (start_flag)
          state_d = LOAD;
      end
      LOAD: begin
        bit_cnt_d = 3'd7;
        state_d   = SHIFT;
      end
      SHIFT: begin
        busy    = 1'b1;
        cs_o    = 1'b0;
        sck_o   = clk_i; // Simulate SPI SCK as system clock toggle
        if (bit_cnt_q == 0)
          state_d = COMPLETE;
        else
          bit_cnt_d = bit_cnt_q - 1;
      end
      COMPLETE: begin
        done    = 1'b1;
        cs_o    = 1'b1;
        state_d = IDLE;
      end
    endcase
  end
endmodule