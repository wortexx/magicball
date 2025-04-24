// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

module croc_soc import croc_pkg::*; #(
  parameter int unsigned GpioCount = 16
) (
  input  logic clk_i,
  input  logic rst_ni,
  input  logic ref_clk_i,
  input  logic testmode_i,
  input  logic fetch_en_i,
  output logic status_o,

  input  logic jtag_tck_i,
  input  logic jtag_tdi_i,
  output logic jtag_tdo_o,
  input  logic jtag_tms_i,
  input  logic jtag_trst_ni,

  input  logic uart_rx_i,
  output logic uart_tx_o,

  input  logic [GpioCount-1:0] gpio_i,       // Input from GPIO pins
  output logic [GpioCount-1:0] gpio_o,       // Output to GPIO pins
  output logic [GpioCount-1:0] gpio_out_en_o, // Output enable signal; 0 -> input, 1 -> output

  //  Ports for unused pins 
  output logic [3:0]             unused_o,
  output logic [3:0]             unused_oe_o // Output enable for unused pins
);

  logic synced_rst_n, synced_fetch_en;

  rstgen i_rstgen (
    .clk_i,
    .rst_ni,
    .test_mode_i ( testmode_i ),
    .rst_no      ( synced_rst_n ),
    .init_no ( )
  );

  sync #(
      .STAGES     (    2 ),
      .ResetValue ( 1'b0 )
    ) i_ext_intr_sync (
      .clk_i,
      .rst_ni   ( synced_rst_n    ),
      .serial_i ( fetch_en_i      ),
      .serial_o ( synced_fetch_en )
    );

// Connection between Croc_domain and User_domain: User Sbr, Croc Mgr
sbr_obi_req_t user_sbr_obi_req;
sbr_obi_rsp_t user_sbr_obi_rsp;

// Connection between Croc_domain and User_domain: Croc Sbr, User Mgr
mgr_obi_req_t user_mgr_obi_req;
mgr_obi_rsp_t user_mgr_obi_rsp;

logic [NumExternalIrqs-1:0] interrupts;
logic [GpioCount-1:0] gpio_in_sync;

  // Wires for user domain SCK and MOSI
  logic user_spi_sck;
  logic user_spi_mosi;

  // Intermediate wires for Croc domain GPIO outputs
  logic [GpioCount-1:0] croc_gpio_o;
  logic [GpioCount-1:0] croc_gpio_out_en_o;

croc_domain #(
  .GpioCount( GpioCount ) 
) i_croc (
  .clk_i,
  .rst_ni ( synced_rst_n ),
  .ref_clk_i,
  .testmode_i,
  .fetch_en_i ( synced_fetch_en ),

  .jtag_tck_i,
  .jtag_tdi_i,
  .jtag_tdo_o,
  .jtag_tms_i,
  .jtag_trst_ni,

  .uart_rx_i,
  .uart_tx_o,

  .gpio_i,             
  //  Connect GPIO outputs to intermediate wires
  .gpio_o ( croc_gpio_o ),            
  .gpio_out_en_o ( croc_gpio_out_en_o ),

  .gpio_in_sync_o ( gpio_in_sync ),

  .user_sbr_obi_req_o  ( user_sbr_obi_req ),
  .user_sbr_obi_rsp_i  ( user_sbr_obi_rsp ),

  .user_mgr_obi_req_i  ( user_mgr_obi_req ),
  .user_mgr_obi_rsp_o  ( user_mgr_obi_rsp ),

  .interrupts_i ( interrupts  ),
  .core_busy_o  ( status_o    )
);

  user_domain #(
    .GpioCount( GpioCount ) // Pass GpioCount if needed by gpio_in_sync_i connection
  ) i_user (
    .clk_i,
    .rst_ni ( synced_rst_n ),
    .ref_clk_i,
    .testmode_i,
    .user_sbr_obi_req_i ( user_sbr_obi_req ),
    .user_sbr_obi_rsp_o ( user_sbr_obi_rsp ),
    .user_mgr_obi_req_o ( user_mgr_obi_req ),
    .user_mgr_obi_rsp_i ( user_mgr_obi_rsp ),
    .gpio_in_sync_i ( gpio_in_sync ),
    .interrupts_o   ( interrupts   ),
    // Connect user domain SPI outputs (SCK and MOSI only)
    .spi_sck_o      ( user_spi_sck  ),
    .spi_mosi_o     ( user_spi_mosi )
  );

  //  Drive top-level GPIO outputs: assign SPI signals to GPIO pins 0, 1
  //  Connect ALL standard GPIO outputs directly from the intermediate wires (driven by i_croc)
  //  This allows software to control CS1, CS2, D/C etc. using standard GPIO registers.
  assign gpio_o        = croc_gpio_o;
  assign gpio_out_en_o = croc_gpio_out_en_o;
  
  // Drive top-level UNUSED outputs 
  // Route hardware SPI signals from user_domain to unused[0:1]
  assign unused_o[0] = user_spi_sck;
  assign unused_o[1] = user_spi_mosi;
  // Leave unused[2:3] unconnected or tied off if purely outputs
  assign unused_o[3:2] = 2'b0; // Tie off unused outputs

  // Set output enables for unused pins
  assign unused_oe_o[0] = 1'b1; // SCK is always output
  assign unused_oe_o[1] = 1'b1; // MOSI is always output
  // Leave unused[2:3] output enables low (or connect if needed elsewhere)
  assign unused_oe_o[3:2] = 2'b0; // Default output enables low

endmodule
