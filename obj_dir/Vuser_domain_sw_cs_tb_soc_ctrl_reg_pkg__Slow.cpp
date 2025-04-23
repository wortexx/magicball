// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuser_domain_sw_cs_tb.h for the primary calling header

#include "Vuser_domain_sw_cs_tb__pch.h"
#include "Vuser_domain_sw_cs_tb__Syms.h"
#include "Vuser_domain_sw_cs_tb_soc_ctrl_reg_pkg.h"

// Parameter definitions for Vuser_domain_sw_cs_tb_soc_ctrl_reg_pkg
constexpr VlUnpacked<CData/*3:0*/, 4> Vuser_domain_sw_cs_tb_soc_ctrl_reg_pkg::__PVT__SOC_CTRL_PERMIT;


void Vuser_domain_sw_cs_tb_soc_ctrl_reg_pkg___ctor_var_reset(Vuser_domain_sw_cs_tb_soc_ctrl_reg_pkg* vlSelf);

Vuser_domain_sw_cs_tb_soc_ctrl_reg_pkg::Vuser_domain_sw_cs_tb_soc_ctrl_reg_pkg(Vuser_domain_sw_cs_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vuser_domain_sw_cs_tb_soc_ctrl_reg_pkg___ctor_var_reset(this);
}

void Vuser_domain_sw_cs_tb_soc_ctrl_reg_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vuser_domain_sw_cs_tb_soc_ctrl_reg_pkg::~Vuser_domain_sw_cs_tb_soc_ctrl_reg_pkg() {
}
