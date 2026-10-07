/* @at 7a45:0000 */
/* @data 61eb:1fc4 */
/* @module */

/* Overlay 7a45 (CM94's 829F.C, CM93's 7C74.C, CM1's 7555.C, the first CM Italia's 76EA.C):
 * the match: setting it up and restoring the teams afterwards, the ground and the gate, the
 * halves, extra time and penalties, the clock and the score, keys during play, fouls,
 * injuries, bookings and sendings off with their commentary, tactical moves and
 * substitutions. Its data is the formations' shirt numbers and the commentary's 28 fouls
 * (the first Italia's list), then its literal pool. */
#include <stdio.h>
#include <string.h>
#include <mem.h>
#include <math.h>

/* the functions, in the reverse order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_7a45_0000(char far *s);
void f_7a45_0099(int team);
void f_7a45_00ba(void);
void f_7a45_06aa(char flag, char far *s);
void f_7a45_07d9(void);
void f_7a45_0986(void);
void f_7a45_0aa0(void);
void f_7a45_10dd(void);
void f_7a45_1327(void);
void f_7a45_1b3a(void);
void f_7a45_1c37(int team);
void f_7a45_1ec1(void);
char f_7a45_21c4(int club, int round);
char f_7a45_21f6(int club, int round);
void f_7a45_220c(int a, int b, int c);
void f_7a45_2388(void);
void f_7a45_24c4(void);
void f_7a45_25a1(void);
void f_7a45_267e(void);
void f_7a45_26f0(void);
void f_7a45_2762(void);
void f_7a45_2920(void);
unsigned char f_7a45_2ae1(unsigned char a, int b);
unsigned char f_7a45_2b1c(unsigned char a, int b);
void f_7a45_2b57(void);
void f_7a45_2e3e(void);
void f_7a45_2f1a(int team);
void f_7a45_2fe1(int team);
void f_7a45_306a(int team);
int f_7a45_30ad(int team, int p);
void f_7a45_326b(int team);
void f_7a45_37b9(int a, int b, int team, int n);
void f_7a45_3d1b(int team, int p);
void f_7a45_41ad(void);
void f_7a45_420a(int team, char c);
void f_7a45_4357();             /* no prototype: 38b3 passes it two arguments */
void f_7a45_4837(int team);
void f_7a45_4961(float x, float y);
void f_7a45_49a7(void);

void f_1a83_3c08(float x, float y, int a, int b, int c, char far *s);
void f_1a83_3450(float x, float y, int bg, int fg, int w, char far *s);
void f_1a83_3347(int x, int y, int colour, char far *s);
void f_215d_0df0(int ticks);
void f_1a83_5117(int a, char b);
char f_1a83_2ad4(int x);
long f_215d_0d96(long n);
char far *f_215d_0155();
char far *f_215d_0f63(char far *s, unsigned n);
void f_215d_118b(unsigned x, int y, unsigned x2, unsigned y2, int dy, int colour);
void f_215d_1016(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_215d_088c();
void f_215d_089b();
void f_215d_08aa(int x1, int y1, int x2, int y2);
void f_1a83_48f9(char far *title);
char far *f_1a83_4876(int division, char full);
int f_1a83_66e8(int x);
char f_1a83_2387(int);
char f_1a83_280b(int, int);
char f_1a83_2644(int, int);
char f_1a83_26ed(int, int);
char f_1a83_277e(int, int);
char f_1a83_2962(int a, int b);
void f_1a83_5540(int a);
void f_7f4a_2d1a(void);
void f_7f4a_3a06(int a, int b, char c);
void f_7f4a_2ba1(int team);
void f_b26d_0cf8(int team);
void f_ab30_53ed(int team);
void f_8402_00b2(void);
void f_8402_0000(void);
extern int d_61eb_d59e;
extern int d_61eb_d684;
extern char near *d_61eb_b0ec[];
extern char near *d_61eb_b13c[];
extern int d_61eb_d5b6;
extern int d_61eb_d6bc;
extern char d_61eb_d9d5;
extern int d_61eb_d5a2;
extern int d_61eb_d6be;
extern int d_61eb_d658;
extern int d_61eb_d6c0;
extern int d_61eb_d6c2;
extern int d_61eb_d6c4;
extern int d_61eb_d5c2;
extern int d_61eb_d668;
extern int d_61eb_d6b4;
extern int d_61eb_d6b6;
extern int d_61eb_d6c6;
extern char d_61eb_d9e3;
extern int d_61eb_d6c8;
extern int d_61eb_d6ca;
extern int d_61eb_d5a4;
extern int d_61eb_d6cc;
extern int d_61eb_d5f0;
extern char d_61eb_d9e4;
extern int d_61eb_d6ce;
extern int d_61eb_d6d0;
extern int d_61eb_d6d2;
extern int d_61eb_d6d4;
extern char d_61eb_d9e5;
extern int d_61eb_d6d6;
extern int d_61eb_d6d8;
extern int d_61eb_d6da;
extern int d_61eb_d6dc;
extern int d_61eb_d6de;
extern int far d_53fc_138c[][2][100];
struct score { unsigned home1 : 4; unsigned away1 : 4; unsigned home2 : 4; unsigned away2 : 4; };
extern char far d_432e_ca17[];
extern char far d_432e_c8d7[];
extern char far d_432e_ca67[];
char f_1a83_28a0(int);
char f_1a83_2901(int);
int f_1a83_2a42(int, int);
int f_1a83_440f(int team);
float f_215d_10c4(void);
int f_215d_1343(int a, int b);
int f_215d_13af(int a, int b);
float f_215d_1385(float a, float b);
long f_215d_135c(long a, long b);
void f_9f8d_0ea8(int t, int k, char c);
void f_75a4_2bd7(int team);
int f_75a4_23bf(int week, int n);
void f_8402_1543(int team, int b, int c);
extern char near *d_61eb_b140[];
extern char near *d_61eb_b138;
extern char near *d_61eb_b13a;
extern int d_61eb_d654;
extern int d_61eb_d5d8;
extern int d_61eb_d6e0;
extern int d_61eb_d6e2;
extern int d_61eb_d6e4;
extern int d_61eb_d6f0;
extern int d_61eb_d6f4;
extern long d_61eb_db21;
extern float d_61eb_da7d;
extern float d_61eb_da81;
extern unsigned char d_61eb_d9b1;
extern int d_61eb_d5e4;
extern float d_61eb_da85;
extern float d_61eb_da89;
extern float d_61eb_da8d;
extern float d_61eb_da91;
extern unsigned char far d_3334_bf6a[];
extern int d_61eb_d6e6;
extern int d_61eb_d6e8;
extern int d_61eb_d6ea;
extern int d_61eb_d6ec;
extern int d_61eb_d6ee;
extern int d_61eb_d6f2;
extern int d_61eb_d680;
extern int d_61eb_d608;
extern int d_61eb_d6f6;
extern int d_61eb_d6f8;
extern int d_61eb_d6fa;
extern int d_61eb_d6fc;
extern int d_61eb_d6fe;
extern int d_61eb_d700;
extern int d_61eb_d702;
extern int d_61eb_d704;
extern int d_61eb_d70c;
extern int d_61eb_d70e;
extern int d_61eb_d706;
extern int d_61eb_d69e;
extern int d_61eb_d708;
extern int d_61eb_d70a;
extern int d_61eb_d66e;
extern int d_61eb_d670;
extern int d_61eb_d66c;
extern char d_61eb_d9e6;
extern char d_61eb_d9cc;
extern char d_61eb_d9e7;
extern char d_61eb_d9e8;
extern int d_61eb_d710;
extern int d_61eb_d712;
extern int d_61eb_d714;
extern int d_61eb_d716;
extern int d_61eb_d718;
extern int d_61eb_d71a;
char f_1a83_5a4c(int player);
void f_ab30_5396(int team, int week, char round);
void f_b26d_3f53(int player, char c);
extern unsigned char far d_53fc_778e[][140];
extern unsigned char far d_53fc_0f7c[];
extern unsigned char far d_53fc_099a[];
extern unsigned char far d_53fc_1172[];
extern int far d_3334_ca6e[];
extern unsigned char far d_3334_d90a[];
extern unsigned char d_61eb_d9bd;
extern unsigned char d_61eb_d9be;
extern char d_61eb_d9d6;
extern int d_61eb_d5aa;
extern unsigned char far d_3334_f278[][3][16];
unsigned char f_ab30_2397(int player);
void f_7f4a_142c(int team);
void f_7f4a_193a(int team);
void f_7f4a_0714(char c);
void f_215d_0c46(void);
void f_7f4a_0a9c(int team, char far *s);
void f_7f4a_0d6a(void);
extern int d_61eb_d71c;
extern int d_61eb_d71e;
extern int d_61eb_d5b8;
extern int d_61eb_d720;
extern int d_61eb_d722;
extern char d_61eb_d9f7;
extern int d_61eb_d724;
extern int d_61eb_d726;
extern int d_61eb_d728;
extern int d_61eb_d72a;
extern int d_61eb_d66a;
extern int d_61eb_d5e0;
extern char d_61eb_d9e9;
extern unsigned char far d_3334_bc2a[][16];
extern unsigned char far d_53fc_0b90[];
extern unsigned char far d_53fc_0d86[];
char far *f_1a83_2d52(int x, char c);
char far *f_1a83_462c(int player);
extern int d_61eb_d5f4;
void f_7f4a_09cd(void);
void f_7f4a_01cc(int team);
void f_215d_07ec(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
extern int d_61eb_d630;
extern int d_61eb_d72e;
extern int d_61eb_d72c;
extern int d_61eb_d730;
extern char d_61eb_d9b2;
extern int d_61eb_d732;
extern int d_61eb_d736;
extern int d_61eb_d738;
extern int d_61eb_d73a;
extern int d_61eb_d73c;
extern int d_61eb_d73e;
extern int d_61eb_d740;
extern int d_61eb_d742;
extern int d_61eb_d744;
extern char d_61eb_da46;
extern int d_61eb_d994;
extern int d_61eb_d996;
extern int d_61eb_d5f6;
extern int d_61eb_d746;
extern int d_61eb_d748;
extern int d_61eb_d74a;
extern int d_61eb_d74c;
extern int d_61eb_d74e;
extern int d_61eb_d750;
extern char d_61eb_d9ea;
extern char d_61eb_d9ec;
extern char d_61eb_d9eb;
extern char d_61eb_d9d7;
void f_ab30_3798(char team);
void f_ab30_32c7(char team);
void f_ab30_3b31(char team);
void f_ab30_3187(char team);
void f_ab30_34cb(char team);
unsigned char f_ab30_3c47(char team);
int f_215d_0c20(void);
char far *f_215d_0d0f(void);
char f_1a83_633a(int a, int b);
char f_1a83_64cf(int x);
char f_1a83_64f5(int x);
char f_1a83_6516(int x);
char f_1a83_6537(int x);
char f_1a83_655d(int x);
char f_1a83_6583(int x);
void f_7f4a_0143(int minute);
unsigned char f_7f4a_1525(int p, int team);
extern int d_61eb_d752;
extern int d_61eb_d754;
extern int d_61eb_d756;
extern int d_61eb_d758;
extern char d_61eb_d9ed;
extern char d_61eb_d9f1;
extern char d_61eb_d9ef;
extern char d_61eb_d9f4;
extern char d_61eb_d9f5;
extern char d_61eb_d9f6;
extern char d_61eb_d9f8;
extern char d_61eb_d9b3;
extern int d_61eb_d674;
extern int d_61eb_d75a;
extern int d_61eb_d75c;
extern int d_61eb_d68c;
extern int d_61eb_d62a;
extern int d_61eb_d63e;
extern int d_61eb_d75e;
extern int d_61eb_d760;
extern int d_61eb_d762;
extern int d_61eb_d764;
extern int d_61eb_d766;
extern int d_61eb_d768;
extern int d_61eb_d5e6;
void f_b6f6_0000(char team);
void f_1a83_3a43(float x, float y, int colour, char far *s);
void f_1a83_4327(float x, float y, int team);
void f_1a83_2da6(int n, char far *title, char far *items);
void f_1a83_3122(int last);
extern char d_61eb_d9de;
extern int d_61eb_d774;
extern int d_61eb_d772;
extern int d_61eb_d76c;
extern int d_61eb_d76a;
extern int d_61eb_d5de;
void f_7f4a_0000(int a, int b, int c, int d);
char far *f_1a83_45b4(int player);
void f_1a83_3697(float x, float y, int colour, char far *s);
extern int d_61eb_d77c;
extern int d_61eb_d77a;
extern int d_61eb_d778;
extern int d_61eb_d776;
char f_1a83_5d3d(char team, char week, char n);
extern int far d_432e_1f1e[];
extern int far d_28d4_106a[];
extern int far d_28d4_1132[];
extern char far d_432e_c927[];
extern char far d_432e_c977[];
extern char far d_432e_c9c7[];
extern char d_61eb_dba2;
void f_b26d_0c04(int team);
extern unsigned char far d_53fc_09c0[];
extern int far d_3334_f9f8[][16];
extern unsigned char far d_28d4_1958[][1500];
extern long far d_432e_0f1e[][16];
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
extern struct flags_w far d_432e_45de[];
extern int far d_28d4_081c[][26];
extern char far d_432e_cb07[];
extern char far d_432e_cb57[];
extern char far d_28d4_1398[];
extern unsigned char far d_3334_bb8a[][3][16];
void f_7f4a_0283(void);
extern char far d_432e_cba7[];
extern char far d_432e_cc47[];
extern char far d_432e_cc97[];
void f_7f4a_02ed(int a, char c, char d, char e, int b, int team);
extern unsigned char far d_3334_bc4a[][60];
extern unsigned char far d_3334_bcfe[][60];
extern char far d_432e_cceb[];
extern char far d_432e_cd3b[];
void f_7f4a_0b12(void);
extern char far d_432e_cd8b[];
extern char far d_432e_cddb[];
extern char far d_432e_d0ab[];
extern char far d_432e_cf6b[];
extern char far d_432e_cf1b[];
extern char far d_432e_bc57[];
extern char far d_432e_bc07[];
extern int d_61eb_d666;
extern int d_61eb_d59a;
extern int d_61eb_d59c;
char f_1a83_2448(int);
char f_1a83_247b(int);
char f_1a83_29a3(int);
unsigned char f_1a83_6d8b(unsigned char team);
extern char far d_432e_8877[];
extern struct score far d_432e_87c8[];
extern int far d_3334_c8f2[][38];
extern char far d_432e_b73b[][38];
extern unsigned char far d_3334_bdb2[][40];
extern unsigned char far d_3334_bea2[];
extern unsigned char far d_3334_c73a[];
extern long far d_3334_ce4a[];
extern unsigned char far d_3334_fefe[][16];
extern unsigned char far d_3334_ff5e[][16];
extern int far d_3334_fef8[];
extern unsigned char far d_3334_beca[];
extern unsigned char far d_3334_bef2[];
extern unsigned char far d_3334_bf1a[];
extern unsigned char far d_3334_be02[];
extern unsigned char far d_3334_be2a[];
extern char d_61eb_d9ee;
extern char d_61eb_d9f0;
extern char d_61eb_d9f2;
extern char d_61eb_d9f3;
extern int d_61eb_d76e;
extern int d_61eb_d770;
extern unsigned char far d_3334_ff09[][16];
extern unsigned char far d_3334_ff7e[][16];
extern unsigned char far d_28d4_194e[][5];
extern unsigned char far d_3334_bb80[][5];


/* the module's initialised tables (1fc4-2047) are defined in tables.c */
void f_7a45_0000(char far *s)
{
    char buf[80];

    sprintf(buf, "%*s", (72 - strlen(s) * 4) / 8 + strlen(s), s);
    f_1a83_3c08(1.5, 21.875, 1, 2, 0x90, buf);
    f_215d_0df0(75);
    f_1a83_3c08(1.5, 21.875, 1, 4, 0x90, "       DONE");
    f_1a83_5117(d_61eb_d59e, 0);
}

void f_7a45_0099(int team)
{
    if (team > 0) {
        f_1a83_5117(team, 0);
        d_61eb_d684 = 0;
    }
}

/* the week's matches, played in the background, with the latest results on screen */
void f_7a45_00ba(void)
{
    unsigned n;
    char buf[80];

    for (d_61eb_d5b6 = 0; d_61eb_d5b6 < 64; d_61eb_d5b6++)
        d_432e_1f1e[d_61eb_d5b6] = 0;
    n = d_61eb_d5b6 = 0;
    d_61eb_d6bc = -1;
    d_61eb_d9d5 = -1;
    d_28d4_106a[d_61eb_d5a2] = d_61eb_d6be;
    d_28d4_1132[d_61eb_d5a2] = d_61eb_d658;
    f_7a45_07d9();
    d_61eb_d6c0 = 1;
    d_61eb_d6c2 = (d_61eb_d5a2 & 1 ? 910 : 440) + f_215d_0d96(3);
    if (f_1a83_2387(d_61eb_d5a2) || f_1a83_2448(d_61eb_d5a2))
        d_61eb_d6c2 += 5;
    for (d_61eb_d6c4 = 0; d_61eb_d6c4 <= d_61eb_d658 - 1; d_61eb_d6c4++) {
        d_61eb_d5c2 = d_432e_c8d7[d_61eb_d6c4] - 32;
        d_61eb_d666 = d_53fc_138c[d_61eb_d5c2][0][d_61eb_d5a2] / 32;
        d_61eb_d668 = d_53fc_138c[d_61eb_d5c2][1][d_61eb_d5a2] / 32;
        d_61eb_d6b4 = d_61eb_d666;
        d_61eb_d6b6 = d_61eb_d668;
        f_7a45_10dd();
        f_7a45_1327();
        f_7a45_0986();
        f_7a45_0aa0();
        f_7a45_1ec1();
        f_7a45_1b3a();
        d_61eb_d9e3 = d_61eb_d6c6 > 90 ? -1 : 0;
        d_61eb_d6c6 = -1;
        f_7f4a_2d1a();
        if (d_61eb_d6c8 + d_61eb_d6ca > 0) {
            f_1a83_5540(0);
            f_7f4a_3a06(d_61eb_d6b4, d_61eb_d6b6, -1);
        }
        if (d_61eb_d666 < 38)
            f_7f4a_2ba1(d_61eb_d666);
        if (d_61eb_d668 < 38)
            f_7f4a_2ba1(d_61eb_d668);
        memcpy(d_432e_8877 + d_61eb_d5c2 * 175, d_432e_87c8, 175);
        if (d_61eb_d666 < 38) {
            d_3334_c8f2[0][d_61eb_d666] = d_61eb_d6be + d_61eb_d5c2;
            d_3334_c8f2[1][d_61eb_d666] = d_61eb_d5c2;
            d_3334_c8f2[2][d_61eb_d666] = d_61eb_d5a2 - 1;
            d_432e_b73b[0][d_61eb_d666] = -1;
            f_b26d_0cf8(d_61eb_d666);
            f_ab30_53ed(d_61eb_d666);
        }
        if (d_61eb_d668 < 38) {
            d_3334_c8f2[0][d_61eb_d668] = d_61eb_d6be + d_61eb_d5c2;
            d_3334_c8f2[1][d_61eb_d668] = d_61eb_d5c2;
            d_3334_c8f2[2][d_61eb_d668] = d_61eb_d5a2 - 1;
            d_432e_b73b[0][d_61eb_d668] = -1;
            f_b26d_0cf8(d_61eb_d668);
            f_ab30_53ed(d_61eb_d668);
        }
        f_8402_00b2();
        if (d_61eb_dba2 == 1 && d_61eb_d6c8 + d_61eb_d6ca == 0 && d_61eb_d9e3 == 0
            && (f_215d_0d96(3) > 0 || d_61eb_d6c4 == 0
                || f_1a83_2387(d_61eb_d5a2) && f_1a83_6d8b(d_61eb_d666) == 0)
            && d_61eb_d658 > 3 && n < 12) {
            if (d_61eb_d5a2 % 2 == 0)
                strcpy(d_432e_c927, "Today's");
            else
                strcpy(d_432e_c927, "Tonights");
            strcpy(buf, d_432e_c977);
            if (f_1a83_2387(d_61eb_d5a2) || f_1a83_2448(d_61eb_d5a2))
                sprintf(d_432e_c977, "%s  %s", f_1a83_4876(f_1a83_6d8b(d_61eb_d666) + 1, 2), buf);
            else if (f_1a83_247b(d_61eb_d5a2))
                sprintf(d_432e_c977, "CUP  %s", buf);
            else if (f_1a83_280b(d_61eb_d5a2, d_61eb_d5c2 + 1))
                sprintf(d_432e_c977, "AI  %s", buf);
            else if (f_1a83_2644(d_61eb_d5a2, d_61eb_d5c2 + 1))
                sprintf(d_432e_c977, "UE  %s", buf);
            else if (f_1a83_26ed(d_61eb_d5a2, d_61eb_d5c2 + 1))
                sprintf(d_432e_c977, "CW  %s", buf);
            else if (f_1a83_277e(d_61eb_d5a2, d_61eb_d5c2 + 1))
                sprintf(d_432e_c977, "EC  %s", buf);
            else if (f_1a83_29a3(d_61eb_d5a2))
                sprintf(d_432e_c977, "PL  %s", buf);
            else if (d_61eb_d5a2 <= 12)
                sprintf(d_432e_c977, "FR  %s", buf);
            strcat(d_432e_c927, " Result");
            if (d_61eb_d658 > 1)
                strcat(d_432e_c927, "s");
            if (d_61eb_d6c0 == 1) {
                f_1a83_48f9("");
                f_215d_088c(16);
                f_215d_08aa(20, 20, 308, 188);
                f_215d_088c(20);
                f_215d_08aa(16, 16, 304, 184);
                f_1a83_3c08(2.5, 3.0, 1, 8, 0x119, "           Latest Results");
                f_7a45_06aa(1, d_432e_c927);
                sprintf(buf, "Week %d Season %d", f_1a83_66e8(d_61eb_d5a2), d_61eb_d5a4);
                f_7a45_06aa(0, buf);
            }
            if (d_61eb_d6c0 == 3 || f_215d_0d96(3) == 0) {
                if (d_61eb_d6c0 > 1)
                    f_7a45_06aa(0, "");
                sprintf(d_432e_c9c7, "%d", d_61eb_d6c2);
                sprintf(buf, "%c.%s", d_432e_c9c7[0], f_215d_0f63(d_432e_c9c7, 2));
                f_7a45_06aa(1, buf);
                d_61eb_d6c2++;
            }
            f_7a45_06aa(0, d_432e_c977);
            n++;
        }
    }
    if (d_61eb_d6c0 > 1) {
        f_7a45_06aa(0, "");
        f_7a45_06aa(0, "");
        f_7a45_06aa(0, "Classified Check Follows");
    }
    f_8402_0000();
    d_61eb_d6be += d_61eb_d658;
    d_61eb_d9d5 = 0;
}

void f_7a45_06aa(char flag, char far *s)
{
    char buf[320];

    if (d_61eb_d6c0 == 17) {
        for (d_61eb_d6cc = 1; d_61eb_d6cc <= 4; d_61eb_d6cc++) {
            f_215d_118b(16, 38, 304, 183, 2, 20);
            f_215d_089b(20);
            f_215d_1016(18, 38, 302, 38);
            f_215d_1016(18, 39, 302, 39);
        }
        d_61eb_d6c0 = 16;
    }
    if (strlen(s) != 0) {
        if (flag)
            f_1a83_3450(3.0, d_61eb_d6c0 + 4.875, 1, 2, 0, s);
        else
            for (d_61eb_d5f0 = 1; d_61eb_d5f0 <= strlen(s); d_61eb_d5f0++) {
                sprintf(buf, "%c", s[d_61eb_d5f0 - 1]);
                f_1a83_3347((d_61eb_d5f0 - 1) * 6 + 32, d_61eb_d6c0 * 8 + 39, 1, buf);
                f_215d_0df0(1);
            }
    }
    d_61eb_d6c0++;
}

void f_7a45_07d9(void)
{
    char buf[320];

    strcpy(d_432e_ca17, "");
    strcpy(d_432e_c8d7, "");
    for (d_61eb_d5c2 = 0; d_61eb_d5c2 <= d_61eb_d658 - 1; d_61eb_d5c2++) {
        d_61eb_d666 = d_53fc_138c[d_61eb_d5c2][0][d_61eb_d5a2] / 32;
        d_61eb_d668 = d_53fc_138c[d_61eb_d5c2][1][d_61eb_d5a2] / 32;
        d_61eb_d9e4 = f_1a83_2ad4(d_61eb_d666);
        if (d_61eb_d9e4 == 0)
            d_61eb_d9e4 = f_1a83_2ad4(d_61eb_d668);
        if (d_61eb_d9e4)
            strcat(d_432e_ca17, f_215d_0155(d_61eb_d5c2 + 32));
        else
            strcat(d_432e_c8d7, f_215d_0155(d_61eb_d5c2 + 32));
    }
    for (d_61eb_d5c2 = 0; d_61eb_d5c2 <= d_61eb_d658 - 1; d_61eb_d5c2++) {
        d_61eb_d6ce = f_215d_0d96(strlen(d_432e_c8d7));
        d_61eb_d6d0 = f_215d_0d96(strlen(d_432e_c8d7));
        d_61eb_d6d2 = d_432e_c8d7[d_61eb_d6ce];
        d_61eb_d6d4 = d_432e_c8d7[d_61eb_d6d0];
        d_432e_c8d7[d_61eb_d6ce] = d_61eb_d6d4;
        d_432e_c8d7[d_61eb_d6d0] = d_61eb_d6d2;
    }
    strcpy(buf, d_432e_c8d7);
    sprintf(d_432e_c8d7, "%s%s", d_432e_ca17, buf);
}

void f_7a45_0986(void)
{
    d_61eb_d9e5 = 0;
    if (d_61eb_d5a2 == 75) {
        strcpy(d_432e_ca67, "WEMBLEY");
        d_61eb_d6d6 = 2;
        d_61eb_d6d8 = 2;
    } else if (d_61eb_d5a2 == 89) {
        strcpy(d_432e_ca67, "ROTTERDAM");
        d_61eb_d6d6 = 2;
        d_61eb_d6d8 = 2;
    } else if (d_61eb_d5a2 == 93) {
        strcpy(d_432e_ca67, "MILAN");
        d_61eb_d6d6 = 2;
        d_61eb_d6d8 = 2;
    } else if (f_1a83_2962(d_61eb_d5a2, d_61eb_d5c2 + 1)) {
        d_61eb_d6dc = 0;
        for (d_61eb_d6de = 0; d_61eb_d6de <= 37; d_61eb_d6de++)
            if (d_3334_bdb2[1][d_61eb_d6de] > d_61eb_d6dc && d_61eb_d6de != d_61eb_d666
                && d_61eb_d6de != d_61eb_d668 && d_61eb_d6de != d_61eb_d6bc) {
                d_61eb_d6dc = d_3334_bdb2[1][d_61eb_d6de];
                d_61eb_d6da = d_61eb_d6de;
            }
        d_61eb_d6bc = d_61eb_d6da;
        strcpy(d_432e_ca67, d_61eb_b13c[d_61eb_d6da]);
        d_61eb_d6d6 = 2;
        d_61eb_d6d8 = 2;
    } else {
        d_61eb_d6da = d_61eb_d666;
        if (d_61eb_d6da < 38)
            strcpy(d_432e_ca67, d_61eb_b13c[d_61eb_d6da]);
        else
            strcpy(d_432e_ca67, d_61eb_b0ec[d_61eb_d6da]);
        d_61eb_d6d6 = 3;
        d_61eb_d6d8 = 1;
        d_61eb_d9e5 = -1;
    }
}

void f_7a45_0aa0(void)
{
    d_61eb_d6e0 = 0;
    if (strstr(d_432e_ca67, "MILAN") || strstr(d_432e_ca67, "ROTTERDAM")) {
        d_61eb_db21 = (80 - f_215d_10c4()) * 1000.0;
        return;
    }
    if (d_61eb_d5a2 == 71 || d_61eb_d5a2 == 77) {
        d_61eb_db21 = (d_3334_bdb2[1][d_61eb_d6da] - f_215d_10c4()) * 1000.0;
        return;
    }
    if ((d_61eb_d6b4 < 38 || d_61eb_d6b4 >= 438) && (d_61eb_d6b6 < 38 || d_61eb_d6b6 >= 438)
        && d_61eb_d5a2 > 12) {
        long dx, dy;

        d_61eb_d654 = d_61eb_d6b4 - (d_61eb_d6b4 >= 438 ? 400 : 0);
        d_61eb_d5d8 = d_61eb_d6b6 - (d_61eb_d6b6 >= 438 ? 400 : 0);
        if (d_53fc_778e[0][d_61eb_d654] > 0 && d_53fc_778e[0][d_61eb_d5d8] > 0) {
            dx = d_53fc_778e[0][d_61eb_d654] - d_53fc_778e[0][d_61eb_d5d8];
            dy = d_53fc_778e[1][d_61eb_d654] - d_53fc_778e[1][d_61eb_d5d8];
            d_61eb_d6e0 = 30.0 - sqrt(dx * dx + dy * dy) * 0.857;
        }
    }
    d_61eb_d6e2 = d_61eb_d6e0 > 0 ? d_61eb_d6e0 : 0;
    d_61eb_d6e4 = d_61eb_d6e0;
    if (f_1a83_2387(d_61eb_d5a2) || f_1a83_2448(d_61eb_d5a2)) {
        if (d_3334_bf6a[d_61eb_d666] > 1)
            d_61eb_d6e2 += f_1a83_2a42(d_61eb_d6f0, f_1a83_6d8b(d_61eb_d666) == 0 ? d_61eb_d59a : d_61eb_d59c);
        if (d_3334_bf6a[d_61eb_d668] > 1)
            d_61eb_d6e4 += f_1a83_2a42(d_61eb_d6f4, f_1a83_6d8b(d_61eb_d666) == 0 ? d_61eb_d59a : d_61eb_d59c);
    }
    d_61eb_da7d = 0.875;
    d_61eb_da81 = 0.125;
    if (f_1a83_2387(d_61eb_d5a2) || f_1a83_2448(d_61eb_d5a2))
        d_61eb_d9b1 = 70 - f_1a83_6d8b(d_61eb_d666) * 6;
    else if (f_1a83_247b(d_61eb_d5a2)) {
        if (d_61eb_d5a2 <= 33)
            d_61eb_d9b1 = 50;
        else if (d_61eb_d5a2 >= 59 && d_61eb_d5a2 <= 63)
            d_61eb_d9b1 = 75;
        else
            d_61eb_d9b1 = 100;
        d_61eb_da7d = 0.75;
        d_61eb_da81 = 0.25;
    } else if (f_1a83_2644(d_61eb_d5a2, d_61eb_d5c2 + 1) || f_1a83_26ed(d_61eb_d5a2, d_61eb_d5c2 + 1)
               || f_1a83_277e(d_61eb_d5a2, d_61eb_d5c2 + 1)) {
        d_61eb_d9b1 = 100;
        d_61eb_da7d = 0.95;
        d_61eb_da81 = 0.05;
    } else if (f_1a83_29a3(d_61eb_d5a2)) {
        d_61eb_d9b1 = 100;
        d_61eb_da7d = 0.75;
        d_61eb_da81 = 0.25;
    } else if (f_1a83_280b(d_61eb_d5a2, d_61eb_d5c2 + 1))
        d_61eb_d9b1 = 40;
    else
        d_61eb_d9b1 = 30;
    if (d_61eb_d6e0 > 24)
        d_61eb_d9b1 = d_61eb_d9b1 + 50;
    d_61eb_d6e2 = f_215d_13af(100, f_215d_1343(d_61eb_d6e2 + d_61eb_d9b1, 10));
    d_61eb_d6e4 = f_215d_13af(100, f_215d_1343(d_61eb_d6e4 + d_61eb_d9b1, 10));
    d_61eb_d5e4 = (f_215d_13af(f_1a83_6d8b(d_61eb_d666), 3) + f_215d_13af(f_1a83_6d8b(d_61eb_d668), 3)) * 25;
    d_61eb_da85 = ((d_3334_bea2[d_61eb_d666] + d_3334_bdb2[0][d_61eb_d666] * 2 - 100) / 200.0 + 1)
                  * (d_61eb_d6e2 / (d_61eb_d5e4 + 75.0));
    d_61eb_da89 = ((d_3334_bea2[d_61eb_d668] + d_3334_bdb2[0][d_61eb_d668] * 2 - 75) / 200.0 + 1)
                  * (d_61eb_d6e4 / (d_61eb_d5e4 + 75.0));
    d_61eb_da8d = f_215d_1385(d_3334_bdb2[1][d_61eb_d666] * d_61eb_da85 * d_61eb_da7d,
                              d_3334_bdb2[1][d_61eb_d666] * d_61eb_da7d);
    d_61eb_da91 = f_215d_1385(d_3334_bdb2[1][d_61eb_d668] * d_61eb_da89 * 0.3,
                              d_3334_bdb2[1][d_61eb_d666] * d_61eb_da81);
    d_61eb_db21 = f_215d_135c(2000.0 - f_215d_10c4() * 1000.0,
                              (f_215d_1385(d_61eb_da8d + d_61eb_da91 - f_215d_10c4(),
                                           d_3334_bdb2[1][d_61eb_d6da]) - f_215d_10c4()) * 1000.0);
    if (d_61eb_d666 < 38 && d_61eb_d5a2 > 12 && d_61eb_d6da == d_61eb_d666) {
        d_3334_c73a[d_61eb_d666]++;
        d_3334_ce4a[d_61eb_d666] += d_61eb_db21;
    }
}

void f_7a45_10dd(void)
{
    if (d_61eb_d666 > 37) {
        d_61eb_b138 = d_61eb_b140[d_61eb_d666];
        d_61eb_d6e6 = d_53fc_0f7c[d_61eb_d666];
        f_9f8d_0ea8(38, d_61eb_d6e6, 0);
        d_3334_bdb2[0][38] = f_215d_0d96(9) + 4;
        d_3334_bdb2[1][38] = f_215d_1343((d_53fc_099a[d_61eb_d666] * 6 - 50) * (1 - f_215d_0d96(6) / 20.0), 5);
        d_3334_bdb2[4][38] = d_53fc_09c0[d_61eb_d666 - 38];
        d_3334_bdb2[6][38] = 100;
        d_61eb_d6e8 = d_53fc_1172[d_61eb_d666];
        if (d_61eb_d6e8 == 59)
            d_61eb_d6e8 = 0;
        d_61eb_d666 = 38;
    } else {
        d_61eb_d6e6 = d_3334_d90a[d_3334_ca6e[d_61eb_d666]] % 16;
        d_61eb_d6e8 = 0;
    }
    if (d_61eb_d668 > 37) {
        d_61eb_b13a = d_61eb_b140[d_61eb_d668];
        d_61eb_d6ea = d_53fc_0f7c[d_61eb_d668];
        f_9f8d_0ea8(39, d_61eb_d6ea, 0);
        d_3334_bdb2[0][39] = f_215d_0d96(9) + 4;
        d_3334_bdb2[1][39] = f_215d_1343((d_53fc_099a[d_61eb_d668] * 6 - 50) * (1 - f_215d_0d96(6) / 5.0), 5);
        d_3334_bdb2[4][39] = d_53fc_09c0[d_61eb_d668 - 38];
        d_3334_bdb2[6][39] = 100;
        d_61eb_d6ec = d_53fc_1172[d_61eb_d668];
        if (d_61eb_d6ec == 59)
            d_61eb_d6ec = 0;
        d_61eb_d668 = 39;
    } else {
        d_61eb_d6ea = d_3334_d90a[d_3334_ca6e[d_61eb_d668]] % 16;
        d_61eb_d6ec = 0;
    }
}

void f_7a45_1327(void)
{
    unsigned i, j;

    for (d_61eb_d5aa = 0; d_61eb_d5aa <= 15; d_61eb_d5aa++) {
        d_3334_fefe[0][d_61eb_d5aa] = d_61eb_d5aa > 10 ? 4 : 0;
        d_3334_fefe[1][d_61eb_d5aa] = d_61eb_d5aa > 10 ? 4 : 0;
        d_3334_fefe[2][d_61eb_d5aa] = 0;
        d_3334_fefe[3][d_61eb_d5aa] = 0;
        d_3334_ff5e[2][d_61eb_d5aa] = 255;
        d_3334_ff5e[3][d_61eb_d5aa] = 255;
        d_3334_ff5e[0][d_61eb_d5aa] = 255;
        d_3334_ff5e[1][d_61eb_d5aa] = 255;
        if (d_61eb_d666 < 38) {
            if (!f_1a83_5a4c(d_3334_f9f8[d_61eb_d666][d_61eb_d5aa]))
                d_3334_fefe[4][d_61eb_d5aa] = d_28d4_1958[11][d_3334_f9f8[d_61eb_d666][d_61eb_d5aa]];
            else
                d_3334_fefe[4][d_61eb_d5aa] = 1;
            d_61eb_d680 = d_61eb_d6b6;
        } else
            d_3334_fefe[4][d_61eb_d5aa] = 16;
        if (d_61eb_d668 < 38) {
            if (!f_1a83_5a4c(d_3334_f9f8[d_61eb_d668][d_61eb_d5aa]))
                d_3334_fefe[5][d_61eb_d5aa] = d_28d4_1958[11][d_3334_f9f8[d_61eb_d668][d_61eb_d5aa]];
            else
                d_3334_fefe[5][d_61eb_d5aa] = 1;
            d_61eb_d680 = d_61eb_d6b4;
        } else
            d_3334_fefe[5][d_61eb_d5aa] = 16;
    }
    d_61eb_d9bd = 0;
    d_61eb_d9be = 0;
    for (i = 0; i < 3; i++)
        d_3334_fef8[i] = 0;
    for (i = 0; i < 2; i++)
        for (j = 0; j <= 15; j++)
            d_432e_0f1e[i][j] = 0;

    d_61eb_d6c8 = 0;
    d_61eb_d6ee = 1;
    if (d_61eb_d666 < 38) {
        f_b26d_0c04(d_61eb_d666);
        f_ab30_5396(d_61eb_d666, d_61eb_d5a2, d_61eb_d5c2 + 1);
        if (f_1a83_2ad4(d_61eb_d666)) {
            d_61eb_d680 = d_61eb_d668;
            d_61eb_d9d6 = -1;
            f_75a4_2bd7(d_61eb_d666);
            d_61eb_d9d6 = 0;
            d_61eb_d6c8 = 1;
            d_61eb_d6ee = 0;
        }
        d_61eb_d6f0 = f_1a83_440f(d_61eb_d666);
        for (d_61eb_d608 = 0; d_61eb_d608 <= d_3334_beca[d_61eb_d666] - 1; d_61eb_d608++) {
            d_432e_45de[d_28d4_081c[d_61eb_d666][d_61eb_d608]].f15 = 0;
            d_432e_45de[d_28d4_081c[d_61eb_d666][d_61eb_d608]].f23 = 0;
        }
    } else
        d_61eb_d6f0 = f_215d_0d96(10);
    f_7a45_1c37(d_61eb_d666);

    d_61eb_d6ca = 0;
    d_61eb_d6f2 = 1;
    if (d_61eb_d668 < 38) {
        f_b26d_0c04(d_61eb_d668);
        f_ab30_5396(d_61eb_d668, d_61eb_d5a2, d_61eb_d5c2 + 1);
        if (f_1a83_2ad4(d_61eb_d668)) {
            d_61eb_d680 = d_61eb_d666;
            d_61eb_d9d6 = -1;
            f_75a4_2bd7(d_61eb_d668);
            d_61eb_d9d6 = 0;
            d_61eb_d6ca = 1;
            d_61eb_d6f2 = 0;
        }
        d_61eb_d6f4 = f_1a83_440f(d_61eb_d668);
        for (d_61eb_d608 = 0; d_61eb_d608 <= d_3334_beca[d_61eb_d668] - 1; d_61eb_d608++) {
            d_432e_45de[d_28d4_081c[d_61eb_d668][d_61eb_d608]].f15 = 0;
            d_432e_45de[d_28d4_081c[d_61eb_d668][d_61eb_d608]].f23 = 0;
        }
    } else
        d_61eb_d6f4 = f_215d_0d96(10);
    f_7a45_1c37(d_61eb_d668);

    for (d_61eb_d5aa = 0; d_61eb_d5aa <= 15; d_61eb_d5aa++) {
        if (d_61eb_d666 < 38) {
            d_61eb_d680 = d_61eb_d6b6;
            f_b26d_3f53(d_3334_f9f8[d_61eb_d666][d_61eb_d5aa], 0);
        }
        if (d_61eb_d668 < 38) {
            d_61eb_d680 = d_61eb_d6b4;
            f_b26d_3f53(d_3334_f9f8[d_61eb_d668][d_61eb_d5aa], 0);
        }
    }

    memset(d_432e_87c8, 0, 175);
    d_432e_87c8[0].home1 = 15;
    d_432e_87c8[0].away1 = 15;
    d_432e_87c8[0].home2 = 15;
    d_432e_87c8[0].away2 = 15;
    d_432e_87c8[1].home1 = 15;
    d_432e_87c8[1].away1 = 15;
    d_432e_87c8[1].home2 = 15;
    d_432e_87c8[1].away2 = 15;
    if (d_61eb_d6c8 + d_61eb_d6ca > 0)
        f_8402_1543(d_61eb_d5a2, d_61eb_d5c2 + 1, d_61eb_d6f0);
    d_61eb_d6f6 = 0;
    d_61eb_d6f8 = 0;
    d_61eb_d6fa = 1;
    d_61eb_d6fc = 1;
    d_61eb_d6fe = 1;
    d_61eb_d700 = 1;
    d_61eb_d702 = 1;
    d_61eb_d704 = 1;
    d_61eb_d70c = 0;
    d_61eb_d70e = 0;
    strcpy(d_432e_cb07, "");
    strcpy(d_432e_cb57, "");
    d_61eb_d706 = 0;
    d_61eb_d69e = 0;
    d_61eb_d6c6 = 45;
    d_61eb_d708 = 0;
    d_61eb_d70a = 0;
    d_61eb_d66e = 0;
    d_61eb_d670 = 0;
    d_61eb_d9e6 = 0;
    d_61eb_d9cc = 0;
    if (f_1a83_28a0(d_61eb_d5a2) || f_1a83_2901(d_61eb_d5a2)) {
        d_61eb_d9e7 = 0;
        if (f_1a83_247b(d_61eb_d5a2) && d_61eb_d5a2 >= 15
            || f_1a83_280b(d_61eb_d5a2, d_61eb_d5c2 + 1) && (d_61eb_d5a2 == 61 || d_61eb_d5a2 == 65)
            || f_1a83_2644(d_61eb_d5a2, d_61eb_d5c2 + 1)
            || f_1a83_26ed(d_61eb_d5a2, d_61eb_d5c2 + 1) && d_61eb_d5a2 != 89
            || f_1a83_277e(d_61eb_d5a2, d_61eb_d5c2 + 1) && d_61eb_d5a2 <= 35)
            d_61eb_d9e7 = -1;
        if (f_1a83_28a0(d_61eb_d5a2))
            d_61eb_d9e6 = d_61eb_d9e7;
        else if (f_1a83_2901(d_61eb_d5a2))
            d_61eb_d9cc = d_61eb_d9e7;
    }
    if (d_61eb_d9cc) {
        d_61eb_d66c = f_75a4_23bf(d_61eb_d5a2, d_61eb_d5c2 + 1);
        d_61eb_d66e = (unsigned char)d_28d4_1398[d_61eb_d66c * 128 + d_61eb_d5c2 * 2 + 1];
        d_61eb_d670 = (unsigned char)d_28d4_1398[d_61eb_d66c * 128 + d_61eb_d5c2 * 2];
    }
    d_61eb_d9e8 = 0;
    d_61eb_d710 = 0;
    d_61eb_d712 = 0;
    for (d_61eb_d5aa = 0; d_61eb_d5aa <= 15; d_61eb_d5aa++)
        for (d_61eb_d5f0 = 0; d_61eb_d5f0 <= 2; d_61eb_d5f0++) {
            if (d_61eb_d666 < 38)
                d_3334_bb8a[0][d_61eb_d5f0][d_61eb_d5aa] = d_3334_f278[d_61eb_d666][d_61eb_d5f0][d_61eb_d5aa];
            if (d_61eb_d668 < 38)
                d_3334_bb8a[1][d_61eb_d5f0][d_61eb_d5aa] = d_3334_f278[d_61eb_d668][d_61eb_d5f0][d_61eb_d5aa];
        }
    if (d_61eb_d666 < 38) {
        d_61eb_d714 = d_3334_d90a[d_3334_ca6e[d_61eb_d666]] / 16;
        d_61eb_d716 = d_3334_d90a[d_3334_ca6e[d_61eb_d666]] % 16;
    }
    if (d_61eb_d668 < 38) {
        d_61eb_d718 = d_3334_d90a[d_3334_ca6e[d_61eb_d668]] / 16;
        d_61eb_d71a = d_3334_d90a[d_3334_ca6e[d_61eb_d668]] % 16;
    }
}

void f_7a45_1b3a(void)
{
    for (d_61eb_d5aa = 0; d_61eb_d5aa <= 15; d_61eb_d5aa++)
        for (d_61eb_d5f0 = 0; d_61eb_d5f0 <= 2; d_61eb_d5f0++) {
            if (d_61eb_d666 < 38)
                d_3334_f278[d_61eb_d666][d_61eb_d5f0][d_61eb_d5aa] = d_3334_bb8a[0][d_61eb_d5f0][d_61eb_d5aa];
            if (d_61eb_d668 < 38)
                d_3334_f278[d_61eb_d668][d_61eb_d5f0][d_61eb_d5aa] = d_3334_bb8a[1][d_61eb_d5f0][d_61eb_d5aa];
        }
    if (d_61eb_d666 < 38)
        d_3334_d90a[d_3334_ca6e[d_61eb_d666]] = d_61eb_d714 * 16 + d_61eb_d716;
    if (d_61eb_d668 < 38)
        d_3334_d90a[d_3334_ca6e[d_61eb_d668]] = d_61eb_d718 * 16 + d_61eb_d71a;
}

void f_7a45_1c37(int team)
{
    d_61eb_d71c = team == d_61eb_d666 ? d_61eb_d6e2 : d_61eb_d6e4;
    for (d_61eb_d5aa = 0; d_61eb_d5aa <= 15; d_61eb_d5aa++) {
        if (team < 38) {
            d_61eb_d5b8 = d_3334_f9f8[team][d_61eb_d5aa];
            if (!f_1a83_5a4c(d_61eb_d5b8)) {
                d_28d4_1958[16][d_61eb_d5b8] = f_215d_0d96(d_28d4_1958[8][d_61eb_d5b8]) == 0
                    ? f_215d_1343(d_28d4_1958[15][d_61eb_d5b8] * (f_215d_0d96(3) + 4) * 0.1, 10)
                    : d_28d4_1958[15][d_61eb_d5b8];
                if (d_61eb_d71c > 65) {
                    if (d_61eb_d5b8 % 8 == 0)
                        d_28d4_1958[16][d_61eb_d5b8] = f_215d_13af(d_28d4_1958[16][d_61eb_d5b8] + f_215d_0d96(10) + 15,
                                                                   d_28d4_1958[9][d_61eb_d5b8] + 25);
                    else if (d_61eb_d5b8 % 8 == 1)
                        d_28d4_1958[16][d_61eb_d5b8] = f_215d_1343(d_28d4_1958[16][d_61eb_d5b8] - 15 - f_215d_0d96(10), 10);
                }
                if (d_3334_bef2[team] > 0)
                    d_28d4_1958[16][d_61eb_d5b8] = f_215d_13af(d_28d4_1958[16][d_61eb_d5b8] + f_ab30_2397(d_61eb_d5b8),
                                                               d_28d4_1958[9][d_61eb_d5b8] + 25);
            }
        } else {
            if (team == 38)
                d_61eb_d71e = d_53fc_099a[d_61eb_d6b4];
            else if (team == 39)
                d_61eb_d71e = d_53fc_099a[d_61eb_d6b6];
            d_3334_bc2a[team == 39][d_61eb_d5aa] = f_215d_1343(d_61eb_d71e + f_215d_0d96(5) - f_215d_0d96(5), 1);
        }
    }
    if (team < 38) {
        if (d_3334_bef2[team] > 0)
            d_3334_bf1a[team]++;
        d_3334_bef2[team] = 0;
    }
}

void f_7a45_1ec1(void)
{
    f_7f4a_142c(d_61eb_d666);
    f_7f4a_142c(d_61eb_d668);
    f_7f4a_193a(d_61eb_d666);
    f_7f4a_193a(d_61eb_d668);
    f_7a45_2e3e();
    strcpy(d_432e_cba7, "1st Half");
    if (d_61eb_d6c8 + d_61eb_d6ca > 0) {
        f_7f4a_0714(0);
        f_1a83_5540(1);
        f_215d_0c46();
    }
    d_61eb_d720 = 7;
    d_61eb_d9f7 = 0;
    for (;;) {
        d_61eb_d722 = 0;
        do
            f_7a45_2388();
        while (d_61eb_d69e < d_61eb_d6c6);
        d_61eb_d9f7 = -1;
        while (d_61eb_d722 > 0) {
            f_7a45_2388();
            d_61eb_d722--;
        }
        d_61eb_d9f7 = 0;
        if (d_61eb_d6c8 + d_61eb_d6ca > 0)
            f_215d_0df0(50);
        if (d_61eb_d6c6 == 45) {
            d_432e_87c8[0].home1 = d_61eb_d70c;
            d_432e_87c8[0].away1 = d_61eb_d70e;
            strcpy(d_432e_cba7, "2nd Half");
            d_61eb_d6c6 = 90;
            if (d_61eb_d6c8 + d_61eb_d6ca > 0) {
                f_1a83_5540(0);
                f_7f4a_2d1a();
                f_7f4a_3a06(d_61eb_d6b4, d_61eb_d6b6, 0);
                f_7f4a_0714(0);
            }
            continue;
        }
        if (d_61eb_d6c6 == 90) {
            d_432e_87c8[0].home2 = d_61eb_d70c;
            d_432e_87c8[0].away2 = d_61eb_d70e;
            if (d_61eb_d70c + d_61eb_d66e == d_61eb_d70e + d_61eb_d670
                && f_1a83_2387(d_61eb_d5a2) == 0 && f_1a83_2448(d_61eb_d5a2) == 0
                && d_61eb_d5a2 > 12) {
                if (d_61eb_d9cc != 0 && d_61eb_d70e != d_61eb_d66e)
                    f_7f4a_0283();
                else if (f_7a45_21c4(d_61eb_d5a2, d_61eb_d5c2 + 1)) {
                    d_61eb_d6c6 = 105;
                    strcpy(d_432e_cba7, "Extra Time");
                    if (d_61eb_d6c8 + d_61eb_d6ca > 0) {
                        f_7f4a_0a9c(d_61eb_d666, d_432e_cba7);
                        f_1a83_5540(1);
                    }
                    continue;
                }
            }
        }
        if (d_61eb_d6c6 == 105) {
            d_61eb_d6c6 = 120;
            if (d_61eb_d6c8 + d_61eb_d6ca > 0)
                f_1a83_5540(1);
            continue;
        }
        if (d_61eb_d6c6 == 120) {
            d_432e_87c8[1].home1 = d_61eb_d70c;
            d_432e_87c8[1].away1 = d_61eb_d70e;
            if (d_61eb_d70c + d_61eb_d66e == d_61eb_d70e + d_61eb_d670) {
                if (d_61eb_d9cc != 0 && d_61eb_d70e != d_61eb_d66e)
                    f_7f4a_0283();
                else if (f_7a45_21f6(d_61eb_d5a2, d_61eb_d5c2 + 1)) {
                    d_61eb_d9e8 = -1;
                    strcpy(d_432e_cba7, "Penalty Shoot-Out !");
                    if (d_61eb_d6c8 + d_61eb_d6ca > 0)
                        f_1a83_5540(1);
                    f_7f4a_0d6a();
                    d_432e_87c8[1].home2 = d_61eb_d70c;
                    d_432e_87c8[1].away2 = d_61eb_d70e;
                }
            }
        }
        break;
    }
}

char f_7a45_21c4(int club, int round)
{
    if (d_61eb_d9cc != 0 || club == 14 || club == 75 || club == 89 || club == 93 || club == 97)
        return -1;
    return 0;
}

char f_7a45_21f6(int club, int round)
{
    return f_7a45_21c4(club, round);
}

/* the formations' shirt numbers that 220c looks for */
static char far *d_61eb_1fc4[] = {
    "04 10 11 12 13", "07 11", "02 09", "06 14", "03 13"
};

void f_7a45_220c(int a, int b, int c)
{
    d_61eb_d724 = b < 38 ? d_3334_be02[b] : d_53fc_0b90[b];
    if (c < 38) {
        d_61eb_d726 = d_3334_be02[c];
        d_61eb_d728 = d_3334_be2a[c];
    } else {
        d_61eb_d726 = d_53fc_0b90[c];
        d_61eb_d728 = d_53fc_0d86[c];
    }
    if (a == b) {
        d_61eb_d66a = d_61eb_d724 / 16;
        d_61eb_d5e0 = d_61eb_d724 % 16;
    } else {
        d_61eb_d66a = d_61eb_d726 / 16;
        d_61eb_d5e0 = d_61eb_d726 % 16;
        d_61eb_d9e9 = d_61eb_d724 % 16 == d_61eb_d726 % 16;
        if (d_61eb_d9e9 == 0) {
            sprintf(d_432e_cc47, "%02d", d_61eb_d724 % 16);
            sprintf(d_432e_cc97, "%02d", d_61eb_d726 % 16);
            for (d_61eb_d72a = 0; d_61eb_d72a <= 4; d_61eb_d72a++)
                if (strstr(d_61eb_1fc4[d_61eb_d72a], d_432e_cc47)
                    && strstr(d_61eb_1fc4[d_61eb_d72a], d_432e_cc97)) {
                    d_61eb_d9e9 = -1;
                    d_61eb_d72a = 4;
                }
        }
        if (d_61eb_d9e9 != 0) {
            d_61eb_d66a = d_61eb_d728 / 16;
            d_61eb_d5e0 = d_61eb_d728 % 16;
        }
    }
}

void f_7a45_2388(void)
{
    int n;

    n = d_61eb_d630 - (d_61eb_d6e0 > 24
        ? (d_61eb_d630 - d_61eb_d72e) / 4 - f_7a45_2ae1(1, d_61eb_d69e) : 0);
    d_61eb_d72c = (f_215d_0d96(n) + f_215d_0d96(n)) / 2;
    n = d_61eb_d72e + (d_61eb_d6e0 > 24
        ? (d_61eb_d630 - d_61eb_d72e) / 4 - f_7a45_2b1c(1, d_61eb_d69e) : 0);
    d_61eb_d730 = (f_215d_0d96(n) + f_215d_0d96(n)) / 2;
    if (d_61eb_d72c >= d_61eb_d730) {
        d_61eb_d6fe++;
        d_61eb_d9b2 = 1;
        if (d_61eb_d6c8 + d_61eb_d6ca > 0)
            f_7a45_4961(3.5, 21.5);
        f_7a45_2b57();
        f_7a45_24c4();
    } else {
        d_61eb_d700++;
        d_61eb_d9b2 = 2;
        if (d_61eb_d6c8 + d_61eb_d6ca > 0)
            f_7a45_4961(21.5, 3.5);
        f_7a45_2b57();
        f_7a45_25a1();
    }
}

void f_7a45_24c4(void)
{
    int r;

    do {
        d_61eb_d732 = 0;
        r = d_61eb_d738 - f_7a45_2ae1(2, d_61eb_d69e);
        d_61eb_d736 = (f_215d_0d96(r) + f_215d_0d96(r)) / 2;
        r = d_61eb_d73c - f_7a45_2b1c(0, d_61eb_d69e);
        d_61eb_d73a = (f_215d_0d96(r) + f_215d_0d96(r)) / 2;
        if (d_61eb_d736 >= d_61eb_d73a) {
            d_61eb_d702++;
            f_7a45_2b57();
            f_7a45_267e();
        } else {
            d_61eb_d6fc++;
            f_7a45_2b57();
        }
    } while (d_61eb_d73a <= d_61eb_d736 && d_61eb_d732 == 0);
}

void f_7a45_25a1(void)
{
    int r;

    do {
        d_61eb_d732 = 0;
        r = d_61eb_d740 - f_7a45_2b1c(2, d_61eb_d69e);
        d_61eb_d73e = (f_215d_0d96(r) + f_215d_0d96(r)) / 2;
        r = d_61eb_d744 - f_7a45_2ae1(0, d_61eb_d69e);
        d_61eb_d742 = (f_215d_0d96(r) + f_215d_0d96(r)) / 2;
        if (d_61eb_d73e >= d_61eb_d742) {
            d_61eb_d704++;
            f_7a45_2b57();
            f_7a45_26f0();
        } else {
            d_61eb_d6fa++;
            f_7a45_2b57();
        }
    } while (d_61eb_d742 <= d_61eb_d73e && d_61eb_d732 == 0);
}

void f_7a45_267e(void)
{
    d_61eb_da46 = f_215d_0d96(d_61eb_d994) == 0 ? -1 : 0;
    d_61eb_d5f6 = d_61eb_d70c * 20 + 180;
    d_61eb_d5f4 = f_215d_0d96(d_61eb_d746) + (d_61eb_da46 ? 100 : 0);
    if (d_61eb_d5f4 > d_61eb_d5f6) {
        d_61eb_d6f6++;
        f_7a45_2b57();
        f_7a45_2762();
    } else
        f_7a45_2b57();
}

void f_7a45_26f0(void)
{
    d_61eb_da46 = f_215d_0d96(d_61eb_d996) == 0 ? -1 : 0;
    d_61eb_d5f6 = d_61eb_d70e * 20 + 180;
    d_61eb_d5f4 = f_215d_0d96(d_61eb_d748) + (d_61eb_da46 ? 100 : 0);
    if (d_61eb_d5f4 > d_61eb_d5f6) {
        d_61eb_d6f8++;
        f_7a45_2b57();
        f_7a45_2920();
    } else
        f_7a45_2b57();
}

void f_7a45_2762(void)
{
    char buf[320];

    d_61eb_d9ea = 0;
    d_61eb_d9eb = 0;
    d_61eb_d9d7 = 0;
    if (d_61eb_d6c8 + d_61eb_d6ca > 0) {
        f_215d_07ec(0x57, 0x7e, 0x63, 0x84);
        sprintf(buf, "%d", d_61eb_d6f6);
        f_1a83_3347(0x60, 0x84, 5, buf);
    }
    d_61eb_d74a = f_215d_0d96(d_61eb_d74c);
    if (d_61eb_d74a < 43) {
        if (f_215d_0d96(30) == 0) {
            f_7a45_306a(d_61eb_d666);
            d_61eb_d9eb = -1;
        } else if (f_215d_0d96(4) > 0) {
            f_ab30_3798(d_61eb_d666);
            d_61eb_d9d7 = -1;
        } else
            f_7a45_2fe1(d_61eb_d666);
        d_61eb_d732 = 1;
    } else if (d_61eb_d74a < 47) {
        f_ab30_32c7(d_61eb_d666);
        if (d_61eb_d6c8 + d_61eb_d6ca > 0)
            f_7f4a_09cd();
        d_61eb_d732 = -d_61eb_d9ec;
        if (d_61eb_d9ec)
            d_61eb_d9ea = -1;
    } else if (d_61eb_d6c8 + d_61eb_d6ca > 0 && d_61eb_d74a < 75) {
        if (f_215d_0d96(10) == 0) {
            if (f_215d_0d96(3) == 0)
                f_7f4a_01cc(d_61eb_d666);
            else {
                f_ab30_3798(d_61eb_d666);
                f_ab30_3b31(d_61eb_d666);
                f_7f4a_0a9c(d_61eb_d666, d_432e_cba7);
            }
        } else if (f_215d_0d96(10) == 0)
            f_ab30_3187(d_61eb_d666);
        else
            f_ab30_34cb(d_61eb_d666);
    }
    if (d_61eb_d732 == 1) {
        d_61eb_d70c++;
        f_7f4a_02ed(d_61eb_d5b8, d_61eb_d9ea, d_61eb_d9eb, d_61eb_d9d7, d_61eb_d750, d_61eb_d666);
    }
    f_7a45_2b57();
}

void f_7a45_2920(void)
{
    char buf[320];

    d_61eb_d9ea = 0;
    d_61eb_d9eb = 0;
    d_61eb_d9d7 = 0;
    if (d_61eb_d6c8 + d_61eb_d6ca > 0) {
        f_215d_07ec(0xe7, 0x7e, 0xf3, 0x84);
        sprintf(buf, "%d", d_61eb_d6f8);
        f_1a83_3347(0xf0, 0x84, 5, buf);
    }
    d_61eb_d74a = f_215d_0d96(d_61eb_d74e);
    if (d_61eb_d74a < 43) {
        if (f_215d_0d96(30) == 0) {
            f_7a45_306a(d_61eb_d668);
            d_61eb_d9eb = -1;
        } else if (f_215d_0d96(4) > 0) {
            f_ab30_3798(d_61eb_d668);
            d_61eb_d9d7 = -1;
        } else
            f_7a45_2fe1(d_61eb_d668);
        d_61eb_d732 = 1;
    } else if (d_61eb_d74a < 47) {
        f_ab30_32c7(d_61eb_d668);
        if (d_61eb_d6c8 + d_61eb_d6ca > 0)
            f_7f4a_09cd();
        d_61eb_d732 = -d_61eb_d9ec;
        if (d_61eb_d9ec)
            d_61eb_d9ea = -1;
    } else if (d_61eb_d6c8 + d_61eb_d6ca > 0 && d_61eb_d74a < 75) {
        if (f_215d_0d96(10) == 0) {
            if (f_215d_0d96(3) == 0)
                f_7f4a_01cc(d_61eb_d668);
            else {
                f_ab30_3798(d_61eb_d668);
                f_ab30_3b31(d_61eb_d668);
                f_7f4a_0a9c(d_61eb_d666, d_432e_cba7);   /* sic: the home team, as in the original */
            }
        } else if (f_215d_0d96(10) == 0)
            f_ab30_3187(d_61eb_d668);
        else
            f_ab30_34cb(d_61eb_d668);
    }
    if (d_61eb_d732 == 1) {
        d_61eb_d70e++;
        f_7f4a_02ed(d_61eb_d5b8, d_61eb_d9ea, d_61eb_d9eb, d_61eb_d9d7, d_61eb_d750, d_61eb_d668);
    }
    f_7a45_2b57();
}

unsigned char f_7a45_2ae1(unsigned char a, int b)
{
    return b < 60 ? 0 : d_3334_bc4a[a][f_215d_13af(b - 60, 59)];
}

unsigned char f_7a45_2b1c(unsigned char a, int b)
{
    return b < 60 ? 0 : d_3334_bcfe[a][f_215d_13af(b - 60, 59)];
}

void f_7a45_2b57(void)
{
    char key[4];
    char c;

    d_61eb_d706++;
    d_61eb_d69e = d_61eb_d706 / 2;
    if (d_61eb_d69e > d_61eb_d6c6) {
        d_61eb_d69e = d_61eb_d6c6;
        d_61eb_d706 = d_61eb_d69e * 2;
    }
    if (d_61eb_d6c8 + d_61eb_d6ca > 0) {
        f_7f4a_0143(d_61eb_d69e);
        f_7a45_49a7();
        strcpy(key, strupr(f_215d_0d0f()));
        c = f_215d_0c20();
        if (c != 3 && key[0] != ' ') {
            f_215d_0df0(9);
            if (d_61eb_d6ee == 0 && (c == 1 || c != 0 && d_61eb_d6f2 == 1 || key[0] == 'H'))
                f_7a45_420a(d_61eb_d666, 0);
            if (d_61eb_d6f2 == 0 && (c == 2 || c != 0 && d_61eb_d6ee == 1 || key[0] == 'A'))
                f_7a45_420a(d_61eb_d668, 0);
        }
    }
    if (f_215d_0d96(d_61eb_d752) == 0)
        f_7a45_326b(d_61eb_d666);
    if (f_215d_0d96(d_61eb_d754) == 0)
        f_7a45_326b(d_61eb_d668);
    if (d_61eb_d69e > 65) {
        if (d_61eb_d6ee == 1 && d_61eb_d69e > d_61eb_d756 && d_3334_fefe[0][11] == 4 && d_61eb_d9ed &&
            d_61eb_d9bd < 2)
            f_7a45_4357(d_61eb_d666, 0);
        if (d_61eb_d6f2 == 1 && d_61eb_d69e > d_61eb_d758 && d_3334_fefe[1][11] == 4 && d_61eb_d9ee &&
            d_61eb_d9be < 2)
            f_7a45_4357(d_61eb_d668, 0);
        if (d_61eb_d6ee == 1 && d_61eb_d69e > d_61eb_d756 && d_3334_fefe[0][12] == 4 && d_61eb_d9ef &&
            d_61eb_d9bd < 2)
            f_7a45_4357(d_61eb_d666, 0);
        if (d_61eb_d6f2 == 1 && d_61eb_d69e > d_61eb_d758 && d_3334_fefe[1][12] == 4 && d_61eb_d9f0 &&
            d_61eb_d9be < 2)
            f_7a45_4357(d_61eb_d668, 0);
        if (d_61eb_d6ee == 1 && d_61eb_d69e > d_61eb_d756 && d_3334_fefe[0][13] == 4 && d_61eb_d9f1 &&
            d_61eb_d9bd < 2)
            f_7a45_4357(d_61eb_d666, 0);
        if (d_61eb_d6f2 == 1 && d_61eb_d69e > d_61eb_d758 && d_3334_fefe[1][13] == 4 && d_61eb_d9f2 &&
            d_61eb_d9be < 2)
            f_7a45_4357(d_61eb_d668, 0);
        if (d_61eb_d6ee == 1 && d_61eb_d69e > d_61eb_d756 && d_3334_fefe[0][14] == 4 && d_61eb_d9f3 &&
            d_61eb_d9bd < 2)
            f_7a45_4357(d_61eb_d666, 0);
        if (d_61eb_d6f2 == 1 && d_61eb_d69e > d_61eb_d758 && d_3334_fefe[1][14] == 4 && d_61eb_d9f4 &&
            d_61eb_d9be < 2)
            f_7a45_4357(d_61eb_d668, 0);
    }
}

void f_7a45_2e3e(void)
{
    d_61eb_d756 = f_215d_0d96(20) + 65;
    d_61eb_d758 = f_215d_0d96(20) + 65;
    d_61eb_d9ed = 0;
    d_61eb_d9ef = 0;
    d_61eb_d9f1 = 0;
    d_61eb_d9f3 = 0;
    d_61eb_d9ee = 0;
    d_61eb_d9f0 = 0;
    d_61eb_d9f2 = 0;
    d_61eb_d9f4 = 0;
    /* sic: both tests set the same two flags */
    if (d_61eb_d70c + d_61eb_d66e < d_61eb_d70e + d_61eb_d670 ||
        d_61eb_d70c + d_61eb_d66e == d_61eb_d70e + d_61eb_d670 && d_61eb_d70e >= d_61eb_d66e) {
        d_61eb_d9f1 = -1;
        d_61eb_d9f3 = -1;
    }
    if (d_61eb_d70e + d_61eb_d670 < d_61eb_d70c + d_61eb_d66e ||
        d_61eb_d70e + d_61eb_d670 == d_61eb_d70c + d_61eb_d66e && d_61eb_d70c >= d_61eb_d670) {
        d_61eb_d9f1 = -1;
        d_61eb_d9f3 = -1;
    }
    f_7a45_2f1a(d_61eb_d666);
    f_7a45_2f1a(d_61eb_d668);
}

void f_7a45_2f1a(int team)
{
    if (f_1a83_2ad4(team) == 0) {
        for (d_61eb_d5d8 = 11; d_61eb_d5d8 <= 14; d_61eb_d5d8++) {
            for (d_61eb_d5f0 = 2; d_61eb_d5f0 <= 10; d_61eb_d5f0++) {
                if (f_1a83_633a(d_3334_f9f8[team][d_61eb_d5d8], d_61eb_d5f0)) {
                    d_3334_f278[team][0][d_61eb_d5d8] = d_61eb_d5f0 + (d_61eb_d5f0 < 5 ? 3 : 0);
                    d_3334_bb8a[team == d_61eb_d668 ? 1 : 0][0][d_61eb_d5d8] = d_61eb_d5f0 + (d_61eb_d5f0 < 5 ? 3 : 0);
                }
            }
        }
    }
}

void f_7a45_2fe1(int team)
{
    d_61eb_d674 = 0;
    d_61eb_d750 = -1;
    for (d_61eb_d5aa = 0; d_61eb_d5aa <= 15; d_61eb_d5aa++) {
        if (d_3334_fefe[team == d_61eb_d668][d_61eb_d5aa] < 2) {
            if ((d_61eb_d75a = f_7a45_30ad(team, d_61eb_d5aa)) > d_61eb_d674) {
                d_61eb_d674 = d_61eb_d75a;
                d_61eb_d5b8 = d_3334_f9f8[team][d_61eb_d5aa];
                d_61eb_d750 = d_61eb_d5aa;
            }
        }
    }
}

void f_7a45_306a(int team)
{
    int other;

    other = team == d_61eb_d666 ? d_61eb_d668 : d_61eb_d666;
    d_61eb_d750 = f_ab30_3c47(other);
    d_61eb_d5b8 = d_3334_f9f8[other][d_61eb_d750];
}

int f_7a45_30ad(int team, int p)
{
    d_61eb_d68c = d_3334_f278[team][0][p];
    if (d_61eb_d68c > 1) {
        d_61eb_d9b3 = d_3334_f278[team][2][p];
        if (d_61eb_d9b3 == 1)
            d_61eb_d62a = 1;
        else if (d_61eb_d9b3 == 2)
            d_61eb_d62a = -1;
        else
            d_61eb_d62a = 0;
        switch (d_61eb_d68c ? d_61eb_d68c : d_61eb_d68c) {   /* the value as a temporary in AX: sub ax,2 / mov bx,ax */
        case 2:
        case 3:
        case 11:
        case 12:
            d_61eb_d75a = 5;
            break;
        case 4:
            d_61eb_d75a = 10;
            break;
        case 5:
        case 6:
            d_61eb_d75a = 15;
            break;
        case 7:
        case 8:
        case 9:
        case 13:
            d_61eb_d75a = 20;
            break;
        case 10:
            d_61eb_d75a = 35;
            break;
        }
        d_61eb_d75a += d_61eb_d62a * 5 + f_7f4a_1525(p, team) * 2;
        if (team < 38) {
            if (!f_1a83_5a4c(d_3334_f9f8[team][p]))
                d_61eb_d75a = d_28d4_1958[7][d_3334_f9f8[team][p]] * 0.75 +
                              (d_61eb_da46 ? d_28d4_1958[5][d_3334_f9f8[team][p]] * 10 : 0) + d_61eb_d75a;
        } else
            d_61eb_d75a += 10;
        d_61eb_d75c = d_61eb_d75a;
        d_61eb_d75a += f_215d_0d96(125);
    } else {
        d_61eb_d75c = 0;
        d_61eb_d75a = 0;
    }
    return d_61eb_d75a;
}

void f_7a45_326b(int team)
{
    d_61eb_d9f5 = 0;
    d_61eb_d63e = team == d_61eb_d666 ? d_61eb_d668 : d_61eb_d666;
    d_61eb_d5b8 = -1;
    d_61eb_d75e = 0;
    do {
        do {
            d_61eb_d5aa = f_215d_0d96(16);
        } while (d_3334_f278[team][0][d_61eb_d5aa] <= 1 ||
                 d_3334_fefe[team == d_61eb_d668][d_61eb_d5aa] >= 2);
        if ((d_61eb_d760 = f_215d_0d96(d_3334_fefe[team == d_61eb_d668 ? 5 : 4][d_61eb_d5aa] + 10 + f_215d_0d96(4))) > d_61eb_d5e6 ||
            d_61eb_d5b8 == -1) {
            d_61eb_d5b8 = d_61eb_d5aa;
            d_61eb_d5e6 = d_61eb_d760;
        }
        d_61eb_d75e++;
    } while (d_61eb_d5b8 <= -1 || d_61eb_d75e < 5);
    d_61eb_d762 = d_3334_f278[team][0][d_61eb_d5b8];
    d_61eb_d764 = -1;
    d_61eb_d75e = 0;
    do {
        do {
            d_61eb_d5aa = f_215d_0d96(16);
            d_61eb_d766 = d_3334_f278[d_61eb_d63e][0][d_61eb_d5aa];
        } while (d_3334_fefe[d_61eb_d63e == d_61eb_d668][d_61eb_d5aa] >= 2);
        d_61eb_d760 = f_1a83_64cf(d_61eb_d762) && f_1a83_6516(d_61eb_d766) ||
                      f_1a83_64f5(d_61eb_d762) && f_1a83_64f5(d_61eb_d766) ||
                      f_1a83_6516(d_61eb_d762) && (d_61eb_d766 == 1 || f_1a83_64cf(d_61eb_d766)) ? 11 : 0;
        d_61eb_d760 += f_1a83_6537(d_61eb_d762) && f_1a83_655d(d_61eb_d766) ||
                       f_1a83_6583(d_61eb_d762) && f_1a83_6583(d_61eb_d766) ||
                       f_1a83_655d(d_61eb_d762) && f_1a83_6537(d_61eb_d766) ? 10 : 0;
        if (d_61eb_d760 > d_61eb_d5e6 || d_61eb_d764 == -1) {
            d_61eb_d764 = d_61eb_d5aa;
            d_61eb_d5e6 = d_61eb_d760;
        }
        d_61eb_d75e++;
    } while (d_61eb_d764 <= -1 || d_61eb_d75e < 5);
    if (d_61eb_d6c8 + d_61eb_d6ca > 0) {
        if (team < 38)
            strcpy(d_432e_cceb, f_1a83_462c(d_3334_f9f8[team][d_61eb_d5b8]));
        else
            sprintf(d_432e_cceb, "No.%s", f_1a83_2d52(d_61eb_d5b8 + 1, 0));
        if (d_61eb_d63e < 38) {
            strcpy(d_432e_cd3b, f_1a83_462c(d_3334_f9f8[d_61eb_d63e][d_61eb_d764]));
            if (!f_1a83_5a4c(d_3334_f9f8[d_61eb_d63e][d_61eb_d764]))
                d_61eb_d9f5 = f_215d_0d96(d_28d4_1958[14][d_3334_f9f8[d_61eb_d63e][d_61eb_d764]] + 10) < f_215d_0d96(10);
            else
                d_61eb_d9f5 = f_215d_0d96(5) == 0;
        } else {
            sprintf(d_432e_cd3b, "their no.%s", f_1a83_2d52(d_61eb_d764 + 1, 0));
            d_61eb_d9f5 = f_215d_0d96(2) == 0;
        }
    }
    f_7a45_41ad();
    d_61eb_d9f6 = 0;
    switch (d_61eb_d768 ? d_61eb_d768 : d_61eb_d768) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 7:
    case 8:
    case 9:
    case 10:
    case 12:
    case 18:
    case 19:
    case 20:
    case 21:
    case 23:
        if (d_61eb_d63e < 38) {
            if (!f_1a83_5a4c(d_3334_f9f8[d_61eb_d63e][d_61eb_d764]))
                d_61eb_d9f8 = f_215d_0d96(d_28d4_1958[13][d_3334_f9f8[d_61eb_d63e][d_61eb_d764]]) > f_215d_0d96(10);
            else
                d_61eb_d9f8 = f_215d_0d96(10) > f_215d_0d96(10);
        } else
            d_61eb_d9f8 = f_215d_0d96(12) > f_215d_0d96(10);
        if (d_61eb_d9f8)
            f_7a45_37b9(team, d_61eb_d5b8, d_61eb_d63e, d_61eb_d764);
        break;
    }
    f_7a45_3d1b(team, d_61eb_d5b8);
    if (d_61eb_d9f5)
        d_3334_fefe[d_61eb_d63e == d_61eb_d668 ? 5 : 4][d_61eb_d764] = 20;
    if (d_61eb_d6c8 + d_61eb_d6ca > 0)
        f_7f4a_0a9c(d_61eb_d666, d_432e_cba7);
}

void f_7a45_37b9(int a, int b, int team, int n)
{
    int old = d_61eb_d5b8;
    int saved = d_61eb_d764;
    char hurt;
    char pos;
    char r;
    char buf[320];

    hurt = f_215d_0d96(3) == 0 ? -1 : 0;
    d_61eb_d5b8 = b;
    d_61eb_d764 = n;
    if (d_61eb_d6c8 + d_61eb_d6ca > 0) {
        sprintf(buf, "%s injured by %s", d_432e_cd3b, d_432e_cceb);
        f_7f4a_0a9c(team, buf);
        f_215d_0df0(100);
        f_7f4a_0b12();
        sprintf(buf, "He was %s", d_432e_cd8b);
        f_7f4a_0a9c(a, buf);
        f_215d_0df0(75);
        f_7f4a_0b12();
        if (hurt) {
            r = f_215d_0d96(4);
            if (r == 0) {
                sprintf(buf, "He's struggling");
                f_7f4a_0a9c(team, buf);
                d_3334_fefe[team == d_61eb_d668 ? 3 : 2][d_61eb_d764] =
                    d_3334_fefe[team == d_61eb_d668 ? 3 : 2][d_61eb_d764] * 0.8;
                f_7f4a_193a(team);
            } else if (r == 1) {
                sprintf(buf, "He looks in trouble");
                f_7f4a_0a9c(team, buf);
                d_3334_fefe[team == d_61eb_d668 ? 3 : 2][d_61eb_d764] =
                    d_3334_fefe[team == d_61eb_d668 ? 3 : 2][d_61eb_d764] * 0.8;
                f_7f4a_193a(team);
            } else if (r == 2) {
                sprintf(buf, "He should be ok");
                f_7f4a_0a9c(team, buf);
            } else if (r == 3) {
                sprintf(buf, "He's ok though");
                f_7f4a_0a9c(team, buf);
            }
        } else {
            sprintf(buf, "He'll have to come off");
            f_7f4a_0a9c(team, buf);
        }
        f_215d_0df0(100);
        f_7f4a_0b12();
        d_61eb_d9f6 = -1;
    }
    if (hurt == 0) {
        d_3334_fefe[team == d_61eb_d668][d_61eb_d764] = 6;
        if (team < 38) {
            sprintf(buf, "%s%04d", d_432e_cddb, d_3334_f9f8[team][d_61eb_d764]);
            strcpy(d_432e_cddb, buf);
            f_b26d_3f53(d_3334_f9f8[team][d_61eb_d764], 4);
        }
        pos = d_3334_f278[team][0][d_61eb_d764];
        if (f_1a83_64cf(pos)) {
            d_61eb_d76a = 0;
            d_61eb_d76c = 1;
            d_61eb_d76e = 2;
            d_61eb_d770 = 3;
        } else if (f_1a83_64f5(pos)) {
            d_61eb_d76a = 1;
            d_61eb_d76c = 2;
            d_61eb_d76e = 3;
            d_61eb_d770 = 0;
        } else {
            d_61eb_d76a = 2;
            d_61eb_d76c = 3;
            d_61eb_d76e = 1;
            d_61eb_d770 = 0;
        }
        if (f_1a83_2ad4(team)) {
            d_61eb_d9de = -1;
            f_b6f6_0000(team);
            d_61eb_d9de = 0;
            for (d_61eb_d5aa = 0; d_61eb_d5aa <= 15; d_61eb_d5aa++)
                d_3334_fefe[team == d_61eb_d668 ? 3 : 2][d_61eb_d5aa] = 0;
            f_7f4a_193a(team);
            f_7f4a_0714(d_61eb_d9b2);
            f_7f4a_0a9c(d_61eb_d666, d_432e_cba7);
        } else if (d_3334_f278[team][0][d_61eb_d764] == 1 && d_3334_ff09[team == d_61eb_d668][4] == 4 &&
                   (team == d_61eb_d666 && d_61eb_d9bd < 2 || team == d_61eb_d668 && d_61eb_d9be < 2) &&
                   f_1a83_5d3d(team, d_61eb_d5a2, d_61eb_d5c2 + 1)) {
            f_7a45_4357(team, 1);
        } else if (d_3334_ff09[team == d_61eb_d668][d_61eb_d76a] == 4 &&
                   (team == d_61eb_d666 && d_61eb_d9bd < 2 || team == d_61eb_d668 && d_61eb_d9be < 2)) {
            f_7a45_4357(team, 0);
        } else if (d_3334_ff09[team == d_61eb_d668][d_61eb_d76c] == 4 &&
                   (team == d_61eb_d666 && d_61eb_d9bd < 2 || team == d_61eb_d668 && d_61eb_d9be < 2)) {
            f_7a45_4357(team, 0);
        } else if (d_3334_ff09[team == d_61eb_d668][d_61eb_d76e] == 4 &&
                   (team == d_61eb_d666 && d_61eb_d9bd < 2 || team == d_61eb_d668 && d_61eb_d9be < 2)) {
            f_7a45_4357(team, 0);
        } else if (d_3334_ff09[team == d_61eb_d668][d_61eb_d770] == 4 &&
                   (team == d_61eb_d666 && d_61eb_d9bd < 2 || team == d_61eb_d668 && d_61eb_d9be < 2)) {
            f_7a45_4357(team, 0);
        } else {
            f_7f4a_193a(team);
            d_61eb_d722 += f_215d_0d96(3) * 2;
        }
    } else
        d_61eb_d722 += f_215d_0d96(3) * 2;
    d_61eb_d5b8 = old;
    d_61eb_d764 = saved;
}

void f_7a45_3d1b(int team, int p)
{
    volatile int r;     /* stored, then the switch reads AX: only volatile keeps the dead store */
    char buf[320];

    d_61eb_d772 = 0;
    d_61eb_d674 = d_61eb_d768 >= 15 && f_215d_0d96(9) >= 2 ? (int)f_215d_0d96(2) + 1 : (int)f_215d_0d96(2);
    if (d_61eb_d674 == 2 || d_61eb_d674 == 1 && d_3334_fefe[team == d_61eb_d668][p] == 1) {
        if (f_215d_0d96(2) == 0)
            strcpy(d_432e_cf1b, "Sent off");
        else
            strcpy(d_432e_cf1b, "Shown the red card");
        d_3334_fefe[team == d_61eb_d668][p] = 2;
        d_3334_ff7e[team == d_61eb_d666 ? 0 : 1][p] = d_61eb_d69e;
        if (team < 38) {
            sprintf(buf, "%s%04d", d_432e_cf6b, d_3334_f9f8[team][p]);
            strcpy(d_432e_cf6b, buf);
            f_b26d_3f53(d_3334_f9f8[team][p], 3);
        }
        d_61eb_d772 = 2;
        f_7f4a_193a(team);
        d_61eb_d722 += f_215d_0d96(2) * 2;
    } else if (d_61eb_d674 == 1) {
        if (f_215d_0d96(2) == 0)
            strcpy(d_432e_cf1b, "Booked");
        else
            strcpy(d_432e_cf1b, "Shown the yellow card");
        d_3334_fefe[team == d_61eb_d668][p] = 1;
        if (team < 38) {
            sprintf(buf, "%s%04d", d_432e_d0ab, d_3334_f9f8[team][p]);
            strcpy(d_432e_d0ab, buf);
            f_b26d_3f53(d_3334_f9f8[team][p], 2);
        }
        d_61eb_d772 = 6;
    } else if (d_61eb_d674 == 0) {
        switch (r = f_215d_0d96(4)) {
        case 0: strcpy(d_432e_cf1b, "warned"); break;
        case 1: strcpy(d_432e_cf1b, "lectured"); break;
        case 2: strcpy(d_432e_cf1b, "ticked off"); break;
        case 3: strcpy(d_432e_cf1b, "spoken to"); break;
        }
        d_61eb_d772 = 1;
    }
    if (d_61eb_d6c8 + d_61eb_d6ca > 0 && d_61eb_d772 > 0) {
        f_7f4a_0b12();
        if (team == d_61eb_d666)
            f_7a45_220c(d_61eb_d6b4, d_61eb_d6b4, d_61eb_d6b6);
        else
            f_7a45_220c(d_61eb_d6b6, d_61eb_d6b4, d_61eb_d6b6);
        strcpy(buf, d_432e_cceb);
        f_1a83_3c08(3.0, 8.5, -d_61eb_d66a, d_61eb_d5e0, 0, buf);
        f_1a83_3a43(strlen(d_432e_cceb) + 5, 8.5, d_61eb_d772, d_432e_cf1b);
        if (d_61eb_d9f6 == 0) {
            if (d_432e_cd8b[strlen(d_432e_cd8b) - 1] == '*') {
                d_432e_cd8b[strlen(d_432e_cd8b) - 1] = 0;
            } else {
                strcat(d_432e_cd8b, " ");
                strcat(d_432e_cd8b, d_432e_cd3b);
            }
            f_215d_0df0(75);
            f_7f4a_0b12();
            sprintf(buf, "He %s", d_432e_cd8b);
            f_7f4a_0a9c(team, buf);
        }
        f_215d_0df0(75);
        f_7f4a_0b12();
        if (d_61eb_d772 == 2 && f_1a83_2ad4(team)) {
            d_61eb_d9de = -1;
            f_b6f6_0000(team);
            d_61eb_d9de = 0;
            for (d_61eb_d5aa = 0; d_61eb_d5aa <= 15; d_61eb_d5aa++)
                d_3334_fefe[team == d_61eb_d668 ? 3 : 2][d_61eb_d5aa] = 0;
            f_7f4a_193a(team);
            f_7f4a_0714(d_61eb_d9b2);
            f_7f4a_0a9c(d_61eb_d666, d_432e_cba7);
        }
    }
}

/* the commentary's fouls */
static char far *d_61eb_1fd8[] = {
    "brought down", "hacked at", "kicked", "body checked", "obstructed", "up-ended",
    "tugged at", "flattened", "tripped", "pushed", "shoved", "held back", "clattered into",
    "handballed*", "said too much*", "feigned injury*", "gestured to the crowd*",
    "kicked the ball away*", "punched", "headbutted", "brought down", "cynically hacked",
    "spat at", "elbowed", "shoved the ref*", "dived deliberately*", "swore at the ref*",
    "intimidated the ref*"
};

void f_7a45_41ad(void)
{
    d_61eb_d774 = f_215d_0d96(100) + 1;
    if (d_61eb_d774 <= 80)
        d_61eb_d768 = f_215d_0d96(18);
    else
        d_61eb_d768 = f_215d_0d96(10) + 18;
    strcpy(d_432e_cd8b, d_61eb_1fd8[d_61eb_d768]);
}

void f_7a45_420a(int team, char c)
{
    int saved;
    char buf[320];
    int k;

    saved = d_61eb_d5de;
    d_61eb_d5de = team;
    for (;;) {
        f_1a83_48f9("Tactical move");
        f_1a83_4327(1.0, 4.0, d_61eb_d5de);
        strcpy(buf, "*Exit|Tactical change|Opponents team|");
        if (c == 0)
            strcat(buf, "Match Stats|");
        f_1a83_2da6(7, "", buf);
        /* the label makes BCC pop 2eaa's arguments before this call, as the original */
    l:  f_1a83_3122(c + 3);
        k = d_61eb_d59e;
        if (k == 1) {
            d_61eb_d9de = -1;
            f_b6f6_0000(d_61eb_d5de);
            d_61eb_d9de = 0;
            for (d_61eb_d5aa = 0; d_61eb_d5aa <= 15; d_61eb_d5aa++)
                d_3334_fefe[d_61eb_d5de == d_61eb_d668 ? 3 : 2][d_61eb_d5aa] = 0;
            f_7f4a_193a(d_61eb_d5de);
        } else if (k == 2) {
            if (d_61eb_d5de == d_61eb_d666)
                d_61eb_d680 = d_61eb_d668;
            else
                d_61eb_d680 = d_61eb_d666;
            f_b6f6_0000(d_61eb_d680);
        } else if (k == 3) {
            f_7f4a_2d1a();
            f_7f4a_3a06(d_61eb_d6b4, d_61eb_d6b6, 0);
        } else
            break;
    }
    if (c == 0) {
        f_7f4a_0714(d_61eb_d9b2);
        f_7f4a_0a9c(d_61eb_d666, d_432e_cba7);
    }
    d_61eb_d5de = saved;
}

void f_7a45_4357(int team, int mode)
{
    char buf[320];

    f_7a45_4837(team);
    if (mode == 1)
        d_61eb_d778 = 15;
    if (team == d_61eb_d666) {
        d_61eb_d764 = d_61eb_d668;
        d_61eb_d776 = d_61eb_d6e6;
    } else {
        d_61eb_d764 = d_61eb_d666;
        d_61eb_d776 = d_61eb_d6ea;
    }
    d_61eb_d68c = d_3334_f278[team][0][d_61eb_d778];
    if (d_61eb_d776 == 0) {
        if (d_61eb_d68c > 7) {
            d_61eb_d5d8 = 5;
            d_61eb_d5aa = 10;
        } else {
            d_61eb_d5d8 = 2;
            d_61eb_d5aa = 7;
        }
    }
    if (d_61eb_d776 == 1) {
        d_61eb_d5d8 = 8;
        d_61eb_d5aa = 10;
    }
    if (d_61eb_d776 == 2) {
        d_61eb_d5d8 = 2;
        d_61eb_d5aa = 10;
    }
    d_61eb_d77a = 0;
    d_61eb_d5b8 = -1;
    for (d_61eb_d5f0 = 0; d_61eb_d5f0 <= 15; d_61eb_d5f0++) {
        if (d_3334_fefe[team == d_61eb_d668][d_61eb_d5f0] == 6) {
            d_61eb_d5b8 = d_61eb_d5f0;
            d_61eb_d5f0 = 15;
        } else if (d_3334_f278[team][0][d_61eb_d5f0] >= d_61eb_d5d8
                   && d_3334_f278[team][0][d_61eb_d5f0] <= d_61eb_d5aa
                   && d_3334_fefe[team == d_61eb_d668][d_61eb_d5f0] < 2) {
            d_61eb_d71e = f_7f4a_1525(d_61eb_d5f0, team);
            if (d_61eb_d77c - d_61eb_d71e > d_61eb_d77a) {
                d_61eb_d77a = d_61eb_d77c - d_61eb_d71e;
                d_61eb_d5b8 = d_61eb_d5f0;
            }
        }
    }
    if (d_61eb_d5b8 != -1) {
        strcpy(d_432e_bc07, "tactical");
        if (d_3334_fefe[team == d_61eb_d668][d_61eb_d5b8] == 6) {
            strcpy(d_432e_bc07, "enforced");
            d_3334_f278[team][0][d_61eb_d778] = d_3334_f278[team][0][d_61eb_d5b8];
        }
        if (team < 38) {
            strcpy(d_432e_bc57, f_1a83_45b4(d_3334_f9f8[team][d_61eb_d778]));
            strcat(d_432e_bc57, " on for ");
            strcat(d_432e_bc57, f_1a83_45b4(d_3334_f9f8[team][d_61eb_d5b8]));
        } else {
            sprintf(d_432e_bc57, "Their No.%s on for their No.%s",
                    f_1a83_2d52(d_61eb_d778 + 1, 0), f_1a83_2d52(d_61eb_d5b8 + 1, 0));
        }
        d_3334_fefe[team == d_61eb_d668][d_61eb_d778] = 0;
        if (d_3334_fefe[team == d_61eb_d668][d_61eb_d5b8] == 6)
            d_3334_fefe[team == d_61eb_d668][d_61eb_d5b8] = 3;
        else
            d_3334_fefe[team == d_61eb_d668][d_61eb_d5b8] = 5;
        d_3334_ff7e[team == d_61eb_d666 ? 0 : 1][d_61eb_d5b8] = d_61eb_d69e;
        d_3334_ff5e[team == d_61eb_d666 ? 0 : 1][d_61eb_d778] = d_61eb_d69e;
        d_28d4_194e[team == d_61eb_d668][d_61eb_d778 - 11] = d_61eb_d5b8;
        d_3334_bb80[team == d_61eb_d668][d_61eb_d778 - 11] = d_61eb_d69e;
        if (team == d_61eb_d666)
            d_61eb_d9bd++;
        else
            d_61eb_d9be++;
        f_7f4a_193a(team);
        if (d_61eb_d6c8 + d_61eb_d6ca > 0) {
            sprintf(buf, "%s %s move", (char far *)d_61eb_b0ec[team], d_432e_bc07);
            f_7f4a_0a9c(team, buf);
            f_215d_0df0(75);
            f_7f4a_0a9c(team, d_432e_bc57);
            f_215d_0df0(100);
            f_7f4a_0a9c(d_61eb_d666, d_432e_cba7);
        }
    }
    if (team == d_61eb_d666) {
        if (d_61eb_d9ed)
            d_61eb_d9ed = 0;
        else if (d_61eb_d9ef)
            d_61eb_d9ef = 0;
        else if (d_61eb_d9f1)
            d_61eb_d9f1 = 0;
        else if (d_61eb_d9f3)
            d_61eb_d9f3 = 0;
    } else {
        if (d_61eb_d9ee)
            d_61eb_d9ee = 0;
        else if (d_61eb_d9f0)
            d_61eb_d9f0 = 0;
        else if (d_61eb_d9f2)
            d_61eb_d9f2 = 0;
        else if (d_61eb_d9f4)
            d_61eb_d9f4 = 0;
    }
}

void f_7a45_4837(int team)
{
    int a;
    int b;
    int c;
    int d;

    d_61eb_d764 = team == d_61eb_d666 ? d_61eb_d668 : d_61eb_d666;
    a = -5000;
    b = -5000;
    c = -5000;
    d = -5000;
    if (d_3334_ff09[team == d_61eb_d668][0] == 4)
        a = f_7f4a_1525(11, team);
    if (d_3334_ff09[team == d_61eb_d668][1] == 4)
        b = f_7f4a_1525(12, team);
    if (d_3334_ff09[team == d_61eb_d668][2] == 4)
        c = f_7f4a_1525(13, team);
    if (d_3334_ff09[team == d_61eb_d668][3] == 4)
        d = f_7f4a_1525(14, team);
    if (d > b && d > c && d > a) {
        d_61eb_d778 = 14;
        d_61eb_d77c = d;
    } else {
        d_61eb_d778 = 11;
        d_61eb_d77c = a;
    }
}

void f_7a45_4961(float x, float y)
{
    f_215d_07ec(18, 112, 261, 120);
    f_1a83_3697(x, 15.0, 6, "Attacking...");
    f_1a83_3697(y, 15.0, 12, "Defending...");
}

void f_7a45_49a7(void)
{
    f_7f4a_0000(d_61eb_d6fa, d_61eb_d704, 0, 2);
    f_7f4a_0000(d_61eb_d6fe, d_61eb_d700, 1, 1);
    f_7f4a_0000(d_61eb_d702, d_61eb_d6fc, 2, 0);
}
