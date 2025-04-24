// Testbench for user_domain containing single SPI Peripheral
// Simulates software control of CS and D/C pins via testbench signals
`timescale 1ns/1ps

// Import necessary packages for types and parameters
import croc_pkg::*;
import user_pkg::*;
// Note: Ensure obi_pkg is available if types are defined there instead of croc_pkg

module user_domain_sw_cs_tb;

  //--------------------------------------------------------------------------
  // Parameters
  //--------------------------------------------------------------------------
  localparam CLK_PERIOD       = 50ns; // 20 MHz clock
  localparam RESET_DURATION   = 2 * CLK_PERIOD;
  localparam OBI_TIMEOUT      = 1000; // Max cycles to wait for OBI gnt/rvalid
  localparam SPI_DONE_TIMEOUT = 5000; // Max cycles to wait for SPI busy=0
  localparam GpioCount        = 16;   // Match DUT parameterization

  // DUT Address Map (Combine base from user_pkg with offsets)
  localparam logic [31:0] SPI_CTRL_REG_OFFSET   = 32'h00;
  localparam logic [31:0] SPI_TX_REG_OFFSET     = 32'h04;
  localparam logic [31:0] SPI_STATUS_REG_OFFSET = 32'h08;
  localparam logic [31:0] SPI_CTRL_ADDR   = UserSpiAddrOffset + SPI_CTRL_REG_OFFSET;
  localparam logic [31:0] SPI_TX_ADDR     = UserSpiAddrOffset + SPI_TX_REG_OFFSET;
  localparam logic [31:0] SPI_STATUS_ADDR = UserSpiAddrOffset + SPI_STATUS_REG_OFFSET;

  // Device Selection (for TB tasks)
  typedef enum { DEV_NONE, DEV_SSD1331, DEV_ADXL345 } device_e;

  //--------------------------------------------------------------------------
  // Signals
  //--------------------------------------------------------------------------
  // Clock and reset
  logic clk_i;
  logic rst_ni; // Active low reset for DUT

  // user_domain Interface Signals
  logic        ref_clk_i;
  logic        testmode_i;
  sbr_obi_req_t user_sbr_obi_req; // TB drives this struct
  sbr_obi_rsp_t user_sbr_obi_rsp; // DUT drives this struct
  mgr_obi_req_t user_mgr_obi_req; // DUT drives this
  mgr_obi_rsp_t user_mgr_obi_rsp; // TB drives this (tie off)
  logic [GpioCount-1:0]       gpio_in_sync_i;
  logic [NumExternalIrqs-1:0] interrupts_o;

  // SPI Outputs from user_domain
  logic spi_sck_o;
  logic spi_mosi_o;
  // CS output from DUT is not used/connected

  // *** Testbench signals simulating GPIO outputs for CS/DC ***
  logic tb_cs_ssd1331_n; // Active Low CS for Display
  logic tb_cs_adxl345_n; // Active Low CS for Accelerometer
  logic tb_dc_ssd1331;   // Data(1)/Command(0) for Display

  // *** Testbench signal simulating GPIO input for Interrupt ***
  logic tb_int_adxl345;  // Input signal representing ADXL INT pin

  // Internal TB signals
  logic req_ongoing;

  //--------------------------------------------------------------------------
  // DUT Instantiation
  //--------------------------------------------------------------------------
  user_domain #(
    .GpioCount( GpioCount )
  ) dut (
    .clk_i,
    .ref_clk_i,
    .rst_ni,
    .testmode_i,
    .user_sbr_obi_req_i ( user_sbr_obi_req ),
    .user_sbr_obi_rsp_o ( user_sbr_obi_rsp ),
    .user_mgr_obi_req_o ( user_mgr_obi_req ),
    .user_mgr_obi_rsp_i ( user_mgr_obi_rsp ),
    .gpio_in_sync_i     ( gpio_in_sync_i ), // Can connect tb_int_adxl345 here if needed
    .interrupts_o       ( interrupts_o   ),
    .spi_sck_o          ( spi_sck_o  ),
    .spi_mosi_o         ( spi_mosi_o )
    // spi_cs_no port removed from DUT
  );

  //--------------------------------------------------------------------------
  // Clock Generation & Default Connections
  //--------------------------------------------------------------------------
  initial begin
    clk_i = 1'b0;
    forever #(CLK_PERIOD / 2) clk_i = ~clk_i;
  end

  // Tie off unused inputs / provide defaults
  initial begin
     ref_clk_i = 1'b0;
     testmode_i = 1'b0;
     gpio_in_sync_i = '0;
     user_mgr_obi_rsp = '0; // Default OBI master response to inactive
     tb_cs_ssd1331_n = 1'b1; // Default CS inactive (high)
     tb_cs_adxl345_n = 1'b1; // Default CS inactive (high)
     tb_dc_ssd1331 = 1'b0;   // Default DC low (command)
     tb_int_adxl345 = 1'b0;  // Default interrupt inactive
  end

  //--------------------------------------------------------------------------
  // OBI Tasks (Identical to previous TB version)
  //--------------------------------------------------------------------------

  // Task to perform an OBI write cycle
  task automatic write_obi(input logic [31:0] w_addr, input logic [31:0] w_data, input logic [3:0] w_be);
    int timeout_count = 0;
    sbr_obi_req_t req_txn; // Local struct for transaction
    @(posedge clk_i); // Align to clock edge before starting
    req_txn = '0; // Default all fields to 0/low
    req_txn.req    = 1'b1;
    req_txn.a.we   = 1'b1; // Write operation
    req_txn.a.addr = w_addr;
    req_txn.a.wdata = w_data;
    req_txn.a.be   = w_be;
    user_sbr_obi_req = req_txn;
    req_ongoing = 1'b1; // Set flag
    $display("%t : OBI Write Req : Addr=0x%h Data=0x%h BE=0x%b", $time, w_addr, w_data, w_be);
    while (user_sbr_obi_rsp.gnt !== 1'b1 && timeout_count < OBI_TIMEOUT) begin
      @(posedge clk_i);
      timeout_count++;
    end
    if (timeout_count == OBI_TIMEOUT) begin
      $error("%t : Timeout waiting for OBI grant during write to %h", $time, w_addr); $finish;
    end
    @(posedge clk_i);
    user_sbr_obi_req.req = 1'b0; // Only deassert req
    req_ongoing = 1'b0; // Clear flag
    $display("%t : OBI Write Gnt Rcvd: Addr=0x%h", $time, w_addr);
    @(posedge clk_i);
    user_sbr_obi_req = '0;
  endtask

  // Task to perform an OBI read cycle
  task automatic read_obi(input logic [31:0] r_addr, output logic [31:0] r_data_val);
    int timeout_count_gnt = 0;
    int timeout_count_rvalid = 0;
    sbr_obi_req_t req_txn; // Local struct for transaction
    @(posedge clk_i); // Align to clock edge before starting
    req_txn = '0; // Default all fields to 0/low
    req_txn.req    = 1'b1;
    req_txn.a.we   = 1'b0; // Read operation
    req_txn.a.addr = r_addr;
    user_sbr_obi_req = req_txn;
    req_ongoing = 1'b1; // Set flag
    $display("%t : OBI Read Req  : Addr=0x%h", $time, r_addr);
    while (user_sbr_obi_rsp.gnt !== 1'b1 && timeout_count_gnt < OBI_TIMEOUT) begin
      @(posedge clk_i);
      timeout_count_gnt++;
    end
    if (timeout_count_gnt == OBI_TIMEOUT) begin
      $error("%t : Timeout waiting for OBI grant during read from %h", $time, r_addr); $finish;
    end
    @(posedge clk_i);
    user_sbr_obi_req.req = 1'b0; // Only deassert req
    req_ongoing = 1'b0; // Clear flag
    $display("%t : OBI Read Gnt Rcvd: Addr=0x%h", $time, r_addr);
    while (user_sbr_obi_rsp.rvalid !== 1'b1 && timeout_count_rvalid < OBI_TIMEOUT) begin
        @(posedge clk_i);
        timeout_count_rvalid++;
    end
    if (timeout_count_rvalid == OBI_TIMEOUT) begin
        $error("%t : Timeout waiting for OBI rvalid during read from %h", $time, r_addr); $finish;
    end
    r_data_val = user_sbr_obi_rsp.r.rdata; // Adjust field access if needed
    $display("%t : OBI Read Data Rcvd: Addr=0x%h Data=0x%h", $time, r_addr, r_data_val);
    @(posedge clk_i);
    user_sbr_obi_req = '0;
  endtask

  //--------------------------------------------------------------------------
  // SPI Helper Tasks (Simulating Software Control)
  //--------------------------------------------------------------------------

  // Task to wait for SPI peripheral to finish (busy bit = 0)
  task automatic wait_spi_done();
      logic [31:0] status_val;
      logic busy_bit;
      int timeout_count = 0;
      $display("%t : Waiting for SPI HW to finishs...", $time);
      @(posedge clk_i); // Ensure we don't read in the same cycle we triggered
      do begin
          read_obi(SPI_STATUS_ADDR, status_val); // Read the status register
          busy_bit = status_val[0]; // Assuming busy is bit 0
          timeout_count++;
          if (busy_bit === 1'b1) @(posedge clk_i); // If busy, wait a clock cycle
      end while (busy_bit === 1'b1 && timeout_count < SPI_DONE_TIMEOUT);
      if (timeout_count == SPI_DONE_TIMEOUT) begin
          $error("%t : Timeout waiting for SPI HW to become idle.", $time); $finish;
      end
      $display("%t : SPI HW finished.", $time);
  endtask

  // Task to select/deselect a device using simulated GPIO CS lines
  task automatic set_cs(input device_e device, input logic active);
      @(posedge clk_i); // Allow previous OBI cycle to finish
      case(device)
          DEV_SSD1331: tb_cs_ssd1331_n = active ? 1'b0 : 1'b1; // Active low
          DEV_ADXL345: tb_cs_adxl345_n = active ? 1'b0 : 1'b1; // Active low
          DEV_NONE: begin // Deactivate both
              tb_cs_ssd1331_n = 1'b1;
              tb_cs_adxl345_n = 1'b1;
          end
      endcase
      $display("%t : Set CS: %s %s", $time, device.name(), active ? "ACTIVE (Low)" : "INACTIVE (High)");
      #(CLK_PERIOD); // Small delay representing GPIO write settling time
  endtask

  // Task to set the D/C line for the display
  task automatic set_dc(input logic is_data);
      @(posedge clk_i); // Allow previous OBI cycle to finish
      tb_dc_ssd1331 = is_data; // 0 for command, 1 for data
      $display("%t : Set D/C: %s", $time, is_data ? "Data (High)" : "Command (Low)");
      #(CLK_PERIOD); // Small delay representing GPIO write settling time
  endtask

  // Task to send one byte via SPI to a selected device
  // Assumes CS is already asserted for the target device
  task automatic send_spi_byte_raw(input [7:0] spi_data);
      // Ensure previous HW SPI operation is done
      wait_spi_done();
      // Write data byte to TX register via OBI
      write_obi(SPI_TX_ADDR, {24'h0, spi_data}, 4'b0001);
      // Write to CTRL register via OBI to trigger the SPI transfer
      write_obi(SPI_CTRL_ADDR, 32'h1, 4'b0001);
      // Wait for this specific HW SPI transfer to complete
      wait_spi_done();
  endtask

  // Task to send a command byte to a specific device
  task automatic send_command(input device_e device, input [7:0] cmd);
      $display("%t : Sending Command 0x%h to %s", $time, cmd, device.name());
      set_cs(device, 1'b1); // Activate CS
      if (device == DEV_SSD1331) set_dc(1'b0); // Set D/C low for command
      send_spi_byte_raw(cmd);
      set_cs(device, 1'b0); // Deactivate CS
      $display("%t : Finished Command 0x%h to %s", $time, cmd, device.name());
  endtask

   // Task to send a data byte to a specific device
  task automatic send_data(input device_e device, input [7:0] data);
      $display("%t : Sending Data 0x%h to %s", $time, data, device.name());
      set_cs(device, 1'b1); // Activate CS
      if (device == DEV_SSD1331) set_dc(1'b1); // Set D/C high for data
      send_spi_byte_raw(data);
      set_cs(device, 1'b0); // Deactivate CS
      $display("%t : Finished Data 0x%h to %s", $time, data, device.name());
  endtask

  //--------------------------------------------------------------------------
  // Test Scenario
  //--------------------------------------------------------------------------
  initial begin
    // VCD Dump Setup
    $dumpfile("user_domain_sw_cs_tb.vcd"); // New filename
    $dumpvars(0, user_domain_sw_cs_tb); // Dump all signals in TB and DUT instance

    // Initialize signals & Reset DUT
    rst_ni = 1'b0; // Assert reset (active low)
    req_ongoing = 1'b0;
    user_sbr_obi_req = '0; // Default OBI request to inactive

    $display("%t : Asserting Reset", $time);
    #(RESET_DURATION);
    rst_ni = 1'b1; // Deassert reset
    $display("%t : Deasserting Reset", $time);
    @(posedge clk_i); // Wait for first clock edge after reset release

    // --- Test Sequence ---
    $display("%t : Starting Test Sequence...", $time);

    // --- Initialize ADXL345 (Example: Put in Measurement Mode) ---
    // Assumes ADXL345 requires specific sequence - consult datasheet
    // Example: Write 0x08 to POWER_CTL register (0x2D)
    // This involves sending 2 bytes: Write command + address, then data byte
    $display("--- Initialize ADXL345 ---");
    set_cs(DEV_ADXL345, 1'b1); // Activate ADXL CS
    // Send Write command (e.g., 0x00) + Register Address (e.g., 0x2D)
    // ADXL345 combines command/addr, check datasheet. Assuming 0x2D means write to 0x2D.
    send_spi_byte_raw(8'h2D);
    // Send Data Byte (e.g., 0x08 for measurement mode)
    send_spi_byte_raw(8'h08);
    set_cs(DEV_ADXL345, 1'b0); // Deactivate ADXL CS
    $display("--- ADXL345 Init Done ---");

    #(10*CLK_PERIOD); // Delay between device initializations

    // --- Initialize SSD1331 Display (Example: Turn ON) ---
    // Using send_command task which handles CS and D/C
    $display("--- Initialize SSD1331 ---");
    send_command(DEV_SSD1331, 8'hAE); // Display OFF (Typical first step)
    // ... Add other SSD1331 init commands from sequence using send_command() ...
    send_command(DEV_SSD1331, 8'hAF); // Display ON (Typical last step)
    $display("--- SSD1331 Init Done ---");

    #(10*CLK_PERIOD);

    // --- Simulate waiting for and handling ADXL345 Interrupt ---
    $display("--- Waiting for ADXL345 Interrupt (Simulated) ---");
    // In a real scenario, would poll GPIO input connected to tb_int_adxl345
    // Here, we just simulate the interrupt occurring after some time
    #(100 * CLK_PERIOD);
    tb_int_adxl345 = 1'b1; // Simulate interrupt going active
    $display("%t : ADXL345 Interrupt Detected (Simulated)", $time);
    @(posedge clk_i);
    tb_int_adxl345 = 1'b0; // Simulate interrupt being cleared (by reading ADXL status later)

    // --- Respond to Interrupt: Display "HI" on SSD1331 (Conceptual) ---
    $display("--- Displaying 'HI' on SSD1331 ---");
    // 1. Set cursor position (Example: page 0, column 0) - Commands
    send_command(DEV_SSD1331, 8'hB0 | 0); // Set page address = 0
    send_command(DEV_SSD1331, 8'h00 | 0); // Set lower column address = 0
    send_command(DEV_SSD1331, 8'h10 | 0); // Set higher column address = 0

    // 2. Send pixel data for 'H' (Example 5x7 font, 5 bytes) - Data
    send_data(DEV_SSD1331, 8'h7F); // Byte 1 of 'H' bitmap
    send_data(DEV_SSD1331, 8'h08); // Byte 2 of 'H' bitmap
    send_data(DEV_SSD1331, 8'h08); // Byte 3 of 'H' bitmap
    send_data(DEV_SSD1331, 8'h08); // Byte 4 of 'H' bitmap
    send_data(DEV_SSD1331, 8'h7F); // Byte 5 of 'H' bitmap
    send_data(DEV_SSD1331, 8'h00); // Spacing column

    // 3. Send pixel data for 'I' (Example 5x7 font, 5 bytes) - Data
    send_data(DEV_SSD1331, 8'h00); // Byte 1 of 'I' bitmap
    send_data(DEV_SSD1331, 8'h41); // Byte 2 of 'I' bitmap
    send_data(DEV_SSD1331, 8'h7F); // Byte 3 of 'I' bitmap
    send_data(DEV_SSD1331, 8'h41); // Byte 4 of 'I' bitmap
    send_data(DEV_SSD1331, 8'h00); // Byte 5 of 'I' bitmap
    // Note: Actual pixel data depends heavily on font and SSD1331 color format

    $display("--- 'HI' Display Sequence Sent ---");

    // Add a small delay at the end before finishing
    #(50 * CLK_PERIOD);

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
