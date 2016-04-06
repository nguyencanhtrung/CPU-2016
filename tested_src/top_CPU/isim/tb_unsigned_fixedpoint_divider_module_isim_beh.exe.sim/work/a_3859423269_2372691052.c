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
static const char *ng0 = "/home/ctnguyen/Works/CPU-2016/tested_src/top_CPU/tb_unsigned_fixedpoint_divider_module.vhd";
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_2271993008_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_2563015576_1035706684(char *, char *, int , int );


static void work_a_3859423269_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 2180U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2532);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1568U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2080);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2532);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1568U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2080);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_3859423269_2372691052_p_1(char *t0)
{
    char t13[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;
    char *t9;
    char *t10;
    int t11;
    unsigned char t12;
    int t14;
    int t15;
    char *t16;
    char *t17;
    unsigned char t18;

LAB0:    t1 = (t0 + 2316U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 1568U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 * 10);
    t2 = (t0 + 2216);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1636U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((int *)t2) = 0;
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 5528);
    t4 = (t0 + 2604);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t9 = (t6 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 5544);
    t4 = (t0 + 2640);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t9 = (t6 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1568U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (10 * t7);
    t2 = (t0 + 2216);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(109, ng0);

LAB12:    t2 = (t0 + 1636U);
    t3 = *((char **)t2);
    t11 = *((int *)t3);
    t12 = (t11 <= 50);
    if (t12 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(121, ng0);
    if ((unsigned char)0 == 0)
        goto LAB32;

LAB33:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB13:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 592U);
    t4 = *((char **)t2);
    t2 = (t0 + 5364U);
    t14 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t4, t2);
    t15 = (t14 * 3);
    t5 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t13, t15, 16);
    t6 = (t0 + 2604);
    t9 = (t6 + 32U);
    t10 = *((char **)t9);
    t16 = (t10 + 32U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 16U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 684U);
    t3 = *((char **)t2);
    t2 = (t0 + 5380U);
    t11 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t3, t2);
    t14 = (t11 * 2);
    t4 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t13, t14, 16);
    t5 = (t0 + 2640);
    t6 = (t5 + 32U);
    t9 = *((char **)t6);
    t10 = (t9 + 32U);
    t16 = *((char **)t10);
    memcpy(t16, t4, 16U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 1568U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (5 * t7);
    t2 = (t0 + 2216);
    xsi_process_wait(t2, t8);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB14:;
LAB16:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2676);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 1568U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 2216);
    xsi_process_wait(t2, t7);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 2676);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(116, ng0);

LAB24:    t2 = (t0 + 1236U);
    t3 = *((char **)t2);
    t12 = *((unsigned char *)t3);
    t18 = (t12 == (unsigned char)2);
    if (t18 != 0)
        goto LAB25;

LAB27:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 1636U);
    t3 = *((char **)t2);
    t11 = *((int *)t3);
    t14 = (t11 + 1);
    t2 = (t0 + 1636U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = t14;
    goto LAB12;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB25:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 1568U);
    t4 = *((char **)t2);
    t7 = *((int64 *)t4);
    t2 = (t0 + 2216);
    xsi_process_wait(t2, t7);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB26:;
LAB28:    goto LAB24;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

LAB32:    t2 = (t0 + 5560);
    xsi_report(t2, 21U, (unsigned char)3);
    goto LAB33;

}


extern void work_a_3859423269_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3859423269_2372691052_p_0,(void *)work_a_3859423269_2372691052_p_1};
	xsi_register_didat("work_a_3859423269_2372691052", "isim/tb_unsigned_fixedpoint_divider_module_isim_beh.exe.sim/work/a_3859423269_2372691052.didat");
	xsi_register_executes(pe);
}
