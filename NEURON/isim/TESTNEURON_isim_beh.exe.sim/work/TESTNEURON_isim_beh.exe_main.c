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



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000004197161100_2513369863_init();
    work_m_00000000002210723305_0189650569_init();
    work_m_00000000003423951997_2960140228_init();
    work_m_00000000001255527134_3338510183_init();
    work_m_00000000004105538381_2896708476_init();
    work_m_00000000004105538381_1470900609_init();
    work_m_00000000004105538381_3757750823_init();
    work_m_00000000000717943330_0108422443_init();
    work_m_00000000000127363876_4022619908_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000127363876_4022619908");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
