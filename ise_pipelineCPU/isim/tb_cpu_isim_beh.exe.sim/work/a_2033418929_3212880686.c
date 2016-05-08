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
static const char *ng0 = "/home/waseemh/Xilinx_Proj/CPU-2016/ise_pipelineCPU/src/data_memory_simulation.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_13554554585326073636_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2033418929_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1632U);
    t2 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3464);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB8;

LAB9:    xsi_set_current_line(54, ng0);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 1992U);
    t7 = *((char **)t3);
    t3 = (t0 + 1032U);
    t8 = *((char **)t3);
    t3 = (t0 + 6112U);
    t9 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t8, t3);
    t10 = (t9 - 0);
    t11 = (t10 * 1);
    xsi_vhdl_check_range_of_index(0, 1024, 1, t9);
    t12 = (16U * t11);
    t13 = (0 + t12);
    t14 = (t7 + t13);
    t15 = (t0 + 3544);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t14, 16U);
    xsi_driver_first_trans_fast_port(t15);
    goto LAB6;

LAB8:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1192U);
    t4 = *((char **)t1);
    t1 = (t0 + 1032U);
    t7 = *((char **)t1);
    t1 = (t0 + 6112U);
    t9 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t7, t1);
    t10 = (t9 - 0);
    t11 = (t10 * 1);
    t12 = (16U * t11);
    t13 = (0U + t12);
    t8 = (t0 + 3608);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t4, 16U);
    xsi_driver_first_trans_delta(t8, t13, 16U, 0LL);
    goto LAB6;

}


extern void work_a_2033418929_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2033418929_3212880686_p_0};
	xsi_register_didat("work_a_2033418929_3212880686", "isim/tb_cpu_isim_beh.exe.sim/work/a_2033418929_3212880686.didat");
	xsi_register_executes(pe);
}
