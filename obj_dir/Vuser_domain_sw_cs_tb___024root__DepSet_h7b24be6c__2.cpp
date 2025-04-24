// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuser_domain_sw_cs_tb.h for the primary calling header

#include "Vuser_domain_sw_cs_tb__pch.h"
#include "Vuser_domain_sw_cs_tb__Syms.h"
#include "Vuser_domain_sw_cs_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root___dump_triggers__act(Vuser_domain_sw_cs_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vuser_domain_sw_cs_tb___024root___eval_triggers__act(Vuser_domain_sw_cs_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o__1)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__clk_i) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__user_domain_sw_cs_tb__DOT__clk_i__0))));
    vlSelfRef.__VactTriggered.set(2U, ((~ (IData)(vlSelfRef.user_domain_sw_cs_tb__DOT__rst_ni)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__user_domain_sw_cs_tb__DOT__rst_ni__0)));
    vlSelfRef.__VactTriggered.set(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o__1 
        = vlSelfRef.user_domain_sw_cs_tb__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o;
    vlSelfRef.__Vtrigprevexpr___TOP__user_domain_sw_cs_tb__DOT__clk_i__0 
        = vlSelfRef.user_domain_sw_cs_tb__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__user_domain_sw_cs_tb__DOT__rst_ni__0 
        = vlSelfRef.user_domain_sw_cs_tb__DOT__rst_ni;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vuser_domain_sw_cs_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
