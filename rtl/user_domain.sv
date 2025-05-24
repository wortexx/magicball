`timescale 1ns/1ps

import croc_pkg::*;
import user_pkg::*; // Using the new user_pkg for refactored peripherals

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

  // SPI signals driven by internal peripherals
  output logic                       spi_sck_o,
  output logic                       spi_mosi_o,
  input  logic                       spi_miso_i,
  output logic                       spi_cs1_no,
  output logic                       spi_cs2_no,
  output logic                       spi_dc_o
);

  assign interrupts_o       = '0;
  assign user_mgr_obi_req_o = '{default: '0};

  sbr_obi_req_t [NumDemuxSbr-1:0] all_user_sbr_obi_req;
  sbr_obi_rsp_t [NumDemuxSbr-1:0] all_user_sbr_obi_rsp;

  sbr_obi_req_t user_error_obi_req;
  sbr_obi_rsp_t user_error_obi_rsp;

  sbr_obi_req_t user_obi_spi_req;
  sbr_obi_rsp_t user_obi_spi_rsp;

  sbr_obi_req_t user_spi_ctrl_req;
  sbr_obi_rsp_t user_spi_ctrl_rsp;

  sbr_obi_req_t user_prng_req;
  sbr_obi_rsp_t user_prng_rsp;

  sbr_obi_req_t user_font_rom_req; 
  sbr_obi_rsp_t user_font_rom_rsp; 


  // Connect demux outputs to peripheral inputs
  assign user_error_obi_req    = all_user_sbr_obi_req[user_pkg::UserError];
  assign user_obi_spi_req      = all_user_sbr_obi_req[user_pkg::UserObiSpi];
  assign user_spi_ctrl_req     = all_user_sbr_obi_req[user_pkg::UserSpiCtrl];
  assign user_prng_req         = all_user_sbr_obi_req[user_pkg::UserPrng];
  assign user_font_rom_req     = all_user_sbr_obi_req[user_pkg::UserFontRom]; 

  // Connect peripheral outputs to demux inputs
  assign all_user_sbr_obi_rsp[user_pkg::UserError]   = user_error_obi_rsp;
  assign all_user_sbr_obi_rsp[user_pkg::UserObiSpi]  = user_obi_spi_rsp;
  assign all_user_sbr_obi_rsp[user_pkg::UserSpiCtrl] = user_spi_ctrl_rsp;
  assign all_user_sbr_obi_rsp[user_pkg::UserPrng]    = user_prng_rsp;
  assign all_user_sbr_obi_rsp[user_pkg::UserFontRom] = user_font_rom_rsp; 

  localparam int USER_IDX_WIDTH = cf_math_pkg::idx_width(NumDemuxSbr);
  logic [USER_IDX_WIDTH-1:0] user_idx;

  addr_decode #(
    .NoIndices ( user_pkg::NumDemuxSbr      ),
    .NoRules   ( user_pkg::NumDemuxSbrRules ),
    .addr_t    ( logic[SbrObiCfg.AddrWidth-1:0] ),
    .rule_t    ( addr_map_rule_t          ),
    .Napot     ( 1'b0                     ),
    .idx_t     ( logic[USER_IDX_WIDTH-1:0]  )
  ) i_addr_decode_users (
    .addr_i           ( user_sbr_obi_req_i.a.addr ),
    .addr_map_i       ( user_pkg::user_addr_map   ),
    .idx_o            ( user_idx                  ),
    .dec_valid_o      ( /* Unused */              ),
    .dec_error_o      ( /* Unused */              ),
    .en_default_idx_i ( 1'b1                      ),
    .default_idx_i    ( USER_IDX_WIDTH'(user_pkg::UserError) )
  );

  obi_demux #(
    .ObiCfg      ( SbrObiCfg                 ),
    .obi_req_t   ( sbr_obi_req_t             ),
    .obi_rsp_t   ( sbr_obi_rsp_t             ),
    .NumMgrPorts ( user_pkg::NumDemuxSbr     ),
    .NumMaxTrans ( 2                         )
  ) i_user_demux (
    .clk_i(clk_i),
    .rst_ni(rst_ni),
    .sbr_port_select_i ( user_idx                   ),
    .sbr_port_req_i    ( user_sbr_obi_req_i         ),
    .sbr_port_rsp_o    ( user_sbr_obi_rsp_o         ),
    .mgr_ports_req_o   ( all_user_sbr_obi_req       ),
    .mgr_ports_rsp_i   ( all_user_sbr_obi_rsp       )
  );

  obi_err_sbr #(
    .ObiCfg      ( SbrObiCfg     ),
    .obi_req_t   ( sbr_obi_req_t ),
    .obi_rsp_t   ( sbr_obi_rsp_t ),
    .NumMaxTrans ( 1             ),
    .RspData     ( 32'hBADC0DE0  )
  ) i_user_err (
    .clk_i(clk_i),
    .rst_ni(rst_ni),
    .testmode_i(testmode_i),
    .obi_req_i  ( user_error_obi_req   ),
    .obi_rsp_o  ( user_error_obi_rsp   )
  );

  obi_spi_peripheral #(
  ) i_obi_spi_peripheral (
    .clk_i    ( clk_i                     ),
    .rst_ni   ( rst_ni                    ),
    .req_i    ( user_obi_spi_req.req      ),
    .we_i     ( user_obi_spi_req.a.we     ),
    .be_i     ( user_obi_spi_req.a.be     ),
    .addr_i   ( user_obi_spi_req.a.addr   ),
    .wdata_i  ( user_obi_spi_req.a.wdata  ),
    .aid_i    ( user_obi_spi_req.a.aid    ),
    .gnt_o    ( user_obi_spi_rsp.gnt      ),
    .rvalid_o ( user_obi_spi_rsp.rvalid   ),
    .rdata_o  ( user_obi_spi_rsp.r.rdata  ),
    .rid_o    ( user_obi_spi_rsp.r.rid    ),
    .err_o    ( user_obi_spi_rsp.r.err    ),
    .sck_o    ( spi_sck_o                 ),
    .mosi_o   ( spi_mosi_o                )
  );
  assign user_obi_spi_rsp.r.r_optional = 1'b0;

  user_spi_ctrl #(
  ) i_user_spi_ctrl (
    .clk_i     ( clk_i                     ),
    .rst_ni    ( rst_ni                    ),
    .obi_req_i ( user_spi_ctrl_req         ),
    .obi_rsp_o ( user_spi_ctrl_rsp         ),
    .spi_cs1_no( spi_cs1_no                ),
    .spi_cs2_no( spi_cs2_no                ),
    .spi_dc_o  ( spi_dc_o                  )
  );

  logic [SbrObiCfg.DataWidth-1:0] dummy_prn_val;

  xorshift #(
  ) i_xorshift (
    .clk_i    ( clk_i                     ),
    .rst_ni   ( rst_ni                    ),
    .req_i    ( user_prng_req.req         ),
    .we_i     ( user_prng_req.a.we        ),
    .be_i     ( user_prng_req.a.be        ),
    .addr_i   ( user_prng_req.a.addr      ),
    .wdata_i  ( user_prng_req.a.wdata     ),
    .aid_i    ( user_prng_req.a.aid       ),
    .gnt_o    ( user_prng_rsp.gnt         ),
    .rvalid_o ( user_prng_rsp.rvalid      ),
    .rdata_o  ( user_prng_rsp.r.rdata     ),
    .rid_o    ( user_prng_rsp.r.rid       ),
    .err_o    ( user_prng_rsp.r.err       ),
    .current_prn_o ( dummy_prn_val        )
  );
  assign user_prng_rsp.r.r_optional = 1'b0;

  user_font_rom #(

  ) i_user_font_rom (
    .clk_i      (clk_i),
    .rst_ni     (rst_ni),
    .obi_req_i  (user_font_rom_req),
    .obi_rsp_o  (user_font_rom_rsp)
  );
  // user_font_rom.sv now drives its own .r.r_optional

endmodule