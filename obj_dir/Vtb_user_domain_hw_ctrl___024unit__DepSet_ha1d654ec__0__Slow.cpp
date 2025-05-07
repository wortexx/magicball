// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_user_domain_hw_ctrl.h for the primary calling header

#include "Vtb_user_domain_hw_ctrl__pch.h"
#include "Vtb_user_domain_hw_ctrl___024unit.h"

VL_ATTR_COLD void Vtb_user_domain_hw_ctrl___024unit___ctor_var_reset(Vtb_user_domain_hw_ctrl___024unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_user_domain_hw_ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_user_domain_hw_ctrl___024unit___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    for (int __Vi = 0; __Vi < 4; ++__Vi) {
        vlSelf->__Venumtab_enum_name375[__Vi] = std::string{""};
    }
    vlSelf->__Venumtab_enum_name375[0] = std::string{"IDLE"};
    vlSelf->__Venumtab_enum_name375[1] = std::string{"LOAD"};
    vlSelf->__Venumtab_enum_name375[2] = std::string{"SHIFT"};
    vlSelf->__Venumtab_enum_name375[3] = std::string{"COMPLETE"};
}
