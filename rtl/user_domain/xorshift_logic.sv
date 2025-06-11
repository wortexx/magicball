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