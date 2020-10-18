/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/dimit/Documents/FPGA/MULTIPLIER/sigmoid.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {14U, 0U};
static unsigned int ng5[] = {33U, 0U};
static unsigned int ng6[] = {32U, 0U};
static unsigned int ng7[] = {11U, 0U};
static unsigned int ng8[] = {31U, 0U};
static unsigned int ng9[] = {15U, 0U};
static unsigned int ng10[] = {7U, 0U};
static unsigned int ng11[] = {12U, 0U};
static unsigned int ng12[] = {16U, 0U};
static unsigned int ng13[] = {30U, 0U};
static unsigned int ng14[] = {3U, 0U};
static unsigned int ng15[] = {13U, 0U};
static unsigned int ng16[] = {1U, 0U};
static unsigned int ng17[] = {24U, 0U};
static unsigned int ng18[] = {52U, 0U};
static unsigned int ng19[] = {58U, 0U};
static unsigned int ng20[] = {48U, 0U};
static unsigned int ng21[] = {20U, 0U};
static unsigned int ng22[] = {6U, 0U};



static void Always_30_0(char *t0)
{
    char t6[8];
    char t24[8];
    char t40[8];
    char t74[8];
    char t90[8];
    char t130[8];
    char t131[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    int t114;
    int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t129;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    char *t141;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3488);
    *((int *)t2) = 1;
    t3 = (t0 + 3200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t0 + 1368U);
    t23 = *((char **)t22);
    t22 = ((char*)((ng2)));
    memset(t24, 0, 8);
    t25 = (t23 + 4);
    t26 = (t22 + 4);
    t27 = *((unsigned int *)t23);
    t28 = *((unsigned int *)t22);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t25);
    t31 = *((unsigned int *)t26);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t26);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB13;

LAB10:    if (t36 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t24) = 1;

LAB13:    t41 = *((unsigned int *)t6);
    t42 = *((unsigned int *)t24);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t44 = (t6 + 4);
    t45 = (t24 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB14;

LAB15:
LAB16:    t72 = (t0 + 1528U);
    t73 = *((char **)t72);
    t72 = ((char*)((ng2)));
    memset(t74, 0, 8);
    t75 = (t73 + 4);
    t76 = (t72 + 4);
    t77 = *((unsigned int *)t73);
    t78 = *((unsigned int *)t72);
    t79 = (t77 ^ t78);
    t80 = *((unsigned int *)t75);
    t81 = *((unsigned int *)t76);
    t82 = (t80 ^ t81);
    t83 = (t79 | t82);
    t84 = *((unsigned int *)t75);
    t85 = *((unsigned int *)t76);
    t86 = (t84 | t85);
    t87 = (~(t86));
    t88 = (t83 & t87);
    if (t88 != 0)
        goto LAB20;

LAB17:    if (t86 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t74) = 1;

LAB20:    t91 = *((unsigned int *)t40);
    t92 = *((unsigned int *)t74);
    t93 = (t91 & t92);
    *((unsigned int *)t90) = t93;
    t94 = (t40 + 4);
    t95 = (t74 + 4);
    t96 = (t90 + 4);
    t97 = *((unsigned int *)t94);
    t98 = *((unsigned int *)t95);
    t99 = (t97 | t98);
    *((unsigned int *)t96) = t99;
    t100 = *((unsigned int *)t96);
    t101 = (t100 != 0);
    if (t101 == 1)
        goto LAB21;

LAB22:
LAB23:    t122 = (t90 + 4);
    t123 = *((unsigned int *)t122);
    t124 = (~(t123));
    t125 = *((unsigned int *)t90);
    t126 = (t125 & t124);
    t127 = (t126 != 0);
    if (t127 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB31;

LAB28:    if (t18 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t6) = 1;

LAB31:    t8 = (t6 + 4);
    t27 = *((unsigned int *)t8);
    t28 = (~(t27));
    t29 = *((unsigned int *)t6);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(78, ng0);

LAB106:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB108;

LAB107:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB108;

LAB111:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB110;

LAB109:    *((unsigned int *)t6) = 1;

LAB110:    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB112;

LAB113:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB119;

LAB116:    if (t18 != 0)
        goto LAB118;

LAB117:    *((unsigned int *)t6) = 1;

LAB119:    t8 = (t6 + 4);
    t27 = *((unsigned int *)t8);
    t28 = (~(t27));
    t29 = *((unsigned int *)t6);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB120;

LAB121:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB127;

LAB124:    if (t18 != 0)
        goto LAB126;

LAB125:    *((unsigned int *)t6) = 1;

LAB127:    t8 = (t0 + 1528U);
    t21 = *((char **)t8);
    memset(t24, 0, 8);
    t8 = (t24 + 4);
    t22 = (t21 + 4);
    t27 = *((unsigned int *)t21);
    t28 = (t27 >> 8);
    *((unsigned int *)t24) = t28;
    t29 = *((unsigned int *)t22);
    t30 = (t29 >> 8);
    *((unsigned int *)t8) = t30;
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 & 15U);
    t32 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t32 & 15U);
    t23 = ((char*)((ng9)));
    memset(t40, 0, 8);
    t25 = (t24 + 4);
    t26 = (t23 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t23);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t25);
    t37 = *((unsigned int *)t26);
    t38 = (t36 ^ t37);
    t41 = (t35 | t38);
    t42 = *((unsigned int *)t25);
    t43 = *((unsigned int *)t26);
    t47 = (t42 | t43);
    t48 = (~(t47));
    t49 = (t41 & t48);
    if (t49 != 0)
        goto LAB131;

LAB128:    if (t47 != 0)
        goto LAB130;

LAB129:    *((unsigned int *)t40) = 1;

LAB131:    t44 = (t0 + 1528U);
    t45 = *((char **)t44);
    memset(t74, 0, 8);
    t44 = (t74 + 4);
    t46 = (t45 + 4);
    t50 = *((unsigned int *)t45);
    t51 = (t50 >> 8);
    *((unsigned int *)t74) = t51;
    t52 = *((unsigned int *)t46);
    t53 = (t52 >> 8);
    *((unsigned int *)t44) = t53;
    t56 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t56 & 15U);
    t57 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t57 & 15U);
    t54 = ((char*)((ng10)));
    memset(t90, 0, 8);
    t55 = (t74 + 4);
    t72 = (t54 + 4);
    t58 = *((unsigned int *)t74);
    t59 = *((unsigned int *)t54);
    t60 = (t58 ^ t59);
    t61 = *((unsigned int *)t55);
    t62 = *((unsigned int *)t72);
    t63 = (t61 ^ t62);
    t66 = (t60 | t63);
    t67 = *((unsigned int *)t55);
    t68 = *((unsigned int *)t72);
    t69 = (t67 | t68);
    t70 = (~(t69));
    t71 = (t66 & t70);
    if (t71 != 0)
        goto LAB135;

LAB132:    if (t69 != 0)
        goto LAB134;

LAB133:    *((unsigned int *)t90) = 1;

LAB135:    t77 = *((unsigned int *)t40);
    t78 = *((unsigned int *)t90);
    t79 = (t77 | t78);
    *((unsigned int *)t130) = t79;
    t75 = (t40 + 4);
    t76 = (t90 + 4);
    t89 = (t130 + 4);
    t80 = *((unsigned int *)t75);
    t81 = *((unsigned int *)t76);
    t82 = (t80 | t81);
    *((unsigned int *)t89) = t82;
    t83 = *((unsigned int *)t89);
    t84 = (t83 != 0);
    if (t84 == 1)
        goto LAB136;

LAB137:
LAB138:    t102 = *((unsigned int *)t6);
    t103 = *((unsigned int *)t130);
    t106 = (t102 & t103);
    *((unsigned int *)t131) = t106;
    t96 = (t6 + 4);
    t104 = (t130 + 4);
    t105 = (t131 + 4);
    t107 = *((unsigned int *)t96);
    t108 = *((unsigned int *)t104);
    t109 = (t107 | t108);
    *((unsigned int *)t105) = t109;
    t110 = *((unsigned int *)t105);
    t111 = (t110 != 0);
    if (t111 == 1)
        goto LAB139;

LAB140:
LAB141:    t129 = (t131 + 4);
    t135 = *((unsigned int *)t129);
    t136 = (~(t135));
    t137 = *((unsigned int *)t131);
    t138 = (t137 & t136);
    t139 = (t138 != 0);
    if (t139 > 0)
        goto LAB142;

LAB143:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng13)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB149;

LAB146:    if (t18 != 0)
        goto LAB148;

LAB147:    *((unsigned int *)t6) = 1;

LAB149:    t8 = (t0 + 1528U);
    t21 = *((char **)t8);
    memset(t24, 0, 8);
    t8 = (t24 + 4);
    t22 = (t21 + 4);
    t27 = *((unsigned int *)t21);
    t28 = (t27 >> 10);
    *((unsigned int *)t24) = t28;
    t29 = *((unsigned int *)t22);
    t30 = (t29 >> 10);
    *((unsigned int *)t8) = t30;
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 & 3U);
    t32 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t32 & 3U);
    t23 = ((char*)((ng14)));
    memset(t40, 0, 8);
    t25 = (t24 + 4);
    t26 = (t23 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t23);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t25);
    t37 = *((unsigned int *)t26);
    t38 = (t36 ^ t37);
    t41 = (t35 | t38);
    t42 = *((unsigned int *)t25);
    t43 = *((unsigned int *)t26);
    t47 = (t42 | t43);
    t48 = (~(t47));
    t49 = (t41 & t48);
    if (t49 != 0)
        goto LAB153;

LAB150:    if (t47 != 0)
        goto LAB152;

LAB151:    *((unsigned int *)t40) = 1;

LAB153:    t50 = *((unsigned int *)t6);
    t51 = *((unsigned int *)t40);
    t52 = (t50 & t51);
    *((unsigned int *)t74) = t52;
    t44 = (t6 + 4);
    t45 = (t40 + 4);
    t46 = (t74 + 4);
    t53 = *((unsigned int *)t44);
    t56 = *((unsigned int *)t45);
    t57 = (t53 | t56);
    *((unsigned int *)t46) = t57;
    t58 = *((unsigned int *)t46);
    t59 = (t58 != 0);
    if (t59 == 1)
        goto LAB154;

LAB155:
LAB156:    t72 = (t0 + 1368U);
    t73 = *((char **)t72);
    t72 = ((char*)((ng8)));
    memset(t90, 0, 8);
    t75 = (t73 + 4);
    t76 = (t72 + 4);
    t83 = *((unsigned int *)t73);
    t84 = *((unsigned int *)t72);
    t85 = (t83 ^ t84);
    t86 = *((unsigned int *)t75);
    t87 = *((unsigned int *)t76);
    t88 = (t86 ^ t87);
    t91 = (t85 | t88);
    t92 = *((unsigned int *)t75);
    t93 = *((unsigned int *)t76);
    t97 = (t92 | t93);
    t98 = (~(t97));
    t99 = (t91 & t98);
    if (t99 != 0)
        goto LAB160;

LAB157:    if (t97 != 0)
        goto LAB159;

LAB158:    *((unsigned int *)t90) = 1;

LAB160:    t100 = *((unsigned int *)t74);
    t101 = *((unsigned int *)t90);
    t102 = (t100 | t101);
    *((unsigned int *)t130) = t102;
    t94 = (t74 + 4);
    t95 = (t90 + 4);
    t96 = (t130 + 4);
    t103 = *((unsigned int *)t94);
    t106 = *((unsigned int *)t95);
    t107 = (t103 | t106);
    *((unsigned int *)t96) = t107;
    t108 = *((unsigned int *)t96);
    t109 = (t108 != 0);
    if (t109 == 1)
        goto LAB161;

LAB162:
LAB163:    t122 = (t130 + 4);
    t125 = *((unsigned int *)t122);
    t126 = (~(t125));
    t127 = *((unsigned int *)t130);
    t132 = (t127 & t126);
    t133 = (t132 != 0);
    if (t133 > 0)
        goto LAB164;

LAB165:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng13)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB171;

LAB168:    if (t18 != 0)
        goto LAB170;

LAB169:    *((unsigned int *)t6) = 1;

LAB171:    t8 = (t6 + 4);
    t27 = *((unsigned int *)t8);
    t28 = (~(t27));
    t29 = *((unsigned int *)t6);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB172;

LAB173:    xsi_set_current_line(110, ng0);

LAB176:    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);

LAB174:
LAB166:
LAB144:
LAB122:
LAB114:
LAB34:
LAB26:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB12:    t39 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB13;

LAB14:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t6 + 4);
    t55 = (t24 + 4);
    t56 = *((unsigned int *)t6);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t24);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t69 & t67);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    t71 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t71 & t67);
    goto LAB16;

LAB19:    t89 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB20;

LAB21:    t102 = *((unsigned int *)t90);
    t103 = *((unsigned int *)t96);
    *((unsigned int *)t90) = (t102 | t103);
    t104 = (t40 + 4);
    t105 = (t74 + 4);
    t106 = *((unsigned int *)t40);
    t107 = (~(t106));
    t108 = *((unsigned int *)t104);
    t109 = (~(t108));
    t110 = *((unsigned int *)t74);
    t111 = (~(t110));
    t112 = *((unsigned int *)t105);
    t113 = (~(t112));
    t114 = (t107 & t109);
    t115 = (t111 & t113);
    t116 = (~(t114));
    t117 = (~(t115));
    t118 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t118 & t116);
    t119 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t119 & t117);
    t120 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t120 & t116);
    t121 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t121 & t117);
    goto LAB23;

LAB24:    xsi_set_current_line(33, ng0);

LAB27:    xsi_set_current_line(34, ng0);
    t128 = ((char*)((ng3)));
    t129 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t129, t128, 0, 0, 1, 0LL);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    goto LAB26;

LAB30:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(39, ng0);

LAB35:    xsi_set_current_line(40, ng0);
    t21 = (t0 + 1368U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng5)));
    memset(t24, 0, 8);
    t23 = (t22 + 4);
    if (*((unsigned int *)t23) != 0)
        goto LAB37;

LAB36:    t25 = (t21 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB37;

LAB40:    if (*((unsigned int *)t22) < *((unsigned int *)t21))
        goto LAB39;

LAB38:    *((unsigned int *)t24) = 1;

LAB39:    t39 = (t24 + 4);
    t32 = *((unsigned int *)t39);
    t33 = (~(t32));
    t34 = *((unsigned int *)t24);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB48;

LAB45:    if (t18 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t6) = 1;

LAB48:    t8 = (t6 + 4);
    t27 = *((unsigned int *)t8);
    t28 = (~(t27));
    t29 = *((unsigned int *)t6);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB56;

LAB53:    if (t18 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t6) = 1;

LAB56:    t8 = (t0 + 1528U);
    t21 = *((char **)t8);
    memset(t24, 0, 8);
    t8 = (t24 + 4);
    t22 = (t21 + 4);
    t27 = *((unsigned int *)t21);
    t28 = (t27 >> 8);
    *((unsigned int *)t24) = t28;
    t29 = *((unsigned int *)t22);
    t30 = (t29 >> 8);
    *((unsigned int *)t8) = t30;
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 & 15U);
    t32 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t32 & 15U);
    t23 = ((char*)((ng9)));
    memset(t40, 0, 8);
    t25 = (t24 + 4);
    t26 = (t23 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t23);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t25);
    t37 = *((unsigned int *)t26);
    t38 = (t36 ^ t37);
    t41 = (t35 | t38);
    t42 = *((unsigned int *)t25);
    t43 = *((unsigned int *)t26);
    t47 = (t42 | t43);
    t48 = (~(t47));
    t49 = (t41 & t48);
    if (t49 != 0)
        goto LAB60;

LAB57:    if (t47 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t40) = 1;

LAB60:    t44 = (t0 + 1528U);
    t45 = *((char **)t44);
    memset(t74, 0, 8);
    t44 = (t74 + 4);
    t46 = (t45 + 4);
    t50 = *((unsigned int *)t45);
    t51 = (t50 >> 8);
    *((unsigned int *)t74) = t51;
    t52 = *((unsigned int *)t46);
    t53 = (t52 >> 8);
    *((unsigned int *)t44) = t53;
    t56 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t56 & 15U);
    t57 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t57 & 15U);
    t54 = ((char*)((ng10)));
    memset(t90, 0, 8);
    t55 = (t74 + 4);
    t72 = (t54 + 4);
    t58 = *((unsigned int *)t74);
    t59 = *((unsigned int *)t54);
    t60 = (t58 ^ t59);
    t61 = *((unsigned int *)t55);
    t62 = *((unsigned int *)t72);
    t63 = (t61 ^ t62);
    t66 = (t60 | t63);
    t67 = *((unsigned int *)t55);
    t68 = *((unsigned int *)t72);
    t69 = (t67 | t68);
    t70 = (~(t69));
    t71 = (t66 & t70);
    if (t71 != 0)
        goto LAB64;

LAB61:    if (t69 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t90) = 1;

LAB64:    t77 = *((unsigned int *)t40);
    t78 = *((unsigned int *)t90);
    t79 = (t77 | t78);
    *((unsigned int *)t130) = t79;
    t75 = (t40 + 4);
    t76 = (t90 + 4);
    t89 = (t130 + 4);
    t80 = *((unsigned int *)t75);
    t81 = *((unsigned int *)t76);
    t82 = (t80 | t81);
    *((unsigned int *)t89) = t82;
    t83 = *((unsigned int *)t89);
    t84 = (t83 != 0);
    if (t84 == 1)
        goto LAB65;

LAB66:
LAB67:    t102 = *((unsigned int *)t6);
    t103 = *((unsigned int *)t130);
    t106 = (t102 & t103);
    *((unsigned int *)t131) = t106;
    t96 = (t6 + 4);
    t104 = (t130 + 4);
    t105 = (t131 + 4);
    t107 = *((unsigned int *)t96);
    t108 = *((unsigned int *)t104);
    t109 = (t107 | t108);
    *((unsigned int *)t105) = t109;
    t110 = *((unsigned int *)t105);
    t111 = (t110 != 0);
    if (t111 == 1)
        goto LAB68;

LAB69:
LAB70:    t129 = (t131 + 4);
    t135 = *((unsigned int *)t129);
    t136 = (~(t135));
    t137 = *((unsigned int *)t131);
    t138 = (t137 & t136);
    t139 = (t138 != 0);
    if (t139 > 0)
        goto LAB71;

LAB72:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng13)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB78;

LAB75:    if (t18 != 0)
        goto LAB77;

LAB76:    *((unsigned int *)t6) = 1;

LAB78:    t8 = (t0 + 1528U);
    t21 = *((char **)t8);
    memset(t24, 0, 8);
    t8 = (t24 + 4);
    t22 = (t21 + 4);
    t27 = *((unsigned int *)t21);
    t28 = (t27 >> 10);
    *((unsigned int *)t24) = t28;
    t29 = *((unsigned int *)t22);
    t30 = (t29 >> 10);
    *((unsigned int *)t8) = t30;
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 & 3U);
    t32 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t32 & 3U);
    t23 = ((char*)((ng14)));
    memset(t40, 0, 8);
    t25 = (t24 + 4);
    t26 = (t23 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t23);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t25);
    t37 = *((unsigned int *)t26);
    t38 = (t36 ^ t37);
    t41 = (t35 | t38);
    t42 = *((unsigned int *)t25);
    t43 = *((unsigned int *)t26);
    t47 = (t42 | t43);
    t48 = (~(t47));
    t49 = (t41 & t48);
    if (t49 != 0)
        goto LAB82;

LAB79:    if (t47 != 0)
        goto LAB81;

LAB80:    *((unsigned int *)t40) = 1;

LAB82:    t50 = *((unsigned int *)t6);
    t51 = *((unsigned int *)t40);
    t52 = (t50 & t51);
    *((unsigned int *)t74) = t52;
    t44 = (t6 + 4);
    t45 = (t40 + 4);
    t46 = (t74 + 4);
    t53 = *((unsigned int *)t44);
    t56 = *((unsigned int *)t45);
    t57 = (t53 | t56);
    *((unsigned int *)t46) = t57;
    t58 = *((unsigned int *)t46);
    t59 = (t58 != 0);
    if (t59 == 1)
        goto LAB83;

LAB84:
LAB85:    t72 = (t0 + 1368U);
    t73 = *((char **)t72);
    t72 = ((char*)((ng8)));
    memset(t90, 0, 8);
    t75 = (t73 + 4);
    t76 = (t72 + 4);
    t83 = *((unsigned int *)t73);
    t84 = *((unsigned int *)t72);
    t85 = (t83 ^ t84);
    t86 = *((unsigned int *)t75);
    t87 = *((unsigned int *)t76);
    t88 = (t86 ^ t87);
    t91 = (t85 | t88);
    t92 = *((unsigned int *)t75);
    t93 = *((unsigned int *)t76);
    t97 = (t92 | t93);
    t98 = (~(t97));
    t99 = (t91 & t98);
    if (t99 != 0)
        goto LAB89;

LAB86:    if (t97 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t90) = 1;

LAB89:    t100 = *((unsigned int *)t74);
    t101 = *((unsigned int *)t90);
    t102 = (t100 | t101);
    *((unsigned int *)t130) = t102;
    t94 = (t74 + 4);
    t95 = (t90 + 4);
    t96 = (t130 + 4);
    t103 = *((unsigned int *)t94);
    t106 = *((unsigned int *)t95);
    t107 = (t103 | t106);
    *((unsigned int *)t96) = t107;
    t108 = *((unsigned int *)t96);
    t109 = (t108 != 0);
    if (t109 == 1)
        goto LAB90;

LAB91:
LAB92:    t122 = (t130 + 4);
    t125 = *((unsigned int *)t122);
    t126 = (~(t125));
    t127 = *((unsigned int *)t130);
    t132 = (t127 & t126);
    t133 = (t132 != 0);
    if (t133 > 0)
        goto LAB93;

LAB94:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng13)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB100;

LAB97:    if (t18 != 0)
        goto LAB99;

LAB98:    *((unsigned int *)t6) = 1;

LAB100:    t8 = (t6 + 4);
    t27 = *((unsigned int *)t8);
    t28 = (~(t27));
    t29 = *((unsigned int *)t6);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB101;

LAB102:    xsi_set_current_line(71, ng0);

LAB105:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);

LAB103:
LAB95:
LAB73:
LAB51:
LAB43:    goto LAB34;

LAB37:    t26 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB39;

LAB41:    xsi_set_current_line(41, ng0);

LAB44:    xsi_set_current_line(42, ng0);
    t44 = ((char*)((ng3)));
    t45 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t45, t44, 0, 0, 1, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    goto LAB43;

LAB47:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB48;

LAB49:    xsi_set_current_line(47, ng0);

LAB52:    xsi_set_current_line(48, ng0);
    t21 = ((char*)((ng3)));
    t22 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 1, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    goto LAB51;

LAB55:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB56;

LAB59:    t39 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB60;

LAB63:    t73 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t73) = 1;
    goto LAB64;

LAB65:    t85 = *((unsigned int *)t130);
    t86 = *((unsigned int *)t89);
    *((unsigned int *)t130) = (t85 | t86);
    t94 = (t40 + 4);
    t95 = (t90 + 4);
    t87 = *((unsigned int *)t94);
    t88 = (~(t87));
    t91 = *((unsigned int *)t40);
    t64 = (t91 & t88);
    t92 = *((unsigned int *)t95);
    t93 = (~(t92));
    t97 = *((unsigned int *)t90);
    t65 = (t97 & t93);
    t98 = (~(t64));
    t99 = (~(t65));
    t100 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t100 & t98);
    t101 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t101 & t99);
    goto LAB67;

LAB68:    t112 = *((unsigned int *)t131);
    t113 = *((unsigned int *)t105);
    *((unsigned int *)t131) = (t112 | t113);
    t122 = (t6 + 4);
    t128 = (t130 + 4);
    t116 = *((unsigned int *)t6);
    t117 = (~(t116));
    t118 = *((unsigned int *)t122);
    t119 = (~(t118));
    t120 = *((unsigned int *)t130);
    t121 = (~(t120));
    t123 = *((unsigned int *)t128);
    t124 = (~(t123));
    t114 = (t117 & t119);
    t115 = (t121 & t124);
    t125 = (~(t114));
    t126 = (~(t115));
    t127 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t127 & t125);
    t132 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t132 & t126);
    t133 = *((unsigned int *)t131);
    *((unsigned int *)t131) = (t133 & t125);
    t134 = *((unsigned int *)t131);
    *((unsigned int *)t131) = (t134 & t126);
    goto LAB70;

LAB71:    xsi_set_current_line(53, ng0);

LAB74:    xsi_set_current_line(54, ng0);
    t140 = ((char*)((ng3)));
    t141 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t141, t140, 0, 0, 1, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    goto LAB73;

LAB77:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB78;

LAB81:    t39 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB82;

LAB83:    t60 = *((unsigned int *)t74);
    t61 = *((unsigned int *)t46);
    *((unsigned int *)t74) = (t60 | t61);
    t54 = (t6 + 4);
    t55 = (t40 + 4);
    t62 = *((unsigned int *)t6);
    t63 = (~(t62));
    t66 = *((unsigned int *)t54);
    t67 = (~(t66));
    t68 = *((unsigned int *)t40);
    t69 = (~(t68));
    t70 = *((unsigned int *)t55);
    t71 = (~(t70));
    t64 = (t63 & t67);
    t65 = (t69 & t71);
    t77 = (~(t64));
    t78 = (~(t65));
    t79 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t79 & t77);
    t80 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t80 & t78);
    t81 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t81 & t77);
    t82 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t82 & t78);
    goto LAB85;

LAB88:    t89 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB89;

LAB90:    t110 = *((unsigned int *)t130);
    t111 = *((unsigned int *)t96);
    *((unsigned int *)t130) = (t110 | t111);
    t104 = (t74 + 4);
    t105 = (t90 + 4);
    t112 = *((unsigned int *)t104);
    t113 = (~(t112));
    t116 = *((unsigned int *)t74);
    t114 = (t116 & t113);
    t117 = *((unsigned int *)t105);
    t118 = (~(t117));
    t119 = *((unsigned int *)t90);
    t115 = (t119 & t118);
    t120 = (~(t114));
    t121 = (~(t115));
    t123 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t123 & t120);
    t124 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t124 & t121);
    goto LAB92;

LAB93:    xsi_set_current_line(59, ng0);

LAB96:    xsi_set_current_line(60, ng0);
    t128 = ((char*)((ng3)));
    t129 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t129, t128, 0, 0, 1, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    goto LAB95;

LAB99:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB100;

LAB101:    xsi_set_current_line(65, ng0);

LAB104:    xsi_set_current_line(66, ng0);
    t21 = ((char*)((ng3)));
    t22 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 1, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    goto LAB103;

LAB108:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB110;

LAB112:    xsi_set_current_line(80, ng0);

LAB115:    xsi_set_current_line(81, ng0);
    t21 = ((char*)((ng3)));
    t22 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 1, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    goto LAB114;

LAB118:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB119;

LAB120:    xsi_set_current_line(86, ng0);

LAB123:    xsi_set_current_line(87, ng0);
    t21 = ((char*)((ng3)));
    t22 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 1, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    goto LAB122;

LAB126:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB127;

LAB130:    t39 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB131;

LAB134:    t73 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t73) = 1;
    goto LAB135;

LAB136:    t85 = *((unsigned int *)t130);
    t86 = *((unsigned int *)t89);
    *((unsigned int *)t130) = (t85 | t86);
    t94 = (t40 + 4);
    t95 = (t90 + 4);
    t87 = *((unsigned int *)t94);
    t88 = (~(t87));
    t91 = *((unsigned int *)t40);
    t64 = (t91 & t88);
    t92 = *((unsigned int *)t95);
    t93 = (~(t92));
    t97 = *((unsigned int *)t90);
    t65 = (t97 & t93);
    t98 = (~(t64));
    t99 = (~(t65));
    t100 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t100 & t98);
    t101 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t101 & t99);
    goto LAB138;

LAB139:    t112 = *((unsigned int *)t131);
    t113 = *((unsigned int *)t105);
    *((unsigned int *)t131) = (t112 | t113);
    t122 = (t6 + 4);
    t128 = (t130 + 4);
    t116 = *((unsigned int *)t6);
    t117 = (~(t116));
    t118 = *((unsigned int *)t122);
    t119 = (~(t118));
    t120 = *((unsigned int *)t130);
    t121 = (~(t120));
    t123 = *((unsigned int *)t128);
    t124 = (~(t123));
    t114 = (t117 & t119);
    t115 = (t121 & t124);
    t125 = (~(t114));
    t126 = (~(t115));
    t127 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t127 & t125);
    t132 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t132 & t126);
    t133 = *((unsigned int *)t131);
    *((unsigned int *)t131) = (t133 & t125);
    t134 = *((unsigned int *)t131);
    *((unsigned int *)t131) = (t134 & t126);
    goto LAB141;

LAB142:    xsi_set_current_line(92, ng0);

LAB145:    xsi_set_current_line(93, ng0);
    t140 = ((char*)((ng3)));
    t141 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t141, t140, 0, 0, 1, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    goto LAB144;

LAB148:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB149;

LAB152:    t39 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB153;

LAB154:    t60 = *((unsigned int *)t74);
    t61 = *((unsigned int *)t46);
    *((unsigned int *)t74) = (t60 | t61);
    t54 = (t6 + 4);
    t55 = (t40 + 4);
    t62 = *((unsigned int *)t6);
    t63 = (~(t62));
    t66 = *((unsigned int *)t54);
    t67 = (~(t66));
    t68 = *((unsigned int *)t40);
    t69 = (~(t68));
    t70 = *((unsigned int *)t55);
    t71 = (~(t70));
    t64 = (t63 & t67);
    t65 = (t69 & t71);
    t77 = (~(t64));
    t78 = (~(t65));
    t79 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t79 & t77);
    t80 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t80 & t78);
    t81 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t81 & t77);
    t82 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t82 & t78);
    goto LAB156;

LAB159:    t89 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB160;

LAB161:    t110 = *((unsigned int *)t130);
    t111 = *((unsigned int *)t96);
    *((unsigned int *)t130) = (t110 | t111);
    t104 = (t74 + 4);
    t105 = (t90 + 4);
    t112 = *((unsigned int *)t104);
    t113 = (~(t112));
    t116 = *((unsigned int *)t74);
    t114 = (t116 & t113);
    t117 = *((unsigned int *)t105);
    t118 = (~(t117));
    t119 = *((unsigned int *)t90);
    t115 = (t119 & t118);
    t120 = (~(t114));
    t121 = (~(t115));
    t123 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t123 & t120);
    t124 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t124 & t121);
    goto LAB163;

LAB164:    xsi_set_current_line(98, ng0);

LAB167:    xsi_set_current_line(99, ng0);
    t128 = ((char*)((ng3)));
    t129 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t129, t128, 0, 0, 1, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    goto LAB166;

LAB170:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB171;

LAB172:    xsi_set_current_line(104, ng0);

LAB175:    xsi_set_current_line(105, ng0);
    t21 = ((char*)((ng3)));
    t22 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 1, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    goto LAB174;

}


extern void work_m_00000000004105538381_1470900609_init()
{
	static char *pe[] = {(void *)Always_30_0};
	xsi_register_didat("work_m_00000000004105538381_1470900609", "isim/TESTNEURON_isim_beh.exe.sim/work/m_00000000004105538381_1470900609.didat");
	xsi_register_executes(pe);
}
