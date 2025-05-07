module xorshift #(
    parameter int unsigned WIDTH = 32,
    parameter int unsigned SEED  = 32'hDEADBEEF
) (
    input  logic        clk_i,
    input  logic        rst_ni, // Using active low reset
    input  logic        en_i,
    output logic [WIDTH-1:0] rand_o
);

    logic [WIDTH-1:0] state_q, state_d;

    // Use Xorshift+ variant for better statistical properties
    // Adjust shifts based on WIDTH if needed
    // These shifts are common for 32-bit
    localparam int SHIFT_A = 13;
    localparam int SHIFT_B = 17;
    localparam int SHIFT_C = 5;

    assign state_d = state_q ^ (state_q << SHIFT_A);
    assign state_d = state_d ^ (state_d >> SHIFT_B);
    assign state_d = state_d ^ (state_d << SHIFT_C);

    assign rand_o = state_q; // Output current state

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            state_q <= SEED; // Initialize state
        end else if (en_i) begin
            state_q <= state_d; // Update state only when enabled
        end
        // else: state_q holds its value
    end
endmodule 