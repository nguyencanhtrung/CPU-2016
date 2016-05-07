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
static const char *ng0 = "/home/ctnguyen/Works/CPU-2016/ise_pipelineCPU/src/data_memory_simulation.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2033418929_3212880686_p_0(char *t0)
{
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
    int t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 936U);
    t2 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 1972);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 960U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 776U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB8;

LAB10:    t1 = (t0 + 868U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB11;

LAB12:    xsi_set_current_line(55, ng0);

LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 1144U);
    t10 = *((char **)t3);
    t3 = (t0 + 592U);
    t11 = *((char **)t3);
    t3 = (t0 + 3940U);
    t12 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t11, t3);
    t13 = (t12 - 0);
    t14 = (t13 * 1);
    xsi_vhdl_check_range_of_index(0, 1024, 1, t12);
    t15 = (16U * t14);
    t16 = (0 + t15);
    t17 = (t10 + t16);
    t18 = (t0 + 2016);
    t19 = (t18 + 32U);
    t20 = *((char **)t19);
    t21 = (t20 + 32U);
    t22 = *((char **)t21);
    memcpy(t22, t17, 16U);
    xsi_driver_first_trans_fast_port(t18);
    goto LAB9;

LAB11:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 684U);
    t4 = *((char **)t1);
    t1 = (t0 + 592U);
    t7 = *((char **)t1);
    t1 = (t0 + 3940U);
    t12 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t7, t1);
    t13 = (t12 - 0);
    t14 = (t13 * 1);
    t15 = (16U * t14);
    t16 = (0U + t15);
    t10 = (t0 + 2052);
    t11 = (t10 + 32U);
    t17 = *((char **)t11);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    memcpy(t19, t4, 16U);
    xsi_driver_first_trans_delta(t10, t16, 16U, 0LL);
    goto LAB9;

}


extern void work_a_2033418929_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2033418929_3212880686_p_0};
	xsi_register_didat("work_a_2033418929_3212880686", "isim/tb_processor_core_isim_beh.exe.sim/work/a_2033418929_3212880686.didat");
	xsi_register_executes(pe);
}
