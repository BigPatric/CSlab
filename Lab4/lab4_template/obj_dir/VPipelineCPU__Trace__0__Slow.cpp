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
    tracep->declBit(c+105,"clk", false,-1);
    tracep->declBit(c+106,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+107+i*1,"r", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("PipelineCPU ");
    tracep->declBit(c+105,"clk", false,-1);
    tracep->declBit(c+106,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+107+i*1,"r", true,(i+0), 31,0);
    }
    tracep->declBus(c+57,"pc_current", false,-1, 31,0);
    tracep->declBus(c+139,"pc_next", false,-1, 31,0);
    tracep->declBus(c+58,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+90,"pc_branch", false,-1, 31,0);
    tracep->declBus(c+59,"instruct", false,-1, 31,0);
    tracep->declBus(c+60,"imm", false,-1, 31,0);
    tracep->declBus(c+140,"reg_read_data1", false,-1, 31,0);
    tracep->declBus(c+141,"reg_read_data2", false,-1, 31,0);
    tracep->declBus(c+61,"alu_result", false,-1, 31,0);
    tracep->declBus(c+142,"mem_read_data", false,-1, 31,0);
    tracep->declBus(c+62,"write_data", false,-1, 31,0);
    tracep->declBus(c+63,"alu_src_b", false,-1, 31,0);
    tracep->declBus(c+1,"alu_control", false,-1, 3,0);
    tracep->declBit(c+91,"branch_eq", false,-1);
    tracep->declBit(c+92,"branch_lt", false,-1);
    tracep->declBit(c+93,"mem_read", false,-1);
    tracep->declBit(c+94,"mem_write", false,-1);
    tracep->declBit(c+95,"alu_src", false,-1);
    tracep->declBit(c+96,"reg_write", false,-1);
    tracep->declBit(c+64,"jump", false,-1);
    tracep->declBus(c+97,"mem_to_reg", false,-1, 1,0);
    tracep->declBus(c+98,"alu_op", false,-1, 1,0);
    tracep->declBus(c+99,"pc_sel", false,-1, 1,0);
    tracep->declBus(c+65,"shift_one", false,-1, 31,0);
    tracep->declBus(c+66,"alu_result_EX_MEM", false,-1, 31,0);
    tracep->declBus(c+2,"pc_plus4_EX_MEM", false,-1, 31,0);
    tracep->declBus(c+3,"reg_read_data2_EX_MEM", false,-1, 31,0);
    tracep->declBus(c+67,"write_reg_EX_MEM", false,-1, 4,0);
    tracep->declBit(c+4,"mem_write_EX_MEM", false,-1);
    tracep->declBit(c+68,"mem_read_EX_MEM", false,-1);
    tracep->declBit(c+69,"reg_write_EX_MEM", false,-1);
    tracep->declBus(c+5,"mem_to_reg_EX_MEM", false,-1, 1,0);
    tracep->declBus(c+6,"pc_current_IF_ID", false,-1, 31,0);
    tracep->declBus(c+7,"pc_plus4_IF_ID", false,-1, 31,0);
    tracep->declBus(c+70,"instruct_IF_ID", false,-1, 31,0);
    tracep->declBit(c+71,"RePC", false,-1);
    tracep->declBit(c+72,"Flush_HD", false,-1);
    tracep->declBus(c+73,"opcode", false,-1, 6,0);
    tracep->declBus(c+74,"funct3", false,-1, 2,0);
    tracep->declBit(c+75,"funct7", false,-1);
    tracep->declBit(c+100,"flushCtrl", false,-1);
    tracep->declBit(c+101,"PCorR1", false,-1);
    tracep->declBus(c+76,"readReg1", false,-1, 4,0);
    tracep->declBus(c+77,"readReg2", false,-1, 4,0);
    tracep->declBus(c+78,"writeReg", false,-1, 4,0);
    tracep->declBus(c+102,"reg_readData1_mux", false,-1, 31,0);
    tracep->declBus(c+103,"reg_readData2_mux", false,-1, 31,0);
    tracep->declBus(c+143,"pc_current_IF_ID_mux", false,-1, 31,0);
    tracep->declBus(c+144,"pc_S_out", false,-1, 31,0);
    tracep->declBit(c+79,"reg_write_ID_EX", false,-1);
    tracep->declBus(c+8,"mem_to_reg_ID_EX", false,-1, 1,0);
    tracep->declBit(c+80,"mem_read_ID_EX", false,-1);
    tracep->declBit(c+9,"mem_write_ID_EX", false,-1);
    tracep->declBit(c+10,"alu_src_ID_EX", false,-1);
    tracep->declBus(c+11,"alu_op_ID_EX", false,-1, 1,0);
    tracep->declBus(c+12,"pc_plus4_ID_EX", false,-1, 31,0);
    tracep->declBus(c+13,"reg_read_data1_ID_EX", false,-1, 31,0);
    tracep->declBus(c+14,"reg_read_data2_ID_EX", false,-1, 31,0);
    tracep->declBus(c+15,"imm_ID_EX", false,-1, 31,0);
    tracep->declBus(c+81,"writeReg_ID_EX", false,-1, 4,0);
    tracep->declBus(c+16,"funct3_ID_EX", false,-1, 2,0);
    tracep->declBit(c+17,"funct7_ID_EX", false,-1);
    tracep->declBus(c+18,"instruct_ID_EX", false,-1, 31,0);
    tracep->declBit(c+82,"id_ForwardA", false,-1);
    tracep->declBit(c+83,"id_ForwardB", false,-1);
    tracep->declBus(c+84,"ex_ForwardA", false,-1, 1,0);
    tracep->declBus(c+85,"ex_ForwardB", false,-1, 1,0);
    tracep->declBus(c+86,"reg_read_data1_ID_EX_mux", false,-1, 31,0);
    tracep->declBus(c+87,"reg_read_data2_ID_EX_mux", false,-1, 31,0);
    tracep->declBus(c+19,"alu_result_MEM_WB", false,-1, 31,0);
    tracep->declBus(c+20,"mem_read_data_MEM_WB", false,-1, 31,0);
    tracep->declBus(c+88,"write_reg_MEM_WB", false,-1, 4,0);
    tracep->declBit(c+89,"reg_write_MEM_WB", false,-1);
    tracep->declBus(c+21,"mem_to_reg_MEM_WB", false,-1, 1,0);
    tracep->declBus(c+22,"pc_plus4_MEM_WB", false,-1, 31,0);
    tracep->pushNamePrefix("hazard_detection_unit ");
    tracep->declBus(c+73,"opcode", false,-1, 6,0);
    tracep->declBus(c+97,"memtoReg", false,-1, 1,0);
    tracep->declBus(c+76,"id_R1", false,-1, 4,0);
    tracep->declBus(c+77,"id_R2", false,-1, 4,0);
    tracep->declBus(c+81,"ex_Rd", false,-1, 4,0);
    tracep->declBus(c+67,"mem_Rd", false,-1, 4,0);
    tracep->declBit(c+80,"ID_EX_MemRead", false,-1);
    tracep->declBit(c+68,"mem_MemRead", false,-1);
    tracep->declBit(c+71,"RePC", false,-1);
    tracep->declBit(c+72,"Flush_HD", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALU ");
    tracep->declBus(c+1,"ALUctl", false,-1, 3,0);
    tracep->declBus(c+86,"A", false,-1, 31,0);
    tracep->declBus(c+63,"B", false,-1, 31,0);
    tracep->declBus(c+61,"ALUOut", false,-1, 31,0);
    tracep->declBit(c+64,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALUCtrl ");
    tracep->declBus(c+11,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+17,"funct7", false,-1);
    tracep->declBus(c+16,"funct3", false,-1, 2,0);
    tracep->declBus(c+1,"ALUCtl", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_1 ");
    tracep->declBus(c+57,"a", false,-1, 31,0);
    tracep->declBus(c+145,"b", false,-1, 31,0);
    tracep->declBus(c+58,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_2 ");
    tracep->declBus(c+143,"a", false,-1, 31,0);
    tracep->declBus(c+65,"b", false,-1, 31,0);
    tracep->declBus(c+90,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_BranchComp ");
    tracep->declBus(c+102,"A", false,-1, 31,0);
    tracep->declBus(c+103,"B", false,-1, 31,0);
    tracep->declBit(c+91,"BrEq", false,-1);
    tracep->declBit(c+92,"BrLT", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Control ");
    tracep->declBus(c+73,"opcode", false,-1, 6,0);
    tracep->declBus(c+74,"funct3", false,-1, 2,0);
    tracep->declBit(c+91,"BrEq", false,-1);
    tracep->declBit(c+92,"BrLT", false,-1);
    tracep->declBit(c+93,"memRead", false,-1);
    tracep->declBus(c+97,"memtoReg", false,-1, 1,0);
    tracep->declBus(c+98,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+94,"memWrite", false,-1);
    tracep->declBit(c+95,"ALUSrc", false,-1);
    tracep->declBit(c+96,"regWrite", false,-1);
    tracep->declBus(c+99,"PCSel", false,-1, 1,0);
    tracep->declBit(c+100,"flushCtrl", false,-1);
    tracep->declBit(c+101,"PCorR1", false,-1);
    tracep->declBus(c+104,"crtl", false,-1, 7,0);
    tracep->declBus(c+146,"b1", false,-1, 9,0);
    tracep->declBus(c+147,"b2", false,-1, 9,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_DataMemory ");
    tracep->declBit(c+106,"rst", false,-1);
    tracep->declBit(c+105,"clk", false,-1);
    tracep->declBit(c+4,"memWrite", false,-1);
    tracep->declBit(c+68,"memRead", false,-1);
    tracep->declBus(c+66,"address", false,-1, 31,0);
    tracep->declBus(c+3,"writeData", false,-1, 31,0);
    tracep->declBus(c+142,"readData", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_EX_MEM_Reg ");
    tracep->declBit(c+105,"clk", false,-1);
    tracep->declBit(c+106,"rst", false,-1);
    tracep->declBus(c+61,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+12,"pc_4_i", false,-1, 31,0);
    tracep->declBus(c+87,"readData2_i", false,-1, 31,0);
    tracep->declBus(c+81,"write_reg_i", false,-1, 4,0);
    tracep->declBit(c+9,"mem_write_i", false,-1);
    tracep->declBit(c+80,"mem_read_i", false,-1);
    tracep->declBus(c+8,"mem_to_reg_i", false,-1, 1,0);
    tracep->declBit(c+79,"regWrite_i", false,-1);
    tracep->declBus(c+66,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+2,"pc_4_o", false,-1, 31,0);
    tracep->declBus(c+3,"readData2_o", false,-1, 31,0);
    tracep->declBus(c+67,"write_reg_o", false,-1, 4,0);
    tracep->declBit(c+69,"regWrite_o", false,-1);
    tracep->declBit(c+4,"mem_write_o", false,-1);
    tracep->declBit(c+68,"mem_read_o", false,-1);
    tracep->declBus(c+5,"mem_to_reg_o", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Forwarding_Unit ");
    tracep->declBus(c+76,"id_R1", false,-1, 4,0);
    tracep->declBus(c+77,"id_R2", false,-1, 4,0);
    tracep->declBus(c+23,"ex_R1", false,-1, 4,0);
    tracep->declBus(c+24,"ex_R2", false,-1, 4,0);
    tracep->declBus(c+67,"mem_Rd", false,-1, 4,0);
    tracep->declBus(c+88,"wb_Rd", false,-1, 4,0);
    tracep->declBit(c+69,"mem_RegWrite", false,-1);
    tracep->declBit(c+89,"wb_RegWrite", false,-1);
    tracep->declBit(c+82,"id_ForwardA", false,-1);
    tracep->declBit(c+83,"id_ForwardB", false,-1);
    tracep->declBus(c+84,"ex_ForwardA", false,-1, 1,0);
    tracep->declBus(c+85,"ex_ForwardB", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ID_EX_Reg ");
    tracep->declBit(c+105,"clk", false,-1);
    tracep->declBit(c+106,"rst", false,-1);
    tracep->declBit(c+96,"reg_write_i", false,-1);
    tracep->declBus(c+97,"mem_to_reg_i", false,-1, 1,0);
    tracep->declBit(c+93,"mem_read_i", false,-1);
    tracep->declBit(c+94,"mem_write_i", false,-1);
    tracep->declBit(c+95,"alu_src_i", false,-1);
    tracep->declBus(c+98,"alu_op_i", false,-1, 1,0);
    tracep->declBus(c+74,"funct3_i", false,-1, 2,0);
    tracep->declBit(c+75,"funct7_i", false,-1);
    tracep->declBus(c+7,"pc_4_i", false,-1, 31,0);
    tracep->declBus(c+102,"read_data1_i", false,-1, 31,0);
    tracep->declBus(c+103,"read_data2_i", false,-1, 31,0);
    tracep->declBus(c+60,"imm_i", false,-1, 31,0);
    tracep->declBus(c+78,"write_reg_i", false,-1, 4,0);
    tracep->declBit(c+72,"Flush_HD", false,-1);
    tracep->declBus(c+70,"instr_i", false,-1, 31,0);
    tracep->declBit(c+79,"reg_write_o", false,-1);
    tracep->declBus(c+8,"mem_to_reg_o", false,-1, 1,0);
    tracep->declBit(c+80,"mem_read_o", false,-1);
    tracep->declBit(c+9,"mem_write_o", false,-1);
    tracep->declBit(c+10,"alu_src_o", false,-1);
    tracep->declBus(c+11,"alu_op_o", false,-1, 1,0);
    tracep->declBus(c+12,"pc_4_o", false,-1, 31,0);
    tracep->declBus(c+13,"read_data1_o", false,-1, 31,0);
    tracep->declBus(c+14,"read_data2_o", false,-1, 31,0);
    tracep->declBus(c+15,"imm_o", false,-1, 31,0);
    tracep->declBus(c+81,"write_reg_o", false,-1, 4,0);
    tracep->declBus(c+16,"funct3_o", false,-1, 2,0);
    tracep->declBit(c+17,"funct7_o", false,-1);
    tracep->declBus(c+18,"instr_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_IF_ID_Reg ");
    tracep->declBit(c+105,"clk", false,-1);
    tracep->declBit(c+106,"rst", false,-1);
    tracep->declBus(c+57,"pc_i", false,-1, 31,0);
    tracep->declBus(c+58,"pc_4_i", false,-1, 31,0);
    tracep->declBus(c+59,"inst_i", false,-1, 31,0);
    tracep->declBit(c+72,"Flush_HD", false,-1);
    tracep->declBit(c+100,"flushCtrl", false,-1);
    tracep->declBus(c+6,"pc_o", false,-1, 31,0);
    tracep->declBus(c+7,"pc_4_o", false,-1, 31,0);
    tracep->declBus(c+70,"inst_o", false,-1, 31,0);
    tracep->declBus(c+6,"pc_t", false,-1, 31,0);
    tracep->declBus(c+7,"pc_4_t", false,-1, 31,0);
    tracep->declBus(c+70,"inst_t", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ImmGen ");
    tracep->declBus(c+70,"inst", false,-1, 31,0);
    tracep->declBus(c+60,"imm", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_InstMem ");
    tracep->declBus(c+57,"readAddr", false,-1, 31,0);
    tracep->declBus(c+59,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_MEM_WB_Reg ");
    tracep->declBit(c+105,"clk", false,-1);
    tracep->declBit(c+106,"rst", false,-1);
    tracep->declBus(c+66,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+142,"dmem_read_data_i", false,-1, 31,0);
    tracep->declBus(c+67,"write_reg_i", false,-1, 4,0);
    tracep->declBus(c+5,"mem_to_reg_i", false,-1, 1,0);
    tracep->declBit(c+69,"reg_write_i", false,-1);
    tracep->declBus(c+2,"pc_4_i", false,-1, 31,0);
    tracep->declBus(c+19,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+20,"dmem_read_data_o", false,-1, 31,0);
    tracep->declBus(c+88,"write_reg_o", false,-1, 4,0);
    tracep->declBit(c+89,"reg_write_o", false,-1);
    tracep->declBus(c+21,"mem_to_reg_o", false,-1, 1,0);
    tracep->declBus(c+22,"pc_4_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ALU ");
    tracep->declBus(c+148,"size", false,-1, 31,0);
    tracep->declBit(c+10,"sel", false,-1);
    tracep->declBus(c+87,"s0", false,-1, 31,0);
    tracep->declBus(c+15,"s1", false,-1, 31,0);
    tracep->declBus(c+63,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC ");
    tracep->declBus(c+148,"size", false,-1, 31,0);
    tracep->declBit(c+71,"sel", false,-1);
    tracep->declBus(c+144,"s0", false,-1, 31,0);
    tracep->declBus(c+57,"s1", false,-1, 31,0);
    tracep->declBus(c+139,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC_Branch ");
    tracep->declBus(c+148,"size", false,-1, 31,0);
    tracep->declBit(c+101,"sel", false,-1);
    tracep->declBus(c+6,"s0", false,-1, 31,0);
    tracep->declBus(c+102,"s1", false,-1, 31,0);
    tracep->declBus(c+143,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC_Jump ");
    tracep->declBus(c+148,"size", false,-1, 31,0);
    tracep->declBus(c+99,"sel", false,-1, 1,0);
    tracep->declBus(c+58,"s0", false,-1, 31,0);
    tracep->declBus(c+90,"s1", false,-1, 31,0);
    tracep->declBus(c+90,"s2", false,-1, 31,0);
    tracep->declBus(c+144,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_WriteData ");
    tracep->declBus(c+148,"size", false,-1, 31,0);
    tracep->declBus(c+21,"sel", false,-1, 1,0);
    tracep->declBus(c+19,"s0", false,-1, 31,0);
    tracep->declBus(c+20,"s1", false,-1, 31,0);
    tracep->declBus(c+22,"s2", false,-1, 31,0);
    tracep->declBus(c+62,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_reg_read_data1 ");
    tracep->declBus(c+148,"size", false,-1, 31,0);
    tracep->declBus(c+84,"sel", false,-1, 1,0);
    tracep->declBus(c+13,"s0", false,-1, 31,0);
    tracep->declBus(c+62,"s1", false,-1, 31,0);
    tracep->declBus(c+66,"s2", false,-1, 31,0);
    tracep->declBus(c+86,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_reg_read_data2 ");
    tracep->declBus(c+148,"size", false,-1, 31,0);
    tracep->declBus(c+85,"sel", false,-1, 1,0);
    tracep->declBus(c+14,"s0", false,-1, 31,0);
    tracep->declBus(c+62,"s1", false,-1, 31,0);
    tracep->declBus(c+66,"s2", false,-1, 31,0);
    tracep->declBus(c+87,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_PC ");
    tracep->declBit(c+105,"clk", false,-1);
    tracep->declBit(c+106,"rst", false,-1);
    tracep->declBus(c+139,"pc_i", false,-1, 31,0);
    tracep->declBus(c+57,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Register ");
    tracep->declBit(c+105,"clk", false,-1);
    tracep->declBit(c+106,"rst", false,-1);
    tracep->declBit(c+89,"regWrite", false,-1);
    tracep->declBus(c+76,"readReg1", false,-1, 4,0);
    tracep->declBus(c+77,"readReg2", false,-1, 4,0);
    tracep->declBus(c+88,"writeReg", false,-1, 4,0);
    tracep->declBus(c+62,"writeData", false,-1, 31,0);
    tracep->declBus(c+140,"readData1", false,-1, 31,0);
    tracep->declBus(c+141,"readData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+25+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ShiftLeftOne ");
    tracep->declBus(c+60,"i", false,-1, 31,0);
    tracep->declBus(c+65,"o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_readData1 ");
    tracep->declBus(c+148,"size", false,-1, 31,0);
    tracep->declBit(c+82,"sel", false,-1);
    tracep->declBus(c+140,"s0", false,-1, 31,0);
    tracep->declBus(c+66,"s1", false,-1, 31,0);
    tracep->declBus(c+102,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_readData2 ");
    tracep->declBus(c+148,"size", false,-1, 31,0);
    tracep->declBit(c+83,"sel", false,-1);
    tracep->declBus(c+141,"s0", false,-1, 31,0);
    tracep->declBus(c+66,"s1", false,-1, 31,0);
    tracep->declBus(c+103,"out", false,-1, 31,0);
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
    bufp->fullCData(oldp+1,(vlSelf->PipelineCPU__DOT__alu_control),4);
    bufp->fullIData(oldp+2,(vlSelf->PipelineCPU__DOT__pc_plus4_EX_MEM),32);
    bufp->fullIData(oldp+3,(vlSelf->PipelineCPU__DOT__reg_read_data2_EX_MEM),32);
    bufp->fullBit(oldp+4,(vlSelf->PipelineCPU__DOT__mem_write_EX_MEM));
    bufp->fullCData(oldp+5,(vlSelf->PipelineCPU__DOT__mem_to_reg_EX_MEM),2);
    bufp->fullIData(oldp+6,(vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__pc_t),32);
    bufp->fullIData(oldp+7,(vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__pc_4_t),32);
    bufp->fullCData(oldp+8,(vlSelf->PipelineCPU__DOT__mem_to_reg_ID_EX),2);
    bufp->fullBit(oldp+9,(vlSelf->PipelineCPU__DOT__mem_write_ID_EX));
    bufp->fullBit(oldp+10,(vlSelf->PipelineCPU__DOT__alu_src_ID_EX));
    bufp->fullCData(oldp+11,(vlSelf->PipelineCPU__DOT__alu_op_ID_EX),2);
    bufp->fullIData(oldp+12,(vlSelf->PipelineCPU__DOT__pc_plus4_ID_EX),32);
    bufp->fullIData(oldp+13,(vlSelf->PipelineCPU__DOT__reg_read_data1_ID_EX),32);
    bufp->fullIData(oldp+14,(vlSelf->PipelineCPU__DOT__reg_read_data2_ID_EX),32);
    bufp->fullIData(oldp+15,(vlSelf->PipelineCPU__DOT__imm_ID_EX),32);
    bufp->fullCData(oldp+16,(vlSelf->PipelineCPU__DOT__funct3_ID_EX),3);
    bufp->fullBit(oldp+17,(vlSelf->PipelineCPU__DOT__funct7_ID_EX));
    bufp->fullIData(oldp+18,(vlSelf->PipelineCPU__DOT__instruct_ID_EX),32);
    bufp->fullIData(oldp+19,(vlSelf->PipelineCPU__DOT__alu_result_MEM_WB),32);
    bufp->fullIData(oldp+20,(vlSelf->PipelineCPU__DOT__mem_read_data_MEM_WB),32);
    bufp->fullCData(oldp+21,(vlSelf->PipelineCPU__DOT__mem_to_reg_MEM_WB),2);
    bufp->fullIData(oldp+22,(vlSelf->PipelineCPU__DOT__pc_plus4_MEM_WB),32);
    bufp->fullCData(oldp+23,((0x1fU & (vlSelf->PipelineCPU__DOT__instruct_ID_EX 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+24,((0x1fU & (vlSelf->PipelineCPU__DOT__instruct_ID_EX 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+25,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0]),32);
    bufp->fullIData(oldp+26,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1]),32);
    bufp->fullIData(oldp+27,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2]),32);
    bufp->fullIData(oldp+28,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3]),32);
    bufp->fullIData(oldp+29,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4]),32);
    bufp->fullIData(oldp+30,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5]),32);
    bufp->fullIData(oldp+31,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6]),32);
    bufp->fullIData(oldp+32,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7]),32);
    bufp->fullIData(oldp+33,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8]),32);
    bufp->fullIData(oldp+34,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9]),32);
    bufp->fullIData(oldp+35,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[10]),32);
    bufp->fullIData(oldp+36,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[11]),32);
    bufp->fullIData(oldp+37,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[12]),32);
    bufp->fullIData(oldp+38,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[13]),32);
    bufp->fullIData(oldp+39,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[14]),32);
    bufp->fullIData(oldp+40,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[15]),32);
    bufp->fullIData(oldp+41,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[16]),32);
    bufp->fullIData(oldp+42,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[17]),32);
    bufp->fullIData(oldp+43,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[18]),32);
    bufp->fullIData(oldp+44,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[19]),32);
    bufp->fullIData(oldp+45,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[20]),32);
    bufp->fullIData(oldp+46,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[21]),32);
    bufp->fullIData(oldp+47,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[22]),32);
    bufp->fullIData(oldp+48,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[23]),32);
    bufp->fullIData(oldp+49,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[24]),32);
    bufp->fullIData(oldp+50,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[25]),32);
    bufp->fullIData(oldp+51,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[26]),32);
    bufp->fullIData(oldp+52,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[27]),32);
    bufp->fullIData(oldp+53,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[28]),32);
    bufp->fullIData(oldp+54,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[29]),32);
    bufp->fullIData(oldp+55,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[30]),32);
    bufp->fullIData(oldp+56,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[31]),32);
    bufp->fullIData(oldp+57,(vlSelf->PipelineCPU__DOT__pc_current),32);
    bufp->fullIData(oldp+58,(((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_current)),32);
    bufp->fullIData(oldp+59,(((0x80U <= vlSelf->PipelineCPU__DOT__pc_current)
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
    bufp->fullIData(oldp+60,(vlSelf->PipelineCPU__DOT__imm),32);
    bufp->fullIData(oldp+61,(vlSelf->PipelineCPU__DOT__alu_result),32);
    bufp->fullIData(oldp+62,(vlSelf->PipelineCPU__DOT__write_data),32);
    bufp->fullIData(oldp+63,(vlSelf->PipelineCPU__DOT__alu_src_b),32);
    bufp->fullBit(oldp+64,((0U == vlSelf->PipelineCPU__DOT__alu_result)));
    bufp->fullIData(oldp+65,((vlSelf->PipelineCPU__DOT__imm 
                              << 1U)),32);
    bufp->fullIData(oldp+66,(vlSelf->PipelineCPU__DOT__alu_result_EX_MEM),32);
    bufp->fullCData(oldp+67,(vlSelf->PipelineCPU__DOT__write_reg_EX_MEM),5);
    bufp->fullBit(oldp+68,(vlSelf->PipelineCPU__DOT__mem_read_EX_MEM));
    bufp->fullBit(oldp+69,(vlSelf->PipelineCPU__DOT__reg_write_EX_MEM));
    bufp->fullIData(oldp+70,(vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t),32);
    bufp->fullBit(oldp+71,(vlSelf->PipelineCPU__DOT__RePC));
    bufp->fullBit(oldp+72,(vlSelf->PipelineCPU__DOT__Flush_HD));
    bufp->fullCData(oldp+73,((0x7fU & vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t)),7);
    bufp->fullCData(oldp+74,((7U & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+75,((1U & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+76,((0x1fU & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+77,((0x1fU & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+78,((0x1fU & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                       >> 7U))),5);
    bufp->fullBit(oldp+79,(vlSelf->PipelineCPU__DOT__reg_write_ID_EX));
    bufp->fullBit(oldp+80,(vlSelf->PipelineCPU__DOT__mem_read_ID_EX));
    bufp->fullCData(oldp+81,(vlSelf->PipelineCPU__DOT__writeReg_ID_EX),5);
    bufp->fullBit(oldp+82,(vlSelf->PipelineCPU__DOT__id_ForwardA));
    bufp->fullBit(oldp+83,(vlSelf->PipelineCPU__DOT__id_ForwardB));
    bufp->fullCData(oldp+84,(vlSelf->PipelineCPU__DOT__ex_ForwardA),2);
    bufp->fullCData(oldp+85,(vlSelf->PipelineCPU__DOT__ex_ForwardB),2);
    bufp->fullIData(oldp+86,(vlSelf->PipelineCPU__DOT__reg_read_data1_ID_EX_mux),32);
    bufp->fullIData(oldp+87,(vlSelf->PipelineCPU__DOT__reg_read_data2_ID_EX_mux),32);
    bufp->fullCData(oldp+88,(vlSelf->PipelineCPU__DOT__write_reg_MEM_WB),5);
    bufp->fullBit(oldp+89,(vlSelf->PipelineCPU__DOT__reg_write_MEM_WB));
    bufp->fullIData(oldp+90,(vlSelf->PipelineCPU__DOT__pc_branch),32);
    bufp->fullBit(oldp+91,(((vlSelf->PipelineCPU__DOT__reg_readData1_mux 
                             == vlSelf->PipelineCPU__DOT__reg_readData2_mux)
                             ? 1U : 0U)));
    bufp->fullBit(oldp+92,((VL_LTS_III(32, vlSelf->PipelineCPU__DOT__reg_readData1_mux, vlSelf->PipelineCPU__DOT__reg_readData2_mux)
                             ? 1U : 0U)));
    bufp->fullBit(oldp+93,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                  >> 7U))));
    bufp->fullBit(oldp+94,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                  >> 2U))));
    bufp->fullBit(oldp+95,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                  >> 1U))));
    bufp->fullBit(oldp+96,((1U & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl))));
    bufp->fullCData(oldp+97,((3U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                    >> 5U))),2);
    bufp->fullCData(oldp+98,((3U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl) 
                                    >> 3U))),2);
    bufp->fullCData(oldp+99,(vlSelf->PipelineCPU__DOT__pc_sel),2);
    bufp->fullBit(oldp+100,(vlSelf->PipelineCPU__DOT__flushCtrl));
    bufp->fullBit(oldp+101,(vlSelf->PipelineCPU__DOT__PCorR1));
    bufp->fullIData(oldp+102,(vlSelf->PipelineCPU__DOT__reg_readData1_mux),32);
    bufp->fullIData(oldp+103,(vlSelf->PipelineCPU__DOT__reg_readData2_mux),32);
    bufp->fullCData(oldp+104,(vlSelf->PipelineCPU__DOT__m_Control__DOT__crtl),8);
    bufp->fullBit(oldp+105,(vlSelf->clk));
    bufp->fullBit(oldp+106,(vlSelf->start));
    bufp->fullIData(oldp+107,(vlSelf->r[0]),32);
    bufp->fullIData(oldp+108,(vlSelf->r[1]),32);
    bufp->fullIData(oldp+109,(vlSelf->r[2]),32);
    bufp->fullIData(oldp+110,(vlSelf->r[3]),32);
    bufp->fullIData(oldp+111,(vlSelf->r[4]),32);
    bufp->fullIData(oldp+112,(vlSelf->r[5]),32);
    bufp->fullIData(oldp+113,(vlSelf->r[6]),32);
    bufp->fullIData(oldp+114,(vlSelf->r[7]),32);
    bufp->fullIData(oldp+115,(vlSelf->r[8]),32);
    bufp->fullIData(oldp+116,(vlSelf->r[9]),32);
    bufp->fullIData(oldp+117,(vlSelf->r[10]),32);
    bufp->fullIData(oldp+118,(vlSelf->r[11]),32);
    bufp->fullIData(oldp+119,(vlSelf->r[12]),32);
    bufp->fullIData(oldp+120,(vlSelf->r[13]),32);
    bufp->fullIData(oldp+121,(vlSelf->r[14]),32);
    bufp->fullIData(oldp+122,(vlSelf->r[15]),32);
    bufp->fullIData(oldp+123,(vlSelf->r[16]),32);
    bufp->fullIData(oldp+124,(vlSelf->r[17]),32);
    bufp->fullIData(oldp+125,(vlSelf->r[18]),32);
    bufp->fullIData(oldp+126,(vlSelf->r[19]),32);
    bufp->fullIData(oldp+127,(vlSelf->r[20]),32);
    bufp->fullIData(oldp+128,(vlSelf->r[21]),32);
    bufp->fullIData(oldp+129,(vlSelf->r[22]),32);
    bufp->fullIData(oldp+130,(vlSelf->r[23]),32);
    bufp->fullIData(oldp+131,(vlSelf->r[24]),32);
    bufp->fullIData(oldp+132,(vlSelf->r[25]),32);
    bufp->fullIData(oldp+133,(vlSelf->r[26]),32);
    bufp->fullIData(oldp+134,(vlSelf->r[27]),32);
    bufp->fullIData(oldp+135,(vlSelf->r[28]),32);
    bufp->fullIData(oldp+136,(vlSelf->r[29]),32);
    bufp->fullIData(oldp+137,(vlSelf->r[30]),32);
    bufp->fullIData(oldp+138,(vlSelf->r[31]),32);
    bufp->fullIData(oldp+139,(((IData)(vlSelf->PipelineCPU__DOT__RePC)
                                ? vlSelf->PipelineCPU__DOT__pc_current
                                : ((0U == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                                    ? ((IData)(4U) 
                                       + vlSelf->PipelineCPU__DOT__pc_current)
                                    : ((1U == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                                        ? vlSelf->PipelineCPU__DOT__pc_branch
                                        : ((2U == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                                            ? vlSelf->PipelineCPU__DOT__pc_branch
                                            : 0U))))),32);
    bufp->fullIData(oldp+140,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
                              [(0x1fU & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+141,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
                              [(0x1fU & (vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__inst_t 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+142,(vlSelf->PipelineCPU__DOT__mem_read_data),32);
    bufp->fullIData(oldp+143,(((IData)(vlSelf->PipelineCPU__DOT__PCorR1)
                                ? vlSelf->PipelineCPU__DOT__reg_readData1_mux
                                : vlSelf->PipelineCPU__DOT__m_IF_ID_Reg__DOT__pc_t)),32);
    bufp->fullIData(oldp+144,(((0U == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                                ? ((IData)(4U) + vlSelf->PipelineCPU__DOT__pc_current)
                                : ((1U == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                                    ? vlSelf->PipelineCPU__DOT__pc_branch
                                    : ((2U == (IData)(vlSelf->PipelineCPU__DOT__pc_sel))
                                        ? vlSelf->PipelineCPU__DOT__pc_branch
                                        : 0U)))),32);
    bufp->fullIData(oldp+145,(4U),32);
    bufp->fullSData(oldp+146,(0x100U),10);
    bufp->fullSData(oldp+147,(0U),10);
    bufp->fullIData(oldp+148,(0x20U),32);
}
