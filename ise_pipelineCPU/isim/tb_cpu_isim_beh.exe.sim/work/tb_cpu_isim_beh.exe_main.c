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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_1242562249;
char *IEEE_P_2592010699;
char *STD_STANDARD;
char *WORK_P_1768435198;
char *STD_TEXTIO;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_1242562249_init();
    std_textio_init();
    work_a_3463502252_1516540902_init();
    work_a_4041684847_3212880686_init();
    work_a_1487875317_3212880686_init();
    work_a_1519929306_3212880686_init();
    work_p_1768435198_init();
    work_a_2615964831_3212880686_init();
    work_a_2842394180_3212880686_init();
    work_a_3505231098_3212880686_init();
    work_a_1035651396_3212880686_init();
    work_a_0799833788_3212880686_init();
    work_a_0597915860_3212880686_init();
    work_a_2033418929_3212880686_init();
    work_a_1561263344_3212880686_init();
    work_a_1941380655_2372691052_init();


    xsi_register_tops("work_a_1941380655_2372691052");

    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    WORK_P_1768435198 = xsi_get_engine_memory("work_p_1768435198");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");

    return xsi_run_simulation(argc, argv);

}
