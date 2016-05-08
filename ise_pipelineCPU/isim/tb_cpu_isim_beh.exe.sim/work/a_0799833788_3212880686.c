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
static const char *ng0 = "/home/waseemh/Xilinx_Proj/CPU-2016/ise_pipelineCPU/src/shift_module.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
char *ieee_p_2592010699_sub_12303121079769504865_503743352(char *, char *, char *, char *, unsigned char );
char *ieee_p_2592010699_sub_24166140421859237_503743352(char *, char *, char *, char *);


static void work_a_0799833788_3212880686_p_0(char *t0)
{
    char t5[16];
    char t6[16];
    char t24[16];
    char t25[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    char *t31;
    char *t32;
    int t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned char t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;

LAB0:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB7:    t26 = (t0 + 1032U);
    t27 = *((char **)t26);
    t26 = (t0 + 5080U);
    t28 = ieee_p_2592010699_sub_12303121079769504865_503743352(IEEE_P_2592010699, t25, t27, t26, (unsigned char)0);
    t29 = (t25 + 12U);
    t30 = *((unsigned int *)t29);
    t30 = (t30 * 1U);
    t31 = (t0 + 1352U);
    t32 = *((char **)t31);
    t31 = (t0 + 5112U);
    t33 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t32, t31);
    t34 = xsi_vhdl_bitvec_sll(t34, t28, t30, t33);
    t35 = ieee_p_2592010699_sub_24166140421859237_503743352(IEEE_P_2592010699, t24, t34, t25);
    t36 = (t24 + 12U);
    t37 = *((unsigned int *)t36);
    t37 = (t37 * 1U);
    t38 = (16U != t37);
    if (t38 == 1)
        goto LAB9;

LAB10:    t39 = (t0 + 3224);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memcpy(t43, t35, 16U);
    xsi_driver_first_trans_fast_port(t39);

LAB2:    t44 = (t0 + 3144);
    *((int *)t44) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 1032U);
    t7 = *((char **)t1);
    t1 = (t0 + 5080U);
    t8 = ieee_p_2592010699_sub_12303121079769504865_503743352(IEEE_P_2592010699, t6, t7, t1, (unsigned char)0);
    t9 = (t6 + 12U);
    t10 = *((unsigned int *)t9);
    t10 = (t10 * 1U);
    t11 = (t0 + 1352U);
    t12 = *((char **)t11);
    t11 = (t0 + 5112U);
    t13 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t12, t11);
    t14 = xsi_vhdl_bitvec_sll(t14, t8, t10, t13);
    t15 = ieee_p_2592010699_sub_24166140421859237_503743352(IEEE_P_2592010699, t5, t14, t6);
    t16 = (t5 + 12U);
    t17 = *((unsigned int *)t16);
    t17 = (t17 * 1U);
    t18 = (16U != t17);
    if (t18 == 1)
        goto LAB5;

LAB6:    t19 = (t0 + 3224);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t15, 16U);
    xsi_driver_first_trans_fast_port(t19);
    goto LAB2;

LAB5:    xsi_size_not_matching(16U, t17, 0);
    goto LAB6;

LAB8:    goto LAB2;

LAB9:    xsi_size_not_matching(16U, t37, 0);
    goto LAB10;

}


extern void work_a_0799833788_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0799833788_3212880686_p_0};
	xsi_register_didat("work_a_0799833788_3212880686", "isim/tb_cpu_isim_beh.exe.sim/work/a_0799833788_3212880686.didat");
	xsi_register_executes(pe);
}
