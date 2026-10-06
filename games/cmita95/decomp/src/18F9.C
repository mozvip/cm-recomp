/* @at 18f9:0006 */
/* @data 61eb:0094 */
/* @module */

#include <mem.h>
#include <stdio.h>
#include <string.h>

/* The game's main module: the start-up menus and the season loop, one week per pass.
   CM Italia 95's version of CM94's 18F9.C: the same menus and week loop, with other
   overlay calls, 100 weeks, Italian transfer deadline messages, and the first season's
   injuries of two named players (Lentini, Caniggia). After main come the start-up clear
   of the game's far tables, five functions that move a competition's next week along a
   list of weeks (initialised local arrays, whose initialisers sit in _DATA before main's
   strings), and a debugging check that shows a number. */

void f_215d_03bb(char c);
void f_215d_0d81(void);
int f_215d_0c20(void);
void f_18f9_06a1(void);
void f_18f9_16c8(void);
void f_18f9_171b(void);
void f_18f9_176e(void);
void f_18f9_17c1(void);
void f_18f9_1814(void);
void f_1a83_5ce1(void);
void f_1a83_48f9(char far *title);
void f_1a83_2da6(int n, char far *title, char far *items);
void f_1a83_3122(int);
char f_1a83_0c63(void);
void f_1a83_0bb7(char far *);
char f_1a83_2387(int);
char f_1a83_2448(int);
char f_1a83_247b(int);
char f_1a83_24d8(int);
char f_1a83_2531(int);
char f_1a83_2592(int);
char f_1a83_25e7(int);
char f_1a83_29a3(int);
char f_1a83_2a21(int);
char far *f_1a83_4485(int player);

void f_6ffe_0000(void);
void f_6ffe_2bf3(char);
void f_75a4_10f0(void);
void f_75a4_116c(int, int, int);
void f_75a4_2b4e(void);
void f_7a45_00ba(void);
void f_8402_1191(void);
void f_8402_1746(void);
void f_8402_2934(void);
void f_8402_2e7f(void);
void f_8402_2fea(void);
void f_8402_3185(void);
void f_8402_3307(void);
void f_87dc_0000(void);
void f_87dc_021e(void);
void f_87dc_061e(void);
void f_87dc_08ba(void);
void f_87dc_11b5(void);
void f_87dc_1aea(void);
void f_8e0f_3129(void);
void f_8e0f_397b(void);
void f_8e0f_3c9a(void);
void f_8e0f_402e(void);
void f_8e0f_4365(void);
void f_93a1_13fc(void);
void f_93a1_17cb(void);
void f_93a1_19dc(void);
void f_93a1_1b40(void);
void f_93a1_1cfb(void);
void f_93a1_205e(void);
void f_93a1_2685(int);
void f_93a1_2bd4(void);
void f_93a1_2ec2(void);
void f_93a1_3489(void);
void f_93a1_3a6f(void);
void f_9a9e_0469(char far *);
void f_9a9e_04d4(void);
void f_9a9e_0a62(void);
void f_9a9e_0b9c(void);
void f_9a9e_0cde(int);
void f_9a9e_125e(int player, int a, int b);
void f_9a9e_1c83(void);
void f_9a9e_2611(void);
void f_9a9e_29a4(char);
void f_9a9e_40c8(void);
void f_9a9e_46c0(int);
void f_9f8d_0385(void);
void f_9f8d_0408(void);
void f_9f8d_0480(void);
void f_9f8d_05b6(void);
void f_9f8d_0f83(void);
void f_9f8d_1ede(void);
void f_a214_164f(char);
void f_a214_1abc(void);
void f_a214_2ea7(void);
void f_a214_35d3(void);
void f_a214_3d33(void);
void f_a214_3e5f(void);
void f_a214_4036(void);
void f_a7b6_0000(void);
void f_a7b6_0298(void);
void f_b26d_016f(void);
void f_b26d_0b9a(void);
void f_b26d_0ba3(void);
void f_b26d_0bd7(char);
void f_b26d_0d6e(void);
void f_b26d_0dba(void);
void f_b26d_23fc(void);
void f_b26d_24ec(void);
void f_ab30_0cb4(void);
void f_ab30_1d6d(void);
void f_ab30_24eb(void);
void f_ab30_40ff(void);
void f_ab30_4257(void);
void f_ab30_45bb(void);
void f_ab30_47a7(void);
void f_ab30_5c8d(void);
void f_ab30_5fd3(void);
void f_ab30_60a6(void);
void f_ab30_619f(void);
void f_ab30_6298(void);
void f_ab30_6a32(void);
void f_ab30_6aea(void);
void f_b6f6_1d07(void);
void f_b6f6_1f02(void);

extern int d_61eb_ce14;
extern int d_61eb_df30;
extern int d_61eb_d58e;                 /* number of players */
extern int d_61eb_d59e;                 /* menu choice */
extern int d_61eb_d5a2;                 /* week of the season, 0..100 */
extern int d_61eb_d5a4;                 /* season */
extern int d_61eb_d592, d_61eb_d594, d_61eb_d596, d_61eb_d598;
extern char d_61eb_d9c2;                /* printer on */
extern char d_61eb_da4d, d_61eb_d9c5, d_61eb_d9c4, d_61eb_d9bf, d_61eb_da4f, d_61eb_da23;
extern int d_61eb_d5a6, d_61eb_d5ac, d_61eb_d5ae, d_61eb_d5b0, d_61eb_d5b2;
extern int d_61eb_d59a, d_61eb_d59c;

long d_61eb_0094 = 0;
int d_61eb_0098 = 18000;

extern int d_61eb_d5ba, d_61eb_d610, d_61eb_d5c0, d_61eb_d5be, d_61eb_d5bc;

extern char far d_28d4_0000[];
extern char far d_28d4_0018[];
extern char far d_28d4_0064[];
extern char far d_28d4_081c[];
extern char far d_28d4_0fd4[];
extern char far d_28d4_106c[];
extern char far d_28d4_11fc[];
extern char far *d_61eb_dba8;
extern char far d_28d4_1300[];
extern char far *d_61eb_dbac;
extern char far *d_61eb_dbb0;
extern char far *d_61eb_dbb4;
extern char far d_28d4_1398[];
extern char far d_28d4_1798[];
extern char far d_28d4_1928[];
extern char far d_28d4_194e[];
extern char far d_28d4_1958[];
extern char far d_3334_0000[];
extern char far d_3334_8ca0[];
extern char far *d_61eb_dbb8;
extern char far d_3334_bb80[];
extern char far d_3334_bb8a[];
extern char far d_3334_bbea[];
extern char far d_3334_bc2a[];
extern char far d_3334_bc4a[];
extern char far d_3334_bcfe[];
extern char far d_3334_bdb2[];
extern char far d_3334_c8f2[];
extern char far d_3334_cc82[];
extern char far d_3334_cee2[];
extern char far *d_61eb_dbbc;
extern char far d_3334_f26e[];
extern char far d_3334_f278[];
extern char far d_3334_f9f8[];
extern char far d_3334_fef8[];
extern char far d_3334_fefe[];
extern char far d_3334_ff5e[];
extern char far d_3334_ff7e[];
extern char far d_432e_0000[];
extern char far d_432e_0640[];
extern char far d_432e_0666[];
extern char far d_432e_0668[];
extern char far d_432e_066a[];
extern char far d_432e_066e[];
extern char far d_432e_0b2e[];
extern char far *d_61eb_dbc0;
extern char far d_432e_0d8e[];
extern char far d_432e_0e2e[];
extern char far d_432e_0f1e[];
extern char far d_432e_0f9e[];
extern char far d_432e_0fa6[];
extern char far d_432e_1a96[];
extern char far d_432e_1b22[];
extern char far d_432e_1ee2[];
extern char far d_432e_1f1e[];
extern char far d_432e_1f9e[];
extern char far d_432e_26ba[];
extern char far d_432e_31aa[];
extern char far *d_61eb_dbc4;
extern char far *d_61eb_dbc8;
extern char far d_432e_33c6[];
extern char far d_432e_35f6[];
extern char far d_432e_364e[];
extern char far d_432e_365e[];
extern char far d_432e_367e[];
extern char far d_432e_3686[];
extern char far d_432e_3696[];
extern char far d_432e_36a6[];
extern char far d_432e_36d6[];
extern char far d_432e_3712[];
extern char far d_432e_375e[];
extern char far d_432e_37f6[];
extern char far d_432e_38aa[];
extern char far d_432e_39c2[];
extern char far *d_61eb_dbcc;
extern char far *d_61eb_dbd0;
extern char far d_432e_39fe[];
extern char far d_432e_45de[];
extern char far d_432e_5d4e[];
extern char far d_432e_66ae[];
extern char far d_432e_681e[];
extern char far d_432e_74e2[];
extern char far d_432e_7672[];
extern char far d_432e_8568[];
extern char far d_432e_8877[];
extern char far d_432e_b437[];
extern char far d_432e_b43b[];
extern char far d_432e_b73b[];
extern char far d_432e_b86b[];
extern char far d_432e_b87f[];
extern char far d_432e_b8a5[];
extern char far d_432e_b8cb[];
extern char far d_432e_b92f[];
extern char far *d_61eb_dbd4;
extern char far d_432e_b9ff[];
extern char far d_432e_ba27[];
extern char far d_432e_bb67[];
extern char far d_432e_bbb7[];
extern char far d_432e_bc07[];
extern char far d_432e_bc57[];
extern char far d_432e_bca7[];
extern char far d_432e_bcf7[];
extern char far d_432e_bd47[];
extern char far d_432e_bd97[];
extern char far d_432e_bde7[];
extern char far d_432e_be37[];
extern char far d_432e_be87[];
extern char far d_432e_bed7[];
extern char far d_432e_bf27[];
extern char far d_432e_bf45[];
extern char far d_432e_bf95[];
extern char far d_432e_bfe5[];
extern char far d_432e_c035[];
extern char far d_432e_c085[];
extern char far d_432e_c0d5[];
extern char far d_432e_c125[];
extern char far d_432e_c175[];
extern char far d_432e_c1c5[];
extern char far d_432e_c215[];
extern char far d_432e_c265[];
extern char far d_432e_c279[];
extern char far d_432e_c28d[];
extern char far d_432e_c2c9[];
extern char far d_432e_c369[];
extern char far d_432e_c387[];
extern char far d_432e_c3d7[];
extern char far d_432e_c427[];
extern char far d_432e_c477[];
extern char far d_432e_c4c7[];
extern char far d_432e_c517[];
extern char far d_432e_c567[];
extern char far d_432e_c5b7[];
extern char far d_432e_c607[];
extern char far d_432e_c657[];
extern char far d_432e_c6a7[];
extern char far d_432e_c6f7[];
extern char far d_432e_c747[];
extern char far d_432e_c797[];
extern char far d_432e_c7e7[];
extern char far d_432e_c837[];
extern char far d_432e_c887[];
extern char far d_432e_c8d7[];
extern char far d_432e_c927[];
extern char far d_432e_c977[];
extern char far d_432e_c9c7[];
extern char far d_432e_ca17[];
extern char far d_432e_ca67[];
extern char far d_432e_cab7[];
extern char far d_432e_cb07[];
extern char far d_432e_cb57[];
extern char far d_432e_cba7[];
extern char far d_432e_cbf7[];
extern char far d_432e_cc47[];
extern char far d_432e_cc97[];
extern char far d_432e_cce7[];
extern char far d_432e_cce9[];
extern char far d_432e_cceb[];
extern char far d_432e_cd3b[];
extern char far d_432e_cd8b[];
extern char far d_432e_cddb[];
extern char far d_432e_cf1b[];
extern char far d_432e_cf6b[];
extern char far d_432e_d0ab[];
extern char far d_432e_d1eb[];
extern char far d_432e_d23b[];
extern char far d_432e_d28b[];
extern char far d_432e_d2db[];
extern char far d_432e_d32b[];
extern char far d_432e_d37b[];
extern char far d_432e_d4bb[];
extern char far d_432e_d50b[];
extern char far d_432e_d55b[];
extern char far d_432e_d55d[];
extern char far d_432e_d5ad[];
extern char far d_432e_d5fd[];
extern char far d_432e_d64d[];
extern char far d_432e_d69d[];
extern char far d_432e_d6ed[];
extern char far d_432e_d73d[];
extern char far d_432e_d78d[];
extern char far d_432e_d7b5[];
extern char far d_432e_d805[];
extern char far d_432e_d855[];
extern char far d_432e_d8a5[];
extern char far d_432e_d8f5[];
extern char far d_432e_d945[];
extern char far d_432e_d995[];
extern char far d_432e_daad[];
extern char far d_432e_dbc5[];
extern char far d_432e_dc15[];
extern char far d_432e_dc65[];
extern char far d_432e_dc6f[];
extern char far d_432e_dcbf[];
extern char far d_432e_dd0f[];
extern char far d_432e_dd5f[];
extern char far d_432e_ddaf[];
extern char far d_432e_ddff[];
extern char far d_432e_de4f[];
extern char far d_432e_de9f[];
extern char far d_432e_deef[];
extern char far d_432e_df3f[];
extern char far d_432e_df8f[];
extern char far d_432e_dfdf[];
extern char far d_432e_e02f[];
extern char far d_432e_e07f[];
extern char far d_432e_e0cf[];
extern char far d_432e_e11f[];
extern char far d_432e_e16f[];
extern char far d_432e_e1bf[];
extern char far d_432e_e20f[];
extern char far d_432e_e25f[];
extern char far d_432e_e2af[];
extern char far d_432e_e2ff[];
extern char far d_432e_e34f[];
extern char far d_432e_e39f[];
extern char far d_432e_e3ef[];
extern char far d_432e_e43f[];
extern char far d_432e_e48f[];
extern char far d_432e_e4df[];
extern char far d_432e_e52f[];
extern char far d_432e_e57f[];
extern char far d_432e_e5cf[];
extern char far d_432e_e61f[];
extern char far d_432e_e66f[];
extern char far d_432e_e6bf[];
extern char far d_432e_e70f[];
extern char far d_432e_e773[];
extern char far d_432e_e7c3[];
extern char far d_432e_e813[];
extern char far d_432e_e863[];
extern char far d_432e_e8b3[];
extern char far d_432e_e903[];
extern char far d_432e_e953[];
extern char far d_432e_e9a3[];
extern char far d_432e_e9f3[];
extern char far d_432e_ea43[];
extern char far d_432e_ea93[];
extern char far d_432e_eae3[];
extern char far d_432e_eb33[];
extern char far d_432e_eb83[];
extern char far d_432e_eb97[];
extern char far d_432e_ebe7[];
extern char far d_432e_ec37[];
extern char far d_432e_ec5f[];
extern char far d_432e_ec73[];
extern char far d_432e_ecc3[];
extern char far *d_61eb_dbd8;
extern char far d_432e_ed13[];
extern char far *d_61eb_dbdc;
extern char far d_432e_eea3[];
extern char far *d_61eb_dbe0;
extern char far *d_61eb_dbe4;
extern char far *d_61eb_dbe8;
extern char far d_5313_0000[];
extern char far d_5313_0640[];
extern char far d_5313_0dc0[];
extern char far d_5313_0de8[];
extern char far d_5313_0e10[];
extern char far d_5313_0e38[];
extern char far d_5313_0e60[];

void main(int argc, char *argv[])
{
    char choice;

    f_18f9_06a1();
    d_61eb_ce14 = 0x8000;
    f_215d_03bb(argc > 1 ? argv[1][0] : 0);
    f_215d_0d81();
    f_a214_1abc();
    f_1a83_5ce1();
    f_9a9e_40c8();
    if (d_61eb_df30 == 0)
        f_ab30_5fd3();
    f_b6f6_1f02();
    do {
        f_1a83_48f9("Championship Manager Italia");
        f_1a83_2da6(0, "", "*Help|New Game|Continue Season|Quick Start|");
again:
        f_1a83_3122(3);
        if (d_61eb_d59e == 0)
            f_ab30_60a6();
        else if (d_61eb_d59e == 1 && !f_1a83_0c63())
            goto again;
    } while (d_61eb_d59e == 0);
    choice = d_61eb_d59e;
    f_b6f6_1d07();
printer:
    f_1a83_2da6(0, "Printer Option", "Printer On|Printer Off|");
    if (d_61eb_d59e == 0) {
        char x;

        if (f_1a83_0c63() == 0)
            goto printer;
        x = 0;
        if (x == 0) {
            f_b26d_0b9a();
            f_9a9e_0469("Put printer on line to continue");
            f_b26d_0bd7(1);
            d_61eb_d9c2 = -1;
            f_b26d_0ba3();
        }
    } else if (d_61eb_d59e == 1)
        d_61eb_d9c2 = 0;
    if (choice == 2) {
        f_9a9e_29a4(0);
        if (d_61eb_d5a2 <= 100)
            goto week;
        goto season_end;
    }
    if (choice == 3) {
        f_9a9e_29a4(1);
        f_9a9e_46c0(0);
        goto week;
    }
    f_1a83_2da6(0, "Championship Manager Italia", "1994/95 Players|Fictional Players|");
    d_61eb_da4d = d_61eb_d59e == 0 ? -1 : 0;
    f_a7b6_0000();
    f_a214_2ea7();
    f_9f8d_0385();
    f_ab30_5c8d();
    f_93a1_19dc();
    f_93a1_17cb();
    f_a7b6_0298();
    f_8e0f_3129();
    f_93a1_1b40();
    f_8402_2fea();
    d_61eb_d9c5 = 0;
    for (;;) {
        d_61eb_d9bf = -1;
        f_a214_4036();
        f_a214_35d3();
        f_ab30_40ff();
        f_93a1_2685(d_61eb_d592);
        f_93a1_2685(d_61eb_d594);
        f_93a1_2685(d_61eb_d596);
        f_93a1_2685(d_61eb_d598);
        f_93a1_2ec2();
        f_ab30_47a7();
        f_b26d_0d6e();
        if (d_61eb_d5a4 == 1) {
            if (d_61eb_da4d) {
                int i;

                for (i = 0; i <= d_61eb_d58e - 1; i++) {
                    if (_fstrstr(f_1a83_4485(i), "Lentini"))
                        f_9a9e_125e(i, 26, 50);
                    else if (_fstrstr(f_1a83_4485(i), "Cannigia"))
                        f_9a9e_125e(i, 27, 50);
                }
            }
            f_9a9e_0cde(90);
        }
        f_9f8d_0f83();
        f_ab30_24eb();
        f_a214_3d33();
        f_a214_3e5f();
        f_ab30_6a32();
        f_ab30_6aea();
        f_ab30_6298();
        f_87dc_08ba();
        f_87dc_11b5();
        f_8402_2934();
        d_61eb_d9c5 = 0;
        f_8402_2e7f();
        f_8402_1746();
        d_61eb_d9bf = 0;
        while (d_61eb_d5a2 <= 100) {
            if (d_61eb_d5a2 % 9 == 0 && d_61eb_d5a2 >= 18) {
                f_a214_164f(0);
                d_61eb_da4f = -1;
                if (!d_61eb_d9c4)
                    f_6ffe_2bf3(0);
                f_9f8d_0408();
            }
            if (d_61eb_d5a2 % 2 == 1)
                f_9f8d_0480();
            if (d_61eb_d5a2 <= 12 && d_61eb_d5a2 % 2 == 0)
                f_75a4_2b4e();
            if (d_61eb_d5a2 == 37)
                f_1a83_0bb7("Domestic transfers allowed|for one week");
            else if (d_61eb_d5a2 == 4)
                f_1a83_0bb7("Domestic transfer deadline|is this week");
            else if (d_61eb_d5a2 == 5 || d_61eb_d5a2 == 39)
                f_1a83_0bb7("Domestic transfer deadline|has now passed");
            else if (d_61eb_d5a2 == 12)
                f_1a83_0bb7("Foreign transfer deadline|is this week");
            else if (d_61eb_d5a2 == 13)
                f_1a83_0bb7("Foreign transfer deadline|has now passed");
            if (d_61eb_d5a2 % 16 == 0)
                f_9a9e_2611();
            f_9f8d_05b6();
            if (f_1a83_2a21(d_61eb_d5a2) || d_61eb_d5a2 % 2 == 0) {
                if (f_1a83_247b(d_61eb_d5a2))
                    d_61eb_d5a6 = 0;
                if (f_1a83_24d8(d_61eb_d5a2))
                    d_61eb_d5ac = 0;
                if (f_1a83_2531(d_61eb_d5a2))
                    d_61eb_d5ae = 0;
                if (f_1a83_2592(d_61eb_d5a2))
                    d_61eb_d5b0 = 0;
                if (f_1a83_25e7(d_61eb_d5a2))
                    d_61eb_d5b2 = 0;
week:
                f_6ffe_0000();
                f_9a9e_0cde(10);
                f_b26d_23fc();
                if (f_1a83_2a21(d_61eb_d5a2)) {
                    f_75a4_116c(d_61eb_d5a2, 0, -1);
                    f_7a45_00ba();
                    d_61eb_d59a -= f_1a83_2387(d_61eb_d5a2);
                    d_61eb_d59c -= f_1a83_2448(d_61eb_d5a2);
                    if (f_1a83_2387(d_61eb_d5a2) || f_1a83_2448(d_61eb_d5a2)) {
                        f_8402_3185();
                        if (d_61eb_d5a2 == 96)
                            f_8402_3307();
                        f_8402_1191();
                    } else if (f_1a83_29a3(d_61eb_d5a2)) {
                        f_8402_1191();
                        f_93a1_13fc();
                    } else {
                        if (d_61eb_d5a2 == 41 || d_61eb_d5a2 == 45 || d_61eb_d5a2 == 69 ||
                            d_61eb_d5a2 == 73 || d_61eb_d5a2 == 79 || d_61eb_d5a2 == 83)
                            f_87dc_0000();
                        if (d_61eb_d5a2 == 19 || d_61eb_d5a2 == 23 || d_61eb_d5a2 == 29 ||
                            d_61eb_d5a2 == 37 || d_61eb_d5a2 == 41 || d_61eb_d5a2 == 45 ||
                            d_61eb_d5a2 == 47)
                            f_87dc_021e();
                    }
                    f_75a4_116c(d_61eb_d5a2, 1, -1);
                    f_8402_1746();
                    if (f_1a83_247b(d_61eb_d5a2))
                        f_18f9_16c8();
                    if (f_1a83_24d8(d_61eb_d5a2))
                        f_18f9_171b();
                    if (f_1a83_25e7(d_61eb_d5a2))
                        f_18f9_176e();
                    if (f_1a83_2592(d_61eb_d5a2))
                        f_18f9_17c1();
                    if (f_1a83_2531(d_61eb_d5a2))
                        f_18f9_1814();
                    f_9a9e_04d4();
                    f_9a9e_0b9c();
                    if (d_61eb_d5a2 >= 20)
                        f_8e0f_3c9a();
                    f_8e0f_402e();
                    f_8e0f_4365();
                } else if (d_61eb_d5a2 % 2 == 0)
                    f_1a83_0bb7("No fixtures to be played");
            }
            if (d_61eb_d5a2 % 2 == 0) {
                if (d_61eb_d5a2 >= 13)
                    f_9a9e_0a62();
                f_9f8d_1ede();
                f_ab30_4257();
                f_87dc_061e();
                f_b26d_24ec();
                f_ab30_1d6d();
                f_9a9e_1c83();
            }
            d_61eb_d5a2++;
        }
season_end:
        f_87dc_1aea();
        f_6ffe_0000();
        if (!d_61eb_d9c4) {
            do {
                f_1a83_2da6(0, "Updating Data", "*Help|Pause For News|Don't Pause|Save Game|");
                if (d_61eb_d59e == 0)
                    f_ab30_619f();
                else if (d_61eb_d59e == 3)
                    f_75a4_10f0();
            } while (d_61eb_d59e == 0 || d_61eb_d59e == 3);
            d_61eb_d9c5 = d_61eb_d59e == 2 ? -1 : 0;
        }
        d_61eb_da23 = -1;
        f_a214_164f(-1);
        if (!d_61eb_d9c4)
            f_6ffe_2bf3(-1);
        f_93a1_1cfb();
        f_ab30_0cb4();
        f_93a1_3489();
        f_ab30_45bb();
        f_ab30_5c8d();
        f_93a1_3a6f();
        f_b26d_0dba();
        f_93a1_205e();
        f_8e0f_397b();
        f_93a1_2bd4();
        f_b26d_016f();
        d_61eb_da23 = 0;
        d_61eb_d5a4++;
    }
}

/* Clears the game's variables at start-up. */
void f_18f9_06a1(void)
{
    _fmemset(d_28d4_0000, 0, 24);
    _fmemset(d_28d4_0018, 0, 76);
    _fmemset(d_28d4_0064, 0, 1976);
    _fmemset(d_28d4_081c, 0, 1976);
    _fmemset(d_28d4_0fd4, 0, 152);
    _fmemset(d_28d4_106c, 0, 400);
    _fmemset(d_28d4_11fc, 0, 260);
    _fmemset(d_61eb_dba8, 0, 4);
    _fmemset(d_28d4_1300, 0, 152);
    _fmemset(d_61eb_dbac, 0, 4);
    _fmemset(d_61eb_dbb0, 0, 4);
    _fmemset(d_61eb_dbb4, 0, 4);
    _fmemset(d_28d4_1398, 0, 1024);
    _fmemset(d_28d4_1798, 0, 400);
    _fmemset(d_28d4_1928, 0, 38);
    _fmemset(d_28d4_194e, 0, 10);
    _fmemset(d_28d4_1958, 0, 36000);
    _fmemset(d_3334_0000, 0, 36000);
    _fmemset(d_3334_8ca0, 0, 12000);
    _fmemset(d_61eb_dbb8, 0, 4);
    _fmemset(d_3334_bb80, 0, 10);
    _fmemset(d_3334_bb8a, 0, 96);
    _fmemset(d_3334_bbea, 0, 64);
    _fmemset(d_3334_bc2a, 0, 32);
    _fmemset(d_3334_bc4a, 0, 180);
    _fmemset(d_3334_bcfe, 0, 180);
    _fmemset(d_3334_bdb2, 0, 2880);
    _fmemset(d_3334_c8f2, 0, 912);
    _fmemset(d_3334_cc82, 0, 608);
    _fmemset(d_3334_cee2, 0, 9100);
    _fmemset(d_61eb_dbbc, 0, 4);
    _fmemset(d_3334_f26e, 0, 10);
    _fmemset(d_3334_f278, 0, 1920);
    _fmemset(d_3334_f9f8, 0, 1280);
    _fmemset(d_3334_fef8, 0, 6);
    _fmemset(d_3334_fefe, 0, 96);
    _fmemset(d_3334_ff5e, 0, 32);
    _fmemset(d_3334_ff7e, 0, 32);
    _fmemset(d_432e_0000, 0, 1600);
    _fmemset(d_432e_0640, 0, 38);
    _fmemset(d_432e_0666, 0, 2);
    _fmemset(d_432e_0668, 0, 2);
    _fmemset(d_432e_066a, 0, 4);
    _fmemset(d_432e_066e, 0, 1216);
    _fmemset(d_432e_0b2e, 0, 608);
    _fmemset(d_61eb_dbc0, 0, 4);
    _fmemset(d_432e_0d8e, 0, 160);
    _fmemset(d_432e_0e2e, 0, 240);
    _fmemset(d_432e_0f1e, 0, 128);
    _fmemset(d_432e_0f9e, 0, 8);
    _fmemset(d_432e_0fa6, 0, 2800);
    _fmemset(d_432e_1a96, 0, 140);
    _fmemset(d_432e_1b22, 0, 960);
    _fmemset(d_432e_1ee2, 0, 60);
    _fmemset(d_432e_1f1e, 0, 128);
    _fmemset(d_432e_1f9e, 0, 1820);
    _fmemset(d_432e_26ba, 0, 2800);
    _fmemset(d_432e_31aa, 0, 540);
    _fmemset(d_61eb_dbc4, 0, 4);
    _fmemset(d_61eb_dbc8, 0, 4);
    _fmemset(d_432e_33c6, 0, 560);
    _fmemset(d_432e_35f6, 0, 88);
    _fmemset(d_432e_364e, 0, 16);
    _fmemset(d_432e_365e, 0, 32);
    _fmemset(d_432e_367e, 0, 8);
    _fmemset(d_432e_3686, 0, 16);
    _fmemset(d_432e_3696, 0, 16);
    _fmemset(d_432e_36a6, 0, 48);
    _fmemset(d_432e_36d6, 0, 60);
    _fmemset(d_432e_3712, 0, 76);
    _fmemset(d_432e_375e, 0, 152);
    _fmemset(d_432e_37f6, 0, 180);
    _fmemset(d_432e_38aa, 0, 280);
    _fmemset(d_432e_39c2, 0, 60);
    _fmemset(d_61eb_dbcc, 0, 4);
    _fmemset(d_61eb_dbd0, 0, 4);
    _fmemset(d_432e_39fe, 0, 3040);
    _fmemset(d_432e_45de, 0, 6000);
    _fmemset(d_432e_5d4e, 0, 2400);
    _fmemset(d_432e_66ae, 0, 368);
    _fmemset(d_432e_681e, 0, 3268);
    _fmemset(d_432e_74e2, 0, 400);
    _fmemset(d_432e_7672, 0, 3064);
    _fmemset(d_432e_8568, 0, 608);
    _fmemset(d_432e_8877, 0, 11200);
    _fmemset(d_432e_b437, 0, 4);
    _fmemset(d_432e_b43b, 0, 768);
    _fmemset(d_432e_b73b, 0, 304);
    _fmemset(d_432e_b86b, 0, 20);
    _fmemset(d_432e_b87f, 0, 38);
    _fmemset(d_432e_b8a5, 0, 38);
    _fmemset(d_432e_b8cb, 0, 100);
    _fmemset(d_432e_b92f, 0, 208);
    _fmemset(d_61eb_dbd4, 0, 4);
    _fmemset(d_432e_b9ff, 0, 40);
    _fmemset(d_432e_ba27, 0, 320);
    _fmemset(d_432e_bb67, 0, 80);
    _fmemset(d_432e_bbb7, 0, 80);
    _fmemset(d_432e_bc07, 0, 80);
    _fmemset(d_432e_bc57, 0, 80);
    _fmemset(d_432e_bca7, 0, 80);
    _fmemset(d_432e_bcf7, 0, 80);
    _fmemset(d_432e_bd47, 0, 80);
    _fmemset(d_432e_bd97, 0, 80);
    _fmemset(d_432e_bde7, 0, 80);
    _fmemset(d_432e_be37, 0, 80);
    _fmemset(d_432e_be87, 0, 80);
    _fmemset(d_432e_bed7, 0, 80);
    _fmemset(d_432e_bf27, 0, 30);
    _fmemset(d_432e_bf45, 0, 80);
    _fmemset(d_432e_bf95, 0, 80);
    _fmemset(d_432e_bfe5, 0, 80);
    _fmemset(d_432e_c035, 0, 80);
    _fmemset(d_432e_c085, 0, 80);
    _fmemset(d_432e_c0d5, 0, 80);
    _fmemset(d_432e_c125, 0, 80);
    _fmemset(d_432e_c175, 0, 80);
    _fmemset(d_432e_c1c5, 0, 80);
    _fmemset(d_432e_c215, 0, 80);
    _fmemset(d_432e_c265, 0, 20);
    _fmemset(d_432e_c279, 0, 20);
    _fmemset(d_432e_c28d, 0, 60);
    _fmemset(d_432e_c2c9, 0, 160);
    _fmemset(d_432e_c369, 0, 30);
    _fmemset(d_432e_c387, 0, 80);
    _fmemset(d_432e_c3d7, 0, 80);
    _fmemset(d_432e_c427, 0, 80);
    _fmemset(d_432e_c477, 0, 80);
    _fmemset(d_432e_c4c7, 0, 80);
    _fmemset(d_432e_c517, 0, 80);
    _fmemset(d_432e_c567, 0, 80);
    _fmemset(d_432e_c5b7, 0, 80);
    _fmemset(d_432e_c607, 0, 80);
    _fmemset(d_432e_c657, 0, 80);
    _fmemset(d_432e_c6a7, 0, 80);
    _fmemset(d_432e_c6f7, 0, 80);
    _fmemset(d_432e_c747, 0, 80);
    _fmemset(d_432e_c797, 0, 80);
    _fmemset(d_432e_c7e7, 0, 80);
    _fmemset(d_432e_c837, 0, 80);
    _fmemset(d_432e_c887, 0, 80);
    _fmemset(d_432e_c8d7, 0, 80);
    _fmemset(d_432e_c927, 0, 80);
    _fmemset(d_432e_c977, 0, 80);
    _fmemset(d_432e_c9c7, 0, 80);
    _fmemset(d_432e_ca17, 0, 80);
    _fmemset(d_432e_ca67, 0, 80);
    _fmemset(d_432e_cab7, 0, 80);
    _fmemset(d_432e_cb07, 0, 80);
    _fmemset(d_432e_cb57, 0, 80);
    _fmemset(d_432e_cba7, 0, 80);
    _fmemset(d_432e_cbf7, 0, 80);
    _fmemset(d_432e_cc47, 0, 80);
    _fmemset(d_432e_cc97, 0, 80);
    _fmemset(d_432e_cce7, 0, 2);
    _fmemset(d_432e_cce9, 0, 2);
    _fmemset(d_432e_cceb, 0, 80);
    _fmemset(d_432e_cd3b, 0, 80);
    _fmemset(d_432e_cd8b, 0, 80);
    _fmemset(d_432e_cddb, 0, 320);
    _fmemset(d_432e_cf1b, 0, 80);
    _fmemset(d_432e_cf6b, 0, 320);
    _fmemset(d_432e_d0ab, 0, 320);
    _fmemset(d_432e_d1eb, 0, 80);
    _fmemset(d_432e_d23b, 0, 80);
    _fmemset(d_432e_d28b, 0, 80);
    _fmemset(d_432e_d2db, 0, 80);
    _fmemset(d_432e_d32b, 0, 80);
    _fmemset(d_432e_d37b, 0, 320);
    _fmemset(d_432e_d4bb, 0, 80);
    _fmemset(d_432e_d50b, 0, 80);
    _fmemset(d_432e_d55b, 0, 2);
    _fmemset(d_432e_d55d, 0, 80);
    _fmemset(d_432e_d5ad, 0, 80);
    _fmemset(d_432e_d5fd, 0, 80);
    _fmemset(d_432e_d64d, 0, 80);
    _fmemset(d_432e_d69d, 0, 80);
    _fmemset(d_432e_d6ed, 0, 80);
    _fmemset(d_432e_d73d, 0, 80);
    _fmemset(d_432e_d78d, 0, 40);
    _fmemset(d_432e_d7b5, 0, 80);
    _fmemset(d_432e_d805, 0, 80);
    _fmemset(d_432e_d855, 0, 80);
    _fmemset(d_432e_d8a5, 0, 80);
    _fmemset(d_432e_d8f5, 0, 80);
    _fmemset(d_432e_d945, 0, 80);
    _fmemset(d_432e_d995, 0, 280);
    _fmemset(d_432e_daad, 0, 280);
    _fmemset(d_432e_dbc5, 0, 80);
    _fmemset(d_432e_dc15, 0, 80);
    _fmemset(d_432e_dc65, 0, 10);
    _fmemset(d_432e_dc6f, 0, 80);
    _fmemset(d_432e_dcbf, 0, 80);
    _fmemset(d_432e_dd0f, 0, 80);
    _fmemset(d_432e_dd5f, 0, 80);
    _fmemset(d_432e_ddaf, 0, 80);
    _fmemset(d_432e_ddff, 0, 80);
    _fmemset(d_432e_de4f, 0, 80);
    _fmemset(d_432e_de9f, 0, 80);
    _fmemset(d_432e_deef, 0, 80);
    _fmemset(d_432e_df3f, 0, 80);
    _fmemset(d_432e_df8f, 0, 80);
    _fmemset(d_432e_dfdf, 0, 80);
    _fmemset(d_432e_e02f, 0, 80);
    _fmemset(d_432e_e07f, 0, 80);
    _fmemset(d_432e_e0cf, 0, 80);
    _fmemset(d_432e_e11f, 0, 80);
    _fmemset(d_432e_e16f, 0, 80);
    _fmemset(d_432e_e1bf, 0, 80);
    _fmemset(d_432e_e20f, 0, 80);
    _fmemset(d_432e_e25f, 0, 80);
    _fmemset(d_432e_e2af, 0, 80);
    _fmemset(d_432e_e2ff, 0, 80);
    _fmemset(d_432e_e34f, 0, 80);
    _fmemset(d_432e_e39f, 0, 80);
    _fmemset(d_432e_e3ef, 0, 80);
    _fmemset(d_432e_e43f, 0, 80);
    _fmemset(d_432e_e48f, 0, 80);
    _fmemset(d_432e_e4df, 0, 80);
    _fmemset(d_432e_e52f, 0, 80);
    _fmemset(d_432e_e57f, 0, 80);
    _fmemset(d_432e_e5cf, 0, 80);
    _fmemset(d_432e_e61f, 0, 80);
    _fmemset(d_432e_e66f, 0, 80);
    _fmemset(d_432e_e6bf, 0, 80);
    _fmemset(d_432e_e70f, 0, 100);
    _fmemset(d_432e_e773, 0, 80);
    _fmemset(d_432e_e7c3, 0, 80);
    _fmemset(d_432e_e813, 0, 80);
    _fmemset(d_432e_e863, 0, 80);
    _fmemset(d_432e_e8b3, 0, 80);
    _fmemset(d_432e_e903, 0, 80);
    _fmemset(d_432e_e953, 0, 80);
    _fmemset(d_432e_e9a3, 0, 80);
    _fmemset(d_432e_e9f3, 0, 80);
    _fmemset(d_432e_ea43, 0, 80);
    _fmemset(d_432e_ea93, 0, 80);
    _fmemset(d_432e_eae3, 0, 80);
    _fmemset(d_432e_eb33, 0, 80);
    _fmemset(d_432e_eb83, 0, 20);
    _fmemset(d_432e_eb97, 0, 80);
    _fmemset(d_432e_ebe7, 0, 80);
    _fmemset(d_432e_ec37, 0, 40);
    _fmemset(d_432e_ec5f, 0, 20);
    _fmemset(d_432e_ec73, 0, 80);
    _fmemset(d_432e_ecc3, 0, 80);
    _fmemset(d_61eb_dbd8, 0, 4);
    _fmemset(d_432e_ed13, 0, 400);
    _fmemset(d_61eb_dbdc, 0, 4);
    _fmemset(d_432e_eea3, 0, 4000);
    _fmemset(d_61eb_dbe0, 0, 4);
    _fmemset(d_61eb_dbe4, 0, 4);
    _fmemset(d_61eb_dbe8, 0, 4);
    _fmemset(d_5313_0000, 0, 1600);
    _fmemset(d_5313_0640, 0, 1920);
    _fmemset(d_5313_0dc0, 0, 40);
    _fmemset(d_5313_0de8, 0, 40);
    _fmemset(d_5313_0e10, 0, 40);
    _fmemset(d_5313_0e38, 0, 40);
    _fmemset(d_5313_0e60, 0, 40);
}

/* the week after the current one in a list of weeks */
void f_18f9_16c8(void)
{
    int weeks[13] = { 0, 14, 15, 17, 27, 33, 59, 63, 71, 77, 98, 100, -1 };
    unsigned char i;

    for (i = 0; i <= 11; i++)
        if (weeks[i] == d_61eb_d5ba) {
            d_61eb_d5ba = weeks[i + 1];
            i = 11;
        }
}

/* the week after the current one in a list of weeks */
void f_18f9_171b(void)
{
    int weeks[12] = { 0, 19, 23, 29, 37, 41, 45, 47, 61, 65, 75, -1 };
    unsigned char i;

    for (i = 0; i <= 10; i++)
        if (weeks[i] == d_61eb_d610) {
            d_61eb_d610 = weeks[i + 1];
            i = 10;
        }
}

/* the week after the current one in a list of weeks */
void f_18f9_176e(void)
{
    int weeks[13] = { 0, 21, 25, 31, 35, 41, 45, 69, 73, 79, 83, 93, -1 };
    unsigned char i;

    for (i = 0; i <= 11; i++)
        if (weeks[i] == d_61eb_d5c0) {
            d_61eb_d5c0 = weeks[i + 1];
            i = 11;
        }
}

/* the week after the current one in a list of weeks */
void f_18f9_17c1(void)
{
    int weeks[11] = { 0, 21, 25, 31, 35, 69, 73, 79, 83, 89, -1 };
    unsigned char i;

    for (i = 0; i <= 9; i++)
        if (weeks[i] == d_61eb_d5be) {
            d_61eb_d5be = weeks[i + 1];
            i = 9;
        }
}

/* the week after the current one in a list of weeks */
void f_18f9_1814(void)
{
    int weeks[14] = { 0, 21, 25, 31, 35, 41, 45, 69, 73, 79, 83, 87, 91, -1 };
    unsigned char i;

    for (i = 0; i <= 12; i++)
        if (weeks[i] == d_61eb_d5bc) {
            d_61eb_d5bc = weeks[i + 1];
            i = 12;
        }
}

/* a debugging check: show the number, and wait for a key if the game pauses for news */
void f_18f9_1867(unsigned char n)
{
    char buf[40];

    sprintf(buf, "Check:%d", n);
    f_1a83_0bb7(buf);
    if (d_61eb_d9c4)
        while (f_215d_0c20() == 0)
            ;
}
