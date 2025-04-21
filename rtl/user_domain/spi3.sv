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

  // SPI Master (3-wire)
  output logic        sck_o,
  output logic        mosi_o,
  output logic        cs_o
);

  // Parameters
  localparam int DATA_WIDTH      = 32;
  localparam int SPI_DATA_BITS   = 8;
  localparam int SPI_CLK_DIVIDER = 10; // Default: 5 MHz from 100 MHz, 2.5 MHz from 50 MHz

  // Address map
  localparam logic [31:0] SPI_CTRL_ADDR   = 32'h00000000;
  localparam logic [31:0] SPI_TX_ADDR     = 32'h00000004;
  localparam logic [31:0] SPI_STATUS_ADDR = 32'h00000008;

    // FSM states
  typedef enum logic [1:0] {
    IDLE,
    LOAD,
    SHIFT,
    COMPLETE
  } state_t;

  state_t state_q, state_d;

  // SPI registers
  logic [7:0]           tx_data_q, tx_data_d;
  logic [2:0]           bit_cnt_q, bit_cnt_d;
  logic [$clog2(SPI_CLK_DIVIDER):0] clk_div_q, clk_div_d;
  logic                 sck_int_q, sck_int_d;
  logic                 cs_q, cs_d;
  logic                 shift_en_q, shift_en_d;

  // OBI control
  logic start_flag_q, start_flag_d;
  logic [DATA_WIDTH-1:0] rdata_q, rdata_d;
  logic                  rvalid_q, rvalid_d;

    // SPI Outputs
  assign cs_o   = cs_q;
  assign sck_o  = sck_int_q;
  assign mosi_o = tx_data_q[7]; // always show MSB
  assign rvalid_o = rvalid_q;
  assign rdata_o  = rdata_q;
  assign gnt_o = req_i && (addr_i == SPI_CTRL_ADDR || addr_i == SPI_TX_ADDR || addr_i == SPI_STATUS_ADDR);

    always_comb begin
    // Defaults
    state_d      = state_q;
    tx_data_d    = tx_data_q;
    bit_cnt_d    = bit_cnt_q;
    clk_div_d    = clk_div_q;
    sck_int_d    = sck_int_q;
    cs_d         = cs_q;
    shift_en_d   = 1'b0;
    start_flag_d = start_flag_q;

    unique case (state_q)
      IDLE: begin
        cs_d = 1'b1;
        sck_int_d = 1'b0;
        if (start_flag_q) begin
          state_d      = LOAD;
          start_flag_d = 1'b0;
        end
      end

      LOAD: begin
        cs_d       = 1'b0;
        clk_div_d  = '0;
        bit_cnt_d  = 3'd7;
        sck_int_d  = 1'b0;
        state_d    = SHIFT;
      end

      SHIFT: begin
        cs_d = 1'b0;
        clk_div_d = clk_div_q + 1;

        if (clk_div_q == SPI_CLK_DIVIDER - 1) begin
          sck_int_d = ~sck_int_q;

          if (sck_int_q) begin // falling edge: next bit
            shift_en_d = 1'b1;
          end
        end

        if (bit_cnt_q == 3'd0 && shift_en_q) begin
          state_d = COMPLETE;
        end
      end

      COMPLETE: begin
        cs_d    = 1'b1;
        sck_int_d = 1'b0;
        state_d = IDLE;
      end

      default: begin
        state_d = IDLE;
      end
    endcase
  end

    always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      state_q      <= IDLE;
      tx_data_q    <= 8'h00;
      bit_cnt_q    <= 3'd0;
      clk_div_q    <= '0;
      sck_int_q    <= 1'b0;
      cs_q         <= 1'b1;
      shift_en_q   <= 1'b0;
      start_flag_q <= 1'b0;
      rvalid_q     <= 1'b0;
      rdata_q      <= 32'h0;
    end else begin
      state_q    <= state_d;
      tx_data_q  <= tx_data_d;
      bit_cnt_q  <= bit_cnt_d;
      clk_div_q  <= clk_div_d;
      sck_int_q  <= sck_int_d;
      cs_q       <= cs_d;
      shift_en_q <= shift_en_d;
      start_flag_q <= start_flag_d;

      if (shift_en_q) begin
        tx_data_q <= {tx_data_q[6:0], 1'b0}; // Shift left
        bit_cnt_q <= bit_cnt_q - 1;
      end

      // rvalid toggles for status reads
      if (req_i && !we_i && addr_i == SPI_STATUS_ADDR) begin
        rvalid_q <= 1'b1;
        rdata_q  <= {30'b0, (state_q == COMPLETE), (state_q != IDLE)};
      end else begin
        rvalid_q <= 1'b0;
      end

      // Handle write transactions
      if (req_i && we_i && gnt_o) begin
        unique case (addr_i)
          SPI_TX_ADDR: begin
            if (be_i[0]) tx_data_q <= wdata_i[7:0];
          end
          SPI_CTRL_ADDR: begin
            start_flag_q <= 1'b1;
          end
        endcase
      end
    end
  end