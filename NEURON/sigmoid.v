`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:Dimitris Christodoulou
// 
// Create Date:    15:17:44 09/19/2018 
// Design Name: 
// Module Name:    sigmoid 
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
module SIGMOID(Clock, Sign, Exponent, Mantissa, SignOut, ExponentOut, MantissaOut);
	input Clock;
	input Sign;
	input [5:0] Exponent;
	input [11:0] Mantissa;
	output reg SignOut;
	output reg[4:0] ExponentOut;
	output reg[5:0] MantissaOut;
	
	always @(posedge Clock )
	begin
		if (Sign == 0 && Exponent == 6'b000000 && Mantissa == 12'b000000000000)
		begin
			SignOut <= 1;
			ExponentOut <= 5'b01110;
			MantissaOut <= 6'b000000;
		end
		else if (Sign == 0)
		begin
			if (Exponent >= 6'b100001)
			begin
				SignOut <= 1;
				ExponentOut <= 5'b00000;
				MantissaOut <= 6'b000000;
			end
			else if (Exponent == 6'b100000)
			begin
				SignOut <= 1;
				ExponentOut <= 5'b01011;
				MantissaOut <= 6'b000000;
			end
			else if ((Exponent == 6'b011111 && ((Mantissa[11:8] == 4'b1111) || Mantissa[11:8] == 4'b0111)))
			begin
				SignOut <= 1;
				ExponentOut <= 5'b01100;
				MantissaOut <= 6'b010000;
			end
			else if ((Exponent == 6'b011110 && Mantissa [11:10] == 2'b11) || (Exponent == 6'b011111))
			begin
				SignOut <= 1;
				ExponentOut <= 5'b01101;
				MantissaOut <= 6'b000001;
			end
			else if (Exponent == 6'b011110)
			begin
				SignOut <= 1;
				ExponentOut <= 5'b01101;
				MantissaOut <= 6'b011000;
			end
			else
			begin
				SignOut <= 1;
				ExponentOut <= 5'b01101;
				MantissaOut <= 6'b110100;
			end
		end
		else
		begin
			if (Exponent >= 6'b100001)
			begin
				SignOut <= 1;
				ExponentOut <= 5'b01111;
				MantissaOut <= 6'b000000;
			end
			else if (Exponent == 6'b100000)
			begin
				SignOut <= 1;
				ExponentOut <= 5'b01110;
				MantissaOut <= 6'b111010;
			end
			else if ((Exponent == 6'b011111 && ((Mantissa[11:8] == 4'b1111) || Mantissa[11:8] == 4'b0111)))
			begin
				SignOut <= 1;
				ExponentOut <= 5'b01110;
				MantissaOut <= 6'b110000;
			end
			else if ((Exponent == 6'b011110 && Mantissa [11:10] == 2'b11) || (Exponent == 6'b011111))
			begin
				SignOut <= 1;
				ExponentOut <= 5'b01110;
				MantissaOut <= 6'b100000;
			end
			else if (Exponent == 6'b011110)
			begin
				SignOut <= 1;
				ExponentOut <= 5'b01110;
				MantissaOut <= 6'b010100;
			end
			else
			begin
				SignOut <= 1;
				ExponentOut <= 5'b01110;
				MantissaOut <= 6'b000110;
			end
		end
	end

endmodule
