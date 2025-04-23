// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuser_domain_sw_cs_tb.h for the primary calling header

#include "Vuser_domain_sw_cs_tb__pch.h"
#include "Vuser_domain_sw_cs_tb__Syms.h"
#include "Vuser_domain_sw_cs_tb___024root.h"

void Vuser_domain_sw_cs_tb___024root___ctor_var_reset(Vuser_domain_sw_cs_tb___024root* vlSelf);

Vuser_domain_sw_cs_tb___024root::Vuser_domain_sw_cs_tb___024root(Vuser_domain_sw_cs_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vuser_domain_sw_cs_tb___024root___ctor_var_reset(this);
}

void Vuser_domain_sw_cs_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vuser_domain_sw_cs_tb___024root::~Vuser_domain_sw_cs_tb___024root() {
}
