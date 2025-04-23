// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vuser_domain_sw_cs_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vuser_domain_sw_cs_tb::Vuser_domain_sw_cs_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vuser_domain_sw_cs_tb__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , __PVT__soc_ctrl_reg_pkg{vlSymsp->TOP.__PVT__soc_ctrl_reg_pkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vuser_domain_sw_cs_tb::Vuser_domain_sw_cs_tb(const char* _vcname__)
    : Vuser_domain_sw_cs_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vuser_domain_sw_cs_tb::~Vuser_domain_sw_cs_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vuser_domain_sw_cs_tb___024root___eval_debug_assertions(Vuser_domain_sw_cs_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vuser_domain_sw_cs_tb___024root___eval_static(Vuser_domain_sw_cs_tb___024root* vlSelf);
void Vuser_domain_sw_cs_tb___024root___eval_initial(Vuser_domain_sw_cs_tb___024root* vlSelf);
void Vuser_domain_sw_cs_tb___024root___eval_settle(Vuser_domain_sw_cs_tb___024root* vlSelf);
void Vuser_domain_sw_cs_tb___024root___eval(Vuser_domain_sw_cs_tb___024root* vlSelf);

void Vuser_domain_sw_cs_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vuser_domain_sw_cs_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vuser_domain_sw_cs_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vuser_domain_sw_cs_tb___024root___eval_static(&(vlSymsp->TOP));
        Vuser_domain_sw_cs_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vuser_domain_sw_cs_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vuser_domain_sw_cs_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vuser_domain_sw_cs_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vuser_domain_sw_cs_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vuser_domain_sw_cs_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vuser_domain_sw_cs_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vuser_domain_sw_cs_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vuser_domain_sw_cs_tb___024root___eval_final(Vuser_domain_sw_cs_tb___024root* vlSelf);

VL_ATTR_COLD void Vuser_domain_sw_cs_tb::final() {
    Vuser_domain_sw_cs_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vuser_domain_sw_cs_tb::hierName() const { return vlSymsp->name(); }
const char* Vuser_domain_sw_cs_tb::modelName() const { return "Vuser_domain_sw_cs_tb"; }
unsigned Vuser_domain_sw_cs_tb::threads() const { return 1; }
void Vuser_domain_sw_cs_tb::prepareClone() const { contextp()->prepareClone(); }
void Vuser_domain_sw_cs_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vuser_domain_sw_cs_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vuser_domain_sw_cs_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vuser_domain_sw_cs_tb___024root__trace_init_top(Vuser_domain_sw_cs_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vuser_domain_sw_cs_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuser_domain_sw_cs_tb___024root*>(voidSelf);
    Vuser_domain_sw_cs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vuser_domain_sw_cs_tb___024root__trace_decl_types(tracep);
    Vuser_domain_sw_cs_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vuser_domain_sw_cs_tb___024root__trace_register(Vuser_domain_sw_cs_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vuser_domain_sw_cs_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vuser_domain_sw_cs_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vuser_domain_sw_cs_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
