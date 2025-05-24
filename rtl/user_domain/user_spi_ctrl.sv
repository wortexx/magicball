`timescale 1ns/1ps
import croc_pkg::*; // For SbrObiCfg and OBI types (sbr_obi_req_t, sbr_obi_rsp_t)

module user_spi_ctrl #(
  parameter int ADDR_LOCAL_WIDTH = 12
) (
  input  logic        clk_i,
  input  logic        rst_ni,

  input  sbr_obi_req_t obi_req_i,
  output sbr_obi_rsp_t obi_rsp_o,

  output logic spi_cs1_no,
  output logic spi_cs2_no,
  output logic spi_dc_o
);

  localparam logic [ADDR_LOCAL_WIDTH-1:0] GPIO_CTRL_OFFSET = 12'h000;

  localparam int CS1_N_BIT_IN_REG = 0;
  localparam int CS2_N_BIT_IN_REG = 1;
  localparam int DC_BIT_IN_REG    = 2;

  logic cs1_n_q_reg;
  logic cs2_n_q_reg;
  logic dc_q_reg;

  logic        req_latch_q;
  logic        we_latch_q;
  logic [ADDR_LOCAL_WIDTH-1:0] addr_offset_latch_q;
  logic [SbrObiCfg.IdWidth-1:0] id_latch_q;

  logic is_valid_addr;
  assign is_valid_addr = (obi_req_i.a.addr[ADDR_LOCAL_WIDTH-1:0] == GPIO_CTRL_OFFSET);
  assign obi_rsp_o.gnt = obi_req_i.req && is_valid_addr;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      req_latch_q         <= 1'b0;
      we_latch_q          <= 1'b0;
      addr_offset_latch_q <= '0;
      id_latch_q          <= '0;
      cs1_n_q_reg         <= 1'b1;
      cs2_n_q_reg         <= 1'b1;
      dc_q_reg            <= 1'b0;
    end else begin
      if (obi_req_i.req && obi_rsp_o.gnt) begin
        req_latch_q         <= obi_req_i.req;
        we_latch_q          <= obi_req_i.a.we;
        addr_offset_latch_q <= obi_req_i.a.addr[ADDR_LOCAL_WIDTH-1:0];
        id_latch_q          <= obi_req_i.a.aid;
      end else if (!obi_req_i.req) begin
        req_latch_q <= 1'b0;
      end

      if (obi_req_i.req && obi_req_i.a.we && obi_rsp_o.gnt) begin
        if (obi_req_i.a.addr[ADDR_LOCAL_WIDTH-1:0] == GPIO_CTRL_OFFSET) begin
          if (obi_req_i.a.be[0]) begin
            cs1_n_q_reg <= obi_req_i.a.wdata[CS1_N_BIT_IN_REG];
            cs2_n_q_reg <= obi_req_i.a.wdata[CS2_N_BIT_IN_REG];
            dc_q_reg    <= obi_req_i.a.wdata[DC_BIT_IN_REG];
            $display("%t [USER_SPI_CTRL] Write to GPIO_CTRL (0x%h). Data LSB: 0x%h -> CS1_N=%b, CS2_N=%b, DC=%b",
                     $time, obi_req_i.a.addr[ADDR_LOCAL_WIDTH-1:0], obi_req_i.a.wdata[7:0],
                     obi_req_i.a.wdata[CS1_N_BIT_IN_REG], obi_req_i.a.wdata[CS2_N_BIT_IN_REG], obi_req_i.a.wdata[DC_BIT_IN_REG]);
          end
        end
      end
    end
  end

  assign obi_rsp_o.rvalid = req_latch_q;
  assign obi_rsp_o.r.rid  = id_latch_q;
  assign obi_rsp_o.r.err  = req_latch_q && (addr_offset_latch_q != GPIO_CTRL_OFFSET);

  always_comb begin
    obi_rsp_o.r.rdata = 32'h0;
    if (req_latch_q && !we_latch_q && !obi_rsp_o.r.err) begin
      if (addr_offset_latch_q == GPIO_CTRL_OFFSET) begin
        obi_rsp_o.r.rdata = {{(SbrObiCfg.DataWidth-3){1'b0}}, dc_q_reg, cs2_n_q_reg, cs1_n_q_reg};
      end
    end
    obi_rsp_o.r.r_optional = 1'b0;
  end

  assign spi_cs1_no = cs1_n_q_reg;
  assign spi_cs2_no = cs2_n_q_reg;
  assign spi_dc_o   = dc_q_reg;

endmodule
