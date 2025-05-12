// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_user_domain_hw_ctrl.h for the primary calling header

#include "Vtb_user_domain_hw_ctrl__pch.h"
#include "Vtb_user_domain_hw_ctrl__Syms.h"
#include "Vtb_user_domain_hw_ctrl___024root.h"

VL_ATTR_COLD void Vtb_user_domain_hw_ctrl___024root___eval_initial__TOP(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__ref_clk_i = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__testmode_i = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__gpio_in_sync_i_tb = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_mgr_obi_rsp_i_tb = 0ULL;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__req_ongoing = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[0U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[1U] = 0U;
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__user_sbr_obi_req[2U] = 0U;
    VL_WRITEF_NX("%t [FONT_ROM] Initializing Font ROM (size 1140 bytes) from rtl/user_domain/font_rom_12x6.hex\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__check_file_exists_label__DOT__file_handle 
        = VL_FOPEN_NN(std::string{"rtl/user_domain/font_rom_12x6.hex"}
                      , std::string{"r"});
    ;
    if (VL_LIKELY((0U == vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__check_file_exists_label__DOT__file_handle))) {
        VL_WRITEF_NX("[%0t] %%Warning: user_font_rom.sv:29: %Ntb_user_domain_hw_ctrl.dut.i_user_font_rom.check_file_exists_label: [FONT_ROM_WARN] $readmemh file not found: rtl/user_domain/font_rom_12x6.hex. ROM will be uninitialized.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    } else {
        VL_FCLOSE_I(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__check_file_exists_label__DOT__file_handle); VL_READMEM_N(true
                                                                                , 8
                                                                                , 1140
                                                                                , 0
                                                                                , 
                                                                                std::string{"rtl/user_domain/font_rom_12x6.hex"}
                                                                                ,  &(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_font_rom__DOT__rom_data)
                                                                                , 0
                                                                                , ~0ULL);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_user_domain_hw_ctrl___024root___dump_triggers__stl(Vtb_user_domain_hw_ctrl___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_user_domain_hw_ctrl___024root___eval_triggers__stl(Vtb_user_domain_hw_ctrl___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_domain_hw_ctrl___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    vlSelfRef.__VstlTriggered.set(1U, (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp__0));
    vlSelfRef.__VstlTriggered.set(2U, (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp__0));
    vlSelfRef.__VstlTriggered.set(3U, (vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp__0));
    vlSelfRef.__VstlTriggered.set(4U, ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o__0)));
    vlSelfRef.__VstlTriggered.set(5U, ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w__0)));
    vlSelfRef.__VstlTriggered.set(6U, ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r__0)));
    vlSelfRef.__VstlTriggered.set(7U, ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_ctrl_write) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_ctrl_write__0)));
    vlSelfRef.__VstlTriggered.set(8U, ((IData)(vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_rdata_read) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_rdata_read__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp__0 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_prng_obi_rsp;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp__0 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_font_rom_obi_rsp;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp__0 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__user_spi_ctrl_obi_rsp;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o__0 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT____Vcellout__i_spi_peripheral__gnt_o;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w__0 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_w;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r__0 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_spi_ctrl__DOT__grant_r;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_ctrl_write__0 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_ctrl_write;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_rdata_read__0 
        = vlSelfRef.tb_user_domain_hw_ctrl__DOT__dut__DOT__i_user_prng__DOT__is_rdata_read;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VstlDidInit))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.set(1U, 1U);
        vlSelfRef.__VstlTriggered.set(2U, 1U);
        vlSelfRef.__VstlTriggered.set(3U, 1U);
        vlSelfRef.__VstlTriggered.set(4U, 1U);
        vlSelfRef.__VstlTriggered.set(5U, 1U);
        vlSelfRef.__VstlTriggered.set(6U, 1U);
        vlSelfRef.__VstlTriggered.set(7U, 1U);
        vlSelfRef.__VstlTriggered.set(8U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_user_domain_hw_ctrl___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
