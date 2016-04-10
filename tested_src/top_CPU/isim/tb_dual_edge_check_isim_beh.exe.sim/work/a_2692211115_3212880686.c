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
static const char *ng0 = "/home/waseemh/Xilinx_Proj/CPU-2016/untested_src/dual_edge_check.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_13554554585326073636_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2692211115_3212880686_p_0(char *t0)
{
    char t16[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    int t17;
    int t18;

LAB0:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4232);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1192U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 2448U);
    t3 = *((char **)t1);
    t17 = *((int *)t3);
    t18 = (t17 + 1);
    t1 = (t0 + 2448U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t18;

LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 7084);
    t11 = (t0 + 4328);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t3, 8U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB9;

LAB11:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 2448U);
    t4 = *((char **)t1);
    t17 = *((int *)t4);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t16, t17, 8);
    t7 = (t0 + 4328);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB12;

}

static void work_a_2692211115_3212880686_p_1(char *t0)
{
    char t13[16];
    char t14[16];
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
    int t11;
    int t12;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB8;

LAB10:
LAB9:    t1 = (t0 + 4248);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(78, ng0);
    t3 = (t0 + 4392);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 2568U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    memcpy(t1, t3, 8U);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 2688U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t12 = (t11 + 1);
    t1 = (t0 + 2688U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t12;
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 2688U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t13, t11, 8);
    t4 = (t0 + 4456);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB6;

LAB8:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(87, ng0);
    t3 = (t0 + 7092);
    t8 = (t0 + 2568U);
    t9 = *((char **)t8);
    t10 = ((IEEE_P_2592010699) + 4000);
    t15 = (t14 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 0;
    t16 = (t15 + 4U);
    *((int *)t16) = 7;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t11 = (7 - 0);
    t17 = (t11 * 1);
    t17 = (t17 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t17;
    t16 = (t0 + 7016U);
    t8 = xsi_base_array_concat(t8, t13, t10, (char)97, t3, t14, (char)97, t9, t16, (char)101);
    t17 = (8U + 8U);
    t18 = (16U != t17);
    if (t18 == 1)
        goto LAB14;

LAB15:    t19 = (t0 + 4520);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t8, 16U);
    xsi_driver_first_trans_fast(t19);
    goto LAB12;

LAB14:    xsi_size_not_matching(16U, t17, 0);
    goto LAB15;

}


extern void work_a_2692211115_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2692211115_3212880686_p_0,(void *)work_a_2692211115_3212880686_p_1};
	xsi_register_didat("work_a_2692211115_3212880686", "isim/tb_dual_edge_check_isim_beh.exe.sim/work/a_2692211115_3212880686.didat");
	xsi_register_executes(pe);
}
