////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.20131013
//  \   \         Application: netgen
//  /   /         Filename: MYLTIPLY6BIT_synthesis.v
// /___/   /\     Timestamp: Fri Sep 21 17:29:34 2018
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/synthesis -ofmt verilog -sim MYLTIPLY6BIT.ngc MYLTIPLY6BIT_synthesis.v 
// Device	: xc3s200-4-ft256
// Input file	: MYLTIPLY6BIT.ngc
// Output file	: C:\Users\dimit\Documents\FPGA\MULTIPLIER\netgen\synthesis\MYLTIPLY6BIT_synthesis.v
// # of Modules	: 1
// Design Name	: MYLTIPLY6BIT
// Xilinx        : C:\Xilinx\14.7\ISE_DS\ISE\
//             
// Purpose:    
//     This verilog netlist is a verification model and uses simulation 
//     primitives which may not represent the true implementation of the 
//     device, however the netlist is functionally correct and should not 
//     be modified. This file cannot be synthesized and should only be used 
//     with supported simulation tools.
//             
// Reference:  
//     Command Line Tools User Guide, Chapter 23 and Synthesis and Simulation Design Guide, Chapter 6
//             
////////////////////////////////////////////////////////////////////////////////

`timescale 1 ns/1 ps

module MYLTIPLY6BIT (
  ExC, SignA, SignB, SignOut, ExOut, m, a, b, ExA, ExB
);
  output ExC;
  input SignA;
  input SignB;
  output SignOut;
  output [5 : 0] ExOut;
  output [11 : 0] m;
  input [5 : 0] a;
  input [5 : 0] b;
  input [4 : 0] ExA;
  input [4 : 0] ExB;
  wire ExA_0_IBUF_5;
  wire ExA_1_IBUF_6;
  wire ExA_2_IBUF_7;
  wire ExA_3_IBUF_8;
  wire ExA_4_IBUF_9;
  wire ExB_0_IBUF_15;
  wire ExB_1_IBUF_16;
  wire ExB_2_IBUF_17;
  wire ExB_3_IBUF_18;
  wire ExB_4_IBUF_19;
  wire ExOut_0_OBUF_27;
  wire ExOut_1_OBUF_28;
  wire ExOut_2_OBUF_29;
  wire ExOut_3_OBUF_30;
  wire ExOut_4_OBUF_31;
  wire ExOut_5_OBUF_32;
  wire SignA_IBUF_34;
  wire SignB_IBUF_36;
  wire SignOut_OBUF_38;
  wire a_0_IBUF_45;
  wire a_1_IBUF_46;
  wire a_2_IBUF_47;
  wire a_3_IBUF_48;
  wire a_4_IBUF_49;
  wire a_5_IBUF_50;
  wire b_0_IBUF_57;
  wire b_1_IBUF_58;
  wire b_2_IBUF_59;
  wire b_3_IBUF_60;
  wire b_4_IBUF_61;
  wire b_5_IBUF_62;
  wire m_0_OBUF_75;
  wire m_10_OBUF_76;
  wire m_11_OBUF_77;
  wire m_1_OBUF_78;
  wire m_2_OBUF_79;
  wire m_3_OBUF_80;
  wire m_4_OBUF_81;
  wire m_5_OBUF_82;
  wire m_6_OBUF_83;
  wire m_7_OBUF_84;
  wire m_8_OBUF_85;
  wire m_9_OBUF_86;
  wire \pp[12] ;
  wire \pp[13] ;
  wire \pp[18] ;
  wire \pp[19] ;
  wire \pp[24] ;
  wire \pp[25] ;
  wire \pp[26] ;
  wire \pp[2] ;
  wire \pp[30] ;
  wire \pp[31] ;
  wire \pp[5] ;
  wire \pp[7] ;
  wire \pp[8] ;
  wire \pp[9] ;
  wire rca2;
  wire rca3;
  wire rca4;
  wire [4 : 0] r1c;
  wire [4 : 2] r1s;
  wire [4 : 0] r2c;
  wire [4 : 2] r2s;
  wire [4 : 0] r3c;
  wire [4 : 2] r3s;
  wire [4 : 0] r4c;
  wire [4 : 2] r4s;
  wire [4 : 0] r5c;
  wire [4 : 2] r5s;
  wire [3 : 0] r6c;
  LUT2 #(
    .INIT ( 4'h8 ))
  m_0_and00001 (
    .I0(a_0_IBUF_45),
    .I1(b_0_IBUF_57),
    .O(m_0_OBUF_75)
  );
  LUT2 #(
    .INIT ( 4'h6 ))
  \inst1/Mxor_xout_Result1  (
    .I0(ExB_0_IBUF_15),
    .I1(ExA_0_IBUF_5),
    .O(ExOut_0_OBUF_27)
  );
  LUT2 #(
    .INIT ( 4'h9 ))
  SignOut1 (
    .I0(SignB_IBUF_36),
    .I1(SignA_IBUF_34),
    .O(SignOut_OBUF_38)
  );
  LUT4 #(
    .INIT ( 16'h7888 ))
  \inst37/Mxor_sum_Result1  (
    .I0(a_1_IBUF_46),
    .I1(b_0_IBUF_57),
    .I2(b_1_IBUF_58),
    .I3(a_0_IBUF_45),
    .O(m_1_OBUF_78)
  );
  LUT4 #(
    .INIT ( 16'h8778 ))
  \inst2/Mxor_sum_Result1  (
    .I0(ExA_0_IBUF_5),
    .I1(ExB_0_IBUF_15),
    .I2(ExB_1_IBUF_16),
    .I3(ExA_1_IBUF_6),
    .O(ExOut_1_OBUF_28)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \inst3/Mxor_sum_Result1  (
    .I0(ExA_2_IBUF_7),
    .I1(ExB_2_IBUF_17),
    .I2(rca2),
    .O(ExOut_2_OBUF_29)
  );
  LUT4 #(
    .INIT ( 16'h6996 ))
  \inst42/Mxor_sum_Result1  (
    .I0(\pp[7] ),
    .I1(r1c[0]),
    .I2(\pp[12] ),
    .I3(\pp[2] ),
    .O(m_2_OBUF_79)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \inst4/Mxor_sum_Result1  (
    .I0(ExA_3_IBUF_8),
    .I1(ExB_3_IBUF_18),
    .I2(rca3),
    .O(ExOut_3_OBUF_30)
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \inst5/carry1  (
    .I0(ExB_4_IBUF_19),
    .I1(rca4),
    .I2(ExA_4_IBUF_9),
    .O(ExOut_5_OBUF_32)
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \inst4/carry1  (
    .I0(ExB_3_IBUF_18),
    .I1(rca3),
    .I2(ExA_3_IBUF_8),
    .O(rca4)
  );
  LUT3 #(
    .INIT ( 8'hE8 ))
  \inst3/carry1  (
    .I0(ExB_2_IBUF_17),
    .I1(rca2),
    .I2(ExA_2_IBUF_7),
    .O(rca3)
  );
  LUT3 #(
    .INIT ( 8'h96 ))
  \inst5/Mxor_sum_Result1  (
    .I0(ExA_4_IBUF_9),
    .I1(ExB_4_IBUF_19),
    .I2(rca4),
    .O(ExOut_4_OBUF_31)
  );
  LUT4 #(
    .INIT ( 16'hEA80 ))
  \inst2/carry1  (
    .I0(ExA_1_IBUF_6),
    .I1(ExB_0_IBUF_15),
    .I2(ExA_0_IBUF_5),
    .I3(ExB_1_IBUF_16),
    .O(rca2)
  );
  LUT4 #(
    .INIT ( 16'h6996 ))
  \inst47/Mxor_sum_Result1  (
    .I0(r1s[2]),
    .I1(r2c[0]),
    .I2(\pp[13] ),
    .I3(\pp[18] ),
    .O(m_3_OBUF_80)
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  pp_31_and00001 (
    .I0(a_5_IBUF_50),
    .I1(b_1_IBUF_58),
    .O(\pp[31] )
  );
  LUT4 #(
    .INIT ( 16'h6996 ))
  \inst52/Mxor_sum_Result1  (
    .I0(r2s[2]),
    .I1(r3c[0]),
    .I2(\pp[19] ),
    .I3(\pp[24] ),
    .O(m_4_OBUF_81)
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  pp_26_and00001 (
    .I0(a_4_IBUF_49),
    .I1(b_2_IBUF_59),
    .O(\pp[26] )
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  pp_30_and00001 (
    .I0(a_5_IBUF_50),
    .I1(b_0_IBUF_57),
    .O(\pp[30] )
  );
  LUT4 #(
    .INIT ( 16'h6996 ))
  \inst57/Mxor_sum_Result1  (
    .I0(r3s[2]),
    .I1(r4c[0]),
    .I2(\pp[25] ),
    .I3(\pp[30] ),
    .O(m_5_OBUF_82)
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  pp_25_and00001 (
    .I0(a_4_IBUF_49),
    .I1(b_1_IBUF_58),
    .O(\pp[25] )
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  pp_24_and00001 (
    .I0(a_4_IBUF_49),
    .I1(b_0_IBUF_57),
    .O(\pp[24] )
  );
  LUT4 #(
    .INIT ( 16'h6996 ))
  \inst62/Mxor_sum_Result1  (
    .I0(r4s[2]),
    .I1(r5c[0]),
    .I2(\pp[26] ),
    .I3(\pp[31] ),
    .O(m_6_OBUF_83)
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  pp_19_and00001 (
    .I0(a_3_IBUF_48),
    .I1(b_1_IBUF_58),
    .O(\pp[19] )
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  pp_5_and00001 (
    .I0(a_0_IBUF_45),
    .I1(b_5_IBUF_62),
    .O(\pp[5] )
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  pp_18_and00001 (
    .I0(a_3_IBUF_48),
    .I1(b_0_IBUF_57),
    .O(\pp[18] )
  );
  LUT4 #(
    .INIT ( 16'h8778 ))
  \inst63/Mxor_sum_Result1  (
    .I0(a_5_IBUF_50),
    .I1(b_2_IBUF_59),
    .I2(r6c[0]),
    .I3(r5s[2]),
    .O(m_7_OBUF_84)
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  pp_9_and00001 (
    .I0(a_1_IBUF_46),
    .I1(b_3_IBUF_60),
    .O(\pp[9] )
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  pp_13_and00001 (
    .I0(a_2_IBUF_47),
    .I1(b_1_IBUF_58),
    .O(\pp[13] )
  );
  LUT4 #(
    .INIT ( 16'h8778 ))
  \inst64/Mxor_sum_Result1  (
    .I0(a_5_IBUF_50),
    .I1(b_3_IBUF_60),
    .I2(r6c[1]),
    .I3(r5s[3]),
    .O(m_8_OBUF_85)
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  pp_8_and00001 (
    .I0(a_1_IBUF_46),
    .I1(b_2_IBUF_59),
    .O(\pp[8] )
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  pp_12_and00001 (
    .I0(a_2_IBUF_47),
    .I1(b_0_IBUF_57),
    .O(\pp[12] )
  );
  LUT4 #(
    .INIT ( 16'hEA80 ))
  \inst61/carry1  (
    .I0(r4c[4]),
    .I1(b_5_IBUF_62),
    .I2(a_4_IBUF_49),
    .I3(r5c[3]),
    .O(r5c[4])
  );
  LUT4 #(
    .INIT ( 16'hEA80 ))
  \inst56/carry1  (
    .I0(r3c[4]),
    .I1(b_5_IBUF_62),
    .I2(a_3_IBUF_48),
    .I3(r4c[3]),
    .O(r4c[4])
  );
  LUT4 #(
    .INIT ( 16'hEA80 ))
  \inst51/carry1  (
    .I0(r2c[4]),
    .I1(b_5_IBUF_62),
    .I2(a_2_IBUF_47),
    .I3(r3c[3]),
    .O(r3c[4])
  );
  LUT4 #(
    .INIT ( 16'hEA80 ))
  \inst46/carry1  (
    .I0(r1c[4]),
    .I1(b_5_IBUF_62),
    .I2(a_1_IBUF_46),
    .I3(r2c[3]),
    .O(r2c[4])
  );
  LUT4 #(
    .INIT ( 16'hEA80 ))
  \inst41/carry1  (
    .I0(\pp[5] ),
    .I1(b_4_IBUF_61),
    .I2(a_1_IBUF_46),
    .I3(r1c[3]),
    .O(r1c[4])
  );
  LUT4 #(
    .INIT ( 16'h8228 ))
  \inst62/carry1  (
    .I0(\pp[31] ),
    .I1(r4s[2]),
    .I2(r5c[0]),
    .I3(\pp[26] ),
    .O(r6c[0])
  );
  LUT4 #(
    .INIT ( 16'h8228 ))
  \inst57/carry1  (
    .I0(\pp[30] ),
    .I1(r3s[2]),
    .I2(r4c[0]),
    .I3(\pp[25] ),
    .O(r5c[0])
  );
  LUT4 #(
    .INIT ( 16'h8228 ))
  \inst52/carry1  (
    .I0(\pp[24] ),
    .I1(r2s[2]),
    .I2(r3c[0]),
    .I3(\pp[19] ),
    .O(r4c[0])
  );
  LUT4 #(
    .INIT ( 16'h8228 ))
  \inst47/carry1  (
    .I0(\pp[18] ),
    .I1(r1s[2]),
    .I2(r2c[0]),
    .I3(\pp[13] ),
    .O(r3c[0])
  );
  LUT4 #(
    .INIT ( 16'h8228 ))
  \inst42/carry1  (
    .I0(\pp[12] ),
    .I1(\pp[7] ),
    .I2(r1c[0]),
    .I3(\pp[2] ),
    .O(r2c[0])
  );
  LUT4 #(
    .INIT ( 16'h8778 ))
  \inst65/Mxor_sum_Result1  (
    .I0(a_5_IBUF_50),
    .I1(b_4_IBUF_61),
    .I2(r5s[4]),
    .I3(r6c[2]),
    .O(m_9_OBUF_86)
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  pp_7_and00001 (
    .I0(a_1_IBUF_46),
    .I1(b_1_IBUF_58),
    .O(\pp[7] )
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  pp_2_and00001 (
    .I0(a_0_IBUF_45),
    .I1(b_2_IBUF_59),
    .O(\pp[2] )
  );
  LUT4 #(
    .INIT ( 16'h8000 ))
  \inst37/carry1  (
    .I0(a_0_IBUF_45),
    .I1(b_1_IBUF_58),
    .I2(a_1_IBUF_46),
    .I3(b_0_IBUF_57),
    .O(r1c[0])
  );
  LUT4 #(
    .INIT ( 16'hEA80 ))
  \inst66/carry1  (
    .I0(r5c[4]),
    .I1(a_5_IBUF_50),
    .I2(b_5_IBUF_62),
    .I3(r6c[3]),
    .O(m_11_OBUF_77)
  );
  LUT4 #(
    .INIT ( 16'hEA80 ))
  \inst65/carry1  (
    .I0(r5s[4]),
    .I1(a_5_IBUF_50),
    .I2(b_4_IBUF_61),
    .I3(r6c[2]),
    .O(r6c[3])
  );
  LUT4 #(
    .INIT ( 16'hEA80 ))
  \inst64/carry1  (
    .I0(r5s[3]),
    .I1(a_5_IBUF_50),
    .I2(b_3_IBUF_60),
    .I3(r6c[1]),
    .O(r6c[2])
  );
  LUT4 #(
    .INIT ( 16'hEA80 ))
  \inst63/carry1  (
    .I0(r5s[2]),
    .I1(a_5_IBUF_50),
    .I2(b_2_IBUF_59),
    .I3(r6c[0]),
    .O(r6c[1])
  );
  LUT4 #(
    .INIT ( 16'hEA80 ))
  \inst60/carry1  (
    .I0(r4s[4]),
    .I1(a_4_IBUF_49),
    .I2(b_4_IBUF_61),
    .I3(r5c[2]),
    .O(r5c[3])
  );
  LUT4 #(
    .INIT ( 16'hEA80 ))
  \inst59/carry1  (
    .I0(r4s[3]),
    .I1(a_4_IBUF_49),
    .I2(b_3_IBUF_60),
    .I3(r5c[1]),
    .O(r5c[2])
  );
  LUT4 #(
    .INIT ( 16'hEA80 ))
  \inst55/carry1  (
    .I0(r3s[4]),
    .I1(a_3_IBUF_48),
    .I2(b_4_IBUF_61),
    .I3(r4c[2]),
    .O(r4c[3])
  );
  LUT4 #(
    .INIT ( 16'hEA80 ))
  \inst54/carry1  (
    .I0(r3s[3]),
    .I1(a_3_IBUF_48),
    .I2(b_3_IBUF_60),
    .I3(r4c[1]),
    .O(r4c[2])
  );
  LUT4 #(
    .INIT ( 16'hEA80 ))
  \inst50/carry1  (
    .I0(r2s[4]),
    .I1(a_2_IBUF_47),
    .I2(b_4_IBUF_61),
    .I3(r3c[2]),
    .O(r3c[3])
  );
  LUT4 #(
    .INIT ( 16'hEA80 ))
  \inst49/carry1  (
    .I0(r2s[3]),
    .I1(a_3_IBUF_48),
    .I2(b_2_IBUF_59),
    .I3(r3c[1]),
    .O(r3c[2])
  );
  LUT4 #(
    .INIT ( 16'hEA80 ))
  \inst45/carry1  (
    .I0(r1s[4]),
    .I1(a_2_IBUF_47),
    .I2(b_3_IBUF_60),
    .I3(r2c[2]),
    .O(r2c[3])
  );
  LUT4 #(
    .INIT ( 16'hEA80 ))
  \inst44/carry1  (
    .I0(r1s[3]),
    .I1(a_2_IBUF_47),
    .I2(b_2_IBUF_59),
    .I3(r2c[1]),
    .O(r2c[2])
  );
  LUT4 #(
    .INIT ( 16'hEA80 ))
  \inst40/carry1  (
    .I0(\pp[9] ),
    .I1(a_0_IBUF_45),
    .I2(b_4_IBUF_61),
    .I3(r1c[2]),
    .O(r1c[3])
  );
  LUT4 #(
    .INIT ( 16'hEA80 ))
  \inst39/carry1  (
    .I0(\pp[8] ),
    .I1(a_0_IBUF_45),
    .I2(b_3_IBUF_60),
    .I3(r1c[1]),
    .O(r1c[2])
  );
  LUT4 #(
    .INIT ( 16'h8778 ))
  \inst66/Mxor_sum_Result1  (
    .I0(a_5_IBUF_50),
    .I1(b_5_IBUF_62),
    .I2(r5c[4]),
    .I3(r6c[3]),
    .O(m_10_OBUF_76)
  );
  LUT4 #(
    .INIT ( 16'h8778 ))
  \inst61/Mxor_sum_Result1  (
    .I0(a_4_IBUF_49),
    .I1(b_5_IBUF_62),
    .I2(r4c[4]),
    .I3(r5c[3]),
    .O(r5s[4])
  );
  LUT4 #(
    .INIT ( 16'h8778 ))
  \inst60/Mxor_sum_Result1  (
    .I0(a_4_IBUF_49),
    .I1(b_4_IBUF_61),
    .I2(r4s[4]),
    .I3(r5c[2]),
    .O(r5s[3])
  );
  LUT4 #(
    .INIT ( 16'h8778 ))
  \inst59/Mxor_sum_Result1  (
    .I0(a_4_IBUF_49),
    .I1(b_3_IBUF_60),
    .I2(r4s[3]),
    .I3(r5c[1]),
    .O(r5s[2])
  );
  LUT4 #(
    .INIT ( 16'h8778 ))
  \inst56/Mxor_sum_Result1  (
    .I0(a_3_IBUF_48),
    .I1(b_5_IBUF_62),
    .I2(r3c[4]),
    .I3(r4c[3]),
    .O(r4s[4])
  );
  LUT4 #(
    .INIT ( 16'h8778 ))
  \inst55/Mxor_sum_Result1  (
    .I0(a_3_IBUF_48),
    .I1(b_4_IBUF_61),
    .I2(r3s[4]),
    .I3(r4c[2]),
    .O(r4s[3])
  );
  LUT4 #(
    .INIT ( 16'h8778 ))
  \inst54/Mxor_sum_Result1  (
    .I0(a_3_IBUF_48),
    .I1(b_3_IBUF_60),
    .I2(r3s[3]),
    .I3(r4c[1]),
    .O(r4s[2])
  );
  LUT4 #(
    .INIT ( 16'h8778 ))
  \inst51/Mxor_sum_Result1  (
    .I0(a_2_IBUF_47),
    .I1(b_5_IBUF_62),
    .I2(r2c[4]),
    .I3(r3c[3]),
    .O(r3s[4])
  );
  LUT4 #(
    .INIT ( 16'h8778 ))
  \inst50/Mxor_sum_Result1  (
    .I0(a_2_IBUF_47),
    .I1(b_4_IBUF_61),
    .I2(r2s[4]),
    .I3(r3c[2]),
    .O(r3s[3])
  );
  LUT4 #(
    .INIT ( 16'h8778 ))
  \inst49/Mxor_sum_Result1  (
    .I0(a_3_IBUF_48),
    .I1(b_2_IBUF_59),
    .I2(r2s[3]),
    .I3(r3c[1]),
    .O(r3s[2])
  );
  LUT4 #(
    .INIT ( 16'h8778 ))
  \inst46/Mxor_sum_Result1  (
    .I0(a_1_IBUF_46),
    .I1(b_5_IBUF_62),
    .I2(r1c[4]),
    .I3(r2c[3]),
    .O(r2s[4])
  );
  LUT4 #(
    .INIT ( 16'h8778 ))
  \inst45/Mxor_sum_Result1  (
    .I0(a_2_IBUF_47),
    .I1(b_3_IBUF_60),
    .I2(r1s[4]),
    .I3(r2c[2]),
    .O(r2s[3])
  );
  LUT4 #(
    .INIT ( 16'h8778 ))
  \inst44/Mxor_sum_Result1  (
    .I0(a_2_IBUF_47),
    .I1(b_2_IBUF_59),
    .I2(r1s[3]),
    .I3(r2c[1]),
    .O(r2s[2])
  );
  LUT4 #(
    .INIT ( 16'h8778 ))
  \inst41/Mxor_sum_Result1  (
    .I0(a_1_IBUF_46),
    .I1(b_4_IBUF_61),
    .I2(\pp[5] ),
    .I3(r1c[3]),
    .O(r1s[4])
  );
  LUT4 #(
    .INIT ( 16'h8778 ))
  \inst40/Mxor_sum_Result1  (
    .I0(a_0_IBUF_45),
    .I1(b_4_IBUF_61),
    .I2(\pp[9] ),
    .I3(r1c[2]),
    .O(r1s[3])
  );
  LUT4 #(
    .INIT ( 16'h8778 ))
  \inst39/Mxor_sum_Result1  (
    .I0(a_0_IBUF_45),
    .I1(b_3_IBUF_60),
    .I2(\pp[8] ),
    .I3(r1c[1]),
    .O(r1s[2])
  );
  IBUF   SignA_IBUF (
    .I(SignA),
    .O(SignA_IBUF_34)
  );
  IBUF   SignB_IBUF (
    .I(SignB),
    .O(SignB_IBUF_36)
  );
  IBUF   a_5_IBUF (
    .I(a[5]),
    .O(a_5_IBUF_50)
  );
  IBUF   a_4_IBUF (
    .I(a[4]),
    .O(a_4_IBUF_49)
  );
  IBUF   a_3_IBUF (
    .I(a[3]),
    .O(a_3_IBUF_48)
  );
  IBUF   a_2_IBUF (
    .I(a[2]),
    .O(a_2_IBUF_47)
  );
  IBUF   a_1_IBUF (
    .I(a[1]),
    .O(a_1_IBUF_46)
  );
  IBUF   a_0_IBUF (
    .I(a[0]),
    .O(a_0_IBUF_45)
  );
  IBUF   b_5_IBUF (
    .I(b[5]),
    .O(b_5_IBUF_62)
  );
  IBUF   b_4_IBUF (
    .I(b[4]),
    .O(b_4_IBUF_61)
  );
  IBUF   b_3_IBUF (
    .I(b[3]),
    .O(b_3_IBUF_60)
  );
  IBUF   b_2_IBUF (
    .I(b[2]),
    .O(b_2_IBUF_59)
  );
  IBUF   b_1_IBUF (
    .I(b[1]),
    .O(b_1_IBUF_58)
  );
  IBUF   b_0_IBUF (
    .I(b[0]),
    .O(b_0_IBUF_57)
  );
  IBUF   ExA_4_IBUF (
    .I(ExA[4]),
    .O(ExA_4_IBUF_9)
  );
  IBUF   ExA_3_IBUF (
    .I(ExA[3]),
    .O(ExA_3_IBUF_8)
  );
  IBUF   ExA_2_IBUF (
    .I(ExA[2]),
    .O(ExA_2_IBUF_7)
  );
  IBUF   ExA_1_IBUF (
    .I(ExA[1]),
    .O(ExA_1_IBUF_6)
  );
  IBUF   ExA_0_IBUF (
    .I(ExA[0]),
    .O(ExA_0_IBUF_5)
  );
  IBUF   ExB_4_IBUF (
    .I(ExB[4]),
    .O(ExB_4_IBUF_19)
  );
  IBUF   ExB_3_IBUF (
    .I(ExB[3]),
    .O(ExB_3_IBUF_18)
  );
  IBUF   ExB_2_IBUF (
    .I(ExB[2]),
    .O(ExB_2_IBUF_17)
  );
  IBUF   ExB_1_IBUF (
    .I(ExB[1]),
    .O(ExB_1_IBUF_16)
  );
  IBUF   ExB_0_IBUF (
    .I(ExB[0]),
    .O(ExB_0_IBUF_15)
  );
  OBUF   ExC_OBUF (
    .I(ExOut_5_OBUF_32),
    .O(ExC)
  );
  OBUF   SignOut_OBUF (
    .I(SignOut_OBUF_38),
    .O(SignOut)
  );
  OBUF   ExOut_5_OBUF (
    .I(ExOut_5_OBUF_32),
    .O(ExOut[5])
  );
  OBUF   ExOut_4_OBUF (
    .I(ExOut_4_OBUF_31),
    .O(ExOut[4])
  );
  OBUF   ExOut_3_OBUF (
    .I(ExOut_3_OBUF_30),
    .O(ExOut[3])
  );
  OBUF   ExOut_2_OBUF (
    .I(ExOut_2_OBUF_29),
    .O(ExOut[2])
  );
  OBUF   ExOut_1_OBUF (
    .I(ExOut_1_OBUF_28),
    .O(ExOut[1])
  );
  OBUF   ExOut_0_OBUF (
    .I(ExOut_0_OBUF_27),
    .O(ExOut[0])
  );
  OBUF   m_11_OBUF (
    .I(m_11_OBUF_77),
    .O(m[11])
  );
  OBUF   m_10_OBUF (
    .I(m_10_OBUF_76),
    .O(m[10])
  );
  OBUF   m_9_OBUF (
    .I(m_9_OBUF_86),
    .O(m[9])
  );
  OBUF   m_8_OBUF (
    .I(m_8_OBUF_85),
    .O(m[8])
  );
  OBUF   m_7_OBUF (
    .I(m_7_OBUF_84),
    .O(m[7])
  );
  OBUF   m_6_OBUF (
    .I(m_6_OBUF_83),
    .O(m[6])
  );
  OBUF   m_5_OBUF (
    .I(m_5_OBUF_82),
    .O(m[5])
  );
  OBUF   m_4_OBUF (
    .I(m_4_OBUF_81),
    .O(m[4])
  );
  OBUF   m_3_OBUF (
    .I(m_3_OBUF_80),
    .O(m[3])
  );
  OBUF   m_2_OBUF (
    .I(m_2_OBUF_79),
    .O(m[2])
  );
  OBUF   m_1_OBUF (
    .I(m_1_OBUF_78),
    .O(m[1])
  );
  OBUF   m_0_OBUF (
    .I(m_0_OBUF_75),
    .O(m[0])
  );
  LUT4 #(
    .INIT ( 16'hEA80 ))
  \inst58/carry1  (
    .I0(r4s[2]),
    .I1(a_4_IBUF_49),
    .I2(b_2_IBUF_59),
    .I3(r5c[0]),
    .O(r5c[1])
  );
  LUT4 #(
    .INIT ( 16'hEA80 ))
  \inst53/carry1  (
    .I0(r3s[2]),
    .I1(a_4_IBUF_49),
    .I2(b_1_IBUF_58),
    .I3(r4c[0]),
    .O(r4c[1])
  );
  LUT4 #(
    .INIT ( 16'hEA80 ))
  \inst48/carry1  (
    .I0(r2s[2]),
    .I1(a_3_IBUF_48),
    .I2(b_1_IBUF_58),
    .I3(r3c[0]),
    .O(r3c[1])
  );
  LUT4 #(
    .INIT ( 16'hEA80 ))
  \inst43/carry1  (
    .I0(r1s[2]),
    .I1(a_2_IBUF_47),
    .I2(b_1_IBUF_58),
    .I3(r2c[0]),
    .O(r2c[1])
  );
  LUT4 #(
    .INIT ( 16'hEA80 ))
  \inst38/carry1  (
    .I0(r1c[0]),
    .I1(a_1_IBUF_46),
    .I2(b_1_IBUF_58),
    .I3(\pp[2] ),
    .O(r1c[1])
  );
endmodule


`ifndef GLBL
`define GLBL

`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;

    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (weak1, weak0) GSR = GSR_int;
    assign (weak1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule

`endif

