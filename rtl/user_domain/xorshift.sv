`timescale 1ns/1ps

module xorshift #(
    parameter int unsigned WIDTH = 32,
    parameter int unsigned SEED  = 32'hDEADBEEF // Default seed
) (
    input  logic        clk_i,
    input  logic        rst_ni, // Using active low reset
    input  logic        en_i,   // Enable for one cycle to generate next number
    output logic [WIDTH-1:0] rand_o
);
    logic [WIDTH-1:0] state_q, state_d;

    // Xorshift+ variant shifts (common for 32-bit)
    localparam int SHIFT_A = 13;
    localparam int SHIFT_B = 17;
    localparam int SHIFT_C = 5;

    // Combinational logic for next state calculation
    // state_d = state_q; // Default assignment
    // state_d = state_d ^ (state_d << SHIFT_A);
    // state_d = state_d ^ (state_d >> SHIFT_B);
    // state_d = state_d ^ (state_d << SHIFT_C);
    // More compact way to write the Xorshift+ variant:
    logic [WIDTH-1:0] t1, t2;
    assign t1 = state_q ^ (state_q << SHIFT_A);
    assign t2 = t1 ^ (t1 >> SHIFT_B);
    assign state_d = t2 ^ (t2 << SHIFT_C);


    // Output the current state
    assign rand_o = state_q;

    // Sequential logic for state update
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            state_q <= SEED; // Initialize state on reset
        end else if (en_i) begin
            state_q <= state_d; // Update state only when enabled
        end
        // Else: state_q holds its value if not enabled
    end
endmodule : xorshift