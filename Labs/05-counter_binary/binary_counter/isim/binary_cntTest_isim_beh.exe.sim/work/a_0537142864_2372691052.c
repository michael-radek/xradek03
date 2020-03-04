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
static const char *ng0 = "/home/lab661/Documents/xradek03/Digital-electronics-1/Labs/05-counter_binary/binary_counter/binary_cntTest.vhd";



static void work_a_0537142864_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 2784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1808U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1808U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_0537142864_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    int64 t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    char *t11;
    char *t12;
    int t13;

LAB0:    t1 = (t0 + 3032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(87, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 2840);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1808U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 10);
    t2 = (t0 + 2840);
    xsi_process_wait(t2, t5);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3480);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 6160);
    *((int *)t2) = 0;
    t4 = (t0 + 6164);
    *((int *)t4) = 10;
    t9 = 0;
    t10 = 10;

LAB12:    if (t9 <= t10)
        goto LAB13;

LAB15:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3480);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 6168);
    *((int *)t2) = 0;
    t4 = (t0 + 6172);
    *((int *)t4) = 1;
    t9 = 0;
    t10 = 1;

LAB25:    if (t9 <= t10)
        goto LAB26;

LAB28:    xsi_set_current_line(110, ng0);

LAB40:    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB13:    xsi_set_current_line(95, ng0);
    t6 = (t0 + 3544);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 1808U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 1);
    t2 = (t0 + 2840);
    xsi_process_wait(t2, t5);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB14:    t2 = (t0 + 6160);
    t9 = *((int *)t2);
    t4 = (t0 + 6164);
    t10 = *((int *)t4);
    if (t9 == t10)
        goto LAB15;

LAB24:    t13 = (t9 + 1);
    t9 = t13;
    t6 = (t0 + 6160);
    *((int *)t6) = t9;
    goto LAB12;

LAB16:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3544);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1808U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 3);
    t2 = (t0 + 2840);
    xsi_process_wait(t2, t5);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    goto LAB14;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB26:    xsi_set_current_line(104, ng0);
    t6 = (t0 + 3544);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 1808U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 1);
    t2 = (t0 + 2840);
    xsi_process_wait(t2, t5);

LAB31:    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB27:    t2 = (t0 + 6168);
    t9 = *((int *)t2);
    t4 = (t0 + 6172);
    t10 = *((int *)t4);
    if (t9 == t10)
        goto LAB28;

LAB37:    t13 = (t9 + 1);
    t9 = t13;
    t6 = (t0 + 6168);
    *((int *)t6) = t9;
    goto LAB25;

LAB29:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 3544);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1808U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 1);
    t2 = (t0 + 2840);
    xsi_process_wait(t2, t5);

LAB35:    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB30:    goto LAB29;

LAB32:    goto LAB30;

LAB33:    goto LAB27;

LAB34:    goto LAB33;

LAB36:    goto LAB34;

LAB38:    goto LAB2;

LAB39:    goto LAB38;

LAB41:    goto LAB39;

}


extern void work_a_0537142864_2372691052_init()
{
	static char *pe[] = {(void *)work_a_0537142864_2372691052_p_0,(void *)work_a_0537142864_2372691052_p_1};
	xsi_register_didat("work_a_0537142864_2372691052", "isim/binary_cntTest_isim_beh.exe.sim/work/a_0537142864_2372691052.didat");
	xsi_register_executes(pe);
}
