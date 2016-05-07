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
extern char *STD_TEXTIO;
static const char *ng1 = "mif_file";
extern char *STD_STANDARD;
extern char *IEEE_P_2592010699;
static const char *ng4 = "/home/ctnguyen/Works/CPU-2016/ise_pipelineCPU/src/instr_mem_simulatio.vhd";
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_2592010699_sub_393209765_503743352(char *, char *, char *, char *);


char *work_a_3463502252_1516540902_sub_1461646220_2134189630(char *t1, char *t2, char *t3)
{
    char t4[256];
    char t5[16];
    char t17[16];
    char t24[32];
    char t28[32];
    char t36[8192];
    char t45[8];
    char t59[16];
    char t60[16];
    char t61[16];
    char *t0;
    char *t6;
    char *t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    int t31;
    char *t32;
    int t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    int t51;
    int t52;
    char *t53;
    char *t54;
    unsigned char t55;
    unsigned char t56;
    char *t57;
    char *t58;
    unsigned int t62;
    unsigned int t63;

LAB0:    t6 = ((STD_TEXTIO) + 1996);
    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 1U);
    t9 = (t4 + 4U);
    t10 = xsi_create_file_variable_in_buffer(0, ng1, t6, t2, t8, 1);
    *((char **)t9) = t10;
    t11 = (t4 + 8U);
    t12 = ((STD_TEXTIO) + 1908);
    t13 = (t11 + 32U);
    *((char **)t13) = t12;
    t14 = (t11 + 24U);
    *((char **)t14) = 0;
    t15 = (t11 + 36U);
    *((int *)t15) = 1;
    t16 = (t11 + 28U);
    *((char **)t16) = 0;
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 31;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - 31);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t4 + 48U);
    t22 = ((STD_STANDARD) + 712);
    t23 = (t19 + 52U);
    *((char **)t23) = t22;
    t25 = (t19 + 36U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t17);
    t26 = (t19 + 40U);
    *((char **)t26) = t17;
    t27 = (t19 + 48U);
    *((unsigned int *)t27) = 32U;
    t29 = (t28 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = 0;
    t30 = (t29 + 4U);
    *((int *)t30) = 255;
    t30 = (t29 + 8U);
    *((int *)t30) = 1;
    t31 = (255 - 0);
    t21 = (t31 * 1);
    t21 = (t21 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t21;
    t30 = (t28 + 16U);
    t32 = (t30 + 0U);
    *((int *)t32) = 31;
    t32 = (t30 + 4U);
    *((int *)t32) = 0;
    t32 = (t30 + 8U);
    *((int *)t32) = -1;
    t33 = (0 - 31);
    t21 = (t33 * -1);
    t21 = (t21 + 1);
    t32 = (t30 + 12U);
    *((unsigned int *)t32) = t21;
    t32 = (t4 + 116U);
    t34 = (t1 + 2372);
    t35 = (t32 + 52U);
    *((char **)t35) = t34;
    t37 = (t32 + 36U);
    *((char **)t37) = t36;
    xsi_type_set_default_value(t34, t36, 0);
    t38 = (t32 + 40U);
    t39 = (t34 + 44U);
    t40 = *((char **)t39);
    *((char **)t38) = t40;
    t41 = (t32 + 48U);
    *((unsigned int *)t41) = 8192U;
    t42 = (t4 + 184U);
    t43 = ((STD_STANDARD) + 0);
    t44 = (t42 + 52U);
    *((char **)t44) = t43;
    t46 = (t42 + 36U);
    *((char **)t46) = t45;
    xsi_type_set_default_value(t43, t45, 0);
    t47 = (t42 + 48U);
    *((unsigned int *)t47) = 1U;
    t48 = (t5 + 4U);
    t49 = (t2 != 0);
    if (t49 == 1)
        goto LAB3;

LAB2:    t50 = (t5 + 8U);
    *((char **)t50) = t3;
    t51 = 0;
    t52 = 255;

LAB4:    if (t51 <= t52)
        goto LAB5;

LAB7:    t6 = (t4 + 4U);
    t7 = *((char **)t6);
    t49 = std_textio_endfile(t7);
    t55 = (!(t49));
    if (t55 != 0)
        goto LAB14;

LAB16:
LAB15:    t6 = (t32 + 36U);
    t7 = *((char **)t6);
    t49 = (8192U != 8192U);
    if (t49 == 1)
        goto LAB19;

LAB20:    t0 = xsi_get_transient_memory(8192U);
    memcpy(t0, t7, 8192U);

LAB1:    xsi_access_variable_delete(t11);
    t6 = (t4 + 4U);
    t7 = *((char **)t6);
    xsi_delete_file_variable(t7);
    return t0;
LAB3:    *((char **)t48) = t2;
    goto LAB2;

LAB5:    t53 = (t4 + 4U);
    t54 = *((char **)t53);
    t55 = std_textio_endfile(t54);
    t56 = (!(t55));
    if (t56 != 0)
        goto LAB8;

LAB10:    t6 = xsi_get_transient_memory(32U);
    memset(t6, 0, 32U);
    t7 = t6;
    memset(t7, (unsigned char)2, 32U);
    t9 = (t32 + 36U);
    t10 = *((char **)t9);
    t20 = (t51 - 0);
    t8 = (t20 * 1);
    xsi_vhdl_check_range_of_index(0, 255, 1, t51);
    t21 = (32U * t8);
    t62 = (0 + t21);
    t9 = (t10 + t62);
    memcpy(t9, t6, 32U);

LAB9:
LAB6:    if (t51 == t52)
        goto LAB7;

LAB13:    t20 = (t51 + 1);
    t51 = t20;
    goto LAB4;

LAB8:    t57 = (t4 + 4U);
    t58 = *((char **)t57);
    std_textio_readline(STD_TEXTIO, (char *)0, t58, t11);
    t6 = (t19 + 36U);
    t7 = *((char **)t6);
    t6 = (t42 + 36U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    std_textio_read3(STD_TEXTIO, (char *)0, t11, t7, t17, t6);
    t6 = (t42 + 36U);
    t7 = *((char **)t6);
    t49 = *((unsigned char *)t7);
    if (t49 == 0)
        goto LAB11;

LAB12:    t6 = (t19 + 36U);
    t7 = *((char **)t6);
    t6 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t59, t7, t17);
    t9 = (t32 + 36U);
    t10 = *((char **)t9);
    t20 = (t51 - 0);
    t8 = (t20 * 1);
    xsi_vhdl_check_range_of_index(0, 255, 1, t51);
    t21 = (32U * t8);
    t62 = (0 + t21);
    t9 = (t10 + t62);
    t12 = (t59 + 12U);
    t63 = *((unsigned int *)t12);
    t63 = (t63 * 1U);
    memcpy(t9, t6, t63);
    goto LAB9;

LAB11:    t6 = (t1 + 12482);
    t10 = ((STD_STANDARD) + 240);
    t12 = xsi_int_to_mem(t51);
    t13 = xsi_string_variable_get_image(t59, t10, t12);
    t15 = ((STD_STANDARD) + 656);
    t16 = (t61 + 0U);
    t18 = (t16 + 0U);
    *((int *)t18) = 1;
    t18 = (t16 + 4U);
    *((int *)t18) = 33;
    t18 = (t16 + 8U);
    *((int *)t18) = 1;
    t20 = (33 - 1);
    t8 = (t20 * 1);
    t8 = (t8 + 1);
    t18 = (t16 + 12U);
    *((unsigned int *)t18) = t8;
    t14 = xsi_base_array_concat(t14, t60, t15, (char)97, t6, t61, (char)97, t13, t59, (char)101);
    t18 = (t59 + 12U);
    t8 = *((unsigned int *)t18);
    t21 = (33U + t8);
    xsi_report(t14, t21, (unsigned char)1);
    goto LAB12;

LAB14:    if ((unsigned char)0 == 0)
        goto LAB17;

LAB18:    goto LAB15;

LAB17:    t9 = (t1 + 12515);
    xsi_report(t9, 43U, (unsigned char)3);
    goto LAB18;

LAB19:    xsi_size_not_matching(8192U, 8192U, 0);
    goto LAB20;

LAB21:;
}

static void work_a_3463502252_1516540902_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(112, ng4);
    t1 = (t0 + 660U);
    t2 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 2052);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(113, ng4);
    t3 = (t0 + 868U);
    t4 = *((char **)t3);
    t3 = (t0 + 592U);
    t5 = *((char **)t3);
    t3 = (t0 + 4136U);
    t6 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t5, t3);
    t7 = (t6 - 0);
    t8 = (t7 * 1);
    xsi_vhdl_check_range_of_index(0, 255, 1, t6);
    t9 = (32U * t8);
    t10 = (0 + t9);
    t11 = (t4 + t10);
    t12 = (t0 + 2096);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    memcpy(t16, t11, 32U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB3;

}


extern void work_a_3463502252_1516540902_init()
{
	static char *pe[] = {(void *)work_a_3463502252_1516540902_p_0};
	static char *se[] = {(void *)work_a_3463502252_1516540902_sub_1461646220_2134189630};
	xsi_register_didat("work_a_3463502252_1516540902", "isim/processor_core_isim_beh.exe.sim/work/a_3463502252_1516540902.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
