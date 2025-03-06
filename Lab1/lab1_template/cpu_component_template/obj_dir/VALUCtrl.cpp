// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VALUCtrl.h"
#include "VALUCtrl__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VALUCtrl::VALUCtrl(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VALUCtrl__Syms(contextp(), _vcname__, this)}
    , ALUOp{vlSymsp->TOP.ALUOp}
    , funct7{vlSymsp->TOP.funct7}
    , funct3{vlSymsp->TOP.funct3}
    , ALUCtl{vlSymsp->TOP.ALUCtl}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VALUCtrl::VALUCtrl(const char* _vcname__)
    : VALUCtrl(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VALUCtrl::~VALUCtrl() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VALUCtrl___024root___eval_debug_assertions(VALUCtrl___024root* vlSelf);
#endif  // VL_DEBUG
void VALUCtrl___024root___eval_static(VALUCtrl___024root* vlSelf);
void VALUCtrl___024root___eval_initial(VALUCtrl___024root* vlSelf);
void VALUCtrl___024root___eval_settle(VALUCtrl___024root* vlSelf);
void VALUCtrl___024root___eval(VALUCtrl___024root* vlSelf);

void VALUCtrl::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VALUCtrl::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VALUCtrl___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VALUCtrl___024root___eval_static(&(vlSymsp->TOP));
        VALUCtrl___024root___eval_initial(&(vlSymsp->TOP));
        VALUCtrl___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VALUCtrl___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VALUCtrl::eventsPending() { return false; }

uint64_t VALUCtrl::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VALUCtrl::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VALUCtrl___024root___eval_final(VALUCtrl___024root* vlSelf);

VL_ATTR_COLD void VALUCtrl::final() {
    VALUCtrl___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VALUCtrl::hierName() const { return vlSymsp->name(); }
const char* VALUCtrl::modelName() const { return "VALUCtrl"; }
unsigned VALUCtrl::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VALUCtrl::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VALUCtrl___024root__trace_init_top(VALUCtrl___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VALUCtrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALUCtrl___024root*>(voidSelf);
    VALUCtrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VALUCtrl___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VALUCtrl___024root__trace_register(VALUCtrl___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VALUCtrl::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VALUCtrl::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VALUCtrl___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
