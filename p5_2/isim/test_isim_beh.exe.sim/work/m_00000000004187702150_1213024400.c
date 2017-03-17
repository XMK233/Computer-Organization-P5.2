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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/mathew/Desktop/p5_2/gpr.v";
static int ng1[] = {0, 0};
static int ng2[] = {32, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {4, 0};
static int ng6[] = {31, 0};



static void Initial_36_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
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
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(36, ng0);

LAB2:    xsi_set_current_line(37, ng0);
    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1748);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 1748);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB6:    xsi_set_current_line(38, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 1656);
    t16 = (t0 + 1656);
    t17 = (t16 + 44U);
    t18 = *((char **)t17);
    t19 = (t0 + 1656);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    t22 = (t0 + 1748);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 1748);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 1748);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB8;

}

static void Always_41_1(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
    char t36[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    int t26;
    char *t27;
    unsigned int t28;
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;

LAB0:    t1 = (t0 + 2416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2612);
    *((int *)t2) = 1;
    t3 = (t0 + 2444);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1152U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t13, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB14;

LAB12:    t4 = (t3 + 4);
    t5 = (t2 + 4);
    if (*((unsigned int *)t4) != *((unsigned int *)t5))
        goto LAB14;

LAB13:    *((unsigned int *)t13) = 1;

LAB14:    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1656);
    t11 = (t5 + 44U);
    t12 = *((char **)t11);
    t14 = (t0 + 1656);
    t17 = (t14 + 40U);
    t18 = *((char **)t17);
    t19 = (t0 + 692U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_array_select_value(t13, 32, t4, t12, t18, 2, 1, t20, 5, 2);
    t19 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t19, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1656);
    t11 = (t5 + 44U);
    t12 = *((char **)t11);
    t14 = (t0 + 1656);
    t17 = (t14 + 40U);
    t18 = *((char **)t17);
    t19 = (t0 + 784U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_array_select_value(t13, 32, t4, t12, t18, 2, 1, t20, 5, 2);
    t19 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t19, t13, 0, 0, 32, 0LL);
    goto LAB2;

LAB6:    xsi_set_current_line(43, ng0);

LAB9:    xsi_set_current_line(44, ng0);
    t11 = (t0 + 1244U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t12, 32, t11, 32);
    t14 = (t0 + 1656);
    t17 = (t0 + 1656);
    t18 = (t17 + 44U);
    t19 = *((char **)t18);
    t20 = (t0 + 1656);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t23, 32, 1);
    t24 = (t15 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t16 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    t30 = (t26 && t29);
    if (t30 == 1)
        goto LAB10;

LAB11:    goto LAB8;

LAB10:    t31 = *((unsigned int *)t15);
    t32 = *((unsigned int *)t16);
    t33 = (t31 - t32);
    t34 = (t33 + 1);
    xsi_vlogvar_assign_value(t14, t13, 0, *((unsigned int *)t16), t34);
    goto LAB11;

LAB15:    xsi_set_current_line(46, ng0);

LAB18:    xsi_set_current_line(47, ng0);
    t12 = (t0 + 876U);
    t14 = *((char **)t12);
    t12 = ((char*)((ng1)));
    memset(t15, 0, 8);
    if (*((unsigned int *)t14) != *((unsigned int *)t12))
        goto LAB20;

LAB19:    t17 = (t14 + 4);
    t18 = (t12 + 4);
    if (*((unsigned int *)t17) != *((unsigned int *)t18))
        goto LAB20;

LAB21:    t19 = (t15 + 4);
    t25 = *((unsigned int *)t19);
    t28 = (~(t25));
    t31 = *((unsigned int *)t15);
    t32 = (t31 & t28);
    t35 = (t32 != 0);
    if (t35 > 0)
        goto LAB22;

LAB23:
LAB24:    goto LAB17;

LAB20:    *((unsigned int *)t15) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(47, ng0);

LAB25:    xsi_set_current_line(48, ng0);
    t20 = (t0 + 968U);
    t21 = *((char **)t20);
    t20 = (t0 + 1656);
    t22 = (t0 + 1656);
    t23 = (t22 + 44U);
    t24 = *((char **)t23);
    t27 = (t0 + 1656);
    t37 = (t27 + 40U);
    t38 = *((char **)t37);
    t39 = (t0 + 876U);
    t40 = *((char **)t39);
    xsi_vlog_generic_convert_array_indices(t16, t36, t24, t38, 2, 1, t40, 5, 2);
    t39 = (t16 + 4);
    t41 = *((unsigned int *)t39);
    t26 = (!(t41));
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t42);
    t29 = (!(t43));
    t30 = (t26 && t29);
    if (t30 == 1)
        goto LAB26;

LAB27:    goto LAB24;

LAB26:    t44 = *((unsigned int *)t16);
    t45 = *((unsigned int *)t36);
    t33 = (t44 - t45);
    t34 = (t33 + 1);
    xsi_vlogvar_assign_value(t20, t21, 0, *((unsigned int *)t36), t34);
    goto LAB27;

}


extern void work_m_00000000004187702150_1213024400_init()
{
	static char *pe[] = {(void *)Initial_36_0,(void *)Always_41_1};
	xsi_register_didat("work_m_00000000004187702150_1213024400", "isim/test_isim_beh.exe.sim/work/m_00000000004187702150_1213024400.didat");
	xsi_register_executes(pe);
}
