`timescale 1ns/1ps

import croc_pkg::*;
import user_pkg::*; // Expects single UserSpi configuration from this package

module tb_user_domain_spi_engine_test;

  // Parameters
  localparam CLK_PERIOD     = 50ns; // 20 MHz
  localparam RESET_DURATION = 2 * CLK_PERIOD;
  localparam OBI_TIMEOUT    = 3000;
  localparam SPI_DONE_TIMEOUT = 15000;
  localparam GpioCount      = 16;

  // Absolute Addresses for SPI Engine (using offsets from user_pkg)
  localparam logic [31:0] SPI_CTRL_ADDR   = user_pkg::UserSpiAddrOffset + user_pkg::SPI_ENGINE_CTRL_REG_OFFSET;
  localparam logic [31:0] SPI_TX_ADDR     = user_pkg::UserSpiAddrOffset + user_pkg::SPI_ENGINE_TX_REG_OFFSET;
  localparam logic [31:0] SPI_STATUS_ADDR = user_pkg::UserSpiAddrOffset + user_pkg::SPI_ENGINE_STATUS_REG_OFFSET;

  // Signals
  logic clk_i;
  logic rst_ni;
  logic ref_clk_i;
  logic testmode_i;
  sbr_obi_req_t user_sbr_obi_req;
  sbr_obi_rsp_t user_sbr_obi_rsp;
  mgr_obi_req_t user_mgr_obi_req; // Monitored
  mgr_obi_rsp_t user_mgr_obi_rsp; // Tied off
  logic [GpioCount-1:0] gpio_in_sync_i;
  logic [croc_pkg::NumExternalIrqs-1:0] interrupts_o;
  logic spi_sck_o;  // Monitored
  logic spi_mosi_o; // Monitored
  logic req_ongoing;

  // DUT Instantiation
  user_domain #(
    .GpioCount(GpioCount)
  ) dut (
    .clk_i(clk_i), .rst_ni(rst_ni), .ref_clk_i(ref_clk_i), .testmode_i(testmode_i),
    .user_sbr_obi_req_i(user_sbr_obi_req), .user_sbr_obi_rsp_o(user_sbr_obi_rsp),
    .user_mgr_obi_req_o(user_mgr_obi_req), .user_mgr_obi_rsp_i(user_mgr_obi_rsp),
    .gpio_in_sync_i(gpio_in_sync_i), .interrupts_o(interrupts_o),
    .spi_sck_o(spi_sck_o), .spi_mosi_o(spi_mosi_o)
    // No spi_cs1_no, spi_cs2_no, spi_dc_o ports on this version of user_domain
  );

  initial begin clk_i = 1'b0; forever #(CLK_PERIOD / 2) clk_i = ~clk_i; end
  initial begin
     ref_clk_i = 1'b0; testmode_i = 1'b0; gpio_in_sync_i = '0;
     user_mgr_obi_rsp = '0; req_ongoing = 1'b0; user_sbr_obi_req = '0;
  end

  // OBI Tasks
  task automatic write_obi(input logic [31:0] w_addr, input logic [31:0] w_data, input logic [3:0] w_be);
    int timeout_count = 0; sbr_obi_req_t req_txn; @(posedge clk_i); req_txn = '0;
    req_txn.req = 1'b1; req_txn.a.we = 1'b1; req_txn.a.addr = w_addr;
    req_txn.a.wdata = w_data; req_txn.a.be = w_be; user_sbr_obi_req = req_txn; req_ongoing = 1'b1;
    $display("%t : TB: OBI Write Req : Addr=0x%h, Data=0x%h, BE=0x%b", $time, w_addr, w_data, w_be);
    while (user_sbr_obi_rsp.gnt !== 1'b1 && timeout_count < OBI_TIMEOUT) begin @(posedge clk_i); timeout_count++; end
    if (timeout_count >= OBI_TIMEOUT) begin $error("%t : TB: Timeout OBI grant write 0x%h. Rsp: %p", $time, w_addr, user_sbr_obi_rsp); $finish; end
    $display("%t : TB: OBI Write Gnt Rcvd: Addr=0x%h", $time, w_addr);
    @(posedge clk_i); user_sbr_obi_req.req = 1'b0; req_ongoing = 1'b0;
    @(posedge clk_i); user_sbr_obi_req = '0;
  endtask

  task automatic read_obi(input logic [31:0] r_addr, output logic [31:0] r_data_val, output logic r_err);
    int timeout_count_gnt = 0; int timeout_count_rvalid = 0; sbr_obi_req_t req_txn;
    sbr_obi_r_chan_t rsp_r_chan_temp; logic grant_received; @(posedge clk_i); req_txn = '0;
    req_txn.req = 1'b1; req_txn.a.we = 1'b0; req_txn.a.addr = r_addr; user_sbr_obi_req = req_txn; req_ongoing = 1'b1;
    $display("%t : TB: OBI Read Req  : Addr=0x%h", $time, r_addr);
    grant_received = 1'b0;
    while (timeout_count_gnt < OBI_TIMEOUT) begin if (user_sbr_obi_rsp.gnt === 1'b1) begin grant_received = 1'b1; break; end @(posedge clk_i); timeout_count_gnt++; end
    if (!grant_received) begin $error("%t : TB: Timeout OBI grant read 0x%h. Rsp: %p", $time, r_addr, user_sbr_obi_rsp); $finish; end
    $display("%t : TB: OBI Read Gnt Rcvd: Addr=0x%h", $time, r_addr);
    @(posedge clk_i); user_sbr_obi_req.req = 1'b0; req_ongoing = 1'b0;
    while (user_sbr_obi_rsp.rvalid !== 1'b1 && timeout_count_rvalid < OBI_TIMEOUT) begin @(posedge clk_i); timeout_count_rvalid++; end
    if (timeout_count_rvalid >= OBI_TIMEOUT) begin $error("%t : TB: Timeout OBI rvalid read 0x%h. Rsp: %p", $time, r_addr, user_sbr_obi_rsp); $finish; end
    rsp_r_chan_temp = user_sbr_obi_rsp.r; r_data_val = rsp_r_chan_temp.rdata; r_err = rsp_r_chan_temp.err;
    $display("%t : TB: OBI Read Data Rcvd: Addr=0x%h Data=0x%08x Err=%b RVALID=%b", $time, r_addr, r_data_val, r_err, user_sbr_obi_rsp.rvalid);
    @(posedge clk_i); user_sbr_obi_req = '0;
  endtask

  task automatic wait_spi_engine_idle();
    logic [31:0] status_val; logic busy_bit, done_bit_tb, read_err; int timeout_count = 0;
    $display("%t : TB: Waiting for SPI Engine to finish...", $time); @(posedge clk_i);
    do begin
      read_obi(SPI_STATUS_ADDR, status_val, read_err);
      if (read_err) begin $error("%t : TB: OBI Error reading SPI Engine Status!", $time); $finish; end
      busy_bit = status_val[0]; done_bit_tb = status_val[1];
      $display("%t : TB: Polling SPI Engine Status (Addr 0x%h): 0x%08x (done=%b, busy=%b)", $time, SPI_STATUS_ADDR, status_val, done_bit_tb, busy_bit);
      timeout_count++; if (busy_bit === 1'b1) @(posedge clk_i);
    end while (busy_bit === 1'b1 && timeout_count < SPI_DONE_TIMEOUT);
    if (timeout_count >= SPI_DONE_TIMEOUT) begin $error("%t : TB: Timeout SPI Engine idle. Status: 0x%08x", $time, status_val); $finish; end
    read_obi(SPI_STATUS_ADDR, status_val, read_err);
    $display("%t : TB: SPI Engine finished. Final Status: 0x%08x (done=%b, busy=%b)", $time, status_val, status_val[1], status_val[0]);
  endtask

  task automatic send_spi_byte_to_engine(input [7:0] spi_data);
      $display("%t : TB: Sending SPI byte 0x%02h to engine...", $time, spi_data);
      wait_spi_engine_idle();
      write_obi(SPI_TX_ADDR, {24'h0, spi_data}, 4'b0001);
      write_obi(SPI_CTRL_ADDR, 32'h1, 4'b0001);
      wait_spi_engine_idle();
      $display("%t : TB: Finished sending SPI byte 0x%02h to engine.", $time, spi_data);
  endtask

  // Test Scenario
  initial begin
    $dumpfile("tb_user_domain_spi_engine_test.vcd");
    $dumpvars(0, tb_user_domain_spi_engine_test);

    rst_ni = 1'b0; $display("%t : TB: Asserting Reset", $time); #(RESET_DURATION);
    rst_ni = 1'b1; $display("%t : TB: Deasserting Reset", $time); @(posedge clk_i);
    $display("%t : TB: Starting Simple SPI Engine Test via user_domain...", $time);

    send_spi_byte_to_engine(8'hAA);
    #(5 * CLK_PERIOD);
    send_spi_byte_to_engine(8'h55);

    #(10 * CLK_PERIOD);
    $display("%t : TB: Test Sequence Complete.", $time);
    $finish;
  end
  final begin if (req_ongoing) user_sbr_obi_req.req = 1'b0; end
endmodule