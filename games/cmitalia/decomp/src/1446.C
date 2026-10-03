/* @at 1446:0009 */
/* @data 5d51:0094 */
/* @module */

/* The game's main module: the start-up menus and the season loop, one week per pass.
   CM Italia's version of CM93's (games/cm93/decomp/src/1446.C): 101 weeks, a reset of the
   game's tables at start-up, two players whose ratings are set by name, separate domestic
   and foreign transfer deadlines, and the dates of the next fixtures moved forward by
   their own functions. */

#include <stdio.h>
#include <string.h>

void f_1446_06ca(void);
void f_1446_1e2b(void);
void f_1446_1e7d(void);
void f_1446_1ecf(void);
void f_1446_1f21(void);
void f_1446_1f73(void);
void f_1d5e_03d0(char c);
int f_1d5e_0c17(void);
void f_1d5e_0d59(void);
void f_1646_0bf2(char far *);
char f_1646_0ccd(void);
char f_1646_258b(int);
char f_1646_2646(int);
char f_1646_2674(int);
char f_1646_26cf(int);
char f_1646_2726(int);
char f_1646_2785(int);
char f_1646_27d8(int);
char f_1646_2ba4(int);
char f_1646_2c1c(int);
void f_1646_2fa4(int n, char far *title, char far *items);
void f_1646_3348(int);
char far *f_1646_470f(int);
void f_1646_4ba0(char far *title);
void f_1646_60a7(void);

void f_6b47_0000(void);
void f_6b47_3258(char);
void f_71c8_1349(void);
void f_71c8_13ca(int, int, int);
void f_71c8_2fa9(void);
void f_76ea_00eb(void);
void f_8119_130b(void);
void f_8119_18d0(void);
void f_8119_2d27(void);
void f_8119_325e(void);
void f_8119_33d1(void);
void f_8119_3574(void);
void f_8119_36f8(void);
void f_8539_0000(void);
void f_8539_0238(void);
void f_8539_06be(void);
void f_8539_0966(void);
void f_8539_12d9(void);
void f_8539_1bf1(void);
void f_8ba7_34ed(void);
void f_8ba7_3d47(void);
void f_8ba7_407f(void);
void f_8ba7_4421(void);
void f_8ba7_477e(void);
void f_9182_1618(void);
void f_9182_1a19(void);
void f_9182_1c3b(void);
void f_9182_1dc1(void);
void f_9182_1f7d(void);
void f_9182_234b(void);
void f_9182_298b(int);
void f_9182_2f15(void);
void f_9182_3210(void);
void f_9182_3807(void);
void f_9182_3e11(void);
void f_9915_04a5(char far *);
void f_9915_0548(void);
void f_9915_0afd(void);
void f_9915_0c8b(void);
void f_9915_0dd8(int);
void f_9915_138e(int, int, int);
void f_9915_1def(void);
void f_9915_280d(void);
void f_9915_2bb5(char);
void f_9915_476a(void);
void f_9915_4dfd(int);
void f_9e79_03b4(void);
void f_9e79_0438(void);
void f_9e79_04ad(void);
void f_9e79_05eb(void);
void f_9e79_1063(void);
void f_9e79_222f(void);
void f_a13d_1ca2(char);
void f_a13d_2129(void);
void f_a13d_3690(void);
void f_a13d_3e44(void);
void f_a13d_45f4(void);
void f_a13d_474a(void);
void f_a13d_492e(void);
void f_a7f0_0000(void);
void f_a7f0_0290(void);
void f_a7f0_34c8(void);
void f_a7f0_4061(void);
void f_a7f0_4066(void);
void f_a7f0_4092(char);
void f_a7f0_4226(void);
void f_a7f0_425e(void);
void f_a7f0_6001(void);
void f_a7f0_60fc(void);
void f_b0f1_0d60(void);
void f_b0f1_20fc(void);
void f_b0f1_28de(void);
void f_b0f1_47af(void);
void f_b0f1_48ea(void);
void f_b0f1_4c49(void);
void f_b0f1_4e24(void);
void f_b0f1_6516(void);
void f_b0f1_68b8(void);
void f_b0f1_69cc(void);
void f_b0f1_6b12(void);
void f_b0f1_6c58(void);
void f_b0f1_75b5(void);
void f_b0f1_7660(void);
void f_b8e8_1e9f(void);
void f_b8e8_20b3(void);

extern int d_5d51_d28a;
extern int d_5d51_daba;
extern int d_5d51_da0a;                 /* menu choice */
extern int d_5d51_da06;                 /* week of the season, 0..100 */
extern int d_5d51_da04;                 /* season */
extern int d_5d51_da1a;                 /* number of players */
extern int d_5d51_da16, d_5d51_da14, d_5d51_da12, d_5d51_da10;
extern char d_5d51_d5e7;                /* printer on */
extern char d_5d51_d55c, d_5d51_d5e4, d_5d51_d5e5, d_5d51_d5ea, d_5d51_d55a, d_5d51_d586;
extern int d_5d51_da02, d_5d51_d9fc, d_5d51_d9fa, d_5d51_d9f8, d_5d51_d9f6;
extern int d_5d51_da0e, d_5d51_da0c;
extern int d_5d51_d9ee, d_5d51_d998, d_5d51_d9e8, d_5d51_d9ea, d_5d51_d9ec;
extern char far d_44d7_a5e0[];
extern char far d_44d7_a594[];
extern char far d_44d7_9ddc[];
extern char far d_44d7_9624[];
extern char far d_44d7_958c[];
extern char far d_44d7_93fc[];
extern char far d_44d7_92f8[];
extern char far *d_5d51_da5c;
extern char far d_44d7_9260[];
extern char far *d_5d51_da58;
extern char far *d_5d51_da54;
extern char far *d_5d51_da50;
extern char far d_44d7_8e60[];
extern char far d_44d7_8cd0[];
extern char far d_44d7_8caa[];
extern char far d_44d7_8ca0[];
extern char far d_44d7_0000[];
extern char far d_3c0d_0000[];
extern char far d_3404_51ac[];
extern char far *d_5d51_da4c;
extern char far d_3404_51a2[];
extern char far d_3404_5142[];
extern char far d_3404_5102[];
extern char far d_3404_50e2[];
extern char far d_3404_502e[];
extern char far d_3404_4f7a[];
extern char far d_3404_443a[];
extern char far d_3404_40aa[];
extern char far d_3404_3e4a[];
extern char far d_3404_1abe[];
extern char far *d_5d51_da48;
extern char far d_3404_1ab4[];
extern char far d_3404_1334[];
extern char far d_3404_0e34[];
extern char far d_3404_0e2e[];
extern char far d_3404_0dce[];
extern char far d_3404_0dae[];
extern char far d_3404_0d8e[];
extern char far d_3404_074e[];
extern char far d_3404_0728[];
extern char far d_3404_0726[];
extern char far d_3404_0724[];
extern char far d_3404_0720[];
extern char far d_3404_0260[];
extern char far d_3404_0000[];
extern char far *d_5d51_da44;
extern char far d_2414_fe5c[];
extern char far d_2414_fd6c[];
extern char far d_2414_fcec[];
extern char far d_2414_fce4[];
extern char far d_2414_f1f4[];
extern char far d_2414_f168[];
extern char far d_2414_eda8[];
extern char far d_2414_ed6c[];
extern char far d_2414_ecec[];
extern char far d_2414_e5d0[];
extern char far d_2414_dae0[];
extern char far d_2414_d8c4[];
extern char far *d_5d51_da40;
extern char far *d_5d51_da3c;
extern char far d_2414_d694[];
extern char far d_2414_d63c[];
extern char far d_2414_d62c[];
extern char far d_2414_d60c[];
extern char far d_2414_d604[];
extern char far d_2414_d5f4[];
extern char far d_2414_d5e4[];
extern char far d_2414_d5b4[];
extern char far d_2414_d578[];
extern char far d_2414_d52c[];
extern char far d_2414_d494[];
extern char far d_2414_d3e0[];
extern char far d_2414_d2c8[];
extern char far d_2414_d28c[];
extern char far *d_5d51_da38;
extern char far *d_5d51_da34;
extern char far d_2414_c6ac[];
extern char far d_2414_af3c[];
extern char far d_2414_a5dc[];
extern char far d_2414_a46c[];
extern char far d_2414_97a8[];
extern char far d_2414_9618[];
extern char far d_2414_8a20[];
extern char far d_2414_84c2[];
extern char far d_2414_5894[];
extern char far d_2414_5890[];
extern char far d_2414_5590[];
extern char far d_2414_5460[];
extern char far d_2414_544c[];
extern char far d_2414_5426[];
extern char far d_2414_5400[];
extern char far d_2414_539c[];
extern char far d_2414_52cc[];
extern char far *d_5d51_da30;
extern char far d_2414_52a4[];
extern char far d_2414_5164[];
extern char far d_2414_5114[];
extern char far d_2414_50c4[];
extern char far d_2414_5074[];
extern char far d_2414_5024[];
extern char far d_2414_4fd4[];
extern char far d_2414_4f84[];
extern char far d_2414_4f34[];
extern char far d_2414_4ee4[];
extern char far d_2414_4e94[];
extern char far d_2414_4e44[];
extern char far d_2414_4df4[];
extern char far d_2414_4da4[];
extern char far d_2414_4d86[];
extern char far d_2414_4d36[];
extern char far d_2414_4ce6[];
extern char far d_2414_4c96[];
extern char far d_2414_4c46[];
extern char far d_2414_4bf6[];
extern char far d_2414_4ba6[];
extern char far d_2414_4b56[];
extern char far d_2414_4b06[];
extern char far d_2414_4ab6[];
extern char far d_2414_4a66[];
extern char far d_2414_4a52[];
extern char far d_2414_4a3e[];
extern char far d_2414_4a02[];
extern char far d_2414_4962[];
extern char far d_2414_4944[];
extern char far d_2414_48f4[];
extern char far d_2414_48a4[];
extern char far d_2414_4854[];
extern char far d_2414_4804[];
extern char far d_2414_47b4[];
extern char far d_2414_4764[];
extern char far d_2414_4714[];
extern char far d_2414_46c4[];
extern char far d_2414_4674[];
extern char far d_2414_4624[];
extern char far d_2414_45d4[];
extern char far d_2414_4584[];
extern char far d_2414_4534[];
extern char far d_2414_44e4[];
extern char far d_2414_4494[];
extern char far d_2414_4444[];
extern char far d_2414_43f4[];
extern char far d_2414_43a4[];
extern char far d_2414_4354[];
extern char far d_2414_4304[];
extern char far d_2414_42b4[];
extern char far d_2414_4264[];
extern char far d_2414_4214[];
extern char far d_2414_41c4[];
extern char far d_2414_4174[];
extern char far d_2414_4124[];
extern char far d_2414_40d4[];
extern char far d_2414_4084[];
extern char far d_2414_4034[];
extern char far d_2414_3fe4[];
extern char far d_2414_3fe2[];
extern char far d_2414_3fe0[];
extern char far d_2414_3f90[];
extern char far d_2414_3f40[];
extern char far d_2414_3ef0[];
extern char far d_2414_3db0[];
extern char far d_2414_3d60[];
extern char far d_2414_3c20[];
extern char far d_2414_3ae0[];
extern char far d_2414_3a90[];
extern char far d_2414_3a40[];
extern char far d_2414_39f0[];
extern char far d_2414_39a0[];
extern char far d_2414_3950[];
extern char far d_2414_3810[];
extern char far d_2414_37c0[];
extern char far d_2414_3770[];
extern char far d_2414_376e[];
extern char far d_2414_371e[];
extern char far d_2414_36ce[];
extern char far d_2414_367e[];
extern char far d_2414_362e[];
extern char far d_2414_35de[];
extern char far d_2414_358e[];
extern char far d_2414_353e[];
extern char far d_2414_3516[];
extern char far d_2414_34c6[];
extern char far d_2414_3476[];
extern char far d_2414_3426[];
extern char far d_2414_33d6[];
extern char far d_2414_3386[];
extern char far d_2414_3336[];
extern char far d_2414_321e[];
extern char far d_2414_3106[];
extern char far d_2414_30b6[];
extern char far d_2414_3066[];
extern char far d_2414_305c[];
extern char far d_2414_300c[];
extern char far d_2414_2fbc[];
extern char far d_2414_2f6c[];
extern char far d_2414_2f1c[];
extern char far d_2414_2ecc[];
extern char far d_2414_2e7c[];
extern char far d_2414_2e2c[];
extern char far d_2414_2ddc[];
extern char far d_2414_2d8c[];
extern char far d_2414_2d3c[];
extern char far d_2414_2cec[];
extern char far d_2414_2c9c[];
extern char far d_2414_2c4c[];
extern char far d_2414_2bfc[];
extern char far d_2414_2bac[];
extern char far d_2414_2b5c[];
extern char far d_2414_2b0c[];
extern char far d_2414_2abc[];
extern char far d_2414_2a6c[];
extern char far d_2414_2a1c[];
extern char far d_2414_29cc[];
extern char far d_2414_297c[];
extern char far d_2414_292c[];
extern char far d_2414_28dc[];
extern char far d_2414_288c[];
extern char far d_2414_283c[];
extern char far d_2414_27ec[];
extern char far d_2414_279c[];
extern char far d_2414_274c[];
extern char far d_2414_26fc[];
extern char far d_2414_26ac[];
extern char far d_2414_265c[];
extern char far d_2414_260c[];
extern char far d_2414_25bc[];
extern char far d_2414_2558[];
extern char far d_2414_2508[];
extern char far d_2414_24b8[];
extern char far d_2414_2468[];
extern char far d_2414_2418[];
extern char far d_2414_23c8[];
extern char far d_2414_2378[];
extern char far d_2414_2328[];
extern char far d_2414_22d8[];
extern char far d_2414_2288[];
extern char far d_2414_2238[];
extern char far d_2414_21e8[];
extern char far d_2414_2198[];
extern char far d_2414_2148[];
extern char far d_2414_2134[];
extern char far d_2414_20e4[];
extern char far d_2414_2094[];
extern char far d_2414_206c[];
extern char far d_2414_2058[];
extern char far d_2414_2008[];
extern char far d_2414_1fb8[];
extern char far *d_5d51_da2c;
extern char far d_2414_1e28[];
extern char far *d_5d51_da28;
extern char far d_2414_0e88[];
extern char far *d_5d51_da24;
extern char far *d_5d51_da20;
extern char far *d_5d51_da1c;
extern char far d_2414_0848[];
extern char far d_2414_00c8[];
extern char far d_2414_00a0[];
extern char far d_2414_0078[];
extern char far d_2414_0050[];
extern char far d_2414_0028[];
extern char far d_2414_0000[];

long d_5d51_0094 = 0;
long d_5d51_0098 = 0;
int d_5d51_009c = 18000;

void main(int argc, char *argv[])
{
    char choice;
    char busy;
    int i;

    f_1446_06ca();
    d_5d51_d28a = 0x8000;
    f_1d5e_03d0(argc > 1 ? argv[1][0] : 0);
    f_1d5e_0d59();
    f_a13d_2129();
    f_1646_60a7();
    f_9915_476a();
    if (d_5d51_daba == 0)
        f_b0f1_68b8();
    f_b8e8_20b3();
    do {
        f_1646_4ba0("Championship Manager Italia");
        f_1646_2fa4(0, "", "*Help|New Game|Continue Season|Quick Start|");
again:
        f_1646_3348(3);
        if (d_5d51_da0a == 0)
            f_b0f1_69cc();
        else if (d_5d51_da0a == 1 && !f_1646_0ccd())
            goto again;
    } while (d_5d51_da0a == 0);
    choice = d_5d51_da0a;
    f_b8e8_1e9f();
printer:
    f_1646_2fa4(0, "Printer Option", "Printer On|Printer Off|");
    if (d_5d51_da0a == 0) {
        if (f_1646_0ccd() == 0)
            goto printer;
        busy = 0;
        if (busy == 0) {
            f_a7f0_4061();
            f_9915_04a5("Put printer on line to continue");
            f_a7f0_4092(1);
            d_5d51_d5e7 = -1;
            f_a7f0_4066();
        }
    } else if (d_5d51_da0a == 1)
        d_5d51_d5e7 = 0;
    if (choice == 2) {
        f_9915_2bb5(0);
        if (d_5d51_da06 <= 100)
            goto week;
        goto season_end;
    }
    if (choice == 3) {
        f_9915_2bb5(1);
        f_9915_4dfd(0);
        goto week;
    }
    f_1646_2fa4(0, "Championship Manager Italia", "1993/94 Players|Fictional Players|");
    d_5d51_d55c = d_5d51_da0a == 0 ? -1 : 0;
    f_a7f0_0000();
    f_a13d_3690();
    f_9e79_03b4();
    f_b0f1_6516();
    f_9182_1c3b();
    f_9182_1a19();
    f_a7f0_0290();
    f_8ba7_34ed();
    f_9182_1dc1();
    f_8119_33d1();
    d_5d51_d5e4 = 0;
    for (;;) {
        d_5d51_d5ea = -1;
        f_a13d_492e();
        f_a13d_3e44();
        f_b0f1_47af();
        f_9182_298b(d_5d51_da16);
        f_9182_298b(d_5d51_da14);
        f_9182_298b(d_5d51_da12);
        f_9182_298b(d_5d51_da10);
        f_9182_3210();
        f_b0f1_4e24();
        f_a7f0_4226();
        if (d_5d51_da04 == 1) {
            if (d_5d51_d55c)
                for (i = 0; i <= d_5d51_da1a - 1; i++)
                    if (strstr(f_1646_470f(i), "Lentini"))
                        f_9915_138e(i, 26, 50);
                    else if (strstr(f_1646_470f(i), "Cannigia"))
                        f_9915_138e(i, 27, 50);
            f_9915_0dd8(90);
        }
        f_9e79_1063();
        f_b0f1_28de();
        f_a13d_45f4();
        f_a13d_474a();
        f_b0f1_75b5();
        f_b0f1_7660();
        f_b0f1_6c58();
        f_8539_0966();
        f_8539_12d9();
        f_8119_2d27();
        d_5d51_d5e4 = 0;
        f_8119_325e();
        f_8119_18d0();
        d_5d51_d5ea = 0;
        while (d_5d51_da06 <= 100) {
            if (d_5d51_da06 % 9 == 0 && d_5d51_da06 >= 18) {
                f_a13d_1ca2(0);
                d_5d51_d55a = -1;
                if (!d_5d51_d5e5)
                    f_6b47_3258(0);
                f_9e79_0438();
            }
            if (d_5d51_da06 % 2 == 1)
                f_9e79_04ad();
            if (d_5d51_da06 <= 12 && d_5d51_da06 % 2 == 0)
                f_71c8_2fa9();
            if (d_5d51_da06 == 37)
                f_1646_0bf2("Domestic transfers allowed|for one week");
            else if (d_5d51_da06 == 4)
                f_1646_0bf2("Domestic transfer deadline|is this week");
            else if (d_5d51_da06 == 5 || d_5d51_da06 == 39)
                f_1646_0bf2("Domestic transfer deadline|has now passed");
            else if (d_5d51_da06 == 12)
                f_1646_0bf2("Foreign transfer deadline|is this week");
            else if (d_5d51_da06 == 13)
                f_1646_0bf2("Foreign transfer deadline|has now passed");
            if (d_5d51_da06 % 16 == 0)
                f_9915_280d();
            f_9e79_05eb();
            if (f_1646_2c1c(d_5d51_da06) || d_5d51_da06 % 2 == 0) {
                if (f_1646_2674(d_5d51_da06))
                    d_5d51_da02 = 0;
                if (f_1646_26cf(d_5d51_da06))
                    d_5d51_d9fc = 0;
                if (f_1646_2726(d_5d51_da06))
                    d_5d51_d9fa = 0;
                if (f_1646_2785(d_5d51_da06))
                    d_5d51_d9f8 = 0;
                if (f_1646_27d8(d_5d51_da06))
                    d_5d51_d9f6 = 0;
week:
                f_6b47_0000();
                f_9915_0dd8(10);
                f_a7f0_6001();
                if (f_1646_2c1c(d_5d51_da06)) {
                    f_71c8_13ca(d_5d51_da06, 0, -1);
                    f_76ea_00eb();
                    d_5d51_da0e -= f_1646_258b(d_5d51_da06);
                    d_5d51_da0c -= f_1646_2646(d_5d51_da06);
                    if (f_1646_258b(d_5d51_da06) || f_1646_2646(d_5d51_da06)) {
                        f_8119_3574();
                        if (d_5d51_da06 == 96)
                            f_8119_36f8();
                        f_8119_130b();
                    } else if (f_1646_2ba4(d_5d51_da06)) {
                        f_8119_130b();
                        f_9182_1618();
                    } else {
                        if (d_5d51_da06 == 41 || d_5d51_da06 == 45 || d_5d51_da06 == 69 ||
                            d_5d51_da06 == 73 || d_5d51_da06 == 79 || d_5d51_da06 == 83)
                            f_8539_0000();
                        if (d_5d51_da06 == 19 || d_5d51_da06 == 23 || d_5d51_da06 == 29 ||
                            d_5d51_da06 == 37 || d_5d51_da06 == 41 || d_5d51_da06 == 45 ||
                            d_5d51_da06 == 47)
                            f_8539_0238();
                    }
                    f_71c8_13ca(d_5d51_da06, 1, -1);
                    f_8119_18d0();
                    if (f_1646_2674(d_5d51_da06))
                        f_1446_1e2b();
                    if (f_1646_26cf(d_5d51_da06))
                        f_1446_1e7d();
                    if (f_1646_27d8(d_5d51_da06))
                        f_1446_1ecf();
                    if (f_1646_2785(d_5d51_da06))
                        f_1446_1f21();
                    if (f_1646_2726(d_5d51_da06))
                        f_1446_1f73();
                    f_9915_0548();
                    f_9915_0c8b();
                    if (d_5d51_da06 >= 20)
                        f_8ba7_407f();
                    f_8ba7_4421();
                    f_8ba7_477e();
                } else if (d_5d51_da06 % 2 == 0)
                    f_1646_0bf2("No fixtures to be played");
            }
            if (d_5d51_da06 % 2 == 0) {
                if (d_5d51_da06 >= 13)
                    f_9915_0afd();
                f_9e79_222f();
                f_b0f1_48ea();
                f_8539_06be();
                f_a7f0_60fc();
                f_b0f1_20fc();
                f_9915_1def();
            }
            d_5d51_da06++;
        }
season_end:
        f_8539_1bf1();
        f_6b47_0000();
        if (!d_5d51_d5e5) {
            do {
                f_1646_2fa4(0, "Updating Data", "*Help|Pause For News|Don't Pause|Save Game|");
                if (d_5d51_da0a == 0)
                    f_b0f1_6b12();
                else if (d_5d51_da0a == 3)
                    f_71c8_1349();
            } while (d_5d51_da0a == 0 || d_5d51_da0a == 3);
            d_5d51_d5e4 = d_5d51_da0a == 2 ? -1 : 0;
        }
        d_5d51_d586 = -1;
        f_a13d_1ca2(-1);
        if (!d_5d51_d5e5)
            f_6b47_3258(-1);
        f_9182_1f7d();
        f_b0f1_0d60();
        f_9182_3807();
        f_b0f1_4c49();
        f_b0f1_6516();
        f_9182_3e11();
        f_a7f0_425e();
        f_9182_234b();
        f_8ba7_3d47();
        f_9182_2f15();
        f_a7f0_34c8();
        d_5d51_d586 = 0;
        d_5d51_da04++;
    }
}

/* clear the game's tables */
void f_1446_06ca(void)
{
    memset(d_44d7_a5e0, 0, 24);
    memset(d_44d7_a594, 0, 76);
    memset(d_44d7_9ddc, 0, 1976);
    memset(d_44d7_9624, 0, 1976);
    memset(d_44d7_958c, 0, 152);
    memset(d_44d7_93fc, 0, 400);
    memset(d_44d7_92f8, 0, 260);
    memset(d_5d51_da5c, 0, 4);
    memset(d_44d7_9260, 0, 152);
    memset(d_5d51_da58, 0, 4);
    memset(d_5d51_da54, 0, 4);
    memset(d_5d51_da50, 0, 4);
    memset(d_44d7_8e60, 0, 1024);
    memset(d_44d7_8cd0, 0, 400);
    memset(d_44d7_8caa, 0, 38);
    memset(d_44d7_8ca0, 0, 10);
    memset(d_44d7_0000, 0, 36000);
    memset(d_3c0d_0000, 0, 36000);
    memset(d_3404_51ac, 0, 12000);
    memset(d_5d51_da4c, 0, 4);
    memset(d_3404_51a2, 0, 10);
    memset(d_3404_5142, 0, 96);
    memset(d_3404_5102, 0, 64);
    memset(d_3404_50e2, 0, 32);
    memset(d_3404_502e, 0, 180);
    memset(d_3404_4f7a, 0, 180);
    memset(d_3404_443a, 0, 2880);
    memset(d_3404_40aa, 0, 912);
    memset(d_3404_3e4a, 0, 608);
    memset(d_3404_1abe, 0, 9100);
    memset(d_5d51_da48, 0, 4);
    memset(d_3404_1ab4, 0, 10);
    memset(d_3404_1334, 0, 1920);
    memset(d_3404_0e34, 0, 1280);
    memset(d_3404_0e2e, 0, 6);
    memset(d_3404_0dce, 0, 96);
    memset(d_3404_0dae, 0, 32);
    memset(d_3404_0d8e, 0, 32);
    memset(d_3404_074e, 0, 1600);
    memset(d_3404_0728, 0, 38);
    memset(d_3404_0726, 0, 2);
    memset(d_3404_0724, 0, 2);
    memset(d_3404_0720, 0, 4);
    memset(d_3404_0260, 0, 1216);
    memset(d_3404_0000, 0, 608);
    memset(d_5d51_da44, 0, 4);
    memset(d_2414_fe5c, 0, 160);
    memset(d_2414_fd6c, 0, 240);
    memset(d_2414_fcec, 0, 128);
    memset(d_2414_fce4, 0, 8);
    memset(d_2414_f1f4, 0, 2800);
    memset(d_2414_f168, 0, 140);
    memset(d_2414_eda8, 0, 960);
    memset(d_2414_ed6c, 0, 60);
    memset(d_2414_ecec, 0, 128);
    memset(d_2414_e5d0, 0, 1820);
    memset(d_2414_dae0, 0, 2800);
    memset(d_2414_d8c4, 0, 540);
    memset(d_5d51_da40, 0, 4);
    memset(d_5d51_da3c, 0, 4);
    memset(d_2414_d694, 0, 560);
    memset(d_2414_d63c, 0, 88);
    memset(d_2414_d62c, 0, 16);
    memset(d_2414_d60c, 0, 32);
    memset(d_2414_d604, 0, 8);
    memset(d_2414_d5f4, 0, 16);
    memset(d_2414_d5e4, 0, 16);
    memset(d_2414_d5b4, 0, 48);
    memset(d_2414_d578, 0, 60);
    memset(d_2414_d52c, 0, 76);
    memset(d_2414_d494, 0, 152);
    memset(d_2414_d3e0, 0, 180);
    memset(d_2414_d2c8, 0, 280);
    memset(d_2414_d28c, 0, 60);
    memset(d_5d51_da38, 0, 4);
    memset(d_5d51_da34, 0, 4);
    memset(d_2414_c6ac, 0, 3040);
    memset(d_2414_af3c, 0, 6000);
    memset(d_2414_a5dc, 0, 2400);
    memset(d_2414_a46c, 0, 368);
    memset(d_2414_97a8, 0, 3268);
    memset(d_2414_9618, 0, 400);
    memset(d_2414_8a20, 0, 3064);
    memset(d_2414_84c2, 0, 608);
    memset(d_2414_5894, 0, 11136);
    memset(d_2414_5890, 0, 4);
    memset(d_2414_5590, 0, 768);
    memset(d_2414_5460, 0, 304);
    memset(d_2414_544c, 0, 20);
    memset(d_2414_5426, 0, 38);
    memset(d_2414_5400, 0, 38);
    memset(d_2414_539c, 0, 100);
    memset(d_2414_52cc, 0, 208);
    memset(d_5d51_da30, 0, 4);
    memset(d_2414_52a4, 0, 40);
    memset(d_2414_5164, 0, 320);
    memset(d_2414_5114, 0, 80);
    memset(d_2414_50c4, 0, 80);
    memset(d_2414_5074, 0, 80);
    memset(d_2414_5024, 0, 80);
    memset(d_2414_4fd4, 0, 80);
    memset(d_2414_4f84, 0, 80);
    memset(d_2414_4f34, 0, 80);
    memset(d_2414_4ee4, 0, 80);
    memset(d_2414_4e94, 0, 80);
    memset(d_2414_4e44, 0, 80);
    memset(d_2414_4df4, 0, 80);
    memset(d_2414_4da4, 0, 80);
    memset(d_2414_4d86, 0, 30);
    memset(d_2414_4d36, 0, 80);
    memset(d_2414_4ce6, 0, 80);
    memset(d_2414_4c96, 0, 80);
    memset(d_2414_4c46, 0, 80);
    memset(d_2414_4bf6, 0, 80);
    memset(d_2414_4ba6, 0, 80);
    memset(d_2414_4b56, 0, 80);
    memset(d_2414_4b06, 0, 80);
    memset(d_2414_4ab6, 0, 80);
    memset(d_2414_4a66, 0, 80);
    memset(d_2414_4a52, 0, 20);
    memset(d_2414_4a3e, 0, 20);
    memset(d_2414_4a02, 0, 60);
    memset(d_2414_4962, 0, 160);
    memset(d_2414_4944, 0, 30);
    memset(d_2414_48f4, 0, 80);
    memset(d_2414_48a4, 0, 80);
    memset(d_2414_4854, 0, 80);
    memset(d_2414_4804, 0, 80);
    memset(d_2414_47b4, 0, 80);
    memset(d_2414_4764, 0, 80);
    memset(d_2414_4714, 0, 80);
    memset(d_2414_46c4, 0, 80);
    memset(d_2414_4674, 0, 80);
    memset(d_2414_4624, 0, 80);
    memset(d_2414_45d4, 0, 80);
    memset(d_2414_4584, 0, 80);
    memset(d_2414_4534, 0, 80);
    memset(d_2414_44e4, 0, 80);
    memset(d_2414_4494, 0, 80);
    memset(d_2414_4444, 0, 80);
    memset(d_2414_43f4, 0, 80);
    memset(d_2414_43a4, 0, 80);
    memset(d_2414_4354, 0, 80);
    memset(d_2414_4304, 0, 80);
    memset(d_2414_42b4, 0, 80);
    memset(d_2414_4264, 0, 80);
    memset(d_2414_4214, 0, 80);
    memset(d_2414_41c4, 0, 80);
    memset(d_2414_4174, 0, 80);
    memset(d_2414_4124, 0, 80);
    memset(d_2414_40d4, 0, 80);
    memset(d_2414_4084, 0, 80);
    memset(d_2414_4034, 0, 80);
    memset(d_2414_3fe4, 0, 80);
    memset(d_2414_3fe2, 0, 2);
    memset(d_2414_3fe0, 0, 2);
    memset(d_2414_3f90, 0, 80);
    memset(d_2414_3f40, 0, 80);
    memset(d_2414_3ef0, 0, 80);
    memset(d_2414_3db0, 0, 320);
    memset(d_2414_3d60, 0, 80);
    memset(d_2414_3c20, 0, 320);
    memset(d_2414_3ae0, 0, 320);
    memset(d_2414_3a90, 0, 80);
    memset(d_2414_3a40, 0, 80);
    memset(d_2414_39f0, 0, 80);
    memset(d_2414_39a0, 0, 80);
    memset(d_2414_3950, 0, 80);
    memset(d_2414_3810, 0, 320);
    memset(d_2414_37c0, 0, 80);
    memset(d_2414_3770, 0, 80);
    memset(d_2414_376e, 0, 2);
    memset(d_2414_371e, 0, 80);
    memset(d_2414_36ce, 0, 80);
    memset(d_2414_367e, 0, 80);
    memset(d_2414_362e, 0, 80);
    memset(d_2414_35de, 0, 80);
    memset(d_2414_358e, 0, 80);
    memset(d_2414_353e, 0, 80);
    memset(d_2414_3516, 0, 40);
    memset(d_2414_34c6, 0, 80);
    memset(d_2414_3476, 0, 80);
    memset(d_2414_3426, 0, 80);
    memset(d_2414_33d6, 0, 80);
    memset(d_2414_3386, 0, 80);
    memset(d_2414_3336, 0, 80);
    memset(d_2414_321e, 0, 280);
    memset(d_2414_3106, 0, 280);
    memset(d_2414_30b6, 0, 80);
    memset(d_2414_3066, 0, 80);
    memset(d_2414_305c, 0, 10);
    memset(d_2414_300c, 0, 80);
    memset(d_2414_2fbc, 0, 80);
    memset(d_2414_2f6c, 0, 80);
    memset(d_2414_2f1c, 0, 80);
    memset(d_2414_2ecc, 0, 80);
    memset(d_2414_2e7c, 0, 80);
    memset(d_2414_2e2c, 0, 80);
    memset(d_2414_2ddc, 0, 80);
    memset(d_2414_2d8c, 0, 80);
    memset(d_2414_2d3c, 0, 80);
    memset(d_2414_2cec, 0, 80);
    memset(d_2414_2c9c, 0, 80);
    memset(d_2414_2c4c, 0, 80);
    memset(d_2414_2bfc, 0, 80);
    memset(d_2414_2bac, 0, 80);
    memset(d_2414_2b5c, 0, 80);
    memset(d_2414_2b0c, 0, 80);
    memset(d_2414_2abc, 0, 80);
    memset(d_2414_2a6c, 0, 80);
    memset(d_2414_2a1c, 0, 80);
    memset(d_2414_29cc, 0, 80);
    memset(d_2414_297c, 0, 80);
    memset(d_2414_292c, 0, 80);
    memset(d_2414_28dc, 0, 80);
    memset(d_2414_288c, 0, 80);
    memset(d_2414_283c, 0, 80);
    memset(d_2414_27ec, 0, 80);
    memset(d_2414_279c, 0, 80);
    memset(d_2414_274c, 0, 80);
    memset(d_2414_26fc, 0, 80);
    memset(d_2414_26ac, 0, 80);
    memset(d_2414_265c, 0, 80);
    memset(d_2414_260c, 0, 80);
    memset(d_2414_25bc, 0, 80);
    memset(d_2414_2558, 0, 100);
    memset(d_2414_2508, 0, 80);
    memset(d_2414_24b8, 0, 80);
    memset(d_2414_2468, 0, 80);
    memset(d_2414_2418, 0, 80);
    memset(d_2414_23c8, 0, 80);
    memset(d_2414_2378, 0, 80);
    memset(d_2414_2328, 0, 80);
    memset(d_2414_22d8, 0, 80);
    memset(d_2414_2288, 0, 80);
    memset(d_2414_2238, 0, 80);
    memset(d_2414_21e8, 0, 80);
    memset(d_2414_2198, 0, 80);
    memset(d_2414_2148, 0, 80);
    memset(d_2414_2134, 0, 20);
    memset(d_2414_20e4, 0, 80);
    memset(d_2414_2094, 0, 80);
    memset(d_2414_206c, 0, 40);
    memset(d_2414_2058, 0, 20);
    memset(d_2414_2008, 0, 80);
    memset(d_2414_1fb8, 0, 80);
    memset(d_5d51_da2c, 0, 4);
    memset(d_2414_1e28, 0, 400);
    memset(d_5d51_da28, 0, 4);
    memset(d_2414_0e88, 0, 4000);
    memset(d_5d51_da24, 0, 4);
    memset(d_5d51_da20, 0, 4);
    memset(d_5d51_da1c, 0, 4);
    memset(d_2414_0848, 0, 1600);
    memset(d_2414_00c8, 0, 1920);
    memset(d_2414_00a0, 0, 40);
    memset(d_2414_0078, 0, 40);
    memset(d_2414_0050, 0, 40);
    memset(d_2414_0028, 0, 40);
    memset(d_2414_0000, 0, 40);
}

/* the week after the current one in a list of weeks */
void f_1446_1e2b(void)
{
    int weeks[13] = { 0, 14, 15, 17, 27, 33, 59, 63, 71, 77, 98, 100, -1 };
    unsigned char i;

    for (i = 0; i <= 11; i++)
        if (weeks[i] == d_5d51_d9ee) {
            d_5d51_d9ee = weeks[i + 1];
            i = 11;
        }
}

/* the week after the current one in a list of weeks */
void f_1446_1e7d(void)
{
    int weeks[12] = { 0, 19, 23, 29, 37, 41, 45, 47, 61, 65, 75, -1 };
    unsigned char i;

    for (i = 0; i <= 10; i++)
        if (weeks[i] == d_5d51_d998) {
            d_5d51_d998 = weeks[i + 1];
            i = 10;
        }
}

/* the week after the current one in a list of weeks */
void f_1446_1ecf(void)
{
    int weeks[13] = { 0, 21, 25, 31, 35, 41, 45, 69, 73, 79, 83, 93, -1 };
    unsigned char i;

    for (i = 0; i <= 11; i++)
        if (weeks[i] == d_5d51_d9e8) {
            d_5d51_d9e8 = weeks[i + 1];
            i = 11;
        }
}

/* the week after the current one in a list of weeks */
void f_1446_1f21(void)
{
    int weeks[11] = { 0, 21, 25, 31, 35, 69, 73, 79, 83, 89, -1 };
    unsigned char i;

    for (i = 0; i <= 9; i++)
        if (weeks[i] == d_5d51_d9ea) {
            d_5d51_d9ea = weeks[i + 1];
            i = 9;
        }
}

/* the week after the current one in a list of weeks */
void f_1446_1f73(void)
{
    int weeks[14] = { 0, 21, 25, 31, 35, 41, 45, 69, 73, 79, 83, 87, 91, -1 };
    unsigned char i;

    for (i = 0; i <= 12; i++)
        if (weeks[i] == d_5d51_d9ec) {
            d_5d51_d9ec = weeks[i + 1];
            i = 12;
        }
}

/* a debugging check: show the number, and wait for a key if the game pauses for news */
void f_1446_1fc5(unsigned char n)
{
    char buf[40];

    sprintf(buf, "Check:%d", n);
    f_1646_0bf2(buf);
    if (d_5d51_d5e5)
        while (f_1d5e_0c17() == 0)
            ;
}
