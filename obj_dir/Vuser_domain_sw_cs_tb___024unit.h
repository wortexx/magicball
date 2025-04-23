// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuser_domain_sw_cs_tb.h for the primary calling header

#ifndef VERILATED_VUSER_DOMAIN_SW_CS_TB___024UNIT_H_
#define VERILATED_VUSER_DOMAIN_SW_CS_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vuser_domain_sw_cs_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuser_domain_sw_cs_tb___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    static VlUnpacked<std::string, 4> __Venumtab_enum_name377;

    // INTERNAL VARIABLES
    Vuser_domain_sw_cs_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vuser_domain_sw_cs_tb___024unit(Vuser_domain_sw_cs_tb__Syms* symsp, const char* v__name);
    ~Vuser_domain_sw_cs_tb___024unit();
    VL_UNCOPYABLE(Vuser_domain_sw_cs_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
