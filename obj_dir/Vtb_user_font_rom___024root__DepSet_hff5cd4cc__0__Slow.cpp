// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_user_font_rom.h for the primary calling header

#include "Vtb_user_font_rom__pch.h"
#include "Vtb_user_font_rom__Syms.h"
#include "Vtb_user_font_rom___024root.h"

VL_ATTR_COLD void Vtb_user_font_rom___024root___eval_initial__TOP(Vtb_user_font_rom___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_font_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_font_rom___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("%t [FONT_ROM] Initializing Font ROM (size 1140 bytes) from rtl/user_domain/font_rom_12x6.hex\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    vlSelfRef.tb_user_font_rom__DOT__dut__DOT__check_file_exists_label__DOT__file_handle 
        = VL_FOPEN_NN(std::string{"rtl/user_domain/font_rom_12x6.hex"}
                      , std::string{"r"});
    ;
    if (VL_LIKELY((0U == vlSelfRef.tb_user_font_rom__DOT__dut__DOT__check_file_exists_label__DOT__file_handle))) {
        VL_WRITEF_NX("[%0t] %%Warning: user_font_rom.sv:29: %Ntb_user_font_rom.dut.check_file_exists_label: [FONT_ROM_WARN] $readmemh file not found: rtl/user_domain/font_rom_12x6.hex. ROM will be uninitialized.\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    } else {
        VL_FCLOSE_I(vlSelfRef.tb_user_font_rom__DOT__dut__DOT__check_file_exists_label__DOT__file_handle); VL_READMEM_N(true
                                                                                , 8
                                                                                , 1140
                                                                                , 0
                                                                                , 
                                                                                std::string{"rtl/user_domain/font_rom_12x6.hex"}
                                                                                ,  &(vlSelfRef.tb_user_font_rom__DOT__dut__DOT__rom_data)
                                                                                , 0
                                                                                , ~0ULL);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_user_font_rom___024root___dump_triggers__stl(Vtb_user_font_rom___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_user_font_rom___024root___eval_triggers__stl(Vtb_user_font_rom___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_font_rom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_user_font_rom___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_user_font_rom___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
