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
static const char *ng0 = "C:/Users/Fernando/Desktop/Nueva carpeta/Proyecto/Uart_tx.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {7, 0};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {4U, 0U};



static void Always_25_0(char *t0)
{
    char t11[8];
    char t30[8];
    char t36[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;

LAB0:    t1 = (t0 + 4784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 5600);
    *((int *)t2) = 1;
    t3 = (t0 + 4816);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(28, ng0);
    t4 = (t0 + 3064);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(30, ng0);

LAB20:    xsi_set_current_line(31, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 14, 0LL);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2024U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t5);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB24;

LAB21:    if (t21 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t11) = 1;

LAB24:    t9 = (t11 + 4);
    t24 = *((unsigned int *)t9);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB27:    goto LAB19;

LAB9:    xsi_set_current_line(49, ng0);

LAB29:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t7 = *((char **)t5);
    t5 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 32, t7, 32, t5, 32);
    memset(t30, 0, 8);
    t9 = (t4 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB31;

LAB30:    t10 = (t11 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB31;

LAB34:    if (*((unsigned int *)t4) < *((unsigned int *)t11))
        goto LAB32;

LAB33:    t31 = (t30 + 4);
    t12 = *((unsigned int *)t31);
    t13 = (~(t12));
    t14 = *((unsigned int *)t30);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(59, ng0);

LAB39:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 14, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB37:    goto LAB19;

LAB11:    xsi_set_current_line(68, ng0);

LAB40:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 3544);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 3544);
    t9 = (t7 + 72U);
    t10 = *((char **)t9);
    t29 = (t0 + 3384);
    t31 = (t29 + 56U);
    t32 = *((char **)t31);
    xsi_vlog_generic_get_index_select_value(t11, 1, t5, t10, 2, t32, 3, 2);
    t33 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t33, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t7 = *((char **)t5);
    t5 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 32, t7, 32, t5, 32);
    memset(t30, 0, 8);
    t9 = (t4 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB42;

LAB41:    t10 = (t11 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB42;

LAB45:    if (*((unsigned int *)t4) < *((unsigned int *)t11))
        goto LAB43;

LAB44:    t31 = (t30 + 4);
    t12 = *((unsigned int *)t31);
    t13 = (~(t12));
    t14 = *((unsigned int *)t30);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(77, ng0);

LAB50:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 14, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t11, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB52;

LAB51:    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB52;

LAB55:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB53;

LAB54:    t29 = (t11 + 4);
    t12 = *((unsigned int *)t29);
    t13 = (~(t12));
    t14 = *((unsigned int *)t11);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(87, ng0);

LAB60:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB58:
LAB48:    goto LAB19;

LAB13:    xsi_set_current_line(97, ng0);

LAB61:    xsi_set_current_line(98, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t7 = *((char **)t5);
    t5 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 32, t7, 32, t5, 32);
    memset(t30, 0, 8);
    t9 = (t4 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB63;

LAB62:    t10 = (t11 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB63;

LAB66:    if (*((unsigned int *)t4) < *((unsigned int *)t11))
        goto LAB64;

LAB65:    t31 = (t30 + 4);
    t12 = *((unsigned int *)t31);
    t13 = (~(t12));
    t14 = *((unsigned int *)t30);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(107, ng0);

LAB71:    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 14, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB69:    goto LAB19;

LAB15:    xsi_set_current_line(118, ng0);

LAB72:    xsi_set_current_line(119, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3704);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB19;

LAB23:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(37, ng0);

LAB28:    xsi_set_current_line(38, ng0);
    t10 = ((char*)((ng2)));
    t29 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t29, t10, 0, 0, 1, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2184U);
    t3 = *((char **)t2);
    t2 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB27;

LAB31:    t29 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB33;

LAB32:    *((unsigned int *)t30) = 1;
    goto LAB33;

LAB35:    xsi_set_current_line(54, ng0);

LAB38:    xsi_set_current_line(55, ng0);
    t32 = (t0 + 3224);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng4)));
    memset(t36, 0, 8);
    xsi_vlog_unsigned_add(t36, 32, t34, 14, t35, 32);
    t37 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t37, t36, 0, 0, 14, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB37;

LAB42:    t29 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB44;

LAB43:    *((unsigned int *)t30) = 1;
    goto LAB44;

LAB46:    xsi_set_current_line(72, ng0);

LAB49:    xsi_set_current_line(73, ng0);
    t32 = (t0 + 3224);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng4)));
    memset(t36, 0, 8);
    xsi_vlog_unsigned_add(t36, 32, t34, 14, t35, 32);
    t37 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t37, t36, 0, 0, 14, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB48;

LAB52:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB54;

LAB53:    *((unsigned int *)t11) = 1;
    goto LAB54;

LAB56:    xsi_set_current_line(82, ng0);

LAB59:    xsi_set_current_line(83, ng0);
    t31 = (t0 + 3384);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng4)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t33, 3, t34, 32);
    t35 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t35, t30, 0, 0, 3, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB58;

LAB63:    t29 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB65;

LAB64:    *((unsigned int *)t30) = 1;
    goto LAB65;

LAB67:    xsi_set_current_line(102, ng0);

LAB70:    xsi_set_current_line(103, ng0);
    t32 = (t0 + 3224);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng4)));
    memset(t36, 0, 8);
    xsi_vlog_unsigned_add(t36, 32, t34, 14, t35, 32);
    t37 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t37, t36, 0, 0, 14, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB69;

}

static void Cont_130_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 3864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5712);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 5616);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_131_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 5632);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000000414333928_1656786036_init()
{
	static char *pe[] = {(void *)Always_25_0,(void *)Cont_130_1,(void *)Cont_131_2};
	xsi_register_didat("work_m_00000000000414333928_1656786036", "isim/Uart_tx_isim_beh.exe.sim/work/m_00000000000414333928_1656786036.didat");
	xsi_register_executes(pe);
}
