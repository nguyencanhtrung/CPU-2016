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
static const char *ng0 = "/home/waseemh/Xilinx_Proj/CPU-2016/ise_pipelineCPU/src/tb/tb_sixteen_bits_adder.vhd";
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_12303121079769504865_503743352(char *, char *, char *, char *, unsigned char );
char *ieee_p_2592010699_sub_16439989833707593767_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_24166140421859237_503743352(char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void work_a_4032488892_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3072);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3072);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_4032488892_2372691052_p_1(char *t0)
{
    char t13[16];
    char t14[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    int64 t10;
    int t11;
    int t12;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned char t25;
    int t26;

LAB0:    t1 = (t0 + 3512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 6792);
    t4 = (t0 + 3960);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 6808);
    t4 = (t0 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 4088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t10 = (t9 * 10);
    t2 = (t0 + 3320);
    xsi_process_wait(t2, t10);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 6824);
    *((int *)t2) = 1;
    t3 = (t0 + 6828);
    *((int *)t3) = 8;
    t11 = 1;
    t12 = 8;

LAB8:    if (t11 <= t12)
        goto LAB9;

LAB11:    xsi_set_current_line(108, ng0);

LAB23:    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(100, ng0);
    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t4 = (t0 + 6672U);
    t6 = ieee_p_2592010699_sub_12303121079769504865_503743352(IEEE_P_2592010699, t14, t5, t4, (unsigned char)0);
    t7 = (t14 + 12U);
    t15 = *((unsigned int *)t7);
    t15 = (t15 * 1U);
    t8 = xsi_vhdl_bitvec_sll(t8, t6, t15, 1);
    t16 = ieee_p_2592010699_sub_24166140421859237_503743352(IEEE_P_2592010699, t13, t8, t14);
    t17 = (t13 + 12U);
    t18 = *((unsigned int *)t17);
    t18 = (t18 * 1U);
    t19 = (16U != t18);
    if (t19 == 1)
        goto LAB12;

LAB13:    t20 = (t0 + 3960);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t16, 16U);
    xsi_driver_first_trans_fast(t20);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 6688U);
    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t4 = (t0 + 6672U);
    t6 = ieee_p_2592010699_sub_16439989833707593767_503743352(IEEE_P_2592010699, t13, t3, t2, t5, t4);
    t7 = (t13 + 12U);
    t15 = *((unsigned int *)t7);
    t18 = (1U * t15);
    t19 = (16U != t18);
    if (t19 == 1)
        goto LAB14;

LAB15:    t8 = (t0 + 4024);
    t16 = (t8 + 56U);
    t17 = *((char **)t16);
    t20 = (t17 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t6, 16U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t19 = *((unsigned char *)t3);
    t25 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t19);
    t2 = (t0 + 4088);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t25;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t10 = (t9 * 10);
    t2 = (t0 + 3320);
    xsi_process_wait(t2, t10);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB10:    t2 = (t0 + 6824);
    t11 = *((int *)t2);
    t3 = (t0 + 6828);
    t12 = *((int *)t3);
    if (t11 == t12)
        goto LAB11;

LAB20:    t26 = (t11 + 1);
    t11 = t26;
    t4 = (t0 + 6824);
    *((int *)t4) = t11;
    goto LAB8;

LAB12:    xsi_size_not_matching(16U, t18, 0);
    goto LAB13;

LAB14:    xsi_size_not_matching(16U, t18, 0);
    goto LAB15;

LAB16:    goto LAB10;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB21:    goto LAB2;

LAB22:    goto LAB21;

LAB24:    goto LAB22;

}


extern void work_a_4032488892_2372691052_init()
{
	static char *pe[] = {(void *)work_a_4032488892_2372691052_p_0,(void *)work_a_4032488892_2372691052_p_1};
	xsi_register_didat("work_a_4032488892_2372691052", "isim/tb_sixteen_bits_adder_isim_beh.exe.sim/work/a_4032488892_2372691052.didat");
	xsi_register_executes(pe);
}
