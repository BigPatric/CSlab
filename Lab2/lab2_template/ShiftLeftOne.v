module ShiftLeftOne (
    input signed [31:0] i,
    output signed [31:0] o
);

    // TODO: implement your shift left 1 here
    reg [31:0] out;
    assign o = out;
    always @(*) begin
        out <= i <<< 1;
    end

endmodule

