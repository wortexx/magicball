`timescale 1ns/1ps

import croc_pkg::*;

// This is your croc_soc.sv.
// It is correctly structured to instantiate the simplified user_domain.sv
// (from Canvas ID: user_domain_edited_for_spi_focus) which has direct SPI outputs
// and does NOT have modulated_o, neopixel_data_o, or uart2_* ports.

module croc_soc import croc_pkg::*; #(
  parameter int unsigned GpioCount = 16 // Default GpioCount
) (
  input  logic clk_i,
  input  logic rst_ni,
  input  logic ref_clk_i,
  input  logic testmode_i,
  input  logic fetch_en_i,
  output logic status_o,

  // The example croc_soc.sv had modulated_o, neopixel_data_o, uart2_* here.
  // Since your simplified user_domain.sv (user_domain_edited_for_spi_focus)
  // does not have these ports, they are correctly omitted from your croc_soc.sv's
  // top-level port list unless they serve another purpose or are part of a fixed pinout.
  // If they were part of a fixed pinout and unused by your current user_domain,
  // they would be declared here and then tied off appropriately.

  input  logic jtag_tck_i,
  input  logic jtag_tdi_i,
  output logic jtag_tdo_o,
  input  logic jtag_tms_i,
  input  logic jtag_trst_ni,

  input  logic uart_rx_i,    // Main UART
  output logic uart_tx_o,    // Main UART

  input  logic [GpioCount-1:0] gpio_i,
  output logic [GpioCount-1:0] gpio_o,
  output logic [GpioCount-1:0] gpio_out_en_o,

  // Unused pins (if any, not used by this routing plan)
  // These are specific to your croc_soc.sv version.
  output logic [3:0]             unused_o,
  output logic [3:0]             unused_oe_o
);

  logic synced_rst_n, synced_fetch_en;

  rstgen i_rstgen (
      .clk_i(clk_i),
      .rst_ni(rst_ni),
      .test_mode_i ( testmode_i ),
      .rst_no      ( synced_rst_n ),
      .init_no ( /* unconnected */ )
  );

  sync #(
      .STAGES     (    2 ),
      .ResetValue ( 1'b0 )
    ) i_ext_intr_sync (
      .clk_i (clk_i),
      .rst_ni   ( synced_rst_n    ),
      .serial_i ( fetch_en_i      ),
      .serial_o ( synced_fetch_en )
    );

  sbr_obi_req_t user_sbr_obi_req;
  sbr_obi_rsp_t user_sbr_obi_rsp;
  mgr_obi_req_t user_mgr_obi_req;
  mgr_obi_rsp_t user_mgr_obi_rsp;

  logic [NumExternalIrqs-1:0] interrupts;
  logic [GpioCount-1:0] gpio_in_sync;

  // Wires for user domain hardware-controlled outputs (your custom SPI signals)
  logic user_spi_sck;
  logic user_spi_mosi;
  logic user_spi_cs1_no;
  logic user_spi_cs2_no;
  logic user_spi_dc_o;

  // Intermediate wires for standard GPIO controller outputs from croc_domain
  logic [GpioCount-1:0] croc_gpio_o_internal;
  logic [GpioCount-1:0] croc_gpio_out_en_internal;

  croc_domain #(
    .GpioCount( GpioCount )
  ) i_croc (
    .clk_i(clk_i),
    .rst_ni(synced_rst_n),
    .ref_clk_i(ref_clk_i),
    .testmode_i(testmode_i),
    .fetch_en_i(synced_fetch_en),
    .jtag_tck_i(jtag_tck_i),
    .jtag_tdi_i(jtag_tdi_i),
    .jtag_tdo_o(jtag_tdo_o),
    .jtag_tms_i(jtag_tms_i),
    .jtag_trst_ni(jtag_trst_ni),
    .uart_rx_i(uart_rx_i),
    .uart_tx_o(uart_tx_o),
    .gpio_i(gpio_i),
    .gpio_o        ( croc_gpio_o_internal        ), // croc_domain drives its GPIOs to these internal wires
    .gpio_out_en_o ( croc_gpio_out_en_internal ), // croc_domain drives its OE to these internal wires
    .gpio_in_sync_o ( gpio_in_sync ),             // croc_domain provides synced GPIO inputs to user_domain
    .user_sbr_obi_req_o  ( user_sbr_obi_req ),   // OBI request from croc_domain to user_domain
    .user_sbr_obi_rsp_i  ( user_sbr_obi_rsp ),   // OBI response from user_domain to croc_domain
    .user_mgr_obi_req_i  ( user_mgr_obi_req ),   // OBI request from user_domain (if manager) to croc_domain
    .user_mgr_obi_rsp_o  ( user_mgr_obi_rsp ),   // OBI response from croc_domain to user_domain (if manager)
    .interrupts_i ( interrupts  ),              // Interrupts from user_domain to croc_domain
    .core_busy_o  ( status_o    )
  );

  // Instantiation of your user_domain.
  // This correctly matches the port list of the simplified user_domain.sv
  // from Canvas ID: user_domain_edited_for_spi_focus
  user_domain #(
    .GpioCount( GpioCount )
  ) i_user (
    .clk_i(clk_i),
    .rst_ni(synced_rst_n),
    .ref_clk_i(ref_clk_i),
    .testmode_i(testmode_i),
    // The simplified user_domain (user_domain_edited_for_spi_focus) does NOT have
    // modulated_o, neopixel_data_o, or uart2_* ports, so they are correctly omitted here.
    .user_sbr_obi_req_i ( user_sbr_obi_req ),
    .user_sbr_obi_rsp_o ( user_sbr_obi_rsp ),
    .user_mgr_obi_req_o ( user_mgr_obi_req ), // Connected, but simplified user_domain ties this off
    .user_mgr_obi_rsp_i ( user_mgr_obi_rsp ), // Connected, but simplified user_domain doesn't use response
    .gpio_in_sync_i ( gpio_in_sync ),     // Kept for potential accelerometer
    .interrupts_o   ( interrupts   ),     // Kept for potential accelerometer
    // Direct SPI outputs from the simplified user_domain
    .spi_sck_o      ( user_spi_sck    ),
    .spi_mosi_o     ( user_spi_mosi   ),
    .spi_cs1_no     ( user_spi_cs1_no ),
    .spi_cs2_no     ( user_spi_cs2_no ),
    .spi_dc_o       ( user_spi_dc_o   )
  );

  // Drive top-level GPIO outputs
  // Pins 0-4 are driven by user_domain's SPI signals
  assign gpio_o[0] = user_spi_sck;
  assign gpio_o[1] = user_spi_mosi;
  assign gpio_o[2] = user_spi_cs1_no;
  assign gpio_o[3] = user_spi_cs2_no;
  assign gpio_o[4] = user_spi_dc_o;

  // Pins 5 and up are driven by the standard GPIO controller from croc_domain
  if (GpioCount > 5) begin : gen_remaining_gpio_o
      assign gpio_o[GpioCount-1:5] = croc_gpio_o_internal[GpioCount-1:5];
  end

  // Drive top-level GPIO Output Enables
  // Pins 0-4 are dedicated outputs for SPI
  assign gpio_out_en_o[4:0] = 5'b11111;

  // Pins 5 and up are controlled by the standard GPIO controller from croc_domain
  if (GpioCount > 5) begin : gen_remaining_gpio_oe
      assign gpio_out_en_o[GpioCount-1:5] = croc_gpio_out_en_internal[GpioCount-1:5];
  end

  // Tie off unused_o pins (specific to your croc_soc.sv version)
  assign unused_o    = 4'b0;
  assign unused_oe_o = 4'b0; // Set as inputs (output enables low)

endmodule



// module croc_soc import croc_pkg::*; #(
//   parameter int unsigned GpioCount = 16 // Default GpioCount
// ) (
//   input  logic clk_i,
//   input  logic rst_ni,
//   input  logic ref_clk_i,
//   input  logic testmode_i,
//   input  logic fetch_en_i,
//   output logic status_o,

//   input  logic jtag_tck_i,
//   input  logic jtag_tdi_i,
//   output logic jtag_tdo_o,
//   input  logic jtag_tms_i,
//   input  logic jtag_trst_ni,

//   input  logic uart_rx_i,
//   output logic uart_tx_o,

//   input  logic [GpioCount-1:0] gpio_i,
//   output logic [GpioCount-1:0] gpio_o,
//   output logic [GpioCount-1:0] gpio_out_en_o,

//   // Unused pins (if any, not used by this routing plan)
//   output logic [3:0]             unused_o,
//   output logic [3:0]             unused_oe_o
// );

//   logic synced_rst_n, synced_fetch_en;

//   rstgen i_rstgen (
//       .clk_i(clk_i),
//       .rst_ni(rst_ni),
//       .test_mode_i ( testmode_i ),
//       .rst_no      ( synced_rst_n ),
//       .init_no ( /* unconnected */ )
//   );

//   sync #(
//       .STAGES     (    2 ),
//       .ResetValue ( 1'b0 )
//     ) i_ext_intr_sync (
//       .clk_i (clk_i),
//       .rst_ni   ( synced_rst_n    ),
//       .serial_i ( fetch_en_i      ),
//       .serial_o ( synced_fetch_en )
//     );

//   sbr_obi_req_t user_sbr_obi_req;
//   sbr_obi_rsp_t user_sbr_obi_rsp;
//   mgr_obi_req_t user_mgr_obi_req;
//   mgr_obi_rsp_t user_mgr_obi_rsp;

//   logic [NumExternalIrqs-1:0] interrupts;
//   logic [GpioCount-1:0] gpio_in_sync;

//   // Wires for user domain hardware-controlled outputs
//   logic user_spi_sck;
//   logic user_spi_mosi;
//   logic user_spi_cs1_no;
//   logic user_spi_cs2_no;
//   logic user_spi_dc_o;

//   // Intermediate wires for standard GPIO controller outputs
//   logic [GpioCount-1:0] croc_gpio_o_internal;
//   logic [GpioCount-1:0] croc_gpio_out_en_internal;

//   croc_domain #(
//     .GpioCount( GpioCount )
//   ) i_croc (
//     .clk_i(clk_i), 
//     .rst_ni(synced_rst_n), 
//     .ref_clk_i(ref_clk_i), 
    
//     .testmode_i(testmode_i), 
//     .fetch_en_i(synced_fetch_en),
    
//     .jtag_tck_i(jtag_tck_i), 
//     .jtag_tdi_i(jtag_tdi_i), 
//     .jtag_tdo_o(jtag_tdo_o), 
//     .jtag_tms_i(jtag_tms_i), 
//     .jtag_trst_ni(jtag_trst_ni),
    
//     .uart_rx_i(uart_rx_i), 
//     .uart_tx_o(uart_tx_o),
    
//     .gpio_i(gpio_i),
//     .gpio_o        ( croc_gpio_o_internal        ), // To intermediate
//     .gpio_out_en_o ( croc_gpio_out_en_internal ), // To intermediate
//     .gpio_in_sync_o ( gpio_in_sync ),
//     .user_sbr_obi_req_o  ( user_sbr_obi_req ), .user_sbr_obi_rsp_i  ( user_sbr_obi_rsp ),
//     .user_mgr_obi_req_i  ( user_mgr_obi_req ), .user_mgr_obi_rsp_o  ( user_mgr_obi_rsp ),
//     .interrupts_i ( interrupts  ),
//     .core_busy_o  ( status_o    )
//   );

//   user_domain #(
//     .GpioCount( GpioCount )
//   ) i_user (
//     .clk_i(clk_i), .rst_ni(synced_rst_n), .ref_clk_i(ref_clk_i), .testmode_i(testmode_i),
//     .user_sbr_obi_req_i ( user_sbr_obi_req ), .user_sbr_obi_rsp_o ( user_sbr_obi_rsp ),
//     .user_mgr_obi_req_o ( user_mgr_obi_req ), .user_mgr_obi_rsp_i ( user_mgr_obi_rsp ),
//     .gpio_in_sync_i ( gpio_in_sync ),
//     .interrupts_o   ( interrupts   ),
//     // Connect new hardware-controlled outputs
//     .spi_sck_o      ( user_spi_sck    ),
//     .spi_mosi_o     ( user_spi_mosi   ),
//     .spi_cs1_no     ( user_spi_cs1_no ),
//     .spi_cs2_no     ( user_spi_cs2_no ),
//     .spi_dc_o       ( user_spi_dc_o   )
//   );

//   // Drive top-level GPIO outputs
//   // Pins 0-4 are now driven by user_domain
//   assign gpio_o[0] = user_spi_sck;
//   assign gpio_o[1] = user_spi_mosi;
//   assign gpio_o[2] = user_spi_cs1_no;
//   assign gpio_o[3] = user_spi_cs2_no;
//   assign gpio_o[4] = user_spi_dc_o;

//   // Pins 5 and up are driven by the standard GPIO controller
//   if (GpioCount > 5) begin : gen_remaining_gpio_o
//       assign gpio_o[GpioCount-1:5] = croc_gpio_o_internal[GpioCount-1:5];
//   end

//   // Drive top-level GPIO Output Enables
//   // Pins 0-4 are now dedicated outputs
//   assign gpio_out_en_o[4:0] = 5'b11111; // All five are outputs

//   // Pins 5 and up are controlled by the standard GPIO controller
//   if (GpioCount > 5) begin : gen_remaining_gpio_oe
//       assign gpio_out_en_o[GpioCount-1:5] = croc_gpio_out_en_internal[GpioCount-1:5];
//   end

//   // Tie off unused_o pins if not used elsewhere
//   assign unused_o    = 4'b0;
//   assign unused_oe_o = 4'b0; // Set as inputs (output enables low)

// endmodule