// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_xorshift.h for the primary calling header

#include "Vtb_xorshift__pch.h"
#include "Vtb_xorshift__Syms.h"
#include "Vtb_xorshift___024unit.h"

void Vtb_xorshift___024unit___ctor_var_reset(Vtb_xorshift___024unit* vlSelf);

Vtb_xorshift___024unit::Vtb_xorshift___024unit(Vtb_xorshift__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_xorshift___024unit___ctor_var_reset(this);
}

void Vtb_xorshift___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_xorshift___024unit::~Vtb_xorshift___024unit() {
}
