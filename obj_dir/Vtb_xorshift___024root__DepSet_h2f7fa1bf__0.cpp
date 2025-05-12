// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_xorshift.h for the primary calling header

#include "Vtb_xorshift__pch.h"
#include "Vtb_xorshift__Syms.h"
#include "Vtb_xorshift___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_xorshift___024root___eval_initial__TOP__Vtiming__1(Vtb_xorshift___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xorshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xorshift___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_xorshift__DOT__read_obi__0__r_addr;
    __Vtask_tb_xorshift__DOT__read_obi__0__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_xorshift__DOT__read_obi__0__r_data_val;
    __Vtask_tb_xorshift__DOT__read_obi__0__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_xorshift__DOT__read_obi__0__r_err;
    __Vtask_tb_xorshift__DOT__read_obi__0__r_err = 0;
    CData/*0:0*/ __Vtask_tb_xorshift__DOT__read_obi__0__expect_grant;
    __Vtask_tb_xorshift__DOT__read_obi__0__expect_grant = 0;
    IData/*31:0*/ __Vtask_tb_xorshift__DOT__read_obi__0__timeout_count_gnt;
    __Vtask_tb_xorshift__DOT__read_obi__0__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_xorshift__DOT__read_obi__0__timeout_count_rvalid;
    __Vtask_tb_xorshift__DOT__read_obi__0__timeout_count_rvalid = 0;
    CData/*0:0*/ __Vtask_tb_xorshift__DOT__read_obi__0__grant_received;
    __Vtask_tb_xorshift__DOT__read_obi__0__grant_received = 0;
    IData/*31:0*/ __Vtask_tb_xorshift__DOT__write_obi__1__w_addr;
    __Vtask_tb_xorshift__DOT__write_obi__1__w_addr = 0;
    IData/*31:0*/ __Vtask_tb_xorshift__DOT__write_obi__1__w_data;
    __Vtask_tb_xorshift__DOT__write_obi__1__w_data = 0;
    CData/*3:0*/ __Vtask_tb_xorshift__DOT__write_obi__1__w_be;
    __Vtask_tb_xorshift__DOT__write_obi__1__w_be = 0;
    IData/*31:0*/ __Vtask_tb_xorshift__DOT__write_obi__1__timeout_count;
    __Vtask_tb_xorshift__DOT__write_obi__1__timeout_count = 0;
    IData/*31:0*/ __Vtask_tb_xorshift__DOT__read_obi__2__r_addr;
    __Vtask_tb_xorshift__DOT__read_obi__2__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_xorshift__DOT__read_obi__2__r_data_val;
    __Vtask_tb_xorshift__DOT__read_obi__2__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_xorshift__DOT__read_obi__2__r_err;
    __Vtask_tb_xorshift__DOT__read_obi__2__r_err = 0;
    CData/*0:0*/ __Vtask_tb_xorshift__DOT__read_obi__2__expect_grant;
    __Vtask_tb_xorshift__DOT__read_obi__2__expect_grant = 0;
    IData/*31:0*/ __Vtask_tb_xorshift__DOT__read_obi__2__timeout_count_gnt;
    __Vtask_tb_xorshift__DOT__read_obi__2__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_xorshift__DOT__read_obi__2__timeout_count_rvalid;
    __Vtask_tb_xorshift__DOT__read_obi__2__timeout_count_rvalid = 0;
    CData/*0:0*/ __Vtask_tb_xorshift__DOT__read_obi__2__grant_received;
    __Vtask_tb_xorshift__DOT__read_obi__2__grant_received = 0;
    IData/*31:0*/ __Vtask_tb_xorshift__DOT__write_obi__3__w_addr;
    __Vtask_tb_xorshift__DOT__write_obi__3__w_addr = 0;
    IData/*31:0*/ __Vtask_tb_xorshift__DOT__write_obi__3__w_data;
    __Vtask_tb_xorshift__DOT__write_obi__3__w_data = 0;
    CData/*3:0*/ __Vtask_tb_xorshift__DOT__write_obi__3__w_be;
    __Vtask_tb_xorshift__DOT__write_obi__3__w_be = 0;
    IData/*31:0*/ __Vtask_tb_xorshift__DOT__write_obi__3__timeout_count;
    __Vtask_tb_xorshift__DOT__write_obi__3__timeout_count = 0;
    IData/*31:0*/ __Vtask_tb_xorshift__DOT__read_obi__4__r_addr;
    __Vtask_tb_xorshift__DOT__read_obi__4__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_xorshift__DOT__read_obi__4__r_data_val;
    __Vtask_tb_xorshift__DOT__read_obi__4__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_xorshift__DOT__read_obi__4__r_err;
    __Vtask_tb_xorshift__DOT__read_obi__4__r_err = 0;
    CData/*0:0*/ __Vtask_tb_xorshift__DOT__read_obi__4__expect_grant;
    __Vtask_tb_xorshift__DOT__read_obi__4__expect_grant = 0;
    IData/*31:0*/ __Vtask_tb_xorshift__DOT__read_obi__4__timeout_count_gnt;
    __Vtask_tb_xorshift__DOT__read_obi__4__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_xorshift__DOT__read_obi__4__timeout_count_rvalid;
    __Vtask_tb_xorshift__DOT__read_obi__4__timeout_count_rvalid = 0;
    CData/*0:0*/ __Vtask_tb_xorshift__DOT__read_obi__4__grant_received;
    __Vtask_tb_xorshift__DOT__read_obi__4__grant_received = 0;
    IData/*31:0*/ __Vtask_tb_xorshift__DOT__read_obi__5__r_addr;
    __Vtask_tb_xorshift__DOT__read_obi__5__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_xorshift__DOT__read_obi__5__r_data_val;
    __Vtask_tb_xorshift__DOT__read_obi__5__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_xorshift__DOT__read_obi__5__r_err;
    __Vtask_tb_xorshift__DOT__read_obi__5__r_err = 0;
    CData/*0:0*/ __Vtask_tb_xorshift__DOT__read_obi__5__expect_grant;
    __Vtask_tb_xorshift__DOT__read_obi__5__expect_grant = 0;
    IData/*31:0*/ __Vtask_tb_xorshift__DOT__read_obi__5__timeout_count_gnt;
    __Vtask_tb_xorshift__DOT__read_obi__5__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_xorshift__DOT__read_obi__5__timeout_count_rvalid;
    __Vtask_tb_xorshift__DOT__read_obi__5__timeout_count_rvalid = 0;
    CData/*0:0*/ __Vtask_tb_xorshift__DOT__read_obi__5__grant_received;
    __Vtask_tb_xorshift__DOT__read_obi__5__grant_received = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x68696674U;
    __Vtemp_1[2U] = 0x786f7273U;
    __Vtemp_1[3U] = 0x74625fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_xorshift__DOT__rst_ni = 0U;
    VL_WRITEF_NX("%t : TB: Asserting Reset\n",0,64,
                 VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "rtl/user_domain/tb_xorshift.sv", 
                                         167);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xorshift__DOT__rst_ni = 1U;
    VL_WRITEF_NX("%t : TB: Deasserting Reset\n",0,64,
                 VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xorshift.clk_i)", 
                                                         "rtl/user_domain/tb_xorshift.sv", 
                                                         170);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%t : TB: Starting OBI PRNG Test Sequence...\n--- Test 1: Read initial PRN ---\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    __Vtask_tb_xorshift__DOT__read_obi__0__expect_grant = 1U;
    __Vtask_tb_xorshift__DOT__read_obi__0__r_addr = 4U;
    __Vtask_tb_xorshift__DOT__read_obi__0__timeout_count_gnt = 0U;
    __Vtask_tb_xorshift__DOT__read_obi__0__timeout_count_rvalid = 0U;
    __Vtask_tb_xorshift__DOT__read_obi__0__grant_received = 0U;
    co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xorshift.clk_i)", 
                                                         "rtl/user_domain/tb_xorshift.sv", 
                                                         97);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] 
        = (1U | vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U]);
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U] 
        = ((0x1fU & vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U]) 
           | ((IData)((0xfULL | ((QData)((IData)(__Vtask_tb_xorshift__DOT__read_obi__0__r_addr)) 
                                 << 5U))) << 5U));
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[2U] 
        = (0x3ffU & (((IData)((0xfULL | ((QData)((IData)(__Vtask_tb_xorshift__DOT__read_obi__0__r_addr)) 
                                         << 5U))) >> 0x1bU) 
                     | ((IData)(((0xfULL | ((QData)((IData)(__Vtask_tb_xorshift__DOT__read_obi__0__r_addr)) 
                                            << 5U)) 
                                 >> 0x20U)) << 5U)));
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] 
        = ((0xffffffe3U & vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U]) 
           | (0x1cU & (VL_MODDIVS_III(32, __Vtask_tb_xorshift__DOT__read_obi__0__timeout_count_gnt, (IData)(2U)) 
                       << 2U)));
    vlSelfRef.tb_xorshift__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x (Expect Grant: %b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_xorshift__DOT__read_obi__0__r_addr,
                 1,(IData)(__Vtask_tb_xorshift__DOT__read_obi__0__expect_grant));
    Verilated::runFlushCallbacks();
    if (__Vtask_tb_xorshift__DOT__read_obi__0__expect_grant) {
        while (((~ (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                            >> 1U))) & VL_GTS_III(32, 0x7d0U, __Vtask_tb_xorshift__DOT__read_obi__0__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_xorshift.clk_i)", 
                                                                 "rtl/user_domain/tb_xorshift.sv", 
                                                                 109);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_xorshift__DOT__read_obi__0__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_xorshift__DOT__read_obi__0__timeout_count_gnt);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_xorshift__DOT__read_obi__0__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_xorshift.sv:113: Assertion failed in %Ntb_xorshift.read_obi: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_xorshift__DOT__read_obi__0__r_addr,
                         1,(1U & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                                          >> 1U))));
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_xorshift.sv", 113, "");
            VL_FINISH_MT("rtl/user_domain/tb_xorshift.sv", 114, "");
        }
        __Vtask_tb_xorshift__DOT__read_obi__0__grant_received = 1U;
        VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_xorshift__DOT__read_obi__0__r_addr,
                     1,(1U & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                                      >> 1U))));
        Verilated::runFlushCallbacks();
    } else {
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (VL_UNLIKELY((1U & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                                       >> 1U))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_xorshift.sv:122: Assertion failed in %Ntb_xorshift.read_obi: %t : TB: Expected NO grant for invalid addr 0x%x, but received grant. GNT=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_xorshift__DOT__read_obi__0__r_addr,
                         1,(1U & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                                          >> 1U))));
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_xorshift.sv", 122, "");
            VL_FINISH_MT("rtl/user_domain/tb_xorshift.sv", 123, "");
        }
        __Vtask_tb_xorshift__DOT__read_obi__0__grant_received = 0U;
        VL_WRITEF_NX("%t : TB: OBI Read No Grant (as expected for invalid addr): Addr=0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_xorshift__DOT__read_obi__0__r_addr,
                     1,(1U & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                                      >> 1U))));
        Verilated::runFlushCallbacks();
    }
    co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xorshift.clk_i)", 
                                                         "rtl/user_domain/tb_xorshift.sv", 
                                                         129);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] 
        = (0xfffffffeU & vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U]);
    vlSelfRef.tb_xorshift__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    if (VL_UNLIKELY(__Vtask_tb_xorshift__DOT__read_obi__0__grant_received)) {
        while (((~ (IData)(vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut)) 
                & VL_GTS_III(32, 0x7d0U, __Vtask_tb_xorshift__DOT__read_obi__0__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_xorshift.clk_i)", 
                                                                 "rtl/user_domain/tb_xorshift.sv", 
                                                                 136);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_xorshift__DOT__read_obi__0__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_xorshift__DOT__read_obi__0__timeout_count_rvalid);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_xorshift__DOT__read_obi__0__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_xorshift.sv:140: Assertion failed in %Ntb_xorshift.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_xorshift__DOT__read_obi__0__r_addr,
                         1,(1U & (IData)(vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut)));
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_xorshift.sv", 140, "");
            VL_FINISH_MT("rtl/user_domain/tb_xorshift.sv", 141, "");
        }
        __Vtask_tb_xorshift__DOT__read_obi__0__r_data_val 
            = (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                       >> 7U));
        __Vtask_tb_xorshift__DOT__read_obi__0__r_err 
            = (1U & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                             >> 3U)));
        VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_xorshift__DOT__read_obi__0__r_addr,
                     32,__Vtask_tb_xorshift__DOT__read_obi__0__r_data_val,
                     1,(IData)(__Vtask_tb_xorshift__DOT__read_obi__0__r_err),
                     1,(1U & (IData)(vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut)));
        Verilated::runFlushCallbacks();
    } else {
        __Vtask_tb_xorshift__DOT__read_obi__0__r_data_val = 0U;
        __Vtask_tb_xorshift__DOT__read_obi__0__r_err = 1U;
    }
    co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xorshift.clk_i)", 
                                                         "rtl/user_domain/tb_xorshift.sv", 
                                                         152);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] = 0U;
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U] = 0U;
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[2U] = 0U;
    vlSelfRef.tb_xorshift__DOT__unnamedblk1__DOT__prn_val 
        = __Vtask_tb_xorshift__DOT__read_obi__0__r_data_val;
    vlSelfRef.tb_xorshift__DOT__unnamedblk1__DOT__read_error 
        = __Vtask_tb_xorshift__DOT__read_obi__0__r_err;
    if (VL_UNLIKELY(vlSelfRef.tb_xorshift__DOT__unnamedblk1__DOT__read_error)) {
        VL_WRITEF_NX("[%0t] %%Error: tb_xorshift.sv:176: Assertion failed in %Ntb_xorshift.unnamedblk1: Test 1 Read Error!\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_xorshift.sv", 176, "");
    }
    VL_WRITEF_NX("%t : TB: Initial PRN = 0x%x (Seed was 0x12345678, current_prn_tb=0x%x)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_xorshift__DOT__unnamedblk1__DOT__prn_val,
                 32,vlSelfRef.tb_xorshift__DOT__dut__DOT__prng_state_q);
    Verilated::runFlushCallbacks();
    if (VL_UNLIKELY((0x12345678U != vlSelfRef.tb_xorshift__DOT__unnamedblk1__DOT__prn_val))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_xorshift.sv:178: %Ntb_xorshift.unnamedblk1: Initial PRN 0x%x does not match seed 0x12345678\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     32,vlSelfRef.tb_xorshift__DOT__unnamedblk1__DOT__prn_val);
        Verilated::runFlushCallbacks();
    }
    VL_WRITEF_NX("--- Test 2: Trigger PRNG and read ---\n",0);
    Verilated::runFlushCallbacks();
    __Vtask_tb_xorshift__DOT__write_obi__1__w_be = 1U;
    __Vtask_tb_xorshift__DOT__write_obi__1__w_data = 1U;
    __Vtask_tb_xorshift__DOT__write_obi__1__w_addr = 0U;
    __Vtask_tb_xorshift__DOT__write_obi__1__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xorshift.clk_i)", 
                                                         "rtl/user_domain/tb_xorshift.sv", 
                                                         58);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] 
        = (1U | vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U]);
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U] 
        = ((0x1ffU & vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U]) 
           | ((IData)((1ULL | ((QData)((IData)(__Vtask_tb_xorshift__DOT__write_obi__1__w_addr)) 
                               << 1U))) << 9U));
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[2U] 
        = (0x3ffU & (((IData)((1ULL | ((QData)((IData)(__Vtask_tb_xorshift__DOT__write_obi__1__w_addr)) 
                                       << 1U))) >> 0x17U) 
                     | ((IData)(((1ULL | ((QData)((IData)(__Vtask_tb_xorshift__DOT__write_obi__1__w_addr)) 
                                          << 1U)) >> 0x20U)) 
                        << 9U)));
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] 
        = ((3U & vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_xorshift__DOT__write_obi__1__w_be)) 
                        << 0x23U) | (((QData)((IData)(__Vtask_tb_xorshift__DOT__write_obi__1__w_data)) 
                                      << 3U) | (QData)((IData)(
                                                               (7U 
                                                                & VL_MODDIVS_III(32, __Vtask_tb_xorshift__DOT__write_obi__1__timeout_count, (IData)(2U)))))))) 
              << 2U));
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U] 
        = ((0xfffffe00U & vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U]) 
           | (((IData)((((QData)((IData)(__Vtask_tb_xorshift__DOT__write_obi__1__w_be)) 
                         << 0x23U) | (((QData)((IData)(__Vtask_tb_xorshift__DOT__write_obi__1__w_data)) 
                                       << 3U) | (QData)((IData)(
                                                                (7U 
                                                                 & VL_MODDIVS_III(32, __Vtask_tb_xorshift__DOT__write_obi__1__timeout_count, (IData)(2U)))))))) 
               >> 0x1eU) | ((IData)(((((QData)((IData)(__Vtask_tb_xorshift__DOT__write_obi__1__w_be)) 
                                       << 0x23U) | 
                                      (((QData)((IData)(__Vtask_tb_xorshift__DOT__write_obi__1__w_data)) 
                                        << 3U) | (QData)((IData)(
                                                                 (7U 
                                                                  & VL_MODDIVS_III(32, __Vtask_tb_xorshift__DOT__write_obi__1__timeout_count, (IData)(2U))))))) 
                                     >> 0x20U)) << 2U)));
    vlSelfRef.tb_xorshift__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Write Req : Addr=0x%x, Data=0x%x, BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_xorshift__DOT__write_obi__1__w_addr,
                 32,__Vtask_tb_xorshift__DOT__write_obi__1__w_data,
                 4,(IData)(__Vtask_tb_xorshift__DOT__write_obi__1__w_be));
    Verilated::runFlushCallbacks();
    while (((~ (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                        >> 1U))) & VL_GTS_III(32, 0x7d0U, __Vtask_tb_xorshift__DOT__write_obi__1__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             69);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_xorshift__DOT__write_obi__1__timeout_count 
            = ((IData)(1U) + __Vtask_tb_xorshift__DOT__write_obi__1__timeout_count);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_xorshift__DOT__write_obi__1__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_xorshift.sv:73: Assertion failed in %Ntb_xorshift.write_obi: %t : TB: Timeout waiting for OBI grant during write to 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_xorshift__DOT__write_obi__1__w_addr,
                     1,(1U & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                                      >> 1U))));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_xorshift.sv", 73, "");
        VL_FINISH_MT("rtl/user_domain/tb_xorshift.sv", 74, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Write Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_xorshift__DOT__write_obi__1__w_addr,
                 1,(1U & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                                  >> 1U))));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xorshift.clk_i)", 
                                                         "rtl/user_domain/tb_xorshift.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] 
        = (0xfffffffeU & vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U]);
    vlSelfRef.tb_xorshift__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Write Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xorshift.clk_i)", 
                                                         "rtl/user_domain/tb_xorshift.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] = 0U;
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U] = 0U;
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[2U] = 0U;
    co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xorshift.clk_i)", 
                                                         "rtl/user_domain/tb_xorshift.sv", 
                                                         182);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_xorshift__DOT__read_obi__2__expect_grant = 1U;
    __Vtask_tb_xorshift__DOT__read_obi__2__r_addr = 4U;
    __Vtask_tb_xorshift__DOT__read_obi__2__timeout_count_gnt = 0U;
    __Vtask_tb_xorshift__DOT__read_obi__2__timeout_count_rvalid = 0U;
    __Vtask_tb_xorshift__DOT__read_obi__2__grant_received = 0U;
    co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xorshift.clk_i)", 
                                                         "rtl/user_domain/tb_xorshift.sv", 
                                                         97);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] 
        = (1U | vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U]);
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U] 
        = ((0x1fU & vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U]) 
           | ((IData)((0xfULL | ((QData)((IData)(__Vtask_tb_xorshift__DOT__read_obi__2__r_addr)) 
                                 << 5U))) << 5U));
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[2U] 
        = (0x3ffU & (((IData)((0xfULL | ((QData)((IData)(__Vtask_tb_xorshift__DOT__read_obi__2__r_addr)) 
                                         << 5U))) >> 0x1bU) 
                     | ((IData)(((0xfULL | ((QData)((IData)(__Vtask_tb_xorshift__DOT__read_obi__2__r_addr)) 
                                            << 5U)) 
                                 >> 0x20U)) << 5U)));
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] 
        = ((0xffffffe3U & vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U]) 
           | (0x1cU & (VL_MODDIVS_III(32, __Vtask_tb_xorshift__DOT__read_obi__2__timeout_count_gnt, (IData)(2U)) 
                       << 2U)));
    vlSelfRef.tb_xorshift__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x (Expect Grant: %b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_xorshift__DOT__read_obi__2__r_addr,
                 1,(IData)(__Vtask_tb_xorshift__DOT__read_obi__2__expect_grant));
    Verilated::runFlushCallbacks();
    if (__Vtask_tb_xorshift__DOT__read_obi__2__expect_grant) {
        while (((~ (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                            >> 1U))) & VL_GTS_III(32, 0x7d0U, __Vtask_tb_xorshift__DOT__read_obi__2__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_xorshift.clk_i)", 
                                                                 "rtl/user_domain/tb_xorshift.sv", 
                                                                 109);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_xorshift__DOT__read_obi__2__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_xorshift__DOT__read_obi__2__timeout_count_gnt);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_xorshift__DOT__read_obi__2__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_xorshift.sv:113: Assertion failed in %Ntb_xorshift.read_obi: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_xorshift__DOT__read_obi__2__r_addr,
                         1,(1U & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                                          >> 1U))));
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_xorshift.sv", 113, "");
            VL_FINISH_MT("rtl/user_domain/tb_xorshift.sv", 114, "");
        }
        __Vtask_tb_xorshift__DOT__read_obi__2__grant_received = 1U;
        VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_xorshift__DOT__read_obi__2__r_addr,
                     1,(1U & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                                      >> 1U))));
        Verilated::runFlushCallbacks();
    } else {
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (VL_UNLIKELY((1U & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                                       >> 1U))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_xorshift.sv:122: Assertion failed in %Ntb_xorshift.read_obi: %t : TB: Expected NO grant for invalid addr 0x%x, but received grant. GNT=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_xorshift__DOT__read_obi__2__r_addr,
                         1,(1U & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                                          >> 1U))));
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_xorshift.sv", 122, "");
            VL_FINISH_MT("rtl/user_domain/tb_xorshift.sv", 123, "");
        }
        __Vtask_tb_xorshift__DOT__read_obi__2__grant_received = 0U;
        VL_WRITEF_NX("%t : TB: OBI Read No Grant (as expected for invalid addr): Addr=0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_xorshift__DOT__read_obi__2__r_addr,
                     1,(1U & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                                      >> 1U))));
        Verilated::runFlushCallbacks();
    }
    co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xorshift.clk_i)", 
                                                         "rtl/user_domain/tb_xorshift.sv", 
                                                         129);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] 
        = (0xfffffffeU & vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U]);
    vlSelfRef.tb_xorshift__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    if (VL_UNLIKELY(__Vtask_tb_xorshift__DOT__read_obi__2__grant_received)) {
        while (((~ (IData)(vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut)) 
                & VL_GTS_III(32, 0x7d0U, __Vtask_tb_xorshift__DOT__read_obi__2__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_xorshift.clk_i)", 
                                                                 "rtl/user_domain/tb_xorshift.sv", 
                                                                 136);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_xorshift__DOT__read_obi__2__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_xorshift__DOT__read_obi__2__timeout_count_rvalid);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_xorshift__DOT__read_obi__2__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_xorshift.sv:140: Assertion failed in %Ntb_xorshift.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_xorshift__DOT__read_obi__2__r_addr,
                         1,(1U & (IData)(vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut)));
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_xorshift.sv", 140, "");
            VL_FINISH_MT("rtl/user_domain/tb_xorshift.sv", 141, "");
        }
        __Vtask_tb_xorshift__DOT__read_obi__2__r_data_val 
            = (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                       >> 7U));
        __Vtask_tb_xorshift__DOT__read_obi__2__r_err 
            = (1U & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                             >> 3U)));
        VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_xorshift__DOT__read_obi__2__r_addr,
                     32,__Vtask_tb_xorshift__DOT__read_obi__2__r_data_val,
                     1,(IData)(__Vtask_tb_xorshift__DOT__read_obi__2__r_err),
                     1,(1U & (IData)(vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut)));
        Verilated::runFlushCallbacks();
    } else {
        __Vtask_tb_xorshift__DOT__read_obi__2__r_data_val = 0U;
        __Vtask_tb_xorshift__DOT__read_obi__2__r_err = 1U;
    }
    co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xorshift.clk_i)", 
                                                         "rtl/user_domain/tb_xorshift.sv", 
                                                         152);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] = 0U;
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U] = 0U;
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[2U] = 0U;
    vlSelfRef.tb_xorshift__DOT__unnamedblk1__DOT__prn_val 
        = __Vtask_tb_xorshift__DOT__read_obi__2__r_data_val;
    vlSelfRef.tb_xorshift__DOT__unnamedblk1__DOT__read_error 
        = __Vtask_tb_xorshift__DOT__read_obi__2__r_err;
    if (VL_UNLIKELY(vlSelfRef.tb_xorshift__DOT__unnamedblk1__DOT__read_error)) {
        VL_WRITEF_NX("[%0t] %%Error: tb_xorshift.sv:184: Assertion failed in %Ntb_xorshift.unnamedblk1: Test 2 Read Error!\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_xorshift.sv", 184, "");
    }
    VL_WRITEF_NX("%t : TB: PRN after 1st trigger = 0x%x (current_prn_tb=0x%x)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_xorshift__DOT__unnamedblk1__DOT__prn_val,
                 32,vlSelfRef.tb_xorshift__DOT__dut__DOT__prng_state_q);
    Verilated::runFlushCallbacks();
    if (VL_UNLIKELY((0x12345678U == vlSelfRef.tb_xorshift__DOT__unnamedblk1__DOT__prn_val))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_xorshift.sv:186: %Ntb_xorshift.unnamedblk1: PRN did not change after 1st trigger!\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
    }
    VL_WRITEF_NX("--- Test 3: Trigger PRNG again and read ---\n",0);
    Verilated::runFlushCallbacks();
    vlSelfRef.tb_xorshift__DOT__unnamedblk1__DOT__prev_prn_val 
        = vlSelfRef.tb_xorshift__DOT__unnamedblk1__DOT__prn_val;
    __Vtask_tb_xorshift__DOT__write_obi__3__w_be = 1U;
    __Vtask_tb_xorshift__DOT__write_obi__3__w_data = 1U;
    __Vtask_tb_xorshift__DOT__write_obi__3__w_addr = 0U;
    __Vtask_tb_xorshift__DOT__write_obi__3__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xorshift.clk_i)", 
                                                         "rtl/user_domain/tb_xorshift.sv", 
                                                         58);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] 
        = (1U | vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U]);
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U] 
        = ((0x1ffU & vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U]) 
           | ((IData)((1ULL | ((QData)((IData)(__Vtask_tb_xorshift__DOT__write_obi__3__w_addr)) 
                               << 1U))) << 9U));
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[2U] 
        = (0x3ffU & (((IData)((1ULL | ((QData)((IData)(__Vtask_tb_xorshift__DOT__write_obi__3__w_addr)) 
                                       << 1U))) >> 0x17U) 
                     | ((IData)(((1ULL | ((QData)((IData)(__Vtask_tb_xorshift__DOT__write_obi__3__w_addr)) 
                                          << 1U)) >> 0x20U)) 
                        << 9U)));
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] 
        = ((3U & vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U]) 
           | ((IData)((((QData)((IData)(__Vtask_tb_xorshift__DOT__write_obi__3__w_be)) 
                        << 0x23U) | (((QData)((IData)(__Vtask_tb_xorshift__DOT__write_obi__3__w_data)) 
                                      << 3U) | (QData)((IData)(
                                                               (7U 
                                                                & VL_MODDIVS_III(32, __Vtask_tb_xorshift__DOT__write_obi__3__timeout_count, (IData)(2U)))))))) 
              << 2U));
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U] 
        = ((0xfffffe00U & vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U]) 
           | (((IData)((((QData)((IData)(__Vtask_tb_xorshift__DOT__write_obi__3__w_be)) 
                         << 0x23U) | (((QData)((IData)(__Vtask_tb_xorshift__DOT__write_obi__3__w_data)) 
                                       << 3U) | (QData)((IData)(
                                                                (7U 
                                                                 & VL_MODDIVS_III(32, __Vtask_tb_xorshift__DOT__write_obi__3__timeout_count, (IData)(2U)))))))) 
               >> 0x1eU) | ((IData)(((((QData)((IData)(__Vtask_tb_xorshift__DOT__write_obi__3__w_be)) 
                                       << 0x23U) | 
                                      (((QData)((IData)(__Vtask_tb_xorshift__DOT__write_obi__3__w_data)) 
                                        << 3U) | (QData)((IData)(
                                                                 (7U 
                                                                  & VL_MODDIVS_III(32, __Vtask_tb_xorshift__DOT__write_obi__3__timeout_count, (IData)(2U))))))) 
                                     >> 0x20U)) << 2U)));
    vlSelfRef.tb_xorshift__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Write Req : Addr=0x%x, Data=0x%x, BE=0x%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_xorshift__DOT__write_obi__3__w_addr,
                 32,__Vtask_tb_xorshift__DOT__write_obi__3__w_data,
                 4,(IData)(__Vtask_tb_xorshift__DOT__write_obi__3__w_be));
    Verilated::runFlushCallbacks();
    while (((~ (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                        >> 1U))) & VL_GTS_III(32, 0x7d0U, __Vtask_tb_xorshift__DOT__write_obi__3__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             69);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_xorshift__DOT__write_obi__3__timeout_count 
            = ((IData)(1U) + __Vtask_tb_xorshift__DOT__write_obi__3__timeout_count);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_xorshift__DOT__write_obi__3__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_xorshift.sv:73: Assertion failed in %Ntb_xorshift.write_obi: %t : TB: Timeout waiting for OBI grant during write to 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_xorshift__DOT__write_obi__3__w_addr,
                     1,(1U & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                                      >> 1U))));
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_xorshift.sv", 73, "");
        VL_FINISH_MT("rtl/user_domain/tb_xorshift.sv", 74, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Write Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_xorshift__DOT__write_obi__3__w_addr,
                 1,(1U & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                                  >> 1U))));
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xorshift.clk_i)", 
                                                         "rtl/user_domain/tb_xorshift.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] 
        = (0xfffffffeU & vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U]);
    vlSelfRef.tb_xorshift__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Write Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xorshift.clk_i)", 
                                                         "rtl/user_domain/tb_xorshift.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] = 0U;
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U] = 0U;
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[2U] = 0U;
    co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xorshift.clk_i)", 
                                                         "rtl/user_domain/tb_xorshift.sv", 
                                                         191);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_xorshift__DOT__read_obi__4__expect_grant = 1U;
    __Vtask_tb_xorshift__DOT__read_obi__4__r_addr = 4U;
    __Vtask_tb_xorshift__DOT__read_obi__4__timeout_count_gnt = 0U;
    __Vtask_tb_xorshift__DOT__read_obi__4__timeout_count_rvalid = 0U;
    __Vtask_tb_xorshift__DOT__read_obi__4__grant_received = 0U;
    co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xorshift.clk_i)", 
                                                         "rtl/user_domain/tb_xorshift.sv", 
                                                         97);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] 
        = (1U | vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U]);
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U] 
        = ((0x1fU & vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U]) 
           | ((IData)((0xfULL | ((QData)((IData)(__Vtask_tb_xorshift__DOT__read_obi__4__r_addr)) 
                                 << 5U))) << 5U));
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[2U] 
        = (0x3ffU & (((IData)((0xfULL | ((QData)((IData)(__Vtask_tb_xorshift__DOT__read_obi__4__r_addr)) 
                                         << 5U))) >> 0x1bU) 
                     | ((IData)(((0xfULL | ((QData)((IData)(__Vtask_tb_xorshift__DOT__read_obi__4__r_addr)) 
                                            << 5U)) 
                                 >> 0x20U)) << 5U)));
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] 
        = ((0xffffffe3U & vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U]) 
           | (0x1cU & (VL_MODDIVS_III(32, __Vtask_tb_xorshift__DOT__read_obi__4__timeout_count_gnt, (IData)(2U)) 
                       << 2U)));
    vlSelfRef.tb_xorshift__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x (Expect Grant: %b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_xorshift__DOT__read_obi__4__r_addr,
                 1,(IData)(__Vtask_tb_xorshift__DOT__read_obi__4__expect_grant));
    Verilated::runFlushCallbacks();
    if (__Vtask_tb_xorshift__DOT__read_obi__4__expect_grant) {
        while (((~ (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                            >> 1U))) & VL_GTS_III(32, 0x7d0U, __Vtask_tb_xorshift__DOT__read_obi__4__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_xorshift.clk_i)", 
                                                                 "rtl/user_domain/tb_xorshift.sv", 
                                                                 109);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_xorshift__DOT__read_obi__4__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_xorshift__DOT__read_obi__4__timeout_count_gnt);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_xorshift__DOT__read_obi__4__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_xorshift.sv:113: Assertion failed in %Ntb_xorshift.read_obi: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_xorshift__DOT__read_obi__4__r_addr,
                         1,(1U & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                                          >> 1U))));
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_xorshift.sv", 113, "");
            VL_FINISH_MT("rtl/user_domain/tb_xorshift.sv", 114, "");
        }
        __Vtask_tb_xorshift__DOT__read_obi__4__grant_received = 1U;
        VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_xorshift__DOT__read_obi__4__r_addr,
                     1,(1U & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                                      >> 1U))));
        Verilated::runFlushCallbacks();
    } else {
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (VL_UNLIKELY((1U & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                                       >> 1U))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_xorshift.sv:122: Assertion failed in %Ntb_xorshift.read_obi: %t : TB: Expected NO grant for invalid addr 0x%x, but received grant. GNT=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_xorshift__DOT__read_obi__4__r_addr,
                         1,(1U & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                                          >> 1U))));
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_xorshift.sv", 122, "");
            VL_FINISH_MT("rtl/user_domain/tb_xorshift.sv", 123, "");
        }
        __Vtask_tb_xorshift__DOT__read_obi__4__grant_received = 0U;
        VL_WRITEF_NX("%t : TB: OBI Read No Grant (as expected for invalid addr): Addr=0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_xorshift__DOT__read_obi__4__r_addr,
                     1,(1U & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                                      >> 1U))));
        Verilated::runFlushCallbacks();
    }
    co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xorshift.clk_i)", 
                                                         "rtl/user_domain/tb_xorshift.sv", 
                                                         129);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] 
        = (0xfffffffeU & vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U]);
    vlSelfRef.tb_xorshift__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    if (VL_UNLIKELY(__Vtask_tb_xorshift__DOT__read_obi__4__grant_received)) {
        while (((~ (IData)(vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut)) 
                & VL_GTS_III(32, 0x7d0U, __Vtask_tb_xorshift__DOT__read_obi__4__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_xorshift.clk_i)", 
                                                                 "rtl/user_domain/tb_xorshift.sv", 
                                                                 136);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_xorshift__DOT__read_obi__4__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_xorshift__DOT__read_obi__4__timeout_count_rvalid);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_xorshift__DOT__read_obi__4__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_xorshift.sv:140: Assertion failed in %Ntb_xorshift.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_xorshift__DOT__read_obi__4__r_addr,
                         1,(1U & (IData)(vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut)));
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_xorshift.sv", 140, "");
            VL_FINISH_MT("rtl/user_domain/tb_xorshift.sv", 141, "");
        }
        __Vtask_tb_xorshift__DOT__read_obi__4__r_data_val 
            = (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                       >> 7U));
        __Vtask_tb_xorshift__DOT__read_obi__4__r_err 
            = (1U & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                             >> 3U)));
        VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_xorshift__DOT__read_obi__4__r_addr,
                     32,__Vtask_tb_xorshift__DOT__read_obi__4__r_data_val,
                     1,(IData)(__Vtask_tb_xorshift__DOT__read_obi__4__r_err),
                     1,(1U & (IData)(vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut)));
        Verilated::runFlushCallbacks();
    } else {
        __Vtask_tb_xorshift__DOT__read_obi__4__r_data_val = 0U;
        __Vtask_tb_xorshift__DOT__read_obi__4__r_err = 1U;
    }
    co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xorshift.clk_i)", 
                                                         "rtl/user_domain/tb_xorshift.sv", 
                                                         152);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] = 0U;
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U] = 0U;
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[2U] = 0U;
    vlSelfRef.tb_xorshift__DOT__unnamedblk1__DOT__prn_val 
        = __Vtask_tb_xorshift__DOT__read_obi__4__r_data_val;
    vlSelfRef.tb_xorshift__DOT__unnamedblk1__DOT__read_error 
        = __Vtask_tb_xorshift__DOT__read_obi__4__r_err;
    if (VL_UNLIKELY(vlSelfRef.tb_xorshift__DOT__unnamedblk1__DOT__read_error)) {
        VL_WRITEF_NX("[%0t] %%Error: tb_xorshift.sv:193: Assertion failed in %Ntb_xorshift.unnamedblk1: Test 3 Read Error!\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_xorshift.sv", 193, "");
    }
    VL_WRITEF_NX("%t : TB: PRN after 2nd trigger = 0x%x (current_prn_tb=0x%x)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_xorshift__DOT__unnamedblk1__DOT__prn_val,
                 32,vlSelfRef.tb_xorshift__DOT__dut__DOT__prng_state_q);
    Verilated::runFlushCallbacks();
    if (VL_UNLIKELY((vlSelfRef.tb_xorshift__DOT__unnamedblk1__DOT__prn_val 
                     == vlSelfRef.tb_xorshift__DOT__unnamedblk1__DOT__prev_prn_val))) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_xorshift.sv:195: %Ntb_xorshift.unnamedblk1: PRN did not change after 2nd trigger!\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
    }
    VL_WRITEF_NX("--- Test 4: Read from invalid offset ---\n",0);
    Verilated::runFlushCallbacks();
    vlSelfRef.tb_xorshift__DOT__unnamedblk1__DOT__invalid_addr = 0x1cU;
    __Vtask_tb_xorshift__DOT__read_obi__5__expect_grant = 0U;
    __Vtask_tb_xorshift__DOT__read_obi__5__r_addr = vlSelfRef.tb_xorshift__DOT__unnamedblk1__DOT__invalid_addr;
    __Vtask_tb_xorshift__DOT__read_obi__5__timeout_count_gnt = 0U;
    __Vtask_tb_xorshift__DOT__read_obi__5__timeout_count_rvalid = 0U;
    __Vtask_tb_xorshift__DOT__read_obi__5__grant_received = 0U;
    co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xorshift.clk_i)", 
                                                         "rtl/user_domain/tb_xorshift.sv", 
                                                         97);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] 
        = (1U | vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U]);
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U] 
        = ((0x1fU & vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U]) 
           | ((IData)((0xfULL | ((QData)((IData)(__Vtask_tb_xorshift__DOT__read_obi__5__r_addr)) 
                                 << 5U))) << 5U));
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[2U] 
        = (0x3ffU & (((IData)((0xfULL | ((QData)((IData)(__Vtask_tb_xorshift__DOT__read_obi__5__r_addr)) 
                                         << 5U))) >> 0x1bU) 
                     | ((IData)(((0xfULL | ((QData)((IData)(__Vtask_tb_xorshift__DOT__read_obi__5__r_addr)) 
                                            << 5U)) 
                                 >> 0x20U)) << 5U)));
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] 
        = ((0xffffffe3U & vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U]) 
           | (0x1cU & (VL_MODDIVS_III(32, __Vtask_tb_xorshift__DOT__read_obi__5__timeout_count_gnt, (IData)(2U)) 
                       << 2U)));
    vlSelfRef.tb_xorshift__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x (Expect Grant: %b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_xorshift__DOT__read_obi__5__r_addr,
                 1,(IData)(__Vtask_tb_xorshift__DOT__read_obi__5__expect_grant));
    Verilated::runFlushCallbacks();
    if (__Vtask_tb_xorshift__DOT__read_obi__5__expect_grant) {
        while (((~ (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                            >> 1U))) & VL_GTS_III(32, 0x7d0U, __Vtask_tb_xorshift__DOT__read_obi__5__timeout_count_gnt))) {
            co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_xorshift.clk_i)", 
                                                                 "rtl/user_domain/tb_xorshift.sv", 
                                                                 109);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_xorshift__DOT__read_obi__5__timeout_count_gnt 
                = ((IData)(1U) + __Vtask_tb_xorshift__DOT__read_obi__5__timeout_count_gnt);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_xorshift__DOT__read_obi__5__timeout_count_gnt))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_xorshift.sv:113: Assertion failed in %Ntb_xorshift.read_obi: %t : TB: Timeout waiting for OBI grant during read from 0x%x. GNT=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_xorshift__DOT__read_obi__5__r_addr,
                         1,(1U & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                                          >> 1U))));
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_xorshift.sv", 113, "");
            VL_FINISH_MT("rtl/user_domain/tb_xorshift.sv", 114, "");
        }
        __Vtask_tb_xorshift__DOT__read_obi__5__grant_received = 1U;
        VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_xorshift__DOT__read_obi__5__r_addr,
                     1,(1U & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                                      >> 1U))));
        Verilated::runFlushCallbacks();
    } else {
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_xorshift.clk_i)", 
                                                             "rtl/user_domain/tb_xorshift.sv", 
                                                             120);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if (VL_UNLIKELY((1U & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                                       >> 1U))))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_xorshift.sv:122: Assertion failed in %Ntb_xorshift.read_obi: %t : TB: Expected NO grant for invalid addr 0x%x, but received grant. GNT=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_xorshift__DOT__read_obi__5__r_addr,
                         1,(1U & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                                          >> 1U))));
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_xorshift.sv", 122, "");
            VL_FINISH_MT("rtl/user_domain/tb_xorshift.sv", 123, "");
        }
        __Vtask_tb_xorshift__DOT__read_obi__5__grant_received = 0U;
        VL_WRITEF_NX("%t : TB: OBI Read No Grant (as expected for invalid addr): Addr=0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_xorshift__DOT__read_obi__5__r_addr,
                     1,(1U & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                                      >> 1U))));
        Verilated::runFlushCallbacks();
    }
    co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xorshift.clk_i)", 
                                                         "rtl/user_domain/tb_xorshift.sv", 
                                                         129);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] 
        = (0xfffffffeU & vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U]);
    vlSelfRef.tb_xorshift__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    if (VL_UNLIKELY(__Vtask_tb_xorshift__DOT__read_obi__5__grant_received)) {
        while (((~ (IData)(vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut)) 
                & VL_GTS_III(32, 0x7d0U, __Vtask_tb_xorshift__DOT__read_obi__5__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_xorshift.clk_i)", 
                                                                 "rtl/user_domain/tb_xorshift.sv", 
                                                                 136);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_xorshift__DOT__read_obi__5__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_xorshift__DOT__read_obi__5__timeout_count_rvalid);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x7d0U, __Vtask_tb_xorshift__DOT__read_obi__5__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_xorshift.sv:140: Assertion failed in %Ntb_xorshift.read_obi: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_xorshift__DOT__read_obi__5__r_addr,
                         1,(1U & (IData)(vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut)));
            Verilated::runFlushCallbacks();
            VL_STOP_MT("rtl/user_domain/tb_xorshift.sv", 140, "");
            VL_FINISH_MT("rtl/user_domain/tb_xorshift.sv", 141, "");
        }
        __Vtask_tb_xorshift__DOT__read_obi__5__r_data_val 
            = (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                       >> 7U));
        __Vtask_tb_xorshift__DOT__read_obi__5__r_err 
            = (1U & (IData)((vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                             >> 3U)));
        VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_xorshift__DOT__read_obi__5__r_addr,
                     32,__Vtask_tb_xorshift__DOT__read_obi__5__r_data_val,
                     1,(IData)(__Vtask_tb_xorshift__DOT__read_obi__5__r_err),
                     1,(1U & (IData)(vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut)));
        Verilated::runFlushCallbacks();
    } else {
        __Vtask_tb_xorshift__DOT__read_obi__5__r_data_val = 0U;
        __Vtask_tb_xorshift__DOT__read_obi__5__r_err = 1U;
    }
    co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xorshift.clk_i)", 
                                                         "rtl/user_domain/tb_xorshift.sv", 
                                                         152);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[0U] = 0U;
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[1U] = 0U;
    vlSelfRef.tb_xorshift__DOT__obi_req_i_to_dut[2U] = 0U;
    vlSelfRef.tb_xorshift__DOT__unnamedblk1__DOT__prn_val 
        = __Vtask_tb_xorshift__DOT__read_obi__5__r_data_val;
    vlSelfRef.tb_xorshift__DOT__unnamedblk1__DOT__read_error 
        = __Vtask_tb_xorshift__DOT__read_obi__5__r_err;
    if (VL_LIKELY(vlSelfRef.tb_xorshift__DOT__unnamedblk1__DOT__read_error)) {
        VL_WRITEF_NX("%t : TB: Test 4 PASSED: Correctly handled no-grant for invalid read address (TB task reported r_err=1).\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        Verilated::runFlushCallbacks();
    } else {
        VL_WRITEF_NX("[%0t] %%Error: tb_xorshift.sv:202: Assertion failed in %Ntb_xorshift.unnamedblk1: Test 4 FAILED: Expected an error indication for invalid read address, but got no error from TB task.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        Verilated::runFlushCallbacks();
        VL_STOP_MT("rtl/user_domain/tb_xorshift.sv", 202, "");
    }
    co_await vlSelfRef.__VdlySched.delay(0x7a120ULL, 
                                         nullptr, "rtl/user_domain/tb_xorshift.sv", 
                                         205);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%t : TB: OBI PRNG Test Sequence Complete.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    VL_FINISH_MT("rtl/user_domain/tb_xorshift.sv", 207, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_xorshift___024root___dump_triggers__act(Vtb_xorshift___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_xorshift___024root___eval_triggers__act(Vtb_xorshift___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xorshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xorshift___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, (vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tb_xorshift__DOT__obi_rsp_o_from_dut__1));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.tb_xorshift__DOT__clk_i) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_xorshift__DOT__clk_i__0))));
    vlSelfRef.__VactTriggered.set(2U, ((~ (IData)(vlSelfRef.tb_xorshift__DOT__rst_ni)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_xorshift__DOT__rst_ni__0)));
    vlSelfRef.__VactTriggered.set(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_xorshift__DOT__obi_rsp_o_from_dut__1 
        = vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_xorshift__DOT__clk_i__0 
        = vlSelfRef.tb_xorshift__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_xorshift__DOT__rst_ni__0 
        = vlSelfRef.tb_xorshift__DOT__rst_ni;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_xorshift___024root___dump_triggers__act(vlSelf);
    }
#endif
}
