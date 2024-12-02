/* verilator lint_off UNUSED */
module top(
    input signed  [15:0] a, b,
    output signed [31:0] result
);

mul_16_bit mul_16_bit (
    .a(a),
    .b(b),
    .result(result)
);

endmodule
