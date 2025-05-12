//no xor here
`timescale 1ns/1ps

import croc_pkg::*; // For sbr_obi_req_t, sbr_obi_rsp_t, SbrObiCfg etc.
// No need to import user_pkg if all params are local

module user_spi_ctrl (
  input  logic        clk_i,
  input  logic        rst_ni,

  // OBI Slave Interface
  input  sbr_obi_req_t obi_req_i,
  output sbr_obi_rsp_t obi_rsp_o,

  // Hardware Control Outputs
  output logic spi_cs1_no, // Active Low CS for Device 1 (e.g., SSD1331)
  output logic spi_cs2_no, // Active Low CS for Device 2 (e.g., ADXL345)
  output logic spi_dc_o    // Data/Command for Device 1 (SSD1331)
);

  //-------------------------------------------------
  // Parameters & Local Types
  //-------------------------------------------------
  localparam int ADDR_WIDTH = 12; // Width for offset decoding (e.g. up to 4KB range)
  localparam int DATA_WIDTH = SbrObiCfg.DataWidth; // Should be 32

  // Register Offset within this module's address space
  // Only one register for CS1_N, CS2_N, DC (Write & Read)
  localparam logic [ADDR_WIDTH-1:0] GPIO_CTRL_OFFSET = 12'h000;

  // Bit positions in GPIO_CTRL Register
  localparam int CS1_N_BIT = 0; // Write 0 to assert CS1, 1 to deassert
  localparam int CS2_N_BIT = 1; // Write 0 to assert CS2, 1 to deassert
  localparam int DC_BIT    = 2; // Write 0 for command, 1 for data

  //-------------------------------------------------
  // Internal Registers
  //-------------------------------------------------
  logic cs1_n_q;
  logic cs2_n_q;
  logic dc_q;

  // OBI Response path registers
  logic rvalid_q;
  logic [DATA_WIDTH-1:0] rdata_q;
  logic read_granted_this_cycle; // Combinational signal

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
  logic [ADDR_WIDTH-1:0] addr_offset_local; // Use local for clarity
  logic [DATA_WIDTH-1:0] reg_wdata_local;
  logic [DATA_WIDTH-1:0] reg_rdata_comb;
  logic grant_w, grant_r;

  assign addr_offset_local = obi_req_i.a.addr[ADDR_WIDTH-1:0]; // Assuming base address is 0 for this module
  assign reg_wdata_local = obi_req_i.a.wdata;
  assign write_req       = obi_req_i.req &&  obi_req_i.a.we;
  assign read_req        = obi_req_i.req && !obi_req_i.a.we;

  // Grant Logic: Only one register (GPIO_CTRL_OFFSET) is accessible
  assign grant_w = write_req && (addr_offset_local == GPIO_CTRL_OFFSET);
  assign grant_r = read_req  && (addr_offset_local == GPIO_CTRL_OFFSET);

  assign obi_rsp_o.gnt = grant_w || grant_r;

  // Combinational logic for Read Data Mux
  always_comb begin
    reg_rdata_comb = '0; // Default
    if (addr_offset_local == GPIO_CTRL_OFFSET) begin
        reg_rdata_comb = {{(DATA_WIDTH-3){1'b0}}, dc_q, cs2_n_q, cs1_n_q};
    end
  end

  // Sequential Logic: Register Updates and OBI Read Path
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      cs1_n_q   <= 1'b1; // Default inactive (high)
      cs2_n_q   <= 1'b1; // Default inactive (high)
      dc_q      <= 1'b0; // Default command
      rvalid_q  <= 1'b0;
      rdata_q   <= '0;
    end else begin
      // Handle OBI writes to GPIO_CTRL register
      if (write_req && grant_w && addr_offset_local == GPIO_CTRL_OFFSET) begin
         // Assuming byte enables allow writing to the relevant bits (e.g., be_i[0] for LSB)
         // For simplicity, let's assume full word write or that be_i[0] is always set for this register.
         if (obi_req_i.a.be[0]) begin
            cs1_n_q <= reg_wdata_local[CS1_N_BIT];
            cs2_n_q <= reg_wdata_local[CS2_N_BIT];
            dc_q    <= reg_wdata_local[DC_BIT];
            $display("%t [SPI_CTRL_GPIO_WRITE] AddrOff=0x%h, Data=0x%h -> CS1_N=%b, CS2_N=%b, DC=%b",
                     $time, addr_offset_local, reg_wdata_local,
                     reg_wdata_local[CS1_N_BIT], reg_wdata_local[CS2_N_BIT], reg_wdata_local[DC_BIT]);
         end
      end

      // OBI Read Path Logic
      if (read_granted_this_cycle) begin
        $display("%t [SPI_CTRL_READ_LATCH] Read granted for AddrOff=0x%h. Latching rdata_q=0x%h. rvalid_q becomes 1 NEXT cycle.",
                 $time, addr_offset_local, reg_rdata_comb);
        rdata_q <= reg_rdata_comb;
      end else if (!rvalid_q) begin // If rvalid was low and no new read grant
        rdata_q <= '0;
      end
      // Else: rdata_q holds its value while rvalid_q is high

      rvalid_q <= read_granted_this_cycle; // rvalid_q becomes high one cycle AFTER read_granted_this_cycle was high

      if (rvalid_q) begin // If rvalid_q was high (meaning rvalid_o is high THIS cycle)
          $display("%t [SPI_CTRL_RVALID_HIGH] rvalid_o is HIGH. rdata_o is 0x%h for AddrOff=0x%h",
                   $time, rdata_q, addr_offset_local);
      end
    end
  end

  // Combinational assignment for read_granted_this_cycle
  assign read_granted_this_cycle = obi_req_i.req && !obi_req_i.a.we && obi_rsp_o.gnt;

  // OBI Response outputs
  assign obi_rsp_o.rvalid = rvalid_q;
  assign obi_rsp_o.r.rdata= rdata_q;
  assign obi_rsp_o.r.rid  = obi_req_i.a.aid; // Echo request ID
  // Error if trying to access an invalid address or perform an ungrantable operation
  assign obi_rsp_o.r.err  = (read_req && !grant_r) || (write_req && !grant_w);

endmodule




//working
/*`timescale 1ns/1ps

module user_spi_ctrl import croc_pkg::*; import user_pkg::*; #(
  parameter int unsigned PRNG_SEED = 32'hCAFEBABE
) (
  input  logic        clk_i,
  input  logic        rst_ni,

  input  sbr_obi_req_t obi_req_i,
  output sbr_obi_rsp_t obi_rsp_o,

  output logic        spi_cs1_no,
  output logic        spi_cs2_no,
  output logic        spi_dc_o
);

  localparam int ADDR_WIDTH = 12;
  localparam int DATA_WIDTH = SbrObiCfg.DataWidth;

  localparam logic [ADDR_WIDTH-1:0] GPIO_CTRL_OFFSET = 12'h000;
  localparam logic [ADDR_WIDTH-1:0] PRNG_CTRL_OFFSET = 12'h004;
  localparam logic [ADDR_WIDTH-1:0] PRNG_READ_OFFSET = 12'h008;

  localparam int CS1_N_BIT = 0;
  localparam int CS2_N_BIT = 1;
  localparam int DC_BIT    = 2;
  localparam int PRNG_EN_BIT = 0;

  logic cs1_n_q, cs1_n_d;
  logic cs2_n_q, cs2_n_d;
  logic dc_q, dc_d;
  logic prng_en;
  logic [31:0] prng_out_q;
  logic [31:0] prng_out_w;
  logic rvalid_q;
  logic [DATA_WIDTH-1:0] rdata_q;
  logic read_req_accepted;

  xorshift #(
    .WIDTH(32),
    .SEED (PRNG_SEED)
  ) i_xorshift (
    .clk_i, .rst_ni,
    .en_i    ( prng_en   ),
    .rand_o  ( prng_out_w )
  );

  assign spi_cs1_no = cs1_n_q;
  assign spi_cs2_no = cs2_n_q;
  assign spi_dc_o   = dc_q;

  logic write_req;
  logic read_req;
  logic [ADDR_WIDTH-1:0] addr_offset;
  logic [DATA_WIDTH-1:0] reg_wdata;
  logic [DATA_WIDTH-1:0] reg_rdata;
  logic grant_w, grant_r;

  assign addr_offset = obi_req_i.a.addr[ADDR_WIDTH-1:0];
  assign reg_wdata   = obi_req_i.a.wdata;
  assign write_req   = obi_req_i.req &&  obi_req_i.a.we;
  assign read_req    = obi_req_i.req && !obi_req_i.a.we;

  assign grant_w = write_req &&
                   ((addr_offset == GPIO_CTRL_OFFSET) || (addr_offset == PRNG_CTRL_OFFSET));
  assign grant_r = read_req &&
                   (addr_offset == PRNG_READ_OFFSET);
  assign obi_rsp_o.gnt = grant_w || grant_r;

  assign prng_en = write_req && grant_w && (addr_offset == PRNG_CTRL_OFFSET) && reg_wdata[PRNG_EN_BIT];

  always_comb begin
    cs1_n_d = cs1_n_q;
    cs2_n_d = cs2_n_q;
    dc_d    = dc_q;

    if (write_req && grant_w && addr_offset == GPIO_CTRL_OFFSET) begin
       cs1_n_d = reg_wdata[CS1_N_BIT];
       cs2_n_d = reg_wdata[CS2_N_BIT];
       dc_d    = reg_wdata[DC_BIT];
    end

    reg_rdata = '0;
    if (addr_offset == PRNG_READ_OFFSET) begin
        reg_rdata = prng_out_q;
    end
  end

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      cs1_n_q           <= 1'b1;
      cs2_n_q           <= 1'b1;
      dc_q              <= 1'b0;
      prng_out_q        <= '0;
      rvalid_q          <= 1'b0;
      rdata_q           <= '0;
      read_req_accepted <= 1'b0;
    end else begin
      cs1_n_q <= cs1_n_d;
      cs2_n_q <= cs2_n_d;
      dc_q    <= dc_d;
      prng_out_q <= prng_out_w;

      read_req_accepted <= read_req && grant_r;
      rvalid_q <= read_req_accepted;

      if (read_req_accepted) begin
        rdata_q <= reg_rdata;
      end else if (!rvalid_q) begin
        rdata_q <= '0;
      end
    end
  end

  assign obi_rsp_o.rvalid = rvalid_q;
  assign obi_rsp_o.r.rdata = rdata_q;
  assign obi_rsp_o.r.rid   = obi_req_i.a.aid;
  assign obi_rsp_o.r.err   = (read_req && !grant_r) || (write_req && !grant_w);

endmodule
*/