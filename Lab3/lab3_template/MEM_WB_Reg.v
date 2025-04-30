module MEM_WB_Reg (
    input wire clk,
    input wire rst,
    input wire [31:0] alu_result_i,
    input wire [31:0] reg_read_data_i,
    input wire [4:0] write_reg_i,
    input wire [1:0] mem_to_reg_i,

    output reg [31:0] alu_result_o,
    output reg [31:0] reg_read_data_o,
    output reg [4:0] write_reg_o,
    output reg [1:0] mem_to_reg_o

);
    always @(posedge clk or negedge rst) begin
        if (!rst) begin
            alu_result_o <= 32'b0;
            reg_read_data_o <= 32'b0;
            write_reg_o <= 0;
            mem_to_reg_o <= 2'b0;
        end 
        else begin
            alu_result_o <= alu_result_i;
            reg_read_data_o <= reg_read_data_i;
            write_reg_o <= write_reg_i;
            mem_to_reg_o <= mem_to_reg_i;
        end
    end

endmodule
