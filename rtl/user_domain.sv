`timescale 1ns/1ps

// This user_domain.sv is simplified for testing user_simple_regs
// with the STANDARD obi_demux.
// Key change: NumMaxTrans for i_user_demux set to 2 to align with lab example.

import croc_pkg::*;
import user_pkg::*; // This should be your current user_pkg.sv

module user_domain #(
  parameter int unsigned GpioCount = 16
) (
  input  logic clk_i,
  input  logic ref_clk_i,
  input  logic rst_ni,
  input  logic testmode_i,

  input  sbr_obi_req_t user_sbr_obi_req_i,
  output sbr_obi_rsp_t user_sbr_obi_rsp_o,

  output mgr_obi_req_t user_mgr_obi_req_o,
  input  mgr_obi_rsp_t user_mgr_obi_rsp_i,

  input  logic [GpioCount-1:0]       gpio_in_sync_i,
  output logic [NumExternalIrqs-1:0] interrupts_o,

  // SPI signals - not driven by user_simple_regs, can be tied off or 'bz
  output logic                       spi_sck_o,
  output logic                       spi_mosi_o,
  output logic                       spi_cs1_no,
  output logic                       spi_cs2_no,
  output logic                       spi_dc_o
);

  // Tie off unused outputs/inputs for this simplified test
  assign interrupts_o       = '0;
  assign user_mgr_obi_req_o = '{default: '0}; // No manager requests from this domain

  // Tie off SPI signals if user_simple_regs is the only peripheral.
  assign spi_sck_o  = 1'bz;
  assign spi_mosi_o = 1'bz;
  assign spi_cs1_no = 1'b1; // Typically active low, so tie inactive
  assign spi_cs2_no = 1'b1; // Typically active low, so tie inactive
  assign spi_dc_o   = 1'b0; // Default DC to a known state

  // Demultiplexer connections
  sbr_obi_req_t [NumDemuxSbr-1:0] all_user_sbr_obi_req_demux;
  sbr_obi_rsp_t [NumDemuxSbr-1:0] all_user_sbr_obi_rsp_demux;

  sbr_obi_req_t user_error_obi_req;
  sbr_obi_rsp_t user_error_obi_rsp;

  sbr_obi_req_t user_custom_periph_obi_req; // For user_simple_regs
  sbr_obi_rsp_t user_custom_periph_obi_rsp;
  logic         user_custom_periph_err;     // Error signal from user_simple_regs

  // Connect to demux ports based on user_pkg.sv enum
  assign user_error_obi_req         = all_user_sbr_obi_req_demux[user_pkg::UserError]; // Index 0
  assign user_custom_periph_obi_req = all_user_sbr_obi_req_demux[user_pkg::UserSpi];   // Index 1 (for user_simple_regs)

  assign all_user_sbr_obi_rsp_demux[user_pkg::UserError] = user_error_obi_rsp;
  assign all_user_sbr_obi_rsp_demux[user_pkg::UserSpi]   = user_custom_periph_obi_rsp;

  // Address Decoder
  logic [cf_math_pkg::idx_width(NumDemuxSbr)-1:0] user_idx;

  addr_decode #(
    .NoIndices ( user_pkg::NumDemuxSbr      ),
    .NoRules   ( user_pkg::NumDemuxSbrRules ),
    .addr_t    ( logic[SbrObiCfg.AddrWidth-1:0] ),
    .rule_t    ( addr_map_rule_t          ),
    .Napot     ( 1'b0                     ),
    .idx_t     ( user_demux_outputs_e     ) // Uses the enum type from user_pkg.sv
  ) i_addr_decode_users (
    .addr_i           ( user_sbr_obi_req_i.a.addr ),
    .addr_map_i       ( user_pkg::user_addr_map   ), // From your user_pkg.sv
    .idx_o            ( user_idx                  ),
    .dec_valid_o      ( /* Unused */              ),
    .dec_error_o      ( /* Unused */              ),
    .en_default_idx_i ( 1'b1                      ),
    .default_idx_i    ( user_pkg::UserError       )
  );

  // OBI Demultiplexer
  obi_demux #(
    .ObiCfg      ( SbrObiCfg                 ),
    .obi_req_t   ( sbr_obi_req_t             ),
    .obi_rsp_t   ( sbr_obi_rsp_t             ),
    .NumMgrPorts ( user_pkg::NumDemuxSbr     ),
    .NumMaxTrans ( 2                         ) // MODIFIED: Changed from 5 to 2 to match lab example
  ) i_user_demux (
    .clk_i,
    .rst_ni,
    .sbr_port_select_i ( user_idx                   ),
    .sbr_port_req_i    ( user_sbr_obi_req_i         ),
    .sbr_port_rsp_o    ( user_sbr_obi_rsp_o         ),
    .mgr_ports_req_o   ( all_user_sbr_obi_req_demux ),
    .mgr_ports_rsp_i   ( all_user_sbr_obi_rsp_demux )
  );

  // OBI Error Slave
  obi_err_sbr #(
    .ObiCfg    ( SbrObiCfg     ),
    .obi_req_t ( sbr_obi_req_t ),
    .obi_rsp_t ( sbr_obi_rsp_t )
  ) i_user_err (
    .clk_i,
    .rst_ni,
    .testmode_i ( testmode_i           ),
    .obi_req_i  ( user_error_obi_req   ),
    .obi_rsp_o  ( user_error_obi_rsp   )
  );

  // Instantiate user_simple_regs (from Canvas ID: user_simple_regs_standard_rw)
  user_simple_regs i_custom_peripheral_inst (
    .clk_i    ( clk_i                             ),
    .rst_ni   ( rst_ni                            ),
    .req_i    ( user_custom_periph_obi_req.req    ),
    .we_i     ( user_custom_periph_obi_req.a.we   ),
    .be_i     ( user_custom_periph_obi_req.a.be   ),
    .addr_i   ( user_custom_periph_obi_req.a.addr ),
    .wdata_i  ( user_custom_periph_obi_req.a.wdata),
    .gnt_o    ( user_custom_periph_obi_rsp.gnt    ),
    .rvalid_o ( user_custom_periph_obi_rsp.rvalid ),
    .rdata_o  ( user_custom_periph_obi_rsp.r.rdata),
    .err_o    ( user_custom_periph_err            )
  );

  // Construct the rest of the custom peripheral response
  assign user_custom_periph_obi_rsp.r.rid = user_custom_periph_obi_req.a.aid;
  assign user_custom_periph_obi_rsp.r.err = user_custom_periph_err; // Use error from peripheral

endmodule




// module user_domain #(
//   parameter int unsigned GpioCount = 16
// ) (
//   input  logic clk_i,
//   input  logic ref_clk_i,
//   input  logic rst_ni,
//   input  logic testmode_i,

//   input  sbr_obi_req_t user_sbr_obi_req_i,
//   output sbr_obi_rsp_t user_sbr_obi_rsp_o,

//   output mgr_obi_req_t user_mgr_obi_req_o,
//   input  mgr_obi_rsp_t user_mgr_obi_rsp_i,

//   input  logic [GpioCount-1:0]       gpio_in_sync_i,
//   output logic [NumExternalIrqs-1:0] interrupts_o,

//   // SPI outputs
//   output logic        spi_sck_o,    // From obi_spi_peripheral
//   output logic        spi_mosi_o,   // From obi_spi_peripheral
//   output logic        spi_cs1_no,   // Tied off (user_spi_ctrl removed)
//   output logic        spi_cs2_no,   // Tied off
//   output logic        spi_dc_o      // Tied off
// );

//   // This user_domain does not act as an OBI manager
//   assign user_mgr_obi_req_o = '{default: '0}; // Properly initialize all fields
//   assign interrupts_o = '0; // No interrupts generated in this simplified version

//   // Tie off SPI control signals as user_spi_ctrl is removed for this focused test
//   assign spi_cs1_no = 1'b1; // De-asserted
//   assign spi_cs2_no = 1'b1; // De-asserted
//   assign spi_dc_o   = 1'b0; // Default to command or an inactive state

//   // OBI subordinate requests and responses for peripherals within user_domain
//   // NumDemuxSbr should be 2 (UserError=0, UserSpi=1) from the simplified user_pkg.sv
//   sbr_obi_req_t [NumDemuxSbr-1:0] all_user_sbr_obi_req;
//   sbr_obi_rsp_t [NumDemuxSbr-1:0] all_user_sbr_obi_rsp;

//   // Individual peripheral OBI interfaces
//   sbr_obi_req_t user_error_obi_req;    // To OBI Error Slave
//   sbr_obi_rsp_t user_error_obi_rsp;    // From OBI Error Slave

//   sbr_obi_req_t user_spi_engine_obi_req; // To OBI SPI Engine
//   sbr_obi_rsp_t user_spi_engine_obi_rsp; // From OBI SPI Engine

//   // Fanout requests from demux to peripherals
//   assign user_error_obi_req      = all_user_sbr_obi_req[user_pkg::UserError]; // Index 0
//   assign user_spi_engine_obi_req = all_user_sbr_obi_req[user_pkg::UserSpi];   // Index 1

//   // Fanin responses from peripherals to demux
//   assign all_user_sbr_obi_rsp[user_pkg::UserError] = user_error_obi_rsp;
//   assign all_user_sbr_obi_rsp[user_pkg::UserSpi]   = user_spi_engine_obi_rsp;

//   // Address Decoder for user peripherals
//   // user_idx will be 0 for UserError, 1 for UserSpi
//   logic [cf_math_pkg::idx_width(NumDemuxSbr)-1:0] user_idx;

//   addr_decode #(
//     .NoIndices ( user_pkg::NumDemuxSbr      ), // Should be 2
//     .NoRules   ( user_pkg::NumDemuxSbrRules ), // Should be 1
//     .addr_t    ( logic[SbrObiCfg.AddrWidth-1:0] ),
//     .rule_t    ( addr_map_rule_t  ),
//     .Napot     ( 1'b0             )
//   ) i_addr_decode_user_periphs (
//     .addr_i           ( user_sbr_obi_req_i.a.addr ),
//     .addr_map_i       ( user_pkg::user_addr_map   ), // From simplified user_pkg
//     .idx_o            ( user_idx                  ),
//     .dec_valid_o      ( /* Unused */              ),
//     .dec_error_o      ( /* Unused */              ),
//     .en_default_idx_i ( 1'b1                      ),
//     .default_idx_i    ( user_pkg::UserError       )  // Default to UserError index (0)
//   );

//   // OBI Demultiplexer for user peripherals
//   // This MUST instantiate the STANDARD obi_demux from common_cells or equivalent.
//   obi_demux #(
//     .ObiCfg      ( SbrObiCfg                 ),
//     .obi_req_t   ( sbr_obi_req_t             ),
//     .obi_rsp_t   ( sbr_obi_rsp_t             ),
//     .NumMgrPorts ( user_pkg::NumDemuxSbr     ), // Should be 2
//     .NumMaxTrans ( 5                       )  // Max outstanding transactions; 2 is reasonable for 1 active periph + error
//                                                 // The "fresh" example used 2 for just the error slave.
//   ) i_obi_demux_user (
//     .clk_i,
//     .rst_ni,
//     .sbr_port_select_i ( user_idx               ),
//     .sbr_port_req_i    ( user_sbr_obi_req_i     ),
//     .sbr_port_rsp_o    ( user_sbr_obi_rsp_o     ),
//     .mgr_ports_req_o   ( all_user_sbr_obi_req   ),
//     .mgr_ports_rsp_i   ( all_user_sbr_obi_rsp   )
//   );

//   // --- Instantiate User Peripherals ---

//   // 1. OBI Error Slave
//   obi_err_sbr #(
//     .ObiCfg    ( SbrObiCfg    ),
//     .obi_req_t ( sbr_obi_req_t ),
//     .obi_rsp_t ( sbr_obi_rsp_t )
//     // .NumMaxTrans(1) // Parameter might not exist in standard obi_err_sbr
//     // .RspData ( 32'hBADCAB1E )
//   ) i_user_err (
//     .clk_i      ( clk_i ),
//     .rst_ni     ( rst_ni ),
//     .testmode_i ( testmode_i ),
//     .obi_req_i  ( user_error_obi_req ),
//     .obi_rsp_o  ( user_error_obi_rsp )
//   );

//   // 2. OBI SPI Engine
//   obi_spi_peripheral i_spi_peripheral (
//     .clk_i    ( clk_i ),
//     .rst_ni   ( rst_ni ),
//     // Connect individual OBI signals from the sbr_obi_req_t struct
//     .req_i    ( user_spi_engine_obi_req.req    ),
//     .we_i     ( user_spi_engine_obi_req.a.we   ),
//     .be_i     ( user_spi_engine_obi_req.a.be   ),
//     .addr_i   ( user_spi_engine_obi_req.a.addr ),
//     .wdata_i  ( user_spi_engine_obi_req.a.wdata),
//     // Connect individual OBI signals to the sbr_obi_rsp_t struct
//     .gnt_o    ( user_spi_engine_obi_rsp.gnt    ),
//     .rvalid_o ( user_spi_engine_obi_rsp.rvalid ),
//     .rdata_o  ( user_spi_engine_obi_rsp.r.rdata),
//     // SPI Master Interface
//     .sck_o    ( spi_sck_o  ),
//     .mosi_o   ( spi_mosi_o ),
//     .cs_no    ( /* Tied off at module output */ ) // cs_no from this peripheral is not used directly
//   );
//   // Ensure RID and ERR are propagated for SPI Engine if not handled internally by it.
//   // Your obi_spi_peripheral.sv does not seem to output r.rid or r.err.
//   // The OBI spec implies slaves should echo aid as rid.
//   assign user_spi_engine_obi_rsp.r.rid = user_spi_engine_obi_req.a.aid;
//   // If obi_spi_peripheral can generate errors (e.g., access to invalid internal offset),
//   // it should drive user_spi_engine_obi_rsp.r.err. Otherwise, tie it to 0.
//   assign user_spi_engine_obi_rsp.r.err = 1'b0; // Assuming no specific error conditions from SPI engine OBI interface itself


//   // --- Debug Displays (Optional) ---
//   always @(posedge clk_i) begin
//     if (user_sbr_obi_req_i.req) begin
//         $display("%t [UD_IN] Req for Addr=0x%h (WE=%b) -> Decoded Idx=%d",
//                  $time, user_sbr_obi_req_i.a.addr, user_sbr_obi_req_i.a.we, user_idx);
//     end
//     if (all_user_sbr_obi_req[user_pkg::UserSpi].req) begin
//         $display("%t [UD_TO_SPI_ENG] Req to SPI Eng (idx %d): Addr=0x%h, WE=%b",
//                  $time, user_pkg::UserSpi, all_user_sbr_obi_req[user_pkg::UserSpi].a.addr, all_user_sbr_obi_req[user_pkg::UserSpi].a.we);
//     end
//     if (all_user_sbr_obi_rsp[user_pkg::UserSpi].gnt) begin
//         $display("%t [UD_FROM_SPI_ENG] GNT from SPI Eng (idx %d) to Demux", $time, user_pkg::UserSpi);
//     end
//     if (all_user_sbr_obi_rsp[user_pkg::UserSpi].rvalid) begin
//         $display("%t [UD_FROM_SPI_ENG] RVALID from SPI Eng (idx %d) to Demux. RDATA=0x%h",
//                  $time, user_pkg::UserSpi, all_user_sbr_obi_rsp[user_pkg::UserSpi].r.rdata);
//     end
//   end

// endmodule
















































// `timescale 1ns/1ps

// import croc_pkg::*;
// import user_pkg::*;

// module user_domain #(
//   parameter int unsigned GpioCount = 16
// ) (
//   input  logic                     clk_i,
//   input  logic                     ref_clk_i,
//   input  logic                     rst_ni,
//   input  logic                     testmode_i,

//   // CPU → user_domain OBI port
//   input  sbr_obi_req_t             user_sbr_obi_req_i,
//   output sbr_obi_rsp_t             user_sbr_obi_rsp_o,

//   // (unused) user_domain → manager OBI port
//   output mgr_obi_req_t             user_mgr_obi_req_o,
//   input  mgr_obi_rsp_t             user_mgr_obi_rsp_i,

//   // GPIOs & interrupts (not used here)
//   input  logic [GpioCount-1:0]     gpio_in_sync_i,
//   output logic [NumExternalIrqs-1:0] interrupts_o,

//   // SPI signals
//   output logic                     spi_sck_o,
//   output logic                     spi_mosi_o,
//   output logic                     spi_cs1_no,
//   output logic                     spi_cs2_no,
//   output logic                     spi_dc_o
// );

//   // 1) Tie off the manager‐side bus & interrupts
//   assign user_mgr_obi_req_o = '0;
//   assign interrupts_o      = '0;

//   // 2) Bypass the demux:
//   //    Every OBI req from the CPU goes straight to the SPI engine.
//   //    Its response comes straight back out as the user_domain response.
//   sbr_obi_req_t  user_spi_engine_obi_req;
//   sbr_obi_rsp_t  user_spi_engine_obi_rsp;

//   // continuous assignments
//   assign user_spi_engine_obi_req = user_sbr_obi_req_i;
//   assign user_sbr_obi_rsp_o      = user_spi_engine_obi_rsp;

//   // 3) Instantiate *only* the SPI master peripheral
//   obi_spi_peripheral i_spi_peripheral (
//     .clk_i    (clk_i),                           
//     .rst_ni   (rst_ni),

//     // OBI slave interface
//     .req_i    (user_spi_engine_obi_req.req),
//     .we_i     (user_spi_engine_obi_req.a.we),
//     .be_i     (user_spi_engine_obi_req.a.be),
//     .addr_i   (user_spi_engine_obi_req.a.addr),
//     .wdata_i  (user_spi_engine_obi_req.a.wdata),
//     .gnt_o    (user_spi_engine_obi_rsp.gnt),
//     .rvalid_o (user_spi_engine_obi_rsp.rvalid),
//     .rdata_o  (user_spi_engine_obi_rsp.r.rdata),

//     // SPI master pins
//     .sck_o    (spi_sck_o),
//     .mosi_o   (spi_mosi_o),
//     .cs_no    ()  // not driven here
//   );

//   // 4) Stub out CS/DC (we’re *not* using user_spi_ctrl in this bypass)
//   assign spi_cs1_no = 1'b1;
//   assign spi_cs2_no = 1'b1;
//   assign spi_dc_o   = 1'b0;

// endmodule

// `timescale 1ns/1ps

// import user_pkg::*; // Use the simplified user_pkg.sv
// import croc_pkg::*;

// module user_domain #(
//   parameter int unsigned GpioCount = 16
// ) (
//   input  logic clk_i,
//   input  logic ref_clk_i,
//   input  logic rst_ni,
//   input  logic testmode_i,

//   input  sbr_obi_req_t user_sbr_obi_req_i,
//   output sbr_obi_rsp_t user_sbr_obi_rsp_o,

//   output mgr_obi_req_t user_mgr_obi_req_o,
//   input  mgr_obi_rsp_t user_mgr_obi_rsp_i,

//   input  logic [GpioCount-1:0]       gpio_in_sync_i,
//   output logic [NumExternalIrqs-1:0] interrupts_o,

//   output logic        spi_sck_o,
//   output logic        spi_mosi_o,
//   output logic        spi_cs1_no,
//   output logic        spi_cs2_no,
//   output logic        spi_dc_o
// );

//   assign user_mgr_obi_req_o = '0;
//   assign interrupts_o = '0;

//   // NumDemuxSbr will be 3 (Error, Spi, SpiCtrl) from simplified user_pkg.sv
//   sbr_obi_req_t [NumDemuxSbr-1:0] all_user_sbr_obi_req;
//   sbr_obi_rsp_t [NumDemuxSbr-1:0] all_user_sbr_obi_rsp;

//   sbr_obi_req_t user_error_obi_req;
//   sbr_obi_rsp_t user_error_obi_rsp;
//   sbr_obi_req_t user_spi_engine_obi_req;
//   sbr_obi_rsp_t user_spi_engine_obi_rsp;
//   sbr_obi_req_t user_spi_ctrl_obi_req;
//   sbr_obi_rsp_t user_spi_ctrl_obi_rsp;

//   // Fanout to peripherals
//   assign user_error_obi_req      = all_user_sbr_obi_req[UserError];
//   assign user_spi_engine_obi_req = all_user_sbr_obi_req[UserSpi];
//   assign user_spi_ctrl_obi_req   = all_user_sbr_obi_req[UserSpiCtrl];

//   // Fanin from peripherals
//   assign all_user_sbr_obi_rsp[UserError]   = user_error_obi_rsp;
//   assign all_user_sbr_obi_rsp[UserSpi]     = user_spi_engine_obi_rsp;
//   assign all_user_sbr_obi_rsp[UserSpiCtrl] = user_spi_ctrl_obi_rsp;

//   logic [cf_math_pkg::idx_width(NumDemuxSbr)-1:0] user_idx;

//   addr_decode #(
//     .NoIndices ( NumDemuxSbr      ),
//     .NoRules   ( NumDemuxSbrRules ),
//     .addr_t    ( logic[SbrObiCfg.AddrWidth-1:0] ),
//     .rule_t    ( addr_map_rule_t  ),
//     .Napot     ( 1'b0             )
//   ) i_addr_decode_user_periphs (
//     .addr_i           ( user_sbr_obi_req_i.a.addr ),
//     .addr_map_i       ( user_addr_map             ),
//     .idx_o            ( user_idx                  ),
//     .dec_valid_o      ( /* Unused */              ),
//     .dec_error_o      ( /* Unused */              ),
//     .en_default_idx_i ( 1'b1                      ),
//     .default_idx_i    ( UserError                 )
//   );

//   // Use "Attempt 13" obi_demux logic
//   obi_demux #(
//     .ObiCfg      ( SbrObiCfg     ),
//     .obi_req_t   ( sbr_obi_req_t ),
//     .obi_rsp_t   ( sbr_obi_rsp_t ),
//     .NumMgrPorts ( NumDemuxSbr   ), // Will be 3 from simplified user_pkg
//     .NumMaxTrans ( 5             )  // Can be reduced, e.g., 3 or 4
//   ) i_obi_demux_user (
//     .clk_i, .rst_ni,
//     .sbr_port_select_i ( user_idx               ),
//     .sbr_port_req_i    ( user_sbr_obi_req_i     ),
//     .sbr_port_rsp_o    ( user_sbr_obi_rsp_o     ),
//     .mgr_ports_req_o   ( all_user_sbr_obi_req   ),
//     .mgr_ports_rsp_i   ( all_user_sbr_obi_rsp   )
//   );

//   // Instantiate User Peripherals (SPI only for this test)
//   obi_err_sbr #(
//     .ObiCfg    ( SbrObiCfg    ),
//     .obi_req_t ( sbr_obi_req_t ),
//     .obi_rsp_t ( sbr_obi_rsp_t )
//   ) i_user_err ( // Keep error slave
//     .clk_i      ( clk_i ), .rst_ni     ( rst_ni ), .testmode_i ( testmode_i ),
//     .obi_req_i  ( user_error_obi_req ), .obi_rsp_o  ( user_error_obi_rsp )
//   );

//   obi_spi_peripheral i_spi_peripheral ( // Use Canvas "Simplified Delayed rvalid Trigger"
//     .clk_i    ( clk_i ), .rst_ni   ( rst_ni ),
//     .req_i    ( user_spi_engine_obi_req.req    ),
//     .we_i     ( user_spi_engine_obi_req.a.we   ),
//     .be_i     ( user_spi_engine_obi_req.a.be   ),
//     .addr_i   ( user_spi_engine_obi_req.a.addr ),
//     .wdata_i  ( user_spi_engine_obi_req.a.wdata),
//     .gnt_o    ( user_spi_engine_obi_rsp.gnt    ),
//     .rvalid_o ( user_spi_engine_obi_rsp.rvalid ),
//     .rdata_o  ( user_spi_engine_obi_rsp.r.rdata),
//     .sck_o    ( spi_sck_o  ), .mosi_o   ( spi_mosi_o ),
//     .cs_no    ( /* Unused, controlled by user_spi_ctrl */ )
//   );
//   // Ensure RID is propagated if obi_spi_peripheral doesn't handle it
//   assign user_spi_engine_obi_rsp.r.rid = user_spi_engine_obi_req.a.aid;


//   user_spi_ctrl i_user_spi_ctrl (
//     .clk_i      ( clk_i ), .rst_ni     ( rst_ni ),
//     .obi_req_i  ( user_spi_ctrl_obi_req ),
//     .obi_rsp_o  ( user_spi_ctrl_obi_rsp ),
//     .spi_cs1_no ( spi_cs1_no ), .spi_cs2_no ( spi_cs2_no ), .spi_dc_o   ( spi_dc_o   )
//   );

//   // Font ROM and PRNG are not instantiated in this simplified version

//   // Debug Displays
//   always @(posedge clk_i) begin
//     if (user_sbr_obi_req_i.req) begin
//         $display("%t [UD_IN_SPI_ONLY] Req for Addr=0x%h (WE=%b) -> Decoded Idx=%d",
//                  $time, user_sbr_obi_req_i.a.addr, user_sbr_obi_req_i.a.we, user_idx);
//     end
//     // Add more specific displays if needed
//   end

// endmodule



// ///* passes userdomain tb with modified obi demux 
// `timescale 1ns/1ps

// import user_pkg::*;
// import croc_pkg::*;
// // Assuming xorshift (OBI-enabled) is in a separate file and compiled
// // Assuming user_font_rom is in a separate file and compiled
// // Assuming user_spi_ctrl is in a separate file and compiled
// // Assuming obi_spi_peripheral is in a separate file and compiled
// // Assuming obi_demux (corrected version) and addr_decode are available

// module user_domain #(
//   parameter int unsigned GpioCount = 16 // Default, matches croc_domain if not overridden
// ) (
//   input  logic clk_i,
//   input  logic ref_clk_i, // Unused in this user_domain, but part of standard interface
//   input  logic rst_ni,
//   input  logic testmode_i,  // Unused in this user_domain, but part of standard interface

//   // OBI interface from Croc Core (Croc Core is manager, user_domain is subordinate)
//   input  sbr_obi_req_t user_sbr_obi_req_i,
//   output sbr_obi_rsp_t user_sbr_obi_rsp_o,

//   // OBI interface to Croc System Bus (user_domain is manager, system bus is subordinate)
//   // This user_domain example does not act as an OBI manager.
//   output mgr_obi_req_t user_mgr_obi_req_o,
//   input  mgr_obi_rsp_t user_mgr_obi_rsp_i,

//   // GPIOs and Interrupts (Example: not fully utilized in this specific peripheral set)
//   input  logic [GpioCount-1:0]       gpio_in_sync_i, // Example GPIO inputs
//   output logic [NumExternalIrqs-1:0] interrupts_o,   // Example interrupt outputs

//   // Hardware-controlled outputs from peripherals within user_domain
//   output logic        spi_sck_o,
//   output logic        spi_mosi_o,
//   output logic        spi_cs1_no, // From user_spi_ctrl
//   output logic        spi_cs2_no, // From user_spi_ctrl
//   output logic        spi_dc_o    // From user_spi_ctrl
// );

//   // This user_domain does not act as an OBI manager, so tie off manager outputs
//   assign user_mgr_obi_req_o = '0;
//   // Similarly, interrupts are not generated by these specific peripherals
//   assign interrupts_o = '0;

//   // OBI subordinate requests and responses for peripherals within user_domain
//   // NumDemuxSbr is defined in user_pkg.sv (e.g., 5 for Error, SpiEng, SpiCtrl, FontRom, Prng)
//   sbr_obi_req_t [NumDemuxSbr-1:0] all_user_sbr_obi_req;
//   sbr_obi_rsp_t [NumDemuxSbr-1:0] all_user_sbr_obi_rsp;

//   // Individual peripheral OBI interfaces
//   sbr_obi_req_t user_error_obi_req;    // To OBI Error Slave
//   sbr_obi_rsp_t user_error_obi_rsp;    // From OBI Error Slave

//   sbr_obi_req_t user_spi_engine_obi_req; // To OBI SPI Engine
//   sbr_obi_rsp_t user_spi_engine_obi_rsp; // From OBI SPI Engine

//   sbr_obi_req_t user_spi_ctrl_obi_req;   // To User SPI Control Logic
//   sbr_obi_rsp_t user_spi_ctrl_obi_rsp;   // From User SPI Control Logic

//   sbr_obi_req_t user_font_rom_obi_req;   // To User Font ROM
//   sbr_obi_rsp_t user_font_rom_obi_rsp;   // From User Font ROM

//   sbr_obi_req_t user_prng_obi_req;       // To User PRNG
//   sbr_obi_rsp_t user_prng_obi_rsp;       // From User PRNG

//   // Fanout requests from demux to peripherals
//   assign user_error_obi_req      = all_user_sbr_obi_req[UserError];
//   assign user_spi_engine_obi_req = all_user_sbr_obi_req[UserSpi];
//   assign user_spi_ctrl_obi_req   = all_user_sbr_obi_req[UserSpiCtrl];
//   assign user_font_rom_obi_req   = all_user_sbr_obi_req[UserFontRom];
//   assign user_prng_obi_req       = all_user_sbr_obi_req[UserPrng];
//   // Add other peripherals here if UserPrng is not the last one.

//   // Fanin responses from peripherals to demux
//   assign all_user_sbr_obi_rsp[UserError]   = user_error_obi_rsp;
//   assign all_user_sbr_obi_rsp[UserSpi]     = user_spi_engine_obi_rsp;
//   assign all_user_sbr_obi_rsp[UserSpiCtrl] = user_spi_ctrl_obi_rsp;
//   assign all_user_sbr_obi_rsp[UserFontRom] = user_font_rom_obi_rsp;
//   assign all_user_sbr_obi_rsp[UserPrng]    = user_prng_obi_rsp;

//   // Default response for any demux ports beyond what's actively used
//   // This handles cases where NumDemuxSbr might be larger than the number of instantiated peripherals
//   // (e.g., if UserPrng is the last one, this loop might not be needed or should start from UserPrng+1)
//   // Assuming UserPrng is the last active index (e.g. 4 if UserError=0, UserSpi=1, UserSpiCtrl=2, UserFontRom=3, UserPrng=4)
//   generate
//     if (NumDemuxSbr > UserPrng + 1) begin : gen_default_rsp_extra
//       for (genvar i = UserPrng + 1; i < NumDemuxSbr; i++) begin : default_rsp_loop_extra
//         assign all_user_sbr_obi_rsp[i] = '{
//           gnt:    1'b0,
//           rvalid: 1'b0,
//           r:      '{default: '0},
//           default:'0
//         };
//       end
//     end
//   endgenerate

//   // Address Decoder for user peripherals
//   logic [cf_math_pkg::idx_width(NumDemuxSbr)-1:0] user_idx; // Index for selecting the target peripheral

//   addr_decode #(
//     .NoIndices ( NumDemuxSbr      ), // Total number of demux outputs (from user_pkg)
//     .NoRules   ( NumDemuxSbrRules ), // Number of active mapping rules (from user_pkg)
//     .addr_t    ( logic[SbrObiCfg.AddrWidth-1:0] ), // OBI address width
//     .rule_t    ( addr_map_rule_t  ), // Address map rule type (from croc_pkg)
//     .Napot     ( 1'b0             )  // Use start/end addresses, not NAPOT
//   ) i_addr_decode_user_periphs (
//     .addr_i           ( user_sbr_obi_req_i.a.addr ),
//     .addr_map_i       ( user_addr_map             ), // From user_pkg
//     .idx_o            ( user_idx                  ),
//     .dec_valid_o      (               ),
//     .dec_error_o      (               ),
//     .en_default_idx_i ( 1'b1                      ), // Enable default mapping
//     .default_idx_i    ( UserError                 )  // Default to UserError index
//   );

//   // OBI Demultiplexer for user peripherals
//   obi_demux #(
//     .ObiCfg      ( SbrObiCfg     ), // OBI configuration (from croc_pkg)
//     .obi_req_t   ( sbr_obi_req_t ), // OBI request type (from croc_pkg)
//     .obi_rsp_t   ( sbr_obi_rsp_t ), // OBI response type (from croc_pkg)
//     .NumMgrPorts ( NumDemuxSbr   ), // Number of manager ports (from user_pkg)
//     .NumMaxTrans ( 5             )  // Max outstanding transactions (adjust as needed, 5 for 4 periphs + error)
//   ) i_obi_demux_user (
//     .clk_i,
//     .rst_ni,
//     .sbr_port_select_i ( user_idx               ), // Select signal from address decoder
//     .sbr_port_req_i    ( user_sbr_obi_req_i     ), // Incoming request from Croc Core
//     .sbr_port_rsp_o    ( user_sbr_obi_rsp_o     ), // Outgoing response to Croc Core
//     .mgr_ports_req_o   ( all_user_sbr_obi_req   ), // Requests fanned out to peripherals
//     .mgr_ports_rsp_i   ( all_user_sbr_obi_rsp   )  // Responses fanned in from peripherals
//   );

//   // --- Instantiate User Peripherals ---

//   // 1. OBI Error Slave (for unmapped accesses within user_domain)
//   obi_err_sbr #(
//     .ObiCfg    ( SbrObiCfg    ),
//     .obi_req_t ( sbr_obi_req_t ),
//     .obi_rsp_t ( sbr_obi_rsp_t )
//     // .RspData ( 32'hBAD0DEAD ) // Optional: custom error response data
//   ) i_user_err (
//     .clk_i      ( clk_i ),
//     .rst_ni     ( rst_ni ),
//     .testmode_i ( testmode_i ), // Pass down testmode
//     .obi_req_i  ( user_error_obi_req ),
//     .obi_rsp_o  ( user_error_obi_rsp )
//   );

//   // 2. OBI SPI Engine
//   obi_spi_peripheral i_spi_peripheral (
//     .clk_i    ( clk_i ),
//     .rst_ni   ( rst_ni ),
//     .req_i    ( user_spi_engine_obi_req.req    ), // Connect individual OBI signals
//     .we_i     ( user_spi_engine_obi_req.a.we   ),
//     .be_i     ( user_spi_engine_obi_req.a.be   ),
//     .addr_i   ( user_spi_engine_obi_req.a.addr ),
//     .wdata_i  ( user_spi_engine_obi_req.a.wdata),
//     .gnt_o    ( user_spi_engine_obi_rsp.gnt    ),
//     .rvalid_o ( user_spi_engine_obi_rsp.rvalid ),
//     .rdata_o  ( user_spi_engine_obi_rsp.r.rdata),
//     // SPI Master Interface
//     .sck_o    ( spi_sck_o  ),
//     .mosi_o   ( spi_mosi_o ),
//     .cs_no    (  )
//   );
//   // Ensure RID is propagated for SPI Engine if not handled internally by it.
//   // If obi_spi_peripheral doesn't set rid, it should be assigned here:
//   // assign user_spi_engine_obi_rsp.r.rid = user_spi_engine_obi_req.a.aid; (If needed)
//   // assign user_spi_engine_obi_rsp.r.err = ... (If obi_spi_peripheral doesn't drive it)


//   // 3. User SPI Control Logic (for CS and D/C lines)
//   user_spi_ctrl i_user_spi_ctrl (
//     .clk_i      ( clk_i ),
//     .rst_ni     ( rst_ni ),
//     .obi_req_i  ( user_spi_ctrl_obi_req ), // Pass the full OBI struct
//     .obi_rsp_o  ( user_spi_ctrl_obi_rsp ),
//     // Hardware Control Outputs
//     .spi_cs1_no ( spi_cs1_no ),
//     .spi_cs2_no ( spi_cs2_no ),
//     .spi_dc_o   ( spi_dc_o   )
//   );

//   // 4. User Font ROM
//   user_font_rom #(
//     // .INIT_FILE("your_path/font_rom_12x6.hex") // Ensure path is correct if overriding
//   ) i_user_font_rom (
//     .clk_i     ( clk_i ),
//     .rst_ni    ( rst_ni ),
//     .obi_req_i ( user_font_rom_obi_req ), // Pass the full OBI struct
//     .obi_rsp_o ( user_font_rom_obi_rsp )
//   );

//   // 5. User PRNG (Xorshift with OBI wrapper)
//   // Assuming the OBI-enabled PRNG module is named 'xorshift'
//   xorshift #(
//     // .PRNG_SEED(32'hYOUR_SEED) // Optional: override default seed
//   ) i_user_prng (
//     .clk_i          ( clk_i ),
//     .rst_ni         ( rst_ni ),
//     .obi_req_i      ( user_prng_obi_req ),   // Pass the full OBI struct
//     .obi_rsp_o      ( user_prng_obi_rsp ),
//     .current_prn_o  (  )
//   );


//   // --- Debug Displays for user_domain activity (Optional) ---
//   always @(posedge clk_i) begin
//     if (user_sbr_obi_req_i.req) begin
//         $display("%t [UD_IN] Req for Addr=0x%h (WE=%b, BE=0x%b, WDATA=0x%h) -> Decoded Idx=%d",
//                  $time, user_sbr_obi_req_i.a.addr, user_sbr_obi_req_i.a.we,
//                  user_sbr_obi_req_i.a.be, user_sbr_obi_req_i.a.wdata, user_idx);
//     end

//     // Example: Display when a request is forwarded to a specific peripheral
//     if (all_user_sbr_obi_req[UserSpi].req) begin
//         $display("%t [UD_TO_SPI_ENG] Req to SPI Eng (idx %d): Addr=0x%h, WE=%b",
//                  $time, UserSpi, all_user_sbr_obi_req[UserSpi].a.addr, all_user_sbr_obi_req[UserSpi].a.we);
//     end
//     // Add similar displays for UserSpiCtrl, UserFontRom, UserPrng if needed

//     // Example: Display when a response comes back from a peripheral to the demux
//     if (all_user_sbr_obi_rsp[UserSpi].gnt) begin
//         $display("%t [UD_FROM_SPI_ENG] GNT from SPI Eng (idx %d) to Demux", $time, UserSpi);
//     end
//     if (all_user_sbr_obi_rsp[UserSpi].rvalid) begin
//         $display("%t [UD_FROM_SPI_ENG] RVALID from SPI Eng (idx %d) to Demux. RDATA=0x%h",
//                  $time, UserSpi, all_user_sbr_obi_rsp[UserSpi].r.rdata);
//     end
//     // Add similar displays for UserSpiCtrl, UserFontRom, UserPrng if needed

// /*
//     // Display overall response from user_domain to Croc Core
//     if (user_sbr_obi_rsp_o.gnt && !user_sbr_obi_req_i.a.we) begin // Grant for a read
//         $display("%t [UD_OUT] GNT_OUT=%b for Read to Idx=%d (Addr=0x%h)",
//                  $time, user_sbr_obi_rsp_o.gnt, user_idx, user_sbr_obi_req_i.a.addr);
//     end else if (user_sbr_obi_rsp_o.gnt && user_sbr_obi_req_i.a.we) begin // Grant for a write
//          $display("%t [UD_OUT] GNT_OUT=%b for Write to Idx=%d (Addr=0x%h)",
//                  $time, user_sbr_obi_rsp_o.gnt, user_idx, user_sbr_obi_req_i.a.addr);
//     end

//     if (user_sbr_obi_rsp_o.rvalid) begin
//         $display("%t [UD_OUT] RVALID_OUT=%b, RDATA_OUT=0x%08x for Read to Idx=%d (Addr=0x%h)",
//                  $time, user_sbr_obi_rsp_o.rvalid, user_sbr_obi_rsp_o.r.rdata, user_idx, user_sbr_obi_req_i.a.addr);
//     end */
//   end

// endmodule
// //*/


/*/ -------------------------------------ONLY SPI version, no other modules, working 
module user_domain import user_pkg::*; import croc_pkg::*; #(
  parameter int unsigned GpioCount = 16
) (
  input  logic      clk_i,
  input  logic      ref_clk_i,
  input  logic      rst_ni,
  input  logic      testmode_i,

  input  sbr_obi_req_t user_sbr_obi_req_i,
  output sbr_obi_rsp_t user_sbr_obi_rsp_o,

  output mgr_obi_req_t user_mgr_obi_req_o,
  input  mgr_obi_rsp_t user_mgr_obi_rsp_i,

  input  logic [      GpioCount-1:0] gpio_in_sync_i,
  output logic [NumExternalIrqs-1:0] interrupts_o,

  // Hardware-controlled outputs
  output logic        spi_sck_o,
  output logic        spi_mosi_o,
  output logic        spi_cs1_no,
  output logic        spi_cs2_no,
  output logic        spi_dc_o
);

  assign interrupts_o = '0;
  assign user_mgr_obi_req_o = '0;

  // user_pkg.sv should define NumDemuxSbr = 4 (Error, UserSpi, UserSpiCtrl, UserFontRom)
  sbr_obi_req_t [NumDemuxSbr-1:0] all_user_sbr_obi_req;
  sbr_obi_rsp_t [NumDemuxSbr-1:0] all_user_sbr_obi_rsp;

  sbr_obi_req_t user_error_obi_req;
  sbr_obi_rsp_t user_error_obi_rsp;
  sbr_obi_req_t user_spi_obi_req;
  sbr_obi_rsp_t user_spi_obi_rsp;
  sbr_obi_req_t user_spi_ctrl_obi_req; // To simplified SPI Control Logic
  sbr_obi_rsp_t user_spi_ctrl_obi_rsp; // From simplified SPI Control Logic
  sbr_obi_req_t user_font_rom_obi_req;
  sbr_obi_rsp_t user_font_rom_obi_rsp;

  // Fanout
  assign user_error_obi_req    = all_user_sbr_obi_req[UserError];
  assign user_spi_obi_req      = all_user_sbr_obi_req[UserSpi];
  assign user_spi_ctrl_obi_req = all_user_sbr_obi_req[UserSpiCtrl];
  assign user_font_rom_obi_req = all_user_sbr_obi_req[UserFontRom];

  assign all_user_sbr_obi_rsp[UserError]     = user_error_obi_rsp;
  assign all_user_sbr_obi_rsp[UserSpi]       = user_spi_obi_rsp;
  assign all_user_sbr_obi_rsp[UserSpiCtrl]   = user_spi_ctrl_obi_rsp;
  assign all_user_sbr_obi_rsp[UserFontRom]   = user_font_rom_obi_rsp;

  // Default response for any demux ports beyond what's used if NumDemuxSbr is larger
  generate if (NumDemuxSbr > 4) begin : gen_default_rsp_extra
      for (genvar i = 4; i < NumDemuxSbr; i++) begin : default_rsp_loop_extra
        assign all_user_sbr_obi_rsp[i] = '{ gnt: 1'b0, rvalid: 1'b0, r: '{default:'0}, default: '0 };
      end
  end endgenerate

  logic [cf_math_pkg::idx_width(NumDemuxSbr)-1:0] user_idx;

  addr_decode #(
    .NoIndices ( NumDemuxSbr      ), .NoRules   ( NumDemuxSbrRules ), // From user_pkg
    .addr_t    ( logic[SbrObiCfg.DataWidth-1:0] ), .rule_t    ( addr_map_rule_t  ),
    .Napot     ( 1'b0             )
  ) i_addr_decode_periphs (
    .addr_i(user_sbr_obi_req_i.a.addr), .addr_map_i(user_addr_map), .idx_o(user_idx),
    .dec_valid_o(), .dec_error_o(),
    .en_default_idx_i(1'b1), .default_idx_i(UserError)
  );

  // *** Instantiate your local obi_demux.sv (which should contain debug logic) ***
  obi_demux #( // Assuming your local debug version is named obi_demux
    .ObiCfg      ( SbrObiCfg     ), .obi_req_t   ( sbr_obi_req_t ),
    .obi_rsp_t   ( sbr_obi_rsp_t ), .NumMgrPorts ( NumDemuxSbr   ), // Should be 4
    .NumMaxTrans ( 8             )  // Increased for safety with debug demux
  ) i_obi_demux (
    .clk_i, .rst_ni,
    .sbr_port_select_i ( user_idx             ),
    .sbr_port_req_i    ( user_sbr_obi_req_i   ),
    .sbr_port_rsp_o    ( user_sbr_obi_rsp_o   ),
    .mgr_ports_req_o   ( all_user_sbr_obi_req ),
    .mgr_ports_rsp_i   ( all_user_sbr_obi_rsp )
  );

  // // User Subordinates
  // obi_err_sbr #( ) i_user_err (
  //   .clk_i(clk_i), .rst_ni(rst_ni), .testmode_i(testmode_i),
  //   .obi_req_i  ( user_error_obi_req ),
  //   .obi_rsp_o  ( user_error_obi_rsp )
  // );
    //
  obi_spi_peripheral i_spi_peripheral (
    .clk_i(clk_i), .rst_ni(rst_ni),
    .req_i    ( user_spi_obi_req.req    ), .addr_i   ( user_spi_obi_req.a.addr ),
    .wdata_i  ( user_spi_obi_req.a.wdata), .be_i     ( user_spi_obi_req.a.be   ),
    .we_i     ( user_spi_obi_req.a.we   ),
    .gnt_o    ( user_spi_obi_rsp.gnt    ), .rvalid_o ( user_spi_obi_rsp.rvalid ),
    .rdata_o  ( user_spi_obi_rsp.r.rdata ),
    .sck_o    ( spi_sck_o  ), .mosi_o   ( spi_mosi_o ),
    .cs_no    (  )
  );

  // Instantiating the SIMPLIFIED user_spi_ctrl
  user_spi_ctrl i_user_spi_ctrl (
    .clk_i(clk_i), .rst_ni(rst_ni),
    .obi_req_i ( user_spi_ctrl_obi_req ),
    .obi_rsp_o ( user_spi_ctrl_obi_rsp ),
    .spi_cs1_no( spi_cs1_no ),
    .spi_cs2_no( spi_cs2_no ),
    .spi_dc_o  ( spi_dc_o   )
  );

  user_font_rom i_user_font_rom (
    .clk_i(clk_i), .rst_ni(rst_ni),
    .obi_req_i ( user_font_rom_obi_req ),
    .obi_rsp_o ( user_font_rom_obi_rsp )
  );

  // Debug displays for user_domain itself
  always @(posedge clk_i) begin
    if (user_sbr_obi_req_i.req) begin
        $display("%t [UD_IN] Req for Addr=0x%h (WE=%b) -> Decoded Idx=%d",
                 $time, user_sbr_obi_req_i.a.addr, user_sbr_obi_req_i.a.we, user_idx);
    end
    if (user_idx == UserSpi && all_user_sbr_obi_req[UserSpi].req) begin
        $display("%t [UD_TO_SPI_ENG] Req to SPI Eng (idx %d): Addr=0x%h, WE=%b",
                 $time, UserSpi, all_user_sbr_obi_req[UserSpi].a.addr, all_user_sbr_obi_req[UserSpi].a.we);
    end
    if (user_idx == UserSpiCtrl && all_user_sbr_obi_req[UserSpiCtrl].req) begin
        $display("%t [UD_TO_SPI_CTRL] Req to SPI Ctrl (idx %d): Addr=0x%h, WE=%b",
                 $time, UserSpiCtrl, all_user_sbr_obi_req[UserSpiCtrl].a.addr, all_user_sbr_obi_req[UserSpiCtrl].a.we);
    end
    if (user_idx == UserFontRom && all_user_sbr_obi_req[UserFontRom].req) begin
        $display("%t [UD_TO_FONT_ROM] Req to Font ROM (idx %d): Addr=0x%h, WE=%b",
                 $time, UserFontRom, all_user_sbr_obi_req[UserFontRom].a.addr, all_user_sbr_obi_req[UserFontRom].a.we);
    end

    if (user_spi_obi_rsp.gnt) begin
        $display("%t [UD_FROM_SPI_ENG] GNT from SPI Eng (idx %d) to Demux", $time, UserSpi);
    end
    if (user_spi_obi_rsp.rvalid) begin
        $display("%t [UD_FROM_SPI_ENG] RVALID from SPI Eng (idx %d) to Demux. RDATA=0x%h",
                 $time, UserSpi, user_spi_obi_rsp.r.rdata);
    end
    if (user_spi_ctrl_obi_rsp.gnt) begin
        $display("%t [UD_FROM_SPI_CTRL] GNT from SPI Ctrl (idx %d) to Demux", $time, UserSpiCtrl);
    end
    if (user_spi_ctrl_obi_rsp.rvalid) begin
        $display("%t [UD_FROM_SPI_CTRL] RVALID from SPI Ctrl (idx %d) to Demux. RDATA=0x%h",
                 $time, UserSpiCtrl, user_spi_ctrl_obi_rsp.r.rdata);
    end
     if (user_font_rom_obi_rsp.gnt) begin
        $display("%t [UD_FROM_FONT_ROM] GNT from Font ROM (idx %d) to Demux", $time, UserFontRom);
    end
    if (user_font_rom_obi_rsp.rvalid) begin
        $display("%t [UD_FROM_FONT_ROM] RVALID from Font ROM (idx %d) to Demux. RDATA=0x%h",
                 $time, UserFontRom, user_font_rom_obi_rsp.r.rdata);
    end

    if (user_sbr_obi_rsp_o.gnt && !user_sbr_obi_req_i.a.we) begin
        $display("%t [UD_OUT] GNT_OUT=%b for Read to Idx=%d (Addr=0x%h)",
                 $time, user_sbr_obi_rsp_o.gnt, user_idx, user_sbr_obi_req_i.a.addr);
    end
    if (user_sbr_obi_rsp_o.rvalid) begin
        $display("%t [UD_OUT] RVALID_OUT=%b, RDATA_OUT=0x%08x for Read to Idx=%d (Addr=0x%h)",
                 $time, user_sbr_obi_rsp_o.rvalid, user_sbr_obi_rsp_o.r.rdata, user_idx, user_sbr_obi_req_i.a.addr);
    end
  end

endmodule 
//*/