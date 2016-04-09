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
static const char *ng0 = "/home/waseemh/Xilinx_Proj/CPU-2016/tested_src/top_CPU/tb_updated_reg_file.vhd";



static void work_a_3975486389_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 4216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2608U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3392);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 4216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2608U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3392);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_3975486389_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    int64 t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    int64 t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    int64 t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    int64 t23;
    char *t24;
    char *t25;
    char *t26;
    int64 t27;
    int64 t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    int64 t35;
    int64 t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;

LAB0:    t1 = (t0 + 3832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(102, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 3640);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 10);
    t2 = (t0 + 3640);
    xsi_process_wait(t2, t5);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 4280);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 0U, 1, t3);
    t10 = (t0 + 2608U);
    t11 = *((char **)t10);
    t5 = *((int64 *)t11);
    t12 = (t5 * 20);
    t10 = (t0 + 4280);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t10, 0U, 1, t12);
    t17 = (t0 + 4280);
    xsi_driver_intertial_reject(t17, t3, t3);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 22);
    t2 = (t0 + 7488);
    t7 = (t0 + 4344);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 5U);
    xsi_driver_first_trans_delta(t7, 0U, 5U, t5);
    t13 = (t0 + 2608U);
    t14 = *((char **)t13);
    t12 = *((int64 *)t14);
    t18 = (t12 * 27);
    t13 = (t0 + 7493);
    t16 = (t0 + 4344);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t13, 5U);
    xsi_driver_subsequent_trans_delta(t16, 0U, 5U, t18);
    t22 = (t0 + 4344);
    xsi_driver_intertial_reject(t22, t5, t5);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 22);
    t2 = (t0 + 7498);
    t7 = (t0 + 4408);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 5U);
    xsi_driver_first_trans_delta(t7, 0U, 5U, t5);
    t13 = (t0 + 2608U);
    t14 = *((char **)t13);
    t12 = *((int64 *)t14);
    t18 = (t12 * 27);
    t13 = (t0 + 7503);
    t16 = (t0 + 4408);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t13, 5U);
    xsi_driver_subsequent_trans_delta(t16, 0U, 5U, t18);
    t22 = (t0 + 4408);
    xsi_driver_intertial_reject(t22, t5, t5);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 20);
    t2 = (t0 + 7508);
    t7 = (t0 + 4472);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 5U);
    xsi_driver_first_trans_delta(t7, 0U, 5U, t5);
    t13 = (t0 + 2608U);
    t14 = *((char **)t13);
    t12 = *((int64 *)t14);
    t18 = (t12 * 25);
    t13 = (t0 + 7513);
    t16 = (t0 + 4472);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t13, 5U);
    xsi_driver_subsequent_trans_delta(t16, 0U, 5U, t18);
    t22 = (t0 + 4472);
    xsi_driver_intertial_reject(t22, t5, t5);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 21);
    t2 = (t0 + 7518);
    t7 = (t0 + 4536);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 16U);
    xsi_driver_first_trans_delta(t7, 0U, 16U, t5);
    t13 = (t0 + 2608U);
    t14 = *((char **)t13);
    t12 = *((int64 *)t14);
    t18 = (26 * t12);
    t13 = (t0 + 7534);
    t16 = (t0 + 4536);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t13, 16U);
    xsi_driver_subsequent_trans_delta(t16, 0U, 16U, t18);
    t22 = (t0 + 4536);
    xsi_driver_intertial_reject(t22, t5, t5);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 4600);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, t3);
    t10 = (t0 + 2608U);
    t11 = *((char **)t10);
    t5 = *((int64 *)t11);
    t12 = (t5 * 21);
    t10 = (t0 + 4600);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t10, 0U, 1, t12);
    t17 = (t0 + 2608U);
    t19 = *((char **)t17);
    t18 = *((int64 *)t19);
    t23 = (t18 * 22);
    t17 = (t0 + 4600);
    t20 = (t17 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t24 = *((char **)t22);
    *((unsigned char *)t24) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t17, 0U, 1, t23);
    t25 = (t0 + 2608U);
    t26 = *((char **)t25);
    t27 = *((int64 *)t26);
    t28 = (t27 * 26);
    t25 = (t0 + 4600);
    t29 = (t25 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    *((unsigned char *)t32) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t25, 0U, 1, t28);
    t33 = (t0 + 2608U);
    t34 = *((char **)t33);
    t35 = *((int64 *)t34);
    t36 = (t35 * 27);
    t33 = (t0 + 4600);
    t37 = (t33 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    *((unsigned char *)t40) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t33, 0U, 1, t36);
    t41 = (t0 + 4600);
    xsi_driver_intertial_reject(t41, t3, t3);
    xsi_set_current_line(114, ng0);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    goto LAB2;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

}


extern void work_a_3975486389_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3975486389_2372691052_p_0,(void *)work_a_3975486389_2372691052_p_1};
	xsi_register_didat("work_a_3975486389_2372691052", "isim/tb_updated_reg_file_isim_beh.exe.sim/work/a_3975486389_2372691052.didat");
	xsi_register_executes(pe);
}
