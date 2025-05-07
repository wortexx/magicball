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

  // Only SCK and MOSI output ports needed
  output logic        spi_sck_o,
  output logic        spi_mosi_o
  output logic        spi_cs1_no, // CS for SSD1331 (Device 1)
  output logic        spi_cs2_no, // CS for ADXL345 (Device 2)
  output logic        spi_dc_o    // DC for SSD1331
);

  // Default interrupt output
  assign interrupts_o = '0;


  //////////////////////
  // User Manager MUX //
  /////////////////////

  // No manager
  assign user_mgr_obi_req_o = '0;


  ////////////////////////////
  // User Subordinate DEMUX //
  ////////////////////////////

  // --- Device Indices ---
  // From user_pkg: UserError=0, UserSpi=1, UserSpiCtrl=2, UserFontRom=3
  // NumDemuxSbr is now 4

  // ----------------------------------------------------------------------------------------------
  // User Subordinate Buses
  // ----------------------------------------------------------------------------------------------
  
  // collection of signals from the demultiplexer (Size is now 4)
  sbr_obi_req_t [NumDemuxSbr-1:0] all_user_sbr_obi_req; // Array size [3:0]
  sbr_obi_rsp_t [NumDemuxSbr-1:0] all_user_sbr_obi_rsp; // Array size [3:0]

  // Error Subordinate Bus (Connects to Port UserError = 0)
  sbr_obi_req_t user_error_obi_req;
  sbr_obi_rsp_t user_error_obi_rsp;

  // SPI Subordinate Bus (Connects to Port UserSpi = 1)
  sbr_obi_req_t user_spi_obi_req;
  sbr_obi_rsp_t user_spi_obi_rsp;

  // SPI Control Subordinate Bus (Connects to Port UserSpiCtrl = 2) 
  sbr_obi_req_t user_spi_ctrl_obi_req;
  sbr_obi_rsp_t user_spi_ctrl_obi_rsp;

  // Font ROM Subordinate Bus (Connects to Port UserFontRom = 3)
  sbr_obi_req_t user_font_rom_obi_req;
  sbr_obi_rsp_t user_font_rom_obi_rsp;


  // Fanout / Connect specific indices
  assign user_error_obi_req    = all_user_sbr_obi_req[UserError];     // Index 0
  assign user_spi_obi_req      = all_user_sbr_obi_req[UserSpi];       // Index 1
  assign user_spi_ctrl_obi_req = all_user_sbr_obi_req[UserSpiCtrl];   // Index 2
  assign user_font_rom_obi_req = all_user_sbr_obi_req[UserFontRom];   // Index 3

  assign all_user_sbr_obi_rsp[UserError]     = user_error_obi_rsp;    // Index 0
  assign all_user_sbr_obi_rsp[UserSpi]       = user_spi_obi_rsp;      // Index 1
  assign all_user_sbr_obi_rsp[UserSpiCtrl]   = user_spi_ctrl_obi_rsp; // Index 2
  assign all_user_sbr_obi_rsp[UserFontRom]   = user_font_rom_obi_rsp; // Index 3

  // Default response for unused demux ports (if NumDemuxSbr > 4)
  generate
    if (NumDemuxSbr > 4) begin : gen_default_rsp
      for (genvar i = 4; i < NumDemuxSbr; i++) begin : default_rsp_loop
        assign all_user_sbr_obi_rsp[i] = '{ gnt: 1'b0, rvalid: 1'b0, rdata: '0, default: '0 };
      end
    end
  endgenerate


  //-----------------------------------------------------------------------------------------------
  // Demultiplex to User Subordinates according to address map
  //-----------------------------------------------------------------------------------------------

  logic [cf_math_pkg::idx_width(NumDemuxSbr)-1:0] user_idx; // Width is 2 bit

  addr_decode #(
    .NoIndices ( NumDemuxSbr                    ), // Now 4
    .NoRules   ( NumDemuxSbrRules               ), // Now 3
    .addr_t    ( logic[SbrObiCfg.DataWidth-1:0] ),
    .rule_t    ( addr_map_rule_t                ),
    .Napot     ( 1'b0                           )
  ) i_addr_decode_periphs (
    .addr_i           ( user_sbr_obi_req_i.a.addr ),
    .addr_map_i       ( user_addr_map             ), // From user_pkg (3 rules)
    .idx_o            ( user_idx                  ),
    .dec_valid_o      ( /* unconnected */         ),
    .dec_error_o      ( /* unconnected */         ),
    .en_default_idx_i ( 1'b1                      ),
    .default_idx_i    ( UserError                 )  // Default to error slave (Index 0)
  );

  obi_demux #(
    .ObiCfg      ( SbrObiCfg     ),
    .obi_req_t   ( sbr_obi_req_t ),
    .obi_rsp_t   ( sbr_obi_rsp_t ),
    .NumMgrPorts ( NumDemuxSbr   ), // Now 4
    .NumMaxTrans ( 2             )  // Keep max transactions? Adjust if needed
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
    .cs_no    ( /* Unconnected */ )
  );

  // SPI Control Logic Placeholder (Connected to Index UserSpiCtrl = 2)
  // Replace this with the actual module instantiation later
  user_spi_ctrl i_user_spi_ctrl (
    .clk_i    (clk_i),
    .rst_ni   (rst_ni),
    // OBI Interface
    .obi_req_i ( user_spi_ctrl_obi_req ), // Connect to demux port 2 req
    .obi_rsp_o ( user_spi_ctrl_obi_rsp ), // Connect to demux port 2 rsp
    // Control Outputs
    .cs1_no   ( spi_cs1_no ), // Connect to top-level port
    .cs2_no   ( spi_cs2_no ), // Connect to top-level port
    .dc_o     ( spi_dc_o   )  // Connect to top-level port
    // Add connections for PRNG trigger/read if integrated here
  );

  // *** NEW: Font ROM Placeholder (Connected to Index UserFontRom = 3) ***
  // Replace this with the actual module instantiation later
  user_font_rom i_user_font_rom (
    .clk_i     (clk_i),
    .rst_ni    (rst_ni),
    // OBI Interface
    .obi_req_i ( user_font_rom_obi_req ), // Connect to demux port 3 req
    .obi_rsp_o ( user_font_rom_obi_rsp )  // Connect to demux port 3 rsp
  );

endmodule 


//==============================================================================
// Placeholder Modules (Replace with actual implementations)
//==============================================================================

// Placeholder for SPI Control Logic
module user_spi_ctrl (
  input  logic      clk_i,
  input  logic      rst_ni,
  // OBI Slave Interface (using bundled types for simplicity)
  input  sbr_obi_req_t obi_req_i,
  output sbr_obi_rsp_t obi_rsp_o,
  // Control Outputs
  output logic        cs1_no,
  output logic        cs2_no,
  output logic        dc_o
);
  // Assign default non-asserting values
  assign obi_rsp_o = '{ gnt: obi_req_i.req, // Example: Grant immediately if req
                        rvalid: 1'b0,       // Example: Read logic not implemented yet
                        r: '{default:'0},
                        default: '0 };
  assign cs1_no = 1'b1; // Default inactive
  assign cs2_no = 1'b1; // Default inactive
  assign dc_o   = 1'b0; // Default command mode
  // Add register logic, PRNG instance, FSM etc. here later
endmodule

// Placeholder for Font ROM
module user_font_rom (
  input  logic      clk_i,
  input  logic      rst_ni,
  // OBI Slave Interface
  input  sbr_obi_req_t obi_req_i,
  output sbr_obi_rsp_t obi_rsp_o
);
  // Assign default non-asserting values
  assign obi_rsp_o = '{ gnt: obi_req_i.req, // Example: Grant immediately if req
                        rvalid: 1'b0,       // Example: Read logic not implemented yet
                        r: '{default:'0},
                        default: '0 };
  // Add ROM array and OBI read logic here later
endmodule

/*
1.  **Ports:** Added `spi_cs1_no`, `spi_cs2_no`, `spi_dc_o` output ports.
2.  **Demux/Decoder:** Updated parameters (`NumDemuxSbr`, `NumDemuxSbrRules`) based on `user_pkg.sv` (now 4 ports total).
3.  **OBI Bundles:** Declared request/response bundles for the new control and ROM peripherals.
4.  **Demux Connections:** Connected the new bundles to the `all_user_sbr_obi_req`/`rsp` arrays at indices 2 and 3.
5.  **Instantiations:** Added instances `i_user_spi_ctrl` and `i_user_font_rom` (using placeholder modules for now) connected to demux ports 2 and 3 respectively.
6.  **Output Routing:** Connected the new top-level ports (`spi_cs1_no`, etc.) to the outputs of the `i_user_spi_ctrl` placeholder.

The next logical steps would be to define the actual RTL for the `user_spi_ctrl` and `user_font_rom` module
*/