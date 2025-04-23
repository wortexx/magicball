// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_obi_spi_direct.h for the primary calling header

#include "Vtb_obi_spi_direct__pch.h"
#include "Vtb_obi_spi_direct__Syms.h"
#include "Vtb_obi_spi_direct___024root.h"

void Vtb_obi_spi_direct___024root___ctor_var_reset(Vtb_obi_spi_direct___024root* vlSelf);

Vtb_obi_spi_direct___024root::Vtb_obi_spi_direct___024root(Vtb_obi_spi_direct__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_obi_spi_direct___024root___ctor_var_reset(this);
}

void Vtb_obi_spi_direct___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_obi_spi_direct___024root::~Vtb_obi_spi_direct___024root() {
}
