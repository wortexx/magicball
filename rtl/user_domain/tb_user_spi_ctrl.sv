`timescale 1ns/1ps

import croc_pkg::*; // For OBI types

module tb_user_spi_ctrl;

  // Parameters
  localparam CLK_PERIOD     = 50ns; // 20 MHz clock
  localparam RESET_DURATION = 2 * CLK_PERIOD;
  localparam OBI_TIMEOUT    = 2000;

  // Register Offset (relative to module base, which is 0 for direct test)
  localparam logic [11:0] GPIO_CTRL_OFFSET = 12'h000;

  // Bit positions
  localparam int CS1_N_BIT = 0;
  localparam int CS2_N_BIT = 1;
  localparam int DC_BIT    = 2;

  // Signals
  logic        clk_i;
  logic        rst_ni;

  sbr_obi_req_t obi_req_i_to_dut; // Renamed to avoid conflict with implicit port connection
  sbr_obi_rsp_t obi_rsp_o_from_dut;

  logic        spi_cs1_no_tb;
  logic        spi_cs2_no_tb;
  logic        spi_dc_o_tb;
  logic        req_ongoing;

  // DUT Instantiation
  user_spi_ctrl dut (
    .clk_i, .rst_ni,
    .obi_req_i(obi_req_i_to_dut),   // Connect TB signal to DUT input
    .obi_rsp_o(obi_rsp_o_from_dut), // Connect DUT output to TB signal
    .spi_cs1_no(spi_cs1_no_tb),
    .spi_cs2_no(spi_cs2_no_tb),
    .spi_dc_o(spi_dc_o_tb)
  );

  // Clock Generation
  initial begin
    clk_i = 1'b0;
    forever #(CLK_PERIOD / 2) clk_i = ~clk_i;
  end

  // Default Connections
  initial begin
    obi_req_i_to_dut = '0;
    req_ongoing = 1'b0;
  end

  // OBI Master Tasks
  task automatic write_obi(input logic [11:0] offset, input logic [31:0] data, input logic [3:0] byte_en);
    int timeout_count = 0;
    @(posedge clk_i);
    obi_req_i_to_dut.req    = 1'b1;
    obi_req_i_to_dut.a.we   = 1'b1;
    obi_req_i_to_dut.a.addr = {20'h0, offset}; // Base address is 0 for direct test
    obi_req_i_to_dut.a.wdata = data;
    obi_req_i_to_dut.a.be   = byte_en;
    req_ongoing = 1'b1;
    $display("%t : TB: OBI Write Req : Addr=0x%h, Data=0x%h, BE=0x%b", $time, obi_req_i_to_dut.a.addr, data, byte_en);

    while (obi_rsp_o_from_dut.gnt !== 1'b1 && timeout_count < OBI_TIMEOUT) begin
      @(posedge clk_i);
      timeout_count++;
    end
    if (timeout_count >= OBI_TIMEOUT) begin
      $error("%t : TB: Timeout waiting for OBI grant during write to 0x%h. GNT=%b", $time, obi_req_i_to_dut.a.addr, obi_rsp_o_from_dut.gnt);
      $finish;
    end
    $display("%t : TB: OBI Write Gnt Rcvd: Addr=0x%h. GNT=%b", $time, obi_req_i_to_dut.a.addr, obi_rsp_o_from_dut.gnt);

    @(posedge clk_i);
    obi_req_i_to_dut.req = 1'b0;
    req_ongoing = 1'b0;
    $display("%t : TB: OBI Write Req Deasserted.", $time);
    @(posedge clk_i);
    obi_req_i_to_dut = '0; // Clear all fields
  endtask

  task automatic read_obi(input logic [11:0] offset, output logic [31:0] r_data, output logic r_err);
    int timeout_count_gnt = 0;
    int timeout_count_rvalid = 0;
    @(posedge clk_i);
    obi_req_i_to_dut.req    = 1'b1;
    obi_req_i_to_dut.a.we   = 1'b0;
    obi_req_i_to_dut.a.addr = {20'h0, offset};
    obi_req_i_to_dut.a.be   = 4'b1111; // Assuming full word read
    req_ongoing = 1'b1;
    $display("%t : TB: OBI Read Req  : Addr=0x%h", $time, obi_req_i_to_dut.a.addr);

    while (obi_rsp_o_from_dut.gnt !== 1'b1 && timeout_count_gnt < OBI_TIMEOUT) begin
      @(posedge clk_i);
      timeout_count_gnt++;
    end
    if (timeout_count_gnt >= OBI_TIMEOUT) begin
      $error("%t : TB: Timeout waiting for OBI grant during read from 0x%h. GNT=%b", $time, obi_req_i_to_dut.a.addr, obi_rsp_o_from_dut.gnt);
      $finish;
    end
    $display("%t : TB: OBI Read Gnt Rcvd: Addr=0x%h. GNT=%b", $time, obi_req_i_to_dut.a.addr, obi_rsp_o_from_dut.gnt);

    @(posedge clk_i);
    obi_req_i_to_dut.req = 1'b0;
    req_ongoing = 1'b0;
    $display("%t : TB: OBI Read Req Deasserted.", $time);

    while (obi_rsp_o_from_dut.rvalid !== 1'b1 && timeout_count_rvalid < OBI_TIMEOUT) begin
      @(posedge clk_i);
      timeout_count_rvalid++;
    end
    if (timeout_count_rvalid >= OBI_TIMEOUT) begin
      $error("%t : TB: Timeout waiting for OBI rvalid during read from 0x%h. RVALID=%b", $time, obi_req_i_to_dut.a.addr, obi_rsp_o_from_dut.rvalid);
      $finish;
    end
    r_data = obi_rsp_o_from_dut.r.rdata;
    r_err  = obi_rsp_o_from_dut.r.err;
    $display("%t : TB: OBI Read Data Rcvd: Addr=0x%h Data=0x%08x Err=%b RVALID=%b", $time, obi_req_i_to_dut.a.addr, r_data, r_err, obi_rsp_o_from_dut.rvalid);
    @(posedge clk_i);
    obi_req_i_to_dut = '0; // Clear all fields
  endtask

  // Test Scenario
  initial begin
    logic [31:0] read_back_data;
    logic        read_error;

    $dumpfile("tb_user_spi_ctrl.vcd");
    $dumpvars(0, tb_user_spi_ctrl);

    rst_ni = 1'b0;
    $display("%t : TB: Asserting Reset", $time);
    #(RESET_DURATION);
    rst_ni = 1'b1;
    $display("%t : TB: Deasserting Reset", $time);
    @(posedge clk_i);

    $display("%t : TB: Starting user_spi_ctrl Test Sequence...", $time);

    // Test 1: Write CS1=0 (active), CS2=1 (inactive), DC=0 (command)
    $display("--- Test 1: Assert CS1, DC=Command ---");
    write_obi(GPIO_CTRL_OFFSET, 32'b010, 4'b0001); // CS1_N=0, CS2_N=1, DC=0
    #(CLK_PERIOD * 2); // Wait for outputs to settle
    if (spi_cs1_no_tb !== 1'b0 || spi_cs2_no_tb !== 1'b1 || spi_dc_o_tb !== 1'b0) begin
      $error("%t : TB ERROR: Test 1 outputs mismatch. CS1_N=%b (exp 0), CS2_N=%b (exp 1), DC=%b (exp 0)",
             $time, spi_cs1_no_tb, spi_cs2_no_tb, spi_dc_o_tb);
    end
    read_obi(GPIO_CTRL_OFFSET, read_back_data, read_error);
    if (read_error || read_back_data[CS1_N_BIT] !== 1'b0 || read_back_data[CS2_N_BIT] !== 1'b1 || read_back_data[DC_BIT] !== 1'b0) begin
        $error("%t : TB ERROR: Test 1 readback mismatch. Data=0x%h (exp 0x...010), Err=%b", $time, read_back_data, read_error);
    end

    // Test 2: Write CS1=1 (inactive), CS2=0 (active), DC=1 (data)
    $display("--- Test 2: Assert CS2, DC=Data ---");
    write_obi(GPIO_CTRL_OFFSET, 32'b101, 4'b0001); // CS1_N=1, CS2_N=0, DC=1
    #(CLK_PERIOD * 2);
    if (spi_cs1_no_tb !== 1'b1 || spi_cs2_no_tb !== 1'b0 || spi_dc_o_tb !== 1'b1) begin
      $error("%t : TB ERROR: Test 2 outputs mismatch. CS1_N=%b (exp 1), CS2_N=%b (exp 0), DC=%b (exp 1)",
             $time, spi_cs1_no_tb, spi_cs2_no_tb, spi_dc_o_tb);
    end
    read_obi(GPIO_CTRL_OFFSET, read_back_data, read_error);
     if (read_error || read_back_data[CS1_N_BIT] !== 1'b1 || read_back_data[CS2_N_BIT] !== 1'b0 || read_back_data[DC_BIT] !== 1'b1) begin
        $error("%t : TB ERROR: Test 2 readback mismatch. Data=0x%h (exp 0x...101), Err=%b", $time, read_back_data, read_error);
    end

    // Test 3: Deassert all CS
    $display("--- Test 3: Deassert CS1 & CS2 ---");
    write_obi(GPIO_CTRL_OFFSET, 32'b011, 4'b0001); // CS1_N=1, CS2_N=1, DC=0 (DC state arbitrary here)
    #(CLK_PERIOD * 2);
    if (spi_cs1_no_tb !== 1'b1 || spi_cs2_no_tb !== 1'b1) begin
      $error("%t : TB ERROR: Test 3 outputs mismatch. CS1_N=%b (exp 1), CS2_N=%b (exp 1)",
             $time, spi_cs1_no_tb, spi_cs2_no_tb);
    end
    read_obi(GPIO_CTRL_OFFSET, read_back_data, read_error);
    if (read_error || read_back_data[CS1_N_BIT] !== 1'b1 || read_back_data[CS2_N_BIT] !== 1'b1) begin
        $error("%t : TB ERROR: Test 3 readback mismatch. Data=0x%h (exp 0x...011), Err=%b", $time, read_back_data, read_error);
    end

    #(CLK_PERIOD * 10);
    $display("%t : TB: user_spi_ctrl Test Sequence Complete.", $time);
    $finish;
  end

  final begin
    if (req_ongoing) begin
        obi_req_i_to_dut.req = 1'b0;
    end
  end

endmodule