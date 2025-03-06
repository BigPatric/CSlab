module ALU (
    input [3:0] ALUctl,
    input signed [31:0] A,B,
    output reg signed [31:0] ALUOut,
    output zero
);
    // ALU has two operand, it execute different operator based on ALUctl wire
    // output zero is for determining taking branch or not (or you can change the design as you wish)

    // TODO: implement your ALU here
    // Hint: you can use operator to implement
    always @(*) begin
        case(ALUctl)
            // TODO
            4'b0010:ALUOut = A+B;//add
            4'b0110:ALUOut = A-B;//sub
            4'b0000:ALUOut = A&B;//and
            4'b0001:ALUOut = A|B;//or
            4'b0100:ALUOut = A^B;//xor
            4'b0111:ALUOut = (A<B)?1:0;//slt
            4'b1001:ALUOut = ($unsigned(A)<$unsigned(B))?1:0;
            default:ALUOut = 0;
        endcase
    end
    assign zero = (ALUOut == 0)?1'b1:1'b0;
endmodule

