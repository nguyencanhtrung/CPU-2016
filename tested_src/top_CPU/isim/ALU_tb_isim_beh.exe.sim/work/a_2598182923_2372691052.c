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
static const char *ng0 = "/home/waseemh/Xilinx_Proj/CPU-2016/untested_src/ALU_tb.vhd";



static void work_a_2598182923_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    int64 t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    int64 t14;
    int64 t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    int64 t24;
    int64 t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    int64 t34;
    int64 t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    int64 t44;
    int64 t45;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    int64 t54;
    int64 t55;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    int64 t64;
    int64 t65;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    int64 t74;
    int64 t75;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    int64 t84;
    int64 t85;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    int64 t94;
    int64 t95;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    int64 t104;
    int64 t105;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    char *t113;
    int64 t114;
    int64 t115;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    int64 t124;
    int64 t125;
    char *t127;
    char *t128;
    char *t129;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    int64 t134;
    int64 t135;
    char *t137;
    char *t138;
    char *t139;
    char *t140;
    char *t141;
    char *t142;
    char *t143;
    int64 t144;
    int64 t145;
    char *t147;
    char *t148;
    char *t149;
    char *t150;
    char *t151;
    char *t152;
    char *t153;
    int64 t154;
    int64 t155;
    char *t157;
    char *t158;
    char *t159;
    char *t160;
    char *t161;
    char *t162;

LAB0:    t1 = (t0 + 3264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(97, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 3072);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 2288U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 10);
    t2 = (t0 + 3072);
    xsi_process_wait(t2, t5);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2288U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (10 * t3);
    t2 = (t0 + 6032);
    t7 = (t0 + 3648);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 16U);
    xsi_driver_first_trans_delta(t7, 0U, 16U, t5);
    t12 = (t0 + 3648);
    xsi_driver_intertial_reject(t12, t5, t5);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 2288U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (10 * t3);
    t2 = (t0 + 6048);
    t7 = (t0 + 3712);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 16U);
    xsi_driver_first_trans_delta(t7, 0U, 16U, t5);
    t12 = (t0 + 3712);
    xsi_driver_intertial_reject(t12, t5, t5);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 2288U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (12 * t3);
    t2 = (t0 + 6064);
    t7 = (t0 + 3776);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 6U);
    xsi_driver_first_trans_delta(t7, 0U, 6U, t5);
    t12 = (t0 + 2288U);
    t13 = *((char **)t12);
    t14 = *((int64 *)t13);
    t15 = (13 * t14);
    t12 = (t0 + 6070);
    t17 = (t0 + 3776);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t12, 6U);
    xsi_driver_subsequent_trans_delta(t17, 0U, 6U, t15);
    t22 = (t0 + 2288U);
    t23 = *((char **)t22);
    t24 = *((int64 *)t23);
    t25 = (14 * t24);
    t22 = (t0 + 6076);
    t27 = (t0 + 3776);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t22, 6U);
    xsi_driver_subsequent_trans_delta(t27, 0U, 6U, t25);
    t32 = (t0 + 2288U);
    t33 = *((char **)t32);
    t34 = *((int64 *)t33);
    t35 = (15 * t34);
    t32 = (t0 + 6082);
    t37 = (t0 + 3776);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    memcpy(t41, t32, 6U);
    xsi_driver_subsequent_trans_delta(t37, 0U, 6U, t35);
    t42 = (t0 + 2288U);
    t43 = *((char **)t42);
    t44 = *((int64 *)t43);
    t45 = (16 * t44);
    t42 = (t0 + 6088);
    t47 = (t0 + 3776);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    memcpy(t51, t42, 6U);
    xsi_driver_subsequent_trans_delta(t47, 0U, 6U, t45);
    t52 = (t0 + 2288U);
    t53 = *((char **)t52);
    t54 = *((int64 *)t53);
    t55 = (17 * t54);
    t52 = (t0 + 6094);
    t57 = (t0 + 3776);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    memcpy(t61, t52, 6U);
    xsi_driver_subsequent_trans_delta(t57, 0U, 6U, t55);
    t62 = (t0 + 2288U);
    t63 = *((char **)t62);
    t64 = *((int64 *)t63);
    t65 = (18 * t64);
    t62 = (t0 + 6100);
    t67 = (t0 + 3776);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    memcpy(t71, t62, 6U);
    xsi_driver_subsequent_trans_delta(t67, 0U, 6U, t65);
    t72 = (t0 + 2288U);
    t73 = *((char **)t72);
    t74 = *((int64 *)t73);
    t75 = (19 * t74);
    t72 = (t0 + 6106);
    t77 = (t0 + 3776);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    memcpy(t81, t72, 6U);
    xsi_driver_subsequent_trans_delta(t77, 0U, 6U, t75);
    t82 = (t0 + 2288U);
    t83 = *((char **)t82);
    t84 = *((int64 *)t83);
    t85 = (20 * t84);
    t82 = (t0 + 6112);
    t87 = (t0 + 3776);
    t88 = (t87 + 56U);
    t89 = *((char **)t88);
    t90 = (t89 + 56U);
    t91 = *((char **)t90);
    memcpy(t91, t82, 6U);
    xsi_driver_subsequent_trans_delta(t87, 0U, 6U, t85);
    t92 = (t0 + 2288U);
    t93 = *((char **)t92);
    t94 = *((int64 *)t93);
    t95 = (22 * t94);
    t92 = (t0 + 6118);
    t97 = (t0 + 3776);
    t98 = (t97 + 56U);
    t99 = *((char **)t98);
    t100 = (t99 + 56U);
    t101 = *((char **)t100);
    memcpy(t101, t92, 6U);
    xsi_driver_subsequent_trans_delta(t97, 0U, 6U, t95);
    t102 = (t0 + 2288U);
    t103 = *((char **)t102);
    t104 = *((int64 *)t103);
    t105 = (23 * t104);
    t102 = (t0 + 6124);
    t107 = (t0 + 3776);
    t108 = (t107 + 56U);
    t109 = *((char **)t108);
    t110 = (t109 + 56U);
    t111 = *((char **)t110);
    memcpy(t111, t102, 6U);
    xsi_driver_subsequent_trans_delta(t107, 0U, 6U, t105);
    t112 = (t0 + 2288U);
    t113 = *((char **)t112);
    t114 = *((int64 *)t113);
    t115 = (24 * t114);
    t112 = (t0 + 6130);
    t117 = (t0 + 3776);
    t118 = (t117 + 56U);
    t119 = *((char **)t118);
    t120 = (t119 + 56U);
    t121 = *((char **)t120);
    memcpy(t121, t112, 6U);
    xsi_driver_subsequent_trans_delta(t117, 0U, 6U, t115);
    t122 = (t0 + 2288U);
    t123 = *((char **)t122);
    t124 = *((int64 *)t123);
    t125 = (25 * t124);
    t122 = (t0 + 6136);
    t127 = (t0 + 3776);
    t128 = (t127 + 56U);
    t129 = *((char **)t128);
    t130 = (t129 + 56U);
    t131 = *((char **)t130);
    memcpy(t131, t122, 6U);
    xsi_driver_subsequent_trans_delta(t127, 0U, 6U, t125);
    t132 = (t0 + 2288U);
    t133 = *((char **)t132);
    t134 = *((int64 *)t133);
    t135 = (26 * t134);
    t132 = (t0 + 6142);
    t137 = (t0 + 3776);
    t138 = (t137 + 56U);
    t139 = *((char **)t138);
    t140 = (t139 + 56U);
    t141 = *((char **)t140);
    memcpy(t141, t132, 6U);
    xsi_driver_subsequent_trans_delta(t137, 0U, 6U, t135);
    t142 = (t0 + 2288U);
    t143 = *((char **)t142);
    t144 = *((int64 *)t143);
    t145 = (27 * t144);
    t142 = (t0 + 6148);
    t147 = (t0 + 3776);
    t148 = (t147 + 56U);
    t149 = *((char **)t148);
    t150 = (t149 + 56U);
    t151 = *((char **)t150);
    memcpy(t151, t142, 6U);
    xsi_driver_subsequent_trans_delta(t147, 0U, 6U, t145);
    t152 = (t0 + 2288U);
    t153 = *((char **)t152);
    t154 = *((int64 *)t153);
    t155 = (28 * t154);
    t152 = (t0 + 6154);
    t157 = (t0 + 3776);
    t158 = (t157 + 56U);
    t159 = *((char **)t158);
    t160 = (t159 + 56U);
    t161 = *((char **)t160);
    memcpy(t161, t152, 6U);
    xsi_driver_subsequent_trans_delta(t157, 0U, 6U, t155);
    t162 = (t0 + 3776);
    xsi_driver_intertial_reject(t162, t5, t5);
    xsi_set_current_line(119, ng0);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    goto LAB2;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

}


extern void work_a_2598182923_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2598182923_2372691052_p_0};
	xsi_register_didat("work_a_2598182923_2372691052", "isim/ALU_tb_isim_beh.exe.sim/work/a_2598182923_2372691052.didat");
	xsi_register_executes(pe);
}
