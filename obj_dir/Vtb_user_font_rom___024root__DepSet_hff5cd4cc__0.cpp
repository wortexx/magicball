// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_user_font_rom.h for the primary calling header

#include "Vtb_user_font_rom__pch.h"
#include "Vtb_user_font_rom__Syms.h"
#include "Vtb_user_font_rom___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_user_font_rom___024root___eval_initial__TOP__Vtiming__1(Vtb_user_font_rom___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_font_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_font_rom___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__r_addr;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__r_data_val;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__r_err;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__r_err = 0;
    IData/*31:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__timeout_count_gnt;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__timeout_count_rvalid;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__req_txn);
    QData/*36:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__rsp_r_chan_temp;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__rsp_r_chan_temp = 0;
    CData/*0:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__expected_grant;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__expected_grant = 0;
    IData/*31:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__r_addr;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__r_data_val;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__r_err;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__r_err = 0;
    IData/*31:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__timeout_count_gnt;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__timeout_count_rvalid;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__req_txn);
    QData/*36:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__rsp_r_chan_temp;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__rsp_r_chan_temp = 0;
    CData/*0:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__expected_grant;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__expected_grant = 0;
    IData/*31:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__r_addr;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__r_data_val;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__r_err;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__r_err = 0;
    IData/*31:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__timeout_count_gnt;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__timeout_count_rvalid;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__req_txn);
    QData/*36:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__rsp_r_chan_temp;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__rsp_r_chan_temp = 0;
    CData/*0:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__expected_grant;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__expected_grant = 0;
    IData/*31:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__r_addr;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__r_data_val;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__r_err;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__r_err = 0;
    IData/*31:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__timeout_count_gnt;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__timeout_count_rvalid;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__req_txn);
    QData/*36:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__rsp_r_chan_temp;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__rsp_r_chan_temp = 0;
    CData/*0:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__expected_grant;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__expected_grant = 0;
    IData/*31:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__r_addr;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__r_addr = 0;
    IData/*31:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__r_data_val;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__r_data_val = 0;
    CData/*0:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__r_err;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__r_err = 0;
    IData/*31:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__timeout_count_gnt;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__timeout_count_rvalid;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__req_txn);
    QData/*36:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__rsp_r_chan_temp;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__rsp_r_chan_temp = 0;
    CData/*0:0*/ __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__expected_grant;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__expected_grant = 0;
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x5f726f6dU;
    __Vtemp_1[2U] = 0x666f6e74U;
    __Vtemp_1[3U] = 0x7365725fU;
    __Vtemp_1[4U] = 0x74625f75U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_user_font_rom__DOT__rst_ni = 0U;
    vlSelfRef.tb_user_font_rom__DOT__req_ongoing = 0U;
    vlSelfRef.tb_user_font_rom__DOT__obi_req[0U] = 0U;
    vlSelfRef.tb_user_font_rom__DOT__obi_req[1U] = 0U;
    vlSelfRef.tb_user_font_rom__DOT__obi_req[2U] = 0U;
    VL_WRITEF_NX("%t : TB: Asserting Reset\n",0,64,
                 VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "rtl/user_domain/tb_user_font_rom.sv", 
                                         143);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_font_rom__DOT__rst_ni = 1U;
    VL_WRITEF_NX("%t : TB: Deasserting Reset\n",0,64,
                 VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_h069df72c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_font_rom.clk_i)", 
                                                         "rtl/user_domain/tb_user_font_rom.sv", 
                                                         146);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%t : TB: Starting Test Sequence for user_font_rom...\n--- Test 1: Read first byte of 'A' (Offset 0x0000018c) ---\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__r_addr = 0x18cU;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__timeout_count_gnt = 0U;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__timeout_count_rvalid = 0U;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__expected_grant 
        = (0x474U > (0xfffU & __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__r_addr));
    co_await vlSelfRef.__VtrigSched_h069df72c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_font_rom.clk_i)", 
                                                         "rtl/user_domain/tb_user_font_rom.sv", 
                                                         66);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__req_txn[0U] = 0U;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__req_txn[1U] = 0U;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__req_txn[2U] = 0U;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__req_txn[0U] 
        = (1U | __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__req_txn[0U]);
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__req_txn[1U] 
        = ((0x1ffU & __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__req_txn[1U]) 
           | ((IData)(((QData)((IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__0__r_addr)) 
                       << 1U)) << 9U));
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__req_txn[2U] 
        = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__0__r_addr)) 
                               << 1U)) >> 0x17U) | 
                     ((IData)((((QData)((IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__0__r_addr)) 
                                << 1U) >> 0x20U)) << 9U)));
    vlSelfRef.tb_user_font_rom__DOT__obi_req[0U] = 
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__req_txn[0U];
    vlSelfRef.tb_user_font_rom__DOT__obi_req[1U] = 
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__req_txn[1U];
    vlSelfRef.tb_user_font_rom__DOT__obi_req[2U] = 
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__req_txn[2U];
    vlSelfRef.tb_user_font_rom__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x (Expect Grant: %b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_font_rom__DOT__read_obi_rom__0__r_addr,
                 1,(IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__0__expected_grant));
    while ((((1U & (IData)((vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                            >> 1U))) != (IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__0__expected_grant)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_h069df72c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_font_rom.clk_i)", 
                                                             "rtl/user_domain/tb_user_font_rom.sv", 
                                                             77);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__timeout_count_gnt);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x3e8U, __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_font_rom.sv:83: Assertion failed in %Ntb_user_font_rom.read_obi_rom: %t : TB: Timeout waiting for OBI grant/no-grant during read from 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__r_addr,
                     1,(1U & (IData)((vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                                      >> 1U))));
        VL_STOP_MT("rtl/user_domain/tb_user_font_rom.sv", 83, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_font_rom.sv", 84, "");
    } else if (VL_UNLIKELY(((1U & (IData)((vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                                           >> 1U))) 
                            != (IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__0__expected_grant)))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_font_rom.sv:86: Assertion failed in %Ntb_user_font_rom.read_obi_rom: %t : TB: Unexpected OBI grant status during read from 0x%x. Expected GNT=%b, Got GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__r_addr,
                     1,(IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__0__expected_grant),
                     1,(1U & (IData)((vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                                      >> 1U))));
        VL_STOP_MT("rtl/user_domain/tb_user_font_rom.sv", 86, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_font_rom.sv", 87, "");
    }
    if (VL_UNLIKELY(__Vtask_tb_user_font_rom__DOT__read_obi_rom__0__expected_grant)) {
        VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__r_addr,
                     1,(1U & (IData)((vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                                      >> 1U))));
        co_await vlSelfRef.__VtrigSched_h069df72c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_font_rom.clk_i)", 
                                                             "rtl/user_domain/tb_user_font_rom.sv", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_user_font_rom__DOT__obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.tb_user_font_rom__DOT__obi_req[0U]);
        vlSelfRef.tb_user_font_rom__DOT__req_ongoing = 0U;
        VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        while (((~ (IData)(vlSelfRef.tb_user_font_rom__DOT__obi_rsp)) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h069df72c__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_font_rom.clk_i)", 
                                                                 "rtl/user_domain/tb_user_font_rom.sv", 
                                                                 100);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__timeout_count_rvalid);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x3e8U, __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_font_rom.sv:104: Assertion failed in %Ntb_user_font_rom.read_obi_rom: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_font_rom__DOT__read_obi_rom__0__r_addr,
                         1,(1U & (IData)(vlSelfRef.tb_user_font_rom__DOT__obi_rsp)));
            VL_STOP_MT("rtl/user_domain/tb_user_font_rom.sv", 104, "");
            VL_FINISH_MT("rtl/user_domain/tb_user_font_rom.sv", 105, "");
        }
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__rsp_r_chan_temp 
            = (0x1fffffffffULL & (vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                                  >> 2U));
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__r_data_val 
            = (IData)((__Vtask_tb_user_font_rom__DOT__read_obi_rom__0__rsp_r_chan_temp 
                       >> 5U));
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__r_err 
            = (1U & (IData)((__Vtask_tb_user_font_rom__DOT__read_obi_rom__0__rsp_r_chan_temp 
                             >> 1U)));
        VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__r_addr,
                     32,__Vtask_tb_user_font_rom__DOT__read_obi_rom__0__r_data_val,
                     1,(IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__0__r_err),
                     1,(1U & (IData)(vlSelfRef.tb_user_font_rom__DOT__obi_rsp)));
    } else {
        VL_WRITEF_NX("%t : TB: OBI Read No Grant Rcvd (Correct for invalid Addr=0x%x). GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__r_addr,
                     1,(1U & (IData)((vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                                      >> 1U))));
        co_await vlSelfRef.__VtrigSched_h069df72c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_font_rom.clk_i)", 
                                                             "rtl/user_domain/tb_user_font_rom.sv", 
                                                             117);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_user_font_rom__DOT__obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.tb_user_font_rom__DOT__obi_req[0U]);
        vlSelfRef.tb_user_font_rom__DOT__req_ongoing = 0U;
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__r_data_val = 0xdeadbeefU;
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__r_err = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h069df72c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_font_rom.clk_i)", 
                                                         "rtl/user_domain/tb_user_font_rom.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_font_rom__DOT__obi_req[0U] = 0U;
    vlSelfRef.tb_user_font_rom__DOT__obi_req[1U] = 0U;
    vlSelfRef.tb_user_font_rom__DOT__obi_req[2U] = 0U;
    vlSelfRef.tb_user_font_rom__DOT__unnamedblk1__DOT__read_data 
        = __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__r_data_val;
    vlSelfRef.tb_user_font_rom__DOT__unnamedblk1__DOT__read_err 
        = __Vtask_tb_user_font_rom__DOT__read_obi_rom__0__r_err;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_user_font_rom__DOT__unnamedblk1__DOT__read_err) 
                     | (0U != (0xffU & vlSelfRef.tb_user_font_rom__DOT__unnamedblk1__DOT__read_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_font_rom.sv:154: Assertion failed in %Ntb_user_font_rom.unnamedblk1: %t : TB_ERROR: Test 1 Failed. Expected 0x00, Got 0x%x, Err=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,8,
                     (0xffU & vlSelfRef.tb_user_font_rom__DOT__unnamedblk1__DOT__read_data),
                     1,(IData)(vlSelfRef.tb_user_font_rom__DOT__unnamedblk1__DOT__read_err));
        VL_STOP_MT("rtl/user_domain/tb_user_font_rom.sv", 154, "");
    } else {
        VL_WRITEF_NX("%t : TB_PASS: Test 1 Passed.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    co_await vlSelfRef.__VdlySched.delay(0x3d090ULL, 
                                         nullptr, "rtl/user_domain/tb_user_font_rom.sv", 
                                         156);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("--- Test 2: Read last byte of 'A' (Offset 0x00000197) ---\n",0);
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__r_addr = 0x197U;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__timeout_count_gnt = 0U;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__timeout_count_rvalid = 0U;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__expected_grant 
        = (0x474U > (0xfffU & __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__r_addr));
    co_await vlSelfRef.__VtrigSched_h069df72c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_font_rom.clk_i)", 
                                                         "rtl/user_domain/tb_user_font_rom.sv", 
                                                         66);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__req_txn[0U] = 0U;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__req_txn[1U] = 0U;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__req_txn[2U] = 0U;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__req_txn[0U] 
        = (1U | __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__req_txn[0U]);
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__req_txn[1U] 
        = ((0x1ffU & __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__req_txn[1U]) 
           | ((IData)(((QData)((IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__1__r_addr)) 
                       << 1U)) << 9U));
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__req_txn[2U] 
        = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__1__r_addr)) 
                               << 1U)) >> 0x17U) | 
                     ((IData)((((QData)((IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__1__r_addr)) 
                                << 1U) >> 0x20U)) << 9U)));
    vlSelfRef.tb_user_font_rom__DOT__obi_req[0U] = 
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__req_txn[0U];
    vlSelfRef.tb_user_font_rom__DOT__obi_req[1U] = 
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__req_txn[1U];
    vlSelfRef.tb_user_font_rom__DOT__obi_req[2U] = 
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__req_txn[2U];
    vlSelfRef.tb_user_font_rom__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x (Expect Grant: %b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_font_rom__DOT__read_obi_rom__1__r_addr,
                 1,(IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__1__expected_grant));
    while ((((1U & (IData)((vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                            >> 1U))) != (IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__1__expected_grant)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_h069df72c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_font_rom.clk_i)", 
                                                             "rtl/user_domain/tb_user_font_rom.sv", 
                                                             77);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__timeout_count_gnt);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x3e8U, __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_font_rom.sv:83: Assertion failed in %Ntb_user_font_rom.read_obi_rom: %t : TB: Timeout waiting for OBI grant/no-grant during read from 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__r_addr,
                     1,(1U & (IData)((vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                                      >> 1U))));
        VL_STOP_MT("rtl/user_domain/tb_user_font_rom.sv", 83, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_font_rom.sv", 84, "");
    } else if (VL_UNLIKELY(((1U & (IData)((vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                                           >> 1U))) 
                            != (IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__1__expected_grant)))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_font_rom.sv:86: Assertion failed in %Ntb_user_font_rom.read_obi_rom: %t : TB: Unexpected OBI grant status during read from 0x%x. Expected GNT=%b, Got GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__r_addr,
                     1,(IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__1__expected_grant),
                     1,(1U & (IData)((vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                                      >> 1U))));
        VL_STOP_MT("rtl/user_domain/tb_user_font_rom.sv", 86, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_font_rom.sv", 87, "");
    }
    if (VL_UNLIKELY(__Vtask_tb_user_font_rom__DOT__read_obi_rom__1__expected_grant)) {
        VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__r_addr,
                     1,(1U & (IData)((vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                                      >> 1U))));
        co_await vlSelfRef.__VtrigSched_h069df72c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_font_rom.clk_i)", 
                                                             "rtl/user_domain/tb_user_font_rom.sv", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_user_font_rom__DOT__obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.tb_user_font_rom__DOT__obi_req[0U]);
        vlSelfRef.tb_user_font_rom__DOT__req_ongoing = 0U;
        VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        while (((~ (IData)(vlSelfRef.tb_user_font_rom__DOT__obi_rsp)) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h069df72c__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_font_rom.clk_i)", 
                                                                 "rtl/user_domain/tb_user_font_rom.sv", 
                                                                 100);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__timeout_count_rvalid);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x3e8U, __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_font_rom.sv:104: Assertion failed in %Ntb_user_font_rom.read_obi_rom: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_font_rom__DOT__read_obi_rom__1__r_addr,
                         1,(1U & (IData)(vlSelfRef.tb_user_font_rom__DOT__obi_rsp)));
            VL_STOP_MT("rtl/user_domain/tb_user_font_rom.sv", 104, "");
            VL_FINISH_MT("rtl/user_domain/tb_user_font_rom.sv", 105, "");
        }
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__rsp_r_chan_temp 
            = (0x1fffffffffULL & (vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                                  >> 2U));
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__r_data_val 
            = (IData)((__Vtask_tb_user_font_rom__DOT__read_obi_rom__1__rsp_r_chan_temp 
                       >> 5U));
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__r_err 
            = (1U & (IData)((__Vtask_tb_user_font_rom__DOT__read_obi_rom__1__rsp_r_chan_temp 
                             >> 1U)));
        VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__r_addr,
                     32,__Vtask_tb_user_font_rom__DOT__read_obi_rom__1__r_data_val,
                     1,(IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__1__r_err),
                     1,(1U & (IData)(vlSelfRef.tb_user_font_rom__DOT__obi_rsp)));
    } else {
        VL_WRITEF_NX("%t : TB: OBI Read No Grant Rcvd (Correct for invalid Addr=0x%x). GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__r_addr,
                     1,(1U & (IData)((vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                                      >> 1U))));
        co_await vlSelfRef.__VtrigSched_h069df72c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_font_rom.clk_i)", 
                                                             "rtl/user_domain/tb_user_font_rom.sv", 
                                                             117);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_user_font_rom__DOT__obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.tb_user_font_rom__DOT__obi_req[0U]);
        vlSelfRef.tb_user_font_rom__DOT__req_ongoing = 0U;
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__r_data_val = 0xdeadbeefU;
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__r_err = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h069df72c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_font_rom.clk_i)", 
                                                         "rtl/user_domain/tb_user_font_rom.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_font_rom__DOT__obi_req[0U] = 0U;
    vlSelfRef.tb_user_font_rom__DOT__obi_req[1U] = 0U;
    vlSelfRef.tb_user_font_rom__DOT__obi_req[2U] = 0U;
    vlSelfRef.tb_user_font_rom__DOT__unnamedblk1__DOT__read_data 
        = __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__r_data_val;
    vlSelfRef.tb_user_font_rom__DOT__unnamedblk1__DOT__read_err 
        = __Vtask_tb_user_font_rom__DOT__read_obi_rom__1__r_err;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_user_font_rom__DOT__unnamedblk1__DOT__read_err) 
                     | (0x40U != (0xffU & vlSelfRef.tb_user_font_rom__DOT__unnamedblk1__DOT__read_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_font_rom.sv:162: Assertion failed in %Ntb_user_font_rom.unnamedblk1: %t : TB_ERROR: Test 2 Failed. Expected 0x40, Got 0x%x, Err=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,8,
                     (0xffU & vlSelfRef.tb_user_font_rom__DOT__unnamedblk1__DOT__read_data),
                     1,(IData)(vlSelfRef.tb_user_font_rom__DOT__unnamedblk1__DOT__read_err));
        VL_STOP_MT("rtl/user_domain/tb_user_font_rom.sv", 162, "");
    } else {
        VL_WRITEF_NX("%t : TB_PASS: Test 2 Passed.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    co_await vlSelfRef.__VdlySched.delay(0x3d090ULL, 
                                         nullptr, "rtl/user_domain/tb_user_font_rom.sv", 
                                         164);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("--- Test 3: Read first byte of 'a' (Offset 0x0000030c) ---\n",0);
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__r_addr = 0x30cU;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__timeout_count_gnt = 0U;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__timeout_count_rvalid = 0U;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__expected_grant 
        = (0x474U > (0xfffU & __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__r_addr));
    co_await vlSelfRef.__VtrigSched_h069df72c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_font_rom.clk_i)", 
                                                         "rtl/user_domain/tb_user_font_rom.sv", 
                                                         66);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__req_txn[0U] = 0U;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__req_txn[1U] = 0U;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__req_txn[2U] = 0U;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__req_txn[0U] 
        = (1U | __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__req_txn[0U]);
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__req_txn[1U] 
        = ((0x1ffU & __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__req_txn[1U]) 
           | ((IData)(((QData)((IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__2__r_addr)) 
                       << 1U)) << 9U));
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__req_txn[2U] 
        = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__2__r_addr)) 
                               << 1U)) >> 0x17U) | 
                     ((IData)((((QData)((IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__2__r_addr)) 
                                << 1U) >> 0x20U)) << 9U)));
    vlSelfRef.tb_user_font_rom__DOT__obi_req[0U] = 
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__req_txn[0U];
    vlSelfRef.tb_user_font_rom__DOT__obi_req[1U] = 
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__req_txn[1U];
    vlSelfRef.tb_user_font_rom__DOT__obi_req[2U] = 
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__req_txn[2U];
    vlSelfRef.tb_user_font_rom__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x (Expect Grant: %b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_font_rom__DOT__read_obi_rom__2__r_addr,
                 1,(IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__2__expected_grant));
    while ((((1U & (IData)((vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                            >> 1U))) != (IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__2__expected_grant)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_h069df72c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_font_rom.clk_i)", 
                                                             "rtl/user_domain/tb_user_font_rom.sv", 
                                                             77);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__timeout_count_gnt);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x3e8U, __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_font_rom.sv:83: Assertion failed in %Ntb_user_font_rom.read_obi_rom: %t : TB: Timeout waiting for OBI grant/no-grant during read from 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__r_addr,
                     1,(1U & (IData)((vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                                      >> 1U))));
        VL_STOP_MT("rtl/user_domain/tb_user_font_rom.sv", 83, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_font_rom.sv", 84, "");
    } else if (VL_UNLIKELY(((1U & (IData)((vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                                           >> 1U))) 
                            != (IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__2__expected_grant)))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_font_rom.sv:86: Assertion failed in %Ntb_user_font_rom.read_obi_rom: %t : TB: Unexpected OBI grant status during read from 0x%x. Expected GNT=%b, Got GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__r_addr,
                     1,(IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__2__expected_grant),
                     1,(1U & (IData)((vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                                      >> 1U))));
        VL_STOP_MT("rtl/user_domain/tb_user_font_rom.sv", 86, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_font_rom.sv", 87, "");
    }
    if (VL_UNLIKELY(__Vtask_tb_user_font_rom__DOT__read_obi_rom__2__expected_grant)) {
        VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__r_addr,
                     1,(1U & (IData)((vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                                      >> 1U))));
        co_await vlSelfRef.__VtrigSched_h069df72c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_font_rom.clk_i)", 
                                                             "rtl/user_domain/tb_user_font_rom.sv", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_user_font_rom__DOT__obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.tb_user_font_rom__DOT__obi_req[0U]);
        vlSelfRef.tb_user_font_rom__DOT__req_ongoing = 0U;
        VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        while (((~ (IData)(vlSelfRef.tb_user_font_rom__DOT__obi_rsp)) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h069df72c__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_font_rom.clk_i)", 
                                                                 "rtl/user_domain/tb_user_font_rom.sv", 
                                                                 100);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__timeout_count_rvalid);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x3e8U, __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_font_rom.sv:104: Assertion failed in %Ntb_user_font_rom.read_obi_rom: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_font_rom__DOT__read_obi_rom__2__r_addr,
                         1,(1U & (IData)(vlSelfRef.tb_user_font_rom__DOT__obi_rsp)));
            VL_STOP_MT("rtl/user_domain/tb_user_font_rom.sv", 104, "");
            VL_FINISH_MT("rtl/user_domain/tb_user_font_rom.sv", 105, "");
        }
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__rsp_r_chan_temp 
            = (0x1fffffffffULL & (vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                                  >> 2U));
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__r_data_val 
            = (IData)((__Vtask_tb_user_font_rom__DOT__read_obi_rom__2__rsp_r_chan_temp 
                       >> 5U));
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__r_err 
            = (1U & (IData)((__Vtask_tb_user_font_rom__DOT__read_obi_rom__2__rsp_r_chan_temp 
                             >> 1U)));
        VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__r_addr,
                     32,__Vtask_tb_user_font_rom__DOT__read_obi_rom__2__r_data_val,
                     1,(IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__2__r_err),
                     1,(1U & (IData)(vlSelfRef.tb_user_font_rom__DOT__obi_rsp)));
    } else {
        VL_WRITEF_NX("%t : TB: OBI Read No Grant Rcvd (Correct for invalid Addr=0x%x). GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__r_addr,
                     1,(1U & (IData)((vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                                      >> 1U))));
        co_await vlSelfRef.__VtrigSched_h069df72c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_font_rom.clk_i)", 
                                                             "rtl/user_domain/tb_user_font_rom.sv", 
                                                             117);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_user_font_rom__DOT__obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.tb_user_font_rom__DOT__obi_req[0U]);
        vlSelfRef.tb_user_font_rom__DOT__req_ongoing = 0U;
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__r_data_val = 0xdeadbeefU;
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__r_err = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h069df72c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_font_rom.clk_i)", 
                                                         "rtl/user_domain/tb_user_font_rom.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_font_rom__DOT__obi_req[0U] = 0U;
    vlSelfRef.tb_user_font_rom__DOT__obi_req[1U] = 0U;
    vlSelfRef.tb_user_font_rom__DOT__obi_req[2U] = 0U;
    vlSelfRef.tb_user_font_rom__DOT__unnamedblk1__DOT__read_data 
        = __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__r_data_val;
    vlSelfRef.tb_user_font_rom__DOT__unnamedblk1__DOT__read_err 
        = __Vtask_tb_user_font_rom__DOT__read_obi_rom__2__r_err;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_user_font_rom__DOT__unnamedblk1__DOT__read_err) 
                     | (0U != (0xffU & vlSelfRef.tb_user_font_rom__DOT__unnamedblk1__DOT__read_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_font_rom.sv:170: Assertion failed in %Ntb_user_font_rom.unnamedblk1: %t : TB_ERROR: Test 3 Failed. Expected 0x00, Got 0x%x, Err=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,8,
                     (0xffU & vlSelfRef.tb_user_font_rom__DOT__unnamedblk1__DOT__read_data),
                     1,(IData)(vlSelfRef.tb_user_font_rom__DOT__unnamedblk1__DOT__read_err));
        VL_STOP_MT("rtl/user_domain/tb_user_font_rom.sv", 170, "");
    } else {
        VL_WRITEF_NX("%t : TB_PASS: Test 3 Passed.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    co_await vlSelfRef.__VdlySched.delay(0x3d090ULL, 
                                         nullptr, "rtl/user_domain/tb_user_font_rom.sv", 
                                         172);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("--- Test 4: Read last byte of '~' (Offset 0x00000473) ---\n",0);
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__r_addr = 0x473U;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__timeout_count_gnt = 0U;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__timeout_count_rvalid = 0U;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__expected_grant 
        = (0x474U > (0xfffU & __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__r_addr));
    co_await vlSelfRef.__VtrigSched_h069df72c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_font_rom.clk_i)", 
                                                         "rtl/user_domain/tb_user_font_rom.sv", 
                                                         66);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__req_txn[0U] = 0U;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__req_txn[1U] = 0U;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__req_txn[2U] = 0U;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__req_txn[0U] 
        = (1U | __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__req_txn[0U]);
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__req_txn[1U] 
        = ((0x1ffU & __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__req_txn[1U]) 
           | ((IData)(((QData)((IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__3__r_addr)) 
                       << 1U)) << 9U));
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__req_txn[2U] 
        = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__3__r_addr)) 
                               << 1U)) >> 0x17U) | 
                     ((IData)((((QData)((IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__3__r_addr)) 
                                << 1U) >> 0x20U)) << 9U)));
    vlSelfRef.tb_user_font_rom__DOT__obi_req[0U] = 
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__req_txn[0U];
    vlSelfRef.tb_user_font_rom__DOT__obi_req[1U] = 
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__req_txn[1U];
    vlSelfRef.tb_user_font_rom__DOT__obi_req[2U] = 
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__req_txn[2U];
    vlSelfRef.tb_user_font_rom__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x (Expect Grant: %b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_font_rom__DOT__read_obi_rom__3__r_addr,
                 1,(IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__3__expected_grant));
    while ((((1U & (IData)((vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                            >> 1U))) != (IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__3__expected_grant)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_h069df72c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_font_rom.clk_i)", 
                                                             "rtl/user_domain/tb_user_font_rom.sv", 
                                                             77);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__timeout_count_gnt);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x3e8U, __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_font_rom.sv:83: Assertion failed in %Ntb_user_font_rom.read_obi_rom: %t : TB: Timeout waiting for OBI grant/no-grant during read from 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__r_addr,
                     1,(1U & (IData)((vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                                      >> 1U))));
        VL_STOP_MT("rtl/user_domain/tb_user_font_rom.sv", 83, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_font_rom.sv", 84, "");
    } else if (VL_UNLIKELY(((1U & (IData)((vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                                           >> 1U))) 
                            != (IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__3__expected_grant)))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_font_rom.sv:86: Assertion failed in %Ntb_user_font_rom.read_obi_rom: %t : TB: Unexpected OBI grant status during read from 0x%x. Expected GNT=%b, Got GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__r_addr,
                     1,(IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__3__expected_grant),
                     1,(1U & (IData)((vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                                      >> 1U))));
        VL_STOP_MT("rtl/user_domain/tb_user_font_rom.sv", 86, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_font_rom.sv", 87, "");
    }
    if (VL_UNLIKELY(__Vtask_tb_user_font_rom__DOT__read_obi_rom__3__expected_grant)) {
        VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__r_addr,
                     1,(1U & (IData)((vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                                      >> 1U))));
        co_await vlSelfRef.__VtrigSched_h069df72c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_font_rom.clk_i)", 
                                                             "rtl/user_domain/tb_user_font_rom.sv", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_user_font_rom__DOT__obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.tb_user_font_rom__DOT__obi_req[0U]);
        vlSelfRef.tb_user_font_rom__DOT__req_ongoing = 0U;
        VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        while (((~ (IData)(vlSelfRef.tb_user_font_rom__DOT__obi_rsp)) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h069df72c__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_font_rom.clk_i)", 
                                                                 "rtl/user_domain/tb_user_font_rom.sv", 
                                                                 100);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__timeout_count_rvalid);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x3e8U, __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_font_rom.sv:104: Assertion failed in %Ntb_user_font_rom.read_obi_rom: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_font_rom__DOT__read_obi_rom__3__r_addr,
                         1,(1U & (IData)(vlSelfRef.tb_user_font_rom__DOT__obi_rsp)));
            VL_STOP_MT("rtl/user_domain/tb_user_font_rom.sv", 104, "");
            VL_FINISH_MT("rtl/user_domain/tb_user_font_rom.sv", 105, "");
        }
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__rsp_r_chan_temp 
            = (0x1fffffffffULL & (vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                                  >> 2U));
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__r_data_val 
            = (IData)((__Vtask_tb_user_font_rom__DOT__read_obi_rom__3__rsp_r_chan_temp 
                       >> 5U));
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__r_err 
            = (1U & (IData)((__Vtask_tb_user_font_rom__DOT__read_obi_rom__3__rsp_r_chan_temp 
                             >> 1U)));
        VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__r_addr,
                     32,__Vtask_tb_user_font_rom__DOT__read_obi_rom__3__r_data_val,
                     1,(IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__3__r_err),
                     1,(1U & (IData)(vlSelfRef.tb_user_font_rom__DOT__obi_rsp)));
    } else {
        VL_WRITEF_NX("%t : TB: OBI Read No Grant Rcvd (Correct for invalid Addr=0x%x). GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__r_addr,
                     1,(1U & (IData)((vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                                      >> 1U))));
        co_await vlSelfRef.__VtrigSched_h069df72c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_font_rom.clk_i)", 
                                                             "rtl/user_domain/tb_user_font_rom.sv", 
                                                             117);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_user_font_rom__DOT__obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.tb_user_font_rom__DOT__obi_req[0U]);
        vlSelfRef.tb_user_font_rom__DOT__req_ongoing = 0U;
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__r_data_val = 0xdeadbeefU;
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__r_err = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h069df72c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_font_rom.clk_i)", 
                                                         "rtl/user_domain/tb_user_font_rom.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_font_rom__DOT__obi_req[0U] = 0U;
    vlSelfRef.tb_user_font_rom__DOT__obi_req[1U] = 0U;
    vlSelfRef.tb_user_font_rom__DOT__obi_req[2U] = 0U;
    vlSelfRef.tb_user_font_rom__DOT__unnamedblk1__DOT__read_data 
        = __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__r_data_val;
    vlSelfRef.tb_user_font_rom__DOT__unnamedblk1__DOT__read_err 
        = __Vtask_tb_user_font_rom__DOT__read_obi_rom__3__r_err;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_user_font_rom__DOT__unnamedblk1__DOT__read_err) 
                     | (0U != (0xffU & vlSelfRef.tb_user_font_rom__DOT__unnamedblk1__DOT__read_data))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_font_rom.sv:179: Assertion failed in %Ntb_user_font_rom.unnamedblk1: %t : TB_ERROR: Test 4 Failed. Expected 0x00, Got 0x%x, Err=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,8,
                     (0xffU & vlSelfRef.tb_user_font_rom__DOT__unnamedblk1__DOT__read_data),
                     1,(IData)(vlSelfRef.tb_user_font_rom__DOT__unnamedblk1__DOT__read_err));
        VL_STOP_MT("rtl/user_domain/tb_user_font_rom.sv", 179, "");
    } else {
        VL_WRITEF_NX("%t : TB_PASS: Test 4 Passed.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    co_await vlSelfRef.__VdlySched.delay(0x3d090ULL, 
                                         nullptr, "rtl/user_domain/tb_user_font_rom.sv", 
                                         181);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("--- Test 5: Read out of bounds (Offset 0x00000474) ---\n",0);
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__r_addr = 0x474U;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__timeout_count_gnt = 0U;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__timeout_count_rvalid = 0U;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__expected_grant 
        = (0x474U > (0xfffU & __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__r_addr));
    co_await vlSelfRef.__VtrigSched_h069df72c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_font_rom.clk_i)", 
                                                         "rtl/user_domain/tb_user_font_rom.sv", 
                                                         66);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__req_txn[0U] = 0U;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__req_txn[1U] = 0U;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__req_txn[2U] = 0U;
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__req_txn[0U] 
        = (1U | __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__req_txn[0U]);
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__req_txn[1U] 
        = ((0x1ffU & __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__req_txn[1U]) 
           | ((IData)(((QData)((IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__4__r_addr)) 
                       << 1U)) << 9U));
    __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__req_txn[2U] 
        = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__4__r_addr)) 
                               << 1U)) >> 0x17U) | 
                     ((IData)((((QData)((IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__4__r_addr)) 
                                << 1U) >> 0x20U)) << 9U)));
    vlSelfRef.tb_user_font_rom__DOT__obi_req[0U] = 
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__req_txn[0U];
    vlSelfRef.tb_user_font_rom__DOT__obi_req[1U] = 
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__req_txn[1U];
    vlSelfRef.tb_user_font_rom__DOT__obi_req[2U] = 
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__req_txn[2U];
    vlSelfRef.tb_user_font_rom__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : Addr=0x%x (Expect Grant: %b)\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,__Vtask_tb_user_font_rom__DOT__read_obi_rom__4__r_addr,
                 1,(IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__4__expected_grant));
    while ((((1U & (IData)((vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                            >> 1U))) != (IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__4__expected_grant)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_h069df72c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_font_rom.clk_i)", 
                                                             "rtl/user_domain/tb_user_font_rom.sv", 
                                                             77);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__timeout_count_gnt);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x3e8U, __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_font_rom.sv:83: Assertion failed in %Ntb_user_font_rom.read_obi_rom: %t : TB: Timeout waiting for OBI grant/no-grant during read from 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__r_addr,
                     1,(1U & (IData)((vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                                      >> 1U))));
        VL_STOP_MT("rtl/user_domain/tb_user_font_rom.sv", 83, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_font_rom.sv", 84, "");
    } else if (VL_UNLIKELY(((1U & (IData)((vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                                           >> 1U))) 
                            != (IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__4__expected_grant)))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_font_rom.sv:86: Assertion failed in %Ntb_user_font_rom.read_obi_rom: %t : TB: Unexpected OBI grant status during read from 0x%x. Expected GNT=%b, Got GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__r_addr,
                     1,(IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__4__expected_grant),
                     1,(1U & (IData)((vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                                      >> 1U))));
        VL_STOP_MT("rtl/user_domain/tb_user_font_rom.sv", 86, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_font_rom.sv", 87, "");
    }
    if (VL_UNLIKELY(__Vtask_tb_user_font_rom__DOT__read_obi_rom__4__expected_grant)) {
        VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: Addr=0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__r_addr,
                     1,(1U & (IData)((vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                                      >> 1U))));
        co_await vlSelfRef.__VtrigSched_h069df72c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_font_rom.clk_i)", 
                                                             "rtl/user_domain/tb_user_font_rom.sv", 
                                                             93);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_user_font_rom__DOT__obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.tb_user_font_rom__DOT__obi_req[0U]);
        vlSelfRef.tb_user_font_rom__DOT__req_ongoing = 0U;
        VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
        while (((~ (IData)(vlSelfRef.tb_user_font_rom__DOT__obi_rsp)) 
                & VL_GTS_III(32, 0x3e8U, __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__timeout_count_rvalid))) {
            co_await vlSelfRef.__VtrigSched_h069df72c__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge tb_user_font_rom.clk_i)", 
                                                                 "rtl/user_domain/tb_user_font_rom.sv", 
                                                                 100);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__timeout_count_rvalid 
                = ((IData)(1U) + __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__timeout_count_rvalid);
        }
        if (VL_UNLIKELY(VL_LTES_III(32, 0x3e8U, __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__timeout_count_rvalid))) {
            VL_WRITEF_NX("[%0t] %%Error: tb_user_font_rom.sv:104: Assertion failed in %Ntb_user_font_rom.read_obi_rom: %t : TB: Timeout waiting for OBI rvalid during read from 0x%x. RVALID=%b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,32,__Vtask_tb_user_font_rom__DOT__read_obi_rom__4__r_addr,
                         1,(1U & (IData)(vlSelfRef.tb_user_font_rom__DOT__obi_rsp)));
            VL_STOP_MT("rtl/user_domain/tb_user_font_rom.sv", 104, "");
            VL_FINISH_MT("rtl/user_domain/tb_user_font_rom.sv", 105, "");
        }
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__rsp_r_chan_temp 
            = (0x1fffffffffULL & (vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                                  >> 2U));
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__r_data_val 
            = (IData)((__Vtask_tb_user_font_rom__DOT__read_obi_rom__4__rsp_r_chan_temp 
                       >> 5U));
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__r_err 
            = (1U & (IData)((__Vtask_tb_user_font_rom__DOT__read_obi_rom__4__rsp_r_chan_temp 
                             >> 1U)));
        VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: Addr=0x%x Data=0x%08x Err=%b RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__r_addr,
                     32,__Vtask_tb_user_font_rom__DOT__read_obi_rom__4__r_data_val,
                     1,(IData)(__Vtask_tb_user_font_rom__DOT__read_obi_rom__4__r_err),
                     1,(1U & (IData)(vlSelfRef.tb_user_font_rom__DOT__obi_rsp)));
    } else {
        VL_WRITEF_NX("%t : TB: OBI Read No Grant Rcvd (Correct for invalid Addr=0x%x). GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__r_addr,
                     1,(1U & (IData)((vlSelfRef.tb_user_font_rom__DOT__obi_rsp 
                                      >> 1U))));
        co_await vlSelfRef.__VtrigSched_h069df72c__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_font_rom.clk_i)", 
                                                             "rtl/user_domain/tb_user_font_rom.sv", 
                                                             117);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_user_font_rom__DOT__obi_req[0U] 
            = (0xfffffffeU & vlSelfRef.tb_user_font_rom__DOT__obi_req[0U]);
        vlSelfRef.tb_user_font_rom__DOT__req_ongoing = 0U;
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__r_data_val = 0xdeadbeefU;
        __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__r_err = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h069df72c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_font_rom.clk_i)", 
                                                         "rtl/user_domain/tb_user_font_rom.sv", 
                                                         124);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_font_rom__DOT__obi_req[0U] = 0U;
    vlSelfRef.tb_user_font_rom__DOT__obi_req[1U] = 0U;
    vlSelfRef.tb_user_font_rom__DOT__obi_req[2U] = 0U;
    vlSelfRef.tb_user_font_rom__DOT__unnamedblk1__DOT__read_data 
        = __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__r_data_val;
    vlSelfRef.tb_user_font_rom__DOT__unnamedblk1__DOT__read_err 
        = __Vtask_tb_user_font_rom__DOT__read_obi_rom__4__r_err;
    if (VL_LIKELY(vlSelfRef.tb_user_font_rom__DOT__unnamedblk1__DOT__read_err)) {
        VL_WRITEF_NX("%t : TB_PASS: Test 5 Passed (Correctly detected OBI error).\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
    } else {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_font_rom.sv:188: Assertion failed in %Ntb_user_font_rom.unnamedblk1: %t : TB_ERROR: Test 5 Failed. Expected OBI error for out-of-bounds read, read_err=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_user_font_rom__DOT__unnamedblk1__DOT__read_err));
        VL_STOP_MT("rtl/user_domain/tb_user_font_rom.sv", 188, "");
    }
    co_await vlSelfRef.__VdlySched.delay(0x3d090ULL, 
                                         nullptr, "rtl/user_domain/tb_user_font_rom.sv", 
                                         192);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x7a120ULL, 
                                         nullptr, "rtl/user_domain/tb_user_font_rom.sv", 
                                         195);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%t : TB: Test Sequence for user_font_rom Complete.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    VL_FINISH_MT("rtl/user_domain/tb_user_font_rom.sv", 197, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_user_font_rom___024root___dump_triggers__act(Vtb_user_font_rom___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_user_font_rom___024root___eval_triggers__act(Vtb_user_font_rom___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_font_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_font_rom___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_user_font_rom__DOT__clk_i) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_font_rom__DOT__clk_i__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.tb_user_font_rom__DOT__rst_ni)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_font_rom__DOT__rst_ni__0)));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_font_rom__DOT__clk_i__0 
        = vlSelfRef.tb_user_font_rom__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_font_rom__DOT__rst_ni__0 
        = vlSelfRef.tb_user_font_rom__DOT__rst_ni;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_user_font_rom___024root___dump_triggers__act(vlSelf);
    }
#endif
}
