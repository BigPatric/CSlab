module ID_EX_Reg (
    input wire clk,
    input wire rst,
    // WB
    input wire regWrite_i,
    input wire [1:0] mem_to_reg_i,
    //M
    input wire mem_read_i,
    input wire mem_write_i,
    //EX
    input wire alu_src_i,
    input wire [1:0]alu_op_i,
    
    input wire [31:0] pc_4_i,
    input wire [31:0] read_data1_i,
    input wire [31:0] read_data2_i,
    input wire [31:0] imm_i,
    input wire [4:0] write_reg_i,

    output reg regWrite_o,
    output reg [1:0] mem_to_reg_o,
    output reg mem_read_o,
    output reg mem_write_o,
    output reg alu_src_o,
    output reg [1:0]alu_op_o,
    output reg [31:0] pc_4_o,
    output reg [31:0] read_data1_o,
    output reg [31:0] read_data2_o,
    output reg [31:0] imm_o,
    output reg [4:0] write_reg_o
);

    always @(posedge clk, negedge rst)begin
        if(!rst)begin
            regWrite_o <= 1'b0;
            mem_to_reg_o <= 2'b0;
            mem_read_o <= 1'b0;
            mem_write_o <= 1'b0;
            alu_src_o <= 1'b0;
            alu_op_o <= 2'b0;
            pc_4_o <= 32'b0;
            read_data1_o <= 32'b0;
            read_data2_o <= 32'b0;
            imm_o <= 32'b0;
            write_reg_o <= 5'b0;
        end
        else begin
            regWrite_o <= regWrite_i;
            mem_to_reg_o <= mem_to_reg_i;
            mem_read_o <= mem_read_i;
            mem_write_o <= mem_write_i;
            alu_src_o <= alu_src_i;
            alu_op_o <= alu_op_i;
            pc_4_o <= pc_4_i;
            read_data1_o <= read_data1_i;
            read_data2_o <= read_data2_i;
            imm_o <= imm_i;
            write_reg_o <= write_reg_i; 
        end
    end
    
endmodule
