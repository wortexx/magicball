`timescale 1ns/1ps

import croc_pkg::*;
import user_pkg::*; // Expects UserSpi, UserSpiCtrl, UserFontRom, UserPrng from a SIMPLIFIED user_pkg.sv

module tb_user_domain_hw_ctrl;

  // Parameters
  localparam CLK_PERIOD     = 50ns; // 20MHz
  localparam RESET_DURATION = 2 * CLK_PERIOD;
  localparam OBI_TIMEOUT    = 30000; // Increased timeout for debugging
  localparam SPI_DONE_TIMEOUT = 25000;
  localparam GpioCount      = 16;
  localparam GRANT_TIMEOUT_CYCLES = 10;

  // Base Addresses from user_pkg (ensure this user_pkg.sv is the simplified one)
  localparam logic [31:0] TB_USER_SPI_ENGINE_BASE_ADDR = user_pkg::UserSpiAddrOffset;
  // localparam logic [31:0] TB_USER_SPI_CTRL_BASE_ADDR   = user_pkg::UserSpiCtrlAddrOffset; // Commented out for SPI focus
  // localparam logic [31:0] TB_USER_FONT_ROM_BASE_ADDR   = user_pkg::UserFontRomAddrOffset; // Commented out
  // localparam logic [31:0] TB_USER_PRNG_BASE_ADDR       = user_pkg::UserPrngAddrOffset;    // Commented out

  // Local Offsets for TB
  localparam logic [11:0] TB_SPI_ENGINE_CTRL_REG_OFFSET   = 12'h000;
  localparam logic [11:0] TB_SPI_ENGINE_TX_REG_OFFSET     = 12'h004;
  localparam logic [11:0] TB_SPI_ENGINE_STATUS_REG_OFFSET = 12'h008; // Readable
  // localparam logic [11:0] TB_SPI_HWCTRL_GPIO_OFFSET       = 12'h000; // Readable - Commented out
  // localparam logic [11:0] TB_PRNG_CTRL_REG_OFFSET         = 12'h000; // Commented out
  // localparam logic [11:0] TB_PRNG_RDATA_REG_OFFSET        = 12'h004; // Readable - Commented out

  // Absolute Addresses
  localparam logic [31:0] SPI_ENGINE_CTRL_ADDR   = TB_USER_SPI_ENGINE_BASE_ADDR + TB_SPI_ENGINE_CTRL_REG_OFFSET;
  localparam logic [31:0] SPI_ENGINE_TX_ADDR     = TB_USER_SPI_ENGINE_BASE_ADDR + TB_SPI_ENGINE_TX_REG_OFFSET;
  localparam logic [31:0] SPI_ENGINE_STATUS_ADDR = TB_USER_SPI_ENGINE_BASE_ADDR + TB_SPI_ENGINE_STATUS_REG_OFFSET;
  // localparam logic [31:0] SPI_HWCTRL_GPIO_ADDR   = TB_USER_SPI_CTRL_BASE_ADDR + TB_SPI_HWCTRL_GPIO_OFFSET; // Commented out
  // localparam logic [31:0] PRNG_CTRL_ADDR         = TB_USER_PRNG_BASE_ADDR + TB_PRNG_CTRL_REG_OFFSET;       // Commented out
  // localparam logic [31:0] PRNG_RDATA_ADDR        = TB_USER_PRNG_BASE_ADDR + TB_PRNG_RDATA_REG_OFFSET;       // Commented out

  // Clock and Reset
  logic clk_i;
  logic rst_ni;

  // DUT Interface
  logic ref_clk_i;
  logic testmode_i;
  sbr_obi_req_t user_sbr_obi_req; // To DUT
  sbr_obi_rsp_t user_sbr_obi_rsp; // From DUT

  mgr_obi_req_t user_mgr_obi_req_o_tb; // Tie off
  mgr_obi_rsp_t user_mgr_obi_rsp_i_tb; // Tie off

  logic [GpioCount-1:0]       gpio_in_sync_i_tb; // Tie off
  logic [NumExternalIrqs-1:0] interrupts_o_tb;   // Monitor

  // SPI signals from DUT
  logic spi_sck_o_tb, spi_mosi_o_tb, spi_cs1_no_tb, spi_cs2_no_tb, spi_dc_o_tb;

  // Internal TB state
  logic req_ongoing;

  // Instantiate the DUT (user_domain)
  // Make sure user_domain.sv instantiates the STANDARD obi_demux.sv
  // and uses the SIMPLIFIED user_pkg.sv
  user_domain #(
    .GpioCount(GpioCount)
  ) dut (
    .clk_i(clk_i),
    .rst_ni(rst_ni),
    .ref_clk_i(ref_clk_i),
    .testmode_i(testmode_i),
    .user_sbr_obi_req_i(user_sbr_obi_req),
    .user_sbr_obi_rsp_o(user_sbr_obi_rsp),
    .user_mgr_obi_req_o(user_mgr_obi_req_o_tb),
    .user_mgr_obi_rsp_i(user_mgr_obi_rsp_i_tb),
    .gpio_in_sync_i(gpio_in_sync_i_tb),
    .interrupts_o(interrupts_o_tb),
    .spi_sck_o(spi_sck_o_tb),
    .spi_mosi_o(spi_mosi_o_tb),
    .spi_cs1_no(spi_cs1_no_tb), // Will be tied off by simplified user_domain
    .spi_cs2_no(spi_cs2_no_tb), // Will be tied off
    .spi_dc_o(spi_dc_o_tb)      // Will be tied off
  );

  // Clock generation
  initial begin
    clk_i = 1'b0;
    forever #(CLK_PERIOD / 2) clk_i = ~clk_i;
  end

  // Initial values for tied-off inputs
  initial begin
    ref_clk_i = 1'b0;
    testmode_i = 1'b0;
    gpio_in_sync_i_tb = '0;
    user_mgr_obi_rsp_i_tb = '{default: '0};
    req_ongoing = 1'b0;
    user_sbr_obi_req = '{default: '0};
  end


  // OBI Read Task
  task automatic read_obi(
    input logic [31:0] r_addr,
    output logic [31:0] r_data_val,
    output logic r_err,
    input bit expect_grant = 1'b1
  );
    int timeout_count_gnt = 0;
    int timeout_count_rvalid = 0;
    sbr_obi_req_t req_txn;
    sbr_obi_r_chan_t rsp_r_chan_temp;
    logic grant_received;

    r_data_val = 32'hDEADBEEF;
    r_err = 1'b0;

    @(posedge clk_i);
    req_txn = '{default:'0};
    req_txn.req = 1'b1;
    req_txn.a.we = 1'b0;
    req_txn.a.addr = r_addr;
    req_txn.a.be = 4'b1111;
    req_txn.a.aid = timeout_count_gnt % (2**SbrObiCfg.IdWidth);

    user_sbr_obi_req = req_txn;
    req_ongoing = 1'b1;
    $display("%t : TB: OBI Read Req  : Addr=0x%h (Expect Grant: %b)", $time, r_addr, expect_grant);

    grant_received = 1'b0;
    if (expect_grant) begin
      while (user_sbr_obi_rsp.gnt !== 1'b1 && timeout_count_gnt < OBI_TIMEOUT) begin
        @(posedge clk_i);
        timeout_count_gnt++;
      end
      if (timeout_count_gnt >= OBI_TIMEOUT) begin
        $error("%t : TB: Timeout OBI grant read 0x%h. Rsp: %p", $time, r_addr, user_sbr_obi_rsp);
        r_err = 1'b1;
        $finish;
      end
      grant_received = 1'b1;
      $display("%t : TB: OBI Read Gnt Rcvd: Addr=0x%h", $time, r_addr);
    end else begin // If not expecting grant
      repeat(GRANT_TIMEOUT_CYCLES) @(posedge clk_i);
      if (user_sbr_obi_rsp.gnt === 1'b1) begin
        $error("%t : TB: Expected NO grant for addr 0x%h, but received grant!", $time, r_addr);
        r_err = 1'b1;
      end
      $display("%t : TB: OBI Read No Grant (as expected for invalid addr): Addr=0x%h. GNT=%b", $time, r_addr, user_sbr_obi_rsp.gnt);
    end

    @(posedge clk_i);
    user_sbr_obi_req.req = 1'b0;
    req_ongoing = 1'b0;

    if (grant_received) begin
      $display("%t : TB: Waiting for OBI rvalid from Addr=0x%h...", $time, r_addr);
      while (user_sbr_obi_rsp.rvalid !== 1'b1 && timeout_count_rvalid < OBI_TIMEOUT) begin
        @(posedge clk_i);
        timeout_count_rvalid++;
      end
      if (timeout_count_rvalid >= OBI_TIMEOUT) begin
        $error("%t : TB: Timeout OBI rvalid read 0x%h. Rsp: %p. RVALID=%b", $time, r_addr, user_sbr_obi_rsp, user_sbr_obi_rsp.rvalid);
        r_err = 1'b1;
        $finish;
      end
      rsp_r_chan_temp = user_sbr_obi_rsp.r;
      r_data_val = rsp_r_chan_temp.rdata;
      r_err = rsp_r_chan_temp.err;
      $display("%t : TB: OBI Read Data Rcvd: Addr=0x%h Data=0x%08x Err=%b RVALID=%b", $time, r_addr, r_data_val, r_err, user_sbr_obi_rsp.rvalid);
    end else begin // No grant was received (either expectedly or unexpectedly)
      r_err = 1'b1; // Set error from TB perspective if no grant was received
      $display("%t : TB: No grant for Addr=0x%h, r_err set to %b by TB, r_data_val is 0x%h.", $time, r_addr, r_err, r_data_val);
    end // Corrected: Ensured 'end' matches 'else begin'
    @(posedge clk_i);
    user_sbr_obi_req = '{default:'0};
  endtask


  // OBI Write Task - MODIFIED to include a DUMMY READ
  task automatic write_obi_with_dummy_read(
    input logic [31:0] w_addr,
    input logic [31:0] w_data,
    input logic [3:0]  w_be,
    input logic [31:0] dummy_read_addr // Address for the dummy read from the SAME peripheral
  );
    int timeout_count = 0;
    sbr_obi_req_t req_txn;
    logic [31:0] dummy_data;
    logic dummy_err;

    @(posedge clk_i);
    req_txn = '{default:'0};
    req_txn.req = 1'b1;
    req_txn.a.we = 1'b1;
    req_txn.a.addr = w_addr;
    req_txn.a.wdata = w_data;
    req_txn.a.be = w_be;
    req_txn.a.aid = timeout_count % (2**SbrObiCfg.IdWidth);

    user_sbr_obi_req = req_txn;
    req_ongoing = 1'b1;
    $display("%t : TB: OBI Write Req : Addr=0x%h, Data=0x%h, BE=0x%b", $time, w_addr, w_data, w_be);

    while (user_sbr_obi_rsp.gnt !== 1'b1 && timeout_count < OBI_TIMEOUT) begin
      @(posedge clk_i);
      timeout_count++;
    end
    if (timeout_count >= OBI_TIMEOUT) begin
      $error("%t : TB: Timeout OBI grant write 0x%h. Rsp: %p", $time, w_addr, user_sbr_obi_rsp);
      $finish;
    end
    $display("%t : TB: OBI Write Gnt Rcvd: Addr=0x%h", $time, w_addr);

    @(posedge clk_i);
    user_sbr_obi_req.req = 1'b0;
    req_ongoing = 1'b0;

    $display("%t : TB: Performing DUMMY READ after write to 0x%h. Dummy Read Addr: 0x%h", $time, w_addr, dummy_read_addr);
    read_obi(dummy_read_addr, dummy_data, dummy_err, 1'b1);
    if (dummy_err) begin
        $warning("%t : TB: DUMMY READ from 0x%h encountered an error (Err=%b). This might be okay if it's expected for this address.", $time, dummy_read_addr, dummy_err);
    end
    $display("%t : TB: DUMMY READ from 0x%h completed. Data: 0x%h", $time, dummy_read_addr, dummy_data);

    @(posedge clk_i);
    user_sbr_obi_req = '{default:'0};
  endtask

  // Task to wait for SPI engine to be idle
  task automatic wait_spi_engine_idle();
    logic [31:0] status_val;
    logic status_err;
    int timeout_cycles = 0;
    $display("%t : TB: Waiting for SPI Engine to be idle...", $time);
    do begin
      read_obi(SPI_ENGINE_STATUS_ADDR, status_val, status_err);
      if (status_err) begin
        $error("%t : TB: Error reading SPI Engine status while waiting for idle.", $time);
        $finish;
      end
      if ((status_val & 1) != 0) begin // Check busy bit (bit 0)
        @(posedge clk_i);
        timeout_cycles++;
        if (timeout_cycles > SPI_DONE_TIMEOUT) begin
          $error("%t : TB: Timeout waiting for SPI Engine to become idle. Status: 0x%h", $time, status_val);
          $finish;
        end
      end
    end while ((status_val & 1) != 0); // Loop while busy bit is set
    $display("%t : TB: SPI Engine is idle. Status: 0x%h", $time, status_val);
  endtask

  // Main test sequence
  initial begin
    logic [31:0] read_data; // Keep for potential future use if uncommenting sections
    logic read_err;         // Keep for potential future use

    $dumpfile("tb_user_domain_std_demux.vcd");
    $dumpvars(0, tb_user_domain_hw_ctrl);
    // Add specific hierarchical dumps if needed for the standard demux
    $dumpvars(1, dut.i_obi_demux_user.select_q, dut.i_obi_demux_user.in_flight); // Example for standard demux signals

    rst_ni = 1'b0;
    $display("%t : TB: Asserting Reset", $time);
    #(RESET_DURATION);
    rst_ni = 1'b1;
    $display("%t : TB: Deasserting Reset", $time);
    @(posedge clk_i);

    $display("%t : TB: Starting User Domain Test Sequence (Standard Demux, SPI Engine Focus)...", $time);

    $display("--- Test 1.1: Wait for initial idle state ---");
    wait_spi_engine_idle();

    $display("--- Test 1.2: Write a byte to SPI TX register and start transfer ---");
    write_obi_with_dummy_read(SPI_ENGINE_TX_ADDR, 32'h000000AE, 4'b0001, SPI_ENGINE_STATUS_ADDR);
    write_obi_with_dummy_read(SPI_ENGINE_CTRL_ADDR, 32'h00000001, 4'b0001, SPI_ENGINE_STATUS_ADDR);

    $display("--- Test 1.3: Wait for SPI engine to complete and become idle ---");
    wait_spi_engine_idle();
    $display("--- SPI Engine byte 0xAE processed ---");

    #(5*CLK_PERIOD);

    $display("--- Test 1.4: Write another byte (0x55) and start ---");
    write_obi_with_dummy_read(SPI_ENGINE_TX_ADDR, 32'h00000055, 4'b0001, SPI_ENGINE_STATUS_ADDR);
    write_obi_with_dummy_read(SPI_ENGINE_CTRL_ADDR, 32'h00000001, 4'b0001, SPI_ENGINE_STATUS_ADDR);
    wait_spi_engine_idle();
    $display("--- SPI Engine byte 0x55 processed ---");

    #(10 * CLK_PERIOD);
    $display("%t : TB: Focused User Domain Test Sequence Complete.", $time);
    $finish;
  end

  final begin
    if (req_ongoing) begin
      user_sbr_obi_req.req = 1'b0;
    end
  end

endmodule


























/* WORKS WITH SPI ISOLATED 

`timescale 1ns/1ps

import croc_pkg::*;
import user_pkg::*; // Expects 3-peripheral config: UserSpi, UserSpiCtrl, UserFontRom

module tb_user_domain_hw_ctrl;

  // Parameters
  localparam CLK_PERIOD     = 50ns;
  localparam RESET_DURATION = 2 * CLK_PERIOD;
  localparam OBI_TIMEOUT    = 3000;
  localparam SPI_DONE_TIMEOUT = 15000;
  localparam GpioCount      = 16;

  // Base Addresses from user_pkg
  localparam logic [31:0] TB_USER_SPI_ENGINE_BASE_ADDR = user_pkg::UserSpiAddrOffset;
  localparam logic [31:0] TB_USER_SPI_CTRL_BASE_ADDR   = user_pkg::UserSpiCtrlAddrOffset;
  localparam logic [31:0] TB_USER_FONT_ROM_BASE_ADDR   = user_pkg::UserFontRomAddrOffset;

  // Local Offsets for TB
  localparam logic [11:0] TB_SPI_ENGINE_CTRL_REG_OFFSET   = 12'h000;
  localparam logic [11:0] TB_SPI_ENGINE_TX_REG_OFFSET     = 12'h004;
  localparam logic [11:0] TB_SPI_ENGINE_STATUS_REG_OFFSET = 12'h008;
  localparam logic [11:0] TB_SPI_HWCTRL_GPIO_OFFSET    = 12'h000; // For CS/DC in user_spi_ctrl

  // Bit positions (Local to TB)
  localparam int TB_HWCTRL_CS1_N_BIT = 0;
  localparam int TB_HWCTRL_CS2_N_BIT = 1;
  localparam int TB_HWCTRL_DC_BIT    = 2;

  // Absolute Addresses
  localparam logic [31:0] SPI_ENGINE_CTRL_ADDR   = TB_USER_SPI_ENGINE_BASE_ADDR + TB_SPI_ENGINE_CTRL_REG_OFFSET;
  localparam logic [31:0] SPI_ENGINE_TX_ADDR     = TB_USER_SPI_ENGINE_BASE_ADDR + TB_SPI_ENGINE_TX_REG_OFFSET;
  localparam logic [31:0] SPI_ENGINE_STATUS_ADDR = TB_USER_SPI_ENGINE_BASE_ADDR + TB_SPI_ENGINE_STATUS_REG_OFFSET;
  localparam logic [31:0] SPI_HWCTRL_GPIO_ADDR   = TB_USER_SPI_CTRL_BASE_ADDR + TB_SPI_HWCTRL_GPIO_OFFSET;

  // Signals
  logic clk_i;
  logic rst_ni;
  logic ref_clk_i;
  logic testmode_i;
  sbr_obi_req_t user_sbr_obi_req;
  sbr_obi_rsp_t user_sbr_obi_rsp;
  mgr_obi_req_t user_mgr_obi_req;
  mgr_obi_rsp_t user_mgr_obi_rsp;
  logic [GpioCount-1:0] gpio_in_sync_i;
  logic [croc_pkg::NumExternalIrqs-1:0] interrupts_o;
  logic spi_sck_o, spi_mosi_o, spi_cs1_no, spi_cs2_no, spi_dc_o;
  logic req_ongoing;
  logic [7:0]  font_byte;

  // DUT Instantiation
  user_domain #(.GpioCount(GpioCount)) dut (
    .clk_i(clk_i), .rst_ni(rst_ni), .ref_clk_i(ref_clk_i), .testmode_i(testmode_i),
    .user_sbr_obi_req_i(user_sbr_obi_req), .user_sbr_obi_rsp_o(user_sbr_obi_rsp),
    .user_mgr_obi_req_o(user_mgr_obi_req), .user_mgr_obi_rsp_i(user_mgr_obi_rsp),
    .gpio_in_sync_i(gpio_in_sync_i), .interrupts_o(interrupts_o),
    .spi_sck_o(spi_sck_o), .spi_mosi_o(spi_mosi_o),
    .spi_cs1_no(spi_cs1_no), .spi_cs2_no(spi_cs2_no), .spi_dc_o(spi_dc_o)
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
    $display("%t : TB: Waiting for OBI rvalid from Addr=0x%h...", $time, r_addr);
    while (user_sbr_obi_rsp.rvalid !== 1'b1 && timeout_count_rvalid < OBI_TIMEOUT) begin @(posedge clk_i);
      timeout_count_rvalid++; end
    if (timeout_count_rvalid >= OBI_TIMEOUT) begin $error("%t : TB: Timeout OBI rvalid read 0x%h. Rsp: %p", $time, r_addr, user_sbr_obi_rsp); $finish; end
    rsp_r_chan_temp = user_sbr_obi_rsp.r; r_data_val = rsp_r_chan_temp.rdata; r_err = rsp_r_chan_temp.err;
    $display("%t : TB: OBI Read Data Rcvd: Addr=0x%h Data=0x%08x Err=%b RVALID=%b", $time, r_addr, r_data_val, r_err, user_sbr_obi_rsp.rvalid);
    @(posedge clk_i); user_sbr_obi_req = '0;
  endtask

  // Helper Tasks
  task automatic wait_spi_engine_idle();
    logic [31:0] status_val; logic busy_bit, done_bit_tb, read_err; int timeout_count = 0;
    $display("%t : TB: Waiting for SPI Engine to finish...", $time); @(posedge clk_i);
    do begin
      read_obi(SPI_ENGINE_STATUS_ADDR, status_val, read_err);
      if (read_err) begin $error("%t : TB: OBI Error reading SPI Engine Status!", $time); $finish; end
      busy_bit = status_val[0]; done_bit_tb = status_val[1];
      $display("%t : TB: Polling SPI Engine Status (Addr 0x%h): 0x%08x (done=%b, busy=%b)", $time, SPI_ENGINE_STATUS_ADDR, status_val, done_bit_tb, busy_bit);
      timeout_count++; if (busy_bit === 1'b1) @(posedge clk_i);
    end while (busy_bit === 1'b1 && timeout_count < SPI_DONE_TIMEOUT);
    if (timeout_count >= SPI_DONE_TIMEOUT) begin $error("%t : TB: Timeout SPI Engine idle. Status: 0x%08x", $time, status_val); $finish; end
    read_obi(SPI_ENGINE_STATUS_ADDR, status_val, read_err);
    $display("%t : TB: SPI Engine finished. Final Status: 0x%08x (done=%b, busy=%b)", $time, status_val, status_val[1], status_val[0]);
  endtask

  task automatic set_hw_cs_dc(input int cs1_active, input int cs2_active, input int dc_is_data);
    logic [31:0] ctrl_val = 0; logic [31:0] dummy_rdata; logic dummy_rerr;
    if (!cs1_active) ctrl_val[TB_HWCTRL_CS1_N_BIT] = 1'b1;
    if (!cs2_active) ctrl_val[TB_HWCTRL_CS2_N_BIT] = 1'b1;
    if (dc_is_data)  ctrl_val[TB_HWCTRL_DC_BIT]    = 1'b1;
    $display("%t : TB: Writing HW Ctrl Reg (Addr 0x%h): 0x%08x (CS1_N=%b, CS2_N=%b, DC=%b)", $time, SPI_HWCTRL_GPIO_ADDR, ctrl_val, ctrl_val[TB_HWCTRL_CS1_N_BIT], ctrl_val[TB_HWCTRL_CS2_N_BIT], ctrl_val[TB_HWCTRL_DC_BIT]);
    write_obi(SPI_HWCTRL_GPIO_ADDR, ctrl_val, 4'b1111);
    $display("%t : TB: Dummy Read from UserSpiCtrl (GPIO Addr 0x%h) after CS/DC write.", $time, SPI_HWCTRL_GPIO_ADDR);
    read_obi(SPI_HWCTRL_GPIO_ADDR, dummy_rdata, dummy_rerr); // Read GPIO_CTRL for dummy
    #(CLK_PERIOD);
  endtask

  task automatic send_byte_hw_ctrl(input int cs_pin_idx, input int is_data, input [7:0] byte_val);
     if (cs_pin_idx == 1) set_hw_cs_dc(1, 0, is_data);
     else if (cs_pin_idx == 2) set_hw_cs_dc(0, 1, is_data);
     else begin $error("Invalid CS index %0d", cs_pin_idx); $finish; end
     wait_spi_engine_idle();
     write_obi(SPI_ENGINE_TX_ADDR, {24'h0, byte_val}, 4'b0001);
     write_obi(SPI_ENGINE_CTRL_ADDR, 32'h1, 4'b0001);
     wait_spi_engine_idle();
     set_hw_cs_dc(0, 0, is_data); // Deassert all CS
     $display("%t : TB: Finished HW Ctrl Send Byte 0x%02h to CS%0d", $time, byte_val, cs_pin_idx);
  endtask

  // Test Scenario
  initial begin
    logic [31:0] read_data; logic read_err;
    $dumpfile("tb_user_domain_hw_ctrl.vcd"); $dumpvars(0, tb_user_domain_hw_ctrl);
    rst_ni = 1'b0; $display("%t : TB: Asserting Reset", $time); #(RESET_DURATION);
    rst_ni = 1'b1; $display("%t : TB: Deasserting Reset", $time); @(posedge clk_i);
    $display("%t : TB: Starting Test Sequence for user_domain (HW Ctrl - Simplified)...", $time);

    $display("--- Test 1: Initialize ADXL345 ---");
    send_byte_hw_ctrl(2, 0, 8'h2D);
    send_byte_hw_ctrl(2, 0, 8'h08);
    $display("--- ADXL345 Init Done ---");

    $display("--- Test 2: Initialize SSD1331 ---");
    send_byte_hw_ctrl(1, 0, 8'hAF);
    $display("--- SSD1331 Init Done ---");

    // Test 3 (PRNG) removed

    $display("--- Test 4: Read Font ROM (Char '!', Offset 0x%h) ---", 12);
    read_obi(TB_USER_FONT_ROM_BASE_ADDR + 12, read_data, read_err);
    if (read_err) begin $error("Font ROM Read Failed!"); $finish; end
    font_byte = read_data[7:0];
    $display("   -> Font Byte[0] for '!': 0x%02h (Expected 0x00)", font_byte);
    if (font_byte !== 8'h00) $error("Font data mismatch!");

    $display("--- Test 5: Send Font Byte to Display ---");
    send_byte_hw_ctrl(1, 1, font_byte);
    $display("--- Font Byte Sent ---");

    #(10 * CLK_PERIOD);
    $display("%t : TB: Test Sequence Complete.", $time);
    $finish;
  end
  final begin if (req_ongoing) user_sbr_obi_req.req = 1'b0; end
endmodule

/*
//*/
// `timescale 1ns/1ps

// import croc_pkg::*;
// import user_pkg::*; // Expects UserSpi, UserSpiCtrl, UserFontRom, UserPrng

// module tb_user_domain_hw_ctrl;

//   // Parameters
//   localparam CLK_PERIOD     = 50ns; // 20MHz
//   localparam RESET_DURATION = 2 * CLK_PERIOD;
//   localparam OBI_TIMEOUT    = 3000; // Increased timeout for more complex sequences
//   localparam SPI_DONE_TIMEOUT = 25000; // Increased timeout for SPI operations
//   localparam GpioCount      = 16; // Match user_domain parameter if not default
//   localparam GRANT_TIMEOUT_CYCLES = 10; // For expecting NO grant

//   // Base Addresses from user_pkg
//   localparam logic [31:0] TB_USER_SPI_ENGINE_BASE_ADDR = user_pkg::UserSpiAddrOffset;
//   localparam logic [31:0] TB_USER_SPI_CTRL_BASE_ADDR   = user_pkg::UserSpiCtrlAddrOffset;
//   localparam logic [31:0] TB_USER_FONT_ROM_BASE_ADDR   = user_pkg::UserFontRomAddrOffset;
//   localparam logic [31:0] TB_USER_PRNG_BASE_ADDR       = user_pkg::UserPrngAddrOffset;

//   // Local Offsets for TB (relative to peripheral base addresses)
//   // SPI Engine Registers
//   localparam logic [11:0] TB_SPI_ENGINE_CTRL_REG_OFFSET   = 12'h000;
//   localparam logic [11:0] TB_SPI_ENGINE_TX_REG_OFFSET     = 12'h004;
//   localparam logic [11:0] TB_SPI_ENGINE_STATUS_REG_OFFSET = 12'h008;
//   // SPI HW Control Register (in user_spi_ctrl module)
//   localparam logic [11:0] TB_SPI_HWCTRL_GPIO_OFFSET       = 12'h000;
//   // PRNG Registers (relative to TB_USER_PRNG_BASE_ADDR)
//   localparam logic [11:0] TB_PRNG_CTRL_REG_OFFSET         = 12'h000; // Byte offset 0
//   localparam logic [11:0] TB_PRNG_RDATA_REG_OFFSET        = 12'h004; // Byte offset 4

//   // Absolute Addresses for easier use in testbench
//   localparam logic [31:0] SPI_ENGINE_CTRL_ADDR   = TB_USER_SPI_ENGINE_BASE_ADDR + TB_SPI_ENGINE_CTRL_REG_OFFSET;
//   localparam logic [31:0] SPI_ENGINE_TX_ADDR     = TB_USER_SPI_ENGINE_BASE_ADDR + TB_SPI_ENGINE_TX_REG_OFFSET;
//   localparam logic [31:0] SPI_ENGINE_STATUS_ADDR = TB_USER_SPI_ENGINE_BASE_ADDR + TB_SPI_ENGINE_STATUS_REG_OFFSET;
//   localparam logic [31:0] SPI_HWCTRL_GPIO_ADDR   = TB_USER_SPI_CTRL_BASE_ADDR + TB_SPI_HWCTRL_GPIO_OFFSET;
//   localparam logic [31:0] PRNG_CTRL_ADDR         = TB_USER_PRNG_BASE_ADDR + TB_PRNG_CTRL_REG_OFFSET;
//   localparam logic [31:0] PRNG_RDATA_ADDR        = TB_USER_PRNG_BASE_ADDR + TB_PRNG_RDATA_REG_OFFSET;


//   // Signals
//   logic clk_i;
//   logic rst_ni;
//   logic ref_clk_i;      // Tied off
//   logic testmode_i;     // Tied off

//   sbr_obi_req_t user_sbr_obi_req; // To DUT
//   sbr_obi_rsp_t user_sbr_obi_rsp; // From DUT

//   mgr_obi_req_t user_mgr_obi_req_o_tb; // From DUT (unused by TB)
//   mgr_obi_rsp_t user_mgr_obi_rsp_i_tb; // To DUT (tied off)

//   logic [GpioCount-1:0]       gpio_in_sync_i_tb; // To DUT (tied off)
//   logic [NumExternalIrqs-1:0] interrupts_o_tb;   // From DUT (unused by TB)

//   logic spi_sck_o_tb, spi_mosi_o_tb, spi_cs1_no_tb, spi_cs2_no_tb, spi_dc_o_tb;

//   logic req_ongoing; // TB internal state

//   // DUT Instantiation
//   user_domain #(
//     .GpioCount(GpioCount)
//   ) dut (
//     .clk_i(clk_i), .rst_ni(rst_ni), .ref_clk_i(ref_clk_i), .testmode_i(testmode_i),
//     .user_sbr_obi_req_i(user_sbr_obi_req), .user_sbr_obi_rsp_o(user_sbr_obi_rsp),
//     .user_mgr_obi_req_o(user_mgr_obi_req_o_tb), .user_mgr_obi_rsp_i(user_mgr_obi_rsp_i_tb),
//     .gpio_in_sync_i(gpio_in_sync_i_tb), .interrupts_o(interrupts_o_tb),
//     .spi_sck_o(spi_sck_o_tb), .spi_mosi_o(spi_mosi_o_tb),
//     .spi_cs1_no(spi_cs1_no_tb), .spi_cs2_no(spi_cs2_no_tb), .spi_dc_o(spi_dc_o_tb)
//   );

//   // Clock and Reset Generation
//   initial begin
//     clk_i = 1'b0;
//     forever #(CLK_PERIOD / 2) clk_i = ~clk_i;
//   end

//   initial begin
//     // Tie off unused inputs to DUT
//     ref_clk_i = 1'b0;
//     testmode_i = 1'b0;
//     gpio_in_sync_i_tb = '0;
//     user_mgr_obi_rsp_i_tb = '0; // Default response if user_domain ever tries to be a manager

//     // Initialize TB state
//     req_ongoing = 1'b0;
//     user_sbr_obi_req = '0; // Initialize all fields of the request struct
//   end

//   // OBI Master Tasks
//   task automatic write_obi(input logic [31:0] w_addr, input logic [31:0] w_data, input logic [3:0] w_be);
//     int timeout_count = 0;
//     sbr_obi_req_t req_txn; // Local to task

//     @(posedge clk_i);
//     req_txn = '0; // Clear all fields first
//     req_txn.req    = 1'b1;
//     req_txn.a.we   = 1'b1;
//     req_txn.a.addr = w_addr;
//     req_txn.a.wdata= w_data;
//     req_txn.a.be   = w_be;
//     req_txn.a.aid  = timeout_count % (2**SbrObiCfg.IdWidth); // Example AID
//     user_sbr_obi_req = req_txn;
//     req_ongoing = 1'b1;
//     $display("%t : TB: OBI Write Req : Addr=0x%h, Data=0x%h, BE=0x%b", $time, w_addr, w_data, w_be);

//     while (user_sbr_obi_rsp.gnt !== 1'b1 && timeout_count < OBI_TIMEOUT) begin
//       @(posedge clk_i);
//       timeout_count++;
//     end
//     if (timeout_count >= OBI_TIMEOUT) begin
//       $error("%t : TB: Timeout waiting for OBI grant during write to 0x%h. GNT=%b. Rsp: %p", $time, w_addr, user_sbr_obi_rsp.gnt, user_sbr_obi_rsp);
//       $finish;
//     end
//     $display("%t : TB: OBI Write Gnt Rcvd: Addr=0x%h", $time, w_addr);

//     @(posedge clk_i); // Hold req for one cycle after grant
//     user_sbr_obi_req.req = 1'b0;
//     req_ongoing = 1'b0;
//     $display("%t : TB: OBI Write Req Deasserted.", $time);
//     @(posedge clk_i); // Allow one cycle for signals to settle
//     user_sbr_obi_req = '0; // Clear request signals
//   endtask

//   task automatic read_obi(
//     input logic [31:0] r_addr,
//     output logic [31:0] r_data_val, // Output full 32-bit data
//     output logic r_err,
//     input bit expect_grant = 1'b1
//   );
//     int timeout_count_gnt = 0;
//     int timeout_count_rvalid = 0;
//     sbr_obi_req_t req_txn; // Local to task
//     sbr_obi_r_chan_t rsp_r_chan_temp; // Local to task
//     logic grant_received;

//     // Initialize outputs at the start of the task
//     r_data_val = 32'hDEADBEEF; // Default value for r_data_val in case of no grant/error
//     r_err = 1'b0;              // Default to no error

//     @(posedge clk_i);
//     req_txn = '0; // Clear all fields first
//     req_txn.req    = 1'b1;
//     req_txn.a.we   = 1'b0; // Read operation
//     req_txn.a.addr = r_addr;
//     req_txn.a.be   = 4'b1111; // Assuming full word read for simplicity
//     req_txn.a.aid  = timeout_count_gnt % (2**SbrObiCfg.IdWidth); // Example AID
//     user_sbr_obi_req = req_txn;
//     req_ongoing = 1'b1;
//     $display("%t : TB: OBI Read Req  : Addr=0x%h (Expect Grant: %b)", $time, r_addr, expect_grant);

//     grant_received = 1'b0;
//     if (expect_grant) begin
//       while (user_sbr_obi_rsp.gnt !== 1'b1 && timeout_count_gnt < OBI_TIMEOUT) begin
//         @(posedge clk_i);
//         timeout_count_gnt++;
//       end
//       if (timeout_count_gnt >= OBI_TIMEOUT) begin
//         $error("%t : TB: Timeout waiting for OBI grant during read from 0x%h. GNT=%b. Rsp: %p", $time, r_addr, user_sbr_obi_rsp.gnt, user_sbr_obi_rsp);
//         r_err = 1'b1; // Set error if timeout occurs
//         $finish;
//       end
//       grant_received = 1'b1;
//       $display("%t : TB: OBI Read Gnt Rcvd: Addr=0x%h", $time, r_addr);
//     end else begin // Expect NO grant
//       repeat(GRANT_TIMEOUT_CYCLES) @(posedge clk_i); // Wait a few cycles to ensure grant is not asserted
//       if (user_sbr_obi_rsp.gnt === 1'b1) begin
//         $error("%t : TB: Expected NO grant for addr 0x%h, but received grant!", $time, r_addr);
//         r_err = 1'b1; // Set error as grant was not expected but received
//         // $finish; // Optionally finish
//       end
//       // If no grant received as expected, grant_received remains 0
//       $display("%t : TB: OBI Read No Grant (as expected for invalid addr): Addr=0x%h. GNT=%b", $time, r_addr, user_sbr_obi_rsp.gnt);
//     end

//     @(posedge clk_i); // Hold req for one cycle after grant (or after no-grant check)
//     user_sbr_obi_req.req = 1'b0;
//     req_ongoing = 1'b0;

//     if (grant_received) begin
//       $display("%t : TB: Waiting for OBI rvalid from Addr=0x%h...", $time, r_addr);
//       while (user_sbr_obi_rsp.rvalid !== 1'b1 && timeout_count_rvalid < OBI_TIMEOUT) begin
//         @(posedge clk_i);
//         timeout_count_rvalid++;
//       end
//       if (timeout_count_rvalid >= OBI_TIMEOUT) begin
//         $error("%t : TB: Timeout waiting for OBI rvalid during read from 0x%h. RVALID=%b. Rsp: %p", $time, r_addr, user_sbr_obi_rsp.rvalid, user_sbr_obi_rsp);
//         r_err = 1'b1; // Set error if rvalid timeout occurs
//         $finish;
//       end
//       rsp_r_chan_temp = user_sbr_obi_rsp.r; 
//       r_data_val = rsp_r_chan_temp.rdata; // Assign actual read data
//       r_err      = rsp_r_chan_temp.err;   // Assign error from peripheral
//       $display("%t : TB: OBI Read Data Rcvd: Addr=0x%h Data=0x%08x Err=%b RVALID=%b", $time, r_addr, r_data_val, r_err, user_sbr_obi_rsp.rvalid);
//     end else begin // No grant was received (and not expected)
//       // r_data_val remains 32'hDEADBEEF (or whatever default was set at task start)
//       r_err = 1'b1;    // Signal error from TB perspective for no-grant case
//       $display("%t : TB: No grant for Addr=0x%h, r_err set to %b by TB, r_data_val is 0x%h.", $time, r_addr, r_err, r_data_val);
//     end // Changed from } to end
//     @(posedge clk_i); // Allow one cycle for signals to settle
//     user_sbr_obi_req = '0; // Clear request signals
//   endtask

//   task automatic wait_spi_engine_idle();
//     logic [31:0] status_val;
//     logic        busy_bit, done_bit_tb, read_err_local; // Use local error variable
//     int          timeout_count = 0;

//     $display("%t : TB: Waiting for SPI Engine to finish...", $time);
//     @(posedge clk_i);

//     do begin
//       read_obi(SPI_ENGINE_STATUS_ADDR, status_val, read_err_local); // Use local error variable
//       if (read_err_local) begin
//         $error("%t : TB: OBI Error reading SPI Engine Status while waiting for idle! Addr=0x%h", $time, SPI_ENGINE_STATUS_ADDR);
//         $finish;
//       end
//       busy_bit = status_val[0];
//       done_bit_tb = status_val[1];
//       $display("%t : TB: Polling SPI Engine Status (Addr 0x%h): 0x%08x (done=%b, busy=%b)",
//                $time, SPI_ENGINE_STATUS_ADDR, status_val, done_bit_tb, busy_bit);
//       timeout_count++;
//       if (busy_bit === 1'b1) @(posedge clk_i);
//     end while (busy_bit === 1'b1 && timeout_count < SPI_DONE_TIMEOUT);

//     if (timeout_count >= SPI_DONE_TIMEOUT) begin
//       $error("%t : TB: Timeout waiting for SPI Engine to become idle. Last Status: 0x%08x", $time, status_val);
//       $finish;
//     end
//     read_obi(SPI_ENGINE_STATUS_ADDR, status_val, read_err_local); // Final read
//      $display("%t : TB: SPI Engine finished. Final Status: 0x%08x (done=%b, busy=%b)",
//                $time, status_val, status_val[1], status_val[0]);
//   endtask

//   task automatic set_hw_cs_dc(input int cs1_active, input int cs2_active, input int dc_is_data);
//     logic [31:0] ctrl_val = 0;
//     logic [31:0] dummy_rdata;
//     logic        dummy_rerr;

//     if (!cs1_active) ctrl_val[0] = 1'b1;
//     if (!cs2_active) ctrl_val[1] = 1'b1;
//     if (dc_is_data)  ctrl_val[2] = 1'b1;

//     $display("%t : TB: Writing HW Ctrl Reg (Addr 0x%h): 0x%08x (CS1_N_out=%b, CS2_N_out=%b, DC_out=%b)",
//              $time, SPI_HWCTRL_GPIO_ADDR, ctrl_val, ctrl_val[0], ctrl_val[1], ctrl_val[2]);
//     write_obi(SPI_HWCTRL_GPIO_ADDR, ctrl_val, 4'b0001);

//     $display("%t : TB: Dummy Read from UserSpiCtrl (GPIO Addr 0x%h) after CS/DC write.", $time, SPI_HWCTRL_GPIO_ADDR);
//     read_obi(SPI_HWCTRL_GPIO_ADDR, dummy_rdata, dummy_rerr);
//     if (dummy_rerr) $error("Error during dummy read of SPI HW Ctrl");
//     if (dummy_rdata !== ctrl_val) $warning("Dummy read of SPI HW Ctrl (0x%h) got 0x%h, expected 0x%h", SPI_HWCTRL_GPIO_ADDR, dummy_rdata, ctrl_val);
//     #(CLK_PERIOD);
//   endtask

//   task automatic send_byte_hw_ctrl(input int cs_pin_idx, input int is_data, input [7:0] byte_val);
//      if (cs_pin_idx == 1)      set_hw_cs_dc(1, 0, is_data);
//      else if (cs_pin_idx == 2) set_hw_cs_dc(0, 1, is_data);
//      else begin $error("Invalid CS index %0d for send_byte_hw_ctrl", cs_pin_idx); $finish; end

//      wait_spi_engine_idle();
//      write_obi(SPI_ENGINE_TX_ADDR, {24'h0, byte_val}, 4'b0001);
//      write_obi(SPI_ENGINE_CTRL_ADDR, 32'h1, 4'b0001);
//      wait_spi_engine_idle();

//      set_hw_cs_dc(0, 0, is_data);
//      $display("%t : TB: Finished HW Ctrl Send Byte 0x%02h to CS%0d (DC=%s)",
//               $time, byte_val, cs_pin_idx, (is_data ? "Data" : "Cmd"));
//   endtask

//   // Main Test Scenario
//   initial begin
//     // Declare all local variables for the initial block here
//     logic [31:0] read_data;
//     logic        read_err;
//     logic [7:0]  font_byte_val;
//     logic [31:0] prng_val1, prng_val2;
//     logic [31:0] font_addr_A_start; // Declaration
//     logic [31:0] font_addr_A_mid;   // Declaration
//     logic [31:0] font_addr_B_start; // Declaration

//     $dumpfile("tb_user_domain_full.vcd");
//     $dumpvars(0, tb_user_domain_hw_ctrl);


//     // +++ Add hierarchical dumps +++
//     // Top-level bus
//     $dumpvars(1, dut.user_sbr_obi_req_i,      dut.user_sbr_obi_rsp_o);
//     // Demux internals
//     $dumpvars(1, dut.i_obi_demux.select_q,
//                    dut.i_obi_demux.in_flight_count,
//                    dut.i_obi_demux.overflow_state_from_counter);
//     // SPI engine internals
//     $dumpvars(1, dut.i_spi_peripheral.state_q,
//                    dut.i_spi_peripheral.busy,
//                    dut.i_spi_peripheral.done_q);

//     rst_ni = 1'b0;
//     $display("%t : TB: Asserting Reset", $time);
//     #(RESET_DURATION);
//     rst_ni = 1'b1;
//     $display("%t : TB: Deasserting Reset", $time);
//     @(posedge clk_i);

//     $display("%t : TB: Starting Full User Domain Test Sequence...", $time);

//     // --- Test 1: Initialize ADXL345 (Example sequence) ---
//     $display("--- Test 1: Initialize ADXL345 ---");
//     send_byte_hw_ctrl(2, 0, 8'h2D);
//     send_byte_hw_ctrl(2, 0, 8'h08);
//     $display("--- ADXL345 Init Done ---");
//     #(5*CLK_PERIOD);

//     // --- Test 2: Initialize SSD1331 (Example sequence) ---
//     $display("--- Test 2: Initialize SSD1331 ---");
//     send_byte_hw_ctrl(1, 0, 8'hAE);
//     send_byte_hw_ctrl(1, 0, 8'hAF);
//     $display("--- SSD1331 Init Done ---");
//     #(5*CLK_PERIOD);

//     // --- Test 3: Read from Font ROM ---
//     $display("--- Test 3: Read Font ROM ---");
//     font_addr_A_start = TB_USER_FONT_ROM_BASE_ADDR + 32'h18C; // Assignment
//     font_addr_A_mid   = TB_USER_FONT_ROM_BASE_ADDR + 32'h191; // Assignment
//     font_addr_B_start = TB_USER_FONT_ROM_BASE_ADDR + 32'h198; // Assignment

//     read_obi(font_addr_A_start, read_data, read_err);
//     if (read_err) $error("Font ROM Read Failed for 0x%h!", font_addr_A_start); else
//     $display("   Font ROM @0x%h (Start of 'A'): 0x%02x", font_addr_A_start, read_data[7:0]);

//     read_obi(font_addr_A_mid, read_data, read_err);
//     if (read_err) $error("Font ROM Read Failed for 0x%h!", font_addr_A_mid); else
//     $display("   Font ROM @0x%h (Mid of 'A')  : 0x%02x", font_addr_A_mid, read_data[7:0]);

//     read_obi(font_addr_B_start, read_data, read_err);
//     if (read_err) $error("Font ROM Read Failed for 0x%h!", font_addr_B_start); else
//     $display("   Font ROM @0x%h (Start of 'B'): 0x%02x", font_addr_B_start, read_data[7:0]);
//     font_byte_val = read_data[7:0];
//     $display("--- Font ROM Read Done ---");
//     #(5*CLK_PERIOD);

//     // --- Test 4: Test PRNG ---
//     $display("--- Test 4: Test PRNG ---");
//     read_obi(PRNG_RDATA_ADDR, prng_val1, read_err);
//     if (read_err) $error("PRNG Read 1 Failed!");
//     $display("   PRNG Initial Value: 0x%h", prng_val1);

//     write_obi(PRNG_CTRL_ADDR, 32'h1, 4'b0001);
//     #(CLK_PERIOD * 2);
//     read_obi(PRNG_RDATA_ADDR, prng_val2, read_err);
//     if (read_err) $error("PRNG Read 2 Failed!");
//     $display("   PRNG Value after 1st trigger: 0x%h", prng_val2);
//     if (prng_val1 == prng_val2) $warning("PRNG value did not change after trigger!");

//     write_obi(PRNG_CTRL_ADDR, 32'h1, 4'b0001);
//     prng_val1 = prng_val2;
//     #(CLK_PERIOD * 2);
//     read_obi(PRNG_RDATA_ADDR, prng_val2, read_err);
//     if (read_err) $error("PRNG Read 3 Failed!");
//     $display("   PRNG Value after 2nd trigger: 0x%h", prng_val2);
//     if (prng_val1 == prng_val2) $warning("PRNG value did not change after 2nd trigger!");
//     $display("--- PRNG Test Done ---");
//     #(5*CLK_PERIOD);

//     // --- Test 5: Send a Font Byte to Display (example) ---
//     $display("--- Test 5: Send Font Byte (from 'B') to Display ---");
//     send_byte_hw_ctrl(1, 1, font_byte_val);
//     $display("--- Font Byte Sent ---");

//     #(10 * CLK_PERIOD);
//     $display("%t : TB: Full User Domain Test Sequence Complete.", $time);
//     $finish;
//   end

//   final begin
//     if (req_ongoing) begin
//       user_sbr_obi_req.req = 1'b0;
//     end
//   end

// endmodule
//*/