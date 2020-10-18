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
static const char *ng0 = "C:/Users/dimit/Documents/FPGA/MULTIPLIER/ADDER.v";
static const char *ng1 = "ma = %d, mb = %d\n";
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {0, 0};
static unsigned int ng5[] = {1U, 0U};
static const char *ng6 = "aa =%d, bb =%d\n";



static void Always_41_0(char *t0)
{
    char t7[8];
    char t31[8];
    char t39[8];
    char t82[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;

LAB0:    t1 = (t0 + 6528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 6848);
    *((int *)t2) = 1;
    t3 = (t0 + 6560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t0 + 1688U);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t5 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t7) = 1;

LAB9:    t22 = (t7 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t7);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB15;

LAB14:    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB15;

LAB18:    if (*((unsigned int *)t3) > *((unsigned int *)t4))
        goto LAB16;

LAB17:    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB24;

LAB23:    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB24;

LAB27:    if (*((unsigned int *)t3) > *((unsigned int *)t4))
        goto LAB25;

LAB26:    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB28;

LAB29:
LAB30:
LAB21:
LAB12:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5288);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 0, ng1, 3, t0, (char)118, t4, 12, (char)118, t8, 12);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t7, 0, 8);
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
        goto LAB35;

LAB32:    if (t18 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t7) = 1;

LAB35:    t8 = (t0 + 1368U);
    t21 = *((char **)t8);
    t8 = ((char*)((ng2)));
    memset(t31, 0, 8);
    t22 = (t21 + 4);
    t28 = (t8 + 4);
    t23 = *((unsigned int *)t21);
    t24 = *((unsigned int *)t8);
    t25 = (t23 ^ t24);
    t26 = *((unsigned int *)t22);
    t27 = *((unsigned int *)t28);
    t32 = (t26 ^ t27);
    t33 = (t25 | t32);
    t34 = *((unsigned int *)t22);
    t35 = *((unsigned int *)t28);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB39;

LAB36:    if (t36 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t31) = 1;

LAB39:    t40 = *((unsigned int *)t7);
    t41 = *((unsigned int *)t31);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t30 = (t7 + 4);
    t43 = (t31 + 4);
    t44 = (t39 + 4);
    t45 = *((unsigned int *)t30);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB40;

LAB41:
LAB42:    t70 = (t39 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t39);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t7, 0, 8);
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
        goto LAB50;

LAB47:    if (t18 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t7) = 1;

LAB50:    t8 = (t0 + 1368U);
    t21 = *((char **)t8);
    t8 = ((char*)((ng4)));
    memset(t31, 0, 8);
    t22 = (t21 + 4);
    t28 = (t8 + 4);
    t23 = *((unsigned int *)t21);
    t24 = *((unsigned int *)t8);
    t25 = (t23 ^ t24);
    t26 = *((unsigned int *)t22);
    t27 = *((unsigned int *)t28);
    t32 = (t26 ^ t27);
    t33 = (t25 | t32);
    t34 = *((unsigned int *)t22);
    t35 = *((unsigned int *)t28);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB54;

LAB51:    if (t36 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t31) = 1;

LAB54:    t40 = *((unsigned int *)t7);
    t41 = *((unsigned int *)t31);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t30 = (t7 + 4);
    t43 = (t31 + 4);
    t44 = (t39 + 4);
    t45 = *((unsigned int *)t30);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB55;

LAB56:
LAB57:    t70 = (t39 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t39);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t7, 0, 8);
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
        goto LAB65;

LAB62:    if (t18 != 0)
        goto LAB64;

LAB63:    *((unsigned int *)t7) = 1;

LAB65:    t8 = (t0 + 1368U);
    t21 = *((char **)t8);
    t8 = ((char*)((ng2)));
    memset(t31, 0, 8);
    t22 = (t21 + 4);
    t28 = (t8 + 4);
    t23 = *((unsigned int *)t21);
    t24 = *((unsigned int *)t8);
    t25 = (t23 ^ t24);
    t26 = *((unsigned int *)t22);
    t27 = *((unsigned int *)t28);
    t32 = (t26 ^ t27);
    t33 = (t25 | t32);
    t34 = *((unsigned int *)t22);
    t35 = *((unsigned int *)t28);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB69;

LAB66:    if (t36 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t31) = 1;

LAB69:    t40 = *((unsigned int *)t7);
    t41 = *((unsigned int *)t31);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t30 = (t7 + 4);
    t43 = (t31 + 4);
    t44 = (t39 + 4);
    t45 = *((unsigned int *)t30);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB70;

LAB71:
LAB72:    t70 = (t39 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t39);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB73;

LAB74:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t7, 0, 8);
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
        goto LAB94;

LAB91:    if (t18 != 0)
        goto LAB93;

LAB92:    *((unsigned int *)t7) = 1;

LAB94:    t8 = (t0 + 1368U);
    t21 = *((char **)t8);
    t8 = ((char*)((ng4)));
    memset(t31, 0, 8);
    t22 = (t21 + 4);
    t28 = (t8 + 4);
    t23 = *((unsigned int *)t21);
    t24 = *((unsigned int *)t8);
    t25 = (t23 ^ t24);
    t26 = *((unsigned int *)t22);
    t27 = *((unsigned int *)t28);
    t32 = (t26 ^ t27);
    t33 = (t25 | t32);
    t34 = *((unsigned int *)t22);
    t35 = *((unsigned int *)t28);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB98;

LAB95:    if (t36 != 0)
        goto LAB97;

LAB96:    *((unsigned int *)t31) = 1;

LAB98:    t40 = *((unsigned int *)t7);
    t41 = *((unsigned int *)t31);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t30 = (t7 + 4);
    t43 = (t31 + 4);
    t44 = (t39 + 4);
    t45 = *((unsigned int *)t30);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB99;

LAB100:
LAB101:    t70 = (t39 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t39);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB102;

LAB103:
LAB104:
LAB75:
LAB60:
LAB45:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 5448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5608);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 0, ng6, 3, t0, (char)118, t4, 12, (char)118, t8, 12);
    goto LAB2;

LAB8:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(44, ng0);

LAB13:    xsi_set_current_line(45, ng0);
    t28 = (t0 + 1528U);
    t29 = *((char **)t28);
    t28 = (t0 + 1688U);
    t30 = *((char **)t28);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_minus(t31, 6, t29, 6, t30, 6);
    t28 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t28, t31, 0, 0, 6, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 12, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 12, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 6, 0LL);
    goto LAB12;

LAB15:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB17;

LAB16:    *((unsigned int *)t7) = 1;
    goto LAB17;

LAB19:    xsi_set_current_line(51, ng0);

LAB22:    xsi_set_current_line(52, ng0);
    t21 = (t0 + 1528U);
    t22 = *((char **)t21);
    t21 = (t0 + 1688U);
    t28 = *((char **)t21);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_minus(t31, 6, t22, 6, t28, 6);
    t21 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t21, t31, 0, 0, 6, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 4968);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_rshift(t7, 12, t3, 12, t5, 6);
    t6 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t6, t7, 0, 0, 12, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 12, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 6, 0LL);
    goto LAB21;

LAB24:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB26;

LAB25:    *((unsigned int *)t7) = 1;
    goto LAB26;

LAB28:    xsi_set_current_line(58, ng0);

LAB31:    xsi_set_current_line(59, ng0);
    t21 = (t0 + 1688U);
    t22 = *((char **)t21);
    t21 = (t0 + 1528U);
    t28 = *((char **)t21);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_minus(t31, 6, t22, 6, t28, 6);
    t21 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t21, t31, 0, 0, 6, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 4968);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_rshift(t7, 12, t3, 12, t5, 6);
    t6 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t6, t7, 0, 0, 12, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 12, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 6, 0LL);
    goto LAB30;

LAB34:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB35;

LAB38:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB39;

LAB40:    t50 = *((unsigned int *)t39);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t39) = (t50 | t51);
    t52 = (t7 + 4);
    t53 = (t31 + 4);
    t54 = *((unsigned int *)t7);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t31);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t66 & t64);
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & t65);
    t68 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t68 & t64);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    goto LAB42;

LAB43:    xsi_set_current_line(68, ng0);

LAB46:    xsi_set_current_line(69, ng0);
    t76 = ((char*)((ng2)));
    t77 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t77, t76, 0, 0, 1, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 5288);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB45;

LAB49:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB50;

LAB53:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB54;

LAB55:    t50 = *((unsigned int *)t39);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t39) = (t50 | t51);
    t52 = (t7 + 4);
    t53 = (t31 + 4);
    t54 = *((unsigned int *)t7);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t31);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t66 & t64);
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & t65);
    t68 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t68 & t64);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    goto LAB57;

LAB58:    xsi_set_current_line(75, ng0);

LAB61:    xsi_set_current_line(76, ng0);
    t76 = ((char*)((ng4)));
    t77 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t77, t76, 0, 0, 1, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 5288);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB60;

LAB64:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB65;

LAB68:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB69;

LAB70:    t50 = *((unsigned int *)t39);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t39) = (t50 | t51);
    t52 = (t7 + 4);
    t53 = (t31 + 4);
    t54 = *((unsigned int *)t7);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t31);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t66 & t64);
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & t65);
    t68 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t68 & t64);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    goto LAB72;

LAB73:    xsi_set_current_line(82, ng0);

LAB76:    xsi_set_current_line(83, ng0);
    t76 = (t0 + 5128);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    t79 = (t0 + 5288);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    memset(t82, 0, 8);
    t83 = (t78 + 4);
    if (*((unsigned int *)t83) != 0)
        goto LAB78;

LAB77:    t84 = (t81 + 4);
    if (*((unsigned int *)t84) != 0)
        goto LAB78;

LAB81:    if (*((unsigned int *)t78) > *((unsigned int *)t81))
        goto LAB79;

LAB80:    t86 = (t82 + 4);
    t87 = *((unsigned int *)t86);
    t88 = (~(t87));
    t89 = *((unsigned int *)t82);
    t90 = (t89 & t88);
    t91 = (t90 != 0);
    if (t91 > 0)
        goto LAB82;

LAB83:    xsi_set_current_line(91, ng0);

LAB88:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 5288);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (~(t9));
    *((unsigned int *)t7) = t10;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t6) != 0)
        goto LAB90;

LAB89:    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 4095U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 4095U);
    t8 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 12, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB84:    goto LAB75;

LAB78:    t85 = (t82 + 4);
    *((unsigned int *)t82) = 1;
    *((unsigned int *)t85) = 1;
    goto LAB80;

LAB79:    *((unsigned int *)t82) = 1;
    goto LAB80;

LAB82:    xsi_set_current_line(84, ng0);

LAB85:    xsi_set_current_line(85, ng0);
    t92 = ((char*)((ng4)));
    t93 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t93, t92, 0, 0, 1, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 5288);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (~(t9));
    *((unsigned int *)t7) = t10;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t6) != 0)
        goto LAB87;

LAB86:    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 4095U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 4095U);
    t8 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 12, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB84;

LAB87:    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t7) = (t11 | t12);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t5) = (t13 | t14);
    goto LAB86;

LAB90:    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t7) = (t11 | t12);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t5) = (t13 | t14);
    goto LAB89;

LAB93:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB94;

LAB97:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB98;

LAB99:    t50 = *((unsigned int *)t39);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t39) = (t50 | t51);
    t52 = (t7 + 4);
    t53 = (t31 + 4);
    t54 = *((unsigned int *)t7);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t31);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t66 & t64);
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & t65);
    t68 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t68 & t64);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    goto LAB101;

LAB102:    xsi_set_current_line(99, ng0);

LAB105:    xsi_set_current_line(100, ng0);
    t76 = (t0 + 5128);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    t79 = (t0 + 5288);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    memset(t82, 0, 8);
    t83 = (t78 + 4);
    if (*((unsigned int *)t83) != 0)
        goto LAB107;

LAB106:    t84 = (t81 + 4);
    if (*((unsigned int *)t84) != 0)
        goto LAB107;

LAB110:    if (*((unsigned int *)t78) > *((unsigned int *)t81))
        goto LAB108;

LAB109:    t86 = (t82 + 4);
    t87 = *((unsigned int *)t86);
    t88 = (~(t87));
    t89 = *((unsigned int *)t82);
    t90 = (t89 & t88);
    t91 = (t90 != 0);
    if (t91 > 0)
        goto LAB111;

LAB112:    xsi_set_current_line(108, ng0);

LAB117:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 5288);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (~(t9));
    *((unsigned int *)t7) = t10;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t6) != 0)
        goto LAB119;

LAB118:    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 4095U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 4095U);
    t8 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 12, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB113:    goto LAB104;

LAB107:    t85 = (t82 + 4);
    *((unsigned int *)t82) = 1;
    *((unsigned int *)t85) = 1;
    goto LAB109;

LAB108:    *((unsigned int *)t82) = 1;
    goto LAB109;

LAB111:    xsi_set_current_line(101, ng0);

LAB114:    xsi_set_current_line(102, ng0);
    t92 = ((char*)((ng2)));
    t93 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t93, t92, 0, 0, 1, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 5288);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (~(t9));
    *((unsigned int *)t7) = t10;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t6) != 0)
        goto LAB116;

LAB115:    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 4095U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 4095U);
    t8 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 12, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB113;

LAB116:    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t7) = (t11 | t12);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t5) = (t13 | t14);
    goto LAB115;

LAB119:    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t7) = (t11 | t12);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t5) = (t13 | t14);
    goto LAB118;

}


extern void work_m_00000000001255527134_3338510183_init()
{
	static char *pe[] = {(void *)Always_41_0};
	xsi_register_didat("work_m_00000000001255527134_3338510183", "isim/TESTADD_isim_beh.exe.sim/work/m_00000000001255527134_3338510183.didat");
	xsi_register_executes(pe);
}
