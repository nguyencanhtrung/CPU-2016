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


static void work_a_1388845249_3212880686_p_0(char *t0)
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

LAB0:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 844U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3072);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 776U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1880U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 3124);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 3124);
    t7 = (t3 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t3);
    goto LAB6;

}

static void work_a_1388845249_3212880686_p_1(char *t0)
{
    char t11[16];
    char t12[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    int t28;
    char *t29;
    char *t30;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7, &&LAB8};

LAB0:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 3080);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(81, ng0);
    t4 = (t0 + 960U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 3196);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB10:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 3232);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB4:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 1328U);
    t2 = *((char **)t1);
    t13 = (0 - 31);
    t14 = (t13 * -1);
    t20 = (1U * t14);
    t21 = (0 + t20);
    t1 = (t2 + t21);
    t3 = *((unsigned char *)t1);
    t4 = (t0 + 2212U);
    t5 = *((char **)t4);
    t22 = (1 - 1);
    t23 = (t22 * -1);
    t24 = (1U * t23);
    t25 = (0 + t24);
    t4 = (t5 + t25);
    t6 = *((unsigned char *)t4);
    t9 = ((IEEE_P_2592010699) + 2312);
    t8 = xsi_base_array_concat(t8, t11, t9, (char)99, t3, (char)99, t6, (char)101);
    t10 = (t0 + 2212U);
    t15 = *((char **)t10);
    t10 = (t15 + 0);
    t26 = (1U + 1U);
    memcpy(t10, t8, t26);
    xsi_set_current_line(93, ng0);
    t1 = (t0 + 2212U);
    t2 = *((char **)t1);
    t1 = (t0 + 6892);
    t13 = xsi_mem_cmp(t1, t2, 2U);
    if (t13 == 1)
        goto LAB15;

LAB20:    t5 = (t0 + 6894);
    t22 = xsi_mem_cmp(t5, t2, 2U);
    if (t22 == 1)
        goto LAB16;

LAB21:    t9 = (t0 + 6896);
    t27 = xsi_mem_cmp(t9, t2, 2U);
    if (t27 == 1)
        goto LAB17;

LAB22:    t15 = (t0 + 6898);
    t28 = xsi_mem_cmp(t15, t2, 2U);
    if (t28 == 1)
        goto LAB18;

LAB23:
LAB19:    xsi_set_current_line(107, ng0);

LAB14:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 3196);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 3196);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 1604U);
    t2 = *((char **)t1);
    t1 = (t0 + 3160);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 32U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_delta(t1, 0U, 16U, 0LL);
    xsi_set_current_line(116, ng0);
    t1 = (t0 + 3196);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(119, ng0);
    t1 = (t0 + 1328U);
    t2 = *((char **)t1);
    t1 = (t0 + 6692U);
    t4 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t12, t2, t1, (unsigned char)0);
    t5 = (t12 + 12U);
    t14 = *((unsigned int *)t5);
    t14 = (t14 * 1U);
    t8 = xsi_vhdl_bitvec_sra(t8, t4, t14, 1);
    t9 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t11, t8, t12);
    t10 = (t11 + 12U);
    t20 = *((unsigned int *)t10);
    t20 = (t20 * 1U);
    t3 = (32U != t20);
    if (t3 == 1)
        goto LAB25;

LAB26:    t15 = (t0 + 3160);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    memcpy(t19, t9, 32U);
    xsi_driver_first_trans_fast(t15);
    xsi_set_current_line(120, ng0);
    t1 = (t0 + 2144U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t22 = (t13 + 1);
    t1 = (t0 + 2144U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t22;
    xsi_set_current_line(121, ng0);
    t1 = (t0 + 2144U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t3 = (t13 == 16);
    if (t3 != 0)
        goto LAB27;

LAB29:    xsi_set_current_line(124, ng0);
    t1 = (t0 + 3196);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB28:    goto LAB2;

LAB8:    xsi_set_current_line(128, ng0);
    t1 = (t0 + 3232);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(129, ng0);
    t1 = (t0 + 1328U);
    t2 = *((char **)t1);
    t1 = (t0 + 3340);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 32U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(130, ng0);
    t1 = (t0 + 3196);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB9:    xsi_set_current_line(82, ng0);
    t4 = (t0 + 6874);
    t9 = (t0 + 2212U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    memcpy(t9, t4, 2U);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 6876);
    t4 = (t0 + 684U);
    t5 = *((char **)t4);
    t8 = ((IEEE_P_2592010699) + 2312);
    t9 = (t12 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 15;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t13 = (15 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t14;
    t10 = (t0 + 6660U);
    t4 = xsi_base_array_concat(t4, t11, t8, (char)97, t1, t12, (char)97, t5, t10, (char)101);
    t14 = (16U + 16U);
    t3 = (32U != t14);
    if (t3 == 1)
        goto LAB12;

LAB13:    t15 = (t0 + 3160);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    memcpy(t19, t4, 32U);
    xsi_driver_first_trans_fast(t15);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 3196);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 2144U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    goto LAB10;

LAB12:    xsi_size_not_matching(32U, t14, 0);
    goto LAB13;

LAB15:    xsi_set_current_line(95, ng0);
    t17 = (t0 + 3268);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    t29 = (t19 + 32U);
    t30 = *((char **)t29);
    *((unsigned char *)t30) = (unsigned char)2;
    xsi_driver_first_trans_fast(t17);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 6900);
    t4 = (t0 + 3304);
    t5 = (t4 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    goto LAB14;

LAB16:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 3268);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 3304);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 32U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

LAB17:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 3268);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 3304);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 32U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

LAB18:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 3268);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 6916);
    t4 = (t0 + 3304);
    t5 = (t4 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    goto LAB14;

LAB24:;
LAB25:    xsi_size_not_matching(32U, t20, 0);
    goto LAB26;

LAB27:    xsi_set_current_line(122, ng0);
    t1 = (t0 + 3196);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 32U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB28;

}


extern void work_a_1388845249_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1388845249_3212880686_p_0,(void *)work_a_1388845249_3212880686_p_1};
	xsi_register_didat("work_a_1388845249_3212880686", "isim/fixedpoint_multiplier_module_isim_beh.exe.sim/work/a_1388845249_3212880686.didat");
	xsi_register_executes(pe);
}
