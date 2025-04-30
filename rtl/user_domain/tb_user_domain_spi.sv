`timescale 1ns/1ps

import croc_pkg::*;
import user_pkg::*;
// Note: Ensure obi_pkg is available if types are defined there instead of croc_pkg

module user_domain_spi_tb;

  // Parameters
  localparam CLK_PERIOD       = 10ns; // 100 MHz clock
  localparam RESET_DURATION   = 2 * CLK_PERIOD;
  localparam OBI_TIMEOUT      = 1000; // Max cycles to wait for OBI gnt/rvalid
  localparam SPI_DONE_TIMEOUT = 5000; // Max cycles to wait for SPI busy=0
  localparam GpioCount        = 16;   // Match DUT parameterization

  // DUT Address Map (Combine base from user_pkg with offsets)
  // Offsets within the SPI peripheral itself
  localparam logic [31:0] SPI_CTRL_REG_OFFSET   = 32'h00;
  localparam logic [31:0] SPI_TX_REG_OFFSET     = 32'h04;
  localparam logic [31:0] SPI_STATUS_REG_OFFSET = 32'h08;
  // Absolute addresses
  localparam logic [31:0] SPI_CTRL_ADDR   = UserSpiAddrOffset + SPI_CTRL_REG_OFFSET;
  localparam logic [31:0] SPI_TX_ADDR     = UserSpiAddrOffset + SPI_TX_REG_OFFSET;
  localparam logic [31:0] SPI_STATUS_ADDR = UserSpiAddrOffset + SPI_STATUS_REG_OFFSET;

  
  // Signals
  
  logic clk;
  logic rst_ni; 

  // user_domain Interface Signals
  logic        ref_clk_i; // Tie off if unused by TB
  logic        testmode_i; // Tie off if unused by TB

  // OBI Slave Interface (Testbench drives req, DUT drives rsp)
  sbr_obi_req_t user_sbr_obi_req; // TB drives this struct
  sbr_obi_rsp_t user_sbr_obi_rsp; // DUT drives this struct

  // OBI Master Interface (Testbench monitors req, DUT monitors rsp)
  // Tie off rsp if user domain doesn't act as master in this test
  mgr_obi_req_t user_mgr_obi_req; // DUT drives this
  mgr_obi_rsp_t user_mgr_obi_rsp; // TB drives this (tie off)

  // Other user_domain ports
  logic [GpioCount-1:0]       gpio_in_sync_i; // Tie off if unused by TB
  logic [NumExternalIrqs-1:0] interrupts_o;   // Monitor if needed

  // SPI Outputs from user_domain
  logic spi_sck_o;
  logic spi_mosi_o;
  // spi_cs_no removed as it's handled by GPIO in this architecture

  // Internal TB signals for OBI tasks
  logic req_ongoing; // Flag to manage request signal

  // DUT Instantiation
  user_domain #(
    .GpioCount( GpioCount )
  ) dut (
    .clk_i,
    .ref_clk_i,
    .rst_ni,
    .testmode_i,

    .user_sbr_obi_req_i ( user_sbr_obi_req ), // Connect TB request
    .user_sbr_obi_rsp_o ( user_sbr_obi_rsp ), // Connect DUT response

    .user_mgr_obi_req_o ( user_mgr_obi_req ), // Monitor DUT master req
    .user_mgr_obi_rsp_i ( user_mgr_obi_rsp ), // Connect TB master rsp (tied off)

    .gpio_in_sync_i ( gpio_in_sync_i ), // Connect TB GPIO input (tied off)
    .interrupts_o   ( interrupts_o   ), // Monitor DUT interrupts

    .spi_sck_o      ( spi_sck_o  ),       // Monitor SPI SCK output
    .spi_mosi_o     ( spi_mosi_o )        // Monitor SPI MOSI output
    // spi_cs_no port removed from DUT
  );

  
  // Clock Generation
  initial begin
    clk = 1'b0;
    forever #(CLK_PERIOD / 2) clk = ~clk;
  end

  
  // OBI Tasks using Bundled Types

  // Task to perform an OBI write cycle
  task automatic write_obi(input logic [31:0] w_addr, input logic [31:0] w_data, input logic [3:0] w_be);
    int timeout_count = 0;
    sbr_obi_req_t req_txn; // Local struct for transaction

    @(posedge clk); // Align to clock edge before starting

    // Prepare the request bundle
    req_txn = '0; // Default all fields to 0/low
    req_txn.req    = 1'b1;
    req_txn.a.we   = 1'b1; // Write operation
    req_txn.a.addr = w_addr;
    req_txn.a.wdata = w_data;
    req_txn.a.be   = w_be;
    // req_txn.a.aid can be left 0 if unused

    // Drive the request bundle
    user_sbr_obi_req = req_txn;
    req_ongoing = 1'b1; // Set flag

    $display("%t : OBI Write Req : Addr=0x%h Data=0x%h BE=0x%b", $time, w_addr, w_data, w_be);

    // Wait for grant from DUT, with a timeout
    while (user_sbr_obi_rsp.gnt !== 1'b1 && timeout_count < OBI_TIMEOUT) begin
      @(posedge clk);
      timeout_count++;
    end

    // Check if timeout occurred
    if (timeout_count == OBI_TIMEOUT) begin
      $error("%t : Timeout waiting for OBI grant during write to %h", $time, w_addr);
      $finish;
    end

    // Request was granted, deassert request on the next cycle
    @(posedge clk);
    user_sbr_obi_req.req = 1'b0; // Only deassert req
    req_ongoing = 1'b0; // Clear flag
    $display("%t : OBI Write Gnt Rcvd: Addr=0x%h", $time, w_addr);

    // Keep other request signals stable for one more cycle then deassert (optional)
    @(posedge clk);
    user_sbr_obi_req = '0;

  endtask

  // Task to perform an OBI read cycle
  task automatic read_obi(input logic [31:0] r_addr, output logic [31:0] r_data_val);
    int timeout_count_gnt = 0;
    int timeout_count_rvalid = 0;
    sbr_obi_req_t req_txn; // Local struct for transaction

    @(posedge clk); // Align to clock edge before starting

    // Prepare the request bundle
    req_txn = '0; // Default all fields to 0/low
    req_txn.req    = 1'b1;
    req_txn.a.we   = 1'b0; // Read operation
    req_txn.a.addr = r_addr;
    // wdata, be, aid can be left 0

    // Drive the request bundle
    user_sbr_obi_req = req_txn;
    req_ongoing = 1'b1; // Set flag

    $display("%t : OBI Read Req  : Addr=0x%h", $time, r_addr);

    // Wait for grant from DUT, with a timeout
    while (user_sbr_obi_rsp.gnt !== 1'b1 && timeout_count_gnt < OBI_TIMEOUT) begin
      @(posedge clk);
      timeout_count_gnt++;
    end

    // Check if grant timeout occurred
    if (timeout_count_gnt == OBI_TIMEOUT) begin
      $error("%t : Timeout waiting for OBI grant during read from %h", $time, r_addr);
      $finish;
    end

    // Request was granted, deassert request on the next cycle
    @(posedge clk);
    user_sbr_obi_req.req = 1'b0; // Only deassert req
    req_ongoing = 1'b0; // Clear flag
    $display("%t : OBI Read Gnt Rcvd: Addr=0x%h", $time, r_addr);

    // Wait for valid read data from DUT, with a timeout
    while (user_sbr_obi_rsp.rvalid !== 1'b1 && timeout_count_rvalid < OBI_TIMEOUT) begin
        @(posedge clk);
        timeout_count_rvalid++;
    end

    // Check if rvalid timeout occurred
    if (timeout_count_rvalid == OBI_TIMEOUT) begin
        $error("%t : Timeout waiting for OBI rvalid during read from %h", $time, r_addr);
        $finish;
    end

    // rvalid is high, capture data (data is valid on this cycle)
    // Adjust field access based on actual sbr_obi_rsp_t structure
    r_data_val = user_sbr_obi_rsp.r.data;
    $display("%t : OBI Read Data Rcvd: Addr=0x%h Data=0x%h", $time, r_addr, r_data_val);

    // Deassert remaining request signals (optional)
    @(posedge clk);
    user_sbr_obi_req = '0;

  endtask

  
  // SPI Helper Tasks
  // Task to wait for SPI peripheral to finish (busy bit = 0)
  task automatic wait_spi_done();
      logic [31:0] status_val;
      logic busy_bit;
      int timeout_count = 0;
      $display("%t : Waiting for SPI peripheral to finish...", $time);
      // Wait at least one cycle before checking status after triggering
      @(posedge clk);
      do begin
          read_obi(SPI_STATUS_ADDR, status_val); // Read the status register
          busy_bit = status_val[0]; // Assuming busy is bit 0 from DUT's status_bits logic
          timeout_count++;
          if (busy_bit === 1'b1) @(posedge clk); // If busy, wait a clock cycle
      end while (busy_bit === 1'b1 && timeout_count < SPI_DONE_TIMEOUT); // Loop while busy and no timeout

      // Check if timeout occurred
      if (timeout_count == SPI_DONE_TIMEOUT) begin
          $error("%t : Timeout waiting for SPI peripheral to become idle.", $time);
          $finish;
      end
      $display("%t : SPI peripheral finished.", $time);
  endtask

  // Task to send one byte via SPI, handling OBI writes and waiting
  task automatic send_spi_byte(input [7:0] spi_data);
      $display("%t : Sending SPI byte: 0x%h", $time, spi_data);
      // Ensure previous operation is done (very important!)
      wait_spi_done();

      // Write data byte to TX register via OBI
      // Use byte enable 4'b0001 to indicate only the lowest byte is valid
      write_obi(SPI_TX_ADDR, {24'h0, spi_data}, 4'b0001);

      // Write to CTRL register via OBI to trigger the SPI transfer
      // Data value doesn't matter, but set BE appropriately if needed (e.g., 4'b0001)
      write_obi(SPI_CTRL_ADDR, 32'h1, 4'b0001);

      // Wait for this SPI transfer to complete
      wait_spi_done();
      $display("%t : Finished sending SPI byte: 0x%h", $time, spi_data);
  endtask

  
  // Test Scenario
  initial begin
    // VCD Dump Setup
    $dumpfile("user_domain_spi_tb.vcd"); // Changed filename
    // Dump signals one level down (inside the DUT instance)
    $dumpvars(0, dut);

    // Initialize signals & Reset DUT
    rst_ni = 1'b0; // Assert reset (active low)
    req_ongoing = 1'b0;
    user_sbr_obi_req = '0; // Default OBI request to inactive
    user_mgr_obi_rsp = '0; // Default OBI master response to inactive
    ref_clk_i = 1'b0;      // Tie off unused inputs
    testmode_i = 1'b0;     // Tie off unused inputs
    gpio_in_sync_i = '0;   // Tie off unused inputs

    $display("%t : Asserting Reset", $time);
    #(RESET_DURATION);
    rst_ni = 1'b1; // Deassert reset
    $display("%t : Deasserting Reset", $time);
    @(posedge clk); // Wait for first clock edge after reset release

    // --- Test Sequence ---
    $display("%t : Starting Test Sequence...", $time);

    // Send SSD1306 Command Mode byte (0x00)
    // Assumes D/C pin is LOW (handled by hypothetical software/GPIO)
    send_spi_byte(8'h00);

    // Send SSD1306 Display ON command (0xAF)
    // Assumes D/C pin is LOW (handled by hypothetical software/GPIO)
    send_spi_byte(8'hAF);

    // Add a small delay at the end before finishing
    #(10 * CLK_PERIOD);

    // --- End Test Sequence ---
    $display("%t : Test Sequence Complete.", $time);
    $finish; // End simulation
  end

  // Deassert request if simulation finishes while req is high
  final begin
    if (req_ongoing) begin
        user_sbr_obi_req.req = 1'b0;
    end
  end

endmodule