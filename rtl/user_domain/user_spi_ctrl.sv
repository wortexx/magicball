`timescale 1ns/1ps

import croc_pkg::*; 

module user_spi_ctrl (
  input  logic        clk_i,
  input  logic        rst_ni,
  input  sbr_obi_req_t obi_req_i,
  output sbr_obi_rsp_t obi_rsp_o,
  output logic spi_cs1_no, 
  output logic spi_cs2_no, 
  output logic spi_dc_o    
);

  localparam int ADDR_WIDTH = 12; 
  localparam int DATA_WIDTH = SbrObiCfg.DataWidth; 
  localparam logic [ADDR_WIDTH-1:0] GPIO_CTRL_OFFSET = 12'h000;
  localparam int CS1_N_BIT = 0; 
  localparam int CS2_N_BIT = 1; 
  localparam int DC_BIT    = 2; 

  logic cs1_n_q;
  logic cs2_n_q;
  logic dc_q;

  // OBI Read Path Signals
  logic rvalid_q_internal;
  logic [DATA_WIDTH-1:0] rdata_q_internal;
  logic read_granted_prev_cycle;
  logic [DATA_WIDTH-1:0] data_to_latch_on_grant;
  logic read_to_gpio_ctrl_granted_this_cycle; // Combinational

  assign spi_cs1_no = cs1_n_q;
  assign spi_cs2_no = cs2_n_q;
  assign spi_dc_o   = dc_q;

  logic write_req;
  // logic read_req; // Not directly used, use gnt_for_read_comb
  logic [ADDR_WIDTH-1:0] addr_offset_local; 
  logic [DATA_WIDTH-1:0] reg_wdata_local;
  logic [DATA_WIDTH-1:0] reg_rdata_comb;
  logic grant_w_comb, grant_r_comb;

  assign addr_offset_local = obi_req_i.a.addr[ADDR_WIDTH-1:0]; 
  assign reg_wdata_local = obi_req_i.a.wdata;
  assign write_req       = obi_req_i.req &&  obi_req_i.a.we;
  // assign read_req        = obi_req_i.req && !obi_req_i.a.we; // Replaced by gnt_for_read_comb

  assign grant_w_comb = write_req && (addr_offset_local == GPIO_CTRL_OFFSET);
  assign grant_r_comb = obi_req_i.req && !obi_req_i.a.we && (addr_offset_local == GPIO_CTRL_OFFSET);
  assign obi_rsp_o.gnt = grant_w_comb || grant_r_comb;

  assign read_to_gpio_ctrl_granted_this_cycle = obi_req_i.req && !obi_req_i.a.we && obi_rsp_o.gnt && (addr_offset_local == GPIO_CTRL_OFFSET);


  always_comb begin
    reg_rdata_comb = '0; 
    if (addr_offset_local == GPIO_CTRL_OFFSET) begin // This is fine for combinational path to latch
        reg_rdata_comb = {{(DATA_WIDTH-3){1'b0}}, dc_q, cs2_n_q, cs1_n_q};
    end
  end

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      cs1_n_q   <= 1'b1; 
      cs2_n_q   <= 1'b1; 
      dc_q      <= 1'b0; 
      rvalid_q_internal  <= 1'b0;
      rdata_q_internal   <= '0;
      read_granted_prev_cycle <= 1'b0;
      data_to_latch_on_grant <= '0;
    end else begin
      if (write_req && grant_w_comb) begin // Use combinational grant_w_comb
         if (obi_req_i.a.be[0]) begin 
            cs1_n_q <= reg_wdata_local[CS1_N_BIT];
            cs2_n_q <= reg_wdata_local[CS2_N_BIT];
            dc_q    <= reg_wdata_local[DC_BIT];
            $display("%t [SPI_CTRL_GPIO_WRITE] AddrOff=0x%h, Data=0x%h -> CS1_N=%b, CS2_N=%b, DC=%b",
                     $time, addr_offset_local, reg_wdata_local,
                     reg_wdata_local[CS1_N_BIT], reg_wdata_local[CS2_N_BIT], reg_wdata_local[DC_BIT]);
         end
      end

      // OBI Read Path Logic - Stage 1: Latch data on the cycle a read is granted
      if (read_to_gpio_ctrl_granted_this_cycle) begin
          data_to_latch_on_grant <= reg_rdata_comb;
          read_granted_prev_cycle <= 1'b1;
          $display("%t [SPI_CTRL_READ_SETUP] Read to GPIO_CTRL granted. Latching 0x%h.", $time, reg_rdata_comb);
      end else begin
          read_granted_prev_cycle <= 1'b0;
      end

      // OBI Read Path Logic - Stage 2: Assert rvalid and output latched data in cycle AFTER grant
      if (read_granted_prev_cycle) begin
          rvalid_q_internal <= 1'b1;
          rdata_q_internal  <= data_to_latch_on_grant;
          $display("%t [SPI_CTRL_READ_PATH] Asserting rvalid. rdata = 0x%h", $time, data_to_latch_on_grant);
      end else begin
          rvalid_q_internal <= 1'b0;
          if (!rvalid_q_internal) begin // Avoid driving old data if rvalid was already low
              rdata_q_internal <= '0;
          end
      end
    end
  end

  assign obi_rsp_o.rvalid = rvalid_q_internal;
  assign obi_rsp_o.r.rdata= rdata_q_internal;
  assign obi_rsp_o.r.rid  = obi_req_i.a.aid; 
  assign obi_rsp_o.r.err  = (obi_req_i.req && !obi_rsp_o.gnt);
endmodule

// `timescale 1ns/1ps

// import croc_pkg::*; 

// module user_spi_ctrl (
//   input  logic        clk_i,
//   input  logic        rst_ni,
//   input  sbr_obi_req_t obi_req_i,
//   output sbr_obi_rsp_t obi_rsp_o,
//   output logic spi_cs1_no, 
//   output logic spi_cs2_no, 
//   output logic spi_dc_o    
// );

//   localparam int ADDR_WIDTH = 12; 
//   localparam int DATA_WIDTH = SbrObiCfg.DataWidth; 
//   localparam logic [ADDR_WIDTH-1:0] GPIO_CTRL_OFFSET = 12'h000;
//   localparam int CS1_N_BIT = 0; 
//   localparam int CS2_N_BIT = 1; 
//   localparam int DC_BIT    = 2; 

//   logic cs1_n_q;
//   logic cs2_n_q;
//   logic dc_q;
//   logic rvalid_q;
//   logic [DATA_WIDTH-1:0] rdata_q;
//   logic read_granted_this_cycle; 

//   assign spi_cs1_no = cs1_n_q;
//   assign spi_cs2_no = cs2_n_q;
//   assign spi_dc_o   = dc_q;

//   logic write_req;
//   logic read_req;
//   logic [ADDR_WIDTH-1:0] addr_offset_local; 
//   logic [DATA_WIDTH-1:0] reg_wdata_local;
//   logic [DATA_WIDTH-1:0] reg_rdata_comb;
//   logic grant_w, grant_r;

//   assign addr_offset_local = obi_req_i.a.addr[ADDR_WIDTH-1:0]; 
//   assign reg_wdata_local = obi_req_i.a.wdata;
//   assign write_req       = obi_req_i.req &&  obi_req_i.a.we;
//   assign read_req        = obi_req_i.req && !obi_req_i.a.we;

//   assign grant_w = write_req && (addr_offset_local == GPIO_CTRL_OFFSET);
//   assign grant_r = read_req  && (addr_offset_local == GPIO_CTRL_OFFSET);
//   assign obi_rsp_o.gnt = grant_w || grant_r;

//   always_comb begin
//     reg_rdata_comb = '0; 
//     if (addr_offset_local == GPIO_CTRL_OFFSET) begin
//         reg_rdata_comb = {{(DATA_WIDTH-3){1'b0}}, dc_q, cs2_n_q, cs1_n_q};
//     end
//   end

//   always_ff @(posedge clk_i or negedge rst_ni) begin
//     if (!rst_ni) begin
//       cs1_n_q   <= 1'b1; 
//       cs2_n_q   <= 1'b1; 
//       dc_q      <= 1'b0; 
//       rvalid_q  <= 1'b0;
//       rdata_q   <= '0;
//     end else begin
//       if (write_req && grant_w && addr_offset_local == GPIO_CTRL_OFFSET) begin
//          if (obi_req_i.a.be[0]) begin 
//             cs1_n_q <= reg_wdata_local[CS1_N_BIT];
//             cs2_n_q <= reg_wdata_local[CS2_N_BIT];
//             dc_q    <= reg_wdata_local[DC_BIT];
//             $display("%t [SPI_CTRL_GPIO_WRITE] AddrOff=0x%h, Data=0x%h -> CS1_N=%b, CS2_N=%b, DC=%b",
//                      $time, addr_offset_local, reg_wdata_local,
//                      reg_wdata_local[CS1_N_BIT], reg_wdata_local[CS2_N_BIT], reg_wdata_local[DC_BIT]);
//          end
//       end

//       if (read_granted_this_cycle) begin
//         rdata_q <= reg_rdata_comb;
//       end else if (!rvalid_q) begin 
//         rdata_q <= '0;
//       end
//       rvalid_q <= read_granted_this_cycle; 
//     end
//   end

//   assign read_granted_this_cycle = read_req && obi_rsp_o.gnt;
//   assign obi_rsp_o.rvalid = rvalid_q;
//   assign obi_rsp_o.r.rdata= rdata_q;
//   assign obi_rsp_o.r.rid  = obi_req_i.a.aid; 
//   assign obi_rsp_o.r.err  = (obi_req_i.req && !obi_rsp_o.gnt);
// endmodule
