// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_user_domain_hw_ctrl.h for the primary calling header

#ifndef VERILATED_VTB_USER_DOMAIN_HW_CTRL___024UNIT_H_
#define VERILATED_VTB_USER_DOMAIN_HW_CTRL___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_user_domain_hw_ctrl__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_user_domain_hw_ctrl___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    static VlUnpacked<std::string, 4> __Venumtab_enum_name375;

    // INTERNAL VARIABLES
    Vtb_user_domain_hw_ctrl__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_user_domain_hw_ctrl___024unit(Vtb_user_domain_hw_ctrl__Syms* symsp, const char* v__name);
    ~Vtb_user_domain_hw_ctrl___024unit();
    VL_UNCOPYABLE(Vtb_user_domain_hw_ctrl___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
