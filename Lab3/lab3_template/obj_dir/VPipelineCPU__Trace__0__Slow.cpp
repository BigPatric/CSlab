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
    tracep->declBit(c+86,"clk", false,-1);
    tracep->declBit(c+87,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+88+i*1,"r", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("PipelineCPU ");
    tracep->declBit(c+86,"clk", false,-1);
    tracep->declBit(c+87,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+88+i*1,"r", true,(i+0), 31,0);
    }
    tracep->declBus(c+48,"pc_current", false,-1, 31,0);
    tracep->declBus(c+120,"pc_next", false,-1, 31,0);
    tracep->declBus(c+49,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+121,"pc_branch", false,-1, 31,0);
    tracep->declBus(c+50,"instruct", false,-1, 31,0);
    tracep->declBus(c+51,"imm", false,-1, 31,0);
    tracep->declBus(c+67,"reg_read_data1", false,-1, 31,0);
    tracep->declBus(c+68,"reg_read_data2", false,-1, 31,0);
    tracep->declBus(c+74,"alu_result", false,-1, 31,0);
    tracep->declBus(c+122,"mem_read_data", false,-1, 31,0);
    tracep->declBus(c+52,"write_data", false,-1, 31,0);
    tracep->declBus(c+75,"alu_src_b", false,-1, 31,0);
    tracep->declBus(c+76,"alu_control", false,-1, 3,0);
    tracep->declBit(c+69,"branch_eq", false,-1);
    tracep->declBit(c+70,"branch_lt", false,-1);
    tracep->declBit(c+77,"mem_read", false,-1);
    tracep->declBit(c+78,"mem_write", false,-1);
    tracep->declBit(c+79,"alu_src", false,-1);
    tracep->declBit(c+80,"reg_write", false,-1);
    tracep->declBit(c+81,"jump", false,-1);
    tracep->declBus(c+82,"mem_to_reg", false,-1, 1,0);
    tracep->declBus(c+83,"alu_op", false,-1, 1,0);
    tracep->declBus(c+84,"pc_sel", false,-1, 1,0);
    tracep->declBus(c+53,"shift_one", false,-1, 31,0);
    tracep->declBus(c+1,"pc_current_IF_ID", false,-1, 31,0);
    tracep->declBus(c+54,"pc_plus4_IF_ID", false,-1, 31,0);
    tracep->declBus(c+55,"instruct_IF_ID", false,-1, 31,0);
    tracep->declBus(c+56,"opcode", false,-1, 6,0);
    tracep->declBus(c+57,"funct3", false,-1, 2,0);
    tracep->declBit(c+58,"funct7", false,-1);
    tracep->declBus(c+59,"readReg1", false,-1, 4,0);
    tracep->declBus(c+60,"readReg2", false,-1, 4,0);
    tracep->declBus(c+61,"writeReg", false,-1, 4,0);
    tracep->declBus(c+2,"pc_current_ID_EX", false,-1, 31,0);
    tracep->declBus(c+62,"pc_plus4_ID_EX", false,-1, 31,0);
    tracep->declBus(c+3,"reg_read_data1_ID_EX", false,-1, 31,0);
    tracep->declBus(c+4,"reg_read_data2_ID_EX", false,-1, 31,0);
    tracep->declBus(c+5,"imm_ID_EX", false,-1, 31,0);
    tracep->declBus(c+6,"alu_control_ID_EX", false,-1, 3,0);
    tracep->declBit(c+71,"mem_read_ID_EX", false,-1);
    tracep->declBit(c+7,"mem_write_ID_EX", false,-1);
    tracep->declBit(c+8,"alu_src_ID_EX", false,-1);
    tracep->declBit(c+9,"reg_write_ID_EX", false,-1);
    tracep->declBit(c+10,"jump_ID_EX", false,-1);
    tracep->declBus(c+72,"alu_result_EX_MEM", false,-1, 31,0);
    tracep->declBus(c+63,"pc_plus4_EX_MEM", false,-1, 31,0);
    tracep->declBus(c+11,"reg_read_data2_EX_MEM", false,-1, 31,0);
    tracep->declBit(c+12,"jump_EX_MEM", false,-1);
    tracep->declBit(c+73,"mem_read_EX_MEM", false,-1);
    tracep->declBit(c+13,"mem_write_EX_MEM", false,-1);
    tracep->declBit(c+14,"reg_write_EX_MEM", false,-1);
    tracep->declBus(c+64,"alu_result_MEM_WB", false,-1, 31,0);
    tracep->declBus(c+65,"mem_read_data_MEM_WB", false,-1, 31,0);
    tracep->declBit(c+15,"reg_write_MEM_WB", false,-1);
    tracep->declBus(c+66,"mem_to_reg_MEM_WB", false,-1, 1,0);
    tracep->pushNamePrefix("m_ALU ");
    tracep->declBus(c+6,"ALUctl", false,-1, 3,0);
    tracep->declBus(c+3,"A", false,-1, 31,0);
    tracep->declBus(c+75,"B", false,-1, 31,0);
    tracep->declBus(c+74,"ALUOut", false,-1, 31,0);
    tracep->declBit(c+81,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALUCtrl ");
    tracep->declBus(c+83,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+58,"funct7", false,-1);
    tracep->declBus(c+57,"funct3", false,-1, 2,0);
    tracep->declBus(c+76,"ALUCtl", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_1 ");
    tracep->declBus(c+48,"a", false,-1, 31,0);
    tracep->declBus(c+123,"b", false,-1, 31,0);
    tracep->declBus(c+49,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_2 ");
    tracep->declBus(c+1,"a", false,-1, 31,0);
    tracep->declBus(c+53,"b", false,-1, 31,0);
    tracep->declBus(c+121,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_BranchComp ");
    tracep->declBus(c+67,"A", false,-1, 31,0);
    tracep->declBus(c+68,"B", false,-1, 31,0);
    tracep->declBit(c+69,"BrEq", false,-1);
    tracep->declBit(c+70,"BrLT", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Control ");
    tracep->declBus(c+56,"opcode", false,-1, 6,0);
    tracep->declBus(c+57,"funct3", false,-1, 2,0);
    tracep->declBit(c+69,"BrEq", false,-1);
    tracep->declBit(c+70,"BrLT", false,-1);
    tracep->declBit(c+77,"memRead", false,-1);
    tracep->declBus(c+82,"memtoReg", false,-1, 1,0);
    tracep->declBus(c+83,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+78,"memWrite", false,-1);
    tracep->declBit(c+79,"ALUSrc", false,-1);
    tracep->declBit(c+80,"regWrite", false,-1);
    tracep->declBus(c+84,"PCSel", false,-1, 1,0);
    tracep->declBus(c+85,"crtl", false,-1, 7,0);
    tracep->declBus(c+124,"b1", false,-1, 9,0);
    tracep->declBus(c+125,"b2", false,-1, 9,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_DataMemory ");
    tracep->declBit(c+87,"rst", false,-1);
    tracep->declBit(c+86,"clk", false,-1);
    tracep->declBit(c+13,"memWrite", false,-1);
    tracep->declBit(c+73,"memRead", false,-1);
    tracep->declBus(c+72,"address", false,-1, 31,0);
    tracep->declBus(c+11,"writeData", false,-1, 31,0);
    tracep->declBus(c+122,"readData", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_EX_MEM_Reg ");
    tracep->declBit(c+86,"clk", false,-1);
    tracep->declBit(c+87,"rst", false,-1);
    tracep->declBus(c+74,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+62,"branch_addr_i", false,-1, 31,0);
    tracep->declBus(c+4,"reg_write_data_i", false,-1, 31,0);
    tracep->declBit(c+10,"alu_zero_i", false,-1);
    tracep->declBit(c+71,"mem_read_i", false,-1);
    tracep->declBit(c+7,"mem_write_i", false,-1);
    tracep->declBit(c+9,"reg_write_i", false,-1);
    tracep->declBus(c+72,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+63,"branch_addr_o", false,-1, 31,0);
    tracep->declBus(c+11,"reg_write_data_o", false,-1, 31,0);
    tracep->declBit(c+12,"alu_zero_o", false,-1);
    tracep->declBit(c+73,"mem_read_o", false,-1);
    tracep->declBit(c+13,"mem_write_o", false,-1);
    tracep->declBit(c+14,"reg_write_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ID_EX_Reg ");
    tracep->declBit(c+86,"clk", false,-1);
    tracep->declBit(c+87,"rst", false,-1);
    tracep->declBus(c+1,"pc_i", false,-1, 31,0);
    tracep->declBus(c+54,"pc_4_i", false,-1, 31,0);
    tracep->declBus(c+67,"reg_read_data1_i", false,-1, 31,0);
    tracep->declBus(c+68,"reg_read_data2_i", false,-1, 31,0);
    tracep->declBus(c+51,"imm_i", false,-1, 31,0);
    tracep->declBus(c+76,"alu_control_i", false,-1, 3,0);
    tracep->declBit(c+77,"mem_read_i", false,-1);
    tracep->declBit(c+78,"mem_write_i", false,-1);
    tracep->declBit(c+79,"alu_src_i", false,-1);
    tracep->declBit(c+80,"reg_write_i", false,-1);
    tracep->declBit(c+81,"jump_i", false,-1);
    tracep->declBus(c+2,"pc_o", false,-1, 31,0);
    tracep->declBus(c+62,"pc_4_o", false,-1, 31,0);
    tracep->declBus(c+3,"reg_read_data1_o", false,-1, 31,0);
    tracep->declBus(c+4,"reg_read_data2_o", false,-1, 31,0);
    tracep->declBus(c+5,"imm_o", false,-1, 31,0);
    tracep->declBus(c+6,"alu_control_o", false,-1, 3,0);
    tracep->declBit(c+71,"mem_read_o", false,-1);
    tracep->declBit(c+7,"mem_write_o", false,-1);
    tracep->declBit(c+8,"alu_src_o", false,-1);
    tracep->declBit(c+9,"reg_write_o", false,-1);
    tracep->declBit(c+10,"jump_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_IF_ID_Reg ");
    tracep->declBit(c+86,"clk", false,-1);
    tracep->declBit(c+87,"rst", false,-1);
    tracep->declBus(c+48,"pc_i", false,-1, 31,0);
    tracep->declBus(c+49,"pc_4_i", false,-1, 31,0);
    tracep->declBus(c+50,"inst_i", false,-1, 31,0);
    tracep->declBus(c+1,"pc_o", false,-1, 31,0);
    tracep->declBus(c+54,"pc_4_o", false,-1, 31,0);
    tracep->declBus(c+55,"inst_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ImmGen ");
    tracep->declBus(c+55,"inst", false,-1, 31,0);
    tracep->declBus(c+51,"imm", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_InstMem ");
    tracep->declBus(c+48,"readAddr", false,-1, 31,0);
    tracep->declBus(c+50,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_MEM_WB_Reg ");
    tracep->declBit(c+86,"clk", false,-1);
    tracep->declBit(c+87,"rst", false,-1);
    tracep->declBus(c+72,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+122,"reg_read_data_i", false,-1, 31,0);
    tracep->declBit(c+14,"reg_write_i", false,-1);
    tracep->declBus(c+82,"mem_to_reg_i", false,-1, 1,0);
    tracep->declBus(c+64,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+65,"reg_read_data_o", false,-1, 31,0);
    tracep->declBit(c+15,"reg_write_o", false,-1);
    tracep->declBus(c+66,"mem_to_reg_o", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ALU ");
    tracep->declBus(c+126,"size", false,-1, 31,0);
    tracep->declBit(c+79,"sel", false,-1);
    tracep->declBus(c+68,"s0", false,-1, 31,0);
    tracep->declBus(c+51,"s1", false,-1, 31,0);
    tracep->declBus(c+75,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC ");
    tracep->declBus(c+126,"size", false,-1, 31,0);
    tracep->declBus(c+84,"sel", false,-1, 1,0);
    tracep->declBus(c+49,"s0", false,-1, 31,0);
    tracep->declBus(c+121,"s1", false,-1, 31,0);
    tracep->declBus(c+74,"s2", false,-1, 31,0);
    tracep->declBus(c+120,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_WriteData ");
    tracep->declBus(c+126,"size", false,-1, 31,0);
    tracep->declBus(c+66,"sel", false,-1, 1,0);
    tracep->declBus(c+64,"s0", false,-1, 31,0);
    tracep->declBus(c+65,"s1", false,-1, 31,0);
    tracep->declBus(c+63,"s2", false,-1, 31,0);
    tracep->declBus(c+52,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_PC ");
    tracep->declBit(c+86,"clk", false,-1);
    tracep->declBit(c+87,"rst", false,-1);
    tracep->declBus(c+120,"pc_i", false,-1, 31,0);
    tracep->declBus(c+48,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Register ");
    tracep->declBit(c+86,"clk", false,-1);
    tracep->declBit(c+87,"rst", false,-1);
    tracep->declBit(c+80,"regWrite", false,-1);
    tracep->declBus(c+59,"readReg1", false,-1, 4,0);
    tracep->declBus(c+60,"readReg2", false,-1, 4,0);
    tracep->declBus(c+61,"writeReg", false,-1, 4,0);
    tracep->declBus(c+52,"writeData", false,-1, 31,0);
    tracep->declBus(c+67,"readData1", false,-1, 31,0);
    tracep->declBus(c+68,"readData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+16+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ShiftLeftOne ");
    tracep->declBus(c+51,"i", false,-1, 31,0);
    tracep->declBus(c+53,"o", false,-1, 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->PipelineCPU__DOT__pc_current_IF_ID),32);
    bufp->fullIData(oldp+2,(vlSelf->PipelineCPU__DOT__pc_current_ID_EX),32);
    bufp->fullIData(oldp+3,(vlSelf->PipelineCPU__DOT__reg_read_data1_ID_EX),32);
    bufp->fullIData(oldp+4,(vlSelf->PipelineCPU__DOT__reg_read_data2_ID_EX),32);
    bufp->fullIData(oldp+5,(vlSelf->PipelineCPU__DOT__imm_ID_EX),32);
    bufp->fullCData(oldp+6,(vlSelf->PipelineCPU__DOT__alu_control_ID_EX),4);
    bufp->fullBit(oldp+7,(vlSelf->PipelineCPU__DOT__mem_write_ID_EX));
    bufp->fullBit(oldp+8,(vlSelf->PipelineCPU__DOT__alu_src_ID_EX));
    bufp->fullBit(oldp+9,(vlSelf->PipelineCPU__DOT__reg_write_ID_EX));
    bufp->fullBit(oldp+10,(vlSelf->PipelineCPU__DOT__jump_ID_EX));
    bufp->fullIData(oldp+11,(vlSelf->PipelineCPU__DOT__reg_read_data2_EX_MEM),32);
    bufp->fullBit(oldp+12,(vlSelf->PipelineCPU__DOT__jump_EX_MEM));
    bufp->fullBit(oldp+13,(vlSelf->PipelineCPU__DOT__mem_write_EX_MEM));
    bufp->fullBit(oldp+14,(vlSelf->PipelineCPU__DOT__reg_write_EX_MEM));
    bufp->fullBit(oldp+15,(vlSelf->PipelineCPU__DOT__reg_write_MEM_WB));
    bufp->fullIData(oldp+16,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0]),32);
    bufp->fullIData(oldp+17,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1]),32);
    bufp->fullIData(oldp+18,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2]),32);
    bufp->fullIData(oldp+19,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3]),32);
    bufp->fullIData(oldp+20,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4]),32);
    bufp->fullIData(oldp+21,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5]),32);
    bufp->fullIData(oldp+22,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6]),32);
    bufp->fullIData(oldp+23,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7]),32);
    bufp->fullIData(oldp+24,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8]),32);
    bufp->fullIData(oldp+25,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9]),32);
    bufp->fullIData(oldp+26,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[10]),32);
    bufp->fullIData(oldp+27,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[11]),32);
    bufp->fullIData(oldp+28,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[12]),32);
    bufp->fullIData(oldp+29,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[13]),32);
    bufp->fullIData(oldp+30,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[14]),32);
    bufp->fullIData(oldp+31,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[15]),32);
    bufp->fullIData(oldp+32,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[16]),32);
    bufp->fullIData(oldp+33,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[17]),32);
    bufp->fullIData(oldp+34,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[18]),32);
    bufp->fullIData(oldp+35,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[19]),32);
    bufp->fullIData(oldp+36,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[20]),32);
    bufp->fullIData(oldp+37,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[21]),32);
    bufp->fullIData(oldp+38,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[22]),32);
    bufp->fullIData(oldp+39,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[23]),32);
    bufp->fullIData(oldp+40,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[24]),32);
    bufp->fullIData(oldp+41,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[25]),32);
    bufp->fullIData(oldp+42,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[26]),32);
    bufp->fullIData(oldp+43,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[27]),32);
    bufp->fullIData(oldp+44,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[28]),32);
    bufp->fullIData(oldp+45,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[29]),32);
    bufp->fullIData(oldp+46,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[30]),32);
    bufp->fullIData(oldp+47,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[31]),32);
    bufp->fullIData(oldp+48,(vlSelf->PipelineCPU__DOT__pc_current),32);
    bufp->fullIData(oldp+49,(((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_current)),32);
    bufp->fullIData(oldp+50,(((0x80U <= vlSelf->PipelineCPU__DOT__pc_current)
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
    bufp->fullIData(oldp+51,(vlSelf->PipelineCPU__DOT__imm),32);
    bufp->fullIData(oldp+52,(((0U == (IData)(vlSelf->PipelineCPU__DOT__mem_to_reg_MEM_WB))
                               ? vlSelf->PipelineCPU__DOT__alu_result_MEM_WB
                               : ((1U == (IData)(vlSelf->PipelineCPU__DOT__mem_to_reg_MEM_WB))
                                   ? vlSelf->PipelineCPU__DOT__mem_read_data_MEM_WB
                                   : ((2U == (IData)(vlSelf->PipelineCPU__DOT__mem_to_reg_MEM_WB))
                                       ? vlSelf->PipelineCPU__DOT__pc_plus4_EX_MEM
                                       : 0U)))),32);
    bufp->fullIData(oldp+53,((vlSelf->PipelineCPU__DOT__imm 
                              << 1U)),32);
    bufp->fullIData(oldp+54,(vlSelf->PipelineCPU__DOT__pc_plus4_IF_ID),32);
    bufp->fullIData(oldp+55,(vlSelf->PipelineCPU__DOT__instruct_IF_ID),32);
    bufp->fullCData(oldp+56,((0x7fU & vlSelf->PipelineCPU__DOT__instruct_IF_ID)),7);
    bufp->fullCData(oldp+57,((7U & (vlSelf->PipelineCPU__DOT__instruct_IF_ID 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+58,((1U & (vlSelf->PipelineCPU__DOT__instruct_IF_ID 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+59,((0x1fU & (vlSelf->PipelineCPU__DOT__instruct_IF_ID 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+60,((0x1fU & (vlSelf->PipelineCPU__DOT__instruct_IF_ID 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+61,((0x1fU & (vlSelf->PipelineCPU__DOT__instruct_IF_ID 
                                       >> 7U))),5);
    bufp->fullIData(oldp+62,(vlSelf->PipelineCPU__DOT__pc_plus4_ID_EX),32);
    bufp->fullIData(oldp+63,(vlSelf->PipelineCPU__DOT__pc_plus4_EX_MEM),32);
    bufp->fullIData(oldp+64,(vlSelf->PipelineCPU__DOT__alu_result_MEM_WB),32);
    bufp->fullIData(oldp+65,(vlSelf->PipelineCPU__DOT__mem_read_data_MEM_WB),32);
    bufp->fullCData(oldp+66,(vlSelf->PipelineCPU__DOT__mem_to_reg_MEM_WB),2);
    bufp->fullIData(oldp+67,(vlSelf->PipelineCPU__DOT__reg_read_data1),32);
    bufp->fullIData(oldp+68,(vlSelf->PipelineCPU__DOT__reg_read_data2),32);
    bufp->fullBit(oldp+69,(((vlSelf->PipelineCPU__DOT__reg_read_data1 
                             == vlSelf->PipelineCPU__DOT__reg_read_data2)
                             ? 1U : 0U)));
    bufp->fullBit(oldp+70,((VL_LTS_III(32, vlSelf->PipelineCPU__DOT__reg_read_data1, vlSelf->PipelineCPU__DOT__reg_read_data2)
                             ? 1U : 0U)));
    bufp->fullBit(oldp+71,(vlSelf->PipelineCPU__DOT__mem_read_ID_EX));
    bufp->fullIData(oldp+72,(vlSelf->PipelineCPU__DOT__alu_result_EX_MEM),32);
    bufp->fullBit(oldp+73,(vlSelf->PipelineCPU__DOT__mem_read_EX_MEM));
    bufp->fullIData(oldp+74,(vlSelf->PipelineCPU__DOT__alu_result),32);
    bufp->fullIData(oldp+75,(vlSelf->PipelineCPU__DOT__alu_src_b),32);
    bufp->fullCData(oldp+76,(vlSelf->PipelineCPU__DOT__alu_control),4);
    bufp->fullBit(oldp+77,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                  >> 7U))));
    bufp->fullBit(oldp+78,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                  >> 2U))));
    bufp->fullBit(oldp+79,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                  >> 1U))));
    bufp->fullBit(oldp+80,((1U & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl))));
    bufp->fullBit(oldp+81,((0U == vlSelf->PipelineCPU__DOT__alu_result)));
    bufp->fullCData(oldp+82,((3U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                    >> 5U))),2);
    bufp->fullCData(oldp+83,((3U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                    >> 3U))),2);
    bufp->fullCData(oldp+84,(vlSelf->PipelineCPU__DOT__pc_sel),2);
    bufp->fullCData(oldp+85,(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl),8);
    bufp->fullBit(oldp+86,(vlSelf->clk));
    bufp->fullBit(oldp+87,(vlSelf->start));
    bufp->fullIData(oldp+88,(vlSelf->r[0]),32);
    bufp->fullIData(oldp+89,(vlSelf->r[1]),32);
    bufp->fullIData(oldp+90,(vlSelf->r[2]),32);
    bufp->fullIData(oldp+91,(vlSelf->r[3]),32);
    bufp->fullIData(oldp+92,(vlSelf->r[4]),32);
    bufp->fullIData(oldp+93,(vlSelf->r[5]),32);
    bufp->fullIData(oldp+94,(vlSelf->r[6]),32);
    bufp->fullIData(oldp+95,(vlSelf->r[7]),32);
    bufp->fullIData(oldp+96,(vlSelf->r[8]),32);
    bufp->fullIData(oldp+97,(vlSelf->r[9]),32);
    bufp->fullIData(oldp+98,(vlSelf->r[10]),32);
    bufp->fullIData(oldp+99,(vlSelf->r[11]),32);
    bufp->fullIData(oldp+100,(vlSelf->r[12]),32);
    bufp->fullIData(oldp+101,(vlSelf->r[13]),32);
    bufp->fullIData(oldp+102,(vlSelf->r[14]),32);
    bufp->fullIData(oldp+103,(vlSelf->r[15]),32);
    bufp->fullIData(oldp+104,(vlSelf->r[16]),32);
    bufp->fullIData(oldp+105,(vlSelf->r[17]),32);
    bufp->fullIData(oldp+106,(vlSelf->r[18]),32);
    bufp->fullIData(oldp+107,(vlSelf->r[19]),32);
    bufp->fullIData(oldp+108,(vlSelf->r[20]),32);
    bufp->fullIData(oldp+109,(vlSelf->r[21]),32);
    bufp->fullIData(oldp+110,(vlSelf->r[22]),32);
    bufp->fullIData(oldp+111,(vlSelf->r[23]),32);
    bufp->fullIData(oldp+112,(vlSelf->r[24]),32);
    bufp->fullIData(oldp+113,(vlSelf->r[25]),32);
    bufp->fullIData(oldp+114,(vlSelf->r[26]),32);
    bufp->fullIData(oldp+115,(vlSelf->r[27]),32);
    bufp->fullIData(oldp+116,(vlSelf->r[28]),32);
    bufp->fullIData(oldp+117,(vlSelf->r[29]),32);
    bufp->fullIData(oldp+118,(vlSelf->r[30]),32);
    bufp->fullIData(oldp+119,(vlSelf->r[31]),32);
    bufp->fullIData(oldp+120,(((0U == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                                ? ((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_current)
                                : ((1U == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                                    ? (vlSelf->PipelineCPU__DOT__pc_current_IF_ID 
                                       + (vlSelf->PipelineCPU__DOT__imm 
                                          << 1U)) : 
                                   ((2U == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                                     ? vlSelf->PipelineCPU__DOT__alu_result
                                     : 0U)))),32);
    bufp->fullIData(oldp+121,((vlSelf->PipelineCPU__DOT__pc_current_IF_ID 
                               + (vlSelf->PipelineCPU__DOT__imm 
                                  << 1U))),32);
    bufp->fullIData(oldp+122,(vlSelf->PipelineCPU__DOT__mem_read_data),32);
    bufp->fullIData(oldp+123,(4U),32);
    bufp->fullSData(oldp+124,(0x100U),10);
    bufp->fullSData(oldp+125,(0U),10);
    bufp->fullIData(oldp+126,(0x20U),32);
}
