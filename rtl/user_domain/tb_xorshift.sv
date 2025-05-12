`timescale 1ns/1ps

import croc_pkg::*; // For sbr_obi_req_t, sbr_obi_rsp_t

module tb_xorshift;

  // Parameters
  localparam CLK_PERIOD     = 50ns; // 20 MHz clock
  localparam RESET_DURATION = 2 * CLK_PERIOD;
  localparam OBI_TIMEOUT    = 2000; // Max cycles for OBI response
  localparam GRANT_TIMEOUT_CYCLES = 10; // Shorter timeout for expecting NO grant

  // DUT Parameters
  localparam int unsigned PRNG_WIDTH = 32;
  localparam int unsigned PRNG_SEED  = 32'h12345678;

  // Register Offsets (matching DUT's localparam logic)
  localparam logic [2:0] PRNG_CTRL_OFFSET_IDX  = 3'h0;
  localparam logic [2:0] PRNG_RDATA_OFFSET_IDX = 3'h1;

  // Construct full addresses for OBI transactions
  localparam logic [31:0] PRNG_CTRL_ADDR  = {27'h0, PRNG_CTRL_OFFSET_IDX,  2'b00}; // 0x00
  localparam logic [31:0] PRNG_RDATA_ADDR = {27'h0, PRNG_RDATA_OFFSET_IDX, 2'b00}; // 0x04

  // Signals
  logic        clk_i;
  logic        rst_ni;

  sbr_obi_req_t obi_req_i_to_dut;
  sbr_obi_rsp_t obi_rsp_o_from_dut;
  logic [PRNG_WIDTH-1:0] current_prn_tb;

  logic        req_ongoing;

  // DUT Instantiation - Changed to 'xorshift'
  xorshift #(
    .PRNG_WIDTH(PRNG_WIDTH),
    .PRNG_SEED (PRNG_SEED)
  ) dut (
    .clk_i, .rst_ni,
    .obi_req_i(obi_req_i_to_dut),
    .obi_rsp_o(obi_rsp_o_from_dut),
    .current_prn_o(current_prn_tb)
  );

  initial begin
    clk_i = 1'b0;
    forever #(CLK_PERIOD / 2) clk_i = ~clk_i;
  end

  initial begin
    obi_req_i_to_dut = '0;
    req_ongoing      = 1'b0;
  end

  task automatic write_obi(input logic [31:0] w_addr, input logic [31:0] w_data, input logic [3:0] w_be);
    int timeout_count = 0;
    @(posedge clk_i);
    obi_req_i_to_dut.req    = 1'b1;
    obi_req_i_to_dut.a.we   = 1'b1;
    obi_req_i_to_dut.a.addr = w_addr;
    obi_req_i_to_dut.a.wdata= w_data;
    obi_req_i_to_dut.a.be   = w_be;
    obi_req_i_to_dut.a.aid  = timeout_count % 2;
    req_ongoing = 1'b1;
    $display("%t : TB: OBI Write Req : Addr=0x%h, Data=0x%h, BE=0x%b", $time, w_addr, w_data, w_be);

    while (obi_rsp_o_from_dut.gnt !== 1'b1 && timeout_count < OBI_TIMEOUT) begin
      @(posedge clk_i);
      timeout_count++;
    end
    if (timeout_count >= OBI_TIMEOUT) begin
      $error("%t : TB: Timeout waiting for OBI grant during write to 0x%h. GNT=%b", $time, w_addr, obi_rsp_o_from_dut.gnt);
      $finish;
    end
    $display("%t : TB: OBI Write Gnt Rcvd: Addr=0x%h. GNT=%b", $time, w_addr, obi_rsp_o_from_dut.gnt);

    @(posedge clk_i);
    obi_req_i_to_dut.req = 1'b0;
    req_ongoing = 1'b0;
    $display("%t : TB: OBI Write Req Deasserted.", $time);
    @(posedge clk_i);
    obi_req_i_to_dut = '0;
  endtask

  // Modified read_obi task to handle expected grant/no_grant
  task automatic read_obi(
    input logic [31:0] r_addr,
    output logic [PRNG_WIDTH-1:0] r_data_val,
    output logic r_err,
    input bit expect_grant = 1'b1 // New parameter, defaults to expecting a grant
  );
    int timeout_count_gnt = 0;
    int timeout_count_rvalid = 0;
    logic grant_received = 1'b0;

    @(posedge clk_i);
    obi_req_i_to_dut.req    = 1'b1;
    obi_req_i_to_dut.a.we   = 1'b0;
    obi_req_i_to_dut.a.addr = r_addr;
    obi_req_i_to_dut.a.be   = 4'b1111;
    obi_req_i_to_dut.a.aid  = timeout_count_gnt % 2;
    req_ongoing = 1'b1;
    $display("%t : TB: OBI Read Req  : Addr=0x%h (Expect Grant: %b)", $time, r_addr, expect_grant);

    // Wait for grant or no grant based on expect_grant
    if (expect_grant) begin
      while (obi_rsp_o_from_dut.gnt !== 1'b1 && timeout_count_gnt < OBI_TIMEOUT) begin
        @(posedge clk_i);
        timeout_count_gnt++;
      end
      if (timeout_count_gnt >= OBI_TIMEOUT) begin
        $error("%t : TB: Timeout waiting for OBI grant during read from 0x%h. GNT=%b", $time, r_addr, obi_rsp_o_from_dut.gnt);
        $finish;
      end
      grant_received = 1'b1;
      $display("%t : TB: OBI Read Gnt Rcvd: Addr=0x%h. GNT=%b", $time, r_addr, obi_rsp_o_from_dut.gnt);
    end else begin // Expect NO grant for invalid addresses
      // Wait a few cycles to ensure grant is not asserted
      repeat(GRANT_TIMEOUT_CYCLES) @(posedge clk_i);
      if (obi_rsp_o_from_dut.gnt === 1'b1) begin
        $error("%t : TB: Expected NO grant for invalid addr 0x%h, but received grant. GNT=%b", $time, r_addr, obi_rsp_o_from_dut.gnt);
        $finish;
      end
      grant_received = 1'b0; // Grant was not (and should not have been) received
      $display("%t : TB: OBI Read No Grant (as expected for invalid addr): Addr=0x%h. GNT=%b", $time, r_addr, obi_rsp_o_from_dut.gnt);
    end

    @(posedge clk_i);
    obi_req_i_to_dut.req = 1'b0;
    req_ongoing = 1'b0;
    $display("%t : TB: OBI Read Req Deasserted.", $time);

    if (grant_received) begin // Only wait for rvalid if grant was received
      while (obi_rsp_o_from_dut.rvalid !== 1'b1 && timeout_count_rvalid < OBI_TIMEOUT) begin
        @(posedge clk_i);
        timeout_count_rvalid++;
      end
      if (timeout_count_rvalid >= OBI_TIMEOUT) begin
        $error("%t : TB: Timeout waiting for OBI rvalid during read from 0x%h. RVALID=%b", $time, r_addr, obi_rsp_o_from_dut.rvalid);
        $finish;
      end
      r_data_val = obi_rsp_o_from_dut.r.rdata;
      r_err      = obi_rsp_o_from_dut.r.err;
      $display("%t : TB: OBI Read Data Rcvd: Addr=0x%h Data=0x%08x Err=%b RVALID=%b", $time, r_addr, r_data_val, r_err, obi_rsp_o_from_dut.rvalid);
    end else begin // No grant was received (and not expected)
      r_data_val = 'x; // Data is undefined
      r_err = 1'b1;    // Indicate an error/invalid access from TB perspective
                      // The DUT itself signals error via (obi_req_i.req && !obi_rsp_o.gnt)
    end

    @(posedge clk_i);
    obi_req_i_to_dut = '0;
  endtask

  initial begin
    logic [PRNG_WIDTH-1:0] prn_val;
    logic read_error;
    logic [PRNG_WIDTH-1:0] prev_prn_val;
    logic [31:0] invalid_addr;

    $dumpfile("tb_xorshift.vcd");
    $dumpvars(0, tb_xorshift);

    rst_ni = 1'b0;
    $display("%t : TB: Asserting Reset", $time);
    #(RESET_DURATION);
    rst_ni = 1'b1;
    $display("%t : TB: Deasserting Reset", $time);
    @(posedge clk_i);

    $display("%t : TB: Starting OBI PRNG Test Sequence...", $time);

    $display("--- Test 1: Read initial PRN ---");
    read_obi(PRNG_RDATA_ADDR, prn_val, read_error, 1'b1); // Expect grant
    if (read_error) $error("Test 1 Read Error!");
    $display("%t : TB: Initial PRN = 0x%h (Seed was 0x%h, current_prn_tb=0x%h)", $time, prn_val, PRNG_SEED, current_prn_tb);
    if (prn_val !== PRNG_SEED) $warning("Initial PRN 0x%h does not match seed 0x%h", prn_val, PRNG_SEED);

    $display("--- Test 2: Trigger PRNG and read ---");
    write_obi(PRNG_CTRL_ADDR, 32'h1, 4'b0001);
    @(posedge clk_i);
    read_obi(PRNG_RDATA_ADDR, prn_val, read_error, 1'b1); // Expect grant
    if (read_error) $error("Test 2 Read Error!");
    $display("%t : TB: PRN after 1st trigger = 0x%h (current_prn_tb=0x%h)", $time, prn_val, current_prn_tb);
    if (prn_val === PRNG_SEED) $warning("PRN did not change after 1st trigger!");

    $display("--- Test 3: Trigger PRNG again and read ---");
    prev_prn_val = prn_val;
    write_obi(PRNG_CTRL_ADDR, 32'h1, 4'b0001);
    @(posedge clk_i);
    read_obi(PRNG_RDATA_ADDR, prn_val, read_error, 1'b1); // Expect grant
    if (read_error) $error("Test 3 Read Error!");
    $display("%t : TB: PRN after 2nd trigger = 0x%h (current_prn_tb=0x%h)", $time, prn_val, current_prn_tb);
    if (prn_val === prev_prn_val) $warning("PRN did not change after 2nd trigger!");

    $display("--- Test 4: Read from invalid offset ---");
    invalid_addr = {27'h0, 3'h7, 2'b00}; // e.g. offset 0x1C
    read_obi(invalid_addr, prn_val, read_error, 1'b0); // Expect NO grant
    // The DUT itself will assert obi_rsp_o.r.err if req is high and gnt is low.
    // The read_obi task now sets r_err=1 if no grant was expected and not received.
    if (!read_error) $error("Test 4 FAILED: Expected an error indication for invalid read address, but got no error from TB task.");
    else $display("%t : TB: Test 4 PASSED: Correctly handled no-grant for invalid read address (TB task reported r_err=1).", $time);

    #(CLK_PERIOD * 10);
    $display("%t : TB: OBI PRNG Test Sequence Complete.", $time);
    $finish;
  end

  final begin
    if (req_ongoing) begin
        obi_req_i_to_dut.req = 1'b0;
    end
  end

endmodule