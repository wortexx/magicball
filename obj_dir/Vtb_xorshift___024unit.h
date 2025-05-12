// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_xorshift.h for the primary calling header

#ifndef VERILATED_VTB_XORSHIFT___024UNIT_H_
#define VERILATED_VTB_XORSHIFT___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_xorshift__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_xorshift___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_xorshift__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_xorshift___024unit(Vtb_xorshift__Syms* symsp, const char* v__name);
    ~Vtb_xorshift___024unit();
    VL_UNCOPYABLE(Vtb_xorshift___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
