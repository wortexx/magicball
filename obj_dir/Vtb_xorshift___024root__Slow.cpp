// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_xorshift.h for the primary calling header

#include "Vtb_xorshift__pch.h"
#include "Vtb_xorshift__Syms.h"
#include "Vtb_xorshift___024root.h"

void Vtb_xorshift___024root___ctor_var_reset(Vtb_xorshift___024root* vlSelf);

Vtb_xorshift___024root::Vtb_xorshift___024root(Vtb_xorshift__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_xorshift___024root___ctor_var_reset(this);
}

void Vtb_xorshift___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_xorshift___024root::~Vtb_xorshift___024root() {
}
