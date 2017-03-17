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
static const char *ng0 = "C:/Users/mathew/Desktop/p5_2/npc.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {4U, 0U};



static void Cont_35_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t9[8];
    char t24[8];
    char t27[8];
    char t35[8];
    char t74[8];
    char t76[8];
    char t86[8];
    char t100[8];
    char t101[8];
    char t104[8];
    char t120[8];
    char t121[8];
    char t131[8];
    char t136[8];
    char t137[8];
    char t140[8];
    char t161[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t75;
    char *t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t87;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t102;
    char *t103;
    char *t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    char *t119;
    char *t122;
    char *t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t138;
    char *t139;
    char *t141;
    char *t142;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    char *t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;
    char *t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    char *t160;
    char *t162;
    char *t163;
    char *t164;
    char *t165;
    char *t166;
    char *t167;

LAB0:    t1 = (t0 + 1996U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 876U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t2))
        goto LAB6;

LAB4:    t7 = (t5 + 4);
    t8 = (t2 + 4);
    if (*((unsigned int *)t7) != *((unsigned int *)t8))
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB6:    memset(t9, 0, 8);
    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB7;

LAB8:    if (*((unsigned int *)t10) != 0)
        goto LAB9;

LAB10:    t17 = (t9 + 4);
    t18 = *((unsigned int *)t9);
    t19 = (!(t18));
    t20 = *((unsigned int *)t17);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB11;

LAB12:    memcpy(t35, t9, 8);

LAB13:    memset(t4, 0, 8);
    t63 = (t35 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (~(t64));
    t66 = *((unsigned int *)t35);
    t67 = (t66 & t65);
    t68 = (t67 & 1U);
    if (t68 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t63) != 0)
        goto LAB26;

LAB27:    t70 = (t4 + 4);
    t71 = *((unsigned int *)t4);
    t72 = *((unsigned int *)t70);
    t73 = (t71 || t72);
    if (t73 > 0)
        goto LAB28;

LAB29:    t96 = *((unsigned int *)t4);
    t97 = (~(t96));
    t98 = *((unsigned int *)t70);
    t99 = (t97 || t98);
    if (t99 > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t70) > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t4) > 0)
        goto LAB34;

LAB35:    memcpy(t3, t100, 8);

LAB36:    t162 = (t0 + 2236);
    t163 = (t162 + 32U);
    t164 = *((char **)t163);
    t165 = (t164 + 40U);
    t166 = *((char **)t165);
    memcpy(t166, t3, 8);
    xsi_driver_vfirst_trans(t162, 0, 31);
    t167 = (t0 + 2192);
    *((int *)t167) = 1;

LAB1:    return;
LAB7:    *((unsigned int *)t9) = 1;
    goto LAB10;

LAB9:    t16 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB10;

LAB11:    t22 = (t0 + 968U);
    t23 = *((char **)t22);
    t22 = ((char*)((ng2)));
    memset(t24, 0, 8);
    if (*((unsigned int *)t23) != *((unsigned int *)t22))
        goto LAB16;

LAB14:    t25 = (t23 + 4);
    t26 = (t22 + 4);
    if (*((unsigned int *)t25) != *((unsigned int *)t26))
        goto LAB16;

LAB15:    *((unsigned int *)t24) = 1;

LAB16:    memset(t27, 0, 8);
    t28 = (t24 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t28) != 0)
        goto LAB19;

LAB20:    t36 = *((unsigned int *)t9);
    t37 = *((unsigned int *)t27);
    t38 = (t36 | t37);
    *((unsigned int *)t35) = t38;
    t39 = (t9 + 4);
    t40 = (t27 + 4);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t39);
    t43 = *((unsigned int *)t40);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB13;

LAB17:    *((unsigned int *)t27) = 1;
    goto LAB20;

LAB19:    t34 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB20;

LAB21:    t47 = *((unsigned int *)t35);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t35) = (t47 | t48);
    t49 = (t9 + 4);
    t50 = (t27 + 4);
    t51 = *((unsigned int *)t49);
    t52 = (~(t51));
    t53 = *((unsigned int *)t9);
    t54 = (t53 & t52);
    t55 = *((unsigned int *)t50);
    t56 = (~(t55));
    t57 = *((unsigned int *)t27);
    t58 = (t57 & t56);
    t59 = (~(t54));
    t60 = (~(t58));
    t61 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t61 & t59);
    t62 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t62 & t60);
    goto LAB23;

LAB24:    *((unsigned int *)t4) = 1;
    goto LAB27;

LAB26:    t69 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t69) = 1;
    goto LAB27;

LAB28:    t75 = ((char*)((ng3)));
    t77 = (t0 + 784U);
    t78 = *((char **)t77);
    memset(t76, 0, 8);
    t77 = (t76 + 4);
    t79 = (t78 + 4);
    t80 = *((unsigned int *)t78);
    t81 = (t80 >> 0);
    *((unsigned int *)t76) = t81;
    t82 = *((unsigned int *)t79);
    t83 = (t82 >> 0);
    *((unsigned int *)t77) = t83;
    t84 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t84 & 67108863U);
    t85 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t85 & 67108863U);
    t87 = (t0 + 692U);
    t88 = *((char **)t87);
    memset(t86, 0, 8);
    t87 = (t86 + 4);
    t89 = (t88 + 4);
    t90 = *((unsigned int *)t88);
    t91 = (t90 >> 28);
    *((unsigned int *)t86) = t91;
    t92 = *((unsigned int *)t89);
    t93 = (t92 >> 28);
    *((unsigned int *)t87) = t93;
    t94 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t94 & 15U);
    t95 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t95 & 15U);
    xsi_vlogtype_concat(t74, 32, 32, 3U, t86, 4, t76, 26, t75, 2);
    goto LAB29;

LAB30:    t102 = (t0 + 1244U);
    t103 = *((char **)t102);
    t102 = ((char*)((ng2)));
    memset(t104, 0, 8);
    if (*((unsigned int *)t103) != *((unsigned int *)t102))
        goto LAB39;

LAB37:    t105 = (t103 + 4);
    t106 = (t102 + 4);
    if (*((unsigned int *)t105) != *((unsigned int *)t106))
        goto LAB39;

LAB38:    *((unsigned int *)t104) = 1;

LAB39:    memset(t101, 0, 8);
    t107 = (t104 + 4);
    t108 = *((unsigned int *)t107);
    t109 = (~(t108));
    t110 = *((unsigned int *)t104);
    t111 = (t110 & t109);
    t112 = (t111 & 1U);
    if (t112 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t107) != 0)
        goto LAB42;

LAB43:    t114 = (t101 + 4);
    t115 = *((unsigned int *)t101);
    t116 = *((unsigned int *)t114);
    t117 = (t115 || t116);
    if (t117 > 0)
        goto LAB44;

LAB45:    t132 = *((unsigned int *)t101);
    t133 = (~(t132));
    t134 = *((unsigned int *)t114);
    t135 = (t133 || t134);
    if (t135 > 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t114) > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t101) > 0)
        goto LAB50;

LAB51:    memcpy(t100, t136, 8);

LAB52:    goto LAB31;

LAB32:    xsi_vlog_unsigned_bit_combine(t3, 32, t74, 32, t100, 32);
    goto LAB36;

LAB34:    memcpy(t3, t74, 8);
    goto LAB36;

LAB40:    *((unsigned int *)t101) = 1;
    goto LAB43;

LAB42:    t113 = (t101 + 4);
    *((unsigned int *)t101) = 1;
    *((unsigned int *)t113) = 1;
    goto LAB43;

LAB44:    t118 = (t0 + 692U);
    t119 = *((char **)t118);
    t118 = ((char*)((ng3)));
    t122 = (t0 + 784U);
    t123 = *((char **)t122);
    memset(t121, 0, 8);
    t122 = (t121 + 4);
    t124 = (t123 + 4);
    t125 = *((unsigned int *)t123);
    t126 = (t125 >> 0);
    *((unsigned int *)t121) = t126;
    t127 = *((unsigned int *)t124);
    t128 = (t127 >> 0);
    *((unsigned int *)t122) = t128;
    t129 = *((unsigned int *)t121);
    *((unsigned int *)t121) = (t129 & 65535U);
    t130 = *((unsigned int *)t122);
    *((unsigned int *)t122) = (t130 & 65535U);
    xsi_vlogtype_concat(t120, 32, 18, 2U, t121, 16, t118, 2);
    memset(t131, 0, 8);
    xsi_vlog_unsigned_add(t131, 32, t119, 32, t120, 32);
    goto LAB45;

LAB46:    t138 = (t0 + 1060U);
    t139 = *((char **)t138);
    t138 = ((char*)((ng2)));
    memset(t140, 0, 8);
    if (*((unsigned int *)t139) != *((unsigned int *)t138))
        goto LAB55;

LAB53:    t141 = (t139 + 4);
    t142 = (t138 + 4);
    if (*((unsigned int *)t141) != *((unsigned int *)t142))
        goto LAB55;

LAB54:    *((unsigned int *)t140) = 1;

LAB55:    memset(t137, 0, 8);
    t143 = (t140 + 4);
    t144 = *((unsigned int *)t143);
    t145 = (~(t144));
    t146 = *((unsigned int *)t140);
    t147 = (t146 & t145);
    t148 = (t147 & 1U);
    if (t148 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t143) != 0)
        goto LAB58;

LAB59:    t150 = (t137 + 4);
    t151 = *((unsigned int *)t137);
    t152 = *((unsigned int *)t150);
    t153 = (t151 || t152);
    if (t153 > 0)
        goto LAB60;

LAB61:    t156 = *((unsigned int *)t137);
    t157 = (~(t156));
    t158 = *((unsigned int *)t150);
    t159 = (t157 || t158);
    if (t159 > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t150) > 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t137) > 0)
        goto LAB66;

LAB67:    memcpy(t136, t161, 8);

LAB68:    goto LAB47;

LAB48:    xsi_vlog_unsigned_bit_combine(t100, 32, t131, 32, t136, 32);
    goto LAB52;

LAB50:    memcpy(t100, t131, 8);
    goto LAB52;

LAB56:    *((unsigned int *)t137) = 1;
    goto LAB59;

LAB58:    t149 = (t137 + 4);
    *((unsigned int *)t137) = 1;
    *((unsigned int *)t149) = 1;
    goto LAB59;

LAB60:    t154 = (t0 + 1152U);
    t155 = *((char **)t154);
    goto LAB61;

LAB62:    t154 = (t0 + 600U);
    t160 = *((char **)t154);
    t154 = ((char*)((ng4)));
    memset(t161, 0, 8);
    xsi_vlog_unsigned_add(t161, 32, t160, 32, t154, 32);
    goto LAB63;

LAB64:    xsi_vlog_unsigned_bit_combine(t136, 32, t155, 32, t161, 32);
    goto LAB68;

LAB66:    memcpy(t136, t155, 8);
    goto LAB68;

}


extern void work_m_00000000004003061746_0757879789_init()
{
	static char *pe[] = {(void *)Cont_35_0};
	xsi_register_didat("work_m_00000000004003061746_0757879789", "isim/test_isim_beh.exe.sim/work/m_00000000004003061746_0757879789.didat");
	xsi_register_executes(pe);
}
