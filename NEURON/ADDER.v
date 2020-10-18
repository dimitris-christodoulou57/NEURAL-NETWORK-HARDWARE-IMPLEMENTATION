`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Dimitris Christodoulou
// 
// Create Date:    18:03:44 08/14/2018 
// Design Name: 
// Module Name:    ADDER 
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
module ADDER (Clock, SignA, SignB, ExponentA, ExponentB, MantissaA, MantissaB, SignOut, ExponentOut, MantissaOut, Cout);
	input Clock;
	input SignA;
	input SignB;
	input [5 :0] ExponentA;
	input [5 :0] ExponentB;
	input	[11 :0] MantissaA;
	input	[11 :0] MantissaB;
	output reg SignOut;
	output reg[5:0] ExponentOut;
	output [11 :0] MantissaOut;
	output Cout;
	
	reg mode; //0 for add and 1 for sub
	reg [5 :0] diff;
	reg [11 :0] ma;
	reg [11 :0] mb;
	reg [11 :0] aa;
	reg [11 :0] bb;
	
	always @ (posedge Clock)
	begin
		if(ExponentA==ExponentB)
		begin
			diff <= ExponentA - ExponentB;
			ma <= MantissaA;
			mb <= MantissaB;
			ExponentOut <= ExponentA;
		end
		else if (ExponentA > ExponentB) 
		begin 
			diff <= ExponentA - ExponentB;
			mb <= MantissaB >> diff;
			ma <= MantissaA;
			ExponentOut <= ExponentA;
		end
		else if (ExponentB > ExponentA) 
		begin
			diff <= ExponentB - ExponentA;
			ma <= MantissaA >> diff;
			mb <= MantissaB;
			ExponentOut <= ExponentB;
		end
		
		if ((SignA == 1) && (SignB == 1))
		begin 
			SignOut <= 1;
			aa <= ma;
			bb <= mb;
			mode <= 1'b0;
		end
		else if ((SignA == 0) && (SignB == 0))
		begin
			SignOut <= 0;
			aa <= ma;
			bb <= mb;
			mode <= 1'b0;
		end
		else if ((SignA == 0) && (SignB == 1))
		begin 
			if (ma>mb)
			begin
				SignOut <= 0;
				aa <= ma;
				bb <= ~mb;
				mode <= 1'b1;
			end
			else
			begin
				SignOut <= 1;
				aa <= mb;
				bb <= ~ma;
				mode <= 1'b1;
			end
		end
		else if ((SignA == 1) && (SignB == 0))
		begin 
			if (ma>mb)
			begin 
				SignOut <= 1;
				aa <= ma;
				bb <= ~mb;
				mode <= 1'b1;
			end
			else
			begin
				SignOut <= 0;
				aa <= mb;
				bb <= ~ma;
				mode <= 1'b1;
			end
		end

		
	end

	FA	inst100	(aa[0], bb[0], mode, MantissaOut[0], rca1);
	FA	inst101	(aa[1], bb[1], rca1, MantissaOut[1], rca2);
	FA	inst102	(aa[2], bb[2], rca2, MantissaOut[2], rca3);
	FA	inst103	(aa[3], bb[3], rca3, MantissaOut[3], rca4);
	FA	inst104	(aa[4], bb[4], rca4, MantissaOut[4], rca5);
	FA	inst105	(aa[5], bb[5], rca5, MantissaOut[5], rca6);
	FA	inst106	(aa[6], bb[6], rca6, MantissaOut[6], rca7);
	FA	inst107	(aa[7], bb[7], rca7, MantissaOut[7], rca8);
	FA	inst108	(aa[8], bb[8], rca8, MantissaOut[8], rca9);
	FA	inst109	(aa[9], bb[9], rca9, MantissaOut[9], rca10);
	FA	inst110	(aa[10], bb[10], rca10, MantissaOut[10], rca11);
	FA	inst111	(aa[11], bb[11], rca11, MantissaOut[11], Cout);
	
endmodule
