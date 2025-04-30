// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPipelineCPU__Syms.h"


VL_ATTR_COLD void VPipelineCPU___024root__trace_init_sub__TOP__0(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+89,"clk", false,-1);
    tracep->declBit(c+90,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+91+i*1,"r", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("PipelineCPU ");
    tracep->declBit(c+89,"clk", false,-1);
    tracep->declBit(c+90,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+91+i*1,"r", true,(i+0), 31,0);
    }
    tracep->declBus(c+43,"pc_current", false,-1, 31,0);
    tracep->declBus(c+123,"pc_next", false,-1, 31,0);
    tracep->declBus(c+44,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+124,"pc_branch", false,-1, 31,0);
    tracep->declBus(c+45,"instruct", false,-1, 31,0);
    tracep->declBus(c+46,"imm", false,-1, 31,0);
    tracep->declBus(c+72,"reg_read_data1", false,-1, 31,0);
    tracep->declBus(c+73,"reg_read_data2", false,-1, 31,0);
    tracep->declBus(c+76,"alu_result", false,-1, 31,0);
    tracep->declBus(c+125,"mem_read_data", false,-1, 31,0);
    tracep->declBus(c+47,"write_data", false,-1, 31,0);
    tracep->declBus(c+1,"alu_src_b", false,-1, 31,0);
    tracep->declBus(c+48,"alu_control", false,-1, 3,0);
    tracep->declBit(c+74,"branch_eq", false,-1);
    tracep->declBit(c+75,"branch_lt", false,-1);
    tracep->declBit(c+81,"mem_read", false,-1);
    tracep->declBit(c+82,"mem_write", false,-1);
    tracep->declBit(c+83,"alu_src", false,-1);
    tracep->declBit(c+84,"reg_write", false,-1);
    tracep->declBit(c+77,"jump", false,-1);
    tracep->declBus(c+85,"mem_to_reg", false,-1, 1,0);
    tracep->declBus(c+86,"alu_op", false,-1, 1,0);
    tracep->declBus(c+87,"pc_sel", false,-1, 1,0);
    tracep->declBus(c+49,"shift_one", false,-1, 31,0);
    tracep->declBus(c+2,"pc_current_IF_ID", false,-1, 31,0);
    tracep->declBus(c+50,"pc_plus4_IF_ID", false,-1, 31,0);
    tracep->declBus(c+51,"instruct_IF_ID", false,-1, 31,0);
    tracep->declBus(c+52,"opcode", false,-1, 6,0);
    tracep->declBus(c+53,"funct3", false,-1, 2,0);
    tracep->declBit(c+54,"funct7", false,-1);
    tracep->declBus(c+55,"readReg1", false,-1, 4,0);
    tracep->declBus(c+56,"readReg2", false,-1, 4,0);
    tracep->declBus(c+57,"writeReg", false,-1, 4,0);
    tracep->declBit(c+58,"reg_write_ID_EX", false,-1);
    tracep->declBus(c+59,"mem_to_reg_ID_EX", false,-1, 1,0);
    tracep->declBit(c+78,"mem_read_ID_EX", false,-1);
    tracep->declBit(c+3,"mem_write_ID_EX", false,-1);
    tracep->declBit(c+4,"alu_src_ID_EX", false,-1);
    tracep->declBus(c+5,"alu_op_ID_EX", false,-1, 1,0);
    tracep->declBus(c+60,"pc_plus4_ID_EX", false,-1, 31,0);
    tracep->declBus(c+6,"reg_read_data1_ID_EX", false,-1, 31,0);
    tracep->declBus(c+7,"reg_read_data2_ID_EX", false,-1, 31,0);
    tracep->declBus(c+8,"imm_ID_EX", false,-1, 31,0);
    tracep->declBus(c+61,"writeReg_ID_EX", false,-1, 4,0);
    tracep->declBus(c+79,"alu_result_EX_MEM", false,-1, 31,0);
    tracep->declBus(c+62,"pc_plus4_EX_MEM", false,-1, 31,0);
    tracep->declBus(c+9,"reg_read_data2_EX_MEM", false,-1, 31,0);
    tracep->declBus(c+63,"write_reg_EX_MEM", false,-1, 4,0);
    tracep->declBit(c+10,"mem_write_EX_MEM", false,-1);
    tracep->declBit(c+80,"mem_read_EX_MEM", false,-1);
    tracep->declBit(c+64,"reg_write_EX_MEM", false,-1);
    tracep->declBus(c+65,"mem_to_reg_EX_MEM", false,-1, 1,0);
    tracep->declBus(c+66,"alu_result_MEM_WB", false,-1, 31,0);
    tracep->declBus(c+67,"mem_read_data_MEM_WB", false,-1, 31,0);
    tracep->declBus(c+68,"write_reg_MEM_WB", false,-1, 4,0);
    tracep->declBit(c+69,"reg_write_MEM_WB", false,-1);
    tracep->declBus(c+70,"mem_to_reg_MEM_WB", false,-1, 1,0);
    tracep->declBus(c+71,"pc_plus4_MEM_WB", false,-1, 31,0);
    tracep->pushNamePrefix("m_ALU ");
    tracep->declBus(c+48,"ALUctl", false,-1, 3,0);
    tracep->declBus(c+6,"A", false,-1, 31,0);
    tracep->declBus(c+1,"B", false,-1, 31,0);
    tracep->declBus(c+76,"ALUOut", false,-1, 31,0);
    tracep->declBit(c+77,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALUCtrl ");
    tracep->declBus(c+5,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+54,"funct7", false,-1);
    tracep->declBus(c+53,"funct3", false,-1, 2,0);
    tracep->declBus(c+48,"ALUCtl", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_1 ");
    tracep->declBus(c+43,"a", false,-1, 31,0);
    tracep->declBus(c+126,"b", false,-1, 31,0);
    tracep->declBus(c+44,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_2 ");
    tracep->declBus(c+2,"a", false,-1, 31,0);
    tracep->declBus(c+49,"b", false,-1, 31,0);
    tracep->declBus(c+124,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_BranchComp ");
    tracep->declBus(c+72,"A", false,-1, 31,0);
    tracep->declBus(c+73,"B", false,-1, 31,0);
    tracep->declBit(c+74,"BrEq", false,-1);
    tracep->declBit(c+75,"BrLT", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Control ");
    tracep->declBus(c+52,"opcode", false,-1, 6,0);
    tracep->declBus(c+53,"funct3", false,-1, 2,0);
    tracep->declBit(c+74,"BrEq", false,-1);
    tracep->declBit(c+75,"BrLT", false,-1);
    tracep->declBit(c+81,"memRead", false,-1);
    tracep->declBus(c+85,"memtoReg", false,-1, 1,0);
    tracep->declBus(c+86,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+82,"memWrite", false,-1);
    tracep->declBit(c+83,"ALUSrc", false,-1);
    tracep->declBit(c+84,"regWrite", false,-1);
    tracep->declBus(c+87,"PCSel", false,-1, 1,0);
    tracep->declBus(c+88,"crtl", false,-1, 7,0);
    tracep->declBus(c+127,"b1", false,-1, 9,0);
    tracep->declBus(c+128,"b2", false,-1, 9,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_DataMemory ");
    tracep->declBit(c+90,"rst", false,-1);
    tracep->declBit(c+89,"clk", false,-1);
    tracep->declBit(c+10,"memWrite", false,-1);
    tracep->declBit(c+80,"memRead", false,-1);
    tracep->declBus(c+79,"address", false,-1, 31,0);
    tracep->declBus(c+9,"writeData", false,-1, 31,0);
    tracep->declBus(c+125,"readData", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_EX_MEM_Reg ");
    tracep->declBit(c+89,"clk", false,-1);
    tracep->declBit(c+90,"rst", false,-1);
    tracep->declBus(c+76,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+60,"pc_4_i", false,-1, 31,0);
    tracep->declBus(c+7,"readData2_i", false,-1, 31,0);
    tracep->declBus(c+61,"write_reg_i", false,-1, 4,0);
    tracep->declBit(c+3,"mem_write_i", false,-1);
    tracep->declBit(c+78,"mem_read_i", false,-1);
    tracep->declBus(c+59,"mem_to_reg_i", false,-1, 1,0);
    tracep->declBit(c+58,"regWrite_i", false,-1);
    tracep->declBus(c+79,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+62,"pc_4_o", false,-1, 31,0);
    tracep->declBus(c+9,"readData2_o", false,-1, 31,0);
    tracep->declBus(c+63,"write_reg_o", false,-1, 4,0);
    tracep->declBit(c+64,"regWrite_o", false,-1);
    tracep->declBit(c+10,"mem_write_o", false,-1);
    tracep->declBit(c+80,"mem_read_o", false,-1);
    tracep->declBus(c+65,"mem_to_reg_o", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ID_EX_Reg ");
    tracep->declBit(c+89,"clk", false,-1);
    tracep->declBit(c+90,"rst", false,-1);
    tracep->declBit(c+84,"reg_write_i", false,-1);
    tracep->declBus(c+85,"mem_to_reg_i", false,-1, 1,0);
    tracep->declBit(c+81,"mem_read_i", false,-1);
    tracep->declBit(c+82,"mem_write_i", false,-1);
    tracep->declBit(c+83,"alu_src_i", false,-1);
    tracep->declBus(c+86,"alu_op_i", false,-1, 1,0);
    tracep->declBus(c+50,"pc_4_i", false,-1, 31,0);
    tracep->declBus(c+72,"read_data1_i", false,-1, 31,0);
    tracep->declBus(c+73,"read_data2_i", false,-1, 31,0);
    tracep->declBus(c+46,"imm_i", false,-1, 31,0);
    tracep->declBus(c+57,"write_reg_i", false,-1, 4,0);
    tracep->declBit(c+58,"reg_write_o", false,-1);
    tracep->declBus(c+59,"mem_to_reg_o", false,-1, 1,0);
    tracep->declBit(c+78,"mem_read_o", false,-1);
    tracep->declBit(c+3,"mem_write_o", false,-1);
    tracep->declBit(c+4,"alu_src_o", false,-1);
    tracep->declBus(c+5,"alu_op_o", false,-1, 1,0);
    tracep->declBus(c+60,"pc_4_o", false,-1, 31,0);
    tracep->declBus(c+6,"read_data1_o", false,-1, 31,0);
    tracep->declBus(c+7,"read_data2_o", false,-1, 31,0);
    tracep->declBus(c+8,"imm_o", false,-1, 31,0);
    tracep->declBus(c+61,"write_reg_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_IF_ID_Reg ");
    tracep->declBit(c+89,"clk", false,-1);
    tracep->declBit(c+90,"rst", false,-1);
    tracep->declBus(c+43,"pc_i", false,-1, 31,0);
    tracep->declBus(c+44,"pc_4_i", false,-1, 31,0);
    tracep->declBus(c+45,"inst_i", false,-1, 31,0);
    tracep->declBus(c+2,"pc_o", false,-1, 31,0);
    tracep->declBus(c+50,"pc_4_o", false,-1, 31,0);
    tracep->declBus(c+51,"inst_o", false,-1, 31,0);
    tracep->declBus(c+2,"pc_t", false,-1, 31,0);
    tracep->declBus(c+50,"pc_4_t", false,-1, 31,0);
    tracep->declBus(c+51,"inst_t", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ImmGen ");
    tracep->declBus(c+51,"inst", false,-1, 31,0);
    tracep->declBus(c+46,"imm", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_InstMem ");
    tracep->declBus(c+43,"readAddr", false,-1, 31,0);
    tracep->declBus(c+45,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_MEM_WB_Reg ");
    tracep->declBit(c+89,"clk", false,-1);
    tracep->declBit(c+90,"rst", false,-1);
    tracep->declBus(c+79,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+125,"dmem_read_data_i", false,-1, 31,0);
    tracep->declBus(c+63,"write_reg_i", false,-1, 4,0);
    tracep->declBus(c+65,"mem_to_reg_i", false,-1, 1,0);
    tracep->declBit(c+64,"reg_write_i", false,-1);
    tracep->declBus(c+62,"pc_4_i", false,-1, 31,0);
    tracep->declBus(c+66,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+67,"dmem_read_data_o", false,-1, 31,0);
    tracep->declBus(c+68,"write_reg_o", false,-1, 4,0);
    tracep->declBit(c+69,"reg_write_o", false,-1);
    tracep->declBus(c+70,"mem_to_reg_o", false,-1, 1,0);
    tracep->declBus(c+71,"pc_4_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ALU ");
    tracep->declBus(c+129,"size", false,-1, 31,0);
    tracep->declBit(c+4,"sel", false,-1);
    tracep->declBus(c+7,"s0", false,-1, 31,0);
    tracep->declBus(c+8,"s1", false,-1, 31,0);
    tracep->declBus(c+1,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC ");
    tracep->declBus(c+129,"size", false,-1, 31,0);
    tracep->declBus(c+87,"sel", false,-1, 1,0);
    tracep->declBus(c+44,"s0", false,-1, 31,0);
    tracep->declBus(c+124,"s1", false,-1, 31,0);
    tracep->declBus(c+76,"s2", false,-1, 31,0);
    tracep->declBus(c+123,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_WriteData ");
    tracep->declBus(c+129,"size", false,-1, 31,0);
    tracep->declBus(c+70,"sel", false,-1, 1,0);
    tracep->declBus(c+66,"s0", false,-1, 31,0);
    tracep->declBus(c+67,"s1", false,-1, 31,0);
    tracep->declBus(c+71,"s2", false,-1, 31,0);
    tracep->declBus(c+47,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_PC ");
    tracep->declBit(c+89,"clk", false,-1);
    tracep->declBit(c+90,"rst", false,-1);
    tracep->declBus(c+123,"pc_i", false,-1, 31,0);
    tracep->declBus(c+43,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Register ");
    tracep->declBit(c+89,"clk", false,-1);
    tracep->declBit(c+90,"rst", false,-1);
    tracep->declBit(c+69,"regWrite", false,-1);
    tracep->declBus(c+55,"readReg1", false,-1, 4,0);
    tracep->declBus(c+56,"readReg2", false,-1, 4,0);
    tracep->declBus(c+68,"writeReg", false,-1, 4,0);
    tracep->declBus(c+47,"writeData", false,-1, 31,0);
    tracep->declBus(c+72,"readData1", false,-1, 31,0);
    tracep->declBus(c+73,"readData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+11+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ShiftLeftOne ");
    tracep->declBus(c+46,"i", false,-1, 31,0);
    tracep->declBus(c+49,"o", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_init_top(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_init_top\n"); );
    // Body
    VPipelineCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPipelineCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPipelineCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPipelineCPU___024root__trace_register(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VPipelineCPU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VPipelineCPU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VPipelineCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_full_top_0\n"); );
    // Init
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPipelineCPU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->PipelineCPU__DOT__alu_src_b),32);
    bufp->fullIData(oldp+2,(vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__pc_t),32);
    bufp->fullBit(oldp+3,(vlSelf->PipelineCPU__DOT__mem_write_ID_EX));
    bufp->fullBit(oldp+4,(vlSelf->PipelineCPU__DOT__alu_src_ID_EX));
    bufp->fullCData(oldp+5,(vlSelf->PipelineCPU__DOT__alu_op_ID_EX),2);
    bufp->fullIData(oldp+6,(vlSelf->PipelineCPU__DOT__reg_read_data1_ID_EX),32);
    bufp->fullIData(oldp+7,(vlSelf->PipelineCPU__DOT__reg_read_data2_ID_EX),32);
    bufp->fullIData(oldp+8,(vlSelf->PipelineCPU__DOT__imm_ID_EX),32);
    bufp->fullIData(oldp+9,(vlSelf->PipelineCPU__DOT__reg_read_data2_EX_MEM),32);
    bufp->fullBit(oldp+10,(vlSelf->PipelineCPU__DOT__mem_write_EX_MEM));
    bufp->fullIData(oldp+11,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0]),32);
    bufp->fullIData(oldp+12,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1]),32);
    bufp->fullIData(oldp+13,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2]),32);
    bufp->fullIData(oldp+14,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3]),32);
    bufp->fullIData(oldp+15,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4]),32);
    bufp->fullIData(oldp+16,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5]),32);
    bufp->fullIData(oldp+17,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6]),32);
    bufp->fullIData(oldp+18,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7]),32);
    bufp->fullIData(oldp+19,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8]),32);
    bufp->fullIData(oldp+20,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9]),32);
    bufp->fullIData(oldp+21,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[10]),32);
    bufp->fullIData(oldp+22,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[11]),32);
    bufp->fullIData(oldp+23,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[12]),32);
    bufp->fullIData(oldp+24,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[13]),32);
    bufp->fullIData(oldp+25,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[14]),32);
    bufp->fullIData(oldp+26,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[15]),32);
    bufp->fullIData(oldp+27,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[16]),32);
    bufp->fullIData(oldp+28,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[17]),32);
    bufp->fullIData(oldp+29,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[18]),32);
    bufp->fullIData(oldp+30,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[19]),32);
    bufp->fullIData(oldp+31,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[20]),32);
    bufp->fullIData(oldp+32,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[21]),32);
    bufp->fullIData(oldp+33,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[22]),32);
    bufp->fullIData(oldp+34,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[23]),32);
    bufp->fullIData(oldp+35,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[24]),32);
    bufp->fullIData(oldp+36,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[25]),32);
    bufp->fullIData(oldp+37,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[26]),32);
    bufp->fullIData(oldp+38,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[27]),32);
    bufp->fullIData(oldp+39,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[28]),32);
    bufp->fullIData(oldp+40,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[29]),32);
    bufp->fullIData(oldp+41,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[30]),32);
    bufp->fullIData(oldp+42,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[31]),32);
    bufp->fullIData(oldp+43,(vlSelf->PipelineCPU__DOT__pc_current),32);
    bufp->fullIData(oldp+44,(((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_current)),32);
    bufp->fullIData(oldp+45,(((0x80U <= vlSelf->PipelineCPU__DOT__pc_current)
                               ? 0U : ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                        [(0x7fU & vlSelf->PipelineCPU__DOT__pc_current)] 
                                        << 0x18U) | 
                                       ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                         [(0x7fU & 
                                           ((IData)(1U) 
                                            + vlSelf->PipelineCPU__DOT__pc_current))] 
                                         << 0x10U) 
                                        | ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                            [(0x7fU 
                                              & ((IData)(2U) 
                                                 + vlSelf->PipelineCPU__DOT__pc_current))] 
                                            << 8U) 
                                           | vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                           [(0x7fU 
                                             & ((IData)(3U) 
                                                + vlSelf->PipelineCPU__DOT__pc_current))]))))),32);
    bufp->fullIData(oldp+46,(vlSelf->PipelineCPU__DOT__imm),32);
    bufp->fullIData(oldp+47,(((0U == (IData)(vlSelf->PipelineCPU__DOT__mem_to_reg_MEM_WB))
                               ? vlSelf->PipelineCPU__DOT__alu_result_MEM_WB
                               : ((1U == (IData)(vlSelf->PipelineCPU__DOT__mem_to_reg_MEM_WB))
                                   ? vlSelf->PipelineCPU__DOT__mem_read_data_MEM_WB
                                   : ((2U == (IData)(vlSelf->PipelineCPU__DOT__mem_to_reg_MEM_WB))
                                       ? vlSelf->PipelineCPU__DOT__pc_plus4_MEM_WB
                                       : 0U)))),32);
    bufp->fullCData(oldp+48,(vlSelf->PipelineCPU__DOT__alu_control),4);
    bufp->fullIData(oldp+49,((vlSelf->PipelineCPU__DOT__imm 
                              << 1U)),32);
    bufp->fullIData(oldp+50,(vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__pc_4_t),32);
    bufp->fullIData(oldp+51,(vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t),32);
    bufp->fullCData(oldp+52,((0x7fU & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)),7);
    bufp->fullCData(oldp+53,((7U & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+54,((1U & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+55,((0x1fU & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+56,((0x1fU & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+57,((0x1fU & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                       >> 7U))),5);
    bufp->fullBit(oldp+58,(vlSelf->PipelineCPU__DOT__reg_write_ID_EX));
    bufp->fullCData(oldp+59,(vlSelf->PipelineCPU__DOT__mem_to_reg_ID_EX),2);
    bufp->fullIData(oldp+60,(vlSelf->PipelineCPU__DOT__pc_plus4_ID_EX),32);
    bufp->fullCData(oldp+61,(vlSelf->PipelineCPU__DOT__writeReg_ID_EX),5);
    bufp->fullIData(oldp+62,(vlSelf->PipelineCPU__DOT__pc_plus4_EX_MEM),32);
    bufp->fullCData(oldp+63,(vlSelf->PipelineCPU__DOT__write_reg_EX_MEM),5);
    bufp->fullBit(oldp+64,(vlSelf->PipelineCPU__DOT__reg_write_EX_MEM));
    bufp->fullCData(oldp+65,(vlSelf->PipelineCPU__DOT__mem_to_reg_EX_MEM),2);
    bufp->fullIData(oldp+66,(vlSelf->PipelineCPU__DOT__alu_result_MEM_WB),32);
    bufp->fullIData(oldp+67,(vlSelf->PipelineCPU__DOT__mem_read_data_MEM_WB),32);
    bufp->fullCData(oldp+68,(vlSelf->PipelineCPU__DOT__write_reg_MEM_WB),5);
    bufp->fullBit(oldp+69,(vlSelf->PipelineCPU__DOT__reg_write_MEM_WB));
    bufp->fullCData(oldp+70,(vlSelf->PipelineCPU__DOT__mem_to_reg_MEM_WB),2);
    bufp->fullIData(oldp+71,(vlSelf->PipelineCPU__DOT__pc_plus4_MEM_WB),32);
    bufp->fullIData(oldp+72,(vlSelf->PipelineCPU__DOT__reg_read_data1),32);
    bufp->fullIData(oldp+73,(vlSelf->PipelineCPU__DOT__reg_read_data2),32);
    bufp->fullBit(oldp+74,(((vlSelf->PipelineCPU__DOT__reg_read_data1 
                             == vlSelf->PipelineCPU__DOT__reg_read_data2)
                             ? 1U : 0U)));
    bufp->fullBit(oldp+75,((VL_LTS_III(32, vlSelf->PipelineCPU__DOT__reg_read_data1, vlSelf->PipelineCPU__DOT__reg_read_data2)
                             ? 1U : 0U)));
    bufp->fullIData(oldp+76,(vlSelf->PipelineCPU__DOT__alu_result),32);
    bufp->fullBit(oldp+77,((0U == vlSelf->PipelineCPU__DOT__alu_result)));
    bufp->fullBit(oldp+78,(vlSelf->PipelineCPU__DOT__mem_read_ID_EX));
    bufp->fullIData(oldp+79,(vlSelf->PipelineCPU__DOT__alu_result_EX_MEM),32);
    bufp->fullBit(oldp+80,(vlSelf->PipelineCPU__DOT__mem_read_EX_MEM));
    bufp->fullBit(oldp+81,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                  >> 7U))));
    bufp->fullBit(oldp+82,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                  >> 2U))));
    bufp->fullBit(oldp+83,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                  >> 1U))));
    bufp->fullBit(oldp+84,((1U & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl))));
    bufp->fullCData(oldp+85,((3U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                    >> 5U))),2);
    bufp->fullCData(oldp+86,((3U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                    >> 3U))),2);
    bufp->fullCData(oldp+87,(vlSelf->PipelineCPU__DOT__pc_sel),2);
    bufp->fullCData(oldp+88,(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl),8);
    bufp->fullBit(oldp+89,(vlSelf->clk));
    bufp->fullBit(oldp+90,(vlSelf->start));
    bufp->fullIData(oldp+91,(vlSelf->r[0]),32);
    bufp->fullIData(oldp+92,(vlSelf->r[1]),32);
    bufp->fullIData(oldp+93,(vlSelf->r[2]),32);
    bufp->fullIData(oldp+94,(vlSelf->r[3]),32);
    bufp->fullIData(oldp+95,(vlSelf->r[4]),32);
    bufp->fullIData(oldp+96,(vlSelf->r[5]),32);
    bufp->fullIData(oldp+97,(vlSelf->r[6]),32);
    bufp->fullIData(oldp+98,(vlSelf->r[7]),32);
    bufp->fullIData(oldp+99,(vlSelf->r[8]),32);
    bufp->fullIData(oldp+100,(vlSelf->r[9]),32);
    bufp->fullIData(oldp+101,(vlSelf->r[10]),32);
    bufp->fullIData(oldp+102,(vlSelf->r[11]),32);
    bufp->fullIData(oldp+103,(vlSelf->r[12]),32);
    bufp->fullIData(oldp+104,(vlSelf->r[13]),32);
    bufp->fullIData(oldp+105,(vlSelf->r[14]),32);
    bufp->fullIData(oldp+106,(vlSelf->r[15]),32);
    bufp->fullIData(oldp+107,(vlSelf->r[16]),32);
    bufp->fullIData(oldp+108,(vlSelf->r[17]),32);
    bufp->fullIData(oldp+109,(vlSelf->r[18]),32);
    bufp->fullIData(oldp+110,(vlSelf->r[19]),32);
    bufp->fullIData(oldp+111,(vlSelf->r[20]),32);
    bufp->fullIData(oldp+112,(vlSelf->r[21]),32);
    bufp->fullIData(oldp+113,(vlSelf->r[22]),32);
    bufp->fullIData(oldp+114,(vlSelf->r[23]),32);
    bufp->fullIData(oldp+115,(vlSelf->r[24]),32);
    bufp->fullIData(oldp+116,(vlSelf->r[25]),32);
    bufp->fullIData(oldp+117,(vlSelf->r[26]),32);
    bufp->fullIData(oldp+118,(vlSelf->r[27]),32);
    bufp->fullIData(oldp+119,(vlSelf->r[28]),32);
    bufp->fullIData(oldp+120,(vlSelf->r[29]),32);
    bufp->fullIData(oldp+121,(vlSelf->r[30]),32);
    bufp->fullIData(oldp+122,(vlSelf->r[31]),32);
    bufp->fullIData(oldp+123,(((0U == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                                ? ((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_current)
                                : ((1U == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                                    ? (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__pc_t 
                                       + (vlSelf->PipelineCPU__DOT__imm 
                                          << 1U)) : 
                                   ((2U == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                                     ? vlSelf->PipelineCPU__DOT__alu_result
                                     : 0U)))),32);
    bufp->fullIData(oldp+124,((vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__pc_t 
                               + (vlSelf->PipelineCPU__DOT__imm 
                                  << 1U))),32);
    bufp->fullIData(oldp+125,(vlSelf->PipelineCPU__DOT__mem_read_data),32);
    bufp->fullIData(oldp+126,(4U),32);
    bufp->fullSData(oldp+127,(0x100U),10);
    bufp->fullSData(oldp+128,(0U),10);
    bufp->fullIData(oldp+129,(0x20U),32);
}
