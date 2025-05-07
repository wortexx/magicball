`timescale 1ns/1ps

import croc_pkg::*; // For sbr_obi_req_t, sbr_obi_rsp_t, SbrObiCfg
import user_pkg::*; // For UserSpiCtrlAddrOffset and other potential user params

module tb_user_spi_ctrl;

  //--------------------------------------------------------------------------
  // Parameters
  //--------------------------------------------------------------------------
  localparam CLK_PERIOD     = 50ns; // 20 MHz clock
  localparam RESET_DURATION = 2 * CLK_PERIOD;
  localparam OBI_TIMEOUT    = 1000; // Max cycles to wait for OBI gnt/rvalid

  // DUT Register Offsets (from user_spi_ctrl.sv, relative to its base)
  localparam logic [11:0] GPIO_CTRL_OFFSET = 12'h000;
  localparam logic [11:0] PRNG_CTRL_OFFSET = 12'h004;
  localparam logic [11:0] PRNG_READ_OFFSET = 12'h008;

  // Bit positions in GPIO_CTRL Register
  localparam int CS1_N_BIT = 0;
  localparam int CS2_N_BIT = 1;
  localparam int DC_BIT    = 2;
  // Bit position in PRNG_CTRL Register
  localparam int PRNG_EN_BIT = 0;
  // Define PRNG_SEED if needed for comparison, match DUT parameter
  localparam int unsigned PRNG_SEED = 32'hCAFEBABE;

  //--------------------------------------------------------------------------
  // Signals
  //--------------------------------------------------------------------------
  logic clk_i;
  logic rst_ni;

  // OBI Interface (Testbench acts as master)
  sbr_obi_req_t obi_req; // TB drives this
  sbr_obi_rsp_t obi_rsp; // DUT drives this

  // DUT Outputs to monitor
  logic spi_cs1_no;
  logic spi_cs2_no;
  logic spi_dc_o;

  // Internal TB signals
  logic req_ongoing;

  // Variables for PRNG test
  logic [31:0] prng_val1;
  logic [31:0] prng_val2;

  //--------------------------------------------------------------------------
  // DUT Instantiation
  //--------------------------------------------------------------------------
  // *** Instantiate user_spi_ctrl, NOT user_domain ***
  user_spi_ctrl #(
      .PRNG_SEED(PRNG_SEED) // Pass the seed parameter
  ) dut (
    .clk_i,
    .rst_ni,
    .obi_req_i (obi_req),
    .obi_rsp_o (obi_rsp),
    .spi_cs1_no,
    .spi_cs2_no,
    .spi_dc_o
  );

  //--------------------------------------------------------------------------
  // Clock Generation
  //--------------------------------------------------------------------------
  initial begin
    clk_i = 1'b0;
    forever #(CLK_PERIOD / 2) clk_i = ~clk_i;
  end

  //--------------------------------------------------------------------------
  // OBI Master Tasks for THIS testbench
  //--------------------------------------------------------------------------
  task automatic write_obi_ctrl(input logic [11:0] w_addr_offset, input logic [31:0] w_data);
    int timeout_count = 0;
    sbr_obi_req_t req_txn;
    @(posedge clk_i);
    req_txn = '0; // Default all fields to 0
    req_txn.req    = 1'b1;
    req_txn.a.we   = 1'b1;
    req_txn.a.addr = {20'h0, w_addr_offset}; // Use offset directly for this TB
    req_txn.a.wdata = w_data;
    req_txn.a.be   = 4'b1111; // Assume full word write
    obi_req = req_txn;
    req_ongoing = 1'b1;
    $display("%t : TB: OBI Write Req : AddrOffset=0x%h Data=0x%h", $time, w_addr_offset, w_data);

    while (obi_rsp.gnt !== 1'b1 && timeout_count < OBI_TIMEOUT) begin
      @(posedge clk_i);
      timeout_count++;
    end
    if (timeout_count >= OBI_TIMEOUT) begin
      $error("%t : TB: Timeout waiting for OBI grant during write to offset 0x%h. GNT=%b", $time, w_addr_offset, obi_rsp.gnt);
      $finish;
    end
    $display("%t : TB: OBI Write Gnt Rcvd: AddrOffset=0x%h. GNT=%b", $time, w_addr_offset, obi_rsp.gnt);

    @(posedge clk_i);
    obi_req.req = 1'b0;
    req_ongoing = 1'b0;
    $display("%t : TB: OBI Write Req Deasserted.", $time);
    @(posedge clk_i);
    obi_req = '0;
  endtask

  task automatic read_obi_ctrl(input logic [11:0] r_addr_offset, output logic [31:0] r_data_val);
    int timeout_count_gnt = 0;
    int timeout_count_rvalid = 0;
    sbr_obi_req_t req_txn;
    sbr_obi_r_chan_t rsp_r_chan_temp;
    @(posedge clk_i);
    req_txn = '0;
    req_txn.req    = 1'b1;
    req_txn.a.we   = 1'b0;
    req_txn.a.addr = {20'h0, r_addr_offset}; // Use offset directly for this TB
    obi_req = req_txn;
    req_ongoing = 1'b1;
    $display("%t : TB: OBI Read Req  : AddrOffset=0x%h", $time, r_addr_offset);

    while (obi_rsp.gnt !== 1'b1 && timeout_count_gnt < OBI_TIMEOUT) begin
      @(posedge clk_i);
      timeout_count_gnt++;
    end
    if (timeout_count_gnt >= OBI_TIMEOUT) begin
      $error("%t : TB: Timeout waiting for OBI grant during read from offset 0x%h. GNT=%b", $time, r_addr_offset, obi_rsp.gnt);
      $finish;
    end
    $display("%t : TB: OBI Read Gnt Rcvd: AddrOffset=0x%h. GNT=%b", $time, r_addr_offset, obi_rsp.gnt);

    @(posedge clk_i);
    obi_req.req = 1'b0;
    req_ongoing = 1'b0;
    $display("%t : TB: OBI Read Req Deasserted.", $time);

    while (obi_rsp.rvalid !== 1'b1 && timeout_count_rvalid < OBI_TIMEOUT) begin
        @(posedge clk_i);
        timeout_count_rvalid++;
    end
    if (timeout_count_rvalid >= OBI_TIMEOUT) begin
        $error("%t : TB: Timeout waiting for OBI rvalid during read from offset 0x%h. RVALID=%b", $time, r_addr_offset, obi_rsp.rvalid);
        $finish;
    end
    rsp_r_chan_temp = obi_rsp.r;
    r_data_val = rsp_r_chan_temp.rdata;
    $display("%t : TB: OBI Read Data Rcvd: AddrOffset=0x%h Data=0x%08x. RVALID=%b", $time, r_addr_offset, r_data_val, obi_rsp.rvalid);
    @(posedge clk_i);
    obi_req = '0;
  endtask

  //--------------------------------------------------------------------------
  // Test Scenario
  //--------------------------------------------------------------------------
  initial begin
    $dumpfile("tb_user_spi_ctrl.vcd");
    $dumpvars(0, tb_user_spi_ctrl);

    rst_ni = 1'b0;
    req_ongoing = 1'b0;
    obi_req = '0;

    $display("%t : TB: Asserting Reset", $time);
    #(RESET_DURATION);
    rst_ni = 1'b1;
    $display("%t : TB: Deasserting Reset", $time);
    @(posedge clk_i);

    $display("%t : TB: Starting Test Sequence for user_spi_ctrl...", $time);

    // Test 1: Set CS1 active, CS2 inactive, DC command
    $display("--- Test 1: Set CS1 active, DC command ---");
    write_obi_ctrl(GPIO_CTRL_OFFSET, (0 << CS1_N_BIT) | (1 << CS2_N_BIT) | (0 << DC_BIT) );
    @(posedge clk_i); // Allow outputs to update
    if (spi_cs1_no !== 1'b0 || spi_cs2_no !== 1'b1 || spi_dc_o !== 1'b0) begin
      $error("%t : TB_ERROR: Test 1 failed. CS1_N=%b, CS2_N=%b, DC=%b", $time, spi_cs1_no, spi_cs2_no, spi_dc_o);
    end else begin
      $display("%t : TB_PASS: Test 1. CS1_N=%b, CS2_N=%b, DC=%b", $time, spi_cs1_no, spi_cs2_no, spi_dc_o);
    end
    #(5 * CLK_PERIOD);

    // Test 2: Set CS1 inactive, CS2 active, DC data
    $display("--- Test 2: Set CS2 active, DC data ---");
    write_obi_ctrl(GPIO_CTRL_OFFSET, (1 << CS1_N_BIT) | (0 << CS2_N_BIT) | (1 << DC_BIT) );
    @(posedge clk_i);
    if (spi_cs1_no !== 1'b1 || spi_cs2_no !== 1'b0 || spi_dc_o !== 1'b1) begin
      $error("%t : TB_ERROR: Test 2 failed. CS1_N=%b, CS2_N=%b, DC=%b", $time, spi_cs1_no, spi_cs2_no, spi_dc_o);
    end else begin
      $display("%t : TB_PASS: Test 2. CS1_N=%b, CS2_N=%b, DC=%b", $time, spi_cs1_no, spi_cs2_no, spi_dc_o);
    end
    #(5 * CLK_PERIOD);

    // Test 3: Trigger PRNG and read value
    $display("--- Test 3: Trigger PRNG and Read ---");
    write_obi_ctrl(PRNG_CTRL_OFFSET, (1 << PRNG_EN_BIT)); // Trigger PRNG
    @(posedge clk_i); // Allow PRNG to update its internal state
    @(posedge clk_i); // Allow prng_out_q to latch prng_out_w
    read_obi_ctrl(PRNG_READ_OFFSET, prng_val1);
    $display("%t : TB: PRNG Value 1 = 0x%h", $time, prng_val1);
    #(5 * CLK_PERIOD);

    // Test 4: Trigger PRNG again and read value (should be different)
    $display("--- Test 4: Trigger PRNG again and Read ---");
    write_obi_ctrl(PRNG_CTRL_OFFSET, (1 << PRNG_EN_BIT)); // Trigger PRNG
    @(posedge clk_i);
    @(posedge clk_i);
    read_obi_ctrl(PRNG_READ_OFFSET, prng_val2);
    $display("%t : TB: PRNG Value 2 = 0x%h", $time, prng_val2);

    if (prng_val1 == prng_val2 && PRNG_SEED != 0) begin
        $warning("%t : TB_WARN: PRNG values are the same. Check PRNG logic or seed.", $time);
    end else if (PRNG_SEED == 0 && prng_val1 == 0 && prng_val2 == 0) begin
        $warning("%t : TB_WARN: PRNG seed is 0, values are 0. Consider a non-zero seed.", $time);
    end
    else begin
        $display("%t : TB_PASS: PRNG values differ or seed is zero.", $time);
    end

    #(10 * CLK_PERIOD);
    $display("%t : TB: Test Sequence for user_spi_ctrl Complete.", $time);
    $finish;
  end

  final begin
    if (req_ongoing) begin
        obi_req.req = 1'b0;
    end
  end

endmodule 