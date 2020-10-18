`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:Dimitris Christodoulou
// 
// Create Date:    17:40:37 09/21/2018 
// Design Name: 
// Module Name:    NEURON 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module NEURON(Clock, SignA, SignB, SignC, SignD, ExponentA, ExponentB, ExponentC, ExponentD, MantissaA, MantissaB, MantissaC, MantissaD, SignOut, ExponentOut, MantissaOut, SignOut1, ExponentOut1, MantissaOut1, SignOut2, ExponentOut2, MantissaOut2);
input Clock;
input SignA;
input SignB;
input SignC;
input SignD;
input [4:0] ExponentA;
input [4:0] ExponentB;
input [4:0] ExponentC;
input [4:0] ExponentD;
input [5:0] MantissaA;
input [5:0] MantissaB;
input [5:0] MantissaC;
input [5:0] MantissaD;
output SignOut, SignOut1, SignOut2;
output [4:0] ExponentOut, ExponentOut1, ExponentOut2;
output [5:0] MantissaOut, MantissaOut1, MantissaOut2;

wire Sign1, Sign2, SignADD, ExponentC3, ExponentC1, ExponentC2;
wire [5:0] Exponent1, Exponent2, ExponentADD;
wire [11:0] Mantissa1, Mantissa2, MantissaADD;

MYLTIPLY6BIT inst1 (SignA, SignB, ExponentA, ExponentB, MantissaA, MantissaB, Sign1, Exponent1, ExponentC1, Mantissa1);

MYLTIPLY6BIT inst2 (SignC, SignD, ExponentC, ExponentD, MantissaC, MantissaD, Sign2, Exponent2, ExponentC2, Mantissa2);

ADDER inst3 (Clock, Sign1, Sign2, Exponent1, Exponent2, Mantissa1, Mantissa2, SignADD, ExponentADD, MantissaADD, ExponentC3);

TANH inst4 (Clock, SignADD, ExponentADD, MantissaADD, SignOut, ExponentOut, MantissaOut);

SIGMOID inst5 (Clock, SignADD, ExponentADD, MantissaADD, SignOut1, ExponentOut1, MantissaOut1);

RELU inst6 (Clock, SignADD, ExponentADD, MantissaADD, SignOut2, ExponentOut2, MantissaOut2);

endmodule
