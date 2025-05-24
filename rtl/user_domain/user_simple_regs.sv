`timescale 1ns/1ps
import croc_pkg::*; // For OBI type definitions like SbrObiCfg if not fully qualified

module user_simple_regs #(
  parameter int DATA_WIDTH = 32,
  parameter int ADDR_WIDTH = 32,
  // Parameterize ID width based on SbrObiCfg if available, or use a fixed value.
  // For simplicity here, let's assume a known ID width or get it from an imported SbrObiCfg.
  parameter int ID_WIDTH   = SbrObiCfg.IdWidth // Assumes SbrObiCfg is accessible via croc_pkg import
) (
  input  logic            clk_i,
  input  logic            rst_ni,

  // OBI Slave Interface signals
  input  logic            req_i,    // Request from master
  input  logic            we_i,     // Write enable (1 for write, 0 for read)
  input  logic [3:0]      be_i,     // Byte enable
  input  logic [ADDR_WIDTH-1:0] addr_i,   // Address
  input  logic [DATA_WIDTH-1:0] wdata_i,  // Write data
  input  logic [ID_WIDTH-1:0] aid_i,    // Request ID

  output logic            gnt_o,    // Grant to master
  output logic            rvalid_o, // Response valid
  output logic [DATA_WIDTH-1:0] rdata_o,  // Read data
  output logic [ID_WIDTH-1:0] rid_o,    // Response ID
  output logic            err_o     // Error signal
);

  localparam REG0_OFFSET = 12'h000; // Address offset for the single register (within its 4KB range)

  // Internal register
  logic [DATA_WIDTH-1:0] register0_q;

  // Latched OBI signals (1-cycle delay for response path)
  logic            req_q;         // Latched req_i
  logic            we_q;          // Latched we_i
  logic [11:0]     addr_offset_q; // Latched address offset (lower 12 bits of addr_i)
  logic [ID_WIDTH-1:0] id_q;          // Latched aid_i

  // OBI Grant Logic: Grant in the same cycle as the request.
  assign gnt_o = req_i;

  // Latch request signals on grant
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      req_q         <= 1'b0;
      we_q          <= 1'b0;
      addr_offset_q <= '0;
      id_q          <= '0;
      register0_q   <= '0; // Reset the register content
    end else begin
      if (req_i && gnt_o) begin // Only latch if request is active and granted
        req_q         <= req_i;
        we_q          <= we_i;
        addr_offset_q <= addr_i[11:0]; // Capture the lower bits for local address decoding
        id_q          <= aid_i;        // Capture the request ID

        if (we_i && addr_i[11:0] == REG0_OFFSET) begin
          // Perform write operation based on byte enables
          if (be_i[0]) register0_q[7:0]   <= wdata_i[7:0];
          if (be_i[1]) register0_q[15:8]  <= wdata_i[15:8];
          if (be_i[2]) register0_q[23:16] <= wdata_i[23:16];
          if (be_i[3]) register0_q[31:24] <= wdata_i[31:24];
          $display("%t [USER_SIMPLE_REGS] Write to REG0_OFFSET (0x%h). Data: 0x%h", $time, addr_i, wdata_i);
        end
      end else begin
        if (!req_i) begin
            req_q <= 1'b0;
        end
      end
    end
  end

  // OBI Response Logic
  // rvalid_o: Assert rvalid one cycle after a granted request (for both reads and writes).
  assign rvalid_o = req_q;

  // rid_o: The response ID must match the latched request ID.
  assign rid_o = id_q;

  // err_o: For this simple R/W register, a valid write or read to its address (REG0_OFFSET) is not an error.
  // Error if the latched request was for an address other than REG0_OFFSET within its range.
  assign err_o = req_q && (addr_offset_q != REG0_OFFSET);

  // rdata_o: Provide read data if the latched request was a read and address is correct.
  always_comb begin
    rdata_o = '0; // Default read data
    if (req_q && !we_q) begin // If it was a read request (now in response phase)
      if (addr_offset_q == REG0_OFFSET) begin
        rdata_o = register0_q;
      end else begin
        // For an unmapped read address (err_o will be high), rdata is don't care.
        rdata_o = 32'hDEADBEEF;
      end
    end
  end

endmodule
