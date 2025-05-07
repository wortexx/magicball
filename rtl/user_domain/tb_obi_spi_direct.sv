`timescale 1ns/1ps

module tb_obi_spi_direct;

  //--------------------------------------------------------------------------
  // Parameters
  //--------------------------------------------------------------------------
  localparam CLK_PERIOD       = 50ns; // For 20 MHz system clock
  localparam RESET_DURATION   = 2 * CLK_PERIOD;
  localparam OBI_TIMEOUT      = 2000; // Max cycles to wait for OBI gnt/rvalid
  localparam SPI_DONE_TIMEOUT = 10000; // Max cycles to wait for SPI busy=0

  // DUT Address Map (Offsets within the peripheral)
  localparam logic [31:0] SPI_CTRL_ADDR_OFFSET   = 32'h00;
  localparam logic [31:0] SPI_TX_ADDR_OFFSET     = 32'h04;
  localparam logic [31:0] SPI_STATUS_ADDR_OFFSET = 32'h08;

  //--------------------------------------------------------------------------
  // Signals
  //--------------------------------------------------------------------------
  logic clk;
  logic rst_ni;

  logic        req;
  logic [31:0] addr;
  logic [31:0] wdata;
  logic [3:0]  be;
  logic        we;
  logic        gnt;
  logic        rvalid;
  logic [31:0] rdata;

  logic sck_o;
  logic mosi_o;
  logic cs_no; // Monitor the hardware CS

  logic req_ongoing; // To manage req deassertion in final block

  //--------------------------------------------------------------------------
  // DUT Instantiation
  //--------------------------------------------------------------------------
  obi_spi_peripheral dut (
    .clk_i    (clk),
    .rst_ni   (rst_ni),
    .req_i    (req),
    .addr_i   (addr),
    .wdata_i  (wdata),
    .be_i     (be),
    .we_i     (we),
    .gnt_o    (gnt),
    .rvalid_o (rvalid),
    .rdata_o  (rdata),
    .sck_o    (sck_o),
    .mosi_o   (mosi_o),
    .cs_no    (cs_no) // Connect to monitor DUT's CS
  );

  //--------------------------------------------------------------------------
  // Clock Generation
  //--------------------------------------------------------------------------
  initial begin
    clk = 1'b0;
    forever #(CLK_PERIOD / 2) clk = ~clk; // Corrected for desired period
  end

  //--------------------------------------------------------------------------
  // OBI Tasks
  //--------------------------------------------------------------------------
  task automatic write_obi(input logic [31:0] w_addr, input logic [31:0] w_data, input logic [3:0] w_be);
    int timeout_count = 0;
    @(posedge clk);
    req   = 1'b1;
    we    = 1'b1;
    addr  = w_addr;
    wdata = w_data;
    be    = w_be;
    req_ongoing = 1'b1;
    $display("%t : TB: OBI Write Req : Addr=0x%h Data=0x%h BE=0x%b", $time, w_addr, w_data, w_be);

    while (gnt !== 1'b1 && timeout_count < OBI_TIMEOUT) begin
      @(posedge clk);
      timeout_count++;
    end
    if (timeout_count >= OBI_TIMEOUT) begin
      $error("%t : TB: Timeout waiting for OBI grant during write to 0x%h. GNT=%b", $time, w_addr, gnt);
      $finish;
    end
    $display("%t : TB: OBI Write Gnt Rcvd: Addr=0x%h. GNT=%b", $time, w_addr, gnt);

    @(posedge clk);
    req = 1'b0;
    req_ongoing = 1'b0;
    $display("%t : TB: OBI Write Req Deasserted.", $time);

    @(posedge clk); // Allow one cycle for req to deassert before clearing other fields
    we = 1'b0;      // Deassert we and be after req goes low
    be = 4'b0;
  endtask

  task automatic read_obi(input logic [31:0] r_addr, output logic [31:0] r_data_val);
    int timeout_count_gnt = 0;
    int timeout_count_rvalid = 0;
    @(posedge clk);
    req   = 1'b1;
    we    = 1'b0;
    addr  = r_addr;
    wdata = 'x;
    be    = 4'b0;
    req_ongoing = 1'b1;
    $display("%t : TB: OBI Read Req  : Addr=0x%h", $time, r_addr);

    while (gnt !== 1'b1 && timeout_count_gnt < OBI_TIMEOUT) begin
      @(posedge clk);
      timeout_count_gnt++;
    end
    if (timeout_count_gnt >= OBI_TIMEOUT) begin
      $error("%t : TB: Timeout waiting for OBI grant during read from 0x%h. GNT=%b", $time, r_addr, gnt);
      $finish;
    end
    $display("%t : TB: OBI Read Gnt Rcvd: Addr=0x%h. GNT=%b", $time, r_addr, gnt);

    @(posedge clk);
    req = 1'b0;
    req_ongoing = 1'b0;
    $display("%t : TB: OBI Read Req Deasserted.", $time);

    while (rvalid !== 1'b1 && timeout_count_rvalid < OBI_TIMEOUT) begin
        @(posedge clk);
        // $display("%t : TB: Polling rvalid for Addr=0x%h, rvalid=%b", $time, r_addr, rvalid);
        timeout_count_rvalid++;
    end
    if (timeout_count_rvalid >= OBI_TIMEOUT) begin
        $error("%t : TB: Timeout waiting for OBI rvalid during read from 0x%h. RVALID=%b", $time, r_addr, rvalid);
        $finish;
    end
    r_data_val = rdata;
    $display("%t : TB: OBI Read Data Rcvd: Addr=0x%h Data=0x%08x. RVALID=%b", $time, r_addr, r_data_val, rvalid);
    @(posedge clk); // Cycle for master to sample data
  endtask

  //--------------------------------------------------------------------------
  // SPI Helper Tasks
  //--------------------------------------------------------------------------
  task automatic wait_spi_done();
      logic [31:0] status_val;
      logic busy_bit;
      logic done_bit_tb; // Use different name to avoid conflict if 'done' is a signal
      int timeout_count = 0;
      $display("%t : TB: Waiting for SPI Engine to finish...", $time);
      @(posedge clk);
      do begin
          read_obi(SPI_STATUS_ADDR_OFFSET, status_val); // Use offset for direct test
          busy_bit = status_val[0];
          done_bit_tb = status_val[1];
          $display("%t : TB: Polling SPI Engine Status: 0x%08x (done=%b, busy=%b)",
                   $time, status_val, done_bit_tb, busy_bit);
          timeout_count++;
          if (busy_bit === 1'b1) @(posedge clk);
      end while (busy_bit === 1'b1 && timeout_count < SPI_DONE_TIMEOUT);

      if (timeout_count >= SPI_DONE_TIMEOUT) begin
          $error("%t : TB: Timeout waiting for SPI Engine to become idle. Last Status: 0x%08x",
                 $time, status_val);
          $finish;
      end
      // Read status one last time after busy goes low
      read_obi(SPI_STATUS_ADDR_OFFSET, status_val);
      $display("%t : TB: SPI Engine finished. Final Status: 0x%08x (done=%b, busy=%b)",
               $time, status_val, status_val[1], status_val[0]);
  endtask

  task automatic send_spi_byte(input [7:0] spi_data);
      $display("%t : TB: Sending SPI byte: 0x%02h", $time, spi_data);
      wait_spi_done(); // Check if idle before starting
      write_obi(SPI_TX_ADDR_OFFSET, {24'h0, spi_data}, 4'b0001);
      write_obi(SPI_CTRL_ADDR_OFFSET, 32'h1, 4'b0001);
      wait_spi_done(); // Wait for this transfer to complete
      $display("%t : TB: Finished sending SPI byte: 0x%02h", $time, spi_data);
  endtask

  //--------------------------------------------------------------------------
  // Test Scenario
  //--------------------------------------------------------------------------
  initial begin
    $dumpfile("tb_obi_spi_direct_debug.vcd");
    $dumpvars(0, tb_obi_spi_direct);

    rst_ni = 1'b0;
    req    = 1'b0;
    we     = 1'b0;
    addr   = 'x;
    wdata  = 'x;
    be     = 4'b0;
    req_ongoing = 1'b0;

    $display("%t : TB: Asserting Reset", $time);
    #(RESET_DURATION);
    rst_ni = 1'b1;
    $display("%t : TB: Deasserting Reset", $time);
    @(posedge clk);

    $display("%t : TB: Starting Test Sequence...", $time);

    send_spi_byte(8'hAA);
    #(5 * CLK_PERIOD); // Small delay between transfers
    send_spi_byte(8'h55);

    #(10 * CLK_PERIOD);
    $display("%t : TB: Test Sequence Complete.", $time);
    $finish;
  end

  final begin
    if (req_ongoing) begin
        req = 1'b0;
    end
  end

endmodule : tb_obi_spi_direct

/*

* **OBI Transactions:** OBI should write to 0x04 (TX) and 0x00 (CTRL), and read from 0x08 (STATUS). Check `req`, `gnt`, `addr`, `wdata`, `be`, `we`, `rvalid`, `rdata`. Ensure `rdata[0]` (busy bit) goes low after each transfer.
* **SPI Outputs:** Monitor `sck_o`, `mosi_o`, and `cs_no`.
    * `cs_no` should go LOW during the LOAD and SHIFT states and HIGH otherwise.
    * `sck_o` should pulse 8 times during SHIFT.
    * `mosi_o` should output `10101010` during the first transfer and `01010101` during the second transfer, synchronized with `sck_o`.
* **DUT Internals:** Check `dut.state_q`, `dut.tx_data_q`, `dut.bit_cnt_q` to see the internal operation.

*/