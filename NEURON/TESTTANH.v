`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   03:11:05 10/10/2018
// Design Name:   TANH
// Module Name:   C:/Users/dimit/Documents/FPGA/MULTIPLIER/TESTTANH.v
// Project Name:  MULTIPLIER
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: TANH
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TESTTANH;

	// Inputs
	reg Clock;
	reg Sign;
	reg [5:0] Exponent;
	reg [11:0] Mantissa;

	// Outputs
	wire SignOut;
	wire [4:0] ExponentOut;
	wire [5:0] MantissaOut;

	// Instantiate the Unit Under Test (UUT)
	TANH uut (
		.Clock(Clock), 
		.Sign(Sign), 
		.Exponent(Exponent), 
		.Mantissa(Mantissa), 
		.SignOut(SignOut), 
		.ExponentOut(ExponentOut), 
		.MantissaOut(MantissaOut)
	);

	initial begin
		// Initialize Inputs
		Clock = 0;
		Sign = 0;
		Exponent = 0;
		Mantissa = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		Sign = 1;
		Exponent = 6'b011111;
		Mantissa = 12'b000111000001;
	end
      
	always 
		#20 Clock = !Clock;
endmodule

