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
  output logic        spi_cs1_no, // CS for SSD1331
  output logic        spi_cs2_no, // CS for ADXL345
  output logic        spi_dc_o    // DC for SSD1331
);

  assign interrupts_o = '0;
  assign user_mgr_obi_req_o = '0; // No user manager

  // User Subordinate Buses (NumDemuxSbr = 4 from user_pkg)
  sbr_obi_req_t [NumDemuxSbr-1:0] all_user_sbr_obi_req;
  sbr_obi_rsp_t [NumDemuxSbr-1:0] all_user_sbr_obi_rsp;

  sbr_obi_req_t user_error_obi_req;
  sbr_obi_rsp_t user_error_obi_rsp;
  sbr_obi_req_t user_spi_obi_req;
  sbr_obi_rsp_t user_spi_obi_rsp;
  sbr_obi_req_t user_spi_ctrl_obi_req;
  sbr_obi_rsp_t user_spi_ctrl_obi_rsp;
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

  // Default response for unused demux ports (if any)
  generate
    if (NumDemuxSbr > 4) begin : gen_default_rsp // Condition ensures it doesn't run if NumDemuxSbr is exactly 4
      for (genvar i = 4; i < NumDemuxSbr; i++) begin : default_rsp_loop
        assign all_user_sbr_obi_rsp[i] = '{ gnt: 1'b0, rvalid: 1'b0, r: '{default:'0}, default: '0 };
      end
    end
  endgenerate

  // Address Decoder & Demux
  logic [cf_math_pkg::idx_width(NumDemuxSbr)-1:0] user_idx; // Will be 2 bits for 4 ports

  addr_decode #(
    .NoIndices ( NumDemuxSbr      ),
    .NoRules   ( NumDemuxSbrRules ), // 3 rules for UserSpi, UserSpiCtrl, UserFontRom
    .addr_t    ( logic[SbrObiCfg.DataWidth-1:0] ),
    .rule_t    ( addr_map_rule_t  ),
    .Napot     ( 1'b0             )
  ) i_addr_decode_periphs (
    .addr_i           ( user_sbr_obi_req_i.a.addr ),
    .addr_map_i       ( user_addr_map             ), // From user_pkg
    .idx_o            ( user_idx                  ),
    .dec_valid_o      ( /* unconnected */         ),
    .dec_error_o      ( /* unconnected */         ),
    .en_default_idx_i ( 1'b1                      ),
    .default_idx_i    ( UserError                 )
  );

  obi_demux #(
    .ObiCfg      ( SbrObiCfg     ),
    .obi_req_t   ( sbr_obi_req_t ),
    .obi_rsp_t   ( sbr_obi_rsp_t ),
    .NumMgrPorts ( NumDemuxSbr   ), // 4 ports
    .NumMaxTrans ( 2             )
  ) i_obi_demux (
    .clk_i, .rst_ni,
    .sbr_port_select_i ( user_idx             ),
    .sbr_port_req_i    ( user_sbr_obi_req_i   ),
    .sbr_port_rsp_o    ( user_sbr_obi_rsp_o   ),
    .mgr_ports_req_o   ( all_user_sbr_obi_req ),
    .mgr_ports_rsp_i   ( all_user_sbr_obi_rsp )
  );

  // User Subordinates
  obi_err_sbr #(
    .ObiCfg(SbrObiCfg), .obi_req_t(sbr_obi_req_t), .obi_rsp_t(sbr_obi_rsp_t)
  ) i_user_err (
    .clk_i, .rst_ni, .testmode_i,
    .obi_req_i  ( user_error_obi_req ),
    .obi_rsp_o  ( user_error_obi_rsp )
  );

  obi_spi_peripheral i_spi_peripheral (
    .clk_i, .rst_ni,
    .req_i    ( user_spi_obi_req.req    ),
    .addr_i   ( user_spi_obi_req.a.addr ),
    .wdata_i  ( user_spi_obi_req.a.wdata),
    .be_i     ( user_spi_obi_req.a.be   ),
    .we_i     ( user_spi_obi_req.a.we   ),
    .gnt_o    ( user_spi_obi_rsp.gnt    ),
    .rvalid_o ( user_spi_obi_rsp.rvalid ),
    .rdata_o  ( user_spi_obi_rsp.r.rdata ),
    .sck_o    ( spi_sck_o  ),
    .mosi_o   ( spi_mosi_o ),
    .cs_no    ( /* Unconnected */ )
  );

  user_spi_ctrl i_user_spi_ctrl (
    .clk_i, .rst_ni,
    .obi_req_i ( user_spi_ctrl_obi_req ),
    .obi_rsp_o ( user_spi_ctrl_obi_rsp ),
    .spi_cs1_no( spi_cs1_no ),
    .spi_cs2_no( spi_cs2_no ),
    .spi_dc_o  ( spi_dc_o   )
  );

  user_font_rom i_user_font_rom (
    .clk_i, .rst_ni,
    .obi_req_i ( user_font_rom_obi_req ),
    .obi_rsp_o ( user_font_rom_obi_rsp )
  );

endmodule