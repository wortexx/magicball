`timescale 1ns/1ps

import croc_pkg::*; // For sbr_obi_req_t, sbr_obi_rsp_t, SbrObiCfg
import user_pkg::*; // For potential user params (though not strictly needed here if ROM_SIZE etc. are params)

module user_font_rom #(
  parameter int unsigned ROM_SIZE      = 1140, // 95 chars * 12 bytes/char
  parameter int unsigned ROM_ADDR_BITS = $clog2(ROM_SIZE), // 11 bits for byte addressing
  parameter string       INIT_FILE     = "rtl/user_domain/font_rom_12x6.hex" // Default path
) (
  input  logic        clk_i,
  input  logic        rst_ni,
  input  sbr_obi_req_t obi_req_i,
  output sbr_obi_rsp_t obi_rsp_o
);

  localparam int ADDR_WIDTH = 12; // Width of the address offset to consider from OBI addr (e.g., for a 4KB window)
  localparam int DATA_WIDTH = SbrObiCfg.DataWidth; // OBI data width (e.g., 32)

  logic [7:0] rom_data [0:ROM_SIZE-1]; // Byte-addressable ROM

  initial begin
    if (INIT_FILE != "") begin
      $display("%t [FONT_ROM] Initializing Font ROM (size %0d bytes) from %s", $time, ROM_SIZE, INIT_FILE);
      begin : check_file_exists_label // Optional label for begin block
          integer file_handle;
          file_handle = $fopen(INIT_FILE, "r");
          if (file_handle == 0) begin
              $warning("[FONT_ROM_WARN] $readmemh file not found: %s. ROM will be uninitialized.", INIT_FILE);
          end else begin
              $fclose(file_handle);
              $readmemh(INIT_FILE, rom_data);
          end
      end
    end else begin
      $display("%t [FONT_ROM] No INIT_FILE specified. ROM will contain Xs.", $time);
    end
  end

  logic rvalid_q;
  logic [DATA_WIDTH-1:0] rdata_q;
  logic read_req_accepted;       // Registered: was current read request accepted?
  logic [ADDR_WIDTH-1:0] addr_offset; // Lower bits of OBI address, used for byte addressing
  logic read_addr_valid;         // Is the addr_offset within ROM bounds?
  logic read_req;                // Combinational: is current OBI op a read?

  assign addr_offset = obi_req_i.a.addr[ADDR_WIDTH-1:0]; // Using ADDR_WIDTH for offset
  assign read_req    = obi_req_i.req && !obi_req_i.a.we;

  // ROM is byte addressed. addr_offset is the byte address.
  assign read_addr_valid = (addr_offset < ROM_SIZE);
  assign obi_rsp_o.gnt = read_req && read_addr_valid; // Grant only valid read requests

  logic [7:0] rom_byte_data_comb; // Combinational read from memory
  // Read the byte directly using addr_offset, as rom_data is byte-addressed
  assign rom_byte_data_comb = read_addr_valid ? rom_data[addr_offset] : 8'hXX;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      rvalid_q          <= 1'b0;
      rdata_q           <= '0;
      read_req_accepted <= 1'b0;
    end else begin
      read_req_accepted <= read_req && obi_rsp_o.gnt; // Latches if current req is a read and is granted
      rvalid_q <= read_req_accepted;                 // rvalid one cycle after accepted

      if (read_req_accepted) begin
        // Place the single byte read into the LSBs of the 32-bit rdata_q.
        rdata_q <= {{(DATA_WIDTH-8){1'b0}}, rom_byte_data_comb};
        $display("%t [FONT_ROM_FF] read_req_accepted=1. Addr=0x%h (Offset=0x%h). Byte read=0x%h. rdata_q set to 0x%h. rvalid_q becomes 1.",
                 $time, obi_req_i.a.addr, addr_offset, rom_byte_data_comb, rdata_q);
      end else if (!rvalid_q) begin // If rvalid_q is already low and no new grant
        rdata_q <= '0;
      end
      // Else: rdata_q holds its value while rvalid_q is high (for multi-cycle valid if needed by master)
    end
  end

  assign obi_rsp_o.rvalid = rvalid_q;
  assign obi_rsp_o.r.rdata = rdata_q;
  assign obi_rsp_o.r.rid   = obi_req_i.a.aid; // Echo request ID
  // Error if a write is attempted, or if a read is to an out-of-bounds address
  assign obi_rsp_o.r.err   = (obi_req_i.req && obi_req_i.a.we) || (read_req && !read_addr_valid);

endmodule