// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vspi_obi_tb.h for the primary calling header

#include "Vspi_obi_tb__pch.h"
#include "Vspi_obi_tb__Syms.h"
#include "Vspi_obi_tb___024root.h"

void Vspi_obi_tb___024root___ctor_var_reset(Vspi_obi_tb___024root* vlSelf);

Vspi_obi_tb___024root::Vspi_obi_tb___024root(Vspi_obi_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vspi_obi_tb___024root___ctor_var_reset(this);
}

void Vspi_obi_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vspi_obi_tb___024root::~Vspi_obi_tb___024root() {
}
