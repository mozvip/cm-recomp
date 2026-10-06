/* @at a1c3:0000 */
/* @data 5d9c:87a0 */
/* @module */

/* Overlay 9: the screens' helpers: the player's career and information pages, the club
 * Info screen, names and ordinals, rating and money formats, the title picture and the
 * palette, the text input box, buttons, menus and choices (f_a1c3_27e4, 2d08, 3298...),
 * the new game's menus, teams and personalities, future targets, the player details
 * screen with buying and the shortlist, and the history pages. */
#include <stdio.h>
#include <string.h>
#include <mem.h>
#include <stdlib.h>
#include <dos.h>
#include <ctype.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
long f_a1c3_36c4(int team);
void f_a1c3_37c7(int p);
void f_a1c3_48ad(void);
void f_a1c3_49a5(void);
void f_a1c3_4a04(void);
int f_a1c3_4e2f(int p);
int f_a1c3_506f(int p);
void f_a1c3_515d(void);
void f_a1c3_5826(void);
void f_a1c3_59ba(void);
void f_a1c3_5bba(void);
void f_a1c3_5c9f(int team, char far *title, char far *text);
void f_a1c3_5e7a(int player, int team, char buy);
void f_a1c3_7462(int p);
void f_a1c3_0000(int player, int mode);
void f_a1c3_093a(int team);
void f_a1c3_1d3f(char a);
char far *f_a1c3_203b(int n, char far *s);
int f_a1c3_20c5(int team);
int f_a1c3_2107(int team);
char far *f_a1c3_213c(int player);
char far *f_a1c3_21cc(int player);
char far *f_a1c3_2243(int player);
char far *f_a1c3_229c(int manager, char full);
int f_a1c3_238e(int x);
char far *f_a1c3_23c9(int a, int b);
char far *f_a1c3_24bb(int a, int b);
int f_a1c3_2553(void);
char far *f_a1c3_25b0(int player);
char far *f_a1c3_261d(int division);
void f_a1c3_26aa(void);
void f_a1c3_26f6(void);
void f_a1c3_271d(void);
void f_a1c3_277d(void);
void f_a1c3_27e4(char far *title);
void f_a1c3_290e(float x, int w, char far *prompt);
void f_a1c3_29a4(int x, float y, int colour, int maxlen);
void f_a1c3_2c23(void);
void f_a1c3_2d08(int a, float x, float y, int c, int d, int e, char far *s);
void f_a1c3_30b1(int n, char swap);
int f_a1c3_3298(int a);
void f_a1c3_34c6(int team);
void f_a1c3_34db(void);
void f_a1c3_3505(int a);
void f_a1c3_361d(void);
char far *f_a1c3_364a(char far *s);

void f_1680_2867(float x, float y, int bg, int fg, int w, char far *s);
void f_1680_2ea0(float x, float y, int bg, int fg, int w, char far *s);
void f_1680_27aa(int x, int y, int colour, char far *s);
void f_14d2_0722(int c);
void f_14d2_075a(int x1, int y1, int x2, int y2);
void f_14d2_148f(void far *a, void far *b, int n);
struct label { int x, y; char far *s; };
extern unsigned char huge d_483b_0000[][1702];
extern unsigned char far d_5739_00a4[];
extern char far d_1f3e_3a68[];
extern char far d_1f3e_3c20[][6];
extern char far d_1f3e_3c21[][6];
extern unsigned char far d_2f3c_1b40[];
extern char near *d_5d9c_08bc[];
extern char near *d_5d9c_07a4[];
extern char d_5d9c_9b8a;
extern int d_5d9c_9f91;
extern int d_5d9c_9f7f;
extern int d_5d9c_9f55;
extern int d_5d9c_9f7b;
extern int d_5d9c_9bed;
extern int d_5d9c_9beb;
extern int d_5d9c_9be9;
extern int d_5d9c_9be7;
extern int d_5d9c_9be5;
extern int d_5d9c_9be3;
extern int d_5d9c_9bdd;
extern int d_5d9c_9bdb;
extern int d_5d9c_9ca7;
extern int d_5d9c_9dd1;
extern int d_5d9c_9c75;
extern int d_5d9c_9fa1;
extern int d_5d9c_9cf3;
extern int d_5d9c_9d0b;
extern int d_5d9c_9d9b;
extern int d_5d9c_9cb1;
void f_67ee_5ab6(float x, int team, char far *title);
void f_14d2_09c3(int on);
char f_1680_0003(int x);
long f_1680_2782(int team);
long f_14d2_1400(long a, long b);
int f_1680_0287(int x);
char far *f_9100_7386(int round);
char far *f_9100_7482(int round);
char far *f_9100_7560(int round, int cup);
void f_992a_01cb(int team);
void f_9100_643d(int team);
void f_9100_52ff(int team);
extern char d_5d9c_9b8d;
extern char d_5d9c_9b8f;
extern int d_5d9c_9be1;
extern int d_5d9c_9bdf;
extern int d_5d9c_9ca3;
extern float d_5d9c_9aec;
extern int d_5d9c_9ed7;
extern int d_5d9c_9f49;
extern int d_5d9c_9f6d;
extern float d_5d9c_9b00;
extern int d_5d9c_9f29;
extern int d_5d9c_9f85;
extern int d_5d9c_9f63;
extern int d_5d9c_9faf;
extern int d_5d9c_9bd9;
extern int far d_2f3c_7f93[];
extern long far d_2f3c_74f3[][80];
extern long far d_2f3c_7b33[];
extern int far d_2f3c_85f7[][0x6a6];
extern int far d_2f3c_bb27[];
extern unsigned char far d_2f3c_0d8c[][140];
extern unsigned char far d_2f3c_10d4[];
extern unsigned char far d_2f3c_1160[];
extern unsigned char far d_2f3c_11ec[];
extern unsigned char far d_2f3c_1278[];
extern unsigned char far d_2f3c_1304[];
extern unsigned char far d_5739_0052[];
extern unsigned char far d_5739_01ec[];
extern unsigned char far d_5739_023e[];
extern unsigned char far d_5739_0334[][82];
extern unsigned char far d_5739_03d8[];
extern unsigned char far d_5739_042a[];
extern unsigned char far d_5739_138a[];
extern int far d_483b_a372[][26];
extern unsigned char huge d_3e42_0000[][1702];
extern char far d_1f3e_d394[];
extern char far d_1f3e_da3a[];
extern char far d_1f3e_2c4e[];
extern char far d_1f3e_2c9e[];
extern char far d_1f3e_38ce[];
extern char far d_1f3e_391e[];
extern char far d_1f3e_51b6[];
extern char far d_1f3e_5396[];
extern long far d_2f3c_0040[];
extern float far d_2f3c_0050[][4];
extern int far d_2f3c_0070[][4];
extern unsigned char far d_2f3c_2794[][20];
extern int far d_2f3c_422b[];
extern int far d_2f3c_473f[];
extern int far d_2f3c_4c53[];
extern unsigned char far d_2f3c_5167[];
extern int far d_2f3c_d5bf[];
extern int far d_2f3c_e30b[];
extern char far * far d_5471_0000[];
extern char far * far d_5471_0a70[];
extern char far d_1f3e_2bea[];
extern char far d_1f3e_40d0[];
extern char far d_1f3e_4170[];
extern char far d_1f3e_4fcc[];
extern char far d_1f3e_4fea[][4][20];
extern char far d_1f3e_509e[];
extern char d_5d9c_1cea;
extern char far *d_5d9c_87d8[];
extern long d_5d9c_9a54;
extern float d_5d9c_9b0c;
extern char d_5d9c_9b1a;
extern char d_5d9c_9b47;
extern int d_5d9c_9bd5;
extern int d_5d9c_9bd7;
extern int d_5d9c_9cf9;
extern int d_5d9c_9d9f;
extern int d_5d9c_9ded;
extern int d_5d9c_9ef3;
extern int d_5d9c_9f43;
extern int d_5d9c_9f4f;
extern int d_5d9c_9f61;
extern int d_5d9c_9f71;
extern int d_5d9c_9fee[];
extern long far *d_5d9c_a054;
extern char d_5d9c_a31e;
extern int d_5d9c_a35e;
extern int d_5d9c_a06c;
void f_14b7_0004(void);
void f_14b7_003e(void);
char far *f_14d2_0152();
void f_14d2_01bb(void);
void f_14d2_04a9(int i, char r, char g, char b);
void f_14d2_0589(void);
void f_14d2_05af(int noflip);
void f_14d2_0609(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_14d2_073e(int c);
void f_14d2_07af(int x1, int y1, int x2, int y2);
void f_14d2_0819(void);
int f_14d2_0ac9(void);
char far *f_14d2_0baf(void);
long f_14d2_0ca0(void);
char far *f_14d2_0d40(void);
unsigned f_14d2_09ce(char far *s, char far *set);
void far *f_14d2_16bc(int handle, int page);
void f_14d2_1963(void);
void f_14d2_1a56(void);
void f_1680_2d78(float x, float y, int colour, char far *s);
void f_992a_6c72(char c);
void f_992a_6da2(void);
int f_14d2_0ac1(void);
int f_14d2_0ab9(void);
int f_14d2_0c2a(int n);
void f_1680_2b8b(float x, float y, int bg, int fg, int w, char far *s);
long f_88c9_26a0(long v, char c);
extern int d_5d9c_a33c;
extern int d_5d9c_a358;
extern int d_5d9c_a350;
extern int d_5d9c_a35c;
extern unsigned char far *d_5d9c_a04c;
extern float (far *d_5d9c_a00e)[100];
extern long (far *d_5d9c_a01a)[80];
extern char far *d_5d9c_9fce;
extern unsigned char far d_1f3e_5814[];
extern char far d_1f3e_4acc[];
extern char far d_1f3e_2e2e[];
extern int d_5d9c_9e9d;
extern int d_5d9c_9bd1;
extern int d_5d9c_9bd3;
extern int d_5d9c_9f6b;
extern int d_5d9c_9f19;
extern int d_5d9c_9f75;
extern int d_5d9c_9e8b;
extern int d_5d9c_9bcf;
extern int d_5d9c_9bcd;
extern float d_5d9c_9b08;
extern float d_5d9c_9af0;
extern float d_5d9c_9afc;
extern float d_5d9c_9a70;
extern float d_5d9c_9a68;
extern float d_5d9c_9a64;
extern float d_5d9c_9a60;
extern char d_5d9c_9b1b;
extern char d_5d9c_9b8e;
extern char d_5d9c_9b32;
extern long d_5d9c_99d8;
extern long d_5d9c_99d4;
extern long d_5d9c_99d0;
extern long d_5d9c_99cc;
char far *f_992a_5114(int n);
int f_992a_1d7c(int player);
long f_88c9_12b3(int p, int n);
long f_88c9_2744(long v);
char far *f_88c9_27e8(long amount);
long f_88c9_2177(int player);
char f_88c9_04fb(int player);
char far *f_1680_03f3(int x);
int f_8352_182c(int team, int p);
extern long d_5d9c_9a58;
extern char d_5d9c_9b50;
extern int d_5d9c_9bf1;
extern int d_5d9c_9bf3;
extern int d_5d9c_9bf5;
extern int d_5d9c_9dcb;
extern int far d_2f3c_a08f[];
extern int far d_2f3c_addb[];
extern char far * far d_5471_1770[];
extern char far * far d_5471_17f4[];
extern char far d_1f3e_5be8[][0x6a6];
extern char far d_1f3e_7680[][0x6a6];
extern char far d_1f3e_8a72[];
extern char far d_1f3e_9118[];
extern char far d_1f3e_97be[];
extern char far d_1f3e_9e64[];
extern char far d_1f3e_b8fc[];
extern char far d_1f3e_e0e0[];
extern char far d_1f3e_2cee[];
extern char far d_1f3e_2d3e[];
extern char far d_1f3e_2d8e[];
extern char far d_1f3e_2dde[];
extern char far d_1f3e_2e7e[];
extern char far d_1f3e_2ece[];
extern char far d_1f3e_2f1e[];
extern char far d_1f3e_2f6e[];
extern char far d_1f3e_2fbe[];
extern char far d_1f3e_300e[];
extern char far d_1f3e_305e[];
extern char far d_1f3e_30ae[];
extern char far d_1f3e_30fe[];
extern char far d_1f3e_314e[];
extern char far d_1f3e_319e[];
extern char far d_1f3e_31ee[];
extern char far d_1f3e_323e[];
extern char far d_1f3e_328e[];
extern char far d_1f3e_32de[];
extern char far d_1f3e_332e[];
extern char far d_1f3e_337e[];
extern char far d_1f3e_33ce[];
extern char far d_1f3e_341e[];
extern char far d_1f3e_346e[];
extern char far d_1f3e_34be[];
extern char far d_1f3e_350e[];
extern char far d_1f3e_355e[];
extern char far d_1f3e_35ae[];
extern char far d_1f3e_35fe[];
extern char far d_1f3e_364e[];
extern char far d_1f3e_373e[];
extern char far d_1f3e_3e28[];
extern char far d_1f3e_4120[];
extern char far d_1f3e_4262[];
extern char far d_1f3e_4492[];
extern char far d_1f3e_52a6[];
void f_1680_150c(int n, char far *title, char far *items);
void f_1680_18b2(int last);
char far *f_1680_1a91(int x);
float f_1680_0037(int x);
void f_1680_0592(int a, int b);
void f_992a_7e35(int n);
extern char d_5d9c_9b1c;
extern char d_5d9c_9b1d;
extern char d_5d9c_9b22;
extern int d_5d9c_9c13;
extern int d_5d9c_9c15;
extern int d_5d9c_9c17;
extern int d_5d9c_9c19;
extern int d_5d9c_9d8d;
extern int d_5d9c_9ecf;
extern int d_5d9c_9eef;
extern int d_5d9c_9ef1;
extern int d_5d9c_9f53;
extern int d_5d9c_9f67;
extern int d_5d9c_9f69;
extern char near *d_5d9c_0484[];
extern int far d_1f3e_fb9d[];
extern unsigned char far d_2f3c_53f1[];
extern unsigned char far d_2f3c_567b[];
extern unsigned char far d_2f3c_5905[];
extern unsigned char far d_2f3c_5e19[];
extern unsigned char far d_2f3c_7269[];
extern unsigned char far d_5739_0000[][82];
extern unsigned char far d_5739_13de[];
extern unsigned char far d_5739_15aa[];
extern unsigned char far d_5739_1776[];
extern unsigned char far d_5739_57ea[][140];
void f_1680_086a(int a, int b, int c);
void f_1680_0b5b(int t);
void f_1680_0d7a(int a, int b);
int f_14d2_144d(int a, int b);
char f_992a_700a(int);
void f_992a_424a(int p);
void f_9100_243d(int a, char c);
void f_9100_24d0(int a, char c, int i, int n);
extern int d_5d9c_9fa7;
extern int d_5d9c_9cef;
extern int d_5d9c_9d91;
extern int d_5d9c_9eb7;
extern int d_5d9c_9c1f;
extern int d_5d9c_9c1d;
extern int d_5d9c_9c0d;
extern int d_5d9c_9c0b;
extern int d_5d9c_9bff;
extern int d_5d9c_9bfd;
extern int d_5d9c_9fab;
extern int d_5d9c_9e87;
extern int d_5d9c_9f8d;
extern int d_5d9c_9f8f;
extern int d_5d9c_9f35;
extern int d_5d9c_9f33;
extern int d_5d9c_9f8b;
extern int d_5d9c_9f89;
extern int d_5d9c_9f87;
extern int d_5d9c_a352;
extern int d_5d9c_a342;
extern int d_5d9c_a340;
extern long d_5d9c_99c8;
extern char d_5d9c_9b1f;
extern int d_5d9c_a064[];
extern unsigned char d_5d9c_a022[];
extern char (far *d_5d9c_9fc2)[82][391];
extern int (far *d_5d9c_9ff6)[2][22];
extern int (far *d_5d9c_a006)[250];
extern int (far *d_5d9c_a002)[170];
extern unsigned char far d_5739_0290[];
extern unsigned char far d_5739_02e2[];
extern unsigned char far d_5739_0386[];
extern int far d_5739_1d2a[][2][94];
extern int far d_2f3c_7c73[][80];
extern unsigned char far d_2f3c_029c[];
extern int far d_2f3c_1d94[][16];
extern char far d_1f3e_0ab4[][101];
extern char far d_1f3e_0780[][82][5];
extern char far d_1f3e_5918[][80];
extern char far d_1f3e_b256[];
extern char far d_1f3e_36ee[];
extern int far d_483b_a0ba[];
extern int far d_483b_a176[];
char far *f_14d2_0d08(char far *s);
char far *f_14d2_0d75(char far *s, unsigned n);
char f_1680_0276(int x);
char f_1680_031f(int x);
void f_1680_1f06(char all);
void f_1680_2040(char redraw);
void f_88c9_24f1(char far *s);
extern unsigned char far d_5739_06ba[];
extern char far d_1f3e_369e[];
extern char d_5d9c_9b7d;
extern char d_5d9c_9b88;
extern int d_5d9c_9b9f;
extern int d_5d9c_9bcb;
extern int d_5d9c_9bf7;
extern int d_5d9c_9e7b;
extern int d_5d9c_9e7d;
extern int d_5d9c_9f57;
extern int d_5d9c_9bef;

/* the career screen's buttons */
static struct label d_5d9c_87a0[] = {
    {263, 50, "Seasons"}, {272, 84, "Apps"}, {269, 118, "Goals"}, {272, 152, "Av R"}
};

void f_a1c3_0000(int player, int mode)
{
    struct label far *q;
    char buf[320];

    f_a1c3_27e4("");
    sprintf(buf, " %s - aged %d", f_a1c3_213c(player), d_483b_0000[17][d_5d9c_9f91]);
    f_1680_2ea0(1.25, 1.25, d_5739_00a4[d_483b_0000[18][player]] / 16,
                d_5739_00a4[d_483b_0000[18][player]] % 16, 0, buf);
    f_1680_2867(1.125, 5.25, 1, 8, 0, " YEAR ");
    f_1680_2867(5.875, 5.25, 1, 8, 100, " CLUB");
    f_1680_2867(18.625, 5.25, 1, 8, 0, " AP ");
    f_1680_2867(21.875, 5.25, 1, 8, 0, " GL ");
    f_1680_2867(25.125, 5.25, 1, 8, 0, " AV R ");
    d_5d9c_9f7f = 6;
    d_5d9c_9f55 = 4;
    d_5d9c_9f7b = 12;
    d_5d9c_9bed = 0;
    d_5d9c_9beb = 0;
    d_5d9c_9be9 = 0;
    d_5d9c_9be7 = 0;
    if (d_5d9c_9ca7 == 0) {
        f_1680_2867(1.125, 4.0, 0, 6, 0x130, " NO LEAGUE CAREER TO DATE");
    } else {
        d_5d9c_9be5 = -1;
        d_5d9c_9be3 = -1;
        if (d_5d9c_9ca7 > 22) {
            d_5d9c_9dd1 = d_5d9c_9ca7 - 21;
            d_5d9c_9bdd = d_5d9c_9dd1 - 1;
        } else {
            d_5d9c_9dd1 = 1;
            d_5d9c_9bdd = d_5d9c_9ca7;
        }
        d_5d9c_9c75 = d_1f3e_3c21[d_5d9c_9dd1 - 1][0] + 1892;
        sprintf(buf, " FOOTBALL LEAGUE CAREER SINCE %d", d_5d9c_9c75);
        f_1680_2867(1.125, 4.0, 0, 6, 0x130, buf);
        d_5d9c_9fa1 = d_5d9c_9dd1;
        d_5d9c_9bdb = 1;
        do {
            unsigned char far *p;

            p = (unsigned char far *)d_1f3e_3a68;
            memcpy(d_1f3e_3a68, &d_1f3e_3c20[d_5d9c_9fa1 - 1][1], 6);
            d_1f3e_3a68[6] = 0;
            d_5d9c_9c75 = d_1f3e_3a68[0] + 1892;
            if (d_5d9c_9c75 != d_5d9c_9be5) {
                d_5d9c_9bed++;
                d_5d9c_9be5 = d_5d9c_9c75;
            }
            d_5d9c_9cf3 = d_2f3c_1b40[d_1f3e_3a68[1]];
            d_5d9c_9d0b = d_1f3e_3a68[2] - 32;
            d_5d9c_9beb += d_5d9c_9d0b;
            d_5d9c_9d9b = d_1f3e_3a68[3] - 32;
            d_5d9c_9be9 += d_5d9c_9d9b;
            d_5d9c_9cb1 = (p[4] << 8) | p[5];
            d_5d9c_9be7 += d_5d9c_9cb1;
            if ((mode == 0 && d_5d9c_9bdb < 17) || (mode == 1 && d_5d9c_9bdb > 16)) {
                sprintf(buf, " %d ", d_5d9c_9c75);
                f_1680_2867(1.125, d_5d9c_9f7f + 0.25, 6, 3, 0, buf);
                if (d_5d9c_9cf3 != d_5d9c_9be3) {
                    if (d_5d9c_9cf3 < 80)
                        sprintf(buf, " %.15s", (char far *)d_5d9c_08bc[d_5d9c_9cf3]);
                    else
                        sprintf(buf, " %.15s", d_5d9c_07a4[d_5d9c_9cf3]);
                    d_5d9c_9be3 = d_5d9c_9cf3;
                } else
                    strcpy(buf, "");
                f_1680_2867(5.875, d_5d9c_9f7f + 0.25, 1, d_5d9c_9f55, 100, buf);
                sprintf(buf, " %02d ", d_5d9c_9d0b);
                f_1680_2867(18.625, d_5d9c_9f7f + 0.25, 1, 2, 0, buf);
                sprintf(buf, " %02d ", d_5d9c_9d9b);
                f_1680_2867(21.875, d_5d9c_9f7f + 0.25, 1, 2, 0, buf);
                sprintf(buf, " %s ", f_a1c3_24bb(d_5d9c_9d0b, d_5d9c_9cb1));
                f_1680_2867(25.125, d_5d9c_9f7f + 0.25, 1, 9, 0, buf);
                f_14d2_148f(&d_5d9c_9f55, &d_5d9c_9f7b, 2);
                d_5d9c_9f7f++;
            }
            d_5d9c_9bdb++;
            d_5d9c_9b8a = d_5d9c_9fa1 == d_5d9c_9bdd;
            if (d_5d9c_9fa1 == 22)
                d_5d9c_9fa1 = 1;
            else
                d_5d9c_9fa1++;
        } while (!d_5d9c_9b8a);
    }
    while (d_5d9c_9f7f < 22) {
        f_1680_2867(1.125, d_5d9c_9f7f + 0.25, 6, 3, 0, "      ");
        f_1680_2867(5.875, d_5d9c_9f7f + 0.25, 1, d_5d9c_9f55, 100, "");
        f_1680_2867(18.625, d_5d9c_9f7f + 0.25, 1, 2, 0, "    ");
        f_1680_2867(21.875, d_5d9c_9f7f + 0.25, 1, 2, 0, "    ");
        f_1680_2867(25.125, d_5d9c_9f7f + 0.25, 1, 9, 0, "      ");
        f_14d2_148f(&d_5d9c_9f55, &d_5d9c_9f7b, 2);
        d_5d9c_9f7f++;
    }
    for (d_5d9c_9f7f = 36, q = d_5d9c_87a0; d_5d9c_9f7f <= 138; d_5d9c_9f7f += 34, q++) {
        f_14d2_0722(24);
        f_14d2_075a(238, d_5d9c_9f7f, 312, d_5d9c_9f7f + 15);
        f_1680_27aa(266, d_5d9c_9f7f + 7, 1, "Career");
        f_1680_27aa(q->x, q->y, 1, q->s);
    }
    sprintf(buf, "   %03d", d_5d9c_9bed);
    f_1680_2ea0(30.0, 7.25, 0, 1, 71, buf);
    sprintf(buf, "   %03d", d_5d9c_9beb);
    f_1680_2ea0(30.0, 11.5, 0, 1, 71, buf);
    sprintf(buf, "   %03d", d_5d9c_9be9);
    f_1680_2ea0(30.0, 15.75, 0, 1, 71, buf);
    sprintf(buf, "   %.3s", f_a1c3_24bb(-d_5d9c_9beb, d_5d9c_9be7));
    f_1680_2ea0(30.0, 20.0, 0, 1, 71, buf);
}

void f_a1c3_093a(int team)
{
    int who[3];
    char buf[320];
    char *names[7] = { "PLD", "WON", "DRN", "LST", "FOR", "AGG", "PTS" };
    float best[3];
    unsigned i;
    int j;

    do {
        f_67ee_5ab6(1.25, team, "Info");
        f_14d2_09c3(1);
        f_14d2_0722(16);
        f_14d2_075a(12, 28, 160, 86);
        f_14d2_075a(12, 128, 316, 170);
        f_14d2_075a(168, 28, 316, 86);
        f_14d2_075a(12, 94, 316, 120);
        f_14d2_0722(20);
        f_14d2_075a(8, 24, 156, 82);
        f_14d2_0722(19);
        f_14d2_075a(8, 124, 312, 166);
        f_14d2_0722(20);
        f_14d2_075a(164, 24, 312, 82);
        f_14d2_0722(30);
        f_14d2_075a(8, 90, 312, 116);
        f_1680_2867(1.375, 4.0, 0, 1, 144, "        General");
        f_1680_2867(1.375, 5.0, 1, 12, 71, " Manager");
        sprintf(buf, " %.10s", f_a1c3_229c(d_2f3c_7f93[team], -1));
        f_1680_2867(10.5, 5.0, 1, 12, 71, buf);
        f_1680_2867(1.375, 6.0, 1, 12, 71, " Board");
        sprintf(buf, " %d%%", d_5739_01ec[team]);
        f_1680_2867(10.5, 6.0, 1, 12, 71, buf);
        f_1680_2867(1.375, 7.0, 1, 12, 71, " Capacity");
        sprintf(buf, " %ld", d_5739_0052[team] * 1000L);
        f_1680_2867(10.5, 7.0, 1, 12, 71, buf);
        f_1680_2867(1.375, 8.0, 1, 12, 71, " Cash");
        if (d_5d9c_9b8d != 0 || f_1680_0003(team))
            sprintf(buf, " %ld", f_14d2_1400(d_2f3c_74f3[0][team] - f_1680_2782(team), 0L));
        else
            strcpy(buf, " Unknown");
        f_1680_2867(10.5, 8.0, 1, 12, 71, buf);
        f_1680_2867(1.375, 9.0, 1, 12, 71, " Ints");
        d_5d9c_9be1 = 0;
        d_5d9c_9bdf = 0;
        for (i = 0; i < 3; i++)
            best[i] = -1;
        for (j = 0; j <= d_5739_023e[team] - 1; j++) {
            d_5d9c_9f91 = d_483b_a372[team][j];
            if (d_1f3e_d394[d_5d9c_9f91] != 0) {
                if (d_1f3e_da3a[d_5d9c_9f91] != 0)
                    d_5d9c_9bdf++;
                else
                    d_5d9c_9be1++;
            }
            d_5d9c_9d0b = d_3e42_0000[0][d_5d9c_9f91] - d_3e42_0000[12][d_5d9c_9f91];
            if (d_5d9c_9d0b > 0) {
                d_5d9c_9d9b = d_3e42_0000[1][d_5d9c_9f91] - d_3e42_0000[13][d_5d9c_9f91];
                d_5d9c_9aec = (float)(d_2f3c_85f7[0][d_5d9c_9f91] - d_2f3c_bb27[d_5d9c_9f91]) / d_5d9c_9d0b;
                d_5d9c_9ca3 = d_3e42_0000[2][d_5d9c_9f91] - d_3e42_0000[2][d_5d9c_9f91] % 5;
                if (d_5d9c_9d9b > best[0] || best[0] == -1) {
                    best[0] = d_5d9c_9d9b;
                    who[0] = d_5d9c_9f91;
                }
                if (d_5d9c_9aec > best[1] || best[1] == -1) {
                    best[1] = d_5d9c_9aec;
                    who[1] = d_5d9c_9f91;
                }
                if (d_5d9c_9ca3 > best[2] || best[2] == -1) {
                    best[2] = d_5d9c_9ca3;
                    who[2] = d_5d9c_9f91;
                }
            }
        }
        sprintf(buf, " %d", d_5d9c_9be1);
        f_1680_2867(10.5, 9.0, 1, 12, 71, buf);
        f_1680_2867(1.375, 10.0, 1, 12, 71, " U-21s");
        sprintf(buf, " %d", d_5d9c_9bdf);
        f_1680_2867(10.5, 10.0, 1, 12, 71, buf);
        f_1680_2867(20.875, 4.0, 0, 1, 144, "       CUP ROUNDS");
        f_1680_2867(20.875, 5.0, 1, 12, 144, "       THE FA CUP");
        strcpy(d_1f3e_2c9e, "Draw Not Made");
        if (d_2f3c_10d4[team] > 0) {
            strcpy(d_1f3e_2c4e, f_9100_7386(d_2f3c_10d4[team]));
            strcpy(d_1f3e_2c9e, d_1f3e_391e);
        }
        sprintf(buf, "%*s", (72 - strlen(d_1f3e_2c9e) * 3) / 6 + strlen(d_1f3e_2c9e), d_1f3e_2c9e);
        f_1680_2867(20.875, 6.0, 6, 12, 144, buf);
        strcpy(d_1f3e_51b6, "THE Rumbelows CUP");
        sprintf(buf, "%*s", (72 - strlen(d_1f3e_51b6) * 3) / 6 + strlen(d_1f3e_51b6), d_1f3e_51b6);
        f_1680_2867(20.875, 7.0, 1, 12, 144, buf);
        strcpy(d_1f3e_2c9e, "Draw Not Made");
        if (d_2f3c_1304[team] > 0) {
            strcpy(d_1f3e_2c4e, f_9100_7482(d_2f3c_1304[team]));
            strcpy(d_1f3e_2c9e, d_1f3e_391e);
        }
        sprintf(buf, "%*s", (72 - strlen(d_1f3e_2c9e) * 3) / 6 + strlen(d_1f3e_2c9e), d_1f3e_2c9e);
        f_1680_2867(20.875, 8.0, 6, 12, 144, buf);
        if (d_2f3c_1160[team] > 0)
            d_5d9c_9ed7 = 7;
        else if (d_2f3c_11ec[team] > 0)
            d_5d9c_9ed7 = 8;
        else if (d_2f3c_1278[team] > 0)
            d_5d9c_9ed7 = 9;
        else if (team < 40)
            d_5d9c_9ed7 = 11;
        else
            d_5d9c_9ed7 = 12;
        strcpy(d_1f3e_2c4e, f_9100_7560(d_2f3c_0d8c[d_5d9c_9ed7][team], d_5d9c_9ed7 - 6 - (d_5d9c_9ed7 >= 11 ? 1 : 0)));
        sprintf(d_1f3e_51b6, "THE %s", d_1f3e_38ce);
        sprintf(buf, "%*s", (72 - strlen(d_1f3e_51b6) * 3) / 6 + strlen(d_1f3e_51b6), d_1f3e_51b6);
        f_1680_2867(20.875, 9.0, 1, 12, 144, buf);
        strcpy(d_1f3e_2c9e, "Draw Not Made");
        if (d_2f3c_0d8c[d_5d9c_9ed7][team] > 0)
            strcpy(d_1f3e_2c9e, d_1f3e_391e);
        sprintf(buf, "%*s", (72 - strlen(d_1f3e_2c9e) * 3) / 6 + strlen(d_1f3e_2c9e), d_1f3e_2c9e);
        f_1680_2867(20.875, 10.0, 6, 12, 144, buf);
        f_1680_2867(1.375, 12.25, 1, 2, 300, "                  League Record");
        d_5d9c_9f49 = f_a1c3_20c5(team);
        f_1680_2867(1.375, 13.25, 0, 1, 34, " DIV");
        sprintf(buf, " %s", f_a1c3_261d(d_5d9c_9f49 / 20 + 1));
        f_1680_2867(1.375, 14.25, 1, 4, 34, buf);
        f_1680_2867(5.875, 13.25, 0, 1, 33, " POS");
        sprintf(buf, " %s", f_a1c3_261d(d_5d9c_9f49 % 20 + 1));
        f_1680_2867(5.875, 14.25, 1, 4, 33, buf);
        for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= 6; d_5d9c_9f6d++) {
            d_5d9c_9b00 = d_5d9c_9f6d * 4.125 + 10.25;
            sprintf(buf, " %s", names[d_5d9c_9f6d]);
            f_1680_2867(d_5d9c_9b00, 13.25, 0, 6, 31, buf);
            if (d_5d9c_9f6d == 0)
                d_5d9c_9f29 = d_5d9c_9f85 - 1;
            else if (d_5d9c_9f6d == 1)
                d_5d9c_9f29 = d_5739_03d8[team];
            else if (d_5d9c_9f6d == 2)
                d_5d9c_9f29 = d_5d9c_9f85 - 1 - d_5739_03d8[team] - d_5739_042a[team];
            else if (d_5d9c_9f6d == 6)
                d_5d9c_9f29 = f_1680_0287(d_5d9c_9f49);
            else
                d_5d9c_9f29 = d_5739_0334[d_5d9c_9f6d][team];
            sprintf(buf, "%3d", d_5d9c_9f29);
            f_1680_2867(d_5d9c_9b00, 14.25, 1, 4, 31, buf);
        }
        f_1680_2867(1.375, 16.5, 0, 1, 300, "                   This season");
        f_1680_2867(1.375, 17.5, 0, 6, 149, " Average attendance");
        strcpy(d_1f3e_51b6, "");
        if (d_5739_138a[team] > 0)
            sprintf(d_1f3e_51b6, " %ld", d_2f3c_7b33[team] / d_5739_138a[team]);
        f_1680_2867(20.25, 17.5, 0, 6, 149, d_1f3e_51b6);
        f_1680_2867(1.375, 18.5, 0, 6, 149, " Top Goalscorer");
        strcpy(d_1f3e_51b6, "");
        if (best[0] > 0) {
            strcpy(buf, f_a1c3_21cc(who[0]));
            buf[18] = 0;
            sprintf(d_1f3e_51b6, " %s - %4.0f", buf, best[0]);
        }
        f_1680_2867(20.25, 18.5, 0, 6, 149, d_1f3e_51b6);
        f_1680_2867(1.375, 19.5, 0, 6, 149, " Best Average Rating");
        strcpy(d_1f3e_51b6, "");
        if (best[1] > 0) {
            sprintf(d_1f3e_5396, "%4.2f", best[1]);
            strcpy(buf, f_a1c3_21cc(who[1]));
            buf[16] = 0;
            sprintf(d_1f3e_51b6, " %s - %s", buf, d_1f3e_5396);
        }
        f_1680_2867(20.25, 19.5, 0, 6, 149, d_1f3e_51b6);
        f_1680_2867(1.375, 20.5, 0, 6, 149, " Worst Discipline");
        strcpy(d_1f3e_51b6, "");
        if (best[2] > 0) {
            strcpy(buf, f_a1c3_21cc(who[2]));
            buf[18] = 0;
            sprintf(d_1f3e_51b6, " %s - %4.2f", buf, best[2]);
        }
        f_1680_2867(20.25, 20.5, 0, 6, 149, d_1f3e_51b6);
        f_a1c3_2d08(2, 25.75, 1.125, 1, 2, 31, "PRNT");
        f_a1c3_2d08(2, 30.25, 1.125, 1, 2, 31, "HIST");
        f_a1c3_2d08(2, 34.75, 1.125, 1, 2, 31, "RECS");
        f_a1c3_2d08(2, 1.25, 22.5, 1, 4, 301, "                 DONE");
        if (d_5d9c_9b8f == 0)
            f_a1c3_34c6(1);
        do {
            d_5d9c_9bd9 = d_5d9c_9faf = f_a1c3_3298(d_5d9c_9f63);
            if (d_5d9c_9bd9 == 1) {
                f_992a_01cb(team);
                f_a1c3_30b1(1, 0);
            }
        } while (d_5d9c_9bd9 <= 0);
        if (d_5d9c_9bd9 == 2)
            f_9100_643d(team);
        else if (d_5d9c_9bd9 == 3)
            f_9100_52ff(team);
    } while (d_5d9c_9bd9 != 4);
}

void f_a1c3_1d3f(char a)
{
    unsigned i, j;

    for (i = 0; i < 2; i++)
        for (j = 0; j < 4; j++)
            d_2f3c_0050[i][j] = 0;
    memset(d_2f3c_0070, -1, 16);
    memset(d_2f3c_0040, 0, 16);
    memset(d_5d9c_9fee, -1, 8);
    d_5d9c_9bd7 = 3 - a * 17;
    for (d_5d9c_9f91 = 0; d_5d9c_9f91 <= 0x6a3; d_5d9c_9f91++) {
        if ((d_5d9c_9d0b = d_3e42_0000[a ? 0 : 21][d_5d9c_9f91]) >= d_5d9c_9bd7) {
            if (a)
                d_5d9c_9bd5 = d_2f3c_85f7[0][d_5d9c_9f91];
            else
                d_5d9c_9bd5 = (int)d_3e42_0000[22][d_5d9c_9f91];
            d_5d9c_9aec = (float)d_5d9c_9bd5 / d_5d9c_9d0b;
            d_5d9c_9f61 = d_483b_0000[18][d_5d9c_9f91] / 20;
            d_5d9c_9f43 = d_483b_0000[17][d_5d9c_9f91] < 22;
            if (d_2f3c_0050[d_5d9c_9f43][d_5d9c_9f61] < d_5d9c_9aec) {
                d_2f3c_0070[d_5d9c_9f43][d_5d9c_9f61] = d_5d9c_9f91;
                d_2f3c_0050[d_5d9c_9f43][d_5d9c_9f61] = d_5d9c_9aec;
            }
        }
    }
    for (d_5d9c_9f4f = 0; d_5d9c_9f4f <= d_5d9c_9ef3 + 645; d_5d9c_9f4f++) {
        if (d_2f3c_5167[d_5d9c_9f4f] < 0xff) {
            if (a) {
                d_5d9c_a054 = f_14d2_16bc(d_5d9c_a35e, 0);
                d_5d9c_9a54 = d_5d9c_a054[d_5d9c_9f4f];
            } else
                d_5d9c_9a54 = d_2f3c_4c53[d_5d9c_9f4f];
            d_5d9c_9f61 = d_2f3c_5167[d_5d9c_9f4f] / 20;
            if (d_2f3c_0040[d_5d9c_9f61] < d_5d9c_9a54) {
                d_5d9c_9fee[d_5d9c_9f61] = d_5d9c_9f4f;
                d_2f3c_0040[d_5d9c_9f61] = d_5d9c_9a54;
            }
        }
    }
}

char far *f_a1c3_203b(int n, char far *s)
{
    char far *buf;
    char tmp[320];

    buf = f_14d2_0d40();
    if (strlen(s) > n - 1) {
        sprintf(tmp, "%.*s", n - 1, s);
        sprintf(buf, " %s", tmp);
    } else
        sprintf(buf, " %-*s", n - 1, s);
    return buf;
}

int f_a1c3_20c5(int team)
{
    d_5d9c_9cf9 = 80;
    for (d_5d9c_9f71 = 0; d_5d9c_9f71 <= 79; d_5d9c_9f71++) {
        if (d_2f3c_2794[0][d_5d9c_9f71] == team) {
            d_5d9c_9cf9 = d_5d9c_9f71;
            d_5d9c_9f71 = 79;
        }
    }
    return d_5d9c_9cf9;
}

int f_a1c3_2107(int team)
{
    switch (team / 20) {
    case 0:
        d_5d9c_9d9f = 22;
        break;
    case 1:
    case 2:
    case 3:
        d_5d9c_9d9f = 21;
    }
    return d_5d9c_9d9f;
}

char far *f_a1c3_213c(int player)
{
    char far *buf;

    buf = f_14d2_0d40();
    if (player >= 0 && player <= 0x6a3)
        sprintf(buf, "%s %s", d_5471_0000[d_2f3c_d5bf[player]], d_5471_0a70[d_2f3c_e30b[player]]);
    else
        strcpy(buf, "");
    return buf;
}

char far *f_a1c3_21cc(int player)
{
    char c;
    char far *buf;

    buf = f_14d2_0d40();
    c = f_14d2_09ce(f_a1c3_213c(player), " ");
    if (c != 0)
        sprintf(buf, "%c.", *f_a1c3_213c(player));
    strcat(buf, f_a1c3_2243(player));
    return buf;
}

char far *f_a1c3_2243(int player)
{
    char far *buf;
    char tmp[40];

    buf = f_14d2_0d40();
    strcpy(tmp, f_a1c3_213c(player));
    strcpy(buf, tmp + f_14d2_09ce(tmp, " "));
    return buf;
}

char far *f_a1c3_229c(int manager, char full)
{
    char far *buf;
    char tmp[80];

    buf = f_14d2_0d40();
    if (manager < 646) {
        strcpy(tmp, d_5471_0000[d_2f3c_422b[manager]]);
        strcpy(d_1f3e_40d0, d_5471_0a70[d_2f3c_473f[manager]]);
    } else {
        strcpy(tmp, d_1f3e_4fea[0][manager - 646]);
        strcpy(d_1f3e_40d0, d_1f3e_4fea[1][manager - 646]);
    }
    if (!full)
        sprintf(buf, "%s %s", tmp, d_1f3e_40d0);
    else
        strcpy(buf, d_1f3e_40d0);
    return buf;
}

int f_a1c3_238e(int x)
{
    int r;

    r = x % 100 + 1;
    if (r <= 55)
        return 0;
    if (r <= 70)
        return 1;
    if (r <= 80)
        return 2;
    if (r <= 90)
        return 3;
    return 4;
}

char far *f_a1c3_23c9(int a, int b)
{
    char far *buf;

    buf = f_14d2_0d40();
    if (d_3e42_0000[a * 5][b] > 0)
        sprintf(buf, "%4.2f", (float)d_2f3c_85f7[a][b] / d_3e42_0000[a * 5][b]);
    else
        strcpy(buf, "----");
    return buf;
}

char far *f_a1c3_24bb(int a, int b)
{
    char far *buf;

    buf = f_14d2_0d40();
    if (a == 0)
        strcpy(buf, "----");
    else if (a > 0)
        sprintf(buf, "%4.2f", (float)b / a);
    else if (a < 0)
        sprintf(buf, "%3.1f", (float)b / abs(a));
    return buf;
}

int f_a1c3_2553(void)
{
    int m;

    m = 4;
    if (d_5d9c_9b8d == 0) {
        for (d_5d9c_9f6d = 646; d_5d9c_9f6d <= d_5d9c_9ef3 + 645; d_5d9c_9f6d++) {
            if (d_2f3c_5167[d_5d9c_9f6d] < 0xff) {
                d_5d9c_9f61 = d_2f3c_5167[d_5d9c_9f6d] / 20;
                if (d_5d9c_9f61 < m)
                    m = d_5d9c_9f61;
            }
        }
    }
    if (m == 4)
        m = 0;
    return m;
}

/* numbers in words. 25b0 reads it from entry 1 through d_5d9c_87d8, one entry before:
 * BCC folds that base into the displacement as the original does */
static char far *d_5d9c_87dc[] = {
    "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten",
    "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen"
};

char far *f_a1c3_25b0(int player)
{
    char far *buf;

    buf = f_14d2_0d40();
    strcpy(buf, "");
    if (player >= 1 && player <= 15)
        strcpy(buf, d_5d9c_87d8[player]);
    else
        sprintf(buf, "%d", player);
    return buf;
}

char far *f_a1c3_261d(int division)
{
    char far *buf;

    buf = f_14d2_0d40();
    sprintf(buf, "%d", division);
    if (division % 10 == 1 && division != 11)
        strcat(buf, "ST");
    else if (division % 10 == 2 && division != 12)
        strcat(buf, "ND");
    else if (division % 10 == 3 && division != 13)
        strcat(buf, "RD");
    else
        strcat(buf, "TH");
    return buf;
}

void f_a1c3_26aa(void)
{
    f_a1c3_26f6();
    f_14d2_0819();
    f_14d2_0589();
    strcpy(d_1f3e_2bea, "");
    strcpy(d_1f3e_509e, "picture1.lbm");
    f_992a_6c72(-1);
    f_a1c3_277d();
}

void f_a1c3_26f6(void)
{
    f_14d2_01bb();
    f_14d2_0722(0);
    f_14d2_075a(0, 0, 0x13f, 0xc7);
}

void f_a1c3_271d(void)
{
    char pal[48];

    memset(pal, 0, 48);
    f_14d2_09c3(1);
    if (d_5d9c_9b1a != 0 && d_5d9c_a31e == 2) {
        _ES = _SS;
        _DX = (unsigned)pal;
        asm mov bx, 0;
        _CX = 16;
        _AX = 0x1012;
        geninterrupt(0x10);
    }
    f_14d2_05af(0);
    if (d_5d9c_9b1a != 0) {
        f_992a_6da2();
        d_5d9c_9b1a = 0;
    }
}

/* colours 16-31 of the palette, as RGB triples */
static unsigned char d_5d9c_8818[] = {
    0, 0, 0, 15, 15, 15, 14, 2, 0, 0, 10, 4, 0, 4, 10, 0, 14, 14, 14, 14, 6, 12, 0, 14,
    10, 10, 10, 14, 8, 0, 2, 2, 8, 6, 0, 6, 2, 8, 12, 0, 10, 10, 7, 7, 7, 0, 8, 2
};

void f_a1c3_277d(void)
{
    int r, g, b;
    unsigned char far *p;

    p = d_5d9c_8818;
    for (d_5d9c_9ded = 16; d_5d9c_9ded <= 31; d_5d9c_9ded++) {
        r = *p++;
        g = *p++;
        b = *p++;
        f_14d2_04a9(d_5d9c_9ded, r, g, b);
    }
}

void f_a1c3_27e4(char far *title)
{
    char t[160];
    char t2[320];

    strcpy(t, title);
    f_a1c3_2c23();
    f_a1c3_271d();
    f_14d2_073e(17);
    f_14d2_07af(0, 0, 0x13f, 0xc7);
    if (t[0] != 0) {
        d_5d9c_9b00 = 19.0 - strlen(t) / 2.0;
        f_14d2_0722(16);
        f_14d2_075a(d_5d9c_9b00 * 8.0 + 6.0, 6, (strlen(t) + d_5d9c_9b00) * 8.0 + 19.0, 20);
        sprintf(t2, " %s ", t);
        f_1680_2ea0(d_5d9c_9b00, -1.0, 1, 4, 0, t2);
    }
    d_5d9c_9b47 = -1;
}

void f_a1c3_290e(float x, int w, char far *prompt)
{
    f_1680_2d78(x, 21.0, 5, prompt);
    f_a1c3_29a4(x + 1 + strlen(prompt), 21.0, 9, w);
    f_14d2_0609(4, 0xa3, 0x13c, 0xb2);
}

void f_a1c3_29a4(int x, float y, int colour, int maxlen)
{
    register int c;

    if (d_5d9c_a06c == 0) {
        d_5d9c_1cea = 0;
        f_14d2_1a56();
        f_14b7_003e();
    }
    f_a1c3_361d();
    strcpy(d_1f3e_4fcc, "");
    do {
        d_5d9c_9b0c = f_14d2_0ca0();
        do {
            strcpy(d_1f3e_4170, f_14d2_0baf());
            if (f_14d2_0ac9() == 0)
                d_5d9c_9b0c = f_14d2_0ca0();
            else if (f_14d2_0ca0() - d_5d9c_9b0c > 300)
                strcpy(d_1f3e_4170, f_14d2_0152(13));
        } while (!(d_1f3e_4170[0] == 0x7f || d_1f3e_4170[0] == 13 || d_1f3e_4170[0] == 8
                   || d_1f3e_4170[0] == '.' || d_1f3e_4170[0] == ' ' || d_1f3e_4170[0] == '\''
                   || (d_1f3e_4170[0] >= '0' && d_1f3e_4170[0] <= '9')
                   || (d_1f3e_4170[0] >= 'A' && d_1f3e_4170[0] <= 'Z')
                   || (d_1f3e_4170[0] >= 'a' && d_1f3e_4170[0] <= 'z')));
        c = d_1f3e_4170[0];
        if ((c == 0x7f || c == 8) && d_1f3e_4fcc != "") {
            d_1f3e_4fcc[strlen(d_1f3e_4fcc) - 1] = 0;
            f_14d2_0609(x * 8 - 10, y * 8.0 - 5.0, (x + maxlen - 1) * 8 - 1, y * 8.0 + 10.0);
            f_1680_2d78(x, y, colour, d_1f3e_4fcc);
        } else if (strlen(d_1f3e_4fcc) < maxlen && c != 13 && c != 0x7f && c != 8) {
            strcat(d_1f3e_4fcc, d_1f3e_4170);
            f_14d2_0609(x * 8 - 10, y * 8.0 - 5.0, (x + maxlen - 1) * 8 - 1, y * 8.0 + 10.0);
            f_1680_2d78(x, y, colour, d_1f3e_4fcc);
        }
    } while (c != 13 && maxlen != 1);
    if (d_5d9c_a06c == 0) {
        f_14b7_0004();
        d_5d9c_1cea = 1;
        f_14d2_1963();
    }
}

void f_a1c3_2c23(void)
{
    unsigned i, j;

    d_5d9c_a04c = f_14d2_16bc(d_5d9c_a33c, 1);
    _fmemset(d_5d9c_a04c, 0, 400);
    _fmemset(d_1f3e_5814, 0, 100);
    d_5d9c_a00e = f_14d2_16bc(d_5d9c_a358, 1);
    for (i = 0; i < 7; i++)
        for (j = 0; j < 100; j++)
            d_5d9c_a00e[i][j] = 0;
    d_5d9c_9fce = f_14d2_16bc(d_5d9c_a350, 1);
    for (d_5d9c_9e9d = 0; d_5d9c_9e9d <= 99; d_5d9c_9e9d++)
        strcpy(d_5d9c_9fce + d_5d9c_9e9d * 40, "");
    d_5d9c_9bd1 = 0;
    d_5d9c_9f63 = 0;
}

void f_a1c3_2d08(int a, float x, float y, int c, int d, int e, char far *s)
{
    int o7b, o6b, o19;
    float ox, oy;

    o7b = d_5d9c_9f7b;
    o6b = d_5d9c_9f6b;
    ox = d_5d9c_9b00;
    oy = d_5d9c_9b08;
    o19 = d_5d9c_9f19;
    d_5d9c_9f7b = c;
    d_5d9c_9f6b = d;
    d_5d9c_9f19 = a;
    d_5d9c_9b00 = x;
    d_5d9c_9b08 = y;
    strcpy(d_1f3e_4acc, s);
    if (d_5d9c_9b00 == -1) {
        if (d_5d9c_9f19 > 0)
            d_5d9c_9b00 = 20.0 - strlen(d_1f3e_4acc) / 2.0;
        else
            d_5d9c_9b00 = (160 - strlen(d_1f3e_4acc) * 3) / 8.0;
    }
    d_5d9c_9fce = f_14d2_16bc(d_5d9c_a350, 1);
    strcpy(d_5d9c_9fce + d_5d9c_9bd1 * 40, d_1f3e_4acc);
    d_5d9c_a04c = f_14d2_16bc(d_5d9c_a33c, 1);
    d_5d9c_a04c[d_5d9c_9bd1] = (d_5d9c_9f7b << 4) + d_5d9c_9f6b;
    (d_5d9c_a04c + 100)[d_5d9c_9bd1] = d_5d9c_9f19;
    d_5d9c_a00e = f_14d2_16bc(d_5d9c_a358, 1);
    d_5d9c_a00e[0][d_5d9c_9bd1] = d_5d9c_9b00;
    d_5d9c_a00e[1][d_5d9c_9bd1] = d_5d9c_9b08;
    if (e > 0)
        d_5d9c_9bd3 = e;
    else
        d_5d9c_9bd3 = strlen(d_1f3e_4acc) * (8 - (d_5d9c_9f19 == 0 ? 2 : 0));
    if (d_5d9c_9f19 == 0) {
        d_5d9c_9af0 = d_5d9c_9b00 * 8.0 - 1;
        d_5d9c_9afc = d_5d9c_9b08 * 8.0 - 6.0;
        d_5d9c_9a70 = d_5d9c_9bd3 + d_5d9c_9b00 * 8.0 - 1;
        d_5d9c_9a68 = d_5d9c_9b08 * 8.0;
    } else if (d_5d9c_9f19 == 1) {
        d_5d9c_9af0 = d_5d9c_9b00 * 8.0 - 2.0;
        d_5d9c_9afc = d_5d9c_9b08 * 8.0 - 8.0;
        d_5d9c_9a70 = d_5d9c_9bd3 + d_5d9c_9b00 * 8.0 + 1;
        d_5d9c_9a68 = d_5d9c_9b08 * 8.0;
    } else if (d_5d9c_9f19 == 2) {
        d_5d9c_9af0 = d_5d9c_9b00 * 8.0 - 2.0;
        d_5d9c_9afc = d_5d9c_9b08 * 8.0 - 5.0;
        d_5d9c_9a70 = d_5d9c_9bd3 + d_5d9c_9b00 * 8.0 + 1;
        d_5d9c_9a68 = d_5d9c_9b08 * 8.0 + 10.0;
    }
    d_5d9c_a00e = f_14d2_16bc(d_5d9c_a358, 1);
    d_5d9c_a00e[2][d_5d9c_9bd1] = d_5d9c_9af0;
    d_5d9c_a00e[3][d_5d9c_9bd1] = d_5d9c_9afc;
    d_5d9c_a00e[4][d_5d9c_9bd1] = d_5d9c_9a70;
    d_5d9c_a00e[5][d_5d9c_9bd1] = d_5d9c_9a68;
    d_5d9c_a00e[6][d_5d9c_9bd1] = e;
    d_5d9c_9bd1++;
    f_a1c3_30b1(d_5d9c_9bd1, 0);
    d_5d9c_9f7b = o7b;
    d_5d9c_9f6b = o6b;
    d_5d9c_9f19 = o19;
    d_5d9c_9b00 = ox;
    d_5d9c_9b08 = oy;
}

void f_a1c3_30b1(int n, char swap)
{
    d_5d9c_9f75 = n - 1;
    if (d_5d9c_9f75 < 0)
        return;
    d_5d9c_a04c = f_14d2_16bc(d_5d9c_a33c, 0);
    d_5d9c_9f7b = d_5d9c_a04c[d_5d9c_9f75] / 16;
    d_5d9c_9f6b = d_5d9c_a04c[d_5d9c_9f75] % 16;
    if (d_5d9c_9f7b <= 0 && d_5d9c_9f6b <= 0)
        return;
    if (swap != 0 && d_5d9c_9f6b > 0)
        f_14d2_148f(&d_5d9c_9f7b, &d_5d9c_9f6b, 2);
    d_5d9c_9f19 = (d_5d9c_a04c + 100)[d_5d9c_9f75];
    d_5d9c_a00e = f_14d2_16bc(d_5d9c_a358, 0);
    d_5d9c_9b00 = d_5d9c_a00e[0][d_5d9c_9f75];
    d_5d9c_9b08 = d_5d9c_a00e[1][d_5d9c_9f75];
    d_5d9c_9e8b = d_5d9c_a00e[6][d_5d9c_9f75];
    d_5d9c_9fce = f_14d2_16bc(d_5d9c_a350, 0);
    if (d_5d9c_9f19 == 0)
        f_1680_2867(d_5d9c_9b00, d_5d9c_9b08, d_5d9c_9f7b, d_5d9c_9f6b, d_5d9c_9e8b,
                    d_5d9c_9fce + d_5d9c_9f75 * 40);
    else if (d_5d9c_9f19 == 1)
        f_1680_2b8b(d_5d9c_9b00, d_5d9c_9b08, d_5d9c_9f7b, d_5d9c_9f6b, d_5d9c_9e8b,
                    d_5d9c_9fce + d_5d9c_9f75 * 40);
    else if (d_5d9c_9f19 == 2)
        f_1680_2ea0(d_5d9c_9b00, d_5d9c_9b08, d_5d9c_9f7b, d_5d9c_9f6b, d_5d9c_9e8b,
                    d_5d9c_9fce + d_5d9c_9f75 * 40);
}

int f_a1c3_3298(int a)
{
    f_a1c3_361d();
    d_5d9c_9bcf = -1;
    d_5d9c_9a64 = f_14d2_0ca0();
    d_5d9c_9a60 = f_14d2_0ca0();
    d_5d9c_a00e = f_14d2_16bc(d_5d9c_a358, 0);
    do {
        if (f_14d2_0ac9() > 0) {
            d_5d9c_9bcf = 0;
            for (d_5d9c_9e9d = 0; d_5d9c_9bd1 - 1 >= d_5d9c_9e9d; d_5d9c_9e9d++) {
                if (f_14d2_0ac1() >= d_5d9c_a00e[2][d_5d9c_9e9d] &&
                    f_14d2_0ac1() <= d_5d9c_a00e[4][d_5d9c_9e9d] &&
                    f_14d2_0ab9() >= d_5d9c_a00e[3][d_5d9c_9e9d] &&
                    f_14d2_0ab9() <= d_5d9c_a00e[5][d_5d9c_9e9d]) {
                    if (d_1f3e_5814[d_5d9c_9e9d] == 0)
                        d_5d9c_9bcf = d_5d9c_9e9d + 1;
                    else
                        d_5d9c_9bcf = -1;
                    d_5d9c_9e9d = d_5d9c_9bd1 - 1;
                }
            }
        }
        if (d_5d9c_9b1b != 0 && d_1f3e_2e2e[0] != 0) {
            if (f_14d2_0ca0() - d_5d9c_9a64 > 500) {
                f_a1c3_48ad();
                d_5d9c_9a64 = f_14d2_0ca0();
            }
            if (f_14d2_0ca0() - d_5d9c_9a60 > 100) {
                f_a1c3_49a5();
                d_5d9c_9a60 = f_14d2_0ca0();
            }
        }
    } while (d_5d9c_9bcf <= -1);
    if (a > 0)
        f_a1c3_30b1(a, 0);
    if (d_5d9c_9bcf > 0 && a > -1)
        f_a1c3_30b1(d_5d9c_9bcf, -1);
    return d_5d9c_9f63 = d_5d9c_9bcf;
}

void f_a1c3_34c6(int team)
{
    d_1f3e_5814[team - 1] = 0xff;
}

void f_a1c3_34db(void)
{
    for (d_5d9c_9e9d = 0; d_5d9c_9bd1 - 1 >= d_5d9c_9e9d; d_5d9c_9e9d++)
        d_1f3e_5814[d_5d9c_9e9d] = 0;
}

void f_a1c3_3505(int a)
{
    f_1680_27aa(0xfc, 0xc5, 5, "CLICK MOUSE");
    if (d_5d9c_9b8d != 0 && d_5d9c_9b8e == 0 && d_5d9c_9b32 == 0) {
        d_5d9c_9b0c = f_14d2_0ca0();
        do
            f_14d2_0c2a(2);
        while (f_14d2_0ac9() != 0 || f_14d2_0ca0() - d_5d9c_9b0c <= 75);
    } else {
        f_a1c3_361d();
        do {
            f_14d2_0c2a(2);
            strcpy(d_1f3e_4170, "");
            if (a == 2)
                strcpy(d_1f3e_4170, f_14d2_0baf());
        } while (f_14d2_0ac9() <= 0 && d_1f3e_4170[0] == 0);
    }
    f_14d2_0609(0xf3, 0xbf, 0x13e, 0xc5);
    if (a == 0)
        f_1680_27aa(0xfc, 0xc5, 5, "PLEASE WAIT");
}

void f_a1c3_361d(void)
{
    char buf[10];

    do
        strcpy(buf, f_14d2_0baf());
    while (buf[0] != 0 || f_14d2_0ac9() != 0);
}

char far *f_a1c3_364a(char far *s)
{
    char far *p;

    p = f_14d2_0d40();
    strcpy(p, s);
    for (d_5d9c_9bcd = 1; strlen(p) > d_5d9c_9bcd; d_5d9c_9bcd++)
        if (isupper(p[d_5d9c_9bcd]))
            p[d_5d9c_9bcd] = tolower(p[d_5d9c_9bcd]);
    return p;
}

long f_a1c3_36c4(int team)
{
    d_5d9c_a01a = f_14d2_16bc(d_5d9c_a35c, 0);
    d_5d9c_99d8 = d_5d9c_a01a[0][team] + d_5d9c_a01a[5][team] + d_5d9c_a01a[2][team];
    d_5d9c_99d4 = d_5d9c_a01a[9][team] + d_5d9c_a01a[12][team] + d_5d9c_a01a[13][team];
    d_5d9c_99d0 = f_14d2_1400(d_2f3c_74f3[0][team] - f_1680_2782(team), 0L) + d_5d9c_99d8 - d_5d9c_99d4;
    return d_5d9c_99cc = f_88c9_26a0(d_5d9c_99d0 * 0.9, 0);
}

void f_a1c3_37c7(int p)
{
    char buf[320];
    int m;

    sprintf(buf, "%d years", d_483b_0000[17][p]);
    strcpy(d_1f3e_373e, f_a1c3_203b(12, buf));
    strcpy(buf, d_5d9c_08bc[d_483b_0000[18][p]]);
    strcpy(d_1f3e_52a6, f_a1c3_203b(12, buf));
    strcpy(buf, f_992a_5114(f_a1c3_238e(p)));
    if (d_1f3e_d394[p]) {
        if (d_1f3e_da3a[p] == 0)
            strcat(buf, " I");
        else
            strcat(buf, " U");
    }
    strcpy(d_1f3e_35fe, f_a1c3_203b(12, buf));
    if (d_2f3c_a08f[p] > 0)
        sprintf(buf, "EXP %d/%d", d_5d9c_9bf5 % 100, (d_5d9c_9bf5 = d_2f3c_a08f[p]) / 100);
    else
        strcpy(buf, "Free agent");
    strcpy(d_1f3e_35ae, f_a1c3_203b(12, buf));
    sprintf(buf, "%d p/w", d_2f3c_addb[p]);
    strcpy(d_1f3e_355e, f_a1c3_203b(12, buf));
    if (d_1f3e_9118[p]) {
        strcpy(buf, "Listed");
        if (d_1f3e_9e64[p])
            strcat(buf, " R");
    } else if (d_1f3e_97be[p])
        strcpy(buf, "Staying");
    else
        strcpy(buf, "Unknown");
    strcpy(d_1f3e_2d8e, f_a1c3_203b(12, buf));
    d_5d9c_9a58 = f_88c9_12b3(p, d_483b_0000[18][p]);
    if (d_1f3e_9118[p] == 0 && f_1680_0003(d_483b_0000[18][p]) == 0)
        d_5d9c_9a58 = f_88c9_2744(d_5d9c_9a58);
    strcpy(buf, f_88c9_27e8(d_5d9c_9a58));
    if (d_1f3e_9118[p] == 0)
        strcat(buf, " C");
    strcpy(d_1f3e_350e, f_a1c3_203b(12, buf));
    if (d_1f3e_e0e0[p])
        sprintf(buf, "%d p/w", f_88c9_2177(p));
    else
        strcpy(buf, "NONE");
    strcpy(d_1f3e_34be, f_a1c3_203b(12, buf));

    strcpy(d_1f3e_3e28, "");
    if (d_1f3e_5be8[0][p])
        strcat(d_1f3e_3e28, " GK");
    if (d_1f3e_5be8[1][p])
        strcat(d_1f3e_3e28, " DEF");
    if (d_1f3e_5be8[2][p])
        strcat(d_1f3e_3e28, " MID");
    if (d_1f3e_5be8[3][p])
        strcat(d_1f3e_3e28, " ATT");
    strcpy(buf, &d_1f3e_3e28[1]);
    strcpy(d_1f3e_3e28, f_a1c3_203b(12, buf));
    strcpy(d_1f3e_364e, "");
    if (d_1f3e_7680[0][p])
        strcat(d_1f3e_364e, " R");
    if (d_1f3e_7680[1][p])
        strcat(d_1f3e_364e, " L");
    if (d_1f3e_7680[2][p])
        strcat(d_1f3e_364e, " C");
    if (d_1f3e_364e[0])
        strcpy(d_1f3e_364e, &d_1f3e_364e[1]);
    strcpy(d_1f3e_364e, f_a1c3_203b(12, d_1f3e_364e));

    sprintf(buf, "%d", d_3e42_0000[0][p]);
    strcpy(d_1f3e_30fe, f_a1c3_203b(8, buf));
    sprintf(buf, "%d", d_3e42_0000[1][p]);
    strcpy(d_1f3e_4120, f_a1c3_203b(8, buf));
    sprintf(buf, "%d", d_3e42_0000[2][p] / 5 * 5);
    strcpy(d_1f3e_4492, f_a1c3_203b(8, buf));
    strcpy(d_1f3e_5396, f_a1c3_203b(8, f_a1c3_23c9(0, p)));
    if (d_3e42_0000[0][p] > 0) {
        sprintf(buf, "%d", d_3e42_0000[3][p]);
        strcpy(d_1f3e_30ae, f_a1c3_203b(8, buf));
        sprintf(buf, "%d", d_3e42_0000[4][p]);
        strcpy(d_1f3e_305e, f_a1c3_203b(8, buf));
    } else {
        strcpy(d_1f3e_30ae, " -      ");
        strcpy(d_1f3e_305e, d_1f3e_30ae);
    }
    sprintf(buf, "%d", d_3e42_0000[5][p]);
    strcpy(d_1f3e_300e, f_a1c3_203b(7, buf));
    sprintf(buf, "%d", d_3e42_0000[6][p]);
    strcpy(d_1f3e_2fbe, f_a1c3_203b(7, buf));
    sprintf(buf, "%d", d_3e42_0000[7][p]);
    strcpy(d_1f3e_2f6e, f_a1c3_203b(7, buf));
    strcpy(d_1f3e_2f1e, f_a1c3_203b(7, f_a1c3_23c9(1, p)));
    if (d_3e42_0000[5][p] > 0) {
        sprintf(buf, "%d", d_3e42_0000[8][p]);
        strcpy(d_1f3e_2ece, f_a1c3_203b(7, buf));
        sprintf(buf, "%d", d_3e42_0000[9][p]);
        strcpy(d_1f3e_2dde, f_a1c3_203b(7, buf));
    } else {
        strcpy(d_1f3e_2ece, " -     ");
        strcpy(d_1f3e_2dde, d_1f3e_2ece);
    }

    strcpy(d_1f3e_319e, "                  AVAILABILITY");
    if (d_483b_0000[20][p] > 0) {
        if (d_483b_0000[19][p] < 20) {
            if (d_1f3e_b8fc[p])
                strcpy(d_1f3e_319e, "             LATEST FROM LILLESHALL");
            if (d_483b_0000[20][p] < 3)
                strcpy(d_1f3e_2d3e, "soon");
            else
                sprintf(d_1f3e_2d3e, "in about %d weeks", d_483b_0000[20][p]);
            sprintf(d_1f3e_314e, "Has %s - back %s", d_5471_1770[d_483b_0000[19][p]], d_1f3e_2d3e);
        } else {
            if (d_483b_0000[20][p] == 1)
                strcpy(d_1f3e_2d3e, "match");
            else
                sprintf(d_1f3e_2d3e, "%d matches", d_483b_0000[20][p]);
            sprintf(d_1f3e_314e, "Suspended for next %s", d_1f3e_2d3e);
        }
    } else {
        sprintf(d_1f3e_314e, "%d%% match fit", d_483b_0000[21][p]);
        if (d_1f3e_8a72[p]) {
            sprintf(buf, " - Shirt No.%s", f_1680_03f3(f_992a_1d7c(p) + 1));
            strcat(d_1f3e_314e, buf);
        }
    }
    strcpy(d_1f3e_346e, d_5471_17f4[d_3e42_0000[17][p]]);
    if (d_1f3e_5be8[0][p] == 0) {
        sprintf(d_1f3e_341e, "%d", d_483b_0000[1][p]);
        sprintf(d_1f3e_33ce, "%d", d_483b_0000[2][p]);
        sprintf(d_1f3e_337e, "%d", d_483b_0000[3][p]);
        sprintf(d_1f3e_332e, "%d", d_483b_0000[4][p]);
        sprintf(d_1f3e_32de, "%d", d_483b_0000[5][p]);
        sprintf(d_1f3e_328e, "%d", d_483b_0000[6][p]);
        sprintf(d_1f3e_323e, "%d", d_483b_0000[22][p]);
    } else {
        strcpy(d_1f3e_341e, "");
        strcpy(d_1f3e_33ce, "");
        strcpy(d_1f3e_337e, "");
        strcpy(d_1f3e_332e, "");
        strcpy(d_1f3e_32de, "");
        strcpy(d_1f3e_328e, "");
        strcpy(d_1f3e_323e, "");
    }
    sprintf(d_1f3e_31ee, "%d", d_483b_0000[12][p]);
    m = (d_483b_0000[15][p] - d_483b_0000[0][p]) / 10;
    if (m <= -4)
        strcpy(d_1f3e_2e7e, "Morale is very low");
    else if (m <= -2)
        strcpy(d_1f3e_2e7e, "Morale is low");
    else if (m <= 1)
        strcpy(d_1f3e_2e7e, "Morale is Ok");
    else if (m <= 3)
        strcpy(d_1f3e_2e7e, "Morale is good");
    else
        strcpy(d_1f3e_2e7e, "Morale is superb");

    d_5d9c_9b50 = f_88c9_04fb(p);
    if (d_5d9c_9b50 && d_5d9c_9dcb == 1 && d_3e42_0000[14][p] == 0)
        d_5d9c_9b50 = 0;
    if (d_1f3e_9118[p] && d_1f3e_9e64[p]) {
        if (d_5d9c_9b50 == 0)
            strcpy(d_1f3e_4262, "But having second thoughts");
        sprintf(d_1f3e_2cee, "Requested move - %s", d_1f3e_4262);
    } else if (d_5d9c_9b50) {
        if (d_3e42_0000[14][p] > 0)
            sprintf(d_1f3e_2cee, "%s to leave - %s", d_1f3e_9118[p] ? "Wants" : "May ask", d_1f3e_4262);
        else
            sprintf(d_1f3e_2cee, "Unhappy - %s", d_1f3e_4262);
    } else
        sprintf(d_1f3e_2cee, "%s happy to stay at the club", d_1f3e_9118[p] ? "He would be" : "He is");

    strcpy(d_1f3e_2e2e, "");
    if (d_3e42_0000[23][p] > 0 && d_1f3e_97be[p] == 0) {
        d_5d9c_9bf3 = 0;
        for (d_5d9c_9bf1 = 0; d_5d9c_9bf1 <= 79; d_5d9c_9bf1++) {
            if (f_1680_0003(d_5d9c_9bf1) == 0 && f_8352_182c(d_5d9c_9bf1, p) > 0) {
                d_5d9c_9bf3++;
                if (d_5d9c_9bf3 > 1) {
                    if (d_3e42_0000[23][p] == d_5d9c_9bf3)
                        strcat(d_1f3e_2e2e, " and ");
                    else if (d_3e42_0000[23][p] > d_5d9c_9bf3)
                        strcat(d_1f3e_2e2e, ", ");
                }
                strcat(d_1f3e_2e2e, d_5d9c_08bc[d_5d9c_9bf1]);
            }
        }
    }
}

void f_a1c3_48ad(void)
{
    f_1680_2867(1.375, 24.375, 6, 4, 0x12a, "");
    if (d_5d9c_9b1d == 0) {
        f_1680_2867(1.375, 23.5, 0, 1, 0x12a, "                     FUTURE");
        f_1680_2867(-1.0, 24.375, 6, 4, 0, d_1f3e_2cee);
    } else {
        f_1680_2867(1.375, 23.5, 0, 6, 0x12a, "                   TARGETED BY");
        f_1680_2867(-1.0, 24.375, 1, 4, 0, d_1f3e_2e2e);
    }
    d_5d9c_9b1d = !d_5d9c_9b1d;
}

void f_a1c3_49a5(void)
{
    f_1680_2867(37.375, 23.5, 2, d_5d9c_9b1d ? 1 : 6, 0, d_5d9c_9b1c ? ">" : " ");
    d_5d9c_9b1c = !d_5d9c_9b1c;
}

void f_a1c3_4a04(void)
{
    for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 139; d_5d9c_9f69++)
        d_1f3e_fb9d[d_5d9c_9f69] = d_5d9c_9f69 + (d_5d9c_9f69 >= 80 ? 400 : 0);
    for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= 138; d_5d9c_9f6d++)
        for (d_5d9c_9fa1 = d_5d9c_9f6d + 1; d_5d9c_9fa1 <= 139; d_5d9c_9fa1++)
            if (strcmp(f_1680_1a91(d_1f3e_fb9d[d_5d9c_9f6d]), f_1680_1a91(d_1f3e_fb9d[d_5d9c_9fa1])) > 0)
                f_14d2_148f(&d_1f3e_fb9d[d_5d9c_9f6d], &d_1f3e_fb9d[d_5d9c_9fa1], 2);
    d_5d9c_9b22 = -1;
    for (d_5d9c_9eef = 0x286; d_5d9c_9eef < 0x28a; d_5d9c_9eef++)
        d_2f3c_5167[d_5d9c_9eef] = 255;
    f_1680_150c(0, "New game", "Demo Game|One Player|Two Players|Three Players|Four Players|");
    d_5d9c_9ef3 = d_5d9c_9ef1 = d_5d9c_9faf;
    d_5d9c_9b8d = d_5d9c_9ef1 == 0 ? -1 : 0;
    if (d_5d9c_9ef1 > 0) {
        for (d_5d9c_9f91 = 1; d_5d9c_9f91 <= d_5d9c_9ef3; d_5d9c_9f91++) {
            d_5d9c_9f67 = f_a1c3_4e2f(d_5d9c_9eef = d_5d9c_9f91 + 0x285);
            if (d_5d9c_9f67 >= 400) {
                d_5d9c_9c17 = -1;
                for (d_5d9c_9f69 = 60; d_5d9c_9f69 <= 79; d_5d9c_9f69++) {
                    if (f_1680_0003(d_5d9c_9f69) == 0) {
                        if ((d_5d9c_9d8d = f_1680_0037(d_5d9c_9f69) + f_14d2_0c2a(2) - f_14d2_0c2a(2)) < d_5d9c_9c15
                            || d_5d9c_9c17 == -1) {
                            d_5d9c_9c15 = d_5d9c_9d8d;
                            d_5d9c_9c17 = d_5d9c_9f69;
                        }
                    }
                }
                f_14d2_148f((void *)&d_5d9c_08bc[d_5d9c_9c17], (void *)&d_5d9c_0484[d_5d9c_9f67], 2);
                d_5739_0000[0][d_5d9c_9c17] = 10;
                d_5739_0000[1][d_5d9c_9c17] = f_14d2_0c2a(10) + 10;
                f_14d2_148f((void *)&d_5739_0000[2][d_5d9c_9c17], (void *)&d_5739_15aa[d_5d9c_9f67], 1);
                f_14d2_148f((void *)&d_5739_0000[3][d_5d9c_9c17], (void *)&d_5739_1776[d_5d9c_9f67], 1);
                d_5739_0000[4][d_5d9c_9c17] = 13;
                d_5739_13de[d_5d9c_9f67] = 10;
                f_14d2_148f((void *)&d_5739_57ea[0][d_5d9c_9c17], (void *)&d_5739_57ea[0][d_5d9c_9f67 - 400], 1);
                f_14d2_148f((void *)&d_5739_57ea[1][d_5d9c_9c17], (void *)&d_5739_57ea[1][d_5d9c_9f67 - 400], 1);
                d_5d9c_9f67 = d_5d9c_9c17;
            }
            d_5d9c_9eef = d_5d9c_9f91 + 0x285;
            d_2f3c_7f93[d_5d9c_9f67] = d_5d9c_9eef;
            d_2f3c_5167[d_5d9c_9eef] = d_5d9c_9f67;
            d_2f3c_53f1[d_5d9c_9eef] = 35;
            d_2f3c_567b[d_5d9c_9eef] = 25;
            d_2f3c_7269[d_5d9c_9eef] = 0;
            d_2f3c_5e19[d_5d9c_9eef] = 80;
            d_2f3c_5905[d_5d9c_9eef] = f_a1c3_506f(d_5d9c_9eef);
            f_992a_7e35(d_5d9c_9f91 - 1);
        }
        f_1680_150c(0, "Starting Division", "Division One|Division Two|Division Three|Division Four|");
        d_5d9c_9c19 = d_5d9c_9faf + 1;
        for (d_5d9c_9f4f = 0x286; d_5d9c_9f4f <= d_5d9c_9ef3 + 0x285; d_5d9c_9f4f++) {
            d_5d9c_9f67 = d_2f3c_5167[d_5d9c_9f4f];
            if (d_5d9c_9f67 < 255) {
                if ((d_5d9c_9f61 = d_5d9c_9f67 / 20 + 1) < d_5d9c_9c19) {
                    for (d_5d9c_9ecf = d_5d9c_9f61; d_5d9c_9ecf <= d_5d9c_9c19 - 1; d_5d9c_9ecf++) {
                        f_1680_0592(d_5d9c_9f67, d_5d9c_9ecf + 1);
                        d_5d9c_9f67 = d_5d9c_9c17;
                    }
                } else if (d_5d9c_9f61 > d_5d9c_9c19) {
                    for (d_5d9c_9ecf = d_5d9c_9f61; d_5d9c_9ecf >= d_5d9c_9c19 + 1; d_5d9c_9ecf--) {
                        f_1680_0592(d_5d9c_9f67, d_5d9c_9ecf - 1);
                        d_5d9c_9f67 = d_5d9c_9c17;
                    }
                }
            }
        }
    }
    d_5d9c_9b22 = 0;
}

int f_a1c3_4e2f(int p)
{
    char buf[320];
    int list[48];

    d_5d9c_9f67 = -1;
    d_5d9c_9f53 = 1;
    do {
        f_a1c3_27e4("Team Choice");
        sprintf(buf, " Player %s choose team ", f_a1c3_25b0(p - 645));
        f_1680_2867(1.125, 4.0, 1, 2, 0x130, buf);
        f_a1c3_2d08(2, 1.25, 22.5, 1, 4, 0x12d, "                 MORE");
        for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= (d_5d9c_9f53 == 3 ? 43 : 47); d_5d9c_9f69++) {
            list[d_5d9c_9f69] = d_1f3e_fb9d[(d_5d9c_9f53 - 1) * 48 + d_5d9c_9f69];
            d_5d9c_9b00 = d_5d9c_9f69 / 16 * 12.75 + 1.125;
            d_5d9c_9b08 = d_5d9c_9f69 + 6 - d_5d9c_9f69 / 16 * 16;
            sprintf(buf, " %.15s", f_1680_1a91(list[d_5d9c_9f69]));
            f_a1c3_2d08(0, d_5d9c_9b00, d_5d9c_9b08, f_1680_0003(list[d_5d9c_9f69]) ? 6 : 1,
                        d_5d9c_9f69 & 1 ? 15 : 3, 100, buf);
            if (f_1680_0003(list[d_5d9c_9f69]))
                f_a1c3_34c6(d_5d9c_9f69 + 2);
        }
        do {
            d_5d9c_9faf = f_a1c3_3298(d_5d9c_9f63);
        } while (d_5d9c_9faf == 0);
        if (d_5d9c_9faf == 1) {
            d_5d9c_9f53++;
            if (d_5d9c_9f53 == 4)
                d_5d9c_9f53 = 1;
        } else
            d_5d9c_9f67 = list[d_5d9c_9faf - 2];
    } while (d_5d9c_9f67 == -1);
    return d_5d9c_9f67;
}

int f_a1c3_506f(int p)
{
    char buf[320];

    sprintf(buf, "Player %s", f_a1c3_25b0(p - 645));
    f_a1c3_27e4(buf);
    f_1680_2ea0(1.0, 4.0, 1, 2, 0, " Select Personality ");
    strcpy(buf, "");
    for (d_5d9c_9c13 = 0; d_5d9c_9c13 <= 9; d_5d9c_9c13++) {
        strcat(buf, d_5471_17f4[d_5d9c_9c13]);
        strcat(buf, "|");
    }
    f_1680_150c(7, "", buf);
    f_1680_18b2(9);
    return d_5d9c_9faf;
}

void f_a1c3_515d(void)
{
    for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= 79; d_5d9c_9f6d++) {
        for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 21; d_5d9c_9fa1++) {
            switch (d_5d9c_9fa1) {
            case 8: case 9: case 12: case 13: case 14: case 15: case 16: case 17: case 18:
            case 19: case 20:
                d_5739_0000[d_5d9c_9fa1][d_5d9c_9f6d] = 0;
                break;
            case 0: case 1: case 2: case 4:
                d_2f3c_7c73[d_5d9c_9fa1][d_5d9c_9f6d] = 0;
                break;
            }
        }
        d_5739_0386[d_5d9c_9f6d] = 2;
        d_2f3c_7b33[d_5d9c_9f6d] = 0;
        d_5739_138a[d_5d9c_9f6d] = 0;
        d_5d9c_99c8 = (f_1680_0037(d_5d9c_9f6d) + f_14d2_0c2a(2) - f_14d2_0c2a(2))
            * (4 - d_5d9c_9f6d / 20) * 500.0f;
        d_5d9c_a01a = f_14d2_16bc(d_5d9c_a35c, 0);
        d_5d9c_a01a[1][d_5d9c_9f6d] = d_5d9c_99c8 / 2500 * 2500;
        strcpy(d_1f3e_0ab4[d_5d9c_9f6d], "");
        for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 1; d_5d9c_9fa1++)
            strcpy(d_1f3e_0780[d_5d9c_9fa1][d_5d9c_9f6d], "");
        d_5d9c_9fc2 = f_14d2_16bc(d_5d9c_a352, 1);
        for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 1; d_5d9c_9fa1++)
            strcpy(d_5d9c_9fc2[d_5d9c_9fa1][d_5d9c_9f6d], "");
        for (d_5d9c_9fa1 = 2; d_5d9c_9fa1 <= 8; d_5d9c_9fa1++)
            d_1f3e_5918[d_5d9c_9fa1][d_5d9c_9f6d] = 0;
    }
    memset(d_5d9c_a054, 0, 4);
    for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= 1699; d_5d9c_9f6d++) {
        if (f_1680_0003(d_5d9c_9f67 = d_483b_0000[18][d_5d9c_9f6d]) == 0)
            d_1f3e_97be[d_5d9c_9f6d] = 0;
        for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 47; d_5d9c_9fa1++) {
            switch (d_5d9c_9fa1) {
            case 11: case 12: case 13: case 15: case 16: case 17: case 18: case 19: case 23:
                d_1f3e_5be8[d_5d9c_9fa1][d_5d9c_9f6d] = 0;
                break;
            case 24: case 25: case 26: case 27: case 28: case 36: case 37: case 43: case 47:
                d_3e42_0000[d_5d9c_9fa1 - 24][d_5d9c_9f6d] = 0;
                break;
            case 0: case 4:
                d_2f3c_85f7[d_5d9c_9fa1][d_5d9c_9f6d] = 0;
                break;
            }
        }
        d_483b_0000[21][d_5d9c_9f6d] = 70;
        if (d_483b_0000[19][d_5d9c_9f6d] == 20) {
            if (d_483b_0000[20][d_5d9c_9f6d] > 0) {
                d_483b_0000[19][d_5d9c_9f6d] = d_483b_0000[20][d_5d9c_9f6d] + 20;
                d_483b_0000[20][d_5d9c_9f6d] = 0;
            }
        }
        d_5739_0290[d_5d9c_9f67] = d_5739_0290[d_5d9c_9f67]
            - (d_483b_0000[20][d_5d9c_9f6d] > 0 ? -1 : 0);
        d_5739_02e2[d_5d9c_9f67] = d_5739_02e2[d_5d9c_9f67]
            - (d_1f3e_5be8[0][d_5d9c_9f6d] != 0 && d_483b_0000[20][d_5d9c_9f6d] == 0 ? -1 : 0);
    }
    for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= 139; d_5d9c_9f6d++)
        for (d_5d9c_9fa1 = 6; d_5d9c_9fa1 <= 12; d_5d9c_9fa1++)
            d_2f3c_0d8c[d_5d9c_9fa1][d_5d9c_9f6d] = 0;
    memset(d_2f3c_029c, -1, 2800);
    for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 79; d_5d9c_9f69++)
        if (f_1680_0003(d_5d9c_9f69) == 0 || d_5d9c_9fa7 == 1)
            d_2f3c_1d94[d_5d9c_9f69][0] = 0;
    memset(d_5d9c_9ff6, -1, 4);
    d_5d9c_9fab = 1;
    d_5d9c_9f85 = 1;
    d_5d9c_9e87 = 1;
    d_5d9c_9f8d = 0;
    d_5d9c_9f8f = 0;
    d_5d9c_9f35 = 0;
    d_5d9c_9f33 = 0;
    d_5d9c_9f8b = 0;
    d_5d9c_9f89 = 0;
    d_5d9c_9f87 = 0;
    for (d_5d9c_9f19 = 0; d_5d9c_9f19 <= 93; d_5d9c_9f19++) {
        d_483b_a0ba[d_5d9c_9f19] = 0;
        d_483b_a176[d_5d9c_9f19] = 0;
    }
    memset(d_5d9c_a064, 0, 8);
    for (d_5d9c_9cef = 1; d_5d9c_9cef <= 94; d_5d9c_9cef++)
        if (f_992a_700a(d_5d9c_9cef) == 0)
            f_1680_086a(1, 40, d_5d9c_9cef);
    d_5739_1d2a[0][0][4] = d_5d9c_a022[0] * 32;
    d_5739_1d2a[0][1][4] = d_5d9c_a022[1] * 32;
}

void f_a1c3_5826(void)
{
    f_9100_243d(4, 0);
    f_9100_243d(5, 0);
    for (d_5d9c_9f91 = 0; d_5d9c_9f91 <= 1699; d_5d9c_9f91++) {
        f_9100_24d0(5, -1, d_5d9c_9f91, 2489);
        if (d_1f3e_b256[d_5d9c_9f91] != 0)
            d_483b_0000[15][d_5d9c_9f91] = f_14d2_144d(d_483b_0000[0][d_5d9c_9f91] + f_14d2_0c2a(10),
                d_483b_0000[9][d_5d9c_9f91] + 25);
        else {
            d_483b_0000[15][d_5d9c_9f91] = d_483b_0000[0][d_5d9c_9f91];
            f_992a_424a(d_5d9c_9f91);
            d_483b_0000[15][d_5d9c_9f91] = (d_483b_0000[15][d_5d9c_9f91] * 2
                + d_483b_0000[0][d_5d9c_9f91]) / 3;
        }
    }
    for (d_5d9c_9f67 = 0; d_5d9c_9f67 <= 79; d_5d9c_9f67++) {
        f_9100_24d0(5, -1, d_5d9c_9f67 * 10 + 1699, 2489);
        f_1680_0b5b(d_5d9c_9f67);
    }
}

void f_a1c3_59ba(void)
{
    int cnt[3];
    char used[1700];

    memset(used, 0, 1700);
    memset(cnt, 0, 6);
    for (d_5d9c_9d91 = 0; d_5d9c_9d91 <= 1; d_5d9c_9d91++) {
        d_5d9c_9b1f = 0;
        for (d_5d9c_9eb7 = 1; d_5d9c_9eb7 <= 250; d_5d9c_9eb7++) {
            d_5d9c_9c1f = -1;
            do {
                for (d_5d9c_9f91 = 0; d_5d9c_9f91 <= 1699; d_5d9c_9f91++) {
                    if (f_a1c3_238e(d_5d9c_9f91) == d_5d9c_9d91 && used[d_5d9c_9f91] == 0
                        && (d_5d9c_9eb7 < 126 && d_483b_0000[17][d_5d9c_9f91] < 22
                            || d_5d9c_9eb7 > 125 || d_5d9c_9b1f != 0)) {
                        if (d_5d9c_9c1f == -1 || d_483b_0000[0][d_5d9c_9f91] > d_5d9c_9c1d) {
                            d_5d9c_9c1f = d_5d9c_9f91;
                            d_5d9c_9c1d = d_483b_0000[0][d_5d9c_9f91];
                        }
                    }
                }
                if (d_5d9c_9c1f == -1)
                    d_5d9c_9b1f = -1;
            } while (d_5d9c_9c1f <= -1);
            d_5d9c_a006 = f_14d2_16bc(d_5d9c_a342, 1);
            d_5d9c_a006[d_5d9c_9d91][d_5d9c_9eb7 - 1] = d_5d9c_9c1f;
            used[d_5d9c_9c1f] = -1;
        }
    }
    for (d_5d9c_9d91 = 2; d_5d9c_9d91 <= 4; d_5d9c_9d91++)
        for (d_5d9c_9f91 = 0; d_5d9c_9f91 <= 1699; d_5d9c_9f91++)
            if (f_a1c3_238e(d_5d9c_9f91) == d_5d9c_9d91) {
                d_5d9c_a002 = f_14d2_16bc(d_5d9c_a340, 1);
                d_5d9c_a002[d_5d9c_9d91 - 2][cnt[d_5d9c_9d91 - 2]] = d_5d9c_9f91;
                cnt[d_5d9c_9d91 - 2]++;
            }
}

void f_a1c3_5bba(void)
{
    f_9100_243d(2, 0);
    f_9100_243d(3, 0);
    for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= 79; d_5d9c_9f6d++)
        d_2f3c_2794[0][d_5d9c_9f6d] = d_5d9c_9f6d;
    for (d_5d9c_9f6d = 1; d_5d9c_9f6d <= 20; d_5d9c_9f6d++)
        for (d_5d9c_9f61 = 0; d_5d9c_9f61 <= 3; d_5d9c_9f61++) {
            f_9100_24d0(3, -1, d_5d9c_9f6d * 4 + d_5d9c_9f61, 83);
            d_5d9c_9c0d = d_2f3c_2794[0][f_14d2_0c2a(20) + d_5d9c_9f61 * 20];
            d_5d9c_9c0b = d_2f3c_2794[0][f_14d2_0c2a(20) + d_5d9c_9f61 * 20];
            f_1680_0d7a(d_5d9c_9c0d, d_5d9c_9c0b);
        }
}

void f_a1c3_5c9f(int team, char far *title, char far *text)
{
    char buf[180];
    int x, y;

    f_a1c3_27e4("");
    d_5d9c_9bff = 3;
    f_14d2_0722(16);
    f_14d2_075a(40, 84, 288, d_5d9c_9bff * 8 + 104);
    f_14d2_0722(19);
    f_14d2_075a(36, 80, 284, d_5d9c_9bff * 8 + 100);
    d_5d9c_9f7b = d_5739_00a4[team] / 16;
    d_5d9c_9f6b = d_5739_00a4[team] % 16;
    if (d_5d9c_9f6b == 3)
        f_14d2_148f(&d_5d9c_9f7b, &d_5d9c_9f6b, 2);
    f_1680_2867(5.125, 11.5, d_5d9c_9f7b, d_5d9c_9f6b, 240, title);
    sprintf(buf, "%s ", text);
    x = 0;
    y = 104;
    while (f_14d2_09ce(buf, " ") > 0) {
        d_5d9c_9bfd = f_14d2_09ce(buf, " ");
        strncpy(d_1f3e_36ee, buf, d_5d9c_9bfd - 1);
        d_1f3e_36ee[d_5d9c_9bfd - 1] = 0;
        if (x + strlen(d_1f3e_36ee) * 6 > 240) {
            y += 8;
            x = 0;
        }
        f_1680_27aa(x + 49, y, 6, d_1f3e_36ee);
        x += (strlen(d_1f3e_36ee) + 1) * 6;
        strcpy(buf, buf + d_5d9c_9bfd);
    }
    f_a1c3_3505(0);
}

void f_a1c3_5e7a(int player, int team, char buy)
{
    char buf[320];
    int len;

    d_5d9c_9b1d = 0;
    d_5d9c_9b1c = -1;
    f_a1c3_37c7(player);
    f_a1c3_27e4("");
    sprintf(buf, " %s ", f_14d2_0d08(f_a1c3_213c(player)));
    f_1680_2ea0(1.25, 1.125, d_5739_00a4[d_483b_0000[18][player]] / 16, d_5739_00a4[d_483b_0000[18][player]] % 16, 0, buf);
    f_14d2_09c3(1);
    f_14d2_0722(16);
    f_14d2_075a(12, 26, 160, 98);
    f_14d2_075a(166, 26, 312, 98);
    f_14d2_075a(12, 104, 312, 116);
    f_14d2_075a(12, 122, 212, 154);
    f_14d2_075a(218, 122, 312, 178);
    f_14d2_075a(12, 163, 212, 178);
    f_14d2_075a(12, 184, 312, 197);
    f_14d2_0722(19);
    f_14d2_075a(8, 100, 310, 114);
    f_14d2_075a(8, 118, 210, 152);
    f_14d2_075a(214, 118, 310, 176);
    f_14d2_0722(20);
    f_14d2_075a(8, 22, 158, 96);
    f_14d2_075a(162, 22, 310, 96);
    f_14d2_075a(8, 157, 210, 176);
    f_14d2_075a(8, 180, 310, 195);
    f_1680_2867(1.375, 3.75, 1, 12, 0, " AGE        ");
    f_1680_2867(10.625, 3.75, 1, 12, 0, d_1f3e_373e);
    f_1680_2867(1.375, 4.75, 1, 12, 0, " CLUB       ");
    f_1680_2867(10.625, 4.75, 1, 12, 0, d_1f3e_52a6);
    f_1680_2867(1.375, 5.75, 1, 12, 0, " COUNTRY    ");
    f_1680_2867(10.625, 5.75, 1, 12, 0, d_1f3e_35fe);
    f_1680_2867(1.375, 6.75, 1, 12, 0, " CONTRACT   ");
    f_1680_2867(10.625, 6.75, 1, 12, 0, d_1f3e_35ae);
    f_1680_2867(1.375, 7.75, 1, 12, 0, " WAGES      ");
    f_1680_2867(10.625, 7.75, 1, 12, 0, d_1f3e_355e);
    f_1680_2867(1.375, 8.75, 1, 12, 0, " VALUATION  ");
    f_1680_2867(10.625, 8.75, 1, 12, 0, d_1f3e_350e);
    f_1680_2867(1.375, 9.75, 1, 12, 0, " INSURANCE  ");
    f_1680_2867(10.625, 9.75, 1, 12, 0, d_1f3e_34be);
    f_1680_2867(1.375, 10.75, 1, 12, 0, " POSITION   ");
    f_1680_2867(10.625, 10.75, 1, 12, 0, d_1f3e_3e28);
    f_1680_2867(1.375, 11.75, 1, 12, 0, " SIDE       ");
    f_1680_2867(10.625, 11.75, 1, 12, 0, d_1f3e_364e);
    f_1680_2867(20.625, 3.75, 1, 12, 71, " CHARACTER");
    sprintf(buf, " %s", d_1f3e_346e);
    f_1680_2867(29.75, 3.75, 1, 12, 71, buf);
    f_1680_2867(20.625, 4.75, 1, 12, 71, " PASSING");
    sprintf(buf, " %s", d_1f3e_341e);
    f_1680_2867(29.75, 4.75, 1, 12, 71, buf);
    f_1680_2867(20.625, 5.75, 1, 12, 71, " TACKLING");
    sprintf(buf, " %s", d_1f3e_33ce);
    f_1680_2867(29.75, 5.75, 1, 12, 71, buf);
    f_1680_2867(20.625, 6.75, 1, 12, 71, " PACE");
    sprintf(buf, " %s", d_1f3e_337e);
    f_1680_2867(29.75, 6.75, 1, 12, 71, buf);
    f_1680_2867(20.625, 7.75, 1, 12, 71, " HEADING");
    sprintf(buf, " %s", d_1f3e_332e);
    f_1680_2867(29.75, 7.75, 1, 12, 71, buf);
    f_1680_2867(20.625, 8.75, 1, 12, 71, " FLAIR    ");
    sprintf(buf, " %s", d_1f3e_32de);
    f_1680_2867(29.75, 8.75, 1, 12, 71, buf);
    f_1680_2867(20.625, 9.75, 1, 12, 71, " CREATIVITY");
    sprintf(buf, " %s", d_1f3e_328e);
    f_1680_2867(29.75, 9.75, 1, 12, 71, buf);
    f_1680_2867(20.625, 10.75, 1, 12, 71, " STAMINA   ");
    sprintf(buf, " %s", d_1f3e_323e);
    f_1680_2867(29.75, 10.75, 1, 12, 71, buf);
    f_1680_2867(20.625, 11.75, 1, 12, 71, " INFLUENCE");
    sprintf(buf, " %s", d_1f3e_31ee);
    f_1680_2867(29.75, 11.75, 1, 12, 71, buf);
    f_1680_2867(1.375, 13.375, 0, 6, 298, d_1f3e_319e);
    f_1680_2867(-1.0, 14.25, 1, 3, 0, d_1f3e_314e);
    f_1680_2867(1.375, 15.75, 0, 1, 198, "           THIS SEASON");
    f_1680_2867(1.375, 16.75, 0, 6, 0, " APPS   ");
    f_1680_2867(7.625, 16.75, 0, 6, 0, d_1f3e_30fe);
    f_1680_2867(1.375, 17.75, 0, 6, 0, " GOALS  ");
    f_1680_2867(7.625, 17.75, 0, 6, 0, d_1f3e_4120);
    f_1680_2867(1.375, 18.75, 0, 6, 0, " DISP   ");
    f_1680_2867(7.625, 18.75, 0, 6, 0, d_1f3e_4492);
    f_1680_2867(13.875, 16.75, 0, 6, 0, " AV R   ");
    f_1680_2867(20.125, 16.75, 0, 6, 0, d_1f3e_5396);
    f_1680_2867(13.875, 17.75, 0, 6, 0, " MIN R  ");
    f_1680_2867(20.125, 17.75, 0, 6, 0, d_1f3e_30ae);
    f_1680_2867(13.875, 18.75, 0, 6, 0, " MAX R  ");
    f_1680_2867(20.125, 18.75, 0, 6, 0, d_1f3e_305e);
    f_1680_2867(27.125, 15.75, 0, 1, 90, "  LAST SEASON");
    f_1680_2867(37.875, 15.75, 0, 1, 0, " ");
    f_1680_2867(27.125, 16.75, 0, 6, 0, " APPS   ");
    f_1680_2867(33.375, 16.75, 0, 6, 0, d_1f3e_300e);
    f_1680_2867(27.125, 17.75, 0, 6, 0, " GOALS  ");
    f_1680_2867(33.375, 17.75, 0, 6, 0, d_1f3e_2fbe);
    f_1680_2867(27.125, 18.75, 0, 6, 0, " DISP   ");
    f_1680_2867(33.375, 18.75, 0, 6, 0, d_1f3e_2f6e);
    f_1680_2867(27.125, 19.75, 0, 6, 0, " AV R   ");
    f_1680_2867(33.375, 19.75, 0, 6, 0, d_1f3e_2f1e);
    f_1680_2867(27.125, 20.75, 0, 6, 0, " MIN R  ");
    f_1680_2867(33.375, 20.75, 0, 6, 0, d_1f3e_2ece);
    f_1680_2867(27.125, 21.75, 0, 6, 0, " MAX R  ");
    f_1680_2867(33.375, 21.75, 0, 6, 0, d_1f3e_2dde);
    f_1680_2867(1.375, 20.625, 1, 2, 198, "              MORALE");
    len = strlen(d_1f3e_2e7e);
    sprintf(buf, "%*s", (100 - len * 3) / 6 + len, d_1f3e_2e7e);
    f_1680_2867(1.375, 21.625, 5, 4, 198, buf);
    f_a1c3_48ad();
    if (d_1f3e_2e2e[0] != 0)
        f_a1c3_49a5();
    f_a1c3_2d08(2, 35.5, 1.125, 1, 2, 24, "HST");
    if (buy != 0 && d_5d9c_9b8d == 0) {
        f_a1c3_2d08(2, 24.625, 1.125, 1, 3, 24, "STA");
        f_a1c3_2d08(2, 28.25, 1.125, 1, 3, 24, "BUY");
        f_a1c3_2d08(2, 31.875, 1.125, 1, 3, 24, "ADD");
        if (f_1680_0003(d_483b_0000[18][player]) == 0)
            f_a1c3_34c6(2);
        if (d_5d9c_9b7d != 0) {
            f_a1c3_34c6(2);
            f_a1c3_34c6(3);
        }
    }
    d_5d9c_9b88 = 0;
    d_5d9c_9f57 = 0;
    d_5d9c_9b1b = -1;
    d_5d9c_9bf7 = f_a1c3_3298(0);
    d_5d9c_9b1b = 0;
    if (d_5d9c_9bf7 == 0)
        d_5d9c_9b88 = -1;
    else if (d_5d9c_9bf7 == 1)
        f_a1c3_7462(player);
    else if (d_5d9c_9bf7 == 2)
        d_5d9c_9f57 = -1;
    else if (d_5d9c_9bf7 == 3 || d_5d9c_9bf7 == 4) {
        d_5d9c_9b9f = -1;
        if (team > -1)
            d_5d9c_9b9f = team;
        else if (d_5d9c_9ef1 == 2) {
            f_1680_2040(0);
            sprintf(buf, "%.3s", d_1f3e_369e);
            d_5d9c_9e7d = atol(buf);
            d_5d9c_9e7b = atol(f_14d2_0d75(d_1f3e_369e, 3));
            if (d_483b_0000[18][player] == d_2f3c_5167[d_5d9c_9e7d])
                d_5d9c_9b9f = d_2f3c_5167[d_5d9c_9e7b];
            else if (d_483b_0000[18][player] == d_2f3c_5167[d_5d9c_9e7b])
                d_5d9c_9b9f = d_2f3c_5167[d_5d9c_9e7d];
        }
        if (d_5d9c_9b9f == -1) {
            f_1680_1f06(0);
            if (d_5d9c_9bcb > -1)
                d_5d9c_9b9f = d_2f3c_5167[d_5d9c_9bcb];
        }
        if (d_5d9c_9b9f > -1) {
            if (d_5d9c_9bf7 == 3 && d_5739_01ec[d_5d9c_9b9f] < 30)
                f_88c9_24f1("The board refuse any transfers");
            else if (d_483b_0000[18][player] == d_5d9c_9b9f) {
                sprintf(buf, "You already own %s", f_a1c3_2243(player));
                f_88c9_24f1(buf);
            } else if (d_5d9c_9bf7 == 3 && f_1680_0276(d_5d9c_9fab))
                f_88c9_24f1("Transfer deadline has passed");
            else if (d_5d9c_9bf7 == 3 && d_5739_06ba[d_5d9c_9b9f] > 3)
                f_88c9_24f1("Not enough time");
            else if (d_5d9c_9bf7 == 3 && f_1680_0003(d_483b_0000[18][player]) && d_1f3e_97be[player] != 0) {
                sprintf(buf, "%s not for sale", f_a1c3_2243(player));
                f_88c9_24f1(buf);
            } else if (d_5d9c_9bf7 == 3 && d_5739_023e[d_5d9c_9b9f] == 26)
                f_88c9_24f1("Maximum squad size is 26");
            else if (d_5d9c_9bf7 == 3 && f_1680_031f(player)) {
                sprintf(buf, "%s have too few players", (char far *)d_5d9c_08bc[d_483b_0000[18][player]]);
                f_88c9_24f1(buf);
            } else if (d_5d9c_9bf7 == 4 && d_2f3c_1d94[d_5d9c_9b9f][0] == 15)
                f_88c9_24f1("shortlist is full");
            else if (d_5d9c_9bf7 == 3)
                d_5d9c_9f57 = d_5d9c_9b9f + 1;
            else if (d_5d9c_9bf7 == 4) {
                d_5d9c_9f57 = -d_5d9c_9b9f - 2;
                if (f_8352_182c(d_5d9c_9b9f, player) > 0) {
                    d_5d9c_9f57 = 0;
                    sprintf(buf, "%s already shortlisted", f_a1c3_2243(player));
                    f_88c9_24f1(buf);
                }
            }
        }
    }
}

void f_a1c3_7462(int p)
{
    FILE *fp;

    fp = fopen("history", "rb+");
    fseek(fp, (long)p * 133, 0);
    fread(d_1f3e_3c20, 1, 133, fp);
    fclose(fp);
    d_5d9c_9ca7 = (int)d_3e42_0000[20][p];
    if (d_5d9c_9ca7 < 17) {
        f_a1c3_0000(p, 0);
        f_a1c3_2d08(2, 1.25, 22.5, 1, 4, 0x12d, "                 EXIT");
        do
            d_5d9c_9faf = f_a1c3_3298(d_5d9c_9f63);
        while (d_5d9c_9faf <= 0);
    } else {
        d_5d9c_9bef = 0;
        do {
            f_a1c3_0000(p, d_5d9c_9bef);
            f_a1c3_2d08(2, 1.25, 22.5, 1, 12, 0x49, "   MORE");
            f_a1c3_2d08(2, 11.0, 22.5, 1, 4, 0xdf, "            EXIT");
            do
                d_5d9c_9faf = f_a1c3_3298(d_5d9c_9f63);
            while (d_5d9c_9faf <= 0);
            if (d_5d9c_9faf == 1)
                d_5d9c_9bef = 1 - d_5d9c_9bef;
        } while (d_5d9c_9faf != 2);
    }
}
