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
static const char *ng0 = "/home/waseemh/Xilinx_Proj/CPU-2016/tested_src/top_CPU/unsigned_fixedpoint_divider_module.vhd";
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_12303121079769504865_503743352(char *, char *, char *, char *, unsigned char );
char *ieee_p_2592010699_sub_24166140421859237_503743352(char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_4005832299_3212880686_p_0(char *t0)
{
    char t11[16];
    char t13[16];
    char t27[16];
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
    char *t12;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    int t26;
    unsigned int t28;
    unsigned int t29;
    static char *nl0[] = {&&LAB9, &&LAB10, &&LAB11, &&LAB12, &&LAB13, &&LAB14, &&LAB15, &&LAB16, &&LAB17};

LAB0:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 2112U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5184);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 1992U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 3592U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (char *)((nl0) + t2);
    goto **((char **)t1);

LAB5:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 5264);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 5328);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(69, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t3 = t1;
    memset(t3, (unsigned char)2, 16U);
    t4 = (t0 + 5392);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(70, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t3 = t1;
    memset(t3, (unsigned char)2, 16U);
    t4 = (t0 + 5456);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(71, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t3 = t1;
    memset(t3, (unsigned char)2, 32U);
    t4 = (t0 + 5520);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(72, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t3 = t1;
    memset(t3, (unsigned char)2, 16U);
    t4 = (t0 + 5584);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(73, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t3 = t1;
    memset(t3, (unsigned char)2, 16U);
    t4 = (t0 + 5648);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(74, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t3 = t1;
    memset(t3, (unsigned char)2, 16U);
    t4 = (t0 + 5712);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 5776);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 5840);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 3888U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    goto LAB6;

LAB8:    goto LAB3;

LAB9:    xsi_set_current_line(81, ng0);
    t4 = (t0 + 1672U);
    t7 = *((char **)t4);
    t5 = *((unsigned char *)t7);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 5328);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 3888U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 5264);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB20:    goto LAB8;

LAB10:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t1 = (t0 + 5648);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(93, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t1 = (t0 + 9944U);
    t4 = ieee_p_2592010699_sub_12303121079769504865_503743352(IEEE_P_2592010699, t13, t3, t1, (unsigned char)0);
    t7 = (t13 + 12U);
    t17 = *((unsigned int *)t7);
    t17 = (t17 * 1U);
    t8 = xsi_vhdl_bitvec_sll(t8, t4, t17, 1);
    t9 = ieee_p_2592010699_sub_24166140421859237_503743352(IEEE_P_2592010699, t11, t8, t13);
    t10 = (t11 + 12U);
    t24 = *((unsigned int *)t10);
    t24 = (t24 * 1U);
    t2 = (32U != t24);
    if (t2 == 1)
        goto LAB24;

LAB25:    t12 = (t0 + 5520);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t19 = (t15 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t9, 32U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(94, ng0);
    t1 = (t0 + 5264);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB11:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t17 = (31 - 31);
    t24 = (t17 * 1U);
    t25 = (0 + t24);
    t1 = (t3 + t25);
    t4 = (t0 + 5712);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 5264);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB12:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 5264);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB13:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 2952U);
    t3 = *((char **)t1);
    t16 = (15 - 15);
    t17 = (t16 * -1);
    t24 = (1U * t17);
    t25 = (0 + t24);
    t1 = (t3 + t25);
    t2 = *((unsigned char *)t1);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB26;

LAB28:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 2952U);
    t3 = *((char **)t1);
    t1 = (t0 + 5520);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_delta(t1, 0U, 16U, 0LL);
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 5264);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);

LAB27:    goto LAB8;

LAB14:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t1 = (t0 + 9944U);
    t4 = ieee_p_2592010699_sub_12303121079769504865_503743352(IEEE_P_2592010699, t13, t3, t1, (unsigned char)0);
    t7 = (t13 + 12U);
    t17 = *((unsigned int *)t7);
    t17 = (t17 * 1U);
    t8 = xsi_vhdl_bitvec_sll(t8, t4, t17, 1);
    t9 = ieee_p_2592010699_sub_24166140421859237_503743352(IEEE_P_2592010699, t11, t8, t13);
    t10 = (t11 + 12U);
    t24 = *((unsigned int *)t10);
    t24 = (t24 * 1U);
    t2 = (32U != t24);
    if (t2 == 1)
        goto LAB29;

LAB30:    t12 = (t0 + 5520);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t19 = (t15 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t9, 32U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(113, ng0);
    t1 = (t0 + 5520);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 31U, 1, 0LL);
    xsi_set_current_line(114, ng0);
    t1 = (t0 + 5264);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB15:    xsi_set_current_line(117, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t1 = (t0 + 9944U);
    t4 = ieee_p_2592010699_sub_12303121079769504865_503743352(IEEE_P_2592010699, t13, t3, t1, (unsigned char)0);
    t7 = (t13 + 12U);
    t17 = *((unsigned int *)t7);
    t17 = (t17 * 1U);
    t8 = xsi_vhdl_bitvec_sll(t8, t4, t17, 1);
    t9 = ieee_p_2592010699_sub_24166140421859237_503743352(IEEE_P_2592010699, t11, t8, t13);
    t10 = (t11 + 12U);
    t24 = *((unsigned int *)t10);
    t24 = (t24 * 1U);
    t2 = (32U != t24);
    if (t2 == 1)
        goto LAB31;

LAB32:    t12 = (t0 + 5520);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t19 = (t15 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t9, 32U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(118, ng0);
    t1 = (t0 + 5264);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB16:    xsi_set_current_line(121, ng0);
    t1 = (t0 + 3888U);
    t3 = *((char **)t1);
    t16 = *((int *)t3);
    t26 = (t16 + 1);
    t1 = (t0 + 3888U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t26;
    xsi_set_current_line(122, ng0);
    t1 = (t0 + 3888U);
    t3 = *((char **)t1);
    t16 = *((int *)t3);
    t2 = (t16 > 15);
    if (t2 != 0)
        goto LAB33;

LAB35:    xsi_set_current_line(126, ng0);
    t1 = (t0 + 5264);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB34:    goto LAB8;

LAB17:    xsi_set_current_line(130, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t17 = (31 - 15);
    t24 = (t17 * 1U);
    t25 = (0 + t24);
    t1 = (t3 + t25);
    t4 = (t0 + 5392);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(131, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t17 = (31 - 31);
    t24 = (t17 * 1U);
    t25 = (0 + t24);
    t1 = (t3 + t25);
    t4 = (t27 + 0U);
    t7 = (t4 + 0U);
    *((int *)t7) = 31;
    t7 = (t4 + 4U);
    *((int *)t7) = 16;
    t7 = (t4 + 8U);
    *((int *)t7) = -1;
    t16 = (16 - 31);
    t28 = (t16 * -1);
    t28 = (t28 + 1);
    t7 = (t4 + 12U);
    *((unsigned int *)t7) = t28;
    t7 = ieee_p_2592010699_sub_12303121079769504865_503743352(IEEE_P_2592010699, t13, t1, t27, (unsigned char)0);
    t8 = (t13 + 12U);
    t28 = *((unsigned int *)t8);
    t28 = (t28 * 1U);
    t9 = xsi_vhdl_bitvec_srl(t9, t7, t28, 1);
    t10 = ieee_p_2592010699_sub_24166140421859237_503743352(IEEE_P_2592010699, t11, t9, t13);
    t12 = (t11 + 12U);
    t29 = *((unsigned int *)t12);
    t29 = (t29 * 1U);
    t2 = (16U != t29);
    if (t2 == 1)
        goto LAB36;

LAB37:    t14 = (t0 + 5456);
    t15 = (t14 + 56U);
    t19 = *((char **)t15);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t10, 16U);
    xsi_driver_first_trans_fast_port(t14);
    xsi_set_current_line(132, ng0);
    t1 = (t0 + 5328);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(133, ng0);
    t1 = (t0 + 5264);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB18:    xsi_set_current_line(134, ng0);
    goto LAB8;

LAB19:    xsi_set_current_line(82, ng0);
    t4 = (t0 + 10172);
    t9 = (t0 + 1032U);
    t10 = *((char **)t9);
    t12 = ((IEEE_P_2592010699) + 4000);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 0;
    t15 = (t14 + 4U);
    *((int *)t15) = 15;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (15 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t15 = (t0 + 9880U);
    t9 = xsi_base_array_concat(t9, t11, t12, (char)97, t4, t13, (char)97, t10, t15, (char)101);
    t17 = (16U + 16U);
    t18 = (32U != t17);
    if (t18 == 1)
        goto LAB22;

LAB23:    t19 = (t0 + 5520);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t9, 32U);
    xsi_driver_first_trans_fast(t19);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = (t0 + 5584);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 5264);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB20;

LAB22:    xsi_size_not_matching(32U, t17, 0);
    goto LAB23;

LAB24:    xsi_size_not_matching(32U, t24, 0);
    goto LAB25;

LAB26:    xsi_set_current_line(105, ng0);
    t4 = (t0 + 5264);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)6;
    xsi_driver_first_trans_fast(t4);
    goto LAB27;

LAB29:    xsi_size_not_matching(32U, t24, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(32U, t24, 0);
    goto LAB32;

LAB33:    xsi_set_current_line(123, ng0);
    t1 = (t0 + 5264);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)8;
    xsi_driver_first_trans_fast(t1);
    goto LAB34;

LAB36:    xsi_size_not_matching(16U, t29, 0);
    goto LAB37;

}


extern void work_a_4005832299_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4005832299_3212880686_p_0};
	xsi_register_didat("work_a_4005832299_3212880686", "isim/tb_unsigned_fixedpoint_divider_module_isim_beh.exe.sim/work/a_4005832299_3212880686.didat");
	xsi_register_executes(pe);
}
