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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/micha/Desktop/cv8/cv8/traffic_lights/Traffic_Top_tb00.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0901204231_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    int64 t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);

LAB4:    t3 = xsi_get_sim_current_time();
    t4 = (500 * 1000LL);
    t5 = (t3 < t4);
    if (t5 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(49, ng0);

LAB18:    *((char **)t1) = &&LAB19;

LAB1:    return;
LAB5:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3752);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(44, ng0);
    t3 = (0.50000000000000000 * 1000LL);
    t2 = (t0 + 2600);
    xsi_process_wait(t2, t3);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:;
LAB8:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3752);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(46, ng0);
    t3 = (0.50000000000000000 * 1000LL);
    t2 = (t0 + 2600);
    xsi_process_wait(t2, t3);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    goto LAB4;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    goto LAB2;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

}

static void work_a_0901204231_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    int64 t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 3040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);

LAB4:    t3 = xsi_get_sim_current_time();
    t4 = (500 * 1000LL);
    t5 = (t3 < t4);
    if (t5 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(61, ng0);

LAB18:    *((char **)t1) = &&LAB19;

LAB1:    return;
LAB5:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3816);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(57, ng0);
    t3 = (1.5000000000000000 * 1000LL);
    t2 = (t0 + 2848);
    xsi_process_wait(t2, t3);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:;
LAB8:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3816);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(59, ng0);
    t3 = (0.50000000000000000 * 1000LL);
    t2 = (t0 + 2848);
    xsi_process_wait(t2, t3);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    goto LAB4;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    goto LAB2;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

}

static void work_a_0901204231_2372691052_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 3288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);

LAB6:    t2 = (t0 + 3608);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t5 = (t0 + 3608);
    *((int *)t5) = 0;
    xsi_set_current_line(67, ng0);

LAB10:    t2 = (t0 + 3624);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    t3 = (t0 + 1312U);
    t4 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    t5 = (t0 + 3624);
    *((int *)t5) = 0;
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3880);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(69, ng0);

LAB14:    t2 = (t0 + 3640);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    t3 = (t0 + 1312U);
    t4 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB8;
    else
        goto LAB10;

LAB11:    goto LAB9;

LAB12:    t5 = (t0 + 3640);
    *((int *)t5) = 0;
    xsi_set_current_line(70, ng0);

LAB18:    t2 = (t0 + 3656);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    t3 = (t0 + 1312U);
    t4 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB12;
    else
        goto LAB14;

LAB15:    goto LAB13;

LAB16:    t5 = (t0 + 3656);
    *((int *)t5) = 0;
    xsi_set_current_line(71, ng0);

LAB22:    t2 = (t0 + 3672);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    t3 = (t0 + 1312U);
    t4 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB16;
    else
        goto LAB18;

LAB19:    goto LAB17;

LAB20:    t5 = (t0 + 3672);
    *((int *)t5) = 0;
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3880);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(75, ng0);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    t3 = (t0 + 1312U);
    t4 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB20;
    else
        goto LAB22;

LAB23:    goto LAB21;

LAB24:    goto LAB2;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

}


extern void work_a_0901204231_2372691052_init()
{
	static char *pe[] = {(void *)work_a_0901204231_2372691052_p_0,(void *)work_a_0901204231_2372691052_p_1,(void *)work_a_0901204231_2372691052_p_2};
	xsi_register_didat("work_a_0901204231_2372691052", "isim/traffic_top_tb00_isim_beh.exe.sim/work/a_0901204231_2372691052.didat");
	xsi_register_executes(pe);
}
