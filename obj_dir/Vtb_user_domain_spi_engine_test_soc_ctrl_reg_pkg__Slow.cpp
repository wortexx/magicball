// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_user_domain_spi_engine_test.h for the primary calling header

#include "Vtb_user_domain_spi_engine_test__pch.h"
#include "Vtb_user_domain_spi_engine_test__Syms.h"
#include "Vtb_user_domain_spi_engine_test_soc_ctrl_reg_pkg.h"

// Parameter definitions for Vtb_user_domain_spi_engine_test_soc_ctrl_reg_pkg
constexpr VlUnpacked<CData/*3:0*/, 4> Vtb_user_domain_spi_engine_test_soc_ctrl_reg_pkg::__PVT__SOC_CTRL_PERMIT;


void Vtb_user_domain_spi_engine_test_soc_ctrl_reg_pkg___ctor_var_reset(Vtb_user_domain_spi_engine_test_soc_ctrl_reg_pkg* vlSelf);

Vtb_user_domain_spi_engine_test_soc_ctrl_reg_pkg::Vtb_user_domain_spi_engine_test_soc_ctrl_reg_pkg(Vtb_user_domain_spi_engine_test__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_user_domain_spi_engine_test_soc_ctrl_reg_pkg___ctor_var_reset(this);
}

void Vtb_user_domain_spi_engine_test_soc_ctrl_reg_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_user_domain_spi_engine_test_soc_ctrl_reg_pkg::~Vtb_user_domain_spi_engine_test_soc_ctrl_reg_pkg() {
}
