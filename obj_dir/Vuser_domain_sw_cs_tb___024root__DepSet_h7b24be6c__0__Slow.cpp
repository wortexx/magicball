// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuser_domain_sw_cs_tb.h for the primary calling header

#include "Vuser_domain_sw_cs_tb__pch.h"
#include "Vuser_domain_sw_cs_tb__Syms.h"
#include "Vuser_domain_sw_cs_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root___dump_triggers__stl(Vuser_domain_sw_cs_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root___eval_triggers__stl(Vuser_domain_sw_cs_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuser_domain_sw_cs_tb___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vuser_domain_sw_cs_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
