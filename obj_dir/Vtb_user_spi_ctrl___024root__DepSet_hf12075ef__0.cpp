// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_user_spi_ctrl.h for the primary calling header

#include "Vtb_user_spi_ctrl__pch.h"
#include "Vtb_user_spi_ctrl__Syms.h"
#include "Vtb_user_spi_ctrl___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_user_spi_ctrl___024root___eval_initial__TOP__Vtiming__1(Vtb_user_spi_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_spi_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_spi_ctrl___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*11:0*/ __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__w_addr_offset;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__w_addr_offset = 0;
    IData/*31:0*/ __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__w_data;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__w_data = 0;
    IData/*31:0*/ __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__timeout_count;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__timeout_count = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__req_txn);
    SData/*11:0*/ __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__w_addr_offset;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__w_addr_offset = 0;
    IData/*31:0*/ __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__w_data;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__w_data = 0;
    IData/*31:0*/ __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__timeout_count;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__timeout_count = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__req_txn);
    SData/*11:0*/ __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__w_addr_offset;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__w_addr_offset = 0;
    IData/*31:0*/ __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__w_data;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__w_data = 0;
    IData/*31:0*/ __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__timeout_count;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__timeout_count = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__req_txn);
    SData/*11:0*/ __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__r_addr_offset;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__r_addr_offset = 0;
    IData/*31:0*/ __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__r_data_val;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__r_data_val = 0;
    IData/*31:0*/ __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__timeout_count_gnt;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__timeout_count_rvalid;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__req_txn);
    QData/*36:0*/ __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__rsp_r_chan_temp;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__rsp_r_chan_temp = 0;
    SData/*11:0*/ __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__w_addr_offset;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__w_addr_offset = 0;
    IData/*31:0*/ __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__w_data;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__w_data = 0;
    IData/*31:0*/ __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__timeout_count;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__timeout_count = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__req_txn);
    SData/*11:0*/ __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__r_addr_offset;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__r_addr_offset = 0;
    IData/*31:0*/ __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__r_data_val;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__r_data_val = 0;
    IData/*31:0*/ __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__timeout_count_gnt;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__timeout_count_gnt = 0;
    IData/*31:0*/ __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__timeout_count_rvalid;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__timeout_count_rvalid = 0;
    VlWide<3>/*73:0*/ __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__req_txn;
    VL_ZERO_W(74, __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__req_txn);
    QData/*36:0*/ __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__rsp_r_chan_temp;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__rsp_r_chan_temp = 0;
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x6374726cU;
    __Vtemp_1[2U] = 0x7370695fU;
    __Vtemp_1[3U] = 0x7365725fU;
    __Vtemp_1[4U] = 0x74625f75U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_user_spi_ctrl__DOT__rst_ni = 0U;
    vlSelfRef.tb_user_spi_ctrl__DOT__req_ongoing = 0U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U] = 0U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[1U] = 0U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[2U] = 0U;
    VL_WRITEF_NX("%t : TB: Asserting Reset\n",0,64,
                 VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                         167);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_spi_ctrl__DOT__rst_ni = 1U;
    VL_WRITEF_NX("%t : TB: Deasserting Reset\n",0,64,
                 VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         170);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%t : TB: Starting Test Sequence for user_spi_ctrl...\n--- Test 1: Set CS1 active, DC command ---\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__w_data = 2U;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__w_addr_offset = 0U;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__req_txn[0U] = 0U;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__req_txn[1U] = 0U;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__req_txn[2U] = 0U;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__req_txn[0U] 
        = (1U | __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__req_txn[0U]);
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__req_txn[0U] 
        = ((0x1fU & __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__req_txn[0U]) 
           | ((IData)((0xf00000000ULL | (QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__w_data)))) 
              << 5U));
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__req_txn[1U] 
        = (((IData)((0xf00000000ULL | (QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__w_data)))) 
            >> 0x1bU) | (((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__w_addr_offset)) 
                                           << 1U))) 
                          << 9U) | ((IData)(((0xf00000000ULL 
                                              | (QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__w_data))) 
                                             >> 0x20U)) 
                                    << 5U)));
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__req_txn[2U] 
        = (0x3ffU & (((0x1fU & ((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__w_addr_offset)) 
                                                 << 1U))) 
                                >> 0x17U)) | ((IData)(
                                                      ((0xf00000000ULL 
                                                        | (QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__w_data))) 
                                                       >> 0x20U)) 
                                              >> 0x1bU)) 
                     | ((0x1e0U & ((IData)((1ULL | 
                                            ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__w_addr_offset)) 
                                             << 1U))) 
                                   >> 0x17U)) | ((IData)(
                                                         ((1ULL 
                                                           | ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__w_addr_offset)) 
                                                              << 1U)) 
                                                          >> 0x20U)) 
                                                 << 9U))));
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U] = 
        __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__req_txn[0U];
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[1U] = 
        __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__req_txn[1U];
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[2U] = 
        __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__req_txn[2U];
    vlSelfRef.tb_user_spi_ctrl__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Write Req : AddrOffset=0x%x Data=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,12,(IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__w_addr_offset),
                 32,__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__w_data);
    while (((~ (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp 
                        >> 1U))) & VL_GTS_III(32, 0x3e8U, __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__timeout_count 
            = ((IData)(1U) + __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__timeout_count);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x3e8U, __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_spi_ctrl.sv:98: Assertion failed in %Ntb_user_spi_ctrl.write_obi_ctrl: %t : TB: Timeout waiting for OBI grant during write to offset 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,12,
                     (IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__w_addr_offset),
                     1,(1U & (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp 
                                      >> 1U))));
        VL_STOP_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 98, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 99, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Write Gnt Rcvd: AddrOffset=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,12,(IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__0__w_addr_offset),
                 1,(1U & (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp 
                                  >> 1U))));
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         103);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U] = 
        (0xfffffffeU & vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U]);
    vlSelfRef.tb_user_spi_ctrl__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Write Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U] = 0U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[1U] = 0U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[2U] = 0U;
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         177);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & (((IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs1_n_q) 
                            | (~ (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs2_n_q))) 
                           | (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__dc_q))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_spi_ctrl.sv:179: Assertion failed in %Ntb_user_spi_ctrl: %t : TB_ERROR: Test 1 failed. CS1_N=%b, CS2_N=%b, DC=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs1_n_q),
                     1,vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs2_n_q,
                     1,(IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__dc_q));
        VL_STOP_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 179, "");
    } else {
        VL_WRITEF_NX("%t : TB_PASS: Test 1. CS1_N=%b, CS2_N=%b, DC=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs1_n_q),
                     1,vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs2_n_q,
                     1,(IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__dc_q));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3d090ULL, 
                                         nullptr, "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                         183);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("--- Test 2: Set CS2 active, DC data ---\n",0);
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__w_data = 5U;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__w_addr_offset = 0U;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__req_txn[0U] = 0U;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__req_txn[1U] = 0U;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__req_txn[2U] = 0U;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__req_txn[0U] 
        = (1U | __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__req_txn[0U]);
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__req_txn[0U] 
        = ((0x1fU & __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__req_txn[0U]) 
           | ((IData)((0xf00000000ULL | (QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__w_data)))) 
              << 5U));
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__req_txn[1U] 
        = (((IData)((0xf00000000ULL | (QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__w_data)))) 
            >> 0x1bU) | (((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__w_addr_offset)) 
                                           << 1U))) 
                          << 9U) | ((IData)(((0xf00000000ULL 
                                              | (QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__w_data))) 
                                             >> 0x20U)) 
                                    << 5U)));
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__req_txn[2U] 
        = (0x3ffU & (((0x1fU & ((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__w_addr_offset)) 
                                                 << 1U))) 
                                >> 0x17U)) | ((IData)(
                                                      ((0xf00000000ULL 
                                                        | (QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__w_data))) 
                                                       >> 0x20U)) 
                                              >> 0x1bU)) 
                     | ((0x1e0U & ((IData)((1ULL | 
                                            ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__w_addr_offset)) 
                                             << 1U))) 
                                   >> 0x17U)) | ((IData)(
                                                         ((1ULL 
                                                           | ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__w_addr_offset)) 
                                                              << 1U)) 
                                                          >> 0x20U)) 
                                                 << 9U))));
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U] = 
        __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__req_txn[0U];
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[1U] = 
        __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__req_txn[1U];
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[2U] = 
        __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__req_txn[2U];
    vlSelfRef.tb_user_spi_ctrl__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Write Req : AddrOffset=0x%x Data=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,12,(IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__w_addr_offset),
                 32,__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__w_data);
    while (((~ (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp 
                        >> 1U))) & VL_GTS_III(32, 0x3e8U, __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__timeout_count 
            = ((IData)(1U) + __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__timeout_count);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x3e8U, __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_spi_ctrl.sv:98: Assertion failed in %Ntb_user_spi_ctrl.write_obi_ctrl: %t : TB: Timeout waiting for OBI grant during write to offset 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,12,
                     (IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__w_addr_offset),
                     1,(1U & (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp 
                                      >> 1U))));
        VL_STOP_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 98, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 99, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Write Gnt Rcvd: AddrOffset=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,12,(IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__1__w_addr_offset),
                 1,(1U & (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp 
                                  >> 1U))));
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         103);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U] = 
        (0xfffffffeU & vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U]);
    vlSelfRef.tb_user_spi_ctrl__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Write Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U] = 0U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[1U] = 0U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[2U] = 0U;
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         188);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs1_n_q)) 
                            | (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs2_n_q)) 
                           | (~ (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__dc_q)))))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_spi_ctrl.sv:190: Assertion failed in %Ntb_user_spi_ctrl: %t : TB_ERROR: Test 2 failed. CS1_N=%b, CS2_N=%b, DC=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs1_n_q),
                     1,vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs2_n_q,
                     1,(IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__dc_q));
        VL_STOP_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 190, "");
    } else {
        VL_WRITEF_NX("%t : TB_PASS: Test 2. CS1_N=%b, CS2_N=%b, DC=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs1_n_q),
                     1,vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__cs2_n_q,
                     1,(IData)(vlSelfRef.tb_user_spi_ctrl__DOT__dut__DOT__dc_q));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3d090ULL, 
                                         nullptr, "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                         194);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("--- Test 3: Trigger PRNG and Read ---\n",0);
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__w_data = 1U;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__w_addr_offset = 4U;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__req_txn[0U] = 0U;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__req_txn[1U] = 0U;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__req_txn[2U] = 0U;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__req_txn[0U] 
        = (1U | __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__req_txn[0U]);
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__req_txn[0U] 
        = ((0x1fU & __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__req_txn[0U]) 
           | ((IData)((0xf00000000ULL | (QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__w_data)))) 
              << 5U));
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__req_txn[1U] 
        = (((IData)((0xf00000000ULL | (QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__w_data)))) 
            >> 0x1bU) | (((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__w_addr_offset)) 
                                           << 1U))) 
                          << 9U) | ((IData)(((0xf00000000ULL 
                                              | (QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__w_data))) 
                                             >> 0x20U)) 
                                    << 5U)));
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__req_txn[2U] 
        = (0x3ffU & (((0x1fU & ((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__w_addr_offset)) 
                                                 << 1U))) 
                                >> 0x17U)) | ((IData)(
                                                      ((0xf00000000ULL 
                                                        | (QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__w_data))) 
                                                       >> 0x20U)) 
                                              >> 0x1bU)) 
                     | ((0x1e0U & ((IData)((1ULL | 
                                            ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__w_addr_offset)) 
                                             << 1U))) 
                                   >> 0x17U)) | ((IData)(
                                                         ((1ULL 
                                                           | ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__w_addr_offset)) 
                                                              << 1U)) 
                                                          >> 0x20U)) 
                                                 << 9U))));
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U] = 
        __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__req_txn[0U];
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[1U] = 
        __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__req_txn[1U];
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[2U] = 
        __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__req_txn[2U];
    vlSelfRef.tb_user_spi_ctrl__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Write Req : AddrOffset=0x%x Data=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,12,(IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__w_addr_offset),
                 32,__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__w_data);
    while (((~ (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp 
                        >> 1U))) & VL_GTS_III(32, 0x3e8U, __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__timeout_count 
            = ((IData)(1U) + __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__timeout_count);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x3e8U, __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_spi_ctrl.sv:98: Assertion failed in %Ntb_user_spi_ctrl.write_obi_ctrl: %t : TB: Timeout waiting for OBI grant during write to offset 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,12,
                     (IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__w_addr_offset),
                     1,(1U & (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp 
                                      >> 1U))));
        VL_STOP_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 98, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 99, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Write Gnt Rcvd: AddrOffset=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,12,(IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__2__w_addr_offset),
                 1,(1U & (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp 
                                  >> 1U))));
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         103);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U] = 
        (0xfffffffeU & vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U]);
    vlSelfRef.tb_user_spi_ctrl__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Write Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U] = 0U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[1U] = 0U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[2U] = 0U;
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         199);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         200);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__r_addr_offset = 8U;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__timeout_count_gnt = 0U;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         116);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__req_txn[0U] = 0U;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__req_txn[1U] = 0U;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__req_txn[2U] = 0U;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__req_txn[0U] 
        = (1U | __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__req_txn[0U]);
    __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__req_txn[1U] 
        = ((0x1ffU & __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__req_txn[1U]) 
           | ((IData)(((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__r_addr_offset)) 
                       << 1U)) << 9U));
    __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__req_txn[2U] 
        = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__r_addr_offset)) 
                               << 1U)) >> 0x17U) | 
                     ((IData)((((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__r_addr_offset)) 
                                << 1U) >> 0x20U)) << 9U)));
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U] = 
        __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__req_txn[0U];
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[1U] = 
        __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__req_txn[1U];
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[2U] = 
        __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__req_txn[2U];
    vlSelfRef.tb_user_spi_ctrl__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : AddrOffset=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,12,(IData)(__Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__r_addr_offset));
    while (((~ (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp 
                        >> 1U))) & VL_GTS_III(32, 0x3e8U, __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                             126);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__timeout_count_gnt);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x3e8U, __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_spi_ctrl.sv:130: Assertion failed in %Ntb_user_spi_ctrl.read_obi_ctrl: %t : TB: Timeout waiting for OBI grant during read from offset 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,12,
                     (IData)(__Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__r_addr_offset),
                     1,(1U & (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp 
                                      >> 1U))));
        VL_STOP_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 130, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 131, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: AddrOffset=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,12,(IData)(__Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__r_addr_offset),
                 1,(1U & (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp 
                                  >> 1U))));
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         135);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U] = 
        (0xfffffffeU & vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U]);
    vlSelfRef.tb_user_spi_ctrl__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    while (((~ (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                             141);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x3e8U, __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_spi_ctrl.sv:145: Assertion failed in %Ntb_user_spi_ctrl.read_obi_ctrl: %t : TB: Timeout waiting for OBI rvalid during read from offset 0x%x. RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,12,
                     (IData)(__Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__r_addr_offset),
                     1,(1U & (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp)));
        VL_STOP_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 145, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 146, "");
    }
    __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__rsp_r_chan_temp 
        = (0x1fffffffffULL & (vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp 
                              >> 2U));
    __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__r_data_val 
        = (IData)((__Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__rsp_r_chan_temp 
                   >> 5U));
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: AddrOffset=0x%x Data=0x%08x. RVALID=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,12,(IData)(__Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__r_addr_offset),
                 32,__Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__r_data_val,
                 1,(1U & (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp)));
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         151);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U] = 0U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[1U] = 0U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[2U] = 0U;
    vlSelfRef.tb_user_spi_ctrl__DOT__prng_val1 = __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__3__r_data_val;
    VL_WRITEF_NX("%t : TB: PRNG Value 1 = 0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_user_spi_ctrl__DOT__prng_val1);
    co_await vlSelfRef.__VdlySched.delay(0x3d090ULL, 
                                         nullptr, "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                         203);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("--- Test 4: Trigger PRNG again and Read ---\n",0);
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__w_data = 1U;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__w_addr_offset = 4U;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__timeout_count = 0U;
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__req_txn[0U] = 0U;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__req_txn[1U] = 0U;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__req_txn[2U] = 0U;
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__req_txn[0U] 
        = (1U | __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__req_txn[0U]);
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__req_txn[0U] 
        = ((0x1fU & __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__req_txn[0U]) 
           | ((IData)((0xf00000000ULL | (QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__w_data)))) 
              << 5U));
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__req_txn[1U] 
        = (((IData)((0xf00000000ULL | (QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__w_data)))) 
            >> 0x1bU) | (((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__w_addr_offset)) 
                                           << 1U))) 
                          << 9U) | ((IData)(((0xf00000000ULL 
                                              | (QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__w_data))) 
                                             >> 0x20U)) 
                                    << 5U)));
    __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__req_txn[2U] 
        = (0x3ffU & (((0x1fU & ((IData)((1ULL | ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__w_addr_offset)) 
                                                 << 1U))) 
                                >> 0x17U)) | ((IData)(
                                                      ((0xf00000000ULL 
                                                        | (QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__w_data))) 
                                                       >> 0x20U)) 
                                              >> 0x1bU)) 
                     | ((0x1e0U & ((IData)((1ULL | 
                                            ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__w_addr_offset)) 
                                             << 1U))) 
                                   >> 0x17U)) | ((IData)(
                                                         ((1ULL 
                                                           | ((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__w_addr_offset)) 
                                                              << 1U)) 
                                                          >> 0x20U)) 
                                                 << 9U))));
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U] = 
        __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__req_txn[0U];
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[1U] = 
        __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__req_txn[1U];
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[2U] = 
        __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__req_txn[2U];
    vlSelfRef.tb_user_spi_ctrl__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Write Req : AddrOffset=0x%x Data=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,12,(IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__w_addr_offset),
                 32,__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__w_data);
    while (((~ (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp 
                        >> 1U))) & VL_GTS_III(32, 0x3e8U, __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__timeout_count))) {
        co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                             94);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__timeout_count 
            = ((IData)(1U) + __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__timeout_count);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x3e8U, __Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__timeout_count))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_spi_ctrl.sv:98: Assertion failed in %Ntb_user_spi_ctrl.write_obi_ctrl: %t : TB: Timeout waiting for OBI grant during write to offset 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,12,
                     (IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__w_addr_offset),
                     1,(1U & (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp 
                                      >> 1U))));
        VL_STOP_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 98, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 99, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Write Gnt Rcvd: AddrOffset=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,12,(IData)(__Vtask_tb_user_spi_ctrl__DOT__write_obi_ctrl__4__w_addr_offset),
                 1,(1U & (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp 
                                  >> 1U))));
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         103);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U] = 
        (0xfffffffeU & vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U]);
    vlSelfRef.tb_user_spi_ctrl__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Write Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         107);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U] = 0U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[1U] = 0U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[2U] = 0U;
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         208);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         209);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__r_addr_offset = 8U;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__timeout_count_gnt = 0U;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__timeout_count_rvalid = 0U;
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         116);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__req_txn[0U] = 0U;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__req_txn[1U] = 0U;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__req_txn[2U] = 0U;
    __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__req_txn[0U] 
        = (1U | __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__req_txn[0U]);
    __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__req_txn[1U] 
        = ((0x1ffU & __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__req_txn[1U]) 
           | ((IData)(((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__r_addr_offset)) 
                       << 1U)) << 9U));
    __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__req_txn[2U] 
        = (0x3ffU & (((IData)(((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__r_addr_offset)) 
                               << 1U)) >> 0x17U) | 
                     ((IData)((((QData)((IData)(__Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__r_addr_offset)) 
                                << 1U) >> 0x20U)) << 9U)));
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U] = 
        __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__req_txn[0U];
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[1U] = 
        __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__req_txn[1U];
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[2U] = 
        __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__req_txn[2U];
    vlSelfRef.tb_user_spi_ctrl__DOT__req_ongoing = 1U;
    VL_WRITEF_NX("%t : TB: OBI Read Req  : AddrOffset=0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,12,(IData)(__Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__r_addr_offset));
    while (((~ (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp 
                        >> 1U))) & VL_GTS_III(32, 0x3e8U, __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__timeout_count_gnt))) {
        co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                             126);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__timeout_count_gnt 
            = ((IData)(1U) + __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__timeout_count_gnt);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x3e8U, __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__timeout_count_gnt))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_spi_ctrl.sv:130: Assertion failed in %Ntb_user_spi_ctrl.read_obi_ctrl: %t : TB: Timeout waiting for OBI grant during read from offset 0x%x. GNT=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,12,
                     (IData)(__Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__r_addr_offset),
                     1,(1U & (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp 
                                      >> 1U))));
        VL_STOP_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 130, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 131, "");
    }
    VL_WRITEF_NX("%t : TB: OBI Read Gnt Rcvd: AddrOffset=0x%x. GNT=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,12,(IData)(__Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__r_addr_offset),
                 1,(1U & (IData)((vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp 
                                  >> 1U))));
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         135);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U] = 
        (0xfffffffeU & vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U]);
    vlSelfRef.tb_user_spi_ctrl__DOT__req_ongoing = 0U;
    VL_WRITEF_NX("%t : TB: OBI Read Req Deasserted.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    while (((~ (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp)) 
            & VL_GTS_III(32, 0x3e8U, __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__timeout_count_rvalid))) {
        co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                             "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                             141);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__timeout_count_rvalid 
            = ((IData)(1U) + __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__timeout_count_rvalid);
    }
    if (VL_UNLIKELY(VL_LTES_III(32, 0x3e8U, __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__timeout_count_rvalid))) {
        VL_WRITEF_NX("[%0t] %%Error: tb_user_spi_ctrl.sv:145: Assertion failed in %Ntb_user_spi_ctrl.read_obi_ctrl: %t : TB: Timeout waiting for OBI rvalid during read from offset 0x%x. RVALID=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9,12,
                     (IData)(__Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__r_addr_offset),
                     1,(1U & (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp)));
        VL_STOP_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 145, "");
        VL_FINISH_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 146, "");
    }
    __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__rsp_r_chan_temp 
        = (0x1fffffffffULL & (vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp 
                              >> 2U));
    __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__r_data_val 
        = (IData)((__Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__rsp_r_chan_temp 
                   >> 5U));
    VL_WRITEF_NX("%t : TB: OBI Read Data Rcvd: AddrOffset=0x%x Data=0x%08x. RVALID=%b\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,12,(IData)(__Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__r_addr_offset),
                 32,__Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__r_data_val,
                 1,(1U & (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__obi_rsp)));
    co_await vlSelfRef.__VtrigSched_he028f39d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_user_spi_ctrl.clk_i)", 
                                                         "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                                         151);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[0U] = 0U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[1U] = 0U;
    vlSelfRef.tb_user_spi_ctrl__DOT__obi_req[2U] = 0U;
    vlSelfRef.tb_user_spi_ctrl__DOT__prng_val2 = __Vtask_tb_user_spi_ctrl__DOT__read_obi_ctrl__5__r_data_val;
    VL_WRITEF_NX("%t : TB: PRNG Value 2 = 0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_user_spi_ctrl__DOT__prng_val2);
    if ((vlSelfRef.tb_user_spi_ctrl__DOT__prng_val1 
         == vlSelfRef.tb_user_spi_ctrl__DOT__prng_val2)) {
        VL_WRITEF_NX("[%0t] %%Warning: tb_user_spi_ctrl.sv:214: %Ntb_user_spi_ctrl: %t : TB_WARN: PRNG values are the same. Check PRNG logic or seed.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                     64,VL_TIME_UNITED_Q(1000),-9);
    } else {
        VL_WRITEF_NX("%t : TB_PASS: PRNG values differ or seed is zero.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    co_await vlSelfRef.__VdlySched.delay(0x7a120ULL, 
                                         nullptr, "rtl/user_domain/tb_user_spi_ctrl.sv", 
                                         222);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("%t : TB: Test Sequence for user_spi_ctrl Complete.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    VL_FINISH_MT("rtl/user_domain/tb_user_spi_ctrl.sv", 224, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_user_spi_ctrl___024root___dump_triggers__act(Vtb_user_spi_ctrl___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_user_spi_ctrl___024root___eval_triggers__act(Vtb_user_spi_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_spi_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_spi_ctrl___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_user_spi_ctrl__DOT__clk_i) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_spi_ctrl__DOT__clk_i__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.tb_user_spi_ctrl__DOT__rst_ni)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_spi_ctrl__DOT__rst_ni__0)));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_spi_ctrl__DOT__clk_i__0 
        = vlSelfRef.tb_user_spi_ctrl__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_spi_ctrl__DOT__rst_ni__0 
        = vlSelfRef.tb_user_spi_ctrl__DOT__rst_ni;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_user_spi_ctrl___024root___dump_triggers__act(vlSelf);
    }
#endif
}
