// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuser_domain_sw_cs_tb.h for the primary calling header

#ifndef VERILATED_VUSER_DOMAIN_SW_CS_TB_SOC_CTRL_REG_PKG_H_
#define VERILATED_VUSER_DOMAIN_SW_CS_TB_SOC_CTRL_REG_PKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vuser_domain_sw_cs_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuser_domain_sw_cs_tb_soc_ctrl_reg_pkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vuser_domain_sw_cs_tb__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr VlUnpacked<CData/*3:0*/, 4> __PVT__SOC_CTRL_PERMIT = {{
        0x0fU, 0x01U, 0x0fU, 0x01U
    }};

    // CONSTRUCTORS
    Vuser_domain_sw_cs_tb_soc_ctrl_reg_pkg(Vuser_domain_sw_cs_tb__Syms* symsp, const char* v__name);
    ~Vuser_domain_sw_cs_tb_soc_ctrl_reg_pkg();
    VL_UNCOPYABLE(Vuser_domain_sw_cs_tb_soc_ctrl_reg_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
