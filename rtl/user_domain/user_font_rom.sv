`timescale 1ns/1ps

module user_font_rom import croc_pkg::*; import user_pkg::*; #(
  parameter int unsigned ROM_SIZE      = 1140, // 95 chars * 12 bytes/char
  parameter int unsigned ROM_ADDR_BITS = $clog2(ROM_SIZE), // 11 bits
  parameter string       INIT_FILE     = "font_rom_12x6.hex"
) (
  input  logic        clk_i,
  input  logic        rst_ni,
  input  sbr_obi_req_t obi_req_i,
  output sbr_obi_rsp_t obi_rsp_o
);

  localparam int ADDR_WIDTH = 12;
  localparam int DATA_WIDTH = SbrObiCfg.DataWidth;

  logic [7:0] rom_data [0:ROM_SIZE-1];

  initial begin
    if (INIT_FILE != "") begin
      $display("Initializing Font ROM (size %0d bytes) from %s", ROM_SIZE, INIT_FILE);
      $readmemh(INIT_FILE, rom_data);
    end else begin
      $display("Font ROM: No INIT_FILE specified, ROM will contain Xs.");
    end
  end

  logic rvalid_q;
  logic [DATA_WIDTH-1:0] rdata_q;
  logic read_req_accepted;
  logic [ADDR_WIDTH-1:0] addr_offset;
  logic read_addr_valid;
  logic [ROM_ADDR_BITS-1:0] rom_addr;
  logic read_req;

  assign addr_offset = obi_req_i.a.addr[ADDR_WIDTH-1:0];
  assign read_req    = obi_req_i.req && !obi_req_i.a.we;
  assign rom_addr        = addr_offset[ROM_ADDR_BITS-1:0];
  assign read_addr_valid = (addr_offset < ROM_SIZE);
  assign obi_rsp_o.gnt = read_req && read_addr_valid;

  logic [7:0] rom_byte_data;
  assign rom_byte_data = read_addr_valid ? rom_data[rom_addr] : 8'hXX;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      rvalid_q          <= 1'b0;
      rdata_q           <= '0;
      read_req_accepted <= 1'b0;
    end else begin
      read_req_accepted <= read_req && obi_rsp_o.gnt;
      rvalid_q <= read_req_accepted;
      if (read_req_accepted) begin
        rdata_q <= {{(DATA_WIDTH-8){1'b0}}, rom_byte_data};
      end else if (!rvalid_q) begin
        rdata_q <= '0;
      end
    end
  end

  assign obi_rsp_o.rvalid = rvalid_q;
  assign obi_rsp_o.r.rdata = rdata_q;
  assign obi_rsp_o.r.rid   = obi_req_i.a.aid;
  assign obi_rsp_o.r.err   = read_req && !read_addr_valid;

endmodule