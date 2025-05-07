`timescale 1ns/1ps

module user_spi_ctrl import croc_pkg::*; import user_pkg::*; #(
  parameter int unsigned PRNG_SEED = 32'hCAFEBABE
) (
  input  logic        clk_i,
  input  logic        rst_ni,

  input  sbr_obi_req_t obi_req_i,
  output sbr_obi_rsp_t obi_rsp_o,

  output logic        spi_cs1_no,
  output logic        spi_cs2_no,
  output logic        spi_dc_o
);

  localparam int ADDR_WIDTH = 12;
  localparam int DATA_WIDTH = SbrObiCfg.DataWidth;

  localparam logic [ADDR_WIDTH-1:0] GPIO_CTRL_OFFSET = 12'h000;
  localparam logic [ADDR_WIDTH-1:0] PRNG_CTRL_OFFSET = 12'h004;
  localparam logic [ADDR_WIDTH-1:0] PRNG_READ_OFFSET = 12'h008;

  localparam int CS1_N_BIT = 0;
  localparam int CS2_N_BIT = 1;
  localparam int DC_BIT    = 2;
  localparam int PRNG_EN_BIT = 0;

  logic cs1_n_q, cs1_n_d;
  logic cs2_n_q, cs2_n_d;
  logic dc_q, dc_d;
  logic prng_en;
  logic [31:0] prng_out_q;
  logic [31:0] prng_out_w;
  logic rvalid_q;
  logic [DATA_WIDTH-1:0] rdata_q;
  logic read_req_accepted;

  xorshift #(
    .WIDTH(32),
    .SEED (PRNG_SEED)
  ) i_xorshift (
    .clk_i, .rst_ni,
    .en_i    ( prng_en   ),
    .rand_o  ( prng_out_w )
  );

  assign spi_cs1_no = cs1_n_q;
  assign spi_cs2_no = cs2_n_q;
  assign spi_dc_o   = dc_q;

  logic write_req;
  logic read_req;
  logic [ADDR_WIDTH-1:0] addr_offset;
  logic [DATA_WIDTH-1:0] reg_wdata;
  logic [DATA_WIDTH-1:0] reg_rdata;
  logic grant_w, grant_r;

  assign addr_offset = obi_req_i.a.addr[ADDR_WIDTH-1:0];
  assign reg_wdata   = obi_req_i.a.wdata;
  assign write_req   = obi_req_i.req &&  obi_req_i.a.we;
  assign read_req    = obi_req_i.req && !obi_req_i.a.we;

  assign grant_w = write_req &&
                   ((addr_offset == GPIO_CTRL_OFFSET) || (addr_offset == PRNG_CTRL_OFFSET));
  assign grant_r = read_req &&
                   (addr_offset == PRNG_READ_OFFSET);
  assign obi_rsp_o.gnt = grant_w || grant_r;

  assign prng_en = write_req && grant_w && (addr_offset == PRNG_CTRL_OFFSET) && reg_wdata[PRNG_EN_BIT];

  always_comb begin
    cs1_n_d = cs1_n_q;
    cs2_n_d = cs2_n_q;
    dc_d    = dc_q;

    if (write_req && grant_w && addr_offset == GPIO_CTRL_OFFSET) begin
       cs1_n_d = reg_wdata[CS1_N_BIT];
       cs2_n_d = reg_wdata[CS2_N_BIT];
       dc_d    = reg_wdata[DC_BIT];
    end

    reg_rdata = '0;
    if (addr_offset == PRNG_READ_OFFSET) begin
        reg_rdata = prng_out_q;
    end
  end

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      cs1_n_q           <= 1'b1;
      cs2_n_q           <= 1'b1;
      dc_q              <= 1'b0;
      prng_out_q        <= '0;
      rvalid_q          <= 1'b0;
      rdata_q           <= '0;
      read_req_accepted <= 1'b0;
    end else begin
      cs1_n_q <= cs1_n_d;
      cs2_n_q <= cs2_n_d;
      dc_q    <= dc_d;
      prng_out_q <= prng_out_w;

      read_req_accepted <= read_req && grant_r;
      rvalid_q <= read_req_accepted;

      if (read_req_accepted) begin
        rdata_q <= reg_rdata;
      end else if (!rvalid_q) begin
        rdata_q <= '0;
      end
    end
  end

  assign obi_rsp_o.rvalid = rvalid_q;
  assign obi_rsp_o.r.rdata = rdata_q;
  assign obi_rsp_o.r.rid   = obi_req_i.a.aid;
  assign obi_rsp_o.r.err   = (read_req && !grant_r) || (write_req && !grant_w);

endmodule