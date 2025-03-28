// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSingleCycleCPU.h for the primary calling header

#ifndef VERILATED_VSINGLECYCLECPU___024ROOT_H_
#define VERILATED_VSINGLECYCLECPU___024ROOT_H_  // guard

#include "verilated.h"

class VSingleCycleCPU__Syms;

class VSingleCycleCPU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ SingleCycleCPU__DOT__m_PC__DOT__clk;
        CData/*0:0*/ SingleCycleCPU__DOT__m_PC__DOT__rst;
        CData/*0:0*/ SingleCycleCPU__DOT__m_Register__DOT__clk;
        CData/*0:0*/ SingleCycleCPU__DOT__m_Register__DOT__rst;
        CData/*0:0*/ SingleCycleCPU__DOT__m_DataMemory__DOT__rst;
        CData/*0:0*/ SingleCycleCPU__DOT__m_DataMemory__DOT__clk;
        CData/*0:0*/ SingleCycleCPU__DOT__m_DataMemory__DOT__memRead;
        VL_IN8(clk,0,0);
        VL_IN8(start,0,0);
        CData/*6:0*/ SingleCycleCPU__DOT__m_Control__DOT__opcode;
        CData/*2:0*/ SingleCycleCPU__DOT__m_Control__DOT__funct3;
        CData/*0:0*/ SingleCycleCPU__DOT__m_Control__DOT__BrEq;
        CData/*0:0*/ SingleCycleCPU__DOT__m_Control__DOT__BrLT;
        CData/*0:0*/ SingleCycleCPU__DOT__m_Register__DOT__regWrite;
        CData/*4:0*/ SingleCycleCPU__DOT__m_Register__DOT__readReg1;
        CData/*4:0*/ SingleCycleCPU__DOT__m_Register__DOT__readReg2;
        CData/*4:0*/ SingleCycleCPU__DOT__m_Register__DOT__writeReg;
        CData/*1:0*/ SingleCycleCPU__DOT__m_Mux_PC__DOT__sel;
        CData/*0:0*/ SingleCycleCPU__DOT__m_Mux_ALU__DOT__sel;
        CData/*1:0*/ SingleCycleCPU__DOT__m_ALUCtrl__DOT__ALUOp;
        CData/*0:0*/ SingleCycleCPU__DOT__m_ALUCtrl__DOT__funct7;
        CData/*2:0*/ SingleCycleCPU__DOT__m_ALUCtrl__DOT__funct3;
        CData/*3:0*/ SingleCycleCPU__DOT__m_ALUCtrl__DOT__ALUCtl;
        CData/*3:0*/ SingleCycleCPU__DOT__m_ALU__DOT__ALUctl;
        CData/*0:0*/ SingleCycleCPU__DOT__m_DataMemory__DOT__memWrite;
        CData/*1:0*/ SingleCycleCPU__DOT__m_Mux_WriteData__DOT__sel;
        CData/*6:0*/ __Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*7:0*/ __Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*0:0*/ __Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*6:0*/ __Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        CData/*7:0*/ __Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        CData/*6:0*/ __Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        CData/*7:0*/ __Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        CData/*6:0*/ __Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3;
        CData/*7:0*/ __Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3;
        CData/*0:0*/ __Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4;
        CData/*0:0*/ __Vtrigrprev__TOP__SingleCycleCPU__DOT__m_PC__DOT__clk;
        CData/*0:0*/ __Vtrigrprev__TOP__SingleCycleCPU__DOT__m_PC__DOT__rst;
        CData/*0:0*/ __Vtrigrprev__TOP__SingleCycleCPU__DOT__m_Register__DOT__clk;
        CData/*0:0*/ __Vtrigrprev__TOP__SingleCycleCPU__DOT__m_Register__DOT__rst;
        CData/*0:0*/ __Vtrigrprev__TOP__SingleCycleCPU__DOT__m_DataMemory__DOT__clk;
        CData/*0:0*/ __Vtrigrprev__TOP__SingleCycleCPU__DOT__m_DataMemory__DOT__rst;
        CData/*0:0*/ __Vtrigrprev__TOP__SingleCycleCPU__DOT__m_DataMemory__DOT__memRead;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ SingleCycleCPU__DOT__m_Control__DOT__ctrl;
        IData/*31:0*/ SingleCycleCPU__DOT__m_PC__DOT__pc_i;
        IData/*31:0*/ SingleCycleCPU__DOT__m_PC__DOT__pc_o;
        IData/*31:0*/ SingleCycleCPU__DOT__m_Adder_1__DOT__a;
        IData/*31:0*/ SingleCycleCPU__DOT__m_Adder_1__DOT__b;
        IData/*31:0*/ SingleCycleCPU__DOT__m_InstMem__DOT__readAddr;
        IData/*31:0*/ SingleCycleCPU__DOT__m_Register__DOT__writeData;
        IData/*31:0*/ SingleCycleCPU__DOT__m_BranchComp__DOT__A;
        IData/*31:0*/ SingleCycleCPU__DOT__m_BranchComp__DOT__B;
        IData/*31:0*/ SingleCycleCPU__DOT__m_ImmGen__DOT__inst;
        IData/*31:0*/ SingleCycleCPU__DOT__m_ShiftLeftOne__DOT__i;
        IData/*31:0*/ SingleCycleCPU__DOT__m_Adder_2__DOT__a;
        IData/*31:0*/ SingleCycleCPU__DOT__m_Adder_2__DOT__b;
        IData/*31:0*/ SingleCycleCPU__DOT__m_Mux_PC__DOT__s0;
        IData/*31:0*/ SingleCycleCPU__DOT__m_Mux_PC__DOT__s1;
        IData/*31:0*/ SingleCycleCPU__DOT__m_Mux_PC__DOT__s2;
        IData/*31:0*/ SingleCycleCPU__DOT__m_Mux_ALU__DOT__s0;
        IData/*31:0*/ SingleCycleCPU__DOT__m_Mux_ALU__DOT__s1;
        IData/*31:0*/ SingleCycleCPU__DOT__m_ALU__DOT__A;
    };
    struct {
        IData/*31:0*/ SingleCycleCPU__DOT__m_ALU__DOT__B;
        IData/*31:0*/ SingleCycleCPU__DOT__m_DataMemory__DOT__address;
        IData/*31:0*/ SingleCycleCPU__DOT__m_DataMemory__DOT__writeData;
        IData/*31:0*/ SingleCycleCPU__DOT__m_DataMemory__DOT__readData;
        IData/*31:0*/ SingleCycleCPU__DOT__m_Mux_WriteData__DOT__s0;
        IData/*31:0*/ SingleCycleCPU__DOT__m_Mux_WriteData__DOT__s1;
        IData/*31:0*/ SingleCycleCPU__DOT__m_Mux_WriteData__DOT__s2;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __Vtrigrprev__TOP__SingleCycleCPU__DOT__m_DataMemory__DOT__address;
        IData/*31:0*/ __VactIterCount;
        VL_OUT(r[32],31,0);
        VlUnpacked<CData/*7:0*/, 128> SingleCycleCPU__DOT__m_InstMem__DOT__insts;
        VlUnpacked<IData/*31:0*/, 32> SingleCycleCPU__DOT__m_Register__DOT__regs;
        VlUnpacked<CData/*7:0*/, 128> SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    VSingleCycleCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSingleCycleCPU___024root(VSingleCycleCPU__Syms* symsp, const char* v__name);
    ~VSingleCycleCPU___024root();
    VL_UNCOPYABLE(VSingleCycleCPU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
