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


static void work_a_1530544809_3212880686_p_0(char *t0)
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

LAB0:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 844U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3164);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 776U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 960U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 1972U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 3216);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t1);

LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 3216);
    t7 = (t3 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t3);
    goto LAB6;

LAB8:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 3216);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB9;

}

static void work_a_1530544809_3212880686_p_1(char *t0)
{
    char t18[16];
    char t30[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned char t17;
    unsigned int t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    int t25;
    int t26;
    char *t27;
    char *t28;
    char *t29;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7, &&LAB8, &&LAB9, &&LAB10};

LAB0:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 2064U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 3172);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(79, ng0);
    t4 = (t0 + 3252);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 3288);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(81, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t2 = t1;
    memset(t2, (unsigned char)2, 16U);
    t4 = (t0 + 3324);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    goto LAB2;

LAB4:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 7216);
    t4 = (t0 + 3360);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(85, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t2 = t1;
    memset(t2, (unsigned char)2, 16U);
    t4 = (t0 + 3396);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 16U);
    xsi_driver_first_trans_delta(t4, 0U, 16U, 0LL);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t1 = (t0 + 3396);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 16U);
    xsi_driver_first_trans_delta(t1, 16U, 16U, 0LL);
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 3252);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 2304U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 3288);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t9 = (2 * 16);
    t10 = (t9 - 1);
    t11 = (31 - t10);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    t4 = (t0 + 3324);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t9 = (0 - 31);
    t11 = (t9 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    t3 = *((unsigned char *)t1);
    t4 = (t0 + 1328U);
    t5 = *((char **)t4);
    t10 = (1 - 1);
    t14 = (t10 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t4 = (t5 + t16);
    t17 = *((unsigned char *)t4);
    t7 = ((IEEE_P_2592010699) + 2312);
    t6 = xsi_base_array_concat(t6, t18, t7, (char)99, t3, (char)99, t17, (char)101);
    t19 = (1U + 1U);
    t20 = (2U != t19);
    if (t20 == 1)
        goto LAB11;

LAB12:    t8 = (t0 + 3360);
    t21 = (t8 + 32U);
    t22 = *((char **)t21);
    t23 = (t22 + 32U);
    t24 = *((char **)t23);
    memcpy(t24, t6, 2U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 3252);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 1328U);
    t2 = *((char **)t1);
    t1 = (t0 + 7218);
    t9 = xsi_mem_cmp(t1, t2, 2U);
    if (t9 == 1)
        goto LAB14;

LAB19:    t5 = (t0 + 7220);
    t10 = xsi_mem_cmp(t5, t2, 2U);
    if (t10 == 1)
        goto LAB15;

LAB20:    t7 = (t0 + 7222);
    t25 = xsi_mem_cmp(t7, t2, 2U);
    if (t25 == 1)
        goto LAB16;

LAB21:    t21 = (t0 + 7224);
    t26 = xsi_mem_cmp(t21, t2, 2U);
    if (t26 == 1)
        goto LAB17;

LAB22:
LAB18:    xsi_set_current_line(119, ng0);

LAB13:    xsi_set_current_line(121, ng0);
    t1 = (t0 + 3252);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(124, ng0);
    t1 = (t0 + 3252);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB8:    xsi_set_current_line(127, ng0);
    t1 = (t0 + 1696U);
    t2 = *((char **)t1);
    t1 = (t0 + 3396);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 16U);
    xsi_driver_first_trans_delta(t1, 0U, 16U, 0LL);
    xsi_set_current_line(128, ng0);
    t1 = (t0 + 3252);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB9:    xsi_set_current_line(131, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t1 = (t0 + 6996U);
    t4 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t30, t2, t1, (unsigned char)0);
    t5 = (t30 + 12U);
    t11 = *((unsigned int *)t5);
    t11 = (t11 * 1U);
    t6 = xsi_vhdl_bitvec_sra(t6, t4, t11, 1);
    t7 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t18, t6, t30);
    t8 = (t18 + 12U);
    t12 = *((unsigned int *)t8);
    t12 = (t12 * 1U);
    t3 = (32U != t12);
    if (t3 == 1)
        goto LAB24;

LAB25:    t21 = (t0 + 3396);
    t22 = (t21 + 32U);
    t23 = *((char **)t22);
    t24 = (t23 + 32U);
    t27 = *((char **)t24);
    memcpy(t27, t7, 32U);
    xsi_driver_first_trans_fast(t21);
    xsi_set_current_line(132, ng0);
    t1 = (t0 + 2304U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t10 = (t9 + 1);
    t1 = (t0 + 2304U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t10;
    xsi_set_current_line(133, ng0);
    t1 = (t0 + 2304U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t3 = (t9 == 16);
    if (t3 != 0)
        goto LAB26;

LAB28:    xsi_set_current_line(136, ng0);
    t1 = (t0 + 3252);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB27:    goto LAB2;

LAB10:    xsi_set_current_line(140, ng0);
    t1 = (t0 + 3288);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(141, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t1 = (t0 + 3504);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(142, ng0);
    t1 = (t0 + 3252);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB11:    xsi_size_not_matching(2U, t19, 0);
    goto LAB12;

LAB14:    xsi_set_current_line(107, ng0);
    t23 = (t0 + 3432);
    t24 = (t23 + 32U);
    t27 = *((char **)t24);
    t28 = (t27 + 32U);
    t29 = *((char **)t28);
    *((unsigned char *)t29) = (unsigned char)2;
    xsi_driver_first_trans_fast(t23);
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 7226);
    t4 = (t0 + 3468);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    goto LAB13;

LAB15:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 3432);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(111, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 3468);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 16U);
    xsi_driver_first_trans_fast(t1);
    goto LAB13;

LAB16:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 3432);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(114, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 3468);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 16U);
    xsi_driver_first_trans_fast(t1);
    goto LAB13;

LAB17:    xsi_set_current_line(116, ng0);
    t1 = (t0 + 3432);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(117, ng0);
    t1 = (t0 + 7242);
    t4 = (t0 + 3468);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    goto LAB13;

LAB23:;
LAB24:    xsi_size_not_matching(32U, t12, 0);
    goto LAB25;

LAB26:    xsi_set_current_line(134, ng0);
    t1 = (t0 + 3252);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    goto LAB27;

}


extern void work_a_1530544809_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1530544809_3212880686_p_0,(void *)work_a_1530544809_3212880686_p_1};
	xsi_register_didat("work_a_1530544809_3212880686", "isim/tb_fixedpoint_multiplier_module_isim_beh.exe.sim/work/a_1530544809_3212880686.didat");
	xsi_register_executes(pe);
}
