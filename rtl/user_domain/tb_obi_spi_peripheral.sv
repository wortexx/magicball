module tb_obi_spi_peripheral;

  // Parameters
  localparam CLK_PERIOD     = 50ns; // 20 MHz clock
  localparam RESET_DURATION = 2 * CLK_PERIOD;
  localparam OBI_TIMEOUT    = 2000; // Max cycles for OBI response
  localparam SPI_DONE_TIMEOUT = 10000; // Max cycles for SPI busy=0

  // OBI Register Offsets (relative to peripheral base)
  localparam logic [11:0] SPI_CTRL_ADDR_OFFSET   = 12'h000;
  localparam logic [11:0] SPI_TX_ADDR_OFFSET     = 12'h004;
  localparam logic [11:0] SPI_STATUS_ADDR_OFFSET = 12'h008;

  // Signals
  logic        clk_i;
  logic        rst_ni;
  logic        req_i;
  logic        we_i;
  logic [3:0]  be_i;
  logic [31:0] addr_i;
  logic [31:0] wdata_i;
  logic        gnt_o;
  logic        rvalid_o;
  logic [31:0] rdata_o;
  logic        sck_o;
  logic        mosi_o;
  logic        cs_no;
  logic        req_ongoing;

  // DUT Instantiation
  obi_spi_peripheral dut (
    .clk_i, .rst_ni,
    .req_i, .we_i, .be_i, .addr_i, .wdata_i,
    .gnt_o, .rvalid_o, .rdata_o,
    .sck_o, .mosi_o, .cs_no
  );

  // Clock Generation
  initial begin
    clk_i = 1'b0;
    forever #(CLK_PERIOD / 2) clk_i = ~clk_i;
  end

  // Default Connections
  initial begin
    req_i     = 1'b0;
    we_i      = 1'b0;
    be_i      = 4'b0000;
    addr_i    = 32'h0;
    wdata_i   = 32'h0;
    req_ongoing = 1'b0;
  end

  // OBI Master Tasks
  task automatic write_obi_direct(input logic [11:0] offset, input logic [31:0] data, input logic [3:0] byte_en);
    int timeout_count = 0;
    @(posedge clk_i);
    req_i   = 1'b1;
    we_i    = 1'b1;
    addr_i  = {20'h0, offset}; // Base address is 0 for direct test
    wdata_i = data;
    be_i    = byte_en;
    req_ongoing = 1'b1;
    $display("%t : TB: OBI Write Req : Addr=0x%h, Data=0x%h, BE=0x%b", $time, addr_i, wdata_i, be_i);

    while (gnt_o !== 1'b1 && timeout_count < OBI_TIMEOUT) begin
      @(posedge clk_i);
      timeout_count++;
    end
    if (timeout_count >= OBI_TIMEOUT) begin
      $error("%t : TB: Timeout waiting for OBI grant during write to 0x%h. GNT=%b", $time, addr_i, gnt_o);
      $finish;
    end
    $display("%t : TB: OBI Write Gnt Rcvd: Addr=0x%h. GNT=%b", $time, addr_i, gnt_o);

    @(posedge clk_i); // Hold req for one cycle after grant
    req_i = 1'b0;
    req_ongoing = 1'b0;
    $display("%t : TB: OBI Write Req Deasserted.", $time);
    @(posedge clk_i); // Allow one cycle for signals to settle
  endtask

  task automatic read_obi_direct(input logic [11:0] offset, output logic [31:0] r_data, output logic r_err);
    int timeout_count_gnt = 0;
    int timeout_count_rvalid = 0;
    @(posedge clk_i);
    req_i   = 1'b1;
    we_i    = 1'b0;
    addr_i  = {20'h0, offset}; // Base address is 0 for direct test
    be_i    = 4'b1111; // Assuming full word read for status
    req_ongoing = 1'b1;
    $display("%t : TB: OBI Read Req  : Addr=0x%h", $time, addr_i);

    while (gnt_o !== 1'b1 && timeout_count_gnt < OBI_TIMEOUT) begin
      @(posedge clk_i);
      timeout_count_gnt++;
    end
    if (timeout_count_gnt >= OBI_TIMEOUT) begin
      $error("%t : TB: Timeout waiting for OBI grant during read from 0x%h. GNT=%b", $time, addr_i, gnt_o);
      $finish;
    end
    $display("%t : TB: OBI Read Gnt Rcvd: Addr=0x%h. GNT=%b", $time, addr_i, gnt_o);

    @(posedge clk_i); // Hold req for one cycle after grant
    req_i = 1'b0;
    req_ongoing = 1'b0;
    $display("%t : TB: OBI Read Req Deasserted.", $time);

    while (rvalid_o !== 1'b1 && timeout_count_rvalid < OBI_TIMEOUT) begin
      @(posedge clk_i);
      timeout_count_rvalid++;
    end
    if (timeout_count_rvalid >= OBI_TIMEOUT) begin
      $error("%t : TB: Timeout waiting for OBI rvalid during read from 0x%h. RVALID=%b", $time, addr_i, rvalid_o);
      $finish;
    end
    r_data = rdata_o;
    r_err  = 1'b0; // No error signal from DUT in this simple OBI model
    $display("%t : TB: OBI Read Data Rcvd: Addr=0x%h Data=0x%08x. RVALID=%b", $time, addr_i, r_data, rvalid_o);
    @(posedge clk_i); // Allow one cycle for signals to settle
  endtask

  task automatic wait_spi_done();
    logic [31:0] status_val;
    logic busy_bit;
    logic done_bit_tb;
    logic read_err;
    int timeout_count = 0;
    $display("%t : TB: Waiting for SPI Engine to finish...", $time);
    @(posedge clk_i);
    do begin
      read_obi_direct(SPI_STATUS_ADDR_OFFSET, status_val, read_err);
      // No error check for this simple TB's read_obi_direct
      busy_bit = status_val[0];    // busy is bit 0
      done_bit_tb = status_val[1]; // done is bit 1
      $display("%t : TB: Polling SPI Engine Status: 0x%08x (done=%b, busy=%b)", $time, status_val, done_bit_tb, busy_bit);
      timeout_count++;
      if (busy_bit === 1'b1) @(posedge clk_i); // Only wait if busy
    end while (busy_bit === 1'b1 && timeout_count < SPI_DONE_TIMEOUT);

    if (timeout_count >= SPI_DONE_TIMEOUT) begin
      $error("%t : TB: Timeout waiting for SPI Engine to become idle. Last Status: 0x%08x", $time, status_val);
      $finish;
    end
    // Read status one last time after busy goes low
    read_obi_direct(SPI_STATUS_ADDR_OFFSET, status_val, read_err);
    $display("%t : TB: SPI Engine finished. Final Status: 0x%08x (done=%b, busy=%b)", $time, status_val, status_val[1], status_val[0]);
  endtask

  task automatic send_spi_byte(input [7:0] spi_data);
      $display("%t : TB: Sending SPI byte: 0x%02h", $time, spi_data);
      wait_spi_done(); // Ensure engine is idle before starting
      write_obi_direct(SPI_TX_ADDR_OFFSET, {24'h0, spi_data}, 4'b0001); // Write LSB
      write_obi_direct(SPI_CTRL_ADDR_OFFSET, 32'h1, 4'b0001);          // Start transfer
      wait_spi_done(); // Wait for this transfer to complete
      $display("%t : TB: Finished sending SPI byte: 0x%02h", $time, spi_data);
  endtask

  // Test Scenario
  initial begin
    $dumpfile("tb_obi_spi_peripheral.vcd");
    $dumpvars(0, tb_obi_spi_peripheral);

    rst_ni = 1'b0;
    $display("%t : TB: Asserting Reset", $time);
    #(RESET_DURATION);
    rst_ni = 1'b1;
    $display("%t : TB: Deasserting Reset", $time);
    @(posedge clk_i);

    $display("%t : TB: Starting Test Sequence...", $time);

    // Test 1: Send 0xAA
    send_spi_byte(8'hAA);

    #(CLK_PERIOD * 5); // Delay between transfers

    // Test 2: Send 0x55
    send_spi_byte(8'h55);

    #(CLK_PERIOD * 10);
    $display("%t : TB: Test Sequence Complete.", $time);
    $finish;
  end

  final begin
    if (req_ongoing) begin
        req_i = 1'b0; // Ensure req is deasserted if test finishes mid-transaction
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