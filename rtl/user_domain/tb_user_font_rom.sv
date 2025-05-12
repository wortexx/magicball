`timescale 1ns/1ps

import croc_pkg::*; // For sbr_obi_req_t, sbr_obi_rsp_t, SbrObiCfg
import user_pkg::*; // For potential user params (though not strictly needed here)

module tb_user_font_rom;

  //--------------------------------------------------------------------------
  // Parameters
  //--------------------------------------------------------------------------
  localparam CLK_PERIOD     = 50ns; // 20 MHz clock
  localparam RESET_DURATION = 2 * CLK_PERIOD;
  localparam OBI_TIMEOUT    = 1000; // Max cycles to wait for OBI gnt/rvalid

  // DUT Parameters (Must match the instantiated user_font_rom)
  localparam int unsigned ROM_SIZE      = 1140; // For 12x6 font (95 * 12)
  localparam int unsigned ROM_ADDR_BITS = $clog2(ROM_SIZE); // 11 bits
  localparam string       INIT_FILE     = "rtl/user_domain/font_rom_12x6.hex"; // Ensure this path is correct relative to run dir

  //--------------------------------------------------------------------------
  // Signals
  //--------------------------------------------------------------------------
  logic clk_i;
  logic rst_ni;

  // OBI Interface (Testbench acts as master)
  sbr_obi_req_t obi_req; // TB drives this
  sbr_obi_rsp_t obi_rsp; // DUT drives this

  // Internal TB signals
  logic req_ongoing;

  //--------------------------------------------------------------------------
  // DUT Instantiation
  //--------------------------------------------------------------------------
  user_font_rom #(
    .ROM_SIZE  (ROM_SIZE),
    .INIT_FILE (INIT_FILE)
  ) dut (
    .clk_i,
    .rst_ni,
    .obi_req_i (obi_req),
    .obi_rsp_o (obi_rsp)
  );

  //--------------------------------------------------------------------------
  // Clock Generation
  //--------------------------------------------------------------------------
  initial begin
    clk_i = 1'b0;
    forever #(CLK_PERIOD / 2) clk_i = ~clk_i;
  end

  //--------------------------------------------------------------------------
  // OBI Master Task (Read Only for ROM)
  //--------------------------------------------------------------------------
  task automatic read_obi_rom(input logic [31:0] r_addr, // Use full address for realism
                              output logic [31:0] r_data_val,
                              output logic        r_err);
    int timeout_count_gnt = 0;
    int timeout_count_rvalid = 0;
    sbr_obi_req_t req_txn;
    sbr_obi_r_chan_t rsp_r_chan_temp;
    logic expected_grant = (r_addr[11:0] < ROM_SIZE); // Expect grant only for valid addresses

    @(posedge clk_i);
    req_txn = '0;
    req_txn.req    = 1'b1;
    req_txn.a.we   = 1'b0; // Read
    req_txn.a.addr = r_addr;
    obi_req = req_txn;
    req_ongoing = 1'b1;
    $display("%t : TB: OBI Read Req  : Addr=0x%h (Expect Grant: %b)", $time, r_addr, expected_grant);

    while (obi_rsp.gnt !== expected_grant && timeout_count_gnt < OBI_TIMEOUT) begin
      @(posedge clk_i);
      timeout_count_gnt++;
    end

    if (timeout_count_gnt >= OBI_TIMEOUT) begin
      $error("%t : TB: Timeout waiting for OBI grant/no-grant during read from 0x%h. GNT=%b", $time, r_addr, obi_rsp.gnt);
      $finish;
    end else if (obi_rsp.gnt !== expected_grant) begin
       $error("%t : TB: Unexpected OBI grant status during read from 0x%h. Expected GNT=%b, Got GNT=%b", $time, r_addr, expected_grant, obi_rsp.gnt);
       $finish;
    end

    if (expected_grant) begin
        $display("%t : TB: OBI Read Gnt Rcvd: Addr=0x%h. GNT=%b", $time, r_addr, obi_rsp.gnt);
        @(posedge clk_i);
        obi_req.req = 1'b0;
        req_ongoing = 1'b0;
        $display("%t : TB: OBI Read Req Deasserted.", $time);

        while (obi_rsp.rvalid !== 1'b1 && timeout_count_rvalid < OBI_TIMEOUT) begin
            @(posedge clk_i);
            timeout_count_rvalid++;
        end
        if (timeout_count_rvalid >= OBI_TIMEOUT) begin
            $error("%t : TB: Timeout waiting for OBI rvalid during read from 0x%h. RVALID=%b", $time, r_addr, obi_rsp.rvalid);
            $finish;
        end

        rsp_r_chan_temp = obi_rsp.r;
        r_data_val = rsp_r_chan_temp.rdata;
        r_err      = rsp_r_chan_temp.err;
        $display("%t : TB: OBI Read Data Rcvd: Addr=0x%h Data=0x%08x Err=%b RVALID=%b", $time, r_addr, r_data_val, r_err, obi_rsp.rvalid);

    end else begin
        $display("%t : TB: OBI Read No Grant Rcvd (Correct for invalid Addr=0x%h). GNT=%b", $time, r_addr, obi_rsp.gnt);
        @(posedge clk_i);
        obi_req.req = 1'b0;
        req_ongoing = 1'b0;
        r_data_val = 32'hDEADBEEF;
        r_err = 1'b1;
    end

    @(posedge clk_i);
    obi_req = '0;
  endtask

  //--------------------------------------------------------------------------
  // Test Scenario
  //--------------------------------------------------------------------------
  initial begin
    logic [31:0] read_data;
    logic        read_err;

    $dumpfile("tb_user_font_rom.vcd");
    $dumpvars(0, tb_user_font_rom);

    rst_ni = 1'b0;
    req_ongoing = 1'b0;
    obi_req = '0;
    $display("%t : TB: Asserting Reset", $time);
    #(RESET_DURATION);
    rst_ni = 1'b1;
    $display("%t : TB: Deasserting Reset", $time);
    @(posedge clk_i);

    $display("%t : TB: Starting Test Sequence for user_font_rom...", $time);

    $display("--- Test 1: Read first byte of 'A' (Offset 0x%h) ---", 32'h18C);
    read_obi_rom(32'h18C, read_data, read_err);
    if (read_err || read_data[7:0] !== 8'h00) begin
        $error("%t : TB_ERROR: Test 1 Failed. Expected 0x00, Got 0x%x, Err=%b", $time, read_data[7:0], read_err);
    end else begin $display("%t : TB_PASS: Test 1 Passed.", $time); end
    #(5 * CLK_PERIOD);

    $display("--- Test 2: Read last byte of 'A' (Offset 0x%h) ---", 32'h197);
    read_obi_rom(32'h197, read_data, read_err);
    if (read_err || read_data[7:0] !== 8'h40) begin
        $error("%t : TB_ERROR: Test 2 Failed. Expected 0x40, Got 0x%x, Err=%b", $time, read_data[7:0], read_err);
    end else begin $display("%t : TB_PASS: Test 2 Passed.", $time); end
    #(5 * CLK_PERIOD);

    $display("--- Test 3: Read first byte of 'a' (Offset 0x%h) ---", 32'h30C);
    read_obi_rom(32'h30C, read_data, read_err);
    if (read_err || read_data[7:0] !== 8'h00) begin
        $error("%t : TB_ERROR: Test 3 Failed. Expected 0x00, Got 0x%x, Err=%b", $time, read_data[7:0], read_err);
    end else begin $display("%t : TB_PASS: Test 3 Passed.", $time); end
    #(5 * CLK_PERIOD);

    $display("--- Test 4: Read last byte of '~' (Offset 0x%h) ---", 32'h473);
    read_obi_rom(32'h473, read_data, read_err);
    if (read_err || read_data[7:0] !== 8'h00) begin
        $error("%t : TB_ERROR: Test 4 Failed. Expected 0x00, Got 0x%x, Err=%b", $time, read_data[7:0], read_err);
    end else begin $display("%t : TB_PASS: Test 4 Passed.", $time); end
    #(5 * CLK_PERIOD);

    $display("--- Test 5: Read out of bounds (Offset 0x%h) ---", ROM_SIZE);
    read_obi_rom(ROM_SIZE, read_data, read_err);
    if (!read_err) begin
        $error("%t : TB_ERROR: Test 5 Failed. Expected OBI error for out-of-bounds read, read_err=%b", $time, read_err);
    end else begin
        $display("%t : TB_PASS: Test 5 Passed (Correctly detected OBI error).", $time);
    end
    #(5 * CLK_PERIOD);


    #(10 * CLK_PERIOD);
    $display("%t : TB: Test Sequence for user_font_rom Complete.", $time);
    $finish;
  end

  final begin
    if (req_ongoing) begin
        obi_req.req = 1'b0;
    end
  end

endmodule