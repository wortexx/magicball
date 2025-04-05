// spi_hello_tb.sv

`timescale 1ns/1ps

module spi_hello_tb;

  // Clock and reset
  logic clk = 0;
  logic rst_n = 0;
  
  always #5 clk = ~clk; // 100 MHz clock

  // OBI interface signals
  logic        req;
  logic [31:0] addr;
  logic [31:0] wdata;
  logic        we;
  logic        gnt;
  logic        rvalid;
  logic [31:0] rdata;

  // SPI signals
  logic sck, mosi, cs;

  // Instantiate SPI peripheral 
  obi_spi_peripheral dut (
    .clk_i    (clk),
    .rst_ni   (rst_n),
    .req_i    (req),
    .addr_i   (addr),
    .wdata_i  (wdata),
    .we_i     (we),
    .gnt_o    (gnt),
    .rvalid_o (rvalid),
    .rdata_o  (rdata),
    .sck_o    (sck),
    .mosi_o   (mosi),
    .cs_o     (cs)
  );

  // Simulate one SPI command: SSD1306 Display ON (0xAF)
  initial begin
    $dumpfile("spi_hello.vcd");
    $dumpvars(0, spi_hello_tb);

    // Reset
    rst_n = 0;
    req   = 0;
    we    = 0;
    #20;
    rst_n = 1;
    #20;

    // Write control byte 0x00 (SSD1306 command mode)
    write_spi_byte(8'h00);
    #1000;

    // Write command 0xAF (Display ON)
    write_spi_byte(8'hAF);
    #5000;

    $finish;
  end

  // SPI write sequence via OBI
  task write_spi_byte(input [7:0] data_in);
    begin
      // Write data to SPI_TX (addr 0x04)
      addr = 32'h00000004;
      wdata = {24'h0, data_in};
      we = 1;
      req = 1;
      #10;
      req = 0;

      // Write to SPI_CTRL (addr 0x00) to start
      addr = 32'h00000000;
      wdata = 32'h1;
      we = 1;
      req = 1;
      #10;
      req = 0;

      // Wait for rvalid to return (optional)
      #1000;
    end
  endtask

endmodule
