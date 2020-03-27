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
static const char *ng0 = "C:/Users/micha/Desktop/cv8/cv8/traffic_lights/Traffic_light_controller.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_2110339434_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0229361600_0229361600_p_0(char *t0)
{
    char t20[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    static char *nl0[] = {&&LAB11, &&LAB14, &&LAB12, &&LAB15, &&LAB13, &&LAB16};

LAB0:    xsi_set_current_line(22, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 3800);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(23, ng0);
    t1 = (t0 + 3896);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(24, ng0);
    t1 = (t0 + 6668);
    t5 = (t0 + 3960);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1672U);
    t6 = *((char **)t2);
    t12 = *((unsigned char *)t6);
    t2 = (char *)((nl0) + t12);
    goto **((char **)t2);

LAB7:    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    t3 = t11;
    goto LAB9;

LAB10:    goto LAB3;

LAB11:    xsi_set_current_line(28, ng0);
    t7 = (t0 + 1832U);
    t8 = *((char **)t7);
    t7 = (t0 + 6596U);
    t9 = (t0 + 2248U);
    t13 = *((char **)t9);
    t9 = (t0 + 6628U);
    t14 = ieee_p_1242562249_sub_2110339434_1035706684(IEEE_P_1242562249, t8, t7, t13, t9);
    if (t14 != 0)
        goto LAB18;

LAB20:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 3896);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(33, ng0);
    t1 = (t0 + 6672);
    t5 = (t0 + 3960);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);

LAB19:    goto LAB10;

LAB12:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 6596U);
    t5 = (t0 + 2128U);
    t6 = *((char **)t5);
    t5 = (t0 + 6612U);
    t3 = ieee_p_1242562249_sub_2110339434_1035706684(IEEE_P_1242562249, t2, t1, t6, t5);
    if (t3 != 0)
        goto LAB23;

LAB25:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 3896);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(42, ng0);
    t1 = (t0 + 6676);
    t5 = (t0 + 3960);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);

LAB24:    goto LAB10;

LAB13:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 6596U);
    t5 = (t0 + 2128U);
    t6 = *((char **)t5);
    t5 = (t0 + 6612U);
    t3 = ieee_p_1242562249_sub_2110339434_1035706684(IEEE_P_1242562249, t2, t1, t6, t5);
    if (t3 != 0)
        goto LAB28;

LAB30:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 3896);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 6680);
    t5 = (t0 + 3960);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);

LAB29:    goto LAB10;

LAB14:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 6596U);
    t5 = (t0 + 2128U);
    t6 = *((char **)t5);
    t5 = (t0 + 6612U);
    t3 = ieee_p_1242562249_sub_2110339434_1035706684(IEEE_P_1242562249, t2, t1, t6, t5);
    if (t3 != 0)
        goto LAB33;

LAB35:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 3896);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 6684);
    t5 = (t0 + 3960);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);

LAB34:    goto LAB10;

LAB15:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 6596U);
    t5 = (t0 + 2248U);
    t6 = *((char **)t5);
    t5 = (t0 + 6628U);
    t3 = ieee_p_1242562249_sub_2110339434_1035706684(IEEE_P_1242562249, t2, t1, t6, t5);
    if (t3 != 0)
        goto LAB38;

LAB40:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 3896);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 6688);
    t5 = (t0 + 3960);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);

LAB39:    goto LAB10;

LAB16:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 6596U);
    t5 = (t0 + 2128U);
    t6 = *((char **)t5);
    t5 = (t0 + 6612U);
    t3 = ieee_p_1242562249_sub_2110339434_1035706684(IEEE_P_1242562249, t2, t1, t6, t5);
    if (t3 != 0)
        goto LAB43;

LAB45:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 3896);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 6692);
    t5 = (t0 + 3960);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);

LAB44:    goto LAB10;

LAB17:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 3896);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB18:    xsi_set_current_line(29, ng0);
    t15 = (t0 + 3896);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)0;
    xsi_driver_first_trans_fast(t15);
    xsi_set_current_line(30, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 6596U);
    t5 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t20, t2, t1, 1);
    t6 = (t20 + 12U);
    t21 = *((unsigned int *)t6);
    t22 = (1U * t21);
    t3 = (4U != t22);
    if (t3 == 1)
        goto LAB21;

LAB22:    t7 = (t0 + 3960);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    memcpy(t15, t5, 4U);
    xsi_driver_first_trans_fast(t7);
    goto LAB19;

LAB21:    xsi_size_not_matching(4U, t22, 0);
    goto LAB22;

LAB23:    xsi_set_current_line(38, ng0);
    t7 = (t0 + 3896);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(39, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 6596U);
    t5 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t20, t2, t1, 1);
    t6 = (t20 + 12U);
    t21 = *((unsigned int *)t6);
    t22 = (1U * t21);
    t3 = (4U != t22);
    if (t3 == 1)
        goto LAB26;

LAB27:    t7 = (t0 + 3960);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    memcpy(t15, t5, 4U);
    xsi_driver_first_trans_fast(t7);
    goto LAB24;

LAB26:    xsi_size_not_matching(4U, t22, 0);
    goto LAB27;

LAB28:    xsi_set_current_line(47, ng0);
    t7 = (t0 + 3896);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    *((unsigned char *)t15) = (unsigned char)4;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 6596U);
    t5 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t20, t2, t1, 1);
    t6 = (t20 + 12U);
    t21 = *((unsigned int *)t6);
    t22 = (1U * t21);
    t3 = (4U != t22);
    if (t3 == 1)
        goto LAB31;

LAB32:    t7 = (t0 + 3960);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    memcpy(t15, t5, 4U);
    xsi_driver_first_trans_fast(t7);
    goto LAB29;

LAB31:    xsi_size_not_matching(4U, t22, 0);
    goto LAB32;

LAB33:    xsi_set_current_line(56, ng0);
    t7 = (t0 + 3896);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    *((unsigned char *)t15) = (unsigned char)1;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 6596U);
    t5 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t20, t2, t1, 1);
    t6 = (t20 + 12U);
    t21 = *((unsigned int *)t6);
    t22 = (1U * t21);
    t3 = (4U != t22);
    if (t3 == 1)
        goto LAB36;

LAB37:    t7 = (t0 + 3960);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    memcpy(t15, t5, 4U);
    xsi_driver_first_trans_fast(t7);
    goto LAB34;

LAB36:    xsi_size_not_matching(4U, t22, 0);
    goto LAB37;

LAB38:    xsi_set_current_line(66, ng0);
    t7 = (t0 + 3896);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 6596U);
    t5 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t20, t2, t1, 1);
    t6 = (t20 + 12U);
    t21 = *((unsigned int *)t6);
    t22 = (1U * t21);
    t3 = (4U != t22);
    if (t3 == 1)
        goto LAB41;

LAB42:    t7 = (t0 + 3960);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    memcpy(t15, t5, 4U);
    xsi_driver_first_trans_fast(t7);
    goto LAB39;

LAB41:    xsi_size_not_matching(4U, t22, 0);
    goto LAB42;

LAB43:    xsi_set_current_line(77, ng0);
    t7 = (t0 + 3896);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    *((unsigned char *)t15) = (unsigned char)5;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 6596U);
    t5 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t20, t2, t1, 1);
    t6 = (t20 + 12U);
    t21 = *((unsigned int *)t6);
    t22 = (1U * t21);
    t3 = (4U != t22);
    if (t3 == 1)
        goto LAB46;

LAB47:    t7 = (t0 + 3960);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t15 = *((char **)t13);
    memcpy(t15, t5, 4U);
    xsi_driver_first_trans_fast(t7);
    goto LAB44;

LAB46:    xsi_size_not_matching(4U, t22, 0);
    goto LAB47;

}

static void work_a_0229361600_0229361600_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7, &&LAB8};

LAB0:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 3816);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(93, ng0);
    t4 = (t0 + 6696);
    t6 = (t0 + 4024);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 6U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB2;

LAB4:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 6702);
    t4 = (t0 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 6U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB5:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 6708);
    t4 = (t0 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 6U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB6:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 6714);
    t4 = (t0 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 6U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB7:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 6720);
    t4 = (t0 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 6U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB8:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 6726);
    t4 = (t0 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 6U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB9:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 6732);
    t4 = (t0 + 4024);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 6U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

}


extern void work_a_0229361600_0229361600_init()
{
	static char *pe[] = {(void *)work_a_0229361600_0229361600_p_0,(void *)work_a_0229361600_0229361600_p_1};
	xsi_register_didat("work_a_0229361600_0229361600", "isim/traffic_isim_beh.exe.sim/work/a_0229361600_0229361600.didat");
	xsi_register_executes(pe);
}
