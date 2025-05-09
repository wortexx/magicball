// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_user_domain_spi_engine_test.h for the primary calling header

#include "Vtb_user_domain_spi_engine_test__pch.h"
#include "Vtb_user_domain_spi_engine_test__Syms.h"
#include "Vtb_user_domain_spi_engine_test___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_user_domain_spi_engine_test___024root___dump_triggers__stl(Vtb_user_domain_spi_engine_test___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_user_domain_spi_engine_test___024root___eval_triggers__stl(Vtb_user_domain_spi_engine_test___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_spi_engine_test__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_spi_engine_test___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    vlSelfRef.__VstlTriggered.set(1U, (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_rsp 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_rsp__0));
    vlSelfRef.__VstlTriggered.set(2U, (vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_rsp 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_rsp__0));
    vlSelfRef.__VstlTriggered.set(3U, ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w__0)));
    vlSelfRef.__VstlTriggered.set(4U, ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r__0)));
    vlSelfRef.__VstlTriggered.set(5U, ((IData)(vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_rsp__0 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_spi_ctrl_obi_rsp;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_rsp__0 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__user_font_rom_obi_rsp;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w__0 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r__0 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o__0 
        = vlSelfRef.tb_user_domain_spi_engine_test__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VstlDidInit))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.set(1U, 1U);
        vlSelfRef.__VstlTriggered.set(2U, 1U);
        vlSelfRef.__VstlTriggered.set(3U, 1U);
        vlSelfRef.__VstlTriggered.set(4U, 1U);
        vlSelfRef.__VstlTriggered.set(5U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_user_domain_spi_engine_test___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
