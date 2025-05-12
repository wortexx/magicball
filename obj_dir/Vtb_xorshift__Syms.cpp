// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_xorshift__pch.h"
#include "Vtb_xorshift.h"
#include "Vtb_xorshift___024root.h"
#include "Vtb_xorshift___024unit.h"
#include "Vtb_xorshift_soc_ctrl_reg_pkg.h"

// FUNCTIONS
Vtb_xorshift__Syms::~Vtb_xorshift__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vtb_xorshift__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vtb_xorshift__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vtb_xorshift__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vtb_xorshift__Syms::Vtb_xorshift__Syms(VerilatedContext* contextp, const char* namep, Vtb_xorshift* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__soc_ctrl_reg_pkg{this, Verilated::catName(namep, "soc_ctrl_reg_pkg")}
{
        // Check resources
        Verilated::stackCheck(144);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__soc_ctrl_reg_pkg = &TOP__soc_ctrl_reg_pkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__soc_ctrl_reg_pkg.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_xorshift.configure(this, name(), "tb_xorshift", "tb_xorshift", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_xorshift__read_obi.configure(this, name(), "tb_xorshift.read_obi", "read_obi", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_xorshift__unnamedblk1.configure(this, name(), "tb_xorshift.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_xorshift__write_obi.configure(this, name(), "tb_xorshift.write_obi", "write_obi", -9, VerilatedScope::SCOPE_OTHER);
}
