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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ctnguyen/Works/CPU-2016/tested_src/top_CPU/fixedpoint_multiplier_module.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_2592010699_sub_3293060193_503743352(char *, char *, char *, char *, unsigned char );
char *ieee_p_2592010699_sub_393209765_503743352(char *, char *, char *, char *);


static void work_a_0661895730_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 844U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3096);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 776U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 960U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1972U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 3148);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t1);

LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 3148);
    t7 = (t3 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t3);
    goto LAB6;

LAB8:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 3148);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB9;

}

static void work_a_0661895730_3212880686_p_1(char *t0)
{
    char t9[16];
    char t10[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned char t24;
    unsigned int t25;
    unsigned char t26;
    int t27;
    int t28;
    char *t29;
    char *t30;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7, &&LAB8, &&LAB9, &&LAB10};

LAB0:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 2064U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 3104);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(77, ng0);
    t4 = (t0 + 3184);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 3220);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 7048);
    t4 = (t0 + 3256);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    goto LAB2;

LAB4:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 7064);
    t4 = (t0 + 3292);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 7066);
    t4 = (t0 + 684U);
    t5 = *((char **)t4);
    t6 = ((IEEE_P_2592010699) + 2312);
    t7 = (t10 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 15;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t11 = (15 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t12;
    t8 = (t0 + 6800U);
    t4 = xsi_base_array_concat(t4, t9, t6, (char)97, t1, t10, (char)97, t5, t8, (char)101);
    t12 = (16U + 16U);
    t3 = (32U != t12);
    if (t3 == 1)
        goto LAB11;

LAB12:    t13 = (t0 + 3328);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    memcpy(t17, t4, 32U);
    xsi_driver_first_trans_fast(t13);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 3184);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 2236U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 3220);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t12 = (31 - 31);
    t18 = (t12 * 1U);
    t19 = (0 + t18);
    t1 = (t2 + t19);
    t4 = (t0 + 3256);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t11 = (0 - 31);
    t12 = (t11 * -1);
    t18 = (1U * t12);
    t19 = (0 + t18);
    t1 = (t2 + t19);
    t3 = *((unsigned char *)t1);
    t4 = (t0 + 1328U);
    t5 = *((char **)t4);
    t20 = (1 - 1);
    t21 = (t20 * -1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t4 = (t5 + t23);
    t24 = *((unsigned char *)t4);
    t7 = ((IEEE_P_2592010699) + 2312);
    t6 = xsi_base_array_concat(t6, t9, t7, (char)99, t3, (char)99, t24, (char)101);
    t25 = (1U + 1U);
    t26 = (2U != t25);
    if (t26 == 1)
        goto LAB13;

LAB14:    t8 = (t0 + 3292);
    t13 = (t8 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    memcpy(t16, t6, 2U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 3184);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 1328U);
    t2 = *((char **)t1);
    t1 = (t0 + 7082);
    t11 = xsi_mem_cmp(t1, t2, 2U);
    if (t11 == 1)
        goto LAB16;

LAB21:    t5 = (t0 + 7084);
    t20 = xsi_mem_cmp(t5, t2, 2U);
    if (t20 == 1)
        goto LAB17;

LAB22:    t7 = (t0 + 7086);
    t27 = xsi_mem_cmp(t7, t2, 2U);
    if (t27 == 1)
        goto LAB18;

LAB23:    t13 = (t0 + 7088);
    t28 = xsi_mem_cmp(t13, t2, 2U);
    if (t28 == 1)
        goto LAB19;

LAB24:
LAB20:    xsi_set_current_line(116, ng0);

LAB15:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 3184);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(121, ng0);
    t1 = (t0 + 3184);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB8:    xsi_set_current_line(124, ng0);
    t1 = (t0 + 1696U);
    t2 = *((char **)t1);
    t1 = (t0 + 3328);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 16U);
    xsi_driver_first_trans_delta(t1, 0U, 16U, 0LL);
    xsi_set_current_line(125, ng0);
    t1 = (t0 + 3184);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB9:    xsi_set_current_line(128, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t1 = (t0 + 6832U);
    t4 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t10, t2, t1, (unsigned char)0);
    t5 = (t10 + 12U);
    t12 = *((unsigned int *)t5);
    t12 = (t12 * 1U);
    t6 = xsi_vhdl_bitvec_sra(t6, t4, t12, 1);
    t7 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t9, t6, t10);
    t8 = (t9 + 12U);
    t18 = *((unsigned int *)t8);
    t18 = (t18 * 1U);
    t3 = (32U != t18);
    if (t3 == 1)
        goto LAB26;

LAB27:    t13 = (t0 + 3328);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    memcpy(t17, t7, 32U);
    xsi_driver_first_trans_fast(t13);
    xsi_set_current_line(129, ng0);
    t1 = (t0 + 2236U);
    t2 = *((char **)t1);
    t11 = *((int *)t2);
    t20 = (t11 + 1);
    t1 = (t0 + 2236U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t20;
    xsi_set_current_line(130, ng0);
    t1 = (t0 + 2236U);
    t2 = *((char **)t1);
    t11 = *((int *)t2);
    t3 = (t11 == 16);
    if (t3 != 0)
        goto LAB28;

LAB30:    xsi_set_current_line(133, ng0);
    t1 = (t0 + 3184);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB29:    goto LAB2;

LAB10:    xsi_set_current_line(137, ng0);
    t1 = (t0 + 3220);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(138, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t1 = (t0 + 3436);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(139, ng0);
    t1 = (t0 + 3184);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB11:    xsi_size_not_matching(32U, t12, 0);
    goto LAB12;

LAB13:    xsi_size_not_matching(2U, t25, 0);
    goto LAB14;

LAB16:    xsi_set_current_line(104, ng0);
    t15 = (t0 + 3364);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    t29 = (t17 + 32U);
    t30 = *((char **)t29);
    *((unsigned char *)t30) = (unsigned char)2;
    xsi_driver_first_trans_fast(t15);
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 7090);
    t4 = (t0 + 3400);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    goto LAB15;

LAB17:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 3364);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 3400);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 16U);
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB18:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 3364);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(111, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 3400);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 16U);
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB19:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 3364);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(114, ng0);
    t1 = (t0 + 7106);
    t4 = (t0 + 3400);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    goto LAB15;

LAB25:;
LAB26:    xsi_size_not_matching(32U, t18, 0);
    goto LAB27;

LAB28:    xsi_set_current_line(131, ng0);
    t1 = (t0 + 3184);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    goto LAB29;

}


extern void work_a_0661895730_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0661895730_3212880686_p_0,(void *)work_a_0661895730_3212880686_p_1};
	xsi_register_didat("work_a_0661895730_3212880686", "isim/tb_fixedpoint_multiplier_module_isim_beh.exe.sim/work/a_0661895730_3212880686.didat");
	xsi_register_executes(pe);
}
