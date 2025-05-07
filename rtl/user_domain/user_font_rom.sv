// User Font ROM Module
// - Provides OBI slave interface for reading font data.
// - Stores 12x6 font data (95 chars * 12 bytes = 1140 bytes).
// - Initialized from hex file via $readmemh.

`timescale 1ns/1ps

module user_font_rom import croc_pkg::*; import user_pkg::*; #(
  // Parameters defining the ROM characteristics
  parameter int unsigned ROM_SIZE      = 1140, // 95 chars * 12 bytes/char
  parameter int unsigned ROM_ADDR_BITS = $clog2(ROM_SIZE), // Needs 11 bits for 1140 bytes
  parameter string       INIT_FILE     = "font_rom_12x6.hex" // Path to hex file relative to sim dir
) (
  input  logic        clk_i,
  input  logic        rst_ni,

  // OBI Slave Interface (Connected from user_domain demux port UserFontRom)
  input  sbr_obi_req_t obi_req_i,
  output sbr_obi_rsp_t obi_rsp_o
);

  //-------------------------------------------------
  // Parameters & Local Types
  //-------------------------------------------------
  // Use lower 12 bits of address for offset within the 4KB peripheral range
  localparam int ADDR_WIDTH = 12;
  localparam int DATA_WIDTH = SbrObiCfg.DataWidth; // Should be 32

  //-------------------------------------------------
  // ROM Implementation
  //-------------------------------------------------
  // Declare the ROM array based on parameters
  logic [7:0] rom_data [0:ROM_SIZE-1];

  // Initialize ROM content during simulation/synthesis elaboration
  initial begin
    // Check if INIT_FILE parameter is provided
    if (INIT_FILE != "") begin
      // Display message indicating initialization attempt
      $display("Initializing Font ROM (size %0d bytes) from %s", ROM_SIZE, INIT_FILE);
      // Use $readmemh system task to load hexadecimal data from the file
      // The file path is relative to where the simulation is run or where synthesis tools look.
      $readmemh(INIT_FILE, rom_data);
    end else begin
      // Warning if no initialization file is specified
      $display("Font ROM: No INIT_FILE specified, ROM will contain Xs.");
      // Optionally initialize to zeros or a pattern if no file is given
      // for (int i = 0; i < ROM_SIZE; i++) begin
      //   rom_data[i] = 8'h00;
      // end
    end
  end

  //-------------------------------------------------
  // Internal Registers and Wires
  //-------------------------------------------------
  logic rvalid_q;                  // Registered rvalid signal
  logic [DATA_WIDTH-1:0] rdata_q;  // Registered rdata signal
  logic read_req_accepted;         // Flag indicating a read was granted last cycle
  logic [ADDR_WIDTH-1:0] addr_offset; // Lower address bits (offset)
  logic read_addr_valid;           // Is the requested offset within ROM bounds?
  logic [ROM_ADDR_BITS-1:0] rom_addr;// Address used to index the ROM array

  //-------------------------------------------------
  // OBI Slave Logic
  //-------------------------------------------------
  logic read_req; // Is the current OBI request a read?

  // Decode request signals
  assign addr_offset = obi_req_i.a.addr[ADDR_WIDTH-1:0]; // Extract offset from full address
  assign read_req    = obi_req_i.req && !obi_req_i.a.we; // Check for active read request

  // Check if the requested address offset is within the valid ROM range
  assign rom_addr        = addr_offset[ROM_ADDR_BITS-1:0]; // Use relevant bits for ROM index
  assign read_addr_valid = (addr_offset < ROM_SIZE);       // Check bounds

  // Grant Logic: Grant only valid read requests within the ROM address range
  assign obi_rsp_o.gnt = read_req && read_addr_valid;

  // Read Data Logic (Combinational Mux)
  // Select the byte from ROM based on the address offset.
  logic [7:0] rom_byte_data;
  assign rom_byte_data = read_addr_valid ? rom_data[rom_addr] : 8'hXX; // Read ROM or return X if invalid

  // Sequential Logic (Register Updates and OBI Read Path)
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      // Reset registers
      rvalid_q          <= 1'b0;
      rdata_q           <= '0;
      read_req_accepted <= 1'b0;
    end else begin
      // Standard OBI Read Path Logic:
      // 1. Latch if a valid read request was granted THIS cycle
      read_req_accepted <= read_req && obi_rsp_o.gnt;

      // 2. Assert rvalid_q on the cycle AFTER the read request was accepted
      rvalid_q <= read_req_accepted;

      // 3. Latch the read data when the request is accepted THIS cycle,
      //    so it's ready when rvalid_q goes high NEXT cycle.
      if (read_req_accepted) begin
        // Place the 8-bit ROM data into the lower byte of the 32-bit OBI data bus
        rdata_q <= {{(DATA_WIDTH-8){1'b0}}, rom_byte_data};
      end else if (!rvalid_q) begin // If rvalid is going low or staying low...
        rdata_q <= '0; // Clear read data register (optional, helps debugging)
      end
      // Else: rdata_q holds its value while rvalid_q is high (for multi-cycle valid)
    end
  end

  // Drive OBI Response Outputs
  assign obi_rsp_o.rvalid = rvalid_q;
  assign obi_rsp_o.r.rdata = rdata_q;
  assign obi_rsp_o.r.rid   = obi_req_i.a.aid; // Pass ID through
  // Signal an OBI error if a read request is made to an address outside ROM bounds
  assign obi_rsp_o.r.err   = read_req && !read_addr_valid;

endmodule  /*

1.  **Parameters:** Updated `ROM_SIZE`, `ROM_ADDR_BITS`, and `INIT_FILE` for the 12x6 font.
2.  **`$readmemh`:** Loads the `font_rom_12x6.hex` file into the `rom_data` array.
3.  **Address Decoding:** Extracts the lower address bits (`addr_offset`) and checks if it's within the `ROM_SIZE`.
4.  **Grant:** Only grants valid read requests within the ROM range.
5.  **Read Data:** Reads the 8-bit byte from `rom_data` using the lower address bits as the index and places it in the lower byte of the 32-bit `rdata_q`.
6.  **Read Path:** Uses the standard OBI read path logic (`read_req_accepted`, `rvalid_q`, `rdata_q`) to ensure correct timing.
7.  **Error Signal:** Asserts `obi_rsp_o.r.err` if an out-of-bounds read is attempted.

 add to  `Bender.yml`!

*/