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
  assign user_mgr_obi_req_o = '0;

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

  generate if (NumDemuxSbr > 4) begin : gen_default_rsp
      for (genvar i = 4; i < NumDemuxSbr; i++) begin : default_rsp_loop
        assign all_user_sbr_obi_rsp[i] = '{ gnt: 1'b0, rvalid: 1'b0, r: '{default:'0}, default: '0 };
      end
  end endgenerate

  logic [cf_math_pkg::idx_width(NumDemuxSbr)-1:0] user_idx;

  addr_decode #(
    .NoIndices ( NumDemuxSbr      ), .NoRules   ( NumDemuxSbrRules ),
    .addr_t    ( logic[SbrObiCfg.DataWidth-1:0] ), .rule_t    ( addr_map_rule_t  ),
    .Napot     ( 1'b0             )
  ) i_addr_decode_periphs (
    .addr_i(user_sbr_obi_req_i.a.addr), .addr_map_i(user_addr_map), .idx_o(user_idx),
    .dec_valid_o(), .dec_error_o(),
    .en_default_idx_i(1'b1), .default_idx_i(UserError)
  );

  // *** MODIFIED: Instantiate obi_demux_debug ***
  obi_demux #(
    .ObiCfg      ( SbrObiCfg     ), .obi_req_t   ( sbr_obi_req_t ),
    .obi_rsp_t   ( sbr_obi_rsp_t ), .NumMgrPorts ( NumDemuxSbr   ), // 4 ports
    .NumMaxTrans ( 4             )  // Increased to handle multiple outstanding
  ) i_obi_demux (
    .clk_i, .rst_ni,
    .sbr_port_select_i ( user_idx             ),
    .sbr_port_req_i    ( user_sbr_obi_req_i   ),
    .sbr_port_rsp_o    ( user_sbr_obi_rsp_o   ),
    .mgr_ports_req_o   ( all_user_sbr_obi_req ),
    .mgr_ports_rsp_i   ( all_user_sbr_obi_rsp )
  );

  // User Subordinates
  obi_err_sbr #( /* Ensure correct parameters are passed if not using defaults */
    .ObiCfg(SbrObiCfg), .obi_req_t(sbr_obi_req_t), .obi_rsp_t(sbr_obi_rsp_t)
  ) i_user_err (
    .clk_i(clk_i), .rst_ni(rst_ni), .testmode_i(testmode_i),
    .obi_req_i  ( user_error_obi_req ),
    .obi_rsp_o  ( user_error_obi_rsp )
  );

  obi_spi_peripheral i_spi_peripheral (
    .clk_i(clk_i), .rst_ni(rst_ni),
    .req_i    ( user_spi_obi_req.req    ), .addr_i   ( user_spi_obi_req.a.addr ),
    .wdata_i  ( user_spi_obi_req.a.wdata), .be_i     ( user_spi_obi_req.a.be   ),
    .we_i     ( user_spi_obi_req.a.we   ),
    .gnt_o    ( user_spi_obi_rsp.gnt    ), .rvalid_o ( user_spi_obi_rsp.rvalid ),
    .rdata_o  ( user_spi_obi_rsp.r.rdata ),
    .sck_o    ( spi_sck_o  ), .mosi_o   ( spi_mosi_o ),
    .cs_no    ( /* Unconnected */ )
  );

  user_spi_ctrl i_user_spi_ctrl (
    .clk_i(clk_i), .rst_ni(rst_ni),
    .obi_req_i ( user_spi_ctrl_obi_req ),
    .obi_rsp_o ( user_spi_ctrl_obi_rsp ),
    .spi_cs1_no( spi_cs1_no ), .spi_cs2_no( spi_cs2_no ), .spi_dc_o  ( spi_dc_o   )
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

    // Monitor signals TO specific peripherals if user_idx matches
    if (user_idx == UserSpi && all_user_sbr_obi_req[UserSpi].req) begin
        $display("%t [UD_TO_SPI_ENG] Req to SPI Eng (idx %d): Addr=0x%h, WE=%b",
                 $time, UserSpi, all_user_sbr_obi_req[UserSpi].a.addr, all_user_sbr_obi_req[UserSpi].a.we);
    end
    if (user_idx == UserSpiCtrl && all_user_sbr_obi_req[UserSpiCtrl].req) begin
        $display("%t [UD_TO_SPI_CTRL] Req to SPI Ctrl (idx %d): Addr=0x%h, WE=%b",
                 $time, UserSpiCtrl, all_user_sbr_obi_req[UserSpiCtrl].a.addr, all_user_sbr_obi_req[UserSpiCtrl].a.we);
    end
    // Add similar for UserFontRom if needed

    // Monitor signals FROM specific peripherals
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
    // Add similar for UserFontRom if needed

    // Monitor the final OBI response output by user_domain
    if (user_sbr_obi_rsp_o.gnt && !user_sbr_obi_req_i.a.we) begin // Only for reads
        $display("%t [UD_OUT] GNT_OUT=%b for Read to Idx=%d (Addr=0x%h)",
                 $time, user_sbr_obi_rsp_o.gnt, user_idx, user_sbr_obi_req_i.a.addr);
    end
    if (user_sbr_obi_rsp_o.rvalid) begin
        $display("%t [UD_OUT] RVALID_OUT=%b, RDATA_OUT=0x%h for Read to Idx=%d (Addr=0x%h)",
                 $time, user_sbr_obi_rsp_o.rvalid, user_sbr_obi_rsp_o.r.rdata, user_idx, user_sbr_obi_req_i.a.addr);
    end
  end

endmodule

/* 
//this version worked for isolated spi in user domain testing 
module user_domain import user_pkg::*; import croc_pkg::*; #(
  parameter int unsigned GpioCount = 16
) (
  input  logic      clk_i,
  input  logic      ref_clk_i,
  input  logic      rst_ni,
  input  logic      testmode_i,

  input  sbr_obi_req_t user_sbr_obi_req_i, // User Sbr (rsp_o), Croc Mgr (req_i)
  output sbr_obi_rsp_t user_sbr_obi_rsp_o,

  output mgr_obi_req_t user_mgr_obi_req_o, // User Mgr (req_o), Croc Sbr (rsp_i)
  input  mgr_obi_rsp_t user_mgr_obi_rsp_i,

  input  logic [      GpioCount-1:0] gpio_in_sync_i, // synchronized GPIO inputs
  output logic [NumExternalIrqs-1:0] interrupts_o, // interrupts to core

  // Outputs for the SPI engine
  output logic        spi_sck_o,
  output logic        spi_mosi_o
  // No hardware CS/DC outputs from user_domain in this configuration
);

  // Default interrupt output
  assign interrupts_o = '0;


  //////////////////////
  // User Manager MUX //
  /////////////////////

  // No manager in this user_domain configuration
  assign user_mgr_obi_req_o = '0;


  ////////////////////////////
  // User Subordinate DEMUX //
  ////////////////////////////

  // --- Device Indices (from user_pkg.sv) ---
  // Expects: UserError = 0, UserSpi = 1
  // Expects: NumDemuxSbr = 2 (NumUserDomainSubordinates = 1 + 1 for error)

  // ----------------------------------------------------------------------------------------------
  // User Subordinate Buses
  // ----------------------------------------------------------------------------------------------

  sbr_obi_req_t [NumDemuxSbr-1:0] all_user_sbr_obi_req; // Array size [1:0]
  sbr_obi_rsp_t [NumDemuxSbr-1:0] all_user_sbr_obi_rsp; // Array size [1:0]

  // Error Subordinate Bus
  sbr_obi_req_t user_error_obi_req;
  sbr_obi_rsp_t user_error_obi_rsp;

  // SPI Engine Subordinate Bus
  sbr_obi_req_t user_spi_obi_req;
  sbr_obi_rsp_t user_spi_obi_rsp;

  // Fanout / Connect specific indices
  assign user_error_obi_req = all_user_sbr_obi_req[UserError]; // Index 0
  assign user_spi_obi_req   = all_user_sbr_obi_req[UserSpi];   // Index 1

  assign all_user_sbr_obi_rsp[UserError] = user_error_obi_rsp; // Index 0
  assign all_user_sbr_obi_rsp[UserSpi]   = user_spi_obi_rsp;   // Index 1

  // Default response for unused demux ports
  // (This generate block will effectively do nothing if NumDemuxSbr is exactly 2)
  generate
    if (NumDemuxSbr > 2) begin : gen_default_rsp
      for (genvar i = 2; i < NumDemuxSbr; i++) begin : default_rsp_loop
        assign all_user_sbr_obi_rsp[i] = '{ gnt: 1'b0, rvalid: 1'b0, r: '{default:'0}, default: '0 };
      end
    end
  endgenerate


  //-----------------------------------------------------------------------------------------------
  // Demultiplex to User Subordinates according to address map
  //-----------------------------------------------------------------------------------------------

  logic [cf_math_pkg::idx_width(NumDemuxSbr)-1:0] user_idx; // Width will be 1 bit

  addr_decode #(
    .NoIndices ( NumDemuxSbr                    ), // Should be 2
    .NoRules   ( NumDemuxSbrRules               ), // Should be 1 (for UserSpi)
    .addr_t    ( logic[SbrObiCfg.DataWidth-1:0] ),
    .rule_t    ( addr_map_rule_t                ),
    .Napot     ( 1'b0                           )
  ) i_addr_decode_periphs (
    .addr_i           ( user_sbr_obi_req_i.a.addr ),
    .addr_map_i       ( user_addr_map             ), // From user_pkg (should have 1 rule)
    .idx_o            ( user_idx                  ),
    .dec_valid_o      (         ),
    .dec_error_o      (          ),
    .en_default_idx_i ( 1'b1                      ),
    .default_idx_i    ( UserError                 )  // Default to error slave (Index 0)
  );

  obi_demux #( // Using the standard obi_demux
    .ObiCfg      ( SbrObiCfg     ),
    .obi_req_t   ( sbr_obi_req_t ),
    .obi_rsp_t   ( sbr_obi_rsp_t ),
    .NumMgrPorts ( NumDemuxSbr   ), // Should be 2
    // *** MODIFIED: Increased NumMaxTrans ***
    .NumMaxTrans ( 3             )  // Allow at least 2 writes + 1 read outstanding
  ) i_obi_demux (
    .clk_i,
    .rst_ni,
    .sbr_port_select_i ( user_idx             ),
    .sbr_port_req_i    ( user_sbr_obi_req_i   ),
    .sbr_port_rsp_o    ( user_sbr_obi_rsp_o   ),
    .mgr_ports_req_o   ( all_user_sbr_obi_req ),
    .mgr_ports_rsp_i   ( all_user_sbr_obi_rsp )
  );


//-------------------------------------------------------------------------------------------------
// User Subordinates
//-------------------------------------------------------------------------------------------------

  // Error Subordinate (Connected to Index UserError = 0)
  obi_err_sbr #(
    .ObiCfg      ( SbrObiCfg     ),
    .obi_req_t   ( sbr_obi_req_t ),
    .obi_rsp_t   ( sbr_obi_rsp_t ),
    .NumMaxTrans ( 1             ),
    .RspData     ( 32'hBADCAB1E  )
  ) i_user_err (
    .clk_i,
    .rst_ni,
    .testmode_i ( testmode_i      ),
    .obi_req_i  ( user_error_obi_req ),
    .obi_rsp_o  ( user_error_obi_rsp )
  );

  // SPI Engine Peripheral (Connected to Index UserSpi = 1)
  obi_spi_peripheral i_spi_peripheral (
    .clk_i    (clk_i),
    .rst_ni   (rst_ni),
    // OBI Interface
    .req_i    ( user_spi_obi_req.req    ),
    .addr_i   ( user_spi_obi_req.a.addr ),
    .wdata_i  ( user_spi_obi_req.a.wdata),
    .be_i     ( user_spi_obi_req.a.be   ),
    .we_i     ( user_spi_obi_req.a.we   ),
    .gnt_o    ( user_spi_obi_rsp.gnt    ),
    .rvalid_o ( user_spi_obi_rsp.rvalid ),
    .rdata_o  ( user_spi_obi_rsp.r.rdata ),
    // SPI Interface
    .sck_o    ( spi_sck_o  ), // Connect to top-level port
    .mosi_o   ( spi_mosi_o ), // Connect to top-level port
    .cs_no    (  )
  );

  // No user_spi_ctrl or user_font_rom instantiations in this version

  // Debug displays from previous version (user_domain_final_hw_ctrl_v2)
  // can be re-added here if needed, but should target the UserSpi index.
  // For example:
  /*
  always @(posedge clk_i) begin
    if (user_sbr_obi_req_i.req && user_idx == UserSpi) begin
        $display("%t [UD_IN_SPI] Req for SPI (Idx=%d): Addr=0x%h, WE=%b",
                 $time, user_idx, user_sbr_obi_req_i.a.addr, user_sbr_obi_req_i.a.we);
    end
    if (all_user_sbr_obi_req[UserSpi].req) begin
        $display("%t [UD_TO_SPI_ENG] Req to SPI Eng: Addr=0x%h, WE=%b",
                 $time, all_user_sbr_obi_req[UserSpi].a.addr, all_user_sbr_obi_req[UserSpi].a.we);
    end
    // ... etc. for GNT and RVALID from/to SPI engine ...
  end

endmodule
  */

//this one for all modules together
/*module user_domain import user_pkg::*; import croc_pkg::*; #(
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

  generate if (NumDemuxSbr > 4) begin : gen_default_rsp
      for (genvar i = 4; i < NumDemuxSbr; i++) begin : default_rsp_loop
        assign all_user_sbr_obi_rsp[i] = '{ gnt: 1'b0, rvalid: 1'b0, r: '{default:'0}, default: '0 };
      end
  end endgenerate

  logic [cf_math_pkg::idx_width(NumDemuxSbr)-1:0] user_idx;

  addr_decode #(
    .NoIndices ( NumDemuxSbr      ), .NoRules   ( NumDemuxSbrRules ),
    .addr_t    ( logic[SbrObiCfg.DataWidth-1:0] ), .rule_t    ( addr_map_rule_t  ),
    .Napot     ( 1'b0             )
  ) i_addr_decode_periphs (
    .addr_i(user_sbr_obi_req_i.a.addr), .addr_map_i(user_addr_map), .idx_o(user_idx),
    .dec_valid_o(), .dec_error_o(),
    .en_default_idx_i(1'b1), .default_idx_i(UserError)
  );

  obi_demux #( // Using the standard obi_demux
    .ObiCfg      ( SbrObiCfg     ), .obi_req_t   ( sbr_obi_req_t ),
    .obi_rsp_t   ( sbr_obi_rsp_t ), .NumMgrPorts ( NumDemuxSbr   ),
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
    .ObiCfg(SbrObiCfg), .obi_req_t(sbr_obi_req_t), .obi_rsp_t(sbr_obi_rsp_t),
    .NumMaxTrans(1), .RspData(32'hBADCAB1E)
  ) i_user_err (
    .clk_i, .rst_ni, .testmode_i(testmode_i),
    .obi_req_i  ( user_error_obi_req ),
    .obi_rsp_o  ( user_error_obi_rsp )
  );

  obi_spi_peripheral i_spi_peripheral (
    .clk_i, .rst_ni,
    .req_i    ( user_spi_obi_req.req    ), .addr_i   ( user_spi_obi_req.a.addr ),
    .wdata_i  ( user_spi_obi_req.a.wdata), .be_i     ( user_spi_obi_req.a.be   ),
    .we_i     ( user_spi_obi_req.a.we   ),
    .gnt_o    ( user_spi_obi_rsp.gnt    ), .rvalid_o ( user_spi_obi_rsp.rvalid ),
    .rdata_o  ( user_spi_obi_rsp.r.rdata ),
    .sck_o    ( spi_sck_o  ), // To top-level port
    .mosi_o   ( spi_mosi_o ), // To top-level port
    .cs_no    ( /* Unconnected * )
  );

  user_spi_ctrl i_user_spi_ctrl (
    .clk_i, .rst_ni,
    .obi_req_i ( user_spi_ctrl_obi_req ),
    .obi_rsp_o ( user_spi_ctrl_obi_rsp ),
    .spi_cs1_no( spi_cs1_no ), // To top-level port
    .spi_cs2_no( spi_cs2_no ), // To top-level port
    .spi_dc_o  ( spi_dc_o   )  // To top-level port
  );

  user_font_rom i_user_font_rom (
    .clk_i, .rst_ni,
    .obi_req_i ( user_font_rom_obi_req ),
    .obi_rsp_o ( user_font_rom_obi_rsp )
  );

endmodule */