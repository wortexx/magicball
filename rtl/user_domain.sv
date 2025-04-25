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
  // Output spi_cs_no removed - CS handled by software via GPIO
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
  // From user_pkg: UserError = 0, UserSpi = 1
  // NumDemuxSbr is now 2

  // ----------------------------------------------------------------------------------------------
  // User Subordinate Buses
  // ----------------------------------------------------------------------------------------------

  sbr_obi_req_t [NumDemuxSbr-1:0] all_user_sbr_obi_req; // Array size [1:0]
  sbr_obi_rsp_t [NumDemuxSbr-1:0] all_user_sbr_obi_rsp; // Array size [1:0]

  // Error Subordinate Bus (Connects to Port UserError = 0)
  sbr_obi_req_t user_error_obi_req;
  sbr_obi_rsp_t user_error_obi_rsp;

  // SPI Subordinate Bus (Connects to Port UserSpi = 1)
  sbr_obi_req_t user_spi_obi_req;
  sbr_obi_rsp_t user_spi_obi_rsp;

  // Fanout / Connect specific indices
  assign user_error_obi_req = all_user_sbr_obi_req[UserError]; // Index 0
  assign user_spi_obi_req   = all_user_sbr_obi_req[UserSpi];   // Index 1

  assign all_user_sbr_obi_rsp[UserError] = user_error_obi_rsp; // Index 0
  assign all_user_sbr_obi_rsp[UserSpi]   = user_spi_obi_rsp;   // Index 1

  // Default response for unused demux ports (generate block does nothing if NumDemuxSbr=2)
  generate
    if (NumDemuxSbr > 2) begin : gen_default_rsp
      for (genvar i = 2; i < NumDemuxSbr; i++) begin : default_rsp_loop
        assign all_user_sbr_obi_rsp[i] = '{ gnt: 1'b0, rvalid: 1'b0, rdata: '0, default: '0 };
      end
    end
  endgenerate


  //-----------------------------------------------------------------------------------------------
  // Demultiplex to User Subordinates according to address map
  //-----------------------------------------------------------------------------------------------

  logic [cf_math_pkg::idx_width(NumDemuxSbr)-1:0] user_idx; // Width is 1 bit

  addr_decode #(
    .NoIndices ( NumDemuxSbr                    ), // Now 2
    .NoRules   ( NumDemuxSbrRules               ), // Now 1
    .addr_t    ( logic[SbrObiCfg.DataWidth-1:0] ),
    .rule_t    ( addr_map_rule_t                ),
    .Napot     ( 1'b0                           )
  ) i_addr_decode_periphs (
    .addr_i           ( user_sbr_obi_req_i.a.addr ),
    .addr_map_i       ( user_addr_map             ), // From user_pkg
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
    .NumMgrPorts ( NumDemuxSbr   ), // Now 2
    .NumMaxTrans ( 2             )
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

  // Single SPI Peripheral Instantiation (Connected to Index UserSpi = 1)
  obi_spi_peripheral i_spi_peripheral ( // Use correct module name
    .clk_i    (clk_i),
    .rst_ni   (rst_ni),

    // --- OBI Slave Interface ---
    // Connections use confirmed field names from croc_pkg.sv
    .req_i    ( user_spi_obi_req.req    ),
    .addr_i   ( user_spi_obi_req.a.addr ),
    .wdata_i  ( user_spi_obi_req.a.wdata),
    .be_i     ( user_spi_obi_req.a.be   ),
    .we_i     ( user_spi_obi_req.a.we   ),

    .gnt_o    ( user_spi_obi_rsp.gnt    ),
    .rvalid_o ( user_spi_obi_rsp.rvalid ),
    .rdata_o  ( user_spi_obi_rsp.r.rdata ),

    // --- SPI Master Interface ---
    // Connect to the top-level output ports of user_domain
    .sck_o    ( spi_sck_o  ),
    .mosi_o   ( spi_mosi_o ),
    .cs_no    ( /* Unconnected - CS handled by software/gpio */ )
  );

endmodule