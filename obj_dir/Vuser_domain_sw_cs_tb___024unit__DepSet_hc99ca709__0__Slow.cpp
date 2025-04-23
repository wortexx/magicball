// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuser_domain_sw_cs_tb.h for the primary calling header

#include "Vuser_domain_sw_cs_tb__pch.h"
#include "Vuser_domain_sw_cs_tb___024unit.h"

VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024unit___ctor_var_reset(Vuser_domain_sw_cs_tb___024unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vuser_domain_sw_cs_tb___024unit___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    for (int __Vi = 0; __Vi < 4; ++__Vi) {
        vlSelf->__Venumtab_enum_name377[__Vi] = std::string{""};
    }
    vlSelf->__Venumtab_enum_name377[0] = std::string{"DEV_NONE"};
    vlSelf->__Venumtab_enum_name377[1] = std::string{"DEV_SSD1331"};
    vlSelf->__Venumtab_enum_name377[2] = std::string{"DEV_ADXL345"};
}
