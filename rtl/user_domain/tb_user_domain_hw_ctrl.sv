`timescale 1ns/1ps

// Import necessary packages
import croc_pkg::*;
import user_pkg::*; // Import makes types like enums directly visible

module tb_user_domain_hw_ctrl;

  //--------------------------------------------------------------------------
  // Parameters
  //--------------------------------------------------------------------------
  localparam CLK_PERIOD     = 50ns; // 20 MHz clock
  localparam RESET_DURATION = 2 * CLK_PERIOD;
  localparam OBI_TIMEOUT    = 2000; // Max cycles for OBI response
  localparam SPI_DONE_TIMEOUT = 10000; // Max cycles for SPI busy=0
  localparam GpioCount      = 16;   // Match DUT parameterization

  // --- Absolute Base Addresses (from user_pkg.sv) ---
  localparam logic [31:0] USER_SPI_ENGINE_BASE_ADDR = user_pkg::UserSpiAddrOffset;     // 0x20001000
  localparam logic [31:0] USER_SPI_CTRL_BASE_ADDR   = user_pkg::UserSpiCtrlAddrOffset; // 0x20002000
  localparam logic [31:0] USER_FONT_ROM_BASE_ADDR   = user_pkg::UserFontRomAddrOffset; // 0x20003000

  // --- Register Offsets (Defined locally in TB for clarity) ---
  // SPI Engine (obi_spi_peripheral)
  localparam logic [11:0] SPI_ENGINE_CTRL_REG_OFFSET   = 12'h000;
  localparam logic [11:0] SPI_ENGINE_TX_REG_OFFSET     = 12'h004;
  localparam logic [11:0] SPI_ENGINE_STATUS_REG_OFFSET = 12'h008;
  // SPI Control (user_spi_ctrl)
  localparam logic [11:0] SPI_HWCTRL_GPIO_OFFSET    = 12'h000; // CS1_N, CS2_N, DC control (Write)
  localparam logic [11:0] SPI_HWCTRL_PRNG_CTRL_OFFSET = 12'h004; // PRNG Trigger (Write)
  localparam logic [11:0] SPI_HWCTRL_PRNG_READ_OFFSET = 12'h008; // Read PRNG output (Read)
  // Font ROM (user_font_rom)
  localparam int unsigned FONT_ROM_SIZE = 1140; // Size for 12x6 font

  // Bit positions (Defined locally in TB for clarity)
  // In SPI_HWCTRL_GPIO_OFFSET Register
  localparam int HWCTRL_CS1_N_BIT = 0;
  localparam int HWCTRL_CS2_N_BIT = 1;
  localparam int HWCTRL_DC_BIT    = 2;
  // In SPI_HWCTRL_PRNG_CTRL_OFFSET Register
  localparam int HWCTRL_PRNG_EN_BIT = 0;
  // PRNG Seed (Optional, for potential checks)
  localparam int unsigned PRNG_SEED = 32'hCAFEBABE;

  // Absolute Addresses calculated locally
  localparam logic [31:0] SPI_ENGINE_CTRL_ADDR   = USER_SPI_ENGINE_BASE_ADDR + SPI_ENGINE_CTRL_REG_OFFSET;
  localparam logic [31:0] SPI_ENGINE_TX_ADDR     = USER_SPI_ENGINE_BASE_ADDR + SPI_ENGINE_TX_REG_OFFSET;
  localparam logic [31:0] SPI_ENGINE_STATUS_ADDR = USER_SPI_ENGINE_BASE_ADDR + SPI_ENGINE_STATUS_REG_OFFSET;

  localparam logic [31:0] SPI_HWCTRL_GPIO_ADDR   = USER_SPI_CTRL_BASE_ADDR + SPI_HWCTRL_GPIO_OFFSET;
  localparam logic [31:0] SPI_HWCTRL_PRNG_CTRL_ADDR = USER_SPI_CTRL_BASE_ADDR + SPI_HWCTRL_PRNG_CTRL_OFFSET;
  localparam logic [31:0] SPI_HWCTRL_PRNG_READ_ADDR = USER_SPI_CTRL_BASE_ADDR + SPI_HWCTRL_PRNG_READ_OFFSET;


  // Device Selection (for TB tasks)
  typedef enum { DEV_NONE, DEV_SSD1331, DEV_ADXL345 } device_e;

  //--------------------------------------------------------------------------
  // Signals
  //--------------------------------------------------------------------------
  logic clk_i;
  logic rst_ni;
  logic ref_clk_i;
  logic testmode_i;

  sbr_obi_req_t user_sbr_obi_req;
  sbr_obi_rsp_t user_sbr_obi_rsp;
  mgr_obi_req_t user_mgr_obi_req;
  mgr_obi_rsp_t user_mgr_obi_rsp;
  logic [GpioCount-1:0]       gpio_in_sync_i;
  logic [croc_pkg::NumExternalIrqs-1:0] interrupts_o; // Use scoped NumExternalIrqs

  logic spi_sck_o;
  logic spi_mosi_o;
  logic spi_cs1_no;
  logic spi_cs2_no;
  logic spi_dc_o;

  logic req_ongoing;
  logic [31:0] prng_val1;
  logic [31:0] prng_val2;
  logic [7:0]  font_byte;

  //--------------------------------------------------------------------------
  // DUT Instantiation (user_domain)
  //--------------------------------------------------------------------------
  user_domain #(
    .GpioCount( GpioCount )
  ) dut (
    .clk_i, .rst_ni, .ref_clk_i, .testmode_i,
    .user_sbr_obi_req_i ( user_sbr_obi_req ),
    .user_sbr_obi_rsp_o ( user_sbr_obi_rsp ),
    .user_mgr_obi_req_o ( user_mgr_obi_req ),
    .user_mgr_obi_rsp_i ( user_mgr_obi_rsp ),
    .gpio_in_sync_i     ( gpio_in_sync_i ),
    .interrupts_o       ( interrupts_o   ),
    .spi_sck_o, .spi_mosi_o, .spi_cs1_no, .spi_cs2_no, .spi_dc_o
  );

  //--------------------------------------------------------------------------
  // Clock Generation & Default Connections
  //--------------------------------------------------------------------------
  initial begin
    clk_i = 1'b0;
    forever #(CLK_PERIOD / 2) clk_i = ~clk_i;
  end

  initial begin
     ref_clk_i        = 1'b0;
     testmode_i       = 1'b0;
     gpio_in_sync_i   = '0;
     user_mgr_obi_rsp = '0;
     req_ongoing      = 1'b0;
     user_sbr_obi_req = '0;
  end

  //--------------------------------------------------------------------------
  // OBI Master Tasks (Targeting Absolute Addresses)
  //--------------------------------------------------------------------------
  task automatic write_obi(input logic [31:0] w_addr, input logic [31:0] w_data, input logic [3:0] w_be);
    int timeout_count = 0;
    sbr_obi_req_t req_txn;
    @(posedge clk_i);
    req_txn = '0;
    req_txn.req    = 1'b1;
    req_txn.a.we   = 1'b1;
    req_txn.a.addr = w_addr;
    req_txn.a.wdata = w_data;
    req_txn.a.be   = w_be;
    user_sbr_obi_req = req_txn;
    req_ongoing = 1'b1;
    $display("%t : TB: OBI Write Req : Addr=0x%h Data=0x%h BE=0x%b (Sent: %p)",
             $time, w_addr, w_data, w_be, user_sbr_obi_req);

    while (user_sbr_obi_rsp.gnt !== 1'b1 && timeout_count < OBI_TIMEOUT) begin
      @(posedge clk_i);
      timeout_count++;
    end
    if (timeout_count >= OBI_TIMEOUT) begin
      $error("%t : TB: Timeout waiting for OBI grant during write to 0x%h. Last rsp: %p",
             $time, w_addr, user_sbr_obi_rsp);
      $finish;
    end
    $display("%t : TB: OBI Write Gnt Rcvd: Addr=0x%h (Rcvd: %p)",
             $time, w_addr, user_sbr_obi_rsp);

    @(posedge clk_i);
    user_sbr_obi_req.req = 1'b0;
    req_ongoing = 1'b0;
    $display("%t : TB: OBI Write Req Deasserted.", $time);
    @(posedge clk_i);
    user_sbr_obi_req = '0;
  endtask

  task automatic read_obi(input logic [31:0] r_addr, output logic [31:0] r_data_val, output logic r_err);
    int timeout_count_gnt = 0;
    int timeout_count_rvalid = 0;
    sbr_obi_req_t req_txn;
    sbr_obi_r_chan_t rsp_r_chan_temp;
    logic grant_received;

    @(posedge clk_i);
    req_txn = '0;
    req_txn.req    = 1'b1;
    req_txn.a.we   = 1'b0;
    req_txn.a.addr = r_addr;
    user_sbr_obi_req = req_txn;
    req_ongoing = 1'b1;
    $display("%t : TB: OBI Read Req  : Addr=0x%h (Sent: %p)", $time, r_addr, user_sbr_obi_req);

    grant_received = 1'b0;
    while (timeout_count_gnt < OBI_TIMEOUT) begin
      if (user_sbr_obi_rsp.gnt === 1'b1) begin
        grant_received = 1'b1;
        break;
      end
      @(posedge clk_i);
      timeout_count_gnt++;
    end

    if (!grant_received) begin
      $error("%t : TB: Timeout waiting for OBI grant during read from 0x%h. Last rsp: %p",
             $time, r_addr, user_sbr_obi_rsp);
      $finish;
    end
    $display("%t : TB: OBI Read Gnt Rcvd: Addr=0x%h (Rcvd: %p)",
             $time, r_addr, user_sbr_obi_rsp);

    @(posedge clk_i);
    user_sbr_obi_req.req = 1'b0;
    req_ongoing = 1'b0;
    $display("%t : TB: OBI Read Req Deasserted.", $time);

    while (user_sbr_obi_rsp.rvalid !== 1'b1 && timeout_count_rvalid < OBI_TIMEOUT) begin
        @(posedge clk_i);
        timeout_count_rvalid++;
    end
    if (timeout_count_rvalid >= OBI_TIMEOUT) begin
        $error("%t : TB: Timeout waiting for OBI rvalid during read from 0x%h. Last rsp: %p",
               $time, r_addr, user_sbr_obi_rsp);
        $finish;
    end

    rsp_r_chan_temp = user_sbr_obi_rsp.r;
    r_data_val = rsp_r_chan_temp.rdata;
    r_err      = rsp_r_chan_temp.err;
    $display("%t : TB: OBI Read Data Rcvd: Addr=0x%h Data=0x%08x Err=%b RVALID=%b (Rcvd: %p)",
             $time, r_addr, r_data_val, r_err, user_sbr_obi_rsp.rvalid, user_sbr_obi_rsp);
    @(posedge clk_i);
    user_sbr_obi_req = '0;
  endtask

  //--------------------------------------------------------------------------
  // Helper Tasks for Hardware Control
  //--------------------------------------------------------------------------
  task automatic wait_spi_engine_idle();
      logic [31:0] status_val;
      logic busy_bit;
      logic done_bit_tb;
      logic read_err;
      int timeout_count = 0;
      $display("%t : TB: Waiting for SPI Engine to finish...", $time);
      @(posedge clk_i);
      do begin
          read_obi(SPI_ENGINE_STATUS_ADDR, status_val, read_err);
          if (read_err) begin
             $error("%t : TB: OBI Error reading SPI Engine Status!", $time); $finish;
          end
          busy_bit = status_val[0];
          done_bit_tb = status_val[1];
          $display("%t : TB: Polling SPI Engine Status (Addr 0x%h): 0x%08x (done=%b, busy=%b)",
                   $time, SPI_ENGINE_STATUS_ADDR, status_val, done_bit_tb, busy_bit);
          timeout_count++;
          if (busy_bit === 1'b1) @(posedge clk_i);
      end while (busy_bit === 1'b1 && timeout_count < SPI_DONE_TIMEOUT);

      if (timeout_count >= SPI_DONE_TIMEOUT) begin
          $error("%t : TB: Timeout waiting for SPI Engine to become idle. Last Status: 0x%08x",
                 $time, status_val);
          $finish;
      end
      read_obi(SPI_ENGINE_STATUS_ADDR, status_val, read_err);
      $display("%t : TB: SPI Engine finished. Final Status: 0x%08x (done=%b, busy=%b)",
               $time, status_val, status_val[1], status_val[0]);
  endtask

  task automatic set_hw_cs_dc(input int cs1_active, input int cs2_active, input int dc_is_data);
    logic [31:0] ctrl_val = 0;
    if (!cs1_active) ctrl_val[HWCTRL_CS1_N_BIT] = 1'b1;
    if (!cs2_active) ctrl_val[HWCTRL_CS2_N_BIT] = 1'b1;
    if (dc_is_data)  ctrl_val[HWCTRL_DC_BIT]    = 1'b1;
    $display("%t : TB: Writing HW Ctrl Reg (Addr 0x%h): 0x%08x (CS1_N=%b, CS2_N=%b, DC=%b)",
             $time, SPI_HWCTRL_GPIO_ADDR, ctrl_val,
             ctrl_val[HWCTRL_CS1_N_BIT], ctrl_val[HWCTRL_CS2_N_BIT], ctrl_val[HWCTRL_DC_BIT]);
    write_obi(SPI_HWCTRL_GPIO_ADDR, ctrl_val, 4'b1111);
    #(CLK_PERIOD);
  endtask

  task automatic trigger_hw_prng();
    $display("%t : TB: Triggering HW PRNG...", $time);
    write_obi(SPI_HWCTRL_PRNG_CTRL_ADDR, (1 << HWCTRL_PRNG_EN_BIT), 4'b1111);
  endtask

  task automatic read_hw_prng(output logic [31:0] prng_val);
    logic read_err;
    $display("%t : TB: Reading HW PRNG...", $time);
    read_obi(SPI_HWCTRL_PRNG_READ_ADDR, prng_val, read_err);
    if (read_err) begin
        $error("%t : TB: OBI Error reading PRNG value!", $time); $finish;
    end
    $display("%t : TB: Read HW PRNG Value = 0x%h", $time, prng_val);
  endtask

  task automatic send_byte_hw_ctrl(input int cs_pin_idx, input int is_data, input [7:0] byte_val);
     if (cs_pin_idx == 1) begin
         set_hw_cs_dc(1, 0, is_data);
     end else if (cs_pin_idx == 2) begin
         set_hw_cs_dc(0, 1, is_data);
     end else begin
         $error("Invalid CS index %0d", cs_pin_idx); $finish;
     end

     wait_spi_engine_idle();
     write_obi(SPI_ENGINE_TX_ADDR, {24'h0, byte_val}, 4'b0001);
     write_obi(SPI_ENGINE_CTRL_ADDR, 32'h1, 4'b0001);
     wait_spi_engine_idle();

     set_hw_cs_dc(0, 0, is_data); // Deassert all CS lines
     $display("%t : TB: Finished HW Ctrl Send Byte 0x%02h to CS%0d", $time, byte_val, cs_pin_idx);
  endtask

  //--------------------------------------------------------------------------
  // Test Scenario
  //--------------------------------------------------------------------------
  initial begin
    logic [31:0] read_data;
    logic        read_err;
    // Variables prng_result and phrase_index moved to module scope
    int          phrase_index;
    // Variable font_byte moved to module scope

    $dumpfile("tb_user_domain_hw_ctrl.vcd");
    $dumpvars(0, tb_user_domain_hw_ctrl);

    rst_ni = 1'b0;
    $display("%t : TB: Asserting Reset", $time);
    #(RESET_DURATION);
    rst_ni = 1'b1;
    $display("%t : TB: Deasserting Reset", $time);
    @(posedge clk_i);

    $display("%t : TB: Starting Test Sequence for user_domain (HW Ctrl)...", $time);

    // Test 1: Initialize ADXL345
    $display("--- Test 1: Initialize ADXL345 ---");
    send_byte_hw_ctrl(2 /*CS2*/, 0, 8'h2D); // Send Reg Addr
    send_byte_hw_ctrl(2 /*CS2*/, 0, 8'h08); // Send Data
    $display("--- ADXL345 Init Done ---");
    #(5 * CLK_PERIOD);

    // Test 2: Initialize SSD1331
    $display("--- Test 2: Initialize SSD1331 ---");
    send_byte_hw_ctrl(1 /*CS1*/, 0 /*Command*/, 8'hAF); // Display ON
    $display("--- SSD1331 Init Done ---");
    #(5 * CLK_PERIOD);

    // Test 3: Trigger and Read PRNG
    $display("--- Test 3: Trigger and Read PRNG ---");
    trigger_hw_prng();
    #(3*CLK_PERIOD);
    read_hw_prng(prng_val1); // Use module-scope variable
    phrase_index = prng_val1 % 8;
    $display("   -> Phrase Index: %0d", phrase_index);
    #(5 * CLK_PERIOD);

    // Test 4: Read first byte of Font ROM (Char '!')
    $display("--- Test 4: Read Font ROM (Char '!', Offset 0x%h) ---", 12);
    // *** FIXED: Use correct parameter name ***
    read_obi(USER_FONT_ROM_BASE_ADDR + 12, read_data, read_err);
    if (read_err) begin $error("Font ROM Read Failed!"); $finish; end
    font_byte = read_data[7:0]; // Use module-scope variable
    $display("   -> Font Byte[0] for '!': 0x%02h (Expected 0x00)", font_byte);
    if (font_byte !== 8'h00) $error("Font data mismatch!");
    #(5 * CLK_PERIOD);

    // Test 5: Send Font Byte to Display
    $display("--- Test 5: Send Font Byte to Display ---");
    send_byte_hw_ctrl(1 /*CS1*/, 1 /*Data*/, font_byte);
    $display("--- Font Byte Sent ---");
    #(5 * CLK_PERIOD);

    #(10 * CLK_PERIOD);
    $display("%t : TB: Test Sequence Complete.", $time);
    $finish;
  end

  final begin
    if (req_ongoing) begin
        user_sbr_obi_req.req = 1'b0;
    end
  end

endmodule