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
static const char *ng0 = "C:/Users/dimit/Documents/FPGA/MULTIPLIER/ReLu.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};



static void Always_30_0(char *t0)
{
    char t6[8];
    char t24[8];
    char t40[8];
    char t74[8];
    char t90[8];
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
    t2 = ((char*)((ng3)));
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

LAB33:    xsi_set_current_line(45, ng0);

LAB36:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);

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
    t128 = ((char*)((ng1)));
    t129 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t129, t128, 0, 0, 1, 0LL);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng2)));
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
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    t21 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t21, t22, 0, 0, 1, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 31U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 31U);
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 5, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 6);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 6);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 63U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 63U);
    t5 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 6, 0LL);
    goto LAB34;

}


extern void work_m_00000000004105538381_3757750823_init()
{
	static char *pe[] = {(void *)Always_30_0};
	xsi_register_didat("work_m_00000000004105538381_3757750823", "isim/TESTNEURON_isim_beh.exe.sim/work/m_00000000004105538381_3757750823.didat");
	xsi_register_executes(pe);
}
