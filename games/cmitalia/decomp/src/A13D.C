/* @at a13d:0000 */
/* @data 5d51:6138 */
/* @module */

/* Overlay a13d: CM93's overlay a694 (games/cm93/decomp/src/A694.C) changed for CM Italia:
 * the player's career and information pages, the club Info screen, the title picture and
 * palette, the new game's menus, teams and personalities, future targets, the player
 * details screen with buying and the shortlist, and the history pages. */
#include <stdio.h>
#include <string.h>
#include <mem.h>
#include <stdlib.h>
#include <dos.h>
#include <ctype.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_a13d_0000(int player, int mode);
void f_a13d_09a0(int team);
void f_a13d_1ca2(char a);
char far *f_a13d_202f(int a, int b);
int f_a13d_20c9(void);
void f_a13d_2129(void);
void f_a13d_2238(void);
void f_a13d_225f(void);
void f_a13d_22c6(int p);
void f_a13d_3539(void);
void f_a13d_3631(void);
void f_a13d_3690(void);
int f_a13d_3af5(int p);
int f_a13d_3d54(int p);
void f_a13d_3e44(void);
void f_a13d_45f4(void);
void f_a13d_474a(void);
void f_a13d_492e(void);
void f_a13d_4a1b(int player, int team, char buy);
void f_a13d_61ae(int p);

void f_1646_6097(void);
void f_1646_60a7(void);
void f_1646_4ba0(char far *title);
char far *f_1646_470f(int player);
char f_1646_6f38(int player);
void f_1646_3686(float x, float y, int bg, int fg, int w, char far *s);
void f_1646_3e54(float x, float y, int bg, int fg, int w, char far *s);
void f_1646_357e(int x, int y, int colour, char far *s);
void f_1d5e_08cc(int c);
void f_1d5e_08e2(int x1, int y1, int x2, int y2);
void f_1d5e_13a4(void far *a, void far *b, int n);
struct label { int x, y; char far *s; };
extern unsigned char far d_44d7_0000[][1500];
extern unsigned char far d_3c0d_0000[][1500];
extern unsigned char far d_3404_448a[];
extern char far d_2414_3066[];
extern char far d_2414_321e[][6];
extern char far d_2414_321f[][6];
extern unsigned char far d_2414_f168[];
extern char far * far d_4f37_0000[];
extern char near *d_5d51_b476[];
extern char near *d_5d51_b7ea[];
extern char d_5d51_d5e1;
extern int d_5d51_d9e2;
extern int d_5d51_d9b8;
extern int d_5d51_d9de;
extern int d_5d51_d64a;
extern int d_5d51_d648;
extern int d_5d51_d646;
extern int d_5d51_d644;
extern int d_5d51_d642;
extern int d_5d51_d640;
extern int d_5d51_d63a;
extern int d_5d51_d638;
extern int d_5d51_d704;
extern int d_5d51_d82e;
extern int d_5d51_d6d2;
extern int d_5d51_d9fe;
extern int d_5d51_d750;
extern int d_5d51_d768;
extern int d_5d51_d7f8;
extern int d_5d51_d70e;
void f_1646_0003(float x, int team, char far *title);
void f_1646_50c5(int a, float x, float y, int c, int d, int e, char far *s);
void f_1646_545c(int a, char b);
int f_1646_5602(int a);
void f_1646_5869(int team);
char f_1646_2cc9(int x);
int f_1646_46a0(int team);
char far *f_1646_4849(int player);
char far *f_1646_4919(int manager, char full);
char far *f_1646_4a8f(int n);
char far *f_1646_4b1e(int division, char full);
void f_1d5e_0b11(int on);
long f_1d5e_131d(long a, long b);
void far *f_1d5e_1618(int handle, int page);
long f_9e79_2216(int team);
int f_9e79_0000(int x);
char far *f_9182_6d1c(int round);
void f_9915_0000(int team);
void f_9182_5e5f(int team);
void f_9182_4c86(int team);
struct flags_a { unsigned char b0; unsigned f8 : 1; unsigned f9 : 1; unsigned : 6; unsigned : 2; unsigned f18 : 1; unsigned f19 : 1; unsigned : 4; unsigned : 0; unsigned f24 : 1; unsigned : 3; unsigned f28 : 1; unsigned : 1; unsigned f30 : 1; unsigned : 1; };
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
union flags { struct flags_a a; struct flags_w w; };
extern int (far *d_5d51_da4c)[1500];
extern int d_5d51_dd9c;
extern int far d_44d7_9624[][26];
extern int far d_3404_4226[];
extern long far d_3404_3e4a[][38];
extern long far d_3404_4012[];
extern unsigned char far d_3404_4462[];
extern unsigned char far d_3404_4e8a[];
extern unsigned char far d_3404_452a[];
extern unsigned char far d_3404_4552[];
extern unsigned char far d_3404_45ca[][40];
extern unsigned char far d_3404_461a[];
extern unsigned char far d_3404_4642[];
extern unsigned char far d_3404_4dc2[];
extern unsigned char far d_2414_e5d0[][140];
extern unsigned char far d_2414_e918[];
extern unsigned char far d_2414_e9a4[];
extern unsigned char far d_2414_ea30[];
extern unsigned char far d_2414_eabc[];
extern unsigned char far d_2414_eb48[];
extern unsigned char far d_2414_ebd4[];
extern char far d_2414_2198[];
extern char far d_2414_21e8[];
extern char far d_2414_2ecc[];
extern char far d_2414_2f1c[];
extern char far d_2414_4b56[];
extern char far d_2414_4d36[];
extern char d_5d51_d5e5;
extern char d_5d51_d5e7;
extern int d_5d51_d63e;
extern int d_5d51_d63c;
extern int d_5d51_d700;
extern float d_5d51_d535;
extern int d_5d51_d93c;
extern int d_5d51_d9ac;
extern int d_5d51_d9d0;
extern float d_5d51_d549;
extern int d_5d51_d98e;
extern int d_5d51_da0e;
extern int d_5d51_d9c6;
extern int d_5d51_da0a;
extern int d_5d51_d636;
extern int d_5d51_d9f0;
long f_1646_5ac3(int team);
char far *f_1646_4616(int n, char far *s);
int f_1646_46e2(int team);
char far *f_1646_48c0(int player);
char far *f_1646_4a20(int player);
void f_1646_4d19(float x, int w, char far *prompt);
void f_1646_587e(void);
void f_1646_58a8(int a);
void f_1646_5a1a(void);
extern char far d_2414_38c4[];
extern char far d_2414_3a7c[][6];
extern char far d_2414_3a7d[][6];
extern char near *d_5d51_b35e[];
extern char far d_2414_ea08[];
extern char far d_2414_f0de[];
extern char far d_2414_2aaa[];
extern char far d_2414_2afa[];
extern char far d_2414_372a[];
extern char far d_2414_377a[];
extern char far d_2414_5012[];
extern char far d_2414_51f2[];
extern unsigned char far d_3404_1abe[];
extern char far d_2414_2a46[];
extern char far d_2414_3f2c[];
extern char far d_2414_4170[];
extern char far d_2414_4e28[];
extern char far d_2414_4e46[][4][20];
extern char far d_2414_4efa[];
extern char d_5d51_9514;
extern long d_5d51_d49d;
extern float d_5d51_d555;
extern char d_5d51_d567;
extern char d_5d51_d596;
extern int d_5d51_d632;
extern int d_5d51_d634;
extern int d_5d51_d756;
extern int d_5d51_d7fc;
extern int d_5d51_d84e;
extern int d_5d51_d958;
extern int d_5d51_d9a6;
extern int d_5d51_d9b2;
extern int d_5d51_d9c4;
extern int d_5d51_d9d4;
extern long far *d_5d51_da54;
extern char d_5d51_dd6c;
extern int d_5d51_dda0;
extern int d_5d51_daba;
void f_1f89_000c(void);
void f_1f89_0046(void);
char far *f_1d5e_0158();
void f_1d5e_01c4(void);
void f_1d5e_0477(void);
void f_1d5e_07e7(int noflip);
void f_1d5e_0822(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_1d5e_08d7(int c);
void f_1d5e_0929(int x1, int y1, int x2, int y2);
void f_1d5e_0993(void);
int f_1d5e_0c17(void);
char far *f_1d5e_0ced(void);
long f_1d5e_0df7(void);
char far *f_1d5e_0efc(void);
unsigned f_1d5e_0b1c(char far *s, char far *set);
void f_1d5e_18f2(void);
void f_1d5e_19b2(void);
void f_1646_3c89(float x, float y, int colour, char far *s);
void f_1d5e_1a24();
void f_1d5e_067d(void);
int f_1d5e_0c0f(void);
int f_1d5e_0c07(void);
void f_1646_3a4a(float x, float y, int bg, int fg, int w, char far *s);
long f_1646_0da1(long v, char c);
extern int d_5d51_dd84;
extern int d_5d51_dd8c;
extern unsigned char far *d_5d51_d9fa;
extern long (far *d_5d51_da44)[38];
extern char far *d_5d51_da24;
extern unsigned char far d_2414_5520[];
extern char far d_2414_4928[];
extern char far d_2414_2c8a[];
extern int d_5d51_d900;
extern int d_5d51_d62e;
extern int d_5d51_d630;
extern int d_5d51_d9ce;
extern int d_5d51_d9d8;
extern int d_5d51_d8ee;
extern int d_5d51_d62c;
extern int d_5d51_d62a;
extern float d_5d51_d551;
extern float d_5d51_d539;
extern float d_5d51_d545;
extern float d_5d51_d4b9;
extern float d_5d51_d4b1;
extern float d_5d51_d4ad;
extern float d_5d51_d4a9;
extern char d_5d51_d568;
extern char d_5d51_d5e6;
extern char d_5d51_d580;
extern long d_5d51_d421;
extern long d_5d51_d41d;
extern long d_5d51_d419;
extern long d_5d51_d415;
int f_1646_1f63(int player);
long f_1646_0204(int p, int n);
long f_1646_0e45(long v);
char far *f_1646_0ee9(long amount);
long f_8ba7_1401(int player);
char f_1646_6ae2(int player, char c);
char far *f_1646_2f4b(int x, char c);
int f_8539_1b9e(int team, int p);
extern long d_5d51_d4a1;
extern char d_5d51_d59f;
extern int d_5d51_d64e;
extern int d_5d51_d650;
extern int d_5d51_d652;
extern int d_5d51_d828;
extern char far d_2414_58a0[][0x6a6];
extern char far d_2414_85c0[][0x6a6];
extern char far d_2414_98e8[];
extern char far d_2414_9f8e[];
extern char far d_2414_a634[];
extern char far d_2414_c44a[];
extern char far d_2414_d1c2[];
extern char far d_2414_f3c4[];
extern char far d_2414_2b4a[];
extern char far d_2414_2b9a[];
extern char far d_2414_2bea[];
extern char far d_2414_2c3a[];
extern char far d_2414_2cda[];
extern char far d_2414_2d2a[];
extern char far d_2414_2d7a[];
extern char far d_2414_2dca[];
extern char far d_2414_2e1a[];
extern char far d_2414_2e6a[];
extern char far d_2414_2eba[];
extern char far d_2414_2f0a[];
extern char far d_2414_2f5a[];
extern char far d_2414_2faa[];
extern char far d_2414_2ffa[];
extern char far d_2414_304a[];
extern char far d_2414_309a[];
extern char far d_2414_30ea[];
extern char far d_2414_313a[];
extern char far d_2414_318a[];
extern char far d_2414_31da[];
extern char far d_2414_322a[];
extern char far d_2414_327a[];
extern char far d_2414_32ca[];
extern char far d_2414_331a[];
extern char far d_2414_336a[];
extern char far d_2414_33ba[];
extern char far d_2414_340a[];
extern char far d_2414_345a[];
extern char far d_2414_34aa[];
extern char far d_2414_359a[];
extern char far d_2414_3c84[];
extern char far d_2414_3f7c[];
extern char far d_2414_4262[];
extern char far d_2414_42ee[];
extern char far d_2414_5102[];
void f_1646_2fa4(int n, char far *title, char far *items);
void f_1646_3348(int last);
char far *f_1646_3537(int x);
float f_1646_2cfd(int x);
void f_9e79_0071(int a, int b);
void f_9915_4dfd(int n);
extern char d_5d51_d569;
extern char d_5d51_d56a;
extern char d_5d51_d56f;
extern int d_5d51_d670;
extern int d_5d51_d672;
extern int d_5d51_d674;
extern int d_5d51_d676;
extern int d_5d51_d7ea;
extern int d_5d51_d934;
extern int d_5d51_d954;
extern int d_5d51_d956;
extern int d_5d51_d9b6;
extern int d_5d51_d9ca;
extern int d_5d51_d9cc;
extern char near *d_5d51_b4ca[];
extern int far d_2414_07b5[];
extern unsigned char far d_3404_443a[][40];
extern unsigned char far d_3404_099e[];
extern unsigned char far d_3404_0b94[];
extern unsigned char far d_3404_0c4c[];
extern unsigned char far d_3404_3b2e[][140];
void f_9e79_03dd(int a, int b, int c);
void f_9e79_06bc(int t);
void f_9e79_08fb(int a, int b);
int f_1d5e_136a(int a, int b);
char f_1646_258b(int);
void f_b0f1_66b9(char a);
void f_b0f1_6835(char a, int i, int n);
extern int d_5d51_da04;
extern int d_5d51_d74c;
extern int d_5d51_d7ee;
extern int d_5d51_d91c;
extern int d_5d51_d67c;
extern int d_5d51_d67a;
extern int d_5d51_d66a;
extern int d_5d51_d668;
extern int d_5d51_d65c;
extern int d_5d51_d65a;
extern int d_5d51_da06;
extern int d_5d51_d8ea;
extern int d_5d51_d998;
extern int d_5d51_d9ec;
extern int d_5d51_d9ea;
extern int d_5d51_d9e8;
extern int d_5d51_dd9e;
extern int d_5d51_dd96;
extern int d_5d51_dda4;
extern long d_5d51_d411;
extern char d_5d51_d56c;
extern int d_5d51_a5e0[];
extern int far *d_5d51_da50;
extern int far *d_5d51_da40;
extern unsigned char far d_3404_45f2[];
extern int far d_3404_1392[][2][94];
extern char far d_2414_0ab4[][101];
extern char far d_2414_0780[][82][5];
extern char far d_2414_55d0[][80];
extern char far d_2414_c0cc[];
extern char far d_2414_354a[];
char far *f_1d5e_0e5f(char far *s);
char far *f_1d5e_0f31(char far *s, unsigned n);
char f_1646_6971(char x);
char f_1646_2e15(int x);
void f_9e79_1503(char all);
void f_9e79_163e(char redraw);
void f_1646_0bf2(char far *s);
extern unsigned char far d_3404_4782[];
extern char far d_2414_34fa[];
extern char d_5d51_d5d4;
extern char d_5d51_d5df;
extern int d_5d51_d5fc;
extern int d_5d51_d628;
extern int d_5d51_d654;
extern int d_5d51_d8de;
extern int d_5d51_d8e0;
extern int d_5d51_d9ba;
extern int d_5d51_d64c;
extern float far d_2414_d60c[][4];
extern int far d_2414_d62c[][4];
extern long far d_2414_d5f4[];
extern int far d_2414_d604[];
extern int d_5d51_da1a;
extern int d_5d51_dd9a;
extern char far *d_5d51_da48;
void f_1d5e_05b0(char reset);
void f_1d5e_03a8(int i, char r, char g, char b);
extern char far d_2414_2134[];
extern char far d_2414_4a3e[];
char f_b0f1_4e9f(int player);
extern int far d_3404_691c[];
extern char far * far d_4f37_0371[];
extern char far * far d_4f37_0654[];
extern int d_5d51_dd92;
extern unsigned char (far *d_5d51_da38)[1500];
extern char far d_2414_2238[];
extern char far d_2414_2288[];
extern char far d_2414_2328[];
extern char far d_2414_2378[];
extern char far d_2414_23c8[];
extern char far d_2414_2418[];
extern char far d_2414_2468[];
extern char far d_2414_24b8[];
extern char far d_2414_2508[];
extern char far d_2414_2558[];
extern char far d_2414_25bc[];
extern char far d_2414_260c[];
extern char far d_2414_265c[];
extern char far d_2414_26ac[];
extern char far d_2414_26fc[];
extern char far d_2414_274c[];
extern char far d_2414_279c[];
extern char far d_2414_27ec[];
extern char far d_2414_283c[];
extern char far d_2414_288c[];
extern char far d_2414_28dc[];
extern char far d_2414_292c[];
extern char far d_2414_297c[];
extern char far d_2414_29cc[];
extern char far d_2414_2a1c[];
extern char far d_2414_2a6c[];
extern char far d_2414_2abc[];
extern char far d_2414_2b0c[];
extern char far d_2414_2b5c[];
extern char far d_2414_2bac[];
extern char far d_2414_2bfc[];
extern char far d_2414_2c4c[];
extern char far d_2414_2d3c[];
extern char far d_2414_3426[];
extern char far d_2414_371e[];
extern char far d_2414_3950[];
extern char far d_2414_3d60[];
extern char far d_2414_4c46[];
long f_1d5e_0d6a(long n);
extern int far d_2414_d2c8[];
extern unsigned char far d_3404_1d48[];
extern unsigned char far d_3404_1fd2[];
extern unsigned char far d_3404_225c[];
extern unsigned char far d_3404_2770[];
extern unsigned char far d_3404_3bc0[];
extern unsigned char far d_4f37_099e[];
extern unsigned char far d_4f37_0b6a[];
extern unsigned char far d_4f37_0d36[];
extern unsigned char far d_4f37_7792[][140];
extern char near *d_5d51_b4c6[];
extern char d_5d51_d55c;
void f_1646_5bcb(int team, char far *title, char far *text);
int f_b0f1_0000(int a, char team);
void f_b0f1_6516(void);
extern int far d_3404_40aa[][38];
extern long far d_3404_3ee2[];
extern long far d_3404_3f7a[];
extern unsigned char far d_3404_4eb2[];
extern unsigned char far d_3404_4f52[];
extern char far d_2414_1e28[][40][5];
extern char far d_2414_97fc[][86];
extern char far d_2414_5460[][38];
extern unsigned char far d_2414_dae0[];
extern int far d_3404_0260[][16];
extern int far d_2414_d63c[][2][22];
extern unsigned char far d_3404_0728[];
extern unsigned char far d_3404_0724[];
extern int far d_4f37_1392[][2][100];
extern int far d_44d7_93fc[];
extern int far d_44d7_94c4[];
extern unsigned char far d_44d7_a5e0[];
extern char d_5d51_d408;
extern char d_5d51_d55a;
extern int d_5d51_da18;
extern int d_5d51_d97e;
extern int d_5d51_dd98;
extern char (far *d_5d51_da2c)[101];
extern unsigned char far d_3404_4e3a[];
extern char far d_2414_2c9c[];
extern char far d_2414_0050[];
unsigned char f_1646_717d(char team);
char far *f_9182_6df8(int round, int cup);
extern union flags far d_2414_af3c[];
extern int d_5d51_da0c;
extern unsigned char far d_4f37_09c4[][502];
extern unsigned char far d_4f37_0bba[];
extern unsigned char far d_4f37_0db0[];
extern int d_5d51_d9ee;
extern unsigned char d_5d51_d406;
unsigned char f_1646_716c(unsigned char league);
char f_1646_2646(int w);
char f_1646_6f56(int player);

/* the career screen's buttons */
static struct label d_5d51_6138[] = {
    {263, 50, "Seasons"}, {272, 84, "Apps"}, {269, 118, "Goals"}, {272, 152, "Av R"}
};

void f_a13d_0000(int player, int mode)
{
    struct label far *q;
    char buf[320];

    f_1646_6097();
    f_1646_4ba0("");
    sprintf(buf, " %s - aged %d", f_1646_470f(player), d_44d7_0000[17][player]);
    if (f_1646_6f38(player) == 0) {
        if (d_3c0d_0000[7][player] < 255)
            f_1646_3e54(1.25, 1.25, d_3404_448a[d_3c0d_0000[7][player]] / 16,
                        d_3404_448a[d_3c0d_0000[7][player]] % 16, 0, buf);
        else
            f_1646_3e54(1.25, 1.25, d_3404_448a[d_44d7_0000[18][player]] / 16,
                        d_3404_448a[d_44d7_0000[18][player]] % 16, 0, buf);
    } else
        f_1646_3e54(1.25, 1.25, 1, 4, 0, buf);
    f_1646_3686(1.125, 5.25, 1, 8, 0, " YEAR ");
    f_1646_3686(5.875, 5.25, 1, 8, 100, " CLUB");
    f_1646_3686(18.625, 5.25, 1, 8, 0, " AP ");
    f_1646_3686(21.875, 5.25, 1, 8, 0, " GL ");
    f_1646_3686(25.125, 5.25, 1, 8, 0, " AV R ");
    d_5d51_d9e2 = 6;
    d_5d51_d9b8 = 4;
    d_5d51_d9de = 12;
    d_5d51_d64a = 0;
    d_5d51_d648 = 0;
    d_5d51_d646 = 0;
    d_5d51_d644 = 0;
    if (d_5d51_d704 == 0) {
        f_1646_3686(1.125, 4.0, 0, 6, 0x130, " NO LEAGUE CAREER TO DATE");
    } else {
        d_5d51_d642 = -1;
        d_5d51_d640 = -1;
        if (d_5d51_d704 > 22) {
            d_5d51_d82e = d_5d51_d704 - 21;
            d_5d51_d63a = d_5d51_d82e - 1;
        } else {
            d_5d51_d82e = 1;
            d_5d51_d63a = d_5d51_d704;
        }
        d_5d51_d6d2 = d_2414_321f[d_5d51_d82e - 1][0] + 1900;
        sprintf(buf, " FOOTBALL LEAGUE CAREER SINCE %d", d_5d51_d6d2);
        f_1646_3686(1.125, 4.0, 0, 6, 0x130, buf);
        d_5d51_d9fe = d_5d51_d82e;
        d_5d51_d638 = 1;
        do {
            unsigned char far *p;

            p = (unsigned char far *)d_2414_3066;
            memcpy(d_2414_3066, &d_2414_321e[d_5d51_d9fe - 1][1], 6);
            d_2414_3066[6] = 0;
            d_5d51_d6d2 = d_2414_3066[0] + 1900;
            if (d_5d51_d6d2 != d_5d51_d642) {
                d_5d51_d64a++;
                d_5d51_d642 = d_5d51_d6d2;
            }
            d_5d51_d750 = (unsigned char)d_2414_3066[1] < 140
                ? d_2414_f168[(unsigned char)d_2414_3066[1]] : (unsigned char)d_2414_3066[1];
            d_5d51_d768 = d_2414_3066[2];
            d_5d51_d648 += d_5d51_d768;
            d_5d51_d7f8 = d_2414_3066[3];
            d_5d51_d646 += d_5d51_d7f8;
            d_5d51_d70e = (p[4] << 8) | p[5];
            d_5d51_d644 += d_5d51_d70e;
            if ((mode == 0 && d_5d51_d638 < 17) || (mode == 1 && d_5d51_d638 > 16)) {
                sprintf(buf, " %d ", d_5d51_d6d2);
                f_1646_3686(1.125, d_5d51_d9e2 + 0.25, 6, 3, 0, buf);
                if (d_5d51_d750 != d_5d51_d640) {
                    if (d_5d51_d750 <= 37)
                        sprintf(buf, " %.15s", (char far *)d_5d51_b476[d_5d51_d750]);
                    else if (d_5d51_d750 <= 139)
                        sprintf(buf, " %.15s", (char far *)d_5d51_b7ea[d_5d51_d750]);
                    else
                        sprintf(buf, " <%.13s>", d_4f37_0000[d_5d51_d750 - 140]);
                    d_5d51_d640 = d_5d51_d750;
                } else
                    strcpy(buf, "");
                f_1646_3686(5.875, d_5d51_d9e2 + 0.25, 1, d_5d51_d9b8, 100, buf);
                sprintf(buf, " %02d ", d_5d51_d768);
                f_1646_3686(18.625, d_5d51_d9e2 + 0.25, 1, 2, 0, buf);
                sprintf(buf, " %02d ", d_5d51_d7f8);
                f_1646_3686(21.875, d_5d51_d9e2 + 0.25, 1, 2, 0, buf);
                sprintf(buf, " %s ", f_a13d_202f(d_5d51_d768, d_5d51_d70e));
                f_1646_3686(25.125, d_5d51_d9e2 + 0.25, 1, 9, 0, buf);
                f_1d5e_13a4(&d_5d51_d9b8, &d_5d51_d9de, 2);
                d_5d51_d9e2++;
            }
            d_5d51_d638++;
            d_5d51_d5e1 = d_5d51_d9fe == d_5d51_d63a;
            if (d_5d51_d9fe == 22)
                d_5d51_d9fe = 1;
            else
                d_5d51_d9fe++;
        } while (!d_5d51_d5e1);
    }
    while (d_5d51_d9e2 < 22) {
        f_1646_3686(1.125, d_5d51_d9e2 + 0.25, 6, 3, 0, "      ");
        f_1646_3686(5.875, d_5d51_d9e2 + 0.25, 1, d_5d51_d9b8, 100, "");
        f_1646_3686(18.625, d_5d51_d9e2 + 0.25, 1, 2, 0, "    ");
        f_1646_3686(21.875, d_5d51_d9e2 + 0.25, 1, 2, 0, "    ");
        f_1646_3686(25.125, d_5d51_d9e2 + 0.25, 1, 9, 0, "      ");
        f_1d5e_13a4(&d_5d51_d9b8, &d_5d51_d9de, 2);
        d_5d51_d9e2++;
    }
    f_1646_60a7();
    for (d_5d51_d9e2 = 36, q = d_5d51_6138; d_5d51_d9e2 <= 138; d_5d51_d9e2 += 34, q++) {
        f_1d5e_08cc(24);
        f_1d5e_08e2(238, d_5d51_d9e2, 312, d_5d51_d9e2 + 15);
        f_1646_357e(266, d_5d51_d9e2 + 7, 1, "Career");
        f_1646_357e(q->x, q->y, 1, q->s);
    }
    sprintf(buf, "   %03d", d_5d51_d64a);
    f_1646_3e54(30.0, 7.25, 0, 1, 71, buf);
    sprintf(buf, "   %03d", d_5d51_d648);
    f_1646_3e54(30.0, 11.5, 0, 1, 71, buf);
    sprintf(buf, "   %03d", d_5d51_d646);
    f_1646_3e54(30.0, 15.75, 0, 1, 71, buf);
    sprintf(buf, "   %.3s", f_a13d_202f(-d_5d51_d648, d_5d51_d644));
    f_1646_3e54(30.0, 20.0, 0, 1, 71, buf);
}

void f_a13d_09a0(int team)
{
    int who[3];
    char buf[320];
    char far *names[7] = { "PLD", "WON", "DRN", "LST", "FOR", "AGG", "PTS" };
    float best[3];
    unsigned i;
    int j;

    do {
        f_1646_6097();
        f_1646_0003(1.25, team, "Info");
        f_1d5e_0b11(1);
        f_1d5e_08cc(16);
        f_1d5e_08e2(12, 28, 160, 86);
        f_1d5e_08e2(12, 128, 316, 170);
        f_1d5e_08e2(168, 28, 316, 86);
        f_1d5e_08e2(12, 94, 316, 120);
        f_1d5e_08cc(20);
        f_1d5e_08e2(8, 24, 156, 82);
        f_1d5e_08cc(19);
        f_1d5e_08e2(8, 124, 312, 166);
        f_1d5e_08cc(20);
        f_1d5e_08e2(164, 24, 312, 82);
        f_1d5e_08cc(30);
        f_1d5e_08e2(8, 90, 312, 116);
        f_1646_3686(1.375, 4.0, 0, 1, 144, "        General");
        f_1646_3686(1.375, 5.0, 1, 12, 71, " Manager");
        sprintf(buf, " %.10s", f_1646_4919(d_3404_4226[team], -1));
        f_1646_3686(10.5, 5.0, 1, 12, 71, buf);
        f_1646_3686(1.375, 6.0, 1, 12, 71, " Board");
        sprintf(buf, " %d%%", d_3404_452a[team]);
        f_1646_3686(10.5, 6.0, 1, 12, 71, buf);
        f_1646_3686(1.375, 7.0, 1, 12, 71, " Capacity");
        sprintf(buf, " %ld (%d)", d_3404_4462[team] * 1000L, d_3404_4e8a[team]);
        f_1646_3686(10.5, 7.0, 1, 12, 71, buf);
        f_1646_3686(1.375, 8.0, 1, 12, 71, " Cash");
        if (d_5d51_d5e5 != 0 || f_1646_2cc9(team))
            sprintf(buf, " %ld", f_1d5e_131d(d_3404_3e4a[0][team] - f_9e79_2216(team), 0L));
        else
            strcpy(buf, " Unknown");
        f_1646_3686(10.5, 8.0, 1, 12, 71, buf);
        f_1646_3686(1.375, 9.0, 1, 12, 71, " Ints");
        d_5d51_d63e = 0;
        d_5d51_d63c = 0;
        for (i = 0; i < 3; i++)
            best[i] = -1;
        for (j = 0; j <= d_3404_4552[team] - 1; j++) {
            d_5d51_d9f0 = d_44d7_9624[team][j];
            if (d_2414_af3c[d_5d51_d9f0].a.f18) {
                if (d_2414_af3c[d_5d51_d9f0].a.f19)
                    d_5d51_d63c++;
                else
                    d_5d51_d63e++;
            }
            d_5d51_d768 = d_3c0d_0000[12][d_5d51_d9f0];
            if (d_5d51_d768 > 0) {
                d_5d51_d7f8 = d_3c0d_0000[13][d_5d51_d9f0];
                d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 0);
                d_5d51_d535 = (float)d_5d51_da4c[2][d_5d51_d9f0] / d_5d51_d768;
                d_5d51_d700 = d_3c0d_0000[2][d_5d51_d9f0] - d_3c0d_0000[2][d_5d51_d9f0] % 5;
                if (d_5d51_d7f8 > best[0] || best[0] == -1) {
                    best[0] = d_5d51_d7f8;
                    who[0] = d_5d51_d9f0;
                }
                if (d_5d51_d535 > best[1] || best[1] == -1) {
                    best[1] = d_5d51_d535;
                    who[1] = d_5d51_d9f0;
                }
                if (d_5d51_d700 > best[2] || best[2] == -1) {
                    best[2] = d_5d51_d700;
                    who[2] = d_5d51_d9f0;
                }
            }
        }
        sprintf(buf, " %d", d_5d51_d63e);
        f_1646_3686(10.5, 9.0, 1, 12, 71, buf);
        f_1646_3686(1.375, 10.0, 1, 12, 71, " U-21s");
        sprintf(buf, " %d", d_5d51_d63c);
        f_1646_3686(10.5, 10.0, 1, 12, 71, buf);
        f_1646_3686(20.875, 4.0, 0, 1, 144, "       CUP ROUNDS");
        f_1646_3686(20.875, 5.0, 1, 12, 144, "      ITALIAN CUP");
        strcpy(d_2414_21e8, "Draw Not Made");
        if (d_2414_e918[team] > 0) {
            strcpy(d_2414_2198, f_9182_6d1c(d_2414_e918[team]));
            strcpy(d_2414_21e8, d_2414_2f1c);
        }
        sprintf(buf, "%*s", (72 - strlen(d_2414_21e8) * 3) / 6 + strlen(d_2414_21e8), d_2414_21e8);
        f_1646_3686(20.875, 6.0, 6, 12, 144, buf);
        d_5d51_d93c = 0;
        if (d_2414_ea30[team] > 0)
            d_5d51_d93c = 8;
        else if (d_2414_eabc[team] > 0)
            d_5d51_d93c = 9;
        else if (d_2414_eb48[team] > 0)
            d_5d51_d93c = 10;
        else if (d_2414_ebd4[team] > 0)
            d_5d51_d93c = 11;
        if (d_5d51_d93c > 0) {
            strcpy(d_2414_2198, f_9182_6df8(d_2414_e5d0[d_5d51_d93c][team], d_5d51_d93c - 5));
            sprintf(d_2414_4b56, "THE %s", d_2414_2ecc);
            sprintf(buf, "%*s", (72 - strlen(d_2414_4b56) * 3) / 6 + strlen(d_2414_4b56), d_2414_4b56);
            f_1646_3686(20.875, 7.0, 1, 12, 144, buf);
            strcpy(d_2414_21e8, "Draw Not Made");
            if (d_2414_e5d0[d_5d51_d93c][team] > 0)
                strcpy(d_2414_21e8, d_2414_2f1c);
            sprintf(buf, "%*s", (72 - strlen(d_2414_21e8) * 3) / 6 + strlen(d_2414_21e8), d_2414_21e8);
            f_1646_3686(20.875, 8.0, 6, 12, 144, buf);
        } else {
            f_1646_3686(20.875, 7.0, 1, 12, 144, "");
            f_1646_3686(20.875, 8.0, 6, 12, 144, "");
        }
        f_1646_3686(20.875, 9.0, 1, 12, 144, "");
        f_1646_3686(20.875, 10.0, 6, 12, 144, "");
        f_1646_3686(1.375, 12.25, 1, 2, 300, "                  League Record");
        d_5d51_d9ac = f_1646_46a0(team);
        f_1646_3686(1.375, 13.25, 0, 1, 34, " SER");
        sprintf(buf, " %s", f_1646_4b1e(f_1646_717d(d_5d51_d9ac) + 1, 3));
        f_1646_3686(1.375, 14.25, 1, 4, 34, buf);
        f_1646_3686(5.875, 13.25, 0, 1, 33, " POS");
        sprintf(buf, " %s", f_1646_4a8f(d_5d51_d9ac < 18 ? d_5d51_d9ac + 1 : d_5d51_d9ac - 17));
        f_1646_3686(5.875, 14.25, 1, 4, 33, buf);
        for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= 6; d_5d51_d9d0++) {
            d_5d51_d549 = d_5d51_d9d0 * 4.125 + 10.25;
            sprintf(buf, " %s", names[d_5d51_d9d0]);
            f_1646_3686(d_5d51_d549, 13.25, 0, 6, 31, buf);
            if (d_5d51_d9d0 == 0)
                d_5d51_d98e = d_5d51_d9ac < 18 ? d_5d51_da0e : d_5d51_da0c;
            else if (d_5d51_d9d0 == 1)
                d_5d51_d98e = d_3404_461a[team];
            else if (d_5d51_d9d0 == 2)
                d_5d51_d98e = (d_5d51_d9ac < 18 ? d_5d51_da0e : d_5d51_da0c) - d_3404_461a[team] - d_3404_4642[team];
            else if (d_5d51_d9d0 == 6)
                d_5d51_d98e = f_9e79_0000(d_5d51_d9ac);
            else
                d_5d51_d98e = d_3404_45ca[d_5d51_d9d0][team];
            sprintf(buf, "%3d", d_5d51_d98e);
            f_1646_3686(d_5d51_d549, 14.25, 1, 4, 31, buf);
        }
        f_1646_3686(1.375, 16.5, 0, 1, 300, "                   This season");
        f_1646_3686(1.375, 17.5, 0, 6, 149, " Average attendance");
        strcpy(d_2414_4b56, "");
        if (d_3404_4dc2[team] > 0)
            sprintf(d_2414_4b56, " %ld", d_3404_4012[team] / d_3404_4dc2[team]);
        f_1646_3686(20.25, 17.5, 0, 6, 149, d_2414_4b56);
        f_1646_3686(1.375, 18.5, 0, 6, 149, " Top Goalscorer");
        strcpy(d_2414_4b56, "");
        if (best[0] > 0) {
            strcpy(buf, f_1646_4849(who[0]));
            buf[18] = 0;
            sprintf(d_2414_4b56, " %s - %d", buf, (int)best[0]);
        }
        f_1646_3686(20.25, 18.5, 0, 6, 149, d_2414_4b56);
        f_1646_3686(1.375, 19.5, 0, 6, 149, " Best Average Rating");
        strcpy(d_2414_4b56, "");
        if (best[1] > 0) {
            sprintf(d_2414_4d36, "%4.2f", best[1]);
            strcpy(buf, f_1646_4849(who[1]));
            buf[16] = 0;
            sprintf(d_2414_4b56, " %s - %s", buf, d_2414_4d36);
        }
        f_1646_3686(20.25, 19.5, 0, 6, 149, d_2414_4b56);
        f_1646_3686(1.375, 20.5, 0, 6, 149, " Worst Discipline");
        strcpy(d_2414_4b56, "");
        if (best[2] > 0) {
            strcpy(buf, f_1646_4849(who[2]));
            buf[18] = 0;
            sprintf(d_2414_4b56, " %s - %d", buf, (int)best[2]);
        }
        f_1646_3686(20.25, 20.5, 0, 6, 149, d_2414_4b56);
        f_1646_60a7();
        f_1646_50c5(2, 25.75, 1.125, 1, 2, 31, "PRNT");
        f_1646_50c5(2, 30.25, 1.125, 1, 2, 31, "HIST");
        f_1646_50c5(2, 34.75, 1.125, 1, 2, 31, "RECS");
        f_1646_50c5(2, 1.25, 22.5, 1, 4, 301, "                 DONE");
        if (d_5d51_d5e7 == 0)
            f_1646_5869(1);
        do {
            d_5d51_d636 = d_5d51_da0a = f_1646_5602(d_5d51_d9c6);
            if (d_5d51_d636 == 1) {
                f_9915_0000(team);
                f_1646_545c(1, 0);
            }
        } while (d_5d51_d636 <= 0);
        if (d_5d51_d636 == 2)
            f_9182_5e5f(team);
        else if (d_5d51_d636 == 3)
            f_9182_4c86(team);
    } while (d_5d51_d636 != 4);
}

void f_a13d_1ca2(char a)
{
    unsigned i, j;
    register unsigned char c;
    unsigned char k, n;
    unsigned char used[2][2];

    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            d_2414_d60c[i][j] = 0;
    memset(d_2414_d62c, -1, 16);
    memset(d_2414_d5f4, 0, 16);
    memset(d_2414_d604, -1, 8);
    memset(used, 0, 4);
    d_5d51_d634 = 3 - a * 17;
    do {
        for (d_5d51_d9f0 = 0; d_5d51_d9f0 <= d_5d51_da1a - 1; d_5d51_d9f0++) {
            d_5d51_d768 = d_3c0d_0000[a ? 0 : 21][d_5d51_d9f0];
            d_5d51_d9c4 = f_1646_717d(d_44d7_0000[18][d_5d51_d9f0]);
            d_5d51_d9a6 = d_44d7_0000[17][d_5d51_d9f0] < 22;
            if (used[d_5d51_d9a6][d_5d51_d9c4] == 0 && d_5d51_d768 >= d_5d51_d634) {
                if (a) {
                    d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 0);
                    d_5d51_d632 = (*d_5d51_da4c)[d_5d51_d9f0];
                } else
                    d_5d51_d632 = d_3c0d_0000[22][d_5d51_d9f0];
                d_5d51_d535 = (float)d_5d51_d632 / d_5d51_d768;
                if (d_2414_d60c[d_5d51_d9a6][d_5d51_d9c4] < d_5d51_d535) {
                    d_2414_d62c[d_5d51_d9a6][d_5d51_d9c4] = d_5d51_d9f0;
                    d_2414_d60c[d_5d51_d9a6][d_5d51_d9c4] = d_5d51_d535;
                }
            }
        }
        n = 0;
        for (c = 0; c <= 1; c++)
            for (k = 0; k <= 3; ++k)
                if (d_2414_d62c[c][k] > -1) {
                    used[c][k] = 1;
                    n++;
                }
        d_5d51_d634--;
    } while (n < 8 && d_5d51_d634 > 1);
    for (d_5d51_d9b2 = 0; d_5d51_d9b2 <= d_5d51_d958 + 645; d_5d51_d9b2++) {
        if (d_3404_1abe[d_5d51_d9b2] < 0xff) {
            if (a) {
                d_5d51_da54 = f_1d5e_1618(d_5d51_dda0, 0);
                d_5d51_d49d = d_5d51_da54[d_5d51_d9b2];
            } else {
                d_5d51_da48 = f_1d5e_1618(d_5d51_dd9a, 0);
                d_5d51_d49d = ((int far *)(d_5d51_da48 + 2600))[d_5d51_d9b2];
            }
            d_5d51_d9c4 = f_1646_717d(d_3404_1abe[d_5d51_d9b2]);
            if (d_2414_d5f4[d_5d51_d9c4] < d_5d51_d49d) {
                d_2414_d604[d_5d51_d9c4] = d_5d51_d9b2;
                d_2414_d5f4[d_5d51_d9c4] = d_5d51_d49d;
            }
        }
    }
}

char far *f_a13d_202f(int a, int b)
{
    char far *buf;

    buf = f_1d5e_0efc();
    if (a == 0)
        strcpy(buf, "----");
    else if (a > 0)
        sprintf(buf, "%4.2f", (float)b / a);
    else if (a < 0)
        sprintf(buf, "%3.1f", (float)b / abs(a));
    return buf;
}

int f_a13d_20c9(void)
{
    int m;

    m = 2;
    if (d_5d51_d5e5 == 0) {
        for (d_5d51_d9d0 = 646; d_5d51_d9d0 <= d_5d51_d958 + 645; d_5d51_d9d0++) {
            if (d_3404_1abe[d_5d51_d9d0] < 0xff) {
                d_5d51_d9c4 = f_1646_717d(d_3404_1abe[d_5d51_d9d0]);
                if (d_5d51_d9c4 < m)
                    m = d_5d51_d9c4;
            }
        }
    }
    if (m == 2)
        m = 0;
    return m;
}

void f_a13d_2129(void)
{
    f_a13d_2238();
    f_1d5e_0993();
    f_1d5e_0477();
    strcpy(d_2414_2134, "");
    strcpy(d_2414_4a3e, "picture1.lbm");
    f_1d5e_05b0(-1);
    f_a13d_225f();
    /* the colours of non-club teams 356-367 (rows 1 and 2, read elsewhere as
     * d_4f37_0bba / d_4f37_0db0[team - 38]: first colour, then second) */
    d_4f37_09c4[1][318] = 0x60;
    d_4f37_09c4[2][318] = 0x01;
    d_4f37_09c4[1][319] = 0x13;
    d_4f37_09c4[2][319] = 0x12;
    d_4f37_09c4[1][320] = 0x54;
    d_4f37_09c4[2][320] = 0x46;
    d_4f37_09c4[1][321] = 0x03;
    d_4f37_09c4[2][321] = 0x31;
    d_4f37_09c4[1][322] = 0x14;
    d_4f37_09c4[2][322] = 0x12;
    d_4f37_09c4[1][323] = 0x14;
    d_4f37_09c4[2][323] = 0x46;
    d_4f37_09c4[1][324] = 0x31;
    d_4f37_09c4[2][324] = 0x06;
    d_4f37_09c4[1][325] = 0x1c;
    d_4f37_09c4[2][325] = 0x12;
    d_4f37_09c4[1][326] = 0x41;
    d_4f37_09c4[2][326] = 0x12;
    d_4f37_09c4[1][327] = 0x01;
    d_4f37_09c4[2][327] = 0x12;
    d_4f37_09c4[1][328] = 0x42;
    d_4f37_09c4[2][328] = 0x21;
    d_4f37_09c4[1][329] = 0x12;
    d_4f37_09c4[2][329] = 0x41;
}

void f_a13d_2238(void)
{
    f_1d5e_01c4();
    f_1d5e_08cc(0);
    f_1d5e_08e2(0, 0, 0x13f, 0xc7);
}

/* colours 16-31 of the palette, as RGB triples (CM93's colours 18 and 29 differ) */
static unsigned char d_5d51_6174[] = {
    0, 0, 0, 15, 15, 15, 13, 0, 0, 0, 10, 4, 0, 4, 10, 0, 14, 14, 14, 14, 6, 12, 0, 14,
    10, 10, 10, 14, 8, 0, 2, 2, 8, 6, 0, 6, 2, 8, 12, 7, 0, 1, 7, 7, 7, 0, 8, 2
};

void f_a13d_225f(void)
{
    int r, g, b;
    unsigned char far *p;

    p = d_5d51_6174;
    for (d_5d51_d84e = 16; d_5d51_d84e <= 31; d_5d51_d84e++) {
        r = *p++;
        g = *p++;
        b = *p++;
        f_1d5e_03a8(d_5d51_d84e, r, g, b);
    }
}

void f_a13d_22c6(int p)
{
    char buf[320];
    int m;

    sprintf(buf, "%d years", d_44d7_0000[17][p]);
    strcpy(d_2414_2d3c, f_1646_4616(12, buf));
    if (f_1646_6f38(p) == 0) {
        if (d_3c0d_0000[7][p] < 255)
            strcpy(buf, d_5d51_b476[d_3c0d_0000[7][p]]);
        else
            strcpy(buf, d_5d51_b476[d_44d7_0000[18][p]]);
    } else
        sprintf(buf, "<%s>", d_4f37_0000[d_44d7_0000[18][p] - 140]);
    strcpy(d_2414_4c46, f_1646_4616(12, buf));
    d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 0);
    strcpy(buf, d_4f37_0000[d_5d51_da38[9][p]]);
    if (d_2414_af3c[p].w.f18) {
        if (d_2414_af3c[p].w.f19 == 0)
            strcat(buf, " I");
        else
            strcat(buf, " U");
    }
    strcpy(d_2414_2bfc, f_1646_4616(12, buf));
    if (f_1646_6f38(p) == 0) {
        if (d_3404_691c[p] > 0)
            sprintf(buf, "EXP %d/%d", d_5d51_d652 % 100, (d_5d51_d652 = d_3404_691c[p]) / 100);
        else
            strcpy(buf, "Free agent");
    } else
        strcpy(buf, "Unknown");
    strcpy(d_2414_2bac, f_1646_4616(12, buf));
    if (f_1646_6f38(p) == 0) {
        d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 0);
        sprintf(buf, "%d p/w", d_5d51_da4c[4][p]);
    } else
        strcpy(buf, "Unknown");
    strcpy(d_2414_2b5c, f_1646_4616(12, buf));
    if (d_3c0d_0000[7][p] < 255)
        strcpy(buf, "On Loan");
    else {
        if (d_2414_af3c[p].w.f8)
            strcpy(buf, d_2414_af3c[p].w.f10 ? "R/" : "L/");
        else
            strcpy(buf, "");
        if (d_2414_af3c[p].w.f24)
            strcat(buf, "For Loan");
        else {
            d_5d51_d4a1 = f_1646_0204(p, d_44d7_0000[18][p]);
            if (d_2414_af3c[p].w.f8 == 0 && f_1646_2cc9(d_44d7_0000[18][p]) == 0)
                d_5d51_d4a1 = f_1646_0e45(d_5d51_d4a1);
            strcat(buf, f_1646_0ee9(d_5d51_d4a1));
        }
    }
    strcpy(d_2414_2b0c, f_1646_4616(12, buf));
    if (d_2414_af3c[p].w.f20)
        sprintf(buf, "%ld p/w", f_8ba7_1401(p));
    else
        strcpy(buf, "NONE");
    strcpy(d_2414_2abc, f_1646_4616(12, buf));

    strcpy(d_2414_3426, "");
    if (d_2414_af3c[p].w.f0)
        strcat(d_2414_3426, " GK");
    if (d_2414_af3c[p].w.f1)
        strcat(d_2414_3426, " DEF");
    if (d_2414_af3c[p].w.f2)
        strcat(d_2414_3426, " MID");
    if (d_2414_af3c[p].w.f3)
        strcat(d_2414_3426, " ATT");
    strcpy(buf, &d_2414_3426[1]);
    strcpy(d_2414_3426, f_1646_4616(12, buf));
    if (d_2414_af3c[p].w.f0 == 0) {
        strcpy(d_2414_2c4c, "");
        if (d_2414_af3c[p].w.f4)
            strcat(d_2414_2c4c, " R");
        if (d_2414_af3c[p].w.f5)
            strcat(d_2414_2c4c, " L");
        if (d_2414_af3c[p].w.f6)
            strcat(d_2414_2c4c, " C");
    } else if (f_1646_6f38(p) == 0)
        sprintf(d_2414_2c4c, " %d", d_44d7_0000[1][p]);
    else
        strcpy(d_2414_2c4c, " Unknown");
    strcpy(d_2414_2c4c, &d_2414_2c4c[1]);
    strcpy(d_2414_2c4c, f_1646_4616(12, d_2414_2c4c));

    sprintf(buf, "%d", d_3c0d_0000[12][p]);
    strcpy(d_2414_26fc, f_1646_4616(8, buf));
    sprintf(buf, "%d", d_3c0d_0000[13][p]);
    strcpy(d_2414_371e, f_1646_4616(8, buf));
    sprintf(buf, "%d", d_3c0d_0000[2][p] / 5 * 5);
    strcpy(d_2414_3d60, f_1646_4616(8, buf));
    if (d_3c0d_0000[12][p] > 0) {
        d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 0);
        sprintf(buf, "%4.2f", (float)d_5d51_da4c[2][p] / d_3c0d_0000[12][p]);
    } else
        strcpy(buf, "----");
    strcpy(d_2414_4d36, f_1646_4616(8, buf));
    if (d_3c0d_0000[0][p] > 0) {
        sprintf(buf, "%d", d_3c0d_0000[3][p]);
        strcpy(d_2414_26ac, f_1646_4616(8, buf));
        sprintf(buf, "%d", d_3c0d_0000[4][p]);
        strcpy(d_2414_265c, f_1646_4616(8, buf));
    } else {
        strcpy(d_2414_26ac, " -      ");
        strcpy(d_2414_265c, d_2414_26ac);
    }
    d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 0);
    sprintf(buf, "%d", d_5d51_da38[3][p]);
    strcpy(d_2414_260c, f_1646_4616(8, buf));
    d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 0);
    sprintf(buf, "%d", d_5d51_da38[2][p]);
    strcpy(d_2414_25bc, f_1646_4616(8, buf));
    sprintf(buf, "%d", d_3c0d_0000[5][p]);
    strcpy(d_2414_2558, f_1646_4616(7, buf));
    sprintf(buf, "%d", d_3c0d_0000[6][p]);
    strcpy(d_2414_2508, f_1646_4616(7, buf));
    d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 0);
    sprintf(buf, "%d", d_5d51_da38[6][p]);
    strcpy(d_2414_24b8, f_1646_4616(7, buf));
    d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 0);
    if (d_3c0d_0000[5][p] > 0)
        sprintf(buf, "%4.2f", (float)d_5d51_da4c[1][p] / d_3c0d_0000[5][p]);
    else
        strcpy(buf, "----");
    strcpy(d_2414_2468, f_1646_4616(7, buf));
    if (d_3c0d_0000[5][p] > 0) {
        d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 0);
        sprintf(buf, "%d", d_5d51_da38[7][p]);
        strcpy(d_2414_2418, f_1646_4616(7, buf));
        d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 0);
        sprintf(buf, "%d", d_5d51_da38[8][p]);
        strcpy(d_2414_2328, f_1646_4616(7, buf));
    } else {
        strcpy(d_2414_2418, " -     ");
        strcpy(d_2414_2328, d_2414_2418);
    }

    strcpy(d_2414_279c, "                  AVAILABILITY");
    if (d_44d7_0000[20][p] > 0 && d_44d7_0000[19][p] != 51) {
        if (d_44d7_0000[19][p] < 27) {
            if (d_44d7_0000[20][p] < 3)
                strcpy(d_2414_2288, "soon");
            else
                sprintf(d_2414_2288, "in about %d weeks", d_44d7_0000[20][p]);
            sprintf(d_2414_274c, "Has %s - back %s", d_4f37_0371[d_44d7_0000[19][p]], d_2414_2288);
        } else if (d_44d7_0000[19][p] == 27) {
            if (d_44d7_0000[20][p] == 1)
                strcpy(d_2414_2288, "match");
            else
                sprintf(d_2414_2288, "%d matches", d_44d7_0000[20][p]);
            sprintf(d_2414_274c, "Suspended for next %s", d_2414_2288);
        } else if (d_44d7_0000[19][p] == 50)
            strcpy(d_2414_274c, "Cup-tied for this match");
    } else {
        sprintf(d_2414_274c, "%d%% match fit", d_44d7_0000[21][p]);
        if (d_2414_af3c[p].w.f7) {
            unsigned char n;

            n = f_1646_1f63(p) + 1;
            sprintf(buf, " - Shirt No.%s", f_1646_2f4b(n, 0));
            strcat(d_2414_274c, buf);
        }
    }
    strcpy(d_2414_2a6c, d_4f37_0654[d_3c0d_0000[17][p]]);
    if (d_2414_af3c[p].w.f0 == 0) {
        sprintf(d_2414_2a1c, "%d", d_44d7_0000[1][p]);
        sprintf(d_2414_29cc, "%d", d_44d7_0000[2][p]);
        sprintf(d_2414_297c, "%d", d_44d7_0000[3][p]);
        sprintf(d_2414_292c, "%d", d_44d7_0000[4][p]);
        sprintf(d_2414_28dc, "%d", d_44d7_0000[5][p]);
        sprintf(d_2414_288c, "%d", d_44d7_0000[6][p]);
        sprintf(d_2414_283c, "%d", d_44d7_0000[22][p]);
    } else {
        strcpy(d_2414_2a1c, "");
        strcpy(d_2414_29cc, "");
        strcpy(d_2414_297c, "");
        strcpy(d_2414_292c, "");
        strcpy(d_2414_28dc, "");
        strcpy(d_2414_288c, "");
        strcpy(d_2414_283c, "");
    }
    sprintf(d_2414_27ec, "%d", d_44d7_0000[12][p]);
    m = d_44d7_0000[15][p] - d_44d7_0000[0][p];
    if (m <= -24)
        strcpy(d_2414_23c8, "Very low");
    else if (m <= -16)
        strcpy(d_2414_23c8, "Low");
    else if (m <= 8)
        strcpy(d_2414_23c8, "Ok");
    else if (m <= 24)
        strcpy(d_2414_23c8, "Good");
    else
        strcpy(d_2414_23c8, "Superb");

    d_5d51_d59f = f_1646_6ae2(p, 0);
    if (d_5d51_d59f && (d_5d51_d828 == 1 || d_5d51_d828 == 2) && d_3c0d_0000[14][p] == 0)
        d_5d51_d59f = 0;
    if (d_2414_af3c[p].w.f8 && d_2414_af3c[p].w.f10) {
        if (d_5d51_d59f == 0)
            strcpy(d_2414_3950, "But having second thoughts");
        sprintf(d_2414_2238, "Requested move - %s", d_2414_3950);
    } else if (d_5d51_d59f) {
        if (d_3c0d_0000[14][p] > 0)
            sprintf(d_2414_2238, "%s to leave - %s", d_2414_af3c[p].w.f8 ? "Wants" : "May ask", d_2414_3950);
        else
            sprintf(d_2414_2238, "Unhappy - %s", d_2414_3950);
    } else if (f_b0f1_4e9f(p)) {
        /* Italia: row 9 (the nation printed above) non-zero: a foreigner going home */
        if (d_5d51_da38[9][p])
            strcpy(d_2414_2238, "Expected to return home at end of season");
        else
            strcpy(d_2414_2238, "Expected to move to Serie C at end of season");
    } else
        sprintf(d_2414_2238, "%s happy to stay at the club", d_2414_af3c[p].w.f8 ? "He would be" : "He is");

    strcpy(d_2414_2378, "");
    if (d_3c0d_0000[23][p] > 0 && !d_2414_af3c[p].w.f9 && !d_2414_af3c[p].w.f30) {
        d_5d51_d650 = 0;
        for (d_5d51_d64e = 0; d_5d51_d64e <= 37; d_5d51_d64e++) {
            if (f_1646_2cc9(d_5d51_d64e) == 0 && f_8539_1b9e(d_5d51_d64e, p) > 0) {
                d_5d51_d650++;
                if (d_5d51_d650 > 1) {
                    if (d_3c0d_0000[23][p] == d_5d51_d650)
                        strcat(d_2414_2378, " and ");
                    else if (d_3c0d_0000[23][p] > d_5d51_d650)
                        strcat(d_2414_2378, ", ");
                }
                strcat(d_2414_2378, d_5d51_b476[d_5d51_d64e]);
            }
        }
    }
}

void f_a13d_3539(void)
{
    f_1646_3686(1.375, 24.375, 6, 4, 0x12a, "");
    if (d_5d51_d56a == 0) {
        f_1646_3686(1.375, 23.5, 0, 1, 0x12a, "                     FUTURE");
        f_1646_3686(-1.0, 24.375, 6, 4, 0, d_2414_2238);
    } else {
        f_1646_3686(1.375, 23.5, 0, 6, 0x12a, "                   TARGETED BY");
        f_1646_3686(-1.0, 24.375, 1, 4, 0, d_2414_2378);
    }
    d_5d51_d56a = !d_5d51_d56a;
}

void f_a13d_3631(void)
{
    f_1646_3686(37.375, 23.5, 2, d_5d51_d56a ? 1 : 6, 0, d_5d51_d569 ? ">" : " ");
    d_5d51_d569 = !d_5d51_d569;
}

void f_a13d_3690(void)
{
    for (d_5d51_d9cc = 0; d_5d51_d9cc <= 139; d_5d51_d9cc++)
        d_2414_d2c8[d_5d51_d9cc] = d_5d51_d9cc + (d_5d51_d9cc >= 38 ? 400 : 0);
    for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= 138; d_5d51_d9d0++)
        for (d_5d51_d9fe = d_5d51_d9d0 + 1; d_5d51_d9fe <= 139; d_5d51_d9fe++)
            if (strcmp(f_1646_3537(d_2414_d2c8[d_5d51_d9d0]), f_1646_3537(d_2414_d2c8[d_5d51_d9fe])) > 0)
                f_1d5e_13a4(&d_2414_d2c8[d_5d51_d9d0], &d_2414_d2c8[d_5d51_d9fe], 2);
    d_5d51_d56f = -1;
    for (d_5d51_d954 = 0x286; d_5d51_d954 < 0x28a; d_5d51_d954++)
        d_3404_1abe[d_5d51_d954] = 255;
    f_1646_2fa4(0, "New game", "Demo Game|One Player|Two Players|Three Players|Four Players|");
    d_5d51_d958 = d_5d51_d956 = d_5d51_da0a;
    d_5d51_d5e5 = d_5d51_d956 == 0 ? -1 : 0;
    if (d_5d51_d956 > 0) {
        for (d_5d51_d9f0 = 1; d_5d51_d9f0 <= d_5d51_d958; d_5d51_d9f0++) {
            d_5d51_d9ca = f_a13d_3af5(d_5d51_d954 = d_5d51_d9f0 + 0x285);
            if (d_5d51_d9ca >= 400) {
                d_5d51_d674 = -1;
                for (d_5d51_d9cc = 18; d_5d51_d9cc <= 37; d_5d51_d9cc++) {
                    if (f_1646_2cc9(d_5d51_d9cc) == 0) {
                        if ((d_5d51_d7ea = f_1646_2cfd(d_5d51_d9cc) + f_1d5e_0d6a(2) - f_1d5e_0d6a(2)) < d_5d51_d672
                            || d_5d51_d674 == -1) {
                            d_5d51_d672 = d_5d51_d7ea;
                            d_5d51_d674 = d_5d51_d9cc;
                        }
                    }
                }
                d_5d51_b4c6[d_5d51_d674] = d_5d51_b4ca[d_5d51_d9ca];
                f_1d5e_13a4((void *)&d_5d51_b476[d_5d51_d674], (void *)&d_5d51_b4ca[d_5d51_d9ca], 2);
                d_3404_443a[0][d_5d51_d674] = 10;
                d_3404_443a[1][d_5d51_d674] = f_1d5e_0d6a(10) + 10;
                f_1d5e_13a4((void *)&d_3404_443a[2][d_5d51_d674], (void *)&d_4f37_0bba[d_5d51_d9ca - 38], 1);
                f_1d5e_13a4((void *)&d_3404_443a[3][d_5d51_d674], (void *)&d_4f37_0db0[d_5d51_d9ca - 38], 1);
                d_3404_443a[4][d_5d51_d674] = 13;
                d_4f37_09c4[0][d_5d51_d9ca - 38] = 10;
                f_1d5e_13a4((void *)&d_4f37_7792[0][d_5d51_d674], (void *)&d_4f37_7792[0][d_5d51_d9ca - 400], 1);
                f_1d5e_13a4((void *)&d_4f37_7792[1][d_5d51_d674], (void *)&d_4f37_7792[1][d_5d51_d9ca - 400], 1);
                d_5d51_d9ca = d_5d51_d674;
            }
            d_5d51_d954 = d_5d51_d9f0 + 0x285;
            d_3404_4226[d_5d51_d9ca] = d_5d51_d954;
            d_3404_1abe[d_5d51_d954] = d_5d51_d9ca;
            d_3404_1d48[d_5d51_d954] = 35;
            d_3404_1fd2[d_5d51_d954] = 25;
            d_3404_3bc0[d_5d51_d954] = 0;
            d_3404_2770[d_5d51_d954] = 80;
            d_3404_225c[d_5d51_d954] = f_a13d_3d54(d_5d51_d954);
            f_9915_4dfd(d_5d51_d9f0 - 1);
        }
        if (d_5d51_d55c == 0) {
            f_1646_2fa4(0, "Starting Division", "Serie A|Serie B|");
            d_5d51_d676 = d_5d51_da0a + 1;
            for (d_5d51_d9b2 = 0x286; d_5d51_d9b2 <= d_5d51_d958 + 0x285; d_5d51_d9b2++) {
                d_5d51_d9ca = d_3404_1abe[d_5d51_d9b2];
                if (d_5d51_d9ca < 255) {
                    if ((d_5d51_d9c4 = f_1646_717d(d_5d51_d9ca) + 1) < d_5d51_d676) {
                        for (d_5d51_d934 = d_5d51_d9c4; d_5d51_d934 <= d_5d51_d676 - 1; d_5d51_d934++) {
                            f_9e79_0071(d_5d51_d9ca, d_5d51_d934 + 1);
                            d_5d51_d9ca = d_5d51_d674;
                        }
                    } else if (d_5d51_d9c4 > d_5d51_d676) {
                        for (d_5d51_d934 = d_5d51_d9c4; d_5d51_d934 >= d_5d51_d676 + 1; d_5d51_d934--) {
                            f_9e79_0071(d_5d51_d9ca, d_5d51_d934 - 1);
                            d_5d51_d9ca = d_5d51_d674;
                        }
                    }
                }
            }
        }
    }
    d_5d51_d56f = 0;
}

int f_a13d_3af5(int p)
{
    char buf[320];
    int list[48];

    d_5d51_d9ca = -1;
    d_5d51_d9b6 = 1;
    do {
        f_1646_4ba0("Team Choice");
        sprintf(buf, " Player %s choose team ", f_1646_4a20(p - 645));
        f_1646_3686(1.125, 4.0, 1, 2, 0x130, buf);
        f_1646_50c5(2, 1.25, 22.5, 1, 4, 0x12d, "                 MORE");
        for (d_5d51_d9cc = 0; d_5d51_d9cc <= (d_5d51_d9b6 == 3 ? 43 : 47); d_5d51_d9cc++) {
            list[d_5d51_d9cc] = d_2414_d2c8[(d_5d51_d9b6 - 1) * 48 + d_5d51_d9cc];
            d_5d51_d549 = d_5d51_d9cc / 16 * 12.75 + 1.125;
            d_5d51_d551 = d_5d51_d9cc + 6 - d_5d51_d9cc / 16 * 16;
            sprintf(buf, " %.15s", f_1646_3537(list[d_5d51_d9cc]));
            f_1646_50c5(0, d_5d51_d549, d_5d51_d551, f_1646_2cc9(list[d_5d51_d9cc]) ? 6 : 1,
                        d_5d51_d9cc & 1 ? 15 : 3, 100, buf);
            if (f_1646_2cc9(list[d_5d51_d9cc]) || (list[d_5d51_d9cc] >= 38 && d_5d51_d55c))
                f_1646_5869(d_5d51_d9cc + 2);
        }
        do {
            d_5d51_da0a = f_1646_5602(d_5d51_d9c6);
        } while (d_5d51_da0a == 0);
        if (d_5d51_da0a == 1) {
            d_5d51_d9b6++;
            if (d_5d51_d9b6 == 4)
                d_5d51_d9b6 = 1;
        } else
            d_5d51_d9ca = list[d_5d51_da0a - 2];
    } while (d_5d51_d9ca == -1);
    return d_5d51_d9ca;
}

int f_a13d_3d54(int p)
{
    char buf[320];

    sprintf(buf, "Player %s", f_1646_4a20(p - 645));
    f_1646_4ba0(buf);
    f_1646_3e54(1.0, 4.0, 1, 2, 0, " Select Personality ");
    strcpy(buf, "");
    for (d_5d51_d670 = 0; d_5d51_d670 <= 9; d_5d51_d670++) {
        strcat(buf, d_4f37_0654[d_5d51_d670]);
        strcat(buf, "|");
    }
    f_1646_2fa4(7, "", buf);
    f_1646_3348(9);
    return d_5d51_da0a;
}

void f_a13d_3e44(void)
{
    register int salary;
    char title[320];
    char text[320];

    for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= 37; d_5d51_d9d0++) {
        for (d_5d51_d9fe = 0; d_5d51_d9fe <= 21; d_5d51_d9fe++) {
            switch (d_5d51_d9fe) {
            case 8: case 9: case 12: case 13: case 14: case 15: case 16: case 17: case 18:
            case 19: case 20:
                d_3404_443a[d_5d51_d9fe][d_5d51_d9d0] = 0;
                break;
            case 0: case 1: case 2: case 4:
                d_3404_40aa[d_5d51_d9fe][d_5d51_d9d0] = 0;
                break;
            }
        }
        d_3404_45f2[d_5d51_d9d0] = 2;
        d_3404_3ee2[d_5d51_d9d0] = 0;
        d_3404_3f7a[d_5d51_d9d0] = 0;
        d_3404_4012[d_5d51_d9d0] = 0;
        d_3404_4dc2[d_5d51_d9d0] = 0;
        d_3404_4eb2[d_5d51_d9d0] = 0;
        d_3404_4f52[d_5d51_d9d0] = 0;
        d_5d51_d411 = (f_1646_2cfd(d_5d51_d9d0) + f_1d5e_0d6a(2) - f_1d5e_0d6a(2))
            * (4 - f_1646_717d(d_5d51_d9d0)) * 500.0f;
        d_5d51_da44 = f_1d5e_1618(d_5d51_dd98, 1);
        d_5d51_da44[1][d_5d51_d9d0] = d_5d51_d411 / 2500 * 2500;
        d_5d51_da2c = f_1d5e_1618(d_5d51_dd8c, 1);
        strcpy(d_5d51_da2c[d_5d51_d9d0], "");
        for (d_5d51_d9fe = 0; d_5d51_d9fe <= 1; d_5d51_d9fe++)
            strcpy(d_2414_1e28[d_5d51_d9fe][d_5d51_d9d0], "");
        d_2414_97fc[d_5d51_d9d0][0] = 0;
        d_2414_97fc[d_5d51_d9d0][1] = 0;
        for (d_5d51_d9fe = 1; d_5d51_d9fe <= 6; d_5d51_d9fe++)
            d_2414_5460[d_5d51_d9fe][d_5d51_d9d0] = 0;
        salary = f_b0f1_0000(d_3404_4226[d_5d51_d9d0], d_5d51_d9d0);
        d_5d51_da50 = f_1d5e_1618(d_5d51_dd9e, 0);
        if (d_5d51_da50[d_3404_4226[d_5d51_d9d0]] < salary) {
            d_5d51_da50 = f_1d5e_1618(d_5d51_dd9e, 1);
            d_5d51_da50[d_3404_4226[d_5d51_d9d0]] = salary;
            if (f_1646_2cc9(d_5d51_d9d0) && d_5d51_da04 > 1) {
                sprintf(title, "%s board message", (char far *)d_5d51_b476[d_5d51_d9d0]);
                sprintf(text, "We have increased your salary to %ld per year.", salary * 1000L);
                f_1646_5bcb(d_5d51_d9d0, title, text);
                f_b0f1_6516();
            }
        }
    }
    d_5d51_da54 = f_1d5e_1618(d_5d51_dda0, 1);
    memset(d_5d51_da54, 0, 2600);
    for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= d_5d51_da1a - 1; d_5d51_d9d0++) {
        if (f_1646_2cc9(d_5d51_d9ca = d_44d7_0000[18][d_5d51_d9d0]) == 0 && (d_5d51_d55c == 0 || d_5d51_da04 != 1))
            d_2414_af3c[d_5d51_d9d0].w.f9 = 0;
        d_2414_af3c[d_5d51_d9d0].w.f11 = 0;
        d_2414_af3c[d_5d51_d9d0].w.f12 = 0;
        d_2414_af3c[d_5d51_d9d0].w.f13 = 0;
        d_2414_af3c[d_5d51_d9d0].w.f15 = 0;
        d_2414_af3c[d_5d51_d9d0].w.f16 = 0;
        d_2414_af3c[d_5d51_d9d0].w.f17 = 0;
        d_2414_af3c[d_5d51_d9d0].w.f18 = 0;
        d_2414_af3c[d_5d51_d9d0].w.f19 = 0;
        d_2414_af3c[d_5d51_d9d0].w.f23 = 0;
        if (d_2414_af3c[d_5d51_d9d0].w.f0)
            d_44d7_0000[1][d_5d51_d9d0] = 0;
        for (d_5d51_d9fe = 0; d_5d51_d9fe <= 51; d_5d51_d9fe++) {
            switch (d_5d51_d9fe) {
            case 24: case 25: case 26: case 27: case 28: case 33: case 36: case 37: case 43: case 47:
                d_3c0d_0000[d_5d51_d9fe - 24][d_5d51_d9d0] = 0;
                break;
            case 0: case 2:
                d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 1);
                d_5d51_da4c[d_5d51_d9fe][d_5d51_d9d0] = 0;
                break;
            }
        }
        d_44d7_0000[21][d_5d51_d9d0] = 70;
        if (d_44d7_0000[19][d_5d51_d9d0] == 27) {
            if (d_44d7_0000[20][d_5d51_d9d0] > 0 && d_44d7_0000[20][d_5d51_d9d0] < 5) {
                d_44d7_0000[19][d_5d51_d9d0] = d_44d7_0000[20][d_5d51_d9d0] + 27;
                d_44d7_0000[20][d_5d51_d9d0] = 0;
            }
        }
        d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 1);
        d_5d51_da38[3][d_5d51_d9d0] = 0;
    }
    for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= 139; d_5d51_d9d0++)
        for (d_5d51_d9fe = 6; d_5d51_d9fe <= 11; d_5d51_d9fe++)
            d_2414_e5d0[d_5d51_d9fe][d_5d51_d9d0] = 0;
    memset(d_2414_dae0, -1, 2800);
    for (d_5d51_d9cc = 0; d_5d51_d9cc <= 37; d_5d51_d9cc++)
        if (f_1646_2cc9(d_5d51_d9cc) == 0 || d_5d51_da04 == 1)
            d_3404_0260[d_5d51_d9cc][0] = 0;
    memset(d_2414_d63c, -1, 88);
    d_5d51_da06 = 1;
    d_5d51_da0e = d_5d51_da0c = 0;
    d_5d51_d8ea = 1;
    d_5d51_d9ee = 0;
    d_5d51_d998 = 0;
    d_5d51_d9ec = 0;
    d_5d51_d9ea = 0;
    d_5d51_d9e8 = 0;
    for (d_5d51_d97e = 0; d_5d51_d97e <= 99; d_5d51_d97e++) {
        d_44d7_93fc[d_5d51_d97e] = 0;
        d_44d7_94c4[d_5d51_d97e] = 0;
    }
    memset(d_44d7_a5e0, 0, 24);
    for (d_5d51_d74c = 1; d_5d51_d74c <= 100; d_5d51_d74c++)
        if (f_1646_258b(d_5d51_d74c) == 0 && f_1646_2646(d_5d51_d74c) == 0)
            f_9e79_03dd(1, 64, d_5d51_d74c);
    d_5d51_d406 = 0;
    d_5d51_d408 = f_1d5e_0d6a(200) + 1;
    d_5d51_d55a = 0;
}

void f_a13d_45f4(void)
{
    f_b0f1_66b9(7);
    for (d_5d51_d9f0 = 0; d_5d51_d9f0 <= d_5d51_da1a - 1; d_5d51_d9f0++) {
        f_b0f1_6835(7, d_5d51_d9f0, d_5d51_da1a - 1);
        if (d_2414_af3c[d_5d51_d9f0].w.f13)
            d_44d7_0000[15][d_5d51_d9f0] = f_1d5e_136a(d_44d7_0000[0][d_5d51_d9f0] + f_1d5e_0d6a(10),
                d_44d7_0000[9][d_5d51_d9f0] + 25);
        else if (d_5d51_d55c && d_5d51_da04 == 1 && d_2414_af3c[d_5d51_d9f0].w.f28)
            d_44d7_0000[15][d_5d51_d9f0] = d_44d7_0000[0][d_5d51_d9f0] + f_1d5e_0d6a(15) + 10;
        else
            d_44d7_0000[15][d_5d51_d9f0] = d_44d7_0000[0][d_5d51_d9f0] + f_1d5e_0d6a(10);
    }
    f_b0f1_66b9(8);
    for (d_5d51_d9ca = 0; d_5d51_d9ca <= 37; d_5d51_d9ca++) {
        f_b0f1_6835(8, d_5d51_d9ca, 42);
        f_9e79_06bc(d_5d51_d9ca);
    }
}

void f_a13d_474a(void)
{
    int cnt[3];
    unsigned char nation[5] = {0, 0, 0, 0, 0};
    unsigned char tries;
    char used[1500];

    memset(used, 0, 1500);
    memset(cnt, 0, 6);
    for (d_5d51_d7ee = 0; d_5d51_d7ee <= 0; d_5d51_d7ee++) {
        f_b0f1_6835(8, d_5d51_d7ee + 38, 38);
        d_5d51_d56c = 0;
        for (d_5d51_d91c = 1; d_5d51_d91c <= 100; d_5d51_d91c++) {
            tries = 1;
            d_5d51_d67c = -1;
            do {
                d_5d51_d9f0 = 0;
                do {
                    d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 0);
                    if (d_5d51_da38[9][d_5d51_d9f0] == nation[d_5d51_d7ee] && used[d_5d51_d9f0] == 0
                        && (d_5d51_d91c <= 50 && d_44d7_0000[17][d_5d51_d9f0] < 22
                            || d_5d51_d91c > 50 || tries == 2)
                        && ((d_5d51_d91c - 1) % 50 > 4 ? 0 : 1) == d_2414_af3c[d_5d51_d9f0].w.f0
                        && (d_5d51_d67c == -1 || d_44d7_0000[0][d_5d51_d9f0] > d_5d51_d67a)) {
                        d_5d51_d67c = d_5d51_d9f0;
                        d_5d51_d67a = d_44d7_0000[0][d_5d51_d9f0];
                    }
                    if (d_5d51_da1a - 1 == d_5d51_d9f0)
                        d_5d51_d9f0 = 1000;
                    else
                        d_5d51_d9f0++;
                } while (d_5d51_da18 + 999 >= d_5d51_d9f0);
                tries++;
            } while (d_5d51_d67c == -1 && tries < 3);
            d_5d51_da40 = f_1d5e_1618(d_5d51_dd96, 1);
            d_5d51_da40[d_5d51_d91c - 1] = d_5d51_d67c;
            if (d_5d51_d67c > -1)
                used[d_5d51_d67c] = -1;
        }
    }
}

void f_a13d_492e(void)
{
    f_b0f1_66b9(5);
    for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= 37; d_5d51_d9d0++)
        d_3404_0728[d_5d51_d9d0] = d_5d51_d9d0;
    for (d_5d51_d9d0 = 1; d_5d51_d9d0 <= 20; d_5d51_d9d0++)
        for (d_5d51_d9c4 = 0; d_5d51_d9c4 <= 1; d_5d51_d9c4++) {
            f_b0f1_6835(5, (d_5d51_d9d0 - 1) * 2 + d_5d51_d9c4, 40);
            d_5d51_d66a = d_3404_0728[d_5d51_d9c4 * 18 + f_1d5e_0d6a(f_1646_716c(d_5d51_d9c4))];
            d_5d51_d668 = d_3404_0728[d_5d51_d9c4 * 18 + f_1d5e_0d6a(f_1646_716c(d_5d51_d9c4))];
            f_9e79_08fb(d_5d51_d66a, d_5d51_d668);
        }
}

void f_a13d_4a1b(int player, int team, char buy)
{
    int club;
    char buf[320];
    char more[80];
    char msg[20];

    club = d_3c0d_0000[7][player] < 255 ? d_3c0d_0000[7][player] : d_44d7_0000[18][player];
    d_5d51_d56a = 0;
    d_5d51_d569 = -1;
    f_a13d_22c6(player);
    f_1646_6097();
    f_1646_4ba0("");
    sprintf(buf, " %s ", f_1d5e_0e5f(f_1646_470f(player)));
    if (f_1646_6f38(player) == 0)
        f_1646_3e54(1.25, 1.125, d_3404_448a[club] / 16, d_3404_448a[club] % 16, 0, buf);
    else
        f_1646_3e54(1.25, 1.125, 1, 4, 0, buf);
    f_1d5e_0b11(1);
    f_1d5e_08cc(16);
    f_1d5e_08e2(12, 26, 160, 98);
    f_1d5e_08e2(166, 26, 312, 98);
    f_1d5e_08e2(12, 104, 312, 116);
    f_1d5e_08e2(12, 122, 212, 162);
    f_1d5e_08e2(218, 122, 312, 178);
    f_1d5e_08e2(12, 171, 212, 178);
    f_1d5e_08e2(12, 184, 312, 197);
    f_1d5e_08cc(19);
    f_1d5e_08e2(8, 100, 310, 114);
    f_1d5e_08e2(8, 118, 210, 160);
    f_1d5e_08e2(214, 118, 310, 176);
    f_1d5e_08cc(20);
    f_1d5e_08e2(8, 22, 158, 96);
    f_1d5e_08e2(162, 22, 310, 96);
    f_1d5e_08cc(30);
    f_1d5e_08e2(8, 165, 210, 176);
    f_1d5e_08cc(20);
    f_1d5e_08e2(8, 180, 310, 195);
    f_1646_3686(1.375, 3.75, 1, 12, 0, " AGE        ");
    f_1646_3686(10.625, 3.75, 1, 12, 0, d_2414_2d3c);
    f_1646_3686(1.375, 4.75, 1, 12, 0, " CLUB       ");
    f_1646_3686(10.625, 4.75, 1, 12, 0, d_2414_4c46);
    f_1646_3686(1.375, 5.75, 1, 12, 0, " COUNTRY    ");
    f_1646_3686(10.625, 5.75, 1, 12, 0, d_2414_2bfc);
    f_1646_3686(1.375, 6.75, 1, 12, 0, " CONTRACT   ");
    f_1646_3686(10.625, 6.75, 1, 12, 0, d_2414_2bac);
    f_1646_3686(1.375, 7.75, 1, 12, 0, " WAGES      ");
    f_1646_3686(10.625, 7.75, 1, 12, 0, d_2414_2b5c);
    f_1646_3686(1.375, 8.75, 1, 12, 0, " STATUS/VAL ");
    f_1646_3686(10.625, 8.75, 1, 12, 0, d_2414_2b0c);
    f_1646_3686(1.375, 9.75, 1, 12, 0, " INSURANCE  ");
    f_1646_3686(10.625, 9.75, 1, 12, 0, d_2414_2abc);
    f_1646_3686(1.375, 10.75, 1, 12, 0, " POSITION   ");
    f_1646_3686(10.625, 10.75, 1, 12, 0, d_2414_3426);
    if (d_2414_af3c[player].w.f0 == 0)
        f_1646_3686(1.375, 11.75, 1, 12, 0, " SIDE       ");
    else
        f_1646_3686(1.375, 11.75, 1, 12, 0, " CONCEDED   ");
    f_1646_3686(10.625, 11.75, 1, 12, 0, d_2414_2c4c);
    f_1646_3686(20.625, 3.75, 1, 12, 71, " CHARACTER");
    sprintf(buf, " %s", d_2414_2a6c);
    f_1646_3686(29.75, 3.75, 1, 12, 71, buf);
    f_1646_3686(20.625, 4.75, 1, 12, 71, " PASSING");
    sprintf(buf, " %s", d_2414_2a1c);
    f_1646_3686(29.75, 4.75, 1, 12, 71, buf);
    f_1646_3686(20.625, 5.75, 1, 12, 71, " TACKLING");
    sprintf(buf, " %s", d_2414_29cc);
    f_1646_3686(29.75, 5.75, 1, 12, 71, buf);
    f_1646_3686(20.625, 6.75, 1, 12, 71, " PACE");
    sprintf(buf, " %s", d_2414_297c);
    f_1646_3686(29.75, 6.75, 1, 12, 71, buf);
    f_1646_3686(20.625, 7.75, 1, 12, 71, " HEADING");
    sprintf(buf, " %s", d_2414_292c);
    f_1646_3686(29.75, 7.75, 1, 12, 71, buf);
    f_1646_3686(20.625, 8.75, 1, 12, 71, " FLAIR    ");
    sprintf(buf, " %s", d_2414_28dc);
    f_1646_3686(29.75, 8.75, 1, 12, 71, buf);
    f_1646_3686(20.625, 9.75, 1, 12, 71, " CREATIVITY");
    sprintf(buf, " %s", d_2414_288c);
    f_1646_3686(29.75, 9.75, 1, 12, 71, buf);
    f_1646_3686(20.625, 10.75, 1, 12, 71, " STAMINA   ");
    sprintf(buf, " %s", d_2414_283c);
    f_1646_3686(29.75, 10.75, 1, 12, 71, buf);
    f_1646_3686(20.625, 11.75, 1, 12, 71, " INFLUENCE");
    sprintf(buf, " %s", d_2414_27ec);
    f_1646_3686(29.75, 11.75, 1, 12, 71, buf);
    f_1646_3686(1.375, 13.375, 0, 6, 298, d_2414_279c);
    f_1646_3686(-1.0, 14.25, 1, 3, 0, d_2414_274c);
    f_1646_3686(1.375, 15.75, 0, 1, 198, "           THIS SEASON");
    f_1646_3686(1.375, 16.75, 0, 6, 0, " APPS   ");
    f_1646_3686(7.625, 16.75, 0, 6, 0, d_2414_26fc);
    f_1646_3686(1.375, 17.75, 0, 6, 0, " GOALS  ");
    f_1646_3686(7.625, 17.75, 0, 6, 0, d_2414_371e);
    f_1646_3686(1.375, 18.75, 0, 6, 0, " DISP   ");
    f_1646_3686(7.625, 18.75, 0, 6, 0, d_2414_3d60);
    f_1646_3686(13.875, 16.75, 0, 6, 0, " AV R   ");
    f_1646_3686(20.125, 16.75, 0, 6, 0, d_2414_4d36);
    f_1646_3686(13.875, 17.75, 0, 6, 0, " MIN R  ");
    f_1646_3686(20.125, 17.75, 0, 6, 0, d_2414_26ac);
    f_1646_3686(13.875, 18.75, 0, 6, 0, " MAX R  ");
    f_1646_3686(20.125, 18.75, 0, 6, 0, d_2414_265c);
    f_1646_3686(1.375, 19.75, 0, 6, 0, " M/O/M  ");
    f_1646_3686(7.625, 19.75, 0, 6, 0, d_2414_260c);
    f_1646_3686(13.875, 19.75, 0, 6, 0, " INTS   ");
    f_1646_3686(20.125, 19.75, 0, 6, 0, d_2414_25bc);
    f_1646_3686(27.125, 15.75, 0, 1, 90, "  LAST SEASON");
    f_1646_3686(37.875, 15.75, 0, 1, 0, " ");
    f_1646_3686(27.125, 16.75, 0, 6, 0, " APPS   ");
    f_1646_3686(33.375, 16.75, 0, 6, 0, d_2414_2558);
    f_1646_3686(27.125, 17.75, 0, 6, 0, " GOALS  ");
    f_1646_3686(33.375, 17.75, 0, 6, 0, d_2414_2508);
    f_1646_3686(27.125, 18.75, 0, 6, 0, " DISP   ");
    f_1646_3686(33.375, 18.75, 0, 6, 0, d_2414_24b8);
    f_1646_3686(27.125, 19.75, 0, 6, 0, " AV R   ");
    f_1646_3686(33.375, 19.75, 0, 6, 0, d_2414_2468);
    f_1646_3686(27.125, 20.75, 0, 6, 0, " MIN R  ");
    f_1646_3686(33.375, 20.75, 0, 6, 0, d_2414_2418);
    f_1646_3686(27.125, 21.75, 0, 6, 0, " MAX R  ");
    f_1646_3686(33.375, 21.75, 0, 6, 0, d_2414_2328);
    f_1646_3686(1.375, 21.625, 1, 8, 98, " MORALE");
    sprintf(buf, " %s", d_2414_23c8);
    f_1646_3686(13.875, 21.625, 1, 8, 98, buf);
    f_a13d_3539();
    f_1646_60a7();
    if (d_2414_2378[0] != 0)
        f_a13d_3631();
    f_1646_50c5(2, 35.5, 1.125, 1, 2, 24, "HST");
    if (buy != 0 && d_5d51_d5e5 == 0) {
        f_1646_50c5(2, 24.625, 1.125, 1, 3, 24, "STA");
        f_1646_50c5(2, 28.25, 1.125, 1, 3, 24, "BUY");
        f_1646_50c5(2, 31.875, 1.125, 1, 3, 24, "ADD");
        if (f_1646_2cc9(d_44d7_0000[18][player]) == 0 && d_44d7_0000[18][player] != team && f_1646_2cc9(d_3c0d_0000[7][player]) == 0)
            f_1646_5869(2);
        if (d_5d51_d5d4 != 0) {
            f_1646_5869(2);
            f_1646_5869(3);
        }
        if (f_1646_6f38(player))
            f_1646_5869(2);
    }
    d_5d51_d5df = 0;
    d_5d51_d9ba = 0;
    d_5d51_d568 = -1;
    d_5d51_d654 = f_1646_5602(0);
    d_5d51_d568 = 0;
    if (d_5d51_d654 == 0)
        d_5d51_d5df = -1;
    else if (d_5d51_d654 == 1)
        f_a13d_61ae(player);
    else if (d_5d51_d654 == 2)
        d_5d51_d9ba = -1;
    else if (d_5d51_d654 == 3 || d_5d51_d654 == 4) {
        d_5d51_d5fc = -1;
        if (team > -1)
            d_5d51_d5fc = team;
        else if (d_5d51_d956 == 2) {
            f_9e79_163e(0);
            sprintf(buf, "%.3s", d_2414_2c9c);
            d_5d51_d8e0 = atoi(buf);
            d_5d51_d8de = atoi(f_1d5e_0f31(d_2414_2c9c, 3));
            if (d_3404_1abe[d_5d51_d8e0] == club)
                d_5d51_d5fc = d_3404_1abe[d_5d51_d8de];
            else if (d_3404_1abe[d_5d51_d8de] == club)
                d_5d51_d5fc = d_3404_1abe[d_5d51_d8e0];
        }
        if (d_5d51_d5fc == -1) {
            f_9e79_1503(0);
            if (d_5d51_d628 > -1)
                d_5d51_d5fc = d_3404_1abe[d_5d51_d628];
        }
        if (d_5d51_d5fc > -1) {
            if (d_5d51_d5fc == club) {
                sprintf(buf, "You already own %s", f_1646_48c0(player));
                f_1646_0bf2(buf);
            } else if (d_5d51_d654 == 3 && d_3c0d_0000[7][player] < 255)
                f_1646_0bf2("His loan must be terminated first");
            else if (d_5d51_d654 == 3 && d_3404_452a[d_5d51_d5fc] < 30)
                f_1646_0bf2("The board refuse any transfers");
            else if (d_5d51_d654 == 3 && f_1646_6971(f_1646_6f38(player) && f_1646_6f56(player) == 0 ? 1 : 0)) {
                sprintf(msg, "%s transfer deadline|has passed", f_1646_6f38(player) && f_1646_6f56(player) == 0 ? "Foreign" : "Domestic");
                f_1646_0bf2(msg);
            }
            else if (d_5d51_d654 == 3 && d_3404_4782[d_5d51_d5fc] > 3)
                f_1646_0bf2("Not enough time");
            else if (d_5d51_d654 == 3 && (d_2414_af3c[player].a.f9 || d_2414_af3c[player].a.f30)) {
                sprintf(buf, "%s not for sale", f_1646_48c0(player));
                f_1646_0bf2(buf);
            } else if (d_5d51_d654 == 3 && d_3404_4552[d_5d51_d5fc] + d_3404_4e3a[d_5d51_d5fc] >= 26) {
                strcpy(buf, "Maximum squad size is 26");
                if (d_3404_4e3a[d_5d51_d5fc] > 0) {
                    sprintf(more, "|(%d player%s loaned out)", d_3404_4e3a[d_5d51_d5fc], d_3404_4e3a[d_5d51_d5fc] > 1 ? "s" : "");
                    strcat(buf, more);
                }
                f_1646_0bf2(buf);
            } else if (f_1646_6f38(player) == 0 && d_5d51_d654 == 3 && f_1646_2e15(player)) {
                sprintf(buf, "%s have too few players", (char far *)d_5d51_b476[d_44d7_0000[18][player]]);
                f_1646_0bf2(buf);
            } else if (d_5d51_d654 == 4 && d_3404_0260[d_5d51_d5fc][0] == 15)
                f_1646_0bf2("shortlist is full");
            else if (d_5d51_d654 == 3)
                d_5d51_d9ba = d_5d51_d5fc + 1;
            else if (d_5d51_d654 == 4)
                d_5d51_d9ba = -d_5d51_d5fc - 2;
        }
    }
}

void f_a13d_61ae(int p)
{
    FILE *fp;

    f_1d5e_1a24(2);
    fp = fopen(d_2414_0050, "rb+");
    fseek(fp, (long)p * 133, 0);
    fread(d_2414_321e, 1, 133, fp);
    fclose(fp);
    d_5d51_d704 = d_3c0d_0000[20][p];
    if (d_5d51_d704 < 17) {
        f_a13d_0000(p, 0);
        f_1646_50c5(2, 1.25, 22.5, 1, 4, 0x12d, "                 EXIT");
        do
            d_5d51_da0a = f_1646_5602(d_5d51_d9c6);
        while (d_5d51_da0a <= 0);
    } else {
        d_5d51_d64c = 0;
        do {
            f_a13d_0000(p, d_5d51_d64c);
            f_1646_50c5(2, 1.25, 22.5, 1, 12, 0x49, "   MORE");
            f_1646_50c5(2, 11.0, 22.5, 1, 4, 0xdf, "            EXIT");
            do
                d_5d51_da0a = f_1646_5602(d_5d51_d9c6);
            while (d_5d51_da0a <= 0);
            if (d_5d51_da0a == 1)
                d_5d51_d64c = 1 - d_5d51_d64c;
        } while (d_5d51_da0a != 2);
    }
}
