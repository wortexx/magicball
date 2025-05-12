// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_xorshift.h for the primary calling header

#include "Vtb_xorshift__pch.h"
#include "Vtb_xorshift__Syms.h"
#include "Vtb_xorshift___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_xorshift___024root___dump_triggers__stl(Vtb_xorshift___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_xorshift___024root___eval_triggers__stl(Vtb_xorshift___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_xorshift__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_xorshift___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    vlSelfRef.__VstlTriggered.set(1U, (vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tb_xorshift__DOT__obi_rsp_o_from_dut__0));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_xorshift__DOT__obi_rsp_o_from_dut__0 
        = vlSelfRef.tb_xorshift__DOT__obi_rsp_o_from_dut;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VstlDidInit))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_xorshift___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
