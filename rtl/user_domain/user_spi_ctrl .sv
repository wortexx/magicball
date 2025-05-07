    `timescale 1ns/1ps

    module user_spi_ctrl import croc_pkg::*; import user_pkg::*; #(
    parameter int unsigned PRNG_SEED = 32'hCAFEBABE // Example different seed
    ) (
    input  logic        clk_i,
    input  logic        rst_ni,

    // OBI Slave Interface (Connected from user_domain demux port UserSpiCtrl)
    input  sbr_obi_req_t obi_req_i,
    output sbr_obi_rsp_t obi_rsp_o,

    // Control Outputs (Connected to user_domain ports)
    output logic        spi_cs1_no, // Active Low CS for Device 1 (e.g., SSD1331)
    output logic        spi_cs2_no, // Active Low CS for Device 2 (e.g., ADXL345)
    output logic        spi_dc_o    // Data/Command for Device 1 (SSD1331)
    );

    //-------------------------------------------------
    // Parameters & Local Types
    //-------------------------------------------------
    localparam int ADDR_WIDTH = 12; // Width needed for offset decoding (4KB range)
    localparam int DATA_WIDTH = SbrObiCfg.DataWidth; // Should be 32

    // Register Offsets within this module's address space (0x20002000 base)
    localparam logic [ADDR_WIDTH-1:0] GPIO_CTRL_OFFSET = 12'h000; // CS1, CS2, DC control
    localparam logic [ADDR_WIDTH-1:0] PRNG_CTRL_OFFSET = 12'h004; // PRNG Trigger
    localparam logic [ADDR_WIDTH-1:0] PRNG_READ_OFFSET = 12'h008; // Read PRNG output

    // Bit positions in GPIO_CTRL Register
    localparam int CS1_N_BIT = 0;
    localparam int CS2_N_BIT = 1;
    localparam int DC_BIT    = 2;
    // Bit position in PRNG_CTRL Register
    localparam int PRNG_EN_BIT = 0; // Write 1 to trigger

    //-------------------------------------------------
    // Internal Registers
    //-------------------------------------------------
    // Registers holding the state of the output control signals
    logic cs1_n_q, cs1_n_d;
    logic cs2_n_q, cs2_n_d;
    logic dc_q, dc_d;

    // PRNG Control and Data
    logic prng_en; // Single-cycle enable pulse for PRNG
    logic [31:0] prng_out_q; // Latched output of PRNG
    logic [31:0] prng_out_w; // Wire from PRNG instance

    // OBI Read Path Registers
    logic rvalid_q;
    logic [DATA_WIDTH-1:0] rdata_q;
    logic read_req_accepted;

    //-------------------------------------------------
    // Xorshift PRNG Instantiation
    //-------------------------------------------------
    // Assuming xorshift module is defined elsewhere (e.g., xorshift.sv)
    xorshift #(
        .WIDTH(32),
        .SEED (PRNG_SEED)
    ) i_xorshift (
        .clk_i   ( clk_i     ),
        .rst_ni  ( rst_ni    ),
        .en_i    ( prng_en   ), // Driven by register write logic
        .rand_o  ( prng_out_w ) // Output wire from PRNG
    );

    //-------------------------------------------------
    // Drive Outputs from Registers
    //-------------------------------------------------
    assign spi_cs1_no = cs1_n_q;
    assign spi_cs2_no = cs2_n_q;
    assign spi_dc_o   = dc_q;

    //-------------------------------------------------
    // OBI Slave Logic
    //-------------------------------------------------
    logic write_req;
    logic read_req;
    logic [ADDR_WIDTH-1:0] addr_offset;
    logic [DATA_WIDTH-1:0] reg_wdata;
    logic [DATA_WIDTH-1:0] reg_rdata;
    logic grant_w, grant_r; // Separate grant conditions

    // Decode request
    assign addr_offset = obi_req_i.a.addr[ADDR_WIDTH-1:0];
    assign reg_wdata   = obi_req_i.a.wdata;
    assign write_req   = obi_req_i.req &&  obi_req_i.a.we;
    assign read_req    = obi_req_i.req && !obi_req_i.a.we;

    // Grant Logic
    assign grant_w = write_req &&
                    ((addr_offset == GPIO_CTRL_OFFSET) || (addr_offset == PRNG_CTRL_OFFSET));
    assign grant_r = read_req &&
                    (addr_offset == PRNG_READ_OFFSET); // Only PRNG output is readable for now

    assign obi_rsp_o.gnt = grant_w || grant_r;

    // Register Write Logic (Combinational logic for next state of registers)
    assign prng_en = write_req && grant_w && (addr_offset == PRNG_CTRL_OFFSET) && reg_wdata[PRNG_EN_BIT];

    always_comb begin
        // Default: keep current value
        cs1_n_d = cs1_n_q;
        cs2_n_d = cs2_n_q;
        dc_d    = dc_q;

        // Handle writes to GPIO Control Register
        if (write_req && grant_w && addr_offset == GPIO_CTRL_OFFSET) begin
        // Update based on corresponding write data bits (assuming full word write BE)
        cs1_n_d = reg_wdata[CS1_N_BIT];
        cs2_n_d = reg_wdata[CS2_N_BIT];
        dc_d    = reg_wdata[DC_BIT];
        end
    end

    // Read Data Logic (Combinational Mux)
    always_comb begin
        reg_rdata = '0; // Default read data
        unique case (addr_offset)
        PRNG_READ_OFFSET: begin
            reg_rdata = prng_out_q; // Read latched PRNG output
        end
        default: ;
        endcase
    end

    // Sequential Logic (Register Updates and OBI Read Path)
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
        cs1_n_q           <= 1'b1; // Default inactive
        cs2_n_q           <= 1'b1; // Default inactive
        dc_q              <= 1'b0; // Default command mode
        prng_out_q        <= '0;   // Reset PRNG output latch
        rvalid_q          <= 1'b0;
        rdata_q           <= '0;
        read_req_accepted <= 1'b0;
        end else begin
        // Update control registers
        cs1_n_q <= cs1_n_d;
        cs2_n_q <= cs2_n_d;
        dc_q    <= dc_d;

        // Latch PRNG output (updated whenever PRNG runs)
        // Note: PRNG itself updates based on prng_en
        prng_out_q <= prng_out_w;

        // OBI Read Path Logic
        read_req_accepted <= read_req && grant_r; // Latch accepted read this cycle
        rvalid_q <= read_req_accepted; // Assert valid next cycle

        if (read_req_accepted) begin
            rdata_q <= reg_rdata; // Latch read data when request accepted
        end else if (!rvalid_q) begin
            rdata_q <= '0;
        end
        // Else: rdata_q holds value while rvalid_q is high
        end
    end

    // Drive OBI Response Outputs
    assign obi_rsp_o.rvalid = rvalid_q;
    assign obi_rsp_o.r.rdata = rdata_q;
    assign obi_rsp_o.r.rid   = obi_req_i.a.aid; // Pass ID through
    assign obi_rsp_o.r.err   = read_req && !grant_r; // Error if read to invalid/unimplemented address

    endmodule