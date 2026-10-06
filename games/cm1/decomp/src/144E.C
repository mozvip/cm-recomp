/* @at 144e:000e */
/* @data 5d9c:0094 */
/* @module */

/* The game's main module: the start-up menus and the season loop, one week per pass. */

#include <string.h>

void f_14d2_04d1(char c);
void f_14d2_0c19(void);
void f_14d2_1105(void);
void f_1680_150c(int n, char far *title, char far *items);
void f_1680_084a(void);
void f_1680_08c5(void);
void f_1680_0952(void);
void f_1680_0a8a(void);
void f_1680_1484(void);
void f_1680_341b(void);
void f_1ab2_004b(void);
void f_1ab2_0067(void);

void f_67ee_0000(void);
void f_67ee_3212(char);
void f_6e68_12fd(int, int, int);
void f_6e68_3366(void);
void f_7555_0634(void);
void f_7eeb_12d7(void);
void f_7eeb_1da6(void);
void f_7eeb_3198(void);
void f_7eeb_363e(void);
void f_7eeb_37b1(void);
void f_7eeb_3b9a(void);
void f_7eeb_3d47(void);
void f_7eeb_3fa2(void);
void f_8352_0000(void);
void f_8352_0220(void);
void f_8352_052a(void);
void f_8352_0792(void);
void f_8352_1079(void);
void f_88c9_24f1(char far *);
void f_88c9_41a8(void);
void f_88c9_4855(void);
void f_88c9_4b98(void);
void f_88c9_4ee2(void);
void f_88c9_516f(void);
void f_88c9_741e(void);
void f_9100_0000(void);
void f_9100_0300(void);
void f_9100_044e(void);
void f_9100_04ed(void);
void f_9100_23c7(void);
void f_9100_2583(void);
void f_9100_2832(void);
void f_9100_2f2d(int);
void f_9100_34d9(void);
void f_9100_3827(void);
void f_9100_418b(void);
void f_9100_43fe(void);
void f_992a_0e0e(int);
void f_992a_0e6d(char far *);
void f_992a_2771(void);
void f_992a_2e73(void);
void f_992a_2fe0(void);
void f_992a_3129(int);
void f_992a_438f(void);
void f_992a_4ce3(void);
void f_992a_51d4(void);
void f_992a_6ae4(void);
char f_992a_700a(int);
char f_992a_7059(int);
char f_992a_70a8(int);
char f_992a_70d2(int);
char f_992a_7129(int);
char f_992a_7170(int);
char f_992a_71db(int);
char f_992a_723a(int);
char f_992a_728d(int);
char f_992a_7713(int);
char f_992a_7831(int);
void f_992a_7e35(int);
void f_a1c3_1d3f(char);
void f_a1c3_26aa(void);
void f_a1c3_4a04(void);
void f_a1c3_515d(void);
void f_a1c3_5826(void);
void f_a1c3_59ba(void);
void f_a1c3_5bba(void);

extern int d_5d9c_984a;
extern char d_5d9c_1cec;                /* music available */
extern char d_5d9c_9b38, d_5d9c_9b8d, d_5d9c_9b8f, d_5d9c_9b90, d_5d9c_9b91, d_5d9c_9b92;
extern int d_5d9c_9faf;                 /* menu choice */
extern int d_5d9c_9fab;                 /* week of the season, 0..94 */
extern int d_5d9c_9fa9, d_5d9c_9fa7;    /* season */
extern int d_5d9c_9ee3;
extern int d_5d9c_9f85, d_5d9c_9f87, d_5d9c_9f89, d_5d9c_9f8b, d_5d9c_9f8d, d_5d9c_9f8f;
extern int d_5d9c_9f93, d_5d9c_9f95, d_5d9c_9f97, d_5d9c_9f99, d_5d9c_9f9b, d_5d9c_9f9d;
extern int d_5d9c_9f9f, d_5d9c_9fa3, d_5d9c_9fa5;
extern int far d_483b_a174[];

unsigned char d_5d9c_0094[22] = {
    1, 1, 2, 2, 3, 3, 4, 4, 4, 4, 5, 5, 6, 6, 7, 7, 7, 7, 10, 10, 10, 10
};
char *d_5d9c_00aa[11] = {
    "Season Disk", "Managers/Staff", "Players", "Euro/Nonlge Teams", "Club Records",
    "Managers/Staff", "Players", "Fixture List", "Retirements", "Squads/Pools", "Short Lists"
};
unsigned char d_5d9c_00d6[16] = { 1, 1, 9, 6, 12, 4, 6, 1, 1, 6, 12, 7, 5, 1, 8, 4 };
long d_5d9c_00e6 = 0;
int d_5d9c_00ea = 12000;

void main(int argc, char *argv[])
{
    char buf[320];

    d_5d9c_984a = 0x8000;
    f_14d2_04d1(argc > 1 ? argv[1][0] : 0);
    f_14d2_0c19();
    f_a1c3_26aa();
    f_992a_6ae4();
    f_14d2_1105();
    strcpy(buf, "*Exit|Printer On|Printer Off|");
    if (d_5d9c_1cec)
        strcat(buf, "Music On|Music Off|");
    for (;;) {
        f_1680_150c(0, "Printer Option", buf);
        if (d_5d9c_9faf == 0)
            break;
        if (d_5d9c_9faf == 1) {
            f_992a_0e6d("Put printer on line to continue");
            f_992a_0e0e(1);
            d_5d9c_9b8f = -1;
        } else if (d_5d9c_9faf == 2)
            d_5d9c_9b8f = 0;
        if (d_5d9c_9faf == 3)
            f_1ab2_004b();
        else if (d_5d9c_9faf == 4)
            f_1ab2_0067();
    }
    f_1680_150c(0, "Championship Manager", "New Game|Continue Season|Quick Start|");
    if (d_5d9c_9faf == 1) {
        f_992a_51d4();
        if (d_5d9c_9fab < 95)
            goto week;
        goto season_end;
    }
    if (d_5d9c_9faf == 2) {
        f_992a_51d4();
        f_992a_7e35(0);
        goto week;
    }
    f_a1c3_4a04();
    f_1680_084a();
    f_9100_0300();
    f_9100_0000();
    f_88c9_41a8();
    f_9100_044e();
    f_9100_04ed();
    f_7eeb_37b1();
    f_9100_23c7();
    for (;;) {
        d_5d9c_9b92 = -1;
        f_a1c3_5bba();
        f_a1c3_515d();
        f_9100_2f2d(d_5d9c_9fa9);
        f_9100_3827();
        if (d_5d9c_9fa7 == 1)
            f_992a_3129(120);
        f_1680_1484();
        f_a1c3_5826();
        f_a1c3_59ba();
        f_8352_0792();
        f_8352_1079();
        f_7eeb_3198();
        f_7eeb_363e();
        f_7eeb_1da6();
        f_7eeb_3d47();
        d_5d9c_9b92 = 0;
        while (d_5d9c_9fab < 95) {
            if (d_5d9c_9fab % 9 == 4 && d_5d9c_9fab > 4) {
                f_a1c3_1d3f(0);
                if (!d_5d9c_9b8d)
                    f_67ee_3212(0);
                f_1680_08c5();
            }
            if ((d_5d9c_9fab & 1) || d_5d9c_9fab < 7)
                f_1680_0952();
            if (d_5d9c_9fab < 5)
                f_6e68_3366();
            else if (d_5d9c_9fab == 66)
                f_88c9_24f1("Transfer deadline is this week");
            else if (d_5d9c_9fab == 67)
                f_88c9_24f1("Transfer deadline has now passed");
            d_5d9c_9b91 = -1;
            if (f_992a_7831(d_5d9c_9fab)) {
                if (d_483b_a174[d_5d9c_9fab] == 0)
                    d_5d9c_9b91 = 0;
            } else if (d_5d9c_9fab == 7 && d_5d9c_9ee3 == 0)
                d_5d9c_9b91 = 0;
            else if (d_5d9c_9fab == 81 || d_5d9c_9fab == 93)
                d_5d9c_9b91 = 0;
            if (d_5d9c_9fab % 16 == 0)
                f_992a_4ce3();
            f_1680_0a8a();
            if (d_5d9c_9b91) {
                if (f_992a_7059(d_5d9c_9fab))
                    d_5d9c_9fa5 = 0;
                if (f_992a_70d2(d_5d9c_9fab))
                    d_5d9c_9fa3 = 0;
                if (f_992a_7129(d_5d9c_9fab))
                    d_5d9c_9f9f = 0;
                if (f_992a_7170(d_5d9c_9fab))
                    d_5d9c_9f9d = 0;
                if (f_992a_71db(d_5d9c_9fab))
                    d_5d9c_9f9b = 0;
                if (f_992a_723a(d_5d9c_9fab))
                    d_5d9c_9f99 = 0;
                if (f_992a_728d(d_5d9c_9fab))
                    d_5d9c_9f97 = 0;
week:
                f_67ee_0000();
                f_992a_3129(15);
                if (d_5d9c_9b90 == 0) {
                    f_6e68_12fd(d_5d9c_9fab, 0, -1);
                    f_7555_0634();
                    if (d_5d9c_9fab == 94)
                        f_7eeb_12d7();
                    else if (f_992a_700a(d_5d9c_9fab)) {
                        f_7eeb_3fa2();
                        f_88c9_741e();
                        f_7eeb_12d7();
                    } else {
                        if (d_5d9c_9fab == 53 || d_5d9c_9fab == 59 || d_5d9c_9fab == 67 ||
                            d_5d9c_9fab == 71 || d_5d9c_9fab == 75 || d_5d9c_9fab == 79)
                            f_8352_0000();
                        if (f_992a_7170(d_5d9c_9fab) && d_5d9c_9fab < 68)
                            f_8352_0220();
                    }
                    f_6e68_12fd(d_5d9c_9fab, 1, -1);
                    if (f_992a_7059(d_5d9c_9fab) || d_5d9c_9fab == 82) {
                        d_5d9c_9f95 = d_5d9c_9f93;
                        if (d_5d9c_9f95 > 0) {
                            if (d_5d9c_9fab == 82) {
                                d_5d9c_9f8f = 83;
                                d_483b_a174[d_5d9c_9f8f] = d_5d9c_9f95;
                            } else {
                                d_5d9c_9f8d = d_5d9c_9fab + 1;
                                d_483b_a174[d_5d9c_9f8d] = d_5d9c_9f95;
                            }
                        }
                    } else if (f_992a_7831(d_5d9c_9fab))
                        d_5d9c_9f95 = 0;
                    if (d_5d9c_9fab == 31)
                        f_7eeb_1da6();
                    else if (f_992a_70a8(d_5d9c_9fab) && d_5d9c_9f95 == 0 && d_5d9c_9fab < 88)
                        f_7eeb_1da6();
                    else if (f_992a_70d2(d_5d9c_9fab) && d_5d9c_9fab < 82 && d_5d9c_9fab != 9 &&
                             d_5d9c_9fab != 61)
                        f_7eeb_1da6();
                    else if (f_992a_7713(d_5d9c_9fab) && d_5d9c_9fab < 91 || d_5d9c_9fab == 79)
                        f_7eeb_1da6();
                    else if (d_5d9c_9fab == 67 || d_5d9c_9fab == 71 || d_5d9c_9fab == 73)
                        f_7eeb_1da6();
                    else if (f_992a_7129(d_5d9c_9fab) && d_5d9c_9fab < 53)
                        f_7eeb_1da6();
                    switch (d_5d9c_9fab) {
                    case 9:
                        d_5d9c_9f8f = 13;
                        break;
                    case 11:
                        d_5d9c_9f8b = 15;
                        break;
                    case 17:
                        d_5d9c_9f89 = 21;
                        d_5d9c_9f87 = 21;
                        break;
                    case 23:
                        d_5d9c_9f8b = 25;
                        break;
                    case 31:
                        d_5d9c_9f8b = 35;
                        d_5d9c_9f89 = 35;
                        d_5d9c_9f87 = 35;
                        break;
                    case 53:
                        d_5d9c_9f87 = 59;
                        break;
                    case 59:
                        d_5d9c_9f87 = 67;
                        break;
                    case 61:
                        d_5d9c_9f8f = 65;
                        break;
                    case 67:
                    case 71:
                    case 75:
                        d_5d9c_9f87 = d_5d9c_9fab + 4;
                        d_5d9c_9f8b = d_5d9c_9fab + 4;
                        d_5d9c_9f89 = d_5d9c_9fab + 4;
                        break;
                    case 79:
                        d_5d9c_9f8b = 87;
                        d_5d9c_9f89 = 91;
                        d_5d9c_9f87 = 91;
                        break;
                    case 87:
                        d_5d9c_9f8b = 91;
                        break;
                    }
                    if (d_5d9c_9fab == 86 || d_5d9c_9fab == 92)
                        f_7eeb_3b9a();
                    f_992a_2771();
                    f_992a_2fe0();
                    d_5d9c_9f85 -= f_992a_700a(d_5d9c_9fab);
                    if (d_5d9c_9fab > 20)
                        f_88c9_4b98();
                    f_88c9_4ee2();
                    f_88c9_516f();
                }
            }
            if ((d_5d9c_9fab & 1) == 0 || d_5d9c_9fab < 7) {
                if ((d_5d9c_9fab & 1) == 0 && d_5d9c_9fab > 5)
                    f_992a_2e73();
                f_1680_341b();
                f_8352_052a();
                f_992a_438f();
            }
            d_5d9c_9fab++;
        }
season_end:
        f_67ee_0000();
        d_5d9c_9b38 = -1;
        f_a1c3_1d3f(-1);
        if (!d_5d9c_9b8d)
            f_67ee_3212(-1);
        f_9100_2583();
        f_9100_418b();
        f_9100_23c7();
        f_9100_43fe();
        f_9100_2832();
        f_88c9_4855();
        f_9100_34d9();
        d_5d9c_9b38 = 0;
        d_5d9c_9fa7++;
    }
}
