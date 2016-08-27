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
static const char *ng0 = "C:/Users/nimer/Documents/ControlUnit/FPGA/ControlUnit/ControlUnit.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {12U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};
static unsigned int ng11[] = {9U, 0U};
static unsigned int ng12[] = {10U, 0U};
static unsigned int ng13[] = {11U, 0U};
static unsigned int ng14[] = {8U, 0U};
static unsigned int ng15[] = {13U, 0U};
static unsigned int ng16[] = {14U, 0U};
static unsigned int ng17[] = {15U, 0U};
static unsigned int ng18[] = {16U, 0U};
static unsigned int ng19[] = {17U, 0U};



static void Always_39_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    int t13;
    int t14;
    int t15;
    char *t16;
    int t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    char *t22;
    char *t23;

LAB0:    t1 = (t0 + 3804U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 4000);
    *((int *)t2) = 1;
    t3 = (t0 + 3832);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2268);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2452);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2040U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 7U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 7U);
    t5 = (t0 + 2636);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 3);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2820);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2912);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3004);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3096);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3188);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3280);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2040U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t13 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t13 == 1)
        goto LAB9;

LAB10:    t4 = ((char*)((ng5)));
    t14 = xsi_vlog_unsigned_case_compare(t3, 5, t4, 5);
    if (t14 == 1)
        goto LAB11;

LAB12:    t5 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_compare(t3, 5, t5, 5);
    if (t15 == 1)
        goto LAB13;

LAB14:    t16 = ((char*)((ng7)));
    t17 = xsi_vlog_unsigned_case_compare(t3, 5, t16, 5);
    if (t17 == 1)
        goto LAB15;

LAB16:    t18 = ((char*)((ng8)));
    t19 = xsi_vlog_unsigned_case_compare(t3, 5, t18, 5);
    if (t19 == 1)
        goto LAB17;

LAB18:    t20 = ((char*)((ng9)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 5, t20, 5);
    if (t21 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t13 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t13 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng12)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t13 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng13)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t13 == 1)
        goto LAB27;

LAB28:    t4 = ((char*)((ng14)));
    t14 = xsi_vlog_unsigned_case_compare(t3, 5, t4, 5);
    if (t14 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng15)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t13 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng16)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t13 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng17)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t13 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng18)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t13 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng19)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t13 == 1)
        goto LAB39;

LAB40:
LAB41:    goto LAB2;

LAB7:    xsi_set_current_line(56, ng0);

LAB42:    xsi_set_current_line(57, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 2268);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB41;

LAB9:    goto LAB7;

LAB11:    goto LAB7;

LAB13:    goto LAB7;

LAB15:    goto LAB7;

LAB17:    goto LAB7;

LAB19:    xsi_set_current_line(62, ng0);

LAB43:    xsi_set_current_line(63, ng0);
    t22 = ((char*)((ng3)));
    t23 = (t0 + 2268);
    xsi_vlogvar_assign_value(t23, t22, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2360);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB41;

LAB21:    xsi_set_current_line(68, ng0);

LAB44:    xsi_set_current_line(69, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 2268);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2452);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB41;

LAB23:    xsi_set_current_line(74, ng0);

LAB45:    xsi_set_current_line(75, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 2268);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2544);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB41;

LAB25:    xsi_set_current_line(80, ng0);

LAB46:    xsi_set_current_line(81, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 2268);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2544);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB41;

LAB27:    goto LAB25;

LAB29:    xsi_set_current_line(87, ng0);
    t5 = ((char*)((ng3)));
    t16 = (t0 + 2820);
    xsi_vlogvar_assign_value(t16, t5, 0, 0, 1);
    goto LAB41;

LAB31:    xsi_set_current_line(89, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 2912);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB41;

LAB33:    xsi_set_current_line(91, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 3004);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB41;

LAB35:    xsi_set_current_line(93, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 3188);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB41;

LAB37:    xsi_set_current_line(95, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 3096);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB41;

LAB39:    xsi_set_current_line(97, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 3280);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB41;

}


extern void work_m_00000000002496334340_1938225339_init()
{
	static char *pe[] = {(void *)Always_39_0};
	xsi_register_didat("work_m_00000000002496334340_1938225339", "isim/ControlUnit_isim_beh.exe.sim/work/m_00000000002496334340_1938225339.didat");
	xsi_register_executes(pe);
}
