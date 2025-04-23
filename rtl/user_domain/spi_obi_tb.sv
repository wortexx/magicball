`timescale 1ns/1ps

module spi_obi_tb;

  //--------------------------------------------------------------------------
  // Parameters
  //--------------------------------------------------------------------------
  localparam CLK_PERIOD      = 10ns; // 100 MHz clock
  localparam RESET_DURATION  = 2 * CLK_PERIOD;
  localparam OBI_TIMEOUT     = 1000; // Max cycles to wait for OBI gnt/rvalid
  localparam SPI_DONE_TIMEOUT= 5000; // Max cycles to wait for SPI busy=0

  // DUT Address Map (must match DUT parameters)
  localparam logic [31:0] SPI_CTRL_ADDR   = 32'h00000000;
  localparam logic [31:0] SPI_TX_ADDR     = 32'h00000004;
  localparam logic [31:0] SPI_STATUS_ADDR = 32'h00000008;

  //--------------------------------------------------------------------------
  // Signals
  //--------------------------------------------------------------------------
  // Clock and reset
  logic clk;
  logic rst_ni; // Note: DUT uses rst_ni (active low)

  // OBI interface signals
  logic        req;
  logic [31:0] addr;
  logic [31:0] wdata;
  logic [3:0]  be; // Added byte enable signal
  logic        we;
  logic        gnt;    // Output from DUT
  logic        rvalid; // Output from DUT
  logic [31:0] rdata;  // Output from DUT

  // SPI signals (Outputs from DUT)
  logic sck;
  logic mosi;
  logic cs;

  //--------------------------------------------------------------------------
  // DUT Instantiation
  //--------------------------------------------------------------------------
  obi_spi_peripheral dut (
    .clk_i    (clk),
    .rst_ni   (rst_ni), // Connect to active low reset

    // OBI Interface
    .req_i    (req),
    .addr_i   (addr),
    .wdata_i  (wdata),
    .be_i     (be),     // Connect byte enable
    .we_i     (we),
    .gnt_o    (gnt),
    .rvalid_o (rvalid),
    .rdata_o  (rdata),

    // SPI Interface
    .sck_o    (sck),
    .mosi_o   (mosi),
    .cs_o     (cs)
  );

  //--------------------------------------------------------------------------
  // Clock Generation
  //--------------------------------------------------------------------------
  initial begin
    clk = 1'b0;
    forever #(CLK_PERIOD / 2) clk = ~clk;
  end

  //--------------------------------------------------------------------------
  // OBI Tasks with Handshake & Timeout
  //--------------------------------------------------------------------------

  // Task to perform an OBI write cycle
  task automatic write_obi(input logic [31:0] w_addr, input logic [31:0] w_data, input logic [3:0] w_be);
    int timeout_count = 0;
    @(posedge clk); // Align to clock edge before starting
    req   = 1'b1;
    we    = 1'b1;
    addr  = w_addr;
    wdata = w_data;
    be    = w_be;
    $display("%t : OBI Write Req : Addr=0x%h Data=0x%h BE=0x%b", $time, w_addr, w_data, w_be);

    // Wait for grant from DUT, with a timeout
    while (gnt !== 1'b1 && timeout_count < OBI_TIMEOUT) begin
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
    req = 1'b0;
    // Deassert write controls after request goes low
    we = 1'b0;
    be = 4'b0;
    $display("%t : OBI Write Gnt Rcvd: Addr=0x%h", $time, w_addr);
  endtask

  // Task to perform an OBI read cycle
  task automatic read_obi(input logic [31:0] r_addr, output logic [31:0] r_data_val);
    int timeout_count_gnt = 0;
    int timeout_count_rvalid = 0;
    @(posedge clk); // Align to clock edge before starting
    req   = 1'b1;
    we    = 1'b0; // Read operation
    addr  = r_addr;
    wdata = 'x;   // Don't care for reads
    be    = 4'b0; // Don't care for reads
    $display("%t : OBI Read Req  : Addr=0x%h", $time, r_addr);

    // Wait for grant from DUT, with a timeout
    while (gnt !== 1'b1 && timeout_count_gnt < OBI_TIMEOUT) begin
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
    req = 1'b0;
    $display("%t : OBI Read Gnt Rcvd: Addr=0x%h", $time, r_addr);

    // Wait for valid read data from DUT, with a timeout
    while (rvalid !== 1'b1 && timeout_count_rvalid < OBI_TIMEOUT) begin
        @(posedge clk);
        timeout_count_rvalid++;
    end

    // Check if rvalid timeout occurred
    if (timeout_count_rvalid == OBI_TIMEOUT) begin
        $error("%t : Timeout waiting for OBI rvalid during read from %h", $time, r_addr);
        $finish;
    end

    // rvalid is high, capture data (data is valid on this cycle)
    r_data_val = rdata;
    $display("%t : OBI Read Data Rcvd: Addr=0x%h Data=0x%h", $time, r_addr, r_data_val);

    // Wait one more cycle for signals to settle (optional, usually not needed for reads)
    @(posedge clk);
  endtask

  //--------------------------------------------------------------------------
  // SPI Helper Tasks
  //--------------------------------------------------------------------------

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
 
  //--------------------------------------------------------------------------
  // SPI Waveform Monitor (Optional)
  //--------------------------------------------------------------------------
  always @(posedge sck) begin
    $display("%t : SPI Shift - CS=%b MOSI=%b SCK ↑", $time, cs, mosi);
  end

  //--------------------------------------------------------------------------
  // Test Scenario
  //--------------------------------------------------------------------------
  initial begin
    // VCD Dump Setup
    $dumpfile("spi_obi_tb.vcd");
    $dumpvars(0, spi_obi_tb); // Dump all signals in this testbench module

    // Initialize signals & Reset DUT
    rst_ni = 1'b0; // Assert reset (active low)
    req    = 1'b0;
    we     = 1'b0;
    addr   = 'x;
    wdata  = 'x;
    be     = 4'b0;
    $display("%t : Asserting Reset", $time);
    #(RESET_DURATION);
    rst_ni = 1'b1; // Deassert reset
    $display("%t : Deasserting Reset", $time);
    @(posedge clk); // Wait for first clock edge after reset release

    // --- Test Sequence ---
    $display("%t : Starting Test Sequence...", $time);

    // Send SSD1306 Command Mode byte (0x00)
    // This byte typically tells the SSD1306 that subsequent bytes are commands
    // (Check SSD1306 datasheet for exact command/data protocol)
    send_spi_byte(8'h00);

    // Send SSD1306 Display ON command (0xAF)
    send_spi_byte(8'hAE); 

    

    // Add a small delay at the end before finishing
    #(10 * CLK_PERIOD);

    // --- End Test Sequence ---
    $display("%t : Test Sequence Complete.", $time);
    $finish; // End simulation
  end

endmodule
