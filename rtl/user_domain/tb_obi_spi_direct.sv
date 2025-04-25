`timescale 1ns/1ps

module tb_obi_spi_direct;

  // Parameters
  localparam CLK_PERIOD       = 50ns; 
  localparam RESET_DURATION   = 2 * CLK_PERIOD;
  localparam OBI_TIMEOUT      = 1000; // Max cycles to wait for OBI gnt/rvalid
  localparam SPI_DONE_TIMEOUT = 5000; // Max cycles to wait for SPI busy=0

  // DUT Address Map (Offsets within the peripheral)
  localparam logic [31:0] SPI_CTRL_ADDR   = 32'h00; 
  localparam logic [31:0] SPI_TX_ADDR     = 32'h04; 
  localparam logic [31:0] SPI_STATUS_ADDR = 32'h08; 
  
  logic clk;
  logic rst_ni; 

  // OBI interface signals (connecting directly to DUT)
  logic        req;    
  logic [31:0] addr;   
  logic [31:0] wdata;  
  logic [3:0]  be;     
  logic        we;     
  logic        gnt;    
  logic        rvalid; 
  logic [31:0] rdata; 
  logic [31:0] status_after_done; //debug 
  logic [31:0] final_status;      //debug

  // SPI signals (Outputs from DUT)
  logic sck_o;
  logic mosi_o;
  logic cs_no; 

  // Internal TB signals
  logic req_ongoing;

  // DUT Instantiation

  obi_spi_peripheral dut (
    .clk_i    (clk),
    .rst_ni   (rst_ni),

    // OBI Interface
    .req_i    (req),
    .addr_i   (addr),
    .wdata_i  (wdata),
    .be_i     (be),
    .we_i     (we),
    .gnt_o    (gnt),
    .rvalid_o (rvalid),
    .rdata_o  (rdata),

    // SPI Interface
    .sck_o    (sck_o),
    .mosi_o   (mosi_o)
  //  .cs_no    (cs_no) 
  );

  // Clock Generation
  initial begin
    clk = 1'b0;
    forever #(CLK_PERIOD / 4) clk = ~clk;
  end
  
  // OBI Tasks with Handshake & Timeout

  // Task to perform an OBI write cycle
  task automatic write_obi(input logic [31:0] w_addr, input logic [31:0] w_data, input logic [3:0] w_be);
    int timeout_count = 0;
    @(posedge clk); // Align to clock edge before starting
    req   = 1'b1;
    we    = 1'b1;
    addr  = w_addr;
    wdata = w_data;
    be    = w_be;
    //$display("%t : OBI Write Req : Addr=0x%h Data=0x%h BE=0x%b", $time, w_addr, w_data, w_be);
    while (gnt !== 1'b1 && timeout_count < OBI_TIMEOUT) begin
      @(posedge clk);
      timeout_count++;
    end
    if (timeout_count == OBI_TIMEOUT) begin
      $error("%t : Timeout waiting for OBI grant during write to %h", $time, w_addr); $finish;
    end
    @(posedge clk);
    req = 1'b0;
    req_ongoing = 1'b0; // Clear flag if used
    //$display("%t : OBI Write Gnt Rcvd: Addr=0x%h", $time, w_addr);
    @(posedge clk);
    // Deassert write controls after request goes low
    we = 1'b0;
    be = 4'b0;
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
    //$display("%t : OBI Read Req  : Addr=0x%h", $time, r_addr);
    while (gnt !== 1'b1 && timeout_count_gnt < OBI_TIMEOUT) begin
      @(posedge clk);
      timeout_count_gnt++;
    end
    if (timeout_count_gnt == OBI_TIMEOUT) begin
      $error("%t : Timeout waiting for OBI grant during read from %h", $time, r_addr); $finish;
    end
    @(posedge clk);
    req = 1'b0;
    req_ongoing = 1'b0; // Clear flag if used
    //$display("%t : OBI Read Gnt Rcvd: Addr=0x%h", $time, r_addr);
    while (rvalid !== 1'b1 && timeout_count_rvalid < OBI_TIMEOUT) begin
        @(posedge clk);
        timeout_count_rvalid++;
    end
    if (timeout_count_rvalid == OBI_TIMEOUT) begin
        $error("%t : Timeout waiting for OBI rvalid during read from %h", $time, r_addr); $finish;
    end
    r_data_val = rdata;
    //$display("%t : OBI Read Data Rcvdd: Addr=0x%h Data=0x%h", $time, r_addr, r_data_val);
    @(posedge clk);
  endtask

  // SPI Helper Tasks

  // Task to wait for SPI peripheral to finish (busy bit = 0)
  task automatic wait_spi_done();
      logic [31:0] status_val;
      logic busy_bit;
      int timeout_count = 0;
      $display("%t : Waiting for SPI HW to finish...", $time);
      @(posedge clk); // Ensure we don't read in the same cycle we triggered
      do begin
          read_obi(SPI_STATUS_ADDR, status_val); // Read the status register
          busy_bit = status_val[0]; // Assuming busy is bit 0
          timeout_count++;
          if (busy_bit === 1'b1) @(posedge clk); // If busy, wait a clock cycle
      end while (busy_bit === 1'b1 && timeout_count < SPI_DONE_TIMEOUT);
      if (timeout_count == SPI_DONE_TIMEOUT) begin
          $error("%t : Timeout waiting for SPI HW to become idle.", $time); $finish;
      end
      $display("%t : SPI HW finished.", $time);
  endtask

  // Task to send one byte via SPI, handling OBI writes and waiting
  task automatic send_spi_byte(input [7:0] spi_data);
      $display("%t : Sending SPI byte: 0x%h", $time, spi_data);
      // Ensure previous operation is done (very important!)
      wait_spi_done();
      read_obi(SPI_STATUS_ADDR, status_after_done);
      $display("%t : SPI STATUS raw = 0x%08h (done=%0b, busy=%0b)", $time, status_after_done, status_after_done[1], status_after_done[0]);
      // Write data byte to TX register via OBI
      write_obi(SPI_TX_ADDR, {24'h0, spi_data}, 4'b0001);
      // Write to CTRL register via OBI to trigger the SPI transfer
      write_obi(SPI_CTRL_ADDR, 32'h1, 4'b0001);
      // Wait for this SPI transfer to complete
      wait_spi_done();
          read_obi(SPI_STATUS_ADDR, status_after_done);
                                                        $display("%t : SPI STATUS raw = 0x%08h (done=%0b, busy=%0b)", $time, status_after_done, status_after_done[1], status_after_done[0]);
      $display("%t : Finished sending SPI byte: 0x%h", $time, spi_data);
  endtask

  
  // Test Scenario

  initial begin
    // VCD Dump Setup
    $dumpfile("tb_obi_spi_direct.vcd"); // New filename
    $dumpvars(0, tb_obi_spi_direct); // Dump all signals in this TB module

    // Initialize signals & Reset DUT
    rst_ni = 1'b0; // Assert reset (active low)
    req    = 1'b0;
    we     = 1'b0;
    addr   = 'x;
    wdata  = 'x;
    be     = 4'b0;
    req_ongoing = 1'b0;

    $display("%t : Asserting Reset", $time);
    #(RESET_DURATION);
    rst_ni = 1'b1; // Deassert reset
    $display("%t : Deasserting Reset", $time);
    @(posedge clk); // Wait for first clock edge after reset release

    // --- Test Sequence ---
    $display("%t : Starting Test Sequence...", $time);

    // Send byte 0xAA
    send_spi_byte(8'hAA);

    // Send byte 0x55
    send_spi_byte(8'h55);

    // Add a small delay at the end before finishing
    #(10 * CLK_PERIOD);

    // --- End Test Sequence ---
    $display("%t : Test Sequence Complete.", $time);
    read_obi(SPI_STATUS_ADDR, final_status);
    $display("%t : FINAL STATUS = 0x%08h (done=%0b, busy=%0b)", $time, final_status, final_status[1], final_status[0]);
    $finish; // End simulation
  end

  // Deassert request if simulation finishes while req is high
  final begin
    if (req_ongoing) begin
        req = 1'b0;
    end
  end

endmodule 

/*

* **OBI Transactions:** OBI should write to 0x04 (TX) and 0x00 (CTRL), and read from 0x08 (STATUS). Check `req`, `gnt`, `addr`, `wdata`, `be`, `we`, `rvalid`, `rdata`. Ensure `rdata[0]` (busy bit) goes low after each transfer.
* **SPI Outputs:** Monitor `sck_o`, `mosi_o`, and `cs_no`.
    * `cs_no` should go LOW during the LOAD and SHIFT states and HIGH otherwise.
    * `sck_o` should pulse 8 times during SHIFT.
    * `mosi_o` should output `10101010` during the first transfer and `01010101` during the second transfer, synchronized with `sck_o`.
* **DUT Internals:** Check `dut.state_q`, `dut.tx_data_q`, `dut.bit_cnt_q` to see the internal operation.

*/