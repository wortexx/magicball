`timescale 1ns/1ps

module tb_xorshift;

  // Parameters
  localparam CLK_PERIOD     = 10ns; // 100 MHz clock
  localparam RESET_DURATION = 2 * CLK_PERIOD;
  localparam int unsigned PRNG_WIDTH = 32;
  localparam int unsigned PRNG_SEED  = 32'hDEADBEEF; // Match DUT default or override

  // Signals
  logic        clk_i;
  logic        rst_ni; // Assuming xorshift uses active low reset
  logic        en_i;
  logic [PRNG_WIDTH-1:0] rand_o;

  // DUT Instantiation
  xorshift #(
    .WIDTH(PRNG_WIDTH),
    .SEED (PRNG_SEED)
  ) dut (
    .clk_i,
    .rst_ni,
    .en_i,
    .rand_o
  );

  // Clock Generation
  initial begin
    clk_i = 1'b0;
    forever #(CLK_PERIOD / 2) clk_i = ~clk_i;
  end

  // Test Scenario
  initial begin
    $dumpfile("tb_xorshift.vcd");
    $dumpvars(0, tb_xorshift);

    // Initialize and Reset
    rst_ni = 1'b0; // Assert reset
    en_i   = 1'b0;
    $display("%t : TB: Asserting Reset", $time);
    #(RESET_DURATION);
    rst_ni = 1'b1; // Deassert reset
    $display("%t : TB: Deasserting Reset. Initial rand_o = 0x%h", $time, rand_o);
    @(posedge clk_i); // Wait for first clock edge after reset

    // Test 1: Enable for one cycle
    $display("--- Test 1: Enable for one cycle ---");
    en_i = 1'b1;
    @(posedge clk_i);
    en_i = 1'b0;
    @(posedge clk_i); // Allow output to settle
    $display("%t : TB: rand_o after 1st enable = 0x%h", $time, rand_o);

    #(5 * CLK_PERIOD);

    // Test 2: Enable for another cycle
    $display("--- Test 2: Enable for another cycle ---");
    en_i = 1'b1;
    @(posedge clk_i);
    en_i = 1'b0;
    @(posedge clk_i);
    $display("%t : TB: rand_o after 2nd enable = 0x%h", $time, rand_o);

    #(5 * CLK_PERIOD);

    // Test 3: Enable for multiple consecutive cycles
    $display("--- Test 3: Enable for 3 consecutive cycles ---");
    en_i = 1'b1;
    @(posedge clk_i);
    $display("%t : TB: rand_o after 3rd enable (cycle 1) = 0x%h", $time, rand_o);
    @(posedge clk_i);
    $display("%t : TB: rand_o after 3rd enable (cycle 2) = 0x%h", $time, rand_o);
    @(posedge clk_i);
    $display("%t : TB: rand_o after 3rd enable (cycle 3) = 0x%h", $time, rand_o);
    en_i = 1'b0;
    @(posedge clk_i);

    #(10 * CLK_PERIOD);
    $display("%t : TB: Test Sequence for xorshift Complete.", $time);
    $finish;
  end

endmodule 