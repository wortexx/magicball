`timescale 1ns/1ps
import croc_pkg::*; // For SbrObiCfg

module xorshift#(
  parameter int unsigned PRNG_WIDTH = 32,
  parameter int ADDR_WIDTH_OBI  = 32,
  parameter int DATA_WIDTH_OBI  = 32,
  parameter int ID_WIDTH_OBI    = SbrObiCfg.IdWidth
) (
  input  logic        clk_i,
  input  logic        rst_ni,

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

  output logic [PRNG_WIDTH-1:0] current_prn_o
);

  localparam logic [1:0] REG_CTRL_OFFSET  = 2'h0; // Write to trigger
  localparam logic [1:0] REG_RDATA_OFFSET = 2'h1; // Read to get PRN

  // Internal state register and next-state logic for the PRNG
  logic [PRNG_WIDTH-1:0] prng_state_q;
  logic [PRNG_WIDTH-1:0] prng_state_d;

  localparam [31:0] PRNG_SEED = 32'hDEADBEEF; // Initial seed value
  localparam int SHIFT_A = 13;
  localparam int SHIFT_B = 17;
  localparam int SHIFT_C = 5;

  logic [PRNG_WIDTH-1:0] t1, t2;
  assign t1 = prng_state_q ^ (prng_state_q << SHIFT_A);
  assign t2 = t1 ^ (t1 >> SHIFT_B);
  assign prng_state_d = t2 ^ (t2 << SHIFT_C);

  assign current_prn_o = prng_state_q;
  assign gnt_o = req_i;

  // This block now ONLY handles updating the PRNG state on a write.
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      prng_state_q <= PRNG_SEED; // Default seed on reset
    end else if (gnt_o && req_i && we_i) begin
      // If the write is to any address other than the read-only data register...
      if (addr_i[3:2] != REG_RDATA_OFFSET) begin
        // If write is to the specific "trigger" address...
        if (addr_i[3:2] == REG_CTRL_OFFSET) begin
          prng_state_q <= prng_state_d; // ...then generate the next number.
        end else begin
          // ...otherwise, use the address bus as the new seed.
          prng_state_q <= {20'h0, addr_i[11:0]};
        end
      end
    end
  end

  // -- OBI Response Handling --
  // This section ensures a response is ALWAYS sent for every granted transaction.

  logic        req_latch_q;
  logic        we_latch_q;
  logic [1:0]  addr_offset_latch_q;
  logic [ID_WIDTH_OBI-1:0] id_latch_q;

  // Latch the request details so we can respond on the next cycle.
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      req_latch_q         <= 1'b0;
      we_latch_q          <= 1'b0;
      addr_offset_latch_q <= '0;
      id_latch_q          <= '0;
    end else begin
      if (req_i && gnt_o) begin
        req_latch_q         <= 1'b1; // Latch that a request is active
        we_latch_q          <= we_i;
        addr_offset_latch_q <= addr_i[3:2];
        id_latch_q          <= aid_i;
      end else begin
        req_latch_q <= 1'b0; // Clear the latch otherwise
      end
    end
  end

  // Drive the response signals based on the latched information.
  // rvalid is asserted for one cycle for every granted request.
  assign rvalid_o = req_latch_q;
  assign rid_o    = id_latch_q;

  // Logic for read data response
  always_comb begin
    rdata_o = 32'h0;
    if (req_latch_q && !we_latch_q && (addr_offset_latch_q == REG_RDATA_OFFSET)) begin
      rdata_o = prng_state_q;
    end
  end

  // Logic for error response
  logic is_valid_access;
  assign is_valid_access = (we_latch_q && (addr_offset_latch_q != REG_RDATA_OFFSET)) || // Valid write is to any addr except RDATA
                           (!we_latch_q && (addr_offset_latch_q == REG_RDATA_OFFSET));   // Valid read is only from RDATA

  assign err_o = req_latch_q && !is_valid_access;

endmodule