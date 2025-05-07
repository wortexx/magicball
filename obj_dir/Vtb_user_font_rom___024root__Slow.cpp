// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_user_font_rom.h for the primary calling header

#include "Vtb_user_font_rom__pch.h"
#include "Vtb_user_font_rom__Syms.h"
#include "Vtb_user_font_rom___024root.h"

void Vtb_user_font_rom___024root___ctor_var_reset(Vtb_user_font_rom___024root* vlSelf);

Vtb_user_font_rom___024root::Vtb_user_font_rom___024root(Vtb_user_font_rom__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_user_font_rom___024root___ctor_var_reset(this);
}

void Vtb_user_font_rom___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_user_font_rom___024root::~Vtb_user_font_rom___024root() {
}
