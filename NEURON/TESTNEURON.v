`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:29:57 09/27/2018
// Design Name:   NEURON
// Module Name:   C:/Users/dimit/Documents/FPGA/MULTIPLIER/TESTNEURON.v
// Project Name:  MULTIPLIER
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: NEURON
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TESTNEURON;

	// Inputs
	reg Clock;
	reg SignA;
	reg SignB;
	reg SignC;
	reg SignD;
	reg [4:0] ExponentA;
	reg [4:0] ExponentB;
	reg [4:0] ExponentC;
	reg [4:0] ExponentD;
	reg [5:0] MantissaA;
	reg [5:0] MantissaB;
	reg [5:0] MantissaC;
	reg [5:0] MantissaD;

	// Outputs
	wire SignOut;
	wire [4:0] ExponentOut;
	wire [5:0] MantissaOut;
	wire SignOut1;
	wire [4:0] ExponentOut1;
	wire [5:0] MantissaOut1;
	wire SignOut2;
	wire [4:0] ExponentOut2;
	wire [5:0] MantissaOut2;

	// Instantiate the Unit Under Test (UUT)
	NEURON uut (
		.Clock(Clock), 
		.SignA(SignA), 
		.SignB(SignB), 
		.SignC(SignC), 
		.SignD(SignD), 
		.ExponentA(ExponentA), 
		.ExponentB(ExponentB), 
		.ExponentC(ExponentC), 
		.ExponentD(ExponentD), 
		.MantissaA(MantissaA), 
		.MantissaB(MantissaB), 
		.MantissaC(MantissaC), 
		.MantissaD(MantissaD), 
		.SignOut(SignOut), 
		.ExponentOut(ExponentOut), 
		.MantissaOut(MantissaOut), 
		.SignOut1(SignOut1), 
		.ExponentOut1(ExponentOut1), 
		.MantissaOut1(MantissaOut1), 
		.SignOut2(SignOut2), 
		.ExponentOut2(ExponentOut2), 
		.MantissaOut2(MantissaOut2)
	);

	initial begin
		// Initialize Inputs
		Clock = 0;
		SignA = 0;
		SignB = 0;
		SignC = 0;
		SignD = 0;
		ExponentA = 0;
		ExponentB = 0;
		ExponentC = 0;
		ExponentD = 0;
		MantissaA = 0;
		MantissaB = 0;
		MantissaC = 0;
		MantissaD = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		SignA = 1;
		SignB = 0;
		SignC = 1;
		SignD = 1;
		ExponentA = 5'b01100;
		ExponentB = 5'b01100;
		ExponentC = 5'b01100;
		ExponentD = 5'b01100;
		MantissaA = 6'b111000;
		MantissaB = 6'b000111;
		MantissaC = 6'b001000;
		MantissaD = 6'b001110;
	end
	
	always 
		#20 Clock = ! Clock;
	
	initial begin
		$monitor("Exponent A = %d, B = %d, C = %d, D = %d, Mantissa A = %d, B = %d, C = %d, D = %d, ExponentOut = %d, Out1 = %d, Out2 = %d, MantissaOut = %d, Out1 = %d, Out2 = %d \n", ExponentA, ExponentB, ExponentC, ExponentD, MantissaA, MantissaB, MantissaC, MantissaD, ExponentOut, ExponentOut1, ExponentOut2, MantissaOut, MantissaOut1, MantissaOut2);
	end
      
endmodule

