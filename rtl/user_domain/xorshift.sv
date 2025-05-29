`timescale 1ns/1ps
import croc_pkg::*;

module xorshift#(
  parameter int unsigned PRNG_WIDTH = 32
) (
  input  logic        clk_i,
  input  logic        rst_ni,

  // OBI Slave Interface
  input  logic        req_i,
  input  logic        we_i,
  input  logic [3:0]  be_i,
  input  logic [31:0] addr_i,
  input  logic [31:0] wdata_i,
  input  logic [SbrObiCfg.IdWidth-1:0] aid_i,

  output logic        gnt_o,
  output logic        rvalid_o,
  output logic [31:0] rdata_o,
  output logic [SbrObiCfg.IdWidth-1:0] rid_o,
  output logic        err_o,

  output logic [PRNG_WIDTH-1:0] current_prn_o
);

  // Simple Register Map: Write to offset 0 to trigger, Read from offset 4 for value.
  localparam logic [1:0] REG_CTRL_OFFSET  = 2'h0;
  localparam logic [1:0] REG_RDATA_OFFSET = 2'h1;

  // PRNG state and logic
  logic [PRNG_WIDTH-1:0] prng_state_q, prng_state_d;
  logic trigger_prng;

  localparam int SHIFT_A = 13, SHIFT_B = 17, SHIFT_C = 5;
  logic [PRNG_WIDTH-1:0] t1, t2;
  assign t1 = prng_state_q ^ (prng_state_q << SHIFT_A);
  assign t2 = t1 ^ (t1 >> SHIFT_B);
  assign prng_state_d = t2 ^ (t2 << SHIFT_C);
  assign current_prn_o = prng_state_q;

  // A trigger occurs on a valid write to the control register
  assign trigger_prng = req_i && gnt_o && we_i && (addr_i[3:2] == REG_CTRL_OFFSET);

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      prng_state_q <= 32'hDEADBEEF; // Hardcoded seed on reset
    end else if (trigger_prng) begin
      prng_state_q <= prng_state_d;
    end
  end

  // --- OBI Interface Logic ---
  assign gnt_o = req_i;

  logic req_latch_q, we_latch_q;
  logic [1:0] addr_offset_latch_q;
  logic [SbrObiCfg.IdWidth-1:0] id_latch_q;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      req_latch_q <= 1'b0; we_latch_q <= 1'b0; addr_offset_latch_q <= '0; id_latch_q <= '0;
    end else begin
      if (req_i && gnt_o) begin
        req_latch_q <= 1'b1; we_latch_q <= we_i; addr_offset_latch_q <= addr_i[3:2]; id_latch_q <= aid_i;
      end else begin
        req_latch_q <= 1'b0;
      end
    end
  end

  assign rvalid_o = req_latch_q;
  assign rid_o = id_latch_q;

  // Determine if the latched access was valid
  logic is_valid_access;
  assign is_valid_access = (we_latch_q && (addr_offset_latch_q == REG_CTRL_OFFSET)) ||
                           (!we_latch_q && (addr_offset_latch_q == REG_RDATA_OFFSET));

  assign err_o = req_latch_q && !is_valid_access;

  // Provide read data
  always_comb begin
    rdata_o = 32'h0;
    if (req_latch_q && !we_latch_q && is_valid_access) begin
      rdata_o = prng_state_q;
    end
  end

endmodule