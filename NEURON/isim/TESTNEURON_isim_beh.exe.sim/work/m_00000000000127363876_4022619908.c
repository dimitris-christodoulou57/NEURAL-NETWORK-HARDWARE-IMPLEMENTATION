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
static const char *ng0 = "Exponent A = %d, B = %d, C = %d, D = %d, Mantissa A = %d, B = %d, C = %d, D = %d, ExponentOut = %d, Out1 = %d, Out2 = %d, MantissaOut = %d, Out1 = %d, Out2 = %d \n";
static const char *ng1 = "C:/Users/dimit/Documents/FPGA/MULTIPLIER/TESTNEURON.v";
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {12U, 0U};
static unsigned int ng5[] = {56U, 0U};
static unsigned int ng6[] = {7U, 0U};
static unsigned int ng7[] = {8U, 0U};
static unsigned int ng8[] = {14U, 0U};

void Monitor_117_3(char *);
void Monitor_117_3(char *);


static void Monitor_117_3_Func(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 3528);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 3688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3848);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 4008);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 4168);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 4328);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 4488);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 4648);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t0 + 1208U);
    t26 = *((char **)t25);
    t25 = (t0 + 1688U);
    t27 = *((char **)t25);
    t25 = (t0 + 2168U);
    t28 = *((char **)t25);
    t25 = (t0 + 1368U);
    t29 = *((char **)t25);
    t25 = (t0 + 1848U);
    t30 = *((char **)t25);
    t25 = (t0 + 2328U);
    t31 = *((char **)t25);
    xsi_vlogfile_write(1, 0, 3, ng0, 15, t0, (char)118, t3, 5, (char)118, t6, 5, (char)118, t9, 5, (char)118, t12, 5, (char)118, t15, 6, (char)118, t18, 6, (char)118, t21, 6, (char)118, t24, 6, (char)118, t26, 5, (char)118, t27, 5, (char)118, t28, 5, (char)118, t29, 6, (char)118, t30, 6, (char)118, t31, 6);

LAB1:    return;
}

static void Initial_79_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 5568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(79, ng1);

LAB4:    xsi_set_current_line(81, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(82, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(83, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(84, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(85, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(86, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(87, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(88, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(89, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(90, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(91, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(92, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(93, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(96, ng1);
    t2 = (t0 + 5376);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(99, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(100, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(101, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(102, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(103, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(104, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(105, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(106, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(107, ng1);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(108, ng1);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4328);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(109, ng1);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(110, ng1);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    goto LAB1;

}

static void Always_113_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 5816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(114, ng1);
    t2 = (t0 + 5624);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(114, ng1);
    t4 = (t0 + 2728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t0 + 2728);
    xsi_vlogvar_assign_value(t14, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

}

static void Initial_116_2(char *t0)
{

LAB0:    xsi_set_current_line(116, ng1);

LAB2:    xsi_set_current_line(117, ng1);
    Monitor_117_3(t0);

LAB1:    return;
}

void Monitor_117_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 6120);
    t2 = (t0 + 6632);
    xsi_vlogfile_monitor((void *)Monitor_117_3_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000000127363876_4022619908_init()
{
	static char *pe[] = {(void *)Initial_79_0,(void *)Always_113_1,(void *)Initial_116_2,(void *)Monitor_117_3};
	xsi_register_didat("work_m_00000000000127363876_4022619908", "isim/TESTNEURON_isim_beh.exe.sim/work/m_00000000000127363876_4022619908.didat");
	xsi_register_executes(pe);
}
