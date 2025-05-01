// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPipelineCPU.h for the primary calling header

#ifndef VERILATED_VPIPELINECPU___024ROOT_H_
#define VERILATED_VPIPELINECPU___024ROOT_H_  // guard

#include "verilated.h"

class VPipelineCPU__Syms;

class VPipelineCPU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(start,0,0);
        CData/*0:0*/ PipelineCPU__DOT__mem_read_EX_MEM;
        CData/*3:0*/ PipelineCPU__DOT__alu_control;
        CData/*1:0*/ PipelineCPU__DOT__pc_sel;
        CData/*0:0*/ PipelineCPU__DOT__reg_write_ID_EX;
        CData/*1:0*/ PipelineCPU__DOT__mem_to_reg_ID_EX;
        CData/*0:0*/ PipelineCPU__DOT__mem_read_ID_EX;
        CData/*0:0*/ PipelineCPU__DOT__mem_write_ID_EX;
        CData/*0:0*/ PipelineCPU__DOT__alu_src_ID_EX;
        CData/*1:0*/ PipelineCPU__DOT__alu_op_ID_EX;
        CData/*4:0*/ PipelineCPU__DOT__writeReg_ID_EX;
        CData/*2:0*/ PipelineCPU__DOT__funct3_ID_EX;
        CData/*0:0*/ PipelineCPU__DOT__funct7_ID_EX;
        CData/*4:0*/ PipelineCPU__DOT__write_reg_EX_MEM;
        CData/*0:0*/ PipelineCPU__DOT__mem_write_EX_MEM;
        CData/*0:0*/ PipelineCPU__DOT__reg_write_EX_MEM;
        CData/*1:0*/ PipelineCPU__DOT__mem_to_reg_EX_MEM;
        CData/*4:0*/ PipelineCPU__DOT__write_reg_MEM_WB;
        CData/*0:0*/ PipelineCPU__DOT__reg_write_MEM_WB;
        CData/*1:0*/ PipelineCPU__DOT__mem_to_reg_MEM_WB;
        CData/*7:0*/ PipelineCPU__DOT__m_Control__DOT__crtl;
        CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3;
        CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3;
        CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __Vtrigrprev__TOP__start;
        CData/*0:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__mem_read_EX_MEM;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ PipelineCPU__DOT__pc_current;
        IData/*31:0*/ PipelineCPU__DOT__pc_next;
        IData/*31:0*/ PipelineCPU__DOT__imm;
        IData/*31:0*/ PipelineCPU__DOT__reg_read_data1;
        IData/*31:0*/ PipelineCPU__DOT__reg_read_data2;
        IData/*31:0*/ PipelineCPU__DOT__alu_result;
        IData/*31:0*/ PipelineCPU__DOT__mem_read_data;
        IData/*31:0*/ PipelineCPU__DOT__alu_src_b;
        IData/*31:0*/ PipelineCPU__DOT__pc_plus4_ID_EX;
        IData/*31:0*/ PipelineCPU__DOT__reg_read_data1_ID_EX;
        IData/*31:0*/ PipelineCPU__DOT__reg_read_data2_ID_EX;
        IData/*31:0*/ PipelineCPU__DOT__imm_ID_EX;
        IData/*31:0*/ PipelineCPU__DOT__alu_result_EX_MEM;
        IData/*31:0*/ PipelineCPU__DOT__pc_plus4_EX_MEM;
        IData/*31:0*/ PipelineCPU__DOT__reg_read_data2_EX_MEM;
        IData/*31:0*/ PipelineCPU__DOT__alu_result_MEM_WB;
        IData/*31:0*/ PipelineCPU__DOT__mem_read_data_MEM_WB;
        IData/*31:0*/ PipelineCPU__DOT__pc_plus4_MEM_WB;
        IData/*31:0*/ PipelineCPU__DOT__m_IF_ID_Reg__DOT__pc_t;
        IData/*31:0*/ PipelineCPU__DOT__m_IF_ID_Reg__DOT__pc_4_t;
        IData/*31:0*/ PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__alu_result_EX_MEM;
        IData/*31:0*/ __VactIterCount;
        VL_OUT(r[32],31,0);
        VlUnpacked<CData/*7:0*/, 128> PipelineCPU__DOT__m_InstMem__DOT__insts;
        VlUnpacked<IData/*31:0*/, 32> PipelineCPU__DOT__m_Register__DOT__regs;
    };
    struct {
        VlUnpacked<CData/*7:0*/, 128> PipelineCPU__DOT__m_DataMemory__DOT__data_memory;
        VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VPipelineCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPipelineCPU___024root(VPipelineCPU__Syms* symsp, const char* v__name);
    ~VPipelineCPU___024root();
    VL_UNCOPYABLE(VPipelineCPU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
