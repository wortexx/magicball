`timescale 1ns/1ps
import croc_pkg::*; // For sbr_obi_req_t, sbr_obi_rsp_t, SbrObiCfg

module user_simple_regs #(
  parameter int DATA_WIDTH = 32,
  parameter int ADDR_WIDTH = 32 // Full address for simplicity, only lower bits used
) (
  input  logic                  clk_i,
  input  logic                  rst_ni,

  // OBI Slave Interface (using individual signals for clarity here)
  input  logic                  req_i,
  input  logic                  we_i,
  input  logic [3:0]            be_i,       // Assuming 32-bit data, so 4 byte enables
  input  logic [ADDR_WIDTH-1:0] addr_i,
  input  logic [DATA_WIDTH-1:0] wdata_i,
  output logic                  gnt_o,
  output logic                  rvalid_o,
  output logic [DATA_WIDTH-1:0] rdata_o,
  output logic                  err_o       // Error output
  // Assuming aid/rid are handled by the user_domain wrapper
);

  localparam REG0_OFFSET = 12'h000; // Example: A single 32-bit register

  logic [DATA_WIDTH-1:0] register0_q;
  logic                  req_q; // Latched request
  logic                  we_q;  // Latched write enable
  logic [11:0]           addr_offset_q; // Latched address offset

  // OBI Grant Logic: Grant if requested (same cycle)
  assign gnt_o = req_i;

  // Register OBI request signals for response path (1-cycle latency)
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      req_q         <= 1'b0;
      we_q          <= 1'b0;
      addr_offset_q <= '0;
      register0_q   <= '0;
    end else begin
      if (req_i && gnt_o) begin // Only latch if request is active and granted
        req_q         <= req_i; // req_q will be high in the cycle after req_i was high and granted
        we_q          <= we_i;
        addr_offset_q <= addr_i[11:0]; // Latch relevant part of address
        if (we_i && addr_i[11:0] == REG0_OFFSET) begin
          // Handle byte enables for write
          if (be_i[0]) register0_q[7:0]   <= wdata_i[7:0];
          if (be_i[1]) register0_q[15:8]  <= wdata_i[15:8];
          if (be_i[2]) register0_q[23:16] <= wdata_i[23:16];
          if (be_i[3]) register0_q[31:24] <= wdata_i[31:24];
          $display("%t [SIMPLE_REGS_RVALID_ALL_TX] Write to REG0_OFFSET. Data: 0x%h", $time, wdata_i);
        end
      end else begin
        // If no new granted request, or if req_i is deasserted, req_q will be deasserted on the next cycle.
        // This ensures req_q is only active for one cycle reflecting the latched request, unless
        // req_i remains asserted and granted.
        if (!req_i) begin
             req_q <= 1'b0;
        end
        // If req_i is high but not granted (should not happen with gnt_o = req_i), req_q holds.
        // If req_i was asserted and granted, and then req_i is deasserted,
        // req_q will be high for one cycle (the response cycle) and then go low.
      end
    end
  end

  // OBI Response
  // rvalid_o: Assert rvalid one cycle after a granted request (for both reads and writes),
  //           mimicking lab examples like user_rom.sv and user_setbitacc.sv.
  assign rvalid_o = req_q;

  // err_o: No error for valid accesses to this simple R/W peripheral's register.
  // A write to REG0_OFFSET is a valid operation, not an error.
  assign err_o = 1'b0;

  // rdata_o: Provide read data if the latched request was a read.
  always_comb begin
    rdata_o = '0; // Default
    if (req_q && !we_q) begin // If it was a read request (now in response phase)
      if (addr_offset_q == REG0_OFFSET) begin
        rdata_o = register0_q;
      end else begin
        // For a more complete peripheral, you might assert err_o here for unmapped reads.
        // For this simple single-register example, we return a fixed pattern.
        rdata_o = 32'hDEADBEEF;
      end
    end
    // For writes (req_q && we_q), rdata_o remains '0 (don't care).
  end

endmodule