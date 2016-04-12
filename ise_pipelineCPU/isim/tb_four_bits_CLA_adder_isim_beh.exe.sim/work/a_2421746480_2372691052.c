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
static const char *ng0 = "/home/ctnguyen/Works/CPU-2016/ise_pipelineCPU/src/tb/tb_four_bits_CLA_adder.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
char *ieee_p_2592010699_sub_1697423399_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_3293060193_503743352(char *, char *, char *, char *, unsigned char );
char *ieee_p_2592010699_sub_393209765_503743352(char *, char *, char *, char *);


static void work_a_2421746480_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 1860U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2212);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1316U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 1760);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2212);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1316U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 1760);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_2421746480_2372691052_p_1(char *t0)
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

LAB0:    t1 = (t0 + 1996U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 4468);
    t4 = (t0 + 2248);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 4472);
    t4 = (t0 + 2284);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2320);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1316U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t10 = (2 * t9);
    t2 = (t0 + 1896);
    xsi_process_wait(t2, t10);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 4476);
    *((int *)t2) = 1;
    t3 = (t0 + 4480);
    *((int *)t3) = 4;
    t11 = 1;
    t12 = 4;

LAB8:    if (t11 <= t12)
        goto LAB9;

LAB11:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1316U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 1896);
    xsi_process_wait(t2, t9);

LAB23:    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(102, ng0);
    t4 = (t0 + 592U);
    t5 = *((char **)t4);
    t4 = (t0 + 4388U);
    t6 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t14, t5, t4, (unsigned char)0);
    t7 = (t14 + 12U);
    t15 = *((unsigned int *)t7);
    t15 = (t15 * 1U);
    t8 = xsi_vhdl_bitvec_sll(t8, t6, t15, 1);
    t16 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t13, t8, t14);
    t17 = (t13 + 12U);
    t18 = *((unsigned int *)t17);
    t18 = (t18 * 1U);
    t19 = (4U != t18);
    if (t19 == 1)
        goto LAB12;

LAB13:    t20 = (t0 + 2248);
    t21 = (t20 + 32U);
    t22 = *((char **)t21);
    t23 = (t22 + 32U);
    t24 = *((char **)t23);
    memcpy(t24, t16, 4U);
    xsi_driver_first_trans_fast(t20);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 684U);
    t3 = *((char **)t2);
    t2 = (t0 + 4404U);
    t4 = (t0 + 592U);
    t5 = *((char **)t4);
    t4 = (t0 + 4388U);
    t6 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t13, t3, t2, t5, t4);
    t7 = (t13 + 12U);
    t15 = *((unsigned int *)t7);
    t18 = (1U * t15);
    t19 = (4U != t18);
    if (t19 == 1)
        goto LAB14;

LAB15:    t8 = (t0 + 2284);
    t16 = (t8 + 32U);
    t17 = *((char **)t16);
    t20 = (t17 + 32U);
    t21 = *((char **)t20);
    memcpy(t21, t6, 4U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 776U);
    t3 = *((char **)t2);
    t19 = *((unsigned char *)t3);
    t25 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t19);
    t2 = (t0 + 2320);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t25;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 1316U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t10 = (2 * t9);
    t2 = (t0 + 1896);
    xsi_process_wait(t2, t10);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB10:    t2 = (t0 + 4476);
    t11 = *((int *)t2);
    t3 = (t0 + 4480);
    t12 = *((int *)t3);
    if (t11 == t12)
        goto LAB11;

LAB20:    t26 = (t11 + 1);
    t11 = t26;
    t4 = (t0 + 4476);
    *((int *)t4) = t11;
    goto LAB8;

LAB12:    xsi_size_not_matching(4U, t18, 0);
    goto LAB13;

LAB14:    xsi_size_not_matching(4U, t18, 0);
    goto LAB15;

LAB16:    goto LAB10;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB21:    xsi_set_current_line(111, ng0);

LAB27:    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB22:    goto LAB21;

LAB24:    goto LAB22;

LAB25:    goto LAB2;

LAB26:    goto LAB25;

LAB28:    goto LAB26;

}


extern void work_a_2421746480_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2421746480_2372691052_p_0,(void *)work_a_2421746480_2372691052_p_1};
	xsi_register_didat("work_a_2421746480_2372691052", "isim/tb_four_bits_CLA_adder_isim_beh.exe.sim/work/a_2421746480_2372691052.didat");
	xsi_register_executes(pe);
}
