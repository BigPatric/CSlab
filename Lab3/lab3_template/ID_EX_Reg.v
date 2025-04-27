module ID_EX_Reg (
    input wire clk,
    input wire rst,
    input wire [31:0] pc_i,
    input wire [31:0] pc_4_i,
    input wire [31:0] reg_read_data1_i,
    input wire [31:0] reg_read_data2_i,
    input wire [31:0] imm_i,
    input wire [3:0] alu_control_i,
    input wire mem_read_i,
    input wire mem_write_i,
    input wire alu_src_i,
    input wire reg_write_i,
    input wire jump_i,
    
    output reg [31:0] pc_o,
    output reg [31:0] pc_4_o,
    output reg [31:0] reg_read_data1_o,
    output reg [31:0] reg_read_data2_o,
    output reg [31:0] imm_o,
    output reg [3:0] alu_control_o,
    output reg mem_read_o,
    output reg mem_write_o,
    output reg alu_src_o,
    output reg reg_write_o,
    output reg jump_o
);
    always @(posedge clk or negedge rst) begin
        if (!rst) begin
            pc_o <= 32'b0;
            pc_4_o <= 32'b0;
            reg_read_data1_o <= 32'b0;
            reg_read_data2_o <= 32'b0;
            imm_o <= 32'b0;
            alu_control_o <= 4'b0;
            mem_read_o <= 1'b0;
            mem_write_o <= 1'b0;
            alu_src_o <= 1'b0;
            reg_write_o <= 1'b0;
            jump_o <= 1'b0;
        end 
        else begin
            pc_o <= pc_i;
            pc_4_o <= pc_4_i;
            reg_read_data1_o <= reg_read_data1_i;
            reg_read_data2_o <= reg_read_data2_i;
            imm_o <= imm_i;
            alu_control_o <= alu_control_i;
            mem_read_o <= mem_read_i;
            mem_write_o <= mem_write_i;
            alu_src_o <= alu_src_i;
            reg_write_o <= reg_write_i;
            jump_o <= jump_i;
        end
    end
endmodule
