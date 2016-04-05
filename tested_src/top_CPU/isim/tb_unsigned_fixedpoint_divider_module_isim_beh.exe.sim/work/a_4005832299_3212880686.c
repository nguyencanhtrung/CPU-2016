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
static const char *ng0 = "/home/ctnguyen/Works/CPU-2016/tested_src/top_CPU/unsigned_fixedpoint_divider_module.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_2592010699_sub_3293060193_503743352(char *, char *, char *, char *, unsigned char );
char *ieee_p_2592010699_sub_393209765_503743352(char *, char *, char *, char *);


static void work_a_4005832299_3212880686_p_0(char *t0)
{
    char t12[16];
    char t13[16];
    char t23[16];
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
    char *t11;
    int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    int t22;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    static char *nl0[] = {&&LAB9, &&LAB10, &&LAB11, &&LAB12, &&LAB13, &&LAB14, &&LAB15, &&LAB16, &&LAB17};

LAB0:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1212U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 2960);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 1144U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 2064U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (char *)((nl0) + t2);
    goto **((char **)t1);

LAB5:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 3004);
    t7 = (t3 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 3040);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(69, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t3 = t1;
    memset(t3, (unsigned char)2, 16U);
    t4 = (t0 + 3076);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(70, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t3 = t1;
    memset(t3, (unsigned char)2, 16U);
    t4 = (t0 + 3112);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(71, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t3 = t1;
    memset(t3, (unsigned char)2, 32U);
    t4 = (t0 + 3148);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(72, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t3 = t1;
    memset(t3, (unsigned char)2, 16U);
    t4 = (t0 + 3184);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(73, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t3 = t1;
    memset(t3, (unsigned char)2, 16U);
    t4 = (t0 + 3220);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(74, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t3 = t1;
    memset(t3, (unsigned char)2, 16U);
    t4 = (t0 + 3256);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 3292);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 3328);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 2236U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    goto LAB6;

LAB8:    goto LAB3;

LAB9:    xsi_set_current_line(81, ng0);
    t4 = (t0 + 960U);
    t7 = *((char **)t4);
    t5 = *((unsigned char *)t7);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 3004);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB20:    goto LAB8;

LAB10:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 1420U);
    t3 = *((char **)t1);
    t1 = (t0 + 3220);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 1328U);
    t3 = *((char **)t1);
    t1 = (t0 + 6848U);
    t4 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t13, t3, t1, (unsigned char)0);
    t7 = (t13 + 12U);
    t15 = *((unsigned int *)t7);
    t15 = (t15 * 1U);
    t8 = xsi_vhdl_bitvec_sll(t8, t4, t15, 1);
    t9 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t12, t8, t13);
    t10 = (t12 + 12U);
    t20 = *((unsigned int *)t10);
    t20 = (t20 * 1U);
    t2 = (32U != t20);
    if (t2 == 1)
        goto LAB24;

LAB25:    t11 = (t0 + 3148);
    t16 = (t11 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    memcpy(t19, t9, 32U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(93, ng0);
    t1 = (t0 + 3004);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB11:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 1328U);
    t3 = *((char **)t1);
    t15 = (31 - 31);
    t20 = (t15 * 1U);
    t21 = (0 + t20);
    t1 = (t3 + t21);
    t4 = (t0 + 3256);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(97, ng0);
    t1 = (t0 + 3004);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB12:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 3004);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB13:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 1696U);
    t3 = *((char **)t1);
    t14 = (15 - 15);
    t15 = (t14 * -1);
    t20 = (1U * t15);
    t21 = (0 + t20);
    t1 = (t3 + t21);
    t2 = *((unsigned char *)t1);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB26;

LAB28:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 1696U);
    t3 = *((char **)t1);
    t1 = (t0 + 3148);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_delta(t1, 0U, 16U, 0LL);
    xsi_set_current_line(107, ng0);
    t1 = (t0 + 3004);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);

LAB27:    goto LAB8;

LAB14:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 1328U);
    t3 = *((char **)t1);
    t1 = (t0 + 6848U);
    t4 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t13, t3, t1, (unsigned char)0);
    t7 = (t13 + 12U);
    t15 = *((unsigned int *)t7);
    t15 = (t15 * 1U);
    t8 = xsi_vhdl_bitvec_sll(t8, t4, t15, 1);
    t9 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t12, t8, t13);
    t10 = (t12 + 12U);
    t20 = *((unsigned int *)t10);
    t20 = (t20 * 1U);
    t2 = (32U != t20);
    if (t2 == 1)
        goto LAB29;

LAB30:    t11 = (t0 + 3148);
    t16 = (t11 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    memcpy(t19, t9, 32U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(112, ng0);
    t1 = (t0 + 3148);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 31U, 1, 0LL);
    xsi_set_current_line(113, ng0);
    t1 = (t0 + 3004);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB15:    xsi_set_current_line(116, ng0);
    t1 = (t0 + 1328U);
    t3 = *((char **)t1);
    t1 = (t0 + 6848U);
    t4 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t13, t3, t1, (unsigned char)0);
    t7 = (t13 + 12U);
    t15 = *((unsigned int *)t7);
    t15 = (t15 * 1U);
    t8 = xsi_vhdl_bitvec_sll(t8, t4, t15, 1);
    t9 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t12, t8, t13);
    t10 = (t12 + 12U);
    t20 = *((unsigned int *)t10);
    t20 = (t20 * 1U);
    t2 = (32U != t20);
    if (t2 == 1)
        goto LAB31;

LAB32:    t11 = (t0 + 3148);
    t16 = (t11 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    memcpy(t19, t9, 32U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(117, ng0);
    t1 = (t0 + 3004);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB16:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 2236U);
    t3 = *((char **)t1);
    t14 = *((int *)t3);
    t22 = (t14 + 1);
    t1 = (t0 + 2236U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t22;
    xsi_set_current_line(121, ng0);
    t1 = (t0 + 2236U);
    t3 = *((char **)t1);
    t14 = *((int *)t3);
    t2 = (t14 > 17);
    if (t2 != 0)
        goto LAB33;

LAB35:    xsi_set_current_line(125, ng0);
    t1 = (t0 + 3004);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB34:    goto LAB8;

LAB17:    xsi_set_current_line(129, ng0);
    t1 = (t0 + 1328U);
    t3 = *((char **)t1);
    t15 = (31 - 15);
    t20 = (t15 * 1U);
    t21 = (0 + t20);
    t1 = (t3 + t21);
    t4 = (t0 + 3076);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(130, ng0);
    t1 = (t0 + 1328U);
    t3 = *((char **)t1);
    t15 = (31 - 31);
    t20 = (t15 * 1U);
    t21 = (0 + t20);
    t1 = (t3 + t21);
    t4 = (t23 + 0U);
    t7 = (t4 + 0U);
    *((int *)t7) = 31;
    t7 = (t4 + 4U);
    *((int *)t7) = 16;
    t7 = (t4 + 8U);
    *((int *)t7) = -1;
    t14 = (16 - 31);
    t24 = (t14 * -1);
    t24 = (t24 + 1);
    t7 = (t4 + 12U);
    *((unsigned int *)t7) = t24;
    t7 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t13, t1, t23, (unsigned char)0);
    t8 = (t13 + 12U);
    t24 = *((unsigned int *)t8);
    t24 = (t24 * 1U);
    t9 = xsi_vhdl_bitvec_srl(t9, t7, t24, 1);
    t10 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t12, t9, t13);
    t11 = (t12 + 12U);
    t25 = *((unsigned int *)t11);
    t25 = (t25 * 1U);
    t2 = (16U != t25);
    if (t2 == 1)
        goto LAB36;

LAB37:    t16 = (t0 + 3112);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 32U);
    t26 = *((char **)t19);
    memcpy(t26, t10, 16U);
    xsi_driver_first_trans_fast_port(t16);
    xsi_set_current_line(131, ng0);
    t1 = (t0 + 3040);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB8;

LAB18:    xsi_set_current_line(132, ng0);
    goto LAB8;

LAB19:    xsi_set_current_line(82, ng0);
    t4 = (t0 + 3040);
    t8 = (t4 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 7076);
    t4 = (t0 + 592U);
    t7 = *((char **)t4);
    t8 = ((IEEE_P_2592010699) + 2312);
    t9 = (t13 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 15;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t14 = (15 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t15;
    t10 = (t0 + 6784U);
    t4 = xsi_base_array_concat(t4, t12, t8, (char)97, t1, t13, (char)97, t7, t10, (char)101);
    t15 = (16U + 16U);
    t2 = (32U != t15);
    if (t2 == 1)
        goto LAB22;

LAB23:    t11 = (t0 + 3148);
    t16 = (t11 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    memcpy(t19, t4, 32U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 684U);
    t3 = *((char **)t1);
    t1 = (t0 + 3184);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 3004);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB20;

LAB22:    xsi_size_not_matching(32U, t15, 0);
    goto LAB23;

LAB24:    xsi_size_not_matching(32U, t20, 0);
    goto LAB25;

LAB26:    xsi_set_current_line(104, ng0);
    t4 = (t0 + 3004);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)6;
    xsi_driver_first_trans_fast(t4);
    goto LAB27;

LAB29:    xsi_size_not_matching(32U, t20, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(32U, t20, 0);
    goto LAB32;

LAB33:    xsi_set_current_line(122, ng0);
    t1 = (t0 + 3004);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)8;
    xsi_driver_first_trans_fast(t1);
    goto LAB34;

LAB36:    xsi_size_not_matching(16U, t25, 0);
    goto LAB37;

}


extern void work_a_4005832299_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4005832299_3212880686_p_0};
	xsi_register_didat("work_a_4005832299_3212880686", "isim/tb_unsigned_fixedpoint_divider_module_isim_beh.exe.sim/work/a_4005832299_3212880686.didat");
	xsi_register_executes(pe);
}
