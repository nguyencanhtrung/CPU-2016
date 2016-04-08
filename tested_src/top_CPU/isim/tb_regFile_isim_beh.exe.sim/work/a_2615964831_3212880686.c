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
static const char *ng0 = "/home/waseemh/Xilinx_Proj/CPU-2016/tested_src/top_CPU/register_file.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2615964831_3212880686_p_0(char *t0)
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
    unsigned int t11;
    char *t12;
    unsigned char t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    unsigned int t22;

LAB0:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 1472U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3464);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 1672U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 1192U);
    t4 = *((char **)t1);
    t1 = (t0 + 6016U);
    t20 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t4, t1);
    t21 = (t20 - 0);
    t11 = (t21 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t20);
    t14 = (16U * t11);
    t22 = (0 + t14);
    t7 = (t3 + t22);
    t10 = (t0 + 3608);
    t12 = (t10 + 56U);
    t15 = *((char **)t12);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t7, 16U);
    xsi_driver_first_trans_fast_port(t10);

LAB14:
LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(50, ng0);
    t3 = xsi_get_transient_memory(512U);
    memset(t3, 0, 512U);
    t10 = t3;
    t11 = (16U * 1U);
    t12 = t10;
    memset(t12, (unsigned char)2, t11);
    t13 = (t11 != 0);
    if (t13 == 1)
        goto LAB11;

LAB12:    t15 = (t0 + 3544);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t3, 512U);
    xsi_driver_first_trans_fast(t15);
    goto LAB9;

LAB11:    t14 = (512U / t11);
    xsi_mem_set_data(t10, t10, t11, t14);
    goto LAB12;

LAB13:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 1032U);
    t4 = *((char **)t1);
    t1 = (t0 + 1192U);
    t7 = *((char **)t1);
    t1 = (t0 + 6016U);
    t20 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t7, t1);
    t21 = (t20 - 0);
    t11 = (t21 * 1);
    t14 = (16U * t11);
    t22 = (0U + t14);
    t10 = (t0 + 3544);
    t12 = (t10 + 56U);
    t15 = *((char **)t12);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t4, 16U);
    xsi_driver_first_trans_delta(t10, t22, 16U, 0LL);
    goto LAB14;

}


extern void work_a_2615964831_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2615964831_3212880686_p_0};
	xsi_register_didat("work_a_2615964831_3212880686", "isim/tb_regFile_isim_beh.exe.sim/work/a_2615964831_3212880686.didat");
	xsi_register_executes(pe);
}
