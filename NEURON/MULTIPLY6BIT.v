`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:Dimitris Christodoulou
// 
// Create Date:    17:55:39 08/14/2018 
// Design Name: 
// Module Name:    MULTIPLY6BIT 
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
module HA (I1, I2, sum, carry);
input I1, I2;
output sum, carry;
xor (sum, I1, I2);
and (carry, I1, I2);
endmodule

module FA (I1, I2, I3, sum, carry);
input I1, I2, I3;
output sum, carry;
xor (xout, I1, I2);
xor (sum, xout, I3);
and (o1, I1, I2);
and (o2, xout, I3);
or (carry, o1, o2);
endmodule

module MYLTIPLY6BIT (SignA, SignB, ExponentA, ExponentB, MantissaA, MantissaB, SignOut, ExponentOut, ExponentC, MantissaOut);
input SignA;
input SignB;
input [4:0] ExponentA;
input [4:0] ExponentB;
input	[5 :0] MantissaA;
input	[5 :0] MantissaB;
output SignOut;
output [5:0] ExponentOut;
output ExponentC;
output [11 :0] MantissaOut;

assign SignOut = SignA ~^ SignB;

FA	inst1	(ExponentA[0], ExponentB[0], 1'b0, ExponentOut[0], rca1);
FA	inst2	(ExponentA[1], ExponentB[1], rca1, ExponentOut[1], rca2);
FA	inst3 (ExponentA[2], ExponentB[2], rca2, ExponentOut[2], rca3);
FA	inst4	(ExponentA[3], ExponentB[3], rca3, ExponentOut[3], rca4);
FA	inst5	(ExponentA[4], ExponentB[4], rca4, ExponentOut[4], ExponentC);

assign ExponentOut[5]=ExponentC;

wire	[35 :1]	pp;
wire	[4 :0]	r1c;
wire	[4 :1]	r1s;
wire	[4 :0]	r2c;
wire	[4 :1]	r2s;
wire	[4 :0]	r3c;
wire	[4 :1]	r3s;
wire	[4 :0]	r4c;
wire	[4 :1]	r4s;
wire	[4 :0]	r5c;
wire	[4 :1]	r5s;
wire	[3 :0]	r6c;

and	(MantissaOut[0], MantissaA[0], MantissaB[0]);
and	(pp[1], MantissaA[0], MantissaB[1]);
and	(pp[2], MantissaA[0], MantissaB[2]);
and	(pp[3], MantissaA[0], MantissaB[3]);
and	(pp[4], MantissaA[0], MantissaB[4]);
and	(pp[5], MantissaA[0], MantissaB[5]);
and	(pp[6], MantissaA[1], MantissaB[0]);
and	(pp[7], MantissaA[1], MantissaB[1]);
and	(pp[8], MantissaA[1], MantissaB[2]);
and	(pp[9], MantissaA[1], MantissaB[3]);
and	(pp[10], MantissaA[1], MantissaB[4]);
and	(pp[11], MantissaA[1], MantissaB[5]);
and	(pp[12], MantissaA[2], MantissaB[0]);
and	(pp[13], MantissaA[2], MantissaB[1]);
and	(pp[14], MantissaA[2], MantissaB[2]);
and	(pp[15], MantissaA[2], MantissaB[3]);
and	(pp[16], MantissaA[2], MantissaB[4]);
and	(pp[17], MantissaA[2], MantissaB[5]);
and	(pp[18], MantissaA[3], MantissaB[0]);
and	(pp[19], MantissaA[3], MantissaB[1]);
and	(pp[20], MantissaA[3], MantissaB[2]);
and	(pp[21], MantissaA[3], MantissaB[3]);
and	(pp[22], MantissaA[3], MantissaB[4]);
and	(pp[23], MantissaA[3], MantissaB[5]);
and	(pp[24], MantissaA[4], MantissaB[0]);
and	(pp[25], MantissaA[4], MantissaB[1]);
and	(pp[26], MantissaA[4], MantissaB[2]);
and	(pp[27], MantissaA[4], MantissaB[3]);
and	(pp[28], MantissaA[4], MantissaB[4]);
and	(pp[29], MantissaA[4], MantissaB[5]);
and	(pp[30], MantissaA[5], MantissaB[0]);
and	(pp[31], MantissaA[5], MantissaB[1]);
and	(pp[32], MantissaA[5], MantissaB[2]);
and	(pp[33], MantissaA[5], MantissaB[3]);
and	(pp[34], MantissaA[5], MantissaB[4]);
and	(pp[35], MantissaA[5], MantissaB[5]);

HA	inst37	(pp[6], pp[1], MantissaOut[1], r1c[0]);
FA	inst38	(pp[7], pp[2], r1c[0], r1s[1], r1c[1]);
FA	inst39	(pp[8], pp[3], r1c[1], r1s[2], r1c[2]);
FA	inst40	(pp[9], pp[4], r1c[2], r1s[3], r1c[3]);
FA	inst41	(pp[10], pp[5], r1c[3], r1s[4], r1c[4]);

HA	inst42	(r1s[1], pp[12], MantissaOut[2], r2c[0]);
FA	inst43	(r1s[2], pp[13], r2c[0], r2s[1], r2c[1]);
FA	inst44	(r1s[3], pp[14], r2c[1], r2s[2], r2c[2]);
FA	inst45	(r1s[4], pp[15], r2c[2], r2s[3], r2c[3]);
FA	inst46	(r1c[4], pp[11], r2c[3], r2s[4], r2c[4]);

HA	inst47	(r2s[1], pp[18], MantissaOut[3], r3c[0]);
FA	inst48	(r2s[2], pp[19], r3c[0], r3s[1], r3c[1]);
FA	inst49	(r2s[3], pp[20], r3c[1], r3s[2], r3c[2]);
FA	inst50	(r2s[4], pp[16], r3c[2], r3s[3], r3c[3]);
FA	inst51	(r2c[4], pp[17], r3c[3], r3s[4], r3c[4]);

HA	inst52	(r3s[1], pp[24], MantissaOut[4], r4c[0]);
FA	inst53	(r3s[2], pp[25], r4c[0], r4s[1], r4c[1]);
FA	inst54	(r3s[3], pp[21], r4c[1], r4s[2], r4c[2]);
FA	inst55	(r3s[4], pp[22], r4c[2], r4s[3], r4c[3]);
FA	inst56	(r3c[4], pp[23], r4c[3], r4s[4], r4c[4]);

HA	inst57	(r4s[1], pp[30], MantissaOut[5], r5c[0]);
FA	inst58	(r4s[2], pp[26], r5c[0], r5s[1], r5c[1]);
FA	inst59	(r4s[3], pp[27], r5c[1], r5s[2], r5c[2]);
FA	inst60	(r4s[4], pp[28], r5c[2], r5s[3], r5c[3]);
FA	inst61	(r4c[4], pp[29], r5c[3], r5s[4], r5c[4]);

HA	inst62	(r5s[1], pp[31], MantissaOut[6], r6c[0]);
FA	inst63	(r5s[2], pp[32], r6c[0], MantissaOut[7], r6c[1]);
FA	inst64	(r5s[3], pp[33], r6c[1], MantissaOut[8], r6c[2]);
FA	inst65	(r5s[4], pp[34], r6c[2], MantissaOut[9], r6c[3]);
FA	inst66	(r5c[4], pp[35], r6c[3], MantissaOut[10], MantissaOut[11]);
endmodule