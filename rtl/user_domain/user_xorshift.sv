`timescale 1ns/1ps
import croc_pkg::*; // For SbrObiCfg type definition

module xorshift_logic #(
  parameter int unsigned PRNG_WIDTH = 32
) (
  input  logic [PRNG_WIDTH-1:0] seed_i,   // Input seed
  output logic [PRNG_WIDTH-1:0] random_o  // Pseudo-random output
);

  localparam int SHIFT_A = 13, SHIFT_B = 17, SHIFT_C = 5;
  logic [PRNG_WIDTH-1:0] t1, t2;
  assign t1 = seed_i ^ (seed_i << SHIFT_A);
  assign t2 = t1 ^ (t1 >> SHIFT_B);
  assign random_o = t2 ^ (t2 << SHIFT_C);

endmodule

module user_xorshift #(
  parameter int ADDR_WIDTH_OBI  = 32,
  parameter int DATA_WIDTH_OBI  = 32,
  parameter int ID_WIDTH_OBI    = SbrObiCfg.IdWidth
) (
  input  logic        clk_i,
  input  logic        rst_ni,

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
  output logic        err_o
);
  
  logic [11:0] addr_offset_q;

  logic [31:0] seed_val;
  logic [31:0] random_word;

  assign seed_val = 32'hDEADBEEF + {addr_offset_q[11:2], 2'b00};

  xorshift_logic i_xorshift_logic (
    .seed_i(seed_val),
    .random_o(random_word)
  );

  // --- OBI Logic ---
  assign gnt_o = req_i;

  logic       req_latch_q;
  logic       we_latch_q;
  logic [ID_WIDTH_OBI-1:0] id_latch_q;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      req_latch_q <= 1'b0;
      we_latch_q <= 1'b0;
      addr_offset_q <= '0;
      id_latch_q <= '0;
    end else begin
      if (req_i && gnt_o) begin
        req_latch_q <= 1'b1;
        we_latch_q <= we_i;
        addr_offset_q <= addr_i[11:0];
        id_latch_q <= aid_i;
      end else begin
        req_latch_q <= 1'b0;
      end
    end
  end
  
 
  assign rdata_o = (req_latch_q && !we_latch_q) ? random_word : 32'h0;

  assign rvalid_o = req_latch_q;
  assign rid_o    = id_latch_q;
  assign err_o    = req_latch_q && we_latch_q; // Error on any write attempt.

endmodule
