/*import obi_pkg::*;      // For obi_pkg::ObiDefaultConfig
import cf_math_pkg::*;  // For cf_math_pkg::idx_width

module obi_demux #(
  parameter obi_pkg::obi_cfg_t ObiCfg      = obi_pkg::ObiDefaultConfig,
  parameter type               obi_req_t   = logic, // Type passed from instantiation
  parameter type               obi_rsp_t   = logic, // Type passed from instantiation
  parameter int unsigned       NumMgrPorts = 1,
  parameter int unsigned       NumMaxTrans = 1,
  parameter type               select_t    = logic [((NumMgrPorts > 1) ? $clog2(NumMgrPorts) : 1)-1:0]
) (
  input  logic                       clk_i,
  input  logic                       rst_ni,

  input  select_t                    sbr_port_select_i,
  input  obi_req_t                   sbr_port_req_i,    // Actual type might not have rready
  output obi_rsp_t                   sbr_port_rsp_o,

  output obi_req_t [NumMgrPorts-1:0] mgr_ports_req_o, // Actual type might not have rready
  input  obi_rsp_t [NumMgrPorts-1:0] mgr_ports_rsp_i
);

  if (ObiCfg.Integrity) begin : gen_integrity_err
    $fatal(1, "obi_demux: Integrity mode unimplemented");
  end

  localparam int unsigned CounterWidth = (NumMaxTrans > 0) ? cf_math_pkg::idx_width(NumMaxTrans) : 1;
  localparam bit MODULE_USES_RREADY = ObiCfg.UseRReady;

  // Internal signals declared at module scope
  logic cnt_up_sig;
  logic cnt_down_sig;
  logic overflow_state;
  logic [CounterWidth-1:0] in_flight_count;
  logic sbr_port_rready_internal;

  select_t select_d, select_q;

  logic grant_condition_is_met_for_read; // Modified: only for reads
  logic grant_condition_was_met_q;

  logic forward_this_request;
  logic target_is_current_selection;
  logic no_transactions_in_flight;
  logic one_transaction_is_completing;
  logic sub_conditions_for_forwarding;


  always_comb begin : proc_req_combinational
    select_d = select_q;
    forward_this_request = 1'b0;

    for (int i = 0; i < NumMgrPorts; i++) begin
      mgr_ports_req_o[i].req = 1'b0;
      mgr_ports_req_o[i].a   = '0;
    end

    target_is_current_selection = (sbr_port_select_i == select_q);
    no_transactions_in_flight = (in_flight_count == {CounterWidth{1'b0}});
    one_transaction_is_completing = (in_flight_count == 1'b1 && cnt_down_sig);

    // Writes are allowed if not overflowing. Reads are subject to full conditions.
    if (sbr_port_req_i.a.we) begin // It's a WRITE request
        sub_conditions_for_forwarding = 1'b1; // Writes don't depend on in_flight for forwarding decision here
                                             // as they won't increment the counter.
                                             // They are only blocked by overflow.
    end else begin // It's a READ request
        sub_conditions_for_forwarding = target_is_current_selection || no_transactions_in_flight || one_transaction_is_completing;
    end

    if (!overflow_state && sbr_port_req_i.req && sub_conditions_for_forwarding) begin
      mgr_ports_req_o[sbr_port_select_i].req = sbr_port_req_i.req;
      mgr_ports_req_o[sbr_port_select_i].a   = sbr_port_req_i.a;
      forward_this_request = 1'b1;
    end

    // Grant condition for counting (cnt_up_sig) is now only for READS
    grant_condition_is_met_for_read = forward_this_request && !sbr_port_req_i.a.we && mgr_ports_rsp_i[sbr_port_select_i].gnt;

    // select_d updates if any forwarded request (read or write) is granted
    if (forward_this_request && mgr_ports_rsp_i[sbr_port_select_i].gnt) begin
      select_d = sbr_port_select_i;
    end
  end

  generate
    if (MODULE_USES_RREADY) begin : gen_mgr_rready_driver
      always_comb begin
        for (int i = 0; i < NumMgrPorts; i++) begin
          // lint_off MEMBERNOTFOUND
          mgr_ports_req_o[i].rready = 1'b0;
          // lint_on MEMBERNOTFOUND
        end
        if (forward_this_request) begin
          // lint_off MEMBERNOTFOUND
          mgr_ports_req_o[sbr_port_select_i].rready = sbr_port_req_i.rready;
          // lint_on MEMBERNOTFOUND
        end
      end
    end

    if (MODULE_USES_RREADY) begin : gen_sbr_rready_logic
      // lint_off MEMBERNOTFOUND
      assign sbr_port_rready_internal = sbr_port_req_i.rready;
      // lint_on MEMBERNOTFOUND
    end else begin : gen_no_sbr_rready_logic
      assign sbr_port_rready_internal = 1'b1;
    end
  endgenerate

  // cnt_up_sig is now only for granted READS
  assign cnt_up_sig = grant_condition_is_met_for_read && !grant_condition_was_met_q;
  assign cnt_down_sig = mgr_ports_rsp_i[select_q].rvalid && sbr_port_rready_internal;

  assign sbr_port_rsp_o.gnt    = mgr_ports_rsp_i[sbr_port_select_i].gnt;
  assign sbr_port_rsp_o.r      = mgr_ports_rsp_i[select_q].r;
  assign sbr_port_rsp_o.rvalid = mgr_ports_rsp_i[select_q].rvalid;

  delta_counter #(
    .WIDTH           ( CounterWidth ),
    .STICKY_OVERFLOW ( 1'b0         )
  ) i_counter (
    .clk_i,
    .rst_ni,
    .clear_i   ( 1'b0                           ),
    .en_i      ( cnt_up_sig || (cnt_down_sig && (in_flight_count != {CounterWidth{1'b0}})) ),
    .load_i    ( 1'b0                           ),
    .down_i    ( cnt_down_sig                   ),
    .delta_i   ( {{CounterWidth-1{1'b0}}, 1'b1} ),
    .d_i       ( '0                             ),
    .q_o       ( in_flight_count                ),
    .overflow_o( overflow_state                 )
  );

  always_ff @(posedge clk_i or negedge rst_ni) begin : proc_ff_select_and_grant_cond
    if(!rst_ni) begin
      select_q <= '0;
      grant_condition_was_met_q <= 1'b0;
    end else begin
      select_q <= select_d;
      // grant_condition_was_met_q should track if a READ was granted in the previous cycle
      grant_condition_was_met_q <= grant_condition_is_met_for_read;
    end
  end
*/
 /* // --- Debug Prints ---
  always @(posedge clk_i) begin
    if (!rst_ni) begin
        // Optional: print reset state if helpful
    end else begin
        if (sbr_port_req_i.req || cnt_up_sig || (cnt_down_sig && (in_flight_count != {CounterWidth{1'b0}})) || (select_q !== select_d) || (sbr_port_rsp_o.gnt || sbr_port_rsp_o.rvalid) ) begin
            $display("--- %t [DEMUX_TRACE] ---", $time);
            $display("  Inputs: sbr_req=%b, sbr_sel=%d, sbr_addr=0x%h, sbr_we=%b",
                     sbr_port_req_i.req, sbr_port_select_i, sbr_port_req_i.a.addr, sbr_port_req_i.a.we);
            $display("  MgrRspGnt[sel_q=%d]=%b, MgrRspRvalid[sel_q=%d]=%b",
                     select_q, mgr_ports_rsp_i[select_q].gnt, select_q, mgr_ports_rsp_i[select_q].rvalid);
            if (NumMgrPorts > 0 && sbr_port_select_i < NumMgrPorts) begin 
                 $display("  MgrRspGnt[sbr_sel=%d]=%b, MgrRspRvalid[sbr_sel=%d]=%b",
                     sbr_port_select_i, mgr_ports_rsp_i[sbr_port_select_i].gnt, sbr_port_select_i, mgr_ports_rsp_i[sbr_port_select_i].rvalid);
            end
            $display("  State: select_q=%d (next_sel_d=%d), in_flight_cnt=%d, overflow=%b",
                     select_q, select_d, in_flight_count, overflow_state);
            $display("  Conditions: grant_cond_is_met_for_read=%b, grant_cond_was_met_q=%b",
                     grant_condition_is_met_for_read, grant_condition_was_met_q);
            $display("  CounterCtrl: cnt_up_sig=%b, cnt_down_sig=%b, counter_en=%b",
                     cnt_up_sig, cnt_down_sig, ( cnt_up_sig || (cnt_down_sig && (in_flight_count != {CounterWidth{1'b0}})) ));
            $display("  FwdCond: target_is_curr=%b, no_flight=%b, one_completing=%b => sub_cond=%b (Write: %b)",
                     target_is_current_selection, no_transactions_in_flight, one_transaction_is_completing, sub_conditions_for_forwarding, sbr_port_req_i.a.we);
            $display("  Forwarding: forward_this_req=%b to mgr_port[%d]",
                     forward_this_request, sbr_port_select_i);
            if (forward_this_request) begin
                $display("    -> mgr_ports_req_o[%d].req = %b", sbr_port_select_i, mgr_ports_req_o[sbr_port_select_i].req);
            end
            $display("  Outputs: sbr_rsp_gnt=%b, sbr_rsp_rvalid=%b",
                     sbr_port_rsp_o.gnt, sbr_port_rsp_o.rvalid);
            $display("------------------------------------");
        end
    end
  end
  */

//endmodule


//
///* THis works with user domain spi isolated 
`timescale 1ns/1ps

import obi_pkg::*;      // For obi_pkg::ObiDefaultConfig
import cf_math_pkg::*;  // For cf_math_pkg::idx_width

module obi_demux #(
  parameter obi_pkg::obi_cfg_t ObiCfg      = obi_pkg::ObiDefaultConfig,
  parameter type               obi_req_t   = logic, // Type passed from instantiation
  parameter type               obi_rsp_t   = logic, // Type passed from instantiation
  parameter int unsigned       NumMgrPorts = 1,
  parameter int unsigned       NumMaxTrans = 1,
  parameter type               select_t    = logic [((NumMgrPorts > 1) ? $clog2(NumMgrPorts) : 1)-1:0]
) (
  input  logic                       clk_i,
  input  logic                       rst_ni,

  input  select_t                    sbr_port_select_i,
  input  obi_req_t                   sbr_port_req_i,    // Actual type might not have rready
  output obi_rsp_t                   sbr_port_rsp_o,

  output obi_req_t [NumMgrPorts-1:0] mgr_ports_req_o, // Actual type might not have rready
  input  obi_rsp_t [NumMgrPorts-1:0] mgr_ports_rsp_i
);

  if (ObiCfg.Integrity) begin : gen_integrity_err
    $fatal(1, "obi_demux: Integrity mode unimplemented");
  end

  localparam int unsigned CounterWidth = (NumMaxTrans > 0) ? cf_math_pkg::idx_width(NumMaxTrans) : 1;
  localparam bit MODULE_USES_RREADY = ObiCfg.UseRReady;

  // Internal signals declared at module scope
  logic cnt_up_sig;
  logic cnt_down_sig;
  logic overflow_state;
  logic [CounterWidth-1:0] in_flight_count;
  logic sbr_port_rready_internal;

  select_t select_d, select_q;

  logic grant_condition_is_met;
  logic grant_condition_was_met_q;

  logic forward_this_request;
  logic target_is_current_selection;
  logic no_transactions_in_flight;
  logic one_transaction_is_completing;
  logic sub_conditions_for_forwarding;


  always_comb begin : proc_req_combinational
    select_d = select_q;
    forward_this_request = 1'b0;

    for (int i = 0; i < NumMgrPorts; i++) begin
      mgr_ports_req_o[i].req = 1'b0;
      mgr_ports_req_o[i].a   = '0;
    end

    target_is_current_selection = (sbr_port_select_i == select_q);
    no_transactions_in_flight = (in_flight_count == {CounterWidth{1'b0}});
    // cnt_down_sig is based on select_q and current cycle's rvalid,
    // so this checks if the currently selected channel is completing.
    one_transaction_is_completing = (in_flight_count == 1'b1 && cnt_down_sig);

    sub_conditions_for_forwarding = target_is_current_selection || no_transactions_in_flight || one_transaction_is_completing;

    if (!overflow_state && sbr_port_req_i.req && sub_conditions_for_forwarding) begin
      mgr_ports_req_o[sbr_port_select_i].req = sbr_port_req_i.req;
      mgr_ports_req_o[sbr_port_select_i].a   = sbr_port_req_i.a;
      forward_this_request = 1'b1;
    end

    grant_condition_is_met = forward_this_request && mgr_ports_rsp_i[sbr_port_select_i].gnt;

    if (grant_condition_is_met) begin
      select_d = sbr_port_select_i;
    end
  end

  generate
    if (MODULE_USES_RREADY) begin : gen_mgr_rready_driver
      always_comb begin
        for (int i = 0; i < NumMgrPorts; i++) begin
          // lint_off MEMBERNOTFOUND
          mgr_ports_req_o[i].rready = 1'b0;
          // lint_on MEMBERNOTFOUND
        end
        if (forward_this_request) begin
          // lint_off MEMBERNOTFOUND
          mgr_ports_req_o[sbr_port_select_i].rready = sbr_port_req_i.rready;
          // lint_on MEMBERNOTFOUND
        end
      end
    end

    if (MODULE_USES_RREADY) begin : gen_sbr_rready_logic
      // lint_off MEMBERNOTFOUND
      assign sbr_port_rready_internal = sbr_port_req_i.rready;
      // lint_on MEMBERNOTFOUND
    end else begin : gen_no_sbr_rready_logic
      assign sbr_port_rready_internal = 1'b1;
    end
  endgenerate

  assign cnt_up_sig = grant_condition_is_met && !grant_condition_was_met_q;
  assign cnt_down_sig = mgr_ports_rsp_i[select_q].rvalid && sbr_port_rready_internal;

  assign sbr_port_rsp_o.gnt    = mgr_ports_rsp_i[sbr_port_select_i].gnt;
  assign sbr_port_rsp_o.r      = mgr_ports_rsp_i[select_q].r;
  assign sbr_port_rsp_o.rvalid = mgr_ports_rsp_i[select_q].rvalid;

  delta_counter #(
    .WIDTH           ( CounterWidth ),
    .STICKY_OVERFLOW ( 1'b0         )
  ) i_counter (
    .clk_i,
    .rst_ni,
    .clear_i   ( 1'b0                           ),
    // MODIFIED: Enable counter for up-count, or for down-count only if not already zero.
    .en_i      ( cnt_up_sig || (cnt_down_sig && (in_flight_count != {CounterWidth{1'b0}})) ),
    .load_i    ( 1'b0                           ),
    .down_i    ( cnt_down_sig                   ), // Direction is still cnt_down_sig
    .delta_i   ( {{CounterWidth-1{1'b0}}, 1'b1} ),
    .d_i       ( '0                             ),
    .q_o       ( in_flight_count                ),
    .overflow_o( overflow_state                 )
  );

  always_ff @(posedge clk_i or negedge rst_ni) begin : proc_ff_select_and_grant_cond
    if(!rst_ni) begin
      select_q <= '0;
      grant_condition_was_met_q <= 1'b0;
    end else begin
      select_q <= select_d;
      grant_condition_was_met_q <= grant_condition_is_met;
    end
  end

  // --- Debug Prints ---
  always @(posedge clk_i) begin
    if (!rst_ni) begin
        // Optional: print reset state if helpful
    end else begin
        // Print on any incoming request or significant internal change
        if (sbr_port_req_i.req || cnt_up_sig || (cnt_down_sig && (in_flight_count != {CounterWidth{1'b0}})) || (select_q !== select_d)) begin // Adjusted debug trigger
            //$display("--- %t [DEMUX_TRACE] ---", $time);
            //$display("  Inputs: sbr_req=%b, sbr_sel=%d, sbr_addr=0x%h",
            //         sbr_port_req_i.req, sbr_port_select_i, sbr_port_req_i.a.addr);
            //$display("  MgrRspGnt[sel_q=%d]=%b, MgrRspRvalid[sel_q=%d]=%b",
             //        select_q, mgr_ports_rsp_i[select_q].gnt, select_q, mgr_ports_rsp_i[select_q].rvalid);
            if (NumMgrPorts > 0 && sbr_port_select_i < NumMgrPorts) begin // Check bounds for sbr_port_select_i
                 //$display("  MgrRspGnt[sbr_sel=%d]=%b, MgrRspRvalid[sbr_sel=%d]=%b",
             //        sbr_port_select_i, mgr_ports_rsp_i[sbr_port_select_i].gnt, sbr_port_select_i, mgr_ports_rsp_i[sbr_port_select_i].rvalid);
            end
            //$display("  State: select_q=%d (next_sel_d=%d), in_flight_cnt=%d, overflow=%b",
            //         select_q, select_d, in_flight_count, overflow_state);
            //$display("  Conditions: grant_cond_is_met=%b, grant_cond_was_met_q=%b",
             //        grant_condition_is_met, grant_condition_was_met_q);
            //$display("  CounterCtrl: cnt_up_sig=%b, cnt_down_sig=%b, counter_en=%b",
             //        cnt_up_sig, cnt_down_sig, ( cnt_up_sig || (cnt_down_sig && (in_flight_count != {CounterWidth{1'b0}})) ));
            //$display("  FwdCond: target_is_curr=%b, no_flight=%b, one_completing=%b => sub_cond=%b",
             //        target_is_current_selection, no_transactions_in_flight, one_transaction_is_completing, sub_conditions_for_forwarding);
            //$display("  Forwarding: forward_this_req=%b to mgr_port[%d]",
             //        forward_this_request, sbr_port_select_i);
            if (forward_this_request) begin
                //$display("    -> mgr_ports_req_o[%d].req = %b", sbr_port_select_i, mgr_ports_req_o[sbr_port_select_i].req);
            end
            //$display("  Outputs: sbr_rsp_gnt=%b, sbr_rsp_rvalid=%b",
                     //sbr_port_rsp_o.gnt, sbr_port_rsp_o.rvalid);
            //$display("------------------------------------");
        end
    end
  end

endmodule

//*/
/*//this version worked for isolated spi in user domain testing 
`timescale 1ns/1ps

import obi_pkg::*;
import cf_math_pkg::*;

module obi_demux #(
  parameter obi_pkg::obi_cfg_t ObiCfg      = obi_pkg::ObiDefaultConfig,
  parameter type               obi_req_t   = logic,
  parameter type               obi_rsp_t   = logic,
  parameter int unsigned       NumMgrPorts = 1, // Default to 1 to avoid $clog2(0)
  parameter int unsigned       NumMaxTrans = 1,
  parameter type               select_t    = logic [((NumMgrPorts>0)?$clog2(NumMgrPorts):0)-1:0] // Handle NumMgrPorts=0
) (
  input  logic                       clk_i,
  input  logic                       rst_ni,

  input  select_t                    sbr_port_select_i,
  input  obi_req_t                   sbr_port_req_i,
  output obi_rsp_t                   sbr_port_rsp_o,

  output obi_req_t [NumMgrPorts-1:0] mgr_ports_req_o,
  input  obi_rsp_t [NumMgrPorts-1:0] mgr_ports_rsp_i
);

  if (ObiCfg.Integrity) begin : gen_integrity_err
    $fatal(1, "obi_demux: Integrity mode unimplemented");
  end

  localparam int unsigned CounterWidth = (NumMaxTrans > 0) ? cf_math_pkg::idx_width(NumMaxTrans) : 1;

  logic cnt_up, cnt_down, overflow;
  logic [CounterWidth-1:0] in_flight;
  logic sbr_port_rready;

  select_t select_d, select_q;

  // Debug signals for forwarding condition
  logic is_same_target_dbg;
  logic no_flight_dbg;
  logic one_completing_dbg;
  logic forward_ok_dbg;

  always_comb begin : proc_req
    // Default assignments
    select_d = select_q;
    cnt_up = 1'b0;
    for (int i = 0; i < NumMgrPorts; i++) begin
      mgr_ports_req_o[i].req = 1'b0;
      mgr_ports_req_o[i].a   = '0;
    end

    // Calculate forwarding condition components for display and logic
    is_same_target_dbg = (sbr_port_select_i == select_q);
    no_flight_dbg      = (in_flight == '0);
    one_completing_dbg = (in_flight == 1 && cnt_down); // cnt_down is from previous cycle's rvalid
    forward_ok_dbg     = is_same_target_dbg || no_flight_dbg || one_completing_dbg;

    // Request Forwarding Logic
    if (!overflow) begin
      if (forward_ok_dbg) begin
        mgr_ports_req_o[sbr_port_select_i].req = sbr_port_req_i.req;
        mgr_ports_req_o[sbr_port_select_i].a   = sbr_port_req_i.a;
      end
    end

    // Calculate select_d and cnt_up based on forwarded request and grant
    if (mgr_ports_req_o[sbr_port_select_i].req && mgr_ports_rsp_i[sbr_port_select_i].gnt) begin
      select_d = sbr_port_select_i;
      cnt_up = 1'b1;
    end

    // Debug Display: Trigger when an incoming request to the demux is active
    if (sbr_port_req_i.req) begin
        $display("%t [DEMUX_DBG] InReq=%b, InSel=%d | State: sel_q=%d, in_flight=%d, cnt_down(prev)=%b, overflow=%b",
                 $time, sbr_port_req_i.req, sbr_port_select_i, select_q, in_flight, cnt_down, overflow);
        $display("               Cond: same_target=%b, no_flight=%b, one_completing=%b => forward_ok=%b",
                 is_same_target_dbg, no_flight_dbg, one_completing_dbg, forward_ok_dbg);
        $display("               Out: mgr_req[%d].req=%b, select_d=%d, cnt_up=%b",
                 sbr_port_select_i, mgr_ports_req_o[sbr_port_select_i].req, select_d, cnt_up);
    end
  end

  // Response path
  assign sbr_port_rsp_o.gnt    = mgr_ports_rsp_i[sbr_port_select_i].gnt;
  assign sbr_port_rsp_o.r      = mgr_ports_rsp_i[select_q].r;
  assign sbr_port_rsp_o.rvalid = mgr_ports_rsp_i[select_q].rvalid;

  // RReady logic
  if (ObiCfg.UseRReady) begin : gen_rready
     assign sbr_port_rready = sbr_port_req_i.rready;
     for (genvar i = 0; i < NumMgrPorts; i++) begin : gen_rready_assign_loop
       assign mgr_ports_req_o[i].rready = sbr_port_req_i.rready;
     end
  end else begin : gen_no_rready
    assign sbr_port_rready = 1'b1;
  end

  // Calculate counter decrement signal
  assign cnt_down = mgr_ports_rsp_i[select_q].rvalid && sbr_port_rready;

  // Transaction counter
  delta_counter #(
    .WIDTH           ( CounterWidth ),
    .STICKY_OVERFLOW ( 1'b0         )
  ) i_counter (
    .clk_i, .rst_ni,
    .clear_i   ( 1'b0                           ),
    .en_i      ( cnt_up ^ cnt_down              ), // Enable if cnt_up or cnt_down (but not both)
    .load_i    ( 1'b0                           ),
    .down_i    ( cnt_down                       ), // Direction of count
    .delta_i   ( {{CounterWidth-1{1'b0}}, 1'b1} ), // Amount to count by
    .d_i       ( '0                             ),
    .q_o       ( in_flight                      ),
    .overflow_o( overflow                       )
  );

  // Register for select signal used in response path
  always_ff @(posedge clk_i or negedge rst_ni) begin : proc_select
    if(!rst_ni) begin
      select_q <= '0;
    end else begin
      select_q <= select_d;
    end
  end

endmodule
*/
/*


// Copyright 2023 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51

// Michael Rogenmoser <michaero@iis.ee.ethz.ch>

module obi_demux #(
  /// The OBI configuration for all ports.
  parameter obi_pkg::obi_cfg_t ObiCfg      = obi_pkg::ObiDefaultConfig,
  /// The request struct for all ports.
  parameter type               obi_req_t   = logic,
  /// The response struct for all ports.
  parameter type               obi_rsp_t   = logic,
  /// The number of manager ports.
  parameter int unsigned       NumMgrPorts = 32'd0,
  /// The maximum number of outstanding transactions.
  parameter int unsigned       NumMaxTrans = 32'd0,
  /// The type of the port select signal.
  parameter type               select_t    = logic [$clog2(NumMgrPorts)-1:0]
) (
  input  logic                       clk_i,
  input  logic                       rst_ni,

  input  select_t                    sbr_port_select_i,
  input  obi_req_t                   sbr_port_req_i,
  output obi_rsp_t                   sbr_port_rsp_o,

  output obi_req_t [NumMgrPorts-1:0] mgr_ports_req_o,
  input  obi_rsp_t [NumMgrPorts-1:0] mgr_ports_rsp_i
);

  if (ObiCfg.Integrity) begin : gen_integrity_err
    $fatal(1, "unimplemented");
  end

  // stall requests to ensure in-order behavior (could be handled differently with rready)
  localparam int unsigned CounterWidth = cf_math_pkg::idx_width(NumMaxTrans);

  logic cnt_up, cnt_down, overflow;
  logic [CounterWidth-1:0] in_flight;
  logic sbr_port_rready;

  select_t select_d, select_q;

  always_comb begin : proc_req
    select_d = select_q;
    cnt_up = 1'b0;
    for (int i = 0; i < NumMgrPorts; i++) begin
      mgr_ports_req_o[i].req = 1'b0;
      mgr_ports_req_o[i].a   = '0;
    end

    if (!overflow) begin
      if (sbr_port_select_i == select_q || in_flight == '0 || (in_flight == 1 && cnt_down)) begin
        mgr_ports_req_o[sbr_port_select_i].req = sbr_port_req_i.req;
        mgr_ports_req_o[sbr_port_select_i].a = sbr_port_req_i.a;
      end
    end

    if (mgr_ports_req_o[sbr_port_select_i].req && mgr_ports_rsp_i[sbr_port_select_i].gnt) begin
      select_d = sbr_port_select_i;
      cnt_up = 1'b1;
    end
  end

  assign sbr_port_rsp_o.gnt    = mgr_ports_rsp_i[sbr_port_select_i].gnt;
  assign sbr_port_rsp_o.r      = mgr_ports_rsp_i[select_q].r;
  assign sbr_port_rsp_o.rvalid = mgr_ports_rsp_i[select_q].rvalid;

  if (ObiCfg.UseRReady) begin : gen_rready
    assign sbr_port_rready = sbr_port_req_i.rready;
    for (genvar i = 0; i < NumMgrPorts; i++) begin : gen_rready
      assign mgr_ports_req_o[i].rready = sbr_port_req_i.rready;
    end
  end else begin : gen_no_rready
    assign sbr_port_rready = 1'b1;
  end

  assign cnt_down = mgr_ports_rsp_i[select_q].rvalid && sbr_port_rready;

  delta_counter #(
    .WIDTH           ( CounterWidth ),
    .STICKY_OVERFLOW ( 1'b0         )
  ) i_counter (
    .clk_i,
    .rst_ni,

    .clear_i   ( 1'b0                           ),
    .en_i      ( cnt_up ^ cnt_down              ),
    .load_i    ( 1'b0                           ),
    .down_i    ( cnt_down                       ),
    .delta_i   ( {{CounterWidth-1{1'b0}}, 1'b1} ),
    .d_i       ( '0                             ),
    .q_o       ( in_flight                      ),
    .overflow_o( overflow                       )
  );

  always_ff @(posedge clk_i or negedge rst_ni) begin : proc_select
    if(!rst_ni) begin
      select_q <= '0;
    end else begin
      select_q <= select_d;
    end
  end

endmodule

`include "obi/typedef.svh"
`include "obi/assign.svh"

module obi_demux_intf #(
  /// The OBI configuration for all ports.
  parameter obi_pkg::obi_cfg_t ObiCfg      = obi_pkg::ObiDefaultConfig,
  /// The number of manager ports.
  parameter int unsigned       NumMgrPorts = 32'd0,
  /// The maximum number of outstanding transactions.
  parameter int unsigned       NumMaxTrans = 32'd0,
  /// The type of the port select signal.
  parameter type               select_t    = logic [$clog2(NumMgrPorts)-1:0]
) (
  input logic         clk_i,
  input logic         rst_ni,

  input select_t      sbr_port_select_i,
  OBI_BUS.Subordinate sbr_port,

  OBI_BUS.Manager     mgr_ports [NumMgrPorts]
);

  `OBI_TYPEDEF_ALL(obi, ObiCfg)

  obi_req_t sbr_port_req;
  obi_rsp_t sbr_port_rsp;

  obi_req_t [NumMgrPorts-1:0] mgr_ports_req;
  obi_rsp_t [NumMgrPorts-1:0] mgr_ports_rsp;

  `OBI_ASSIGN_TO_REQ(sbr_port_req, sbr_port, ObiCfg)
  `OBI_ASSIGN_FROM_RSP(sbr_port, sbr_port_rsp, ObiCfg)

  for (genvar i = 0; i < NumMgrPorts; i++) begin : gen_mgr_ports_assign
    `OBI_ASSIGN_FROM_REQ(mgr_ports[i], mgr_ports_req[i], ObiCfg)
    `OBI_ASSIGN_TO_RSP(mgr_ports_rsp[i], mgr_ports[i], ObiCfg)
  end

  obi_demux #(
    .ObiCfg      ( ObiCfg      ),
    .obi_req_t   ( obi_req_t   ),
    .obi_rsp_t   ( obi_rsp_t   ),
    .NumMgrPorts ( NumMgrPorts ),
    .NumMaxTrans ( NumMaxTrans ),
    .select_t    ( select_t    )
  ) i_obi_demux (
    .clk_i,
    .rst_ni,
    .sbr_port_select_i,
    .sbr_port_req_i   ( sbr_port_req  ),
    .sbr_port_rsp_o   ( sbr_port_rsp  ),
    .mgr_ports_req_o  ( mgr_ports_req ),
    .mgr_ports_rsp_i  ( mgr_ports_rsp )
  );

endmodule

*/