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
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x68696674U;
    __Vtemp_1[2U] = 0x786f7273U;
    __Vtemp_1[3U] = 0x74625fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_xorshift__DOT__rst_ni = 0U;
    vlSelfRef.tb_xorshift__DOT__en_i = 0U;
    VL_WRITEF_NX("%t : TB: Asserting Reset\n",0,64,
                 VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "rtl/user_domain/tb_xorshift.sv", 
                                         43);
    vlSelfRef.tb_xorshift__DOT__rst_ni = 1U;
    VL_WRITEF_NX("%t : TB: Deasserting Reset. Initial rand_o = 0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_xorshift__DOT__dut__DOT__state_q);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xorshift.clk_i)", 
                                                         "rtl/user_domain/tb_xorshift.sv", 
                                                         46);
    VL_WRITEF_NX("--- Test 1: Enable for one cycle ---\n",0);
    Verilated::runFlushCallbacks();
    vlSelfRef.tb_xorshift__DOT__en_i = 1U;
    co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xorshift.clk_i)", 
                                                         "rtl/user_domain/tb_xorshift.sv", 
                                                         51);
    vlSelfRef.tb_xorshift__DOT__en_i = 0U;
    co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xorshift.clk_i)", 
                                                         "rtl/user_domain/tb_xorshift.sv", 
                                                         53);
    VL_WRITEF_NX("%t : TB: rand_o after 1st enable = 0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_xorshift__DOT__dut__DOT__state_q);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "rtl/user_domain/tb_xorshift.sv", 
                                         56);
    VL_WRITEF_NX("--- Test 2: Enable for another cycle ---\n",0);
    Verilated::runFlushCallbacks();
    vlSelfRef.tb_xorshift__DOT__en_i = 1U;
    co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xorshift.clk_i)", 
                                                         "rtl/user_domain/tb_xorshift.sv", 
                                                         61);
    vlSelfRef.tb_xorshift__DOT__en_i = 0U;
    co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xorshift.clk_i)", 
                                                         "rtl/user_domain/tb_xorshift.sv", 
                                                         63);
    VL_WRITEF_NX("%t : TB: rand_o after 2nd enable = 0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_xorshift__DOT__dut__DOT__state_q);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "rtl/user_domain/tb_xorshift.sv", 
                                         66);
    VL_WRITEF_NX("--- Test 3: Enable for 3 consecutive cycles ---\n",0);
    Verilated::runFlushCallbacks();
    vlSelfRef.tb_xorshift__DOT__en_i = 1U;
    co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xorshift.clk_i)", 
                                                         "rtl/user_domain/tb_xorshift.sv", 
                                                         71);
    VL_WRITEF_NX("%t : TB: rand_o after 3rd enable (cycle 1) = 0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_xorshift__DOT__dut__DOT__state_q);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xorshift.clk_i)", 
                                                         "rtl/user_domain/tb_xorshift.sv", 
                                                         73);
    VL_WRITEF_NX("%t : TB: rand_o after 3rd enable (cycle 2) = 0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_xorshift__DOT__dut__DOT__state_q);
    Verilated::runFlushCallbacks();
    co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xorshift.clk_i)", 
                                                         "rtl/user_domain/tb_xorshift.sv", 
                                                         75);
    VL_WRITEF_NX("%t : TB: rand_o after 3rd enable (cycle 3) = 0x%x\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.tb_xorshift__DOT__dut__DOT__state_q);
    Verilated::runFlushCallbacks();
    vlSelfRef.tb_xorshift__DOT__en_i = 0U;
    co_await vlSelfRef.__VtrigSched_he90bc7e9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_xorshift.clk_i)", 
                                                         "rtl/user_domain/tb_xorshift.sv", 
                                                         78);
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "rtl/user_domain/tb_xorshift.sv", 
                                         80);
    VL_WRITEF_NX("%t : TB: Test Sequence for xorshift Complete.\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    Verilated::runFlushCallbacks();
    VL_FINISH_MT("rtl/user_domain/tb_xorshift.sv", 82, "");
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
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_xorshift__DOT__clk_i) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_xorshift__DOT__clk_i__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.tb_xorshift__DOT__rst_ni)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_xorshift__DOT__rst_ni__0)));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_xorshift__DOT__clk_i__0 
        = vlSelfRef.tb_xorshift__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_xorshift__DOT__rst_ni__0 
        = vlSelfRef.tb_xorshift__DOT__rst_ni;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_xorshift___024root___dump_triggers__act(vlSelf);
    }
#endif
}
