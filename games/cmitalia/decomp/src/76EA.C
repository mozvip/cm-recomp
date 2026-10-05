/* @at 76ea:0000 */
/* @data 5d51:2100 */
/* @module */

/* Overlay 76ea: CM93's overlay 7c74 (games/cm93/decomp/src/7C74.C) changed for CM Italia:
 * the match: setting it up, the ground and gate, the halves, extra time and penalties,
 * the clock and score, keys during play, fouls, injuries, bookings and sendings off with
 * their commentary, tactics and substitutions. */
#include <stdio.h>
#include <string.h>
#include <mem.h>
#include <math.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_76ea_0000(char far *s);
void f_76ea_00ce(int team);
void f_76ea_00eb(void);
void f_76ea_074a(char flag, char far *s);
void f_76ea_08a6(void);
void f_76ea_0a70(void);
void f_76ea_0b86(void);
void f_76ea_11e0(void);
void f_76ea_1442(void);
void f_76ea_1c81(void);
void f_76ea_1d87(int team);
void f_76ea_2010(void);
char f_76ea_2325(int club, int round);
char f_76ea_2353(int club, int round);
void f_76ea_2364(int a, int b, int c);
void f_76ea_24e8(void);
void f_76ea_263c(void);
void f_76ea_270c(void);
void f_76ea_27dc(void);
void f_76ea_284a(void);
void f_76ea_28b8(void);
void f_76ea_2a9a(void);
unsigned char f_76ea_2c7c(unsigned char a, int b);
unsigned char f_76ea_2cb8(unsigned char a, int b);
void f_76ea_2cf4(void);
void f_76ea_2fd9(void);
void f_76ea_30b4(int team);
void f_76ea_3183(int team);
void f_76ea_3208(int team);
int f_76ea_324d(int team, int p);
void f_76ea_3412(int team);
void f_76ea_398c(int a, int b, int team, int n);
void f_76ea_3f45(int team, int p);
void f_76ea_4433(void);
void f_76ea_4495(int team, char c);
void f_76ea_4602();             /* no prototype: 38b3 passes it two arguments */
void f_76ea_4aed(int team);
void f_76ea_4c0b(float x, float y);
void f_76ea_4c7c(void);

void f_1646_3e54(float x, float y, int a, int b, int c, char far *s);
void f_1646_3686(float x, float y, int bg, int fg, int w, char far *s);
void f_1646_357e(int x, int y, int colour, char far *s);
void f_1d5e_0dbd(int ticks);
void f_1646_545c(int a, char b);
char f_1646_2cc9(int x);
long f_1d5e_0d6a(long n);
char far *f_1d5e_0158();
char far *f_1d5e_0f31(char far *s, unsigned n);
void f_1d5e_114c(unsigned x, int y, unsigned x2, unsigned y2, int dy, int colour);
void f_1d5e_0fe3(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_1d5e_08cc(int c);
void f_1d5e_08d7(int c);
void f_1d5e_08e2(int x1, int y1, int x2, int y2);
void f_1646_4ba0(char far *title);
char far *f_1646_4b1e(int division, char full);
int f_1646_6aa9(int x);
char f_1646_258b(int);
char f_1646_2646(int);
char f_1646_2674(int);
char f_1646_2a0c(int, int);
char f_1646_2833(int, int);
char f_1646_28e4(int, int);
char f_1646_297b(int, int);
char f_1646_2ba4(int w);
unsigned char f_1646_717d(char team);
char f_1646_2b65(int a, int b);
void f_1646_58a8(int a);
void f_7c1d_2f57(void);
void f_7c1d_3ca2(int a, int b, char c);
void f_7c1d_2dcd(int team);
void f_a7f0_41ac(int team);
void f_b0f1_5b01(int team);
void f_8119_00c1(void);
void f_8119_0000(void);
extern int d_5d51_da0a;
extern int d_5d51_d924;
extern char near *d_5d51_b476[];
extern char near *d_5d51_b4c6[];
extern int d_5d51_d9f2;
extern int d_5d51_d8ec;
extern char d_5d51_d5d4;
extern int d_5d51_da06;
extern int d_5d51_d8ea;
extern int d_5d51_d950;
extern int d_5d51_d8e8;
extern int d_5d51_d8e6;
extern int d_5d51_d8e4;
extern int d_5d51_d9e6;
extern int d_5d51_d942;
extern int d_5d51_d940;
extern int d_5d51_d8f4;
extern int d_5d51_d8f2;
extern int d_5d51_d8e2;
extern char d_5d51_d5c6;
extern int d_5d51_d8e0;
extern int d_5d51_d8de;
extern int d_5d51_da04;
extern int d_5d51_d8dc;
extern int d_5d51_d9b8;
extern char d_5d51_d5c5;
extern int d_5d51_d8da;
extern int d_5d51_d8d8;
extern int d_5d51_d8d6;
extern int d_5d51_d8d4;
extern char d_5d51_d5c4;
extern int d_5d51_d8d2;
extern int d_5d51_d8d0;
extern int d_5d51_d8ce;
extern int d_5d51_d8cc;
extern int d_5d51_d8ca;
extern char d_5d51_d407;
extern int far d_2414_ecec[];
extern int far d_44d7_93fa[];
extern int far d_44d7_94c2[];
extern int far d_4f37_1390[][2][100];
extern char far d_2414_5894[];
struct score { unsigned home : 4; unsigned away : 4; };
extern struct score far d_2414_8414[];
extern int far d_3404_40aa[][38];
extern char far d_2414_5460[][38];
extern char far d_2414_42b4[];
extern char far d_2414_4304[];
extern char far d_2414_4354[];
extern char far d_2414_4264[];
extern char far d_2414_43a4[];
extern char far d_2414_4214[];
extern unsigned char far d_3404_443a[][40];
char f_1646_2aa7(int);
char f_1646_2b06(int);
int f_1646_2c39(int, int);
int f_1646_46a0(int team);
float f_1d5e_1089(void);
int f_1d5e_1308(int a, int b);
int f_1d5e_136a(int a, int b);
float f_1d5e_1342(float a, float b);
long f_1d5e_131d(long a, long b);
void f_9e79_0f6c(int t, int k, char c);
void f_71c8_3038(int team);
int f_71c8_2795(int week, int n);
void f_8119_16ae(int team, int b, int c);
extern char near *d_5d51_b4ca[];
extern char near *d_5d51_b4c2;
extern char near *d_5d51_b4c4;
extern int d_5d51_da0e;
extern int d_5d51_d954;
extern int d_5d51_d9d0;
extern int d_5d51_d8c8;
extern int d_5d51_d8c6;
extern int d_5d51_d8c4;
extern int d_5d51_d8b8;
extern int d_5d51_d8b4;
extern long d_5d51_d485;
extern float d_5d51_d529;
extern float d_5d51_d525;
extern unsigned char d_5d51_d5f8;
extern int d_5d51_d9c4;
extern float d_5d51_d521;
extern float d_5d51_d51d;
extern float d_5d51_d519;
extern float d_5d51_d515;
extern unsigned char far d_3404_45f2[];
extern unsigned char far d_3404_452a[];
extern unsigned char far d_3404_4dc2[];
extern unsigned char far d_3404_4552[];
extern int d_5d51_d8c2;
extern int d_5d51_d8c0;
extern int d_5d51_d8be;
extern int d_5d51_d8bc;
extern int d_5d51_d8ba;
extern int d_5d51_d8b6;
extern int d_5d51_d928;
extern int d_5d51_d9a0;
extern int d_5d51_d8b2;
extern int d_5d51_d8b0;
extern int d_5d51_d8ae;
extern int d_5d51_d8ac;
extern int d_5d51_d8aa;
extern int d_5d51_d8a8;
extern int d_5d51_d8a6;
extern int d_5d51_d8a4;
extern int d_5d51_d89c;
extern int d_5d51_d89a;
extern int d_5d51_d8a2;
extern int d_5d51_d90a;
extern int d_5d51_d8a0;
extern int d_5d51_d89e;
extern int d_5d51_d93a;
extern int d_5d51_d938;
extern int d_5d51_d93c;
extern char d_5d51_d5c3;
extern char d_5d51_d5dd;
extern char d_5d51_d5c2;
extern char d_5d51_d5c1;
extern int d_5d51_d898;
extern int d_5d51_d896;
extern int d_5d51_d894;
extern int d_5d51_d892;
extern int d_5d51_d890;
extern int d_5d51_d88e;
char f_1646_5dff(int player);
void f_a7f0_40bd(int team);
void f_b0f1_5aa5(unsigned team, unsigned char w, unsigned char n);
void f_a7f0_8152(int player, char c);
extern unsigned char far d_4f37_50d2[][140];
extern unsigned char far d_4f37_0f02[];
extern unsigned char far d_4f37_099e[];
extern unsigned char far d_4f37_1176[];
extern int far d_3404_4226[];
extern unsigned char far d_3404_24e6[];
extern long far d_3404_4012[];
extern unsigned char far d_3404_0d8e[][16];
extern unsigned char far d_3404_0dce[][16];
extern int far d_3404_0e34[][16];
extern unsigned char far d_44d7_0000[][1500];
extern int far d_3404_0e2e[];
extern long far d_2414_fcec[][16];
extern unsigned char d_5d51_d5ec;
extern unsigned char d_5d51_d5eb;
extern char d_5d51_d5d3;
extern int far d_44d7_9624[][26];
extern unsigned char far d_2414_af3d[][4];
extern unsigned char d_5d51_da36[][4];
extern char far d_2414_4174[];
extern char far d_2414_42c8[];
extern int d_5d51_d9fe;
extern char far d_44d7_8e60[];
extern unsigned char far d_3404_5142[][3][16];
extern unsigned char far d_3404_1334[][3][16];
unsigned char f_b0f1_2786(int player);
void f_7c1d_1625(int team);
void f_7c1d_1b40(int team);
void f_7c1d_079e(char c);
void f_1d5e_0c37(void);
void f_7c1d_030a(void);
void f_7c1d_0c36(int team, char far *s);
void f_7c1d_0f30(void);
extern int d_5d51_d88c;
extern int d_5d51_d88a;
extern int d_5d51_d9f0;
extern int d_5d51_d888;
extern int d_5d51_d886;
extern char d_5d51_d5b2;
extern int d_5d51_d884;
extern int d_5d51_d882;
extern int d_5d51_d880;
extern int d_5d51_d87e;
extern int d_5d51_d93e;
extern int d_5d51_d9c8;
extern char d_5d51_d5c0;
extern unsigned char far d_3404_457a[];
extern unsigned char far d_3404_45a2[];
extern unsigned char far d_3404_50e2[][16];
extern unsigned char far d_3404_448a[];
extern unsigned char far d_3404_44b2[];
extern unsigned char far d_4f37_0b6a[];
extern unsigned char far d_4f37_0d36[];
extern char far d_2414_40d4[];
extern char far d_2414_41d8[];
extern char far d_2414_4188[];
void f_a13d_22c6(char far *title);
void f_7c1d_2aec(int team);
int f_1646_5602(int a);
void f_a13d_4a1b(int player, int a, char b);
void f_8539_4fbd(int player, int a);
void f_1d5e_0929(int x1, int y1, int x2, int y2);
void f_1646_50c5(int a, float x, float y, int c, int d, int e, char far *s);
char far *f_1646_2f4b(int x, char c);
char far *f_1646_48c0(int player);
char far *f_1646_470f(int player);
void far *f_1d5e_1618(int handle, int page);
extern int d_5d51_d616;
extern int d_5d51_d8f6;
extern int d_5d51_d9cc;
extern int d_5d51_d92a;
extern int d_5d51_0e2e[];
extern char d_5d51_d5e1;
extern char d_5d51_d5df;
extern int d_5d51_d8f0;
extern int d_5d51_d9ba;
extern int d_5d51_d9b4;
extern int d_5d51_d8ee;
extern float d_5d51_d551;
extern int d_5d51_dda0;
extern char far *d_5d51_d9f6;
extern unsigned char far d_3404_1176[];
extern unsigned char far d_3404_12c2[];
extern unsigned char far d_3404_0b94[];
extern int far d_3404_1390[][2][94];
extern char far d_2414_4a68[];
extern char far d_2414_5152[];
extern char far d_2414_48d8[];
extern char far d_2414_4842[];
extern char far d_2414_55d0[][80];
extern char far d_2414_47f2[];
extern char far d_2414_47a2[];
extern char far d_2414_4752[];
extern char far d_2414_4702[];
extern char far d_2414_46b2[];
extern unsigned char far d_3404_3b2e[][140];
extern int d_5d51_dd90;
extern unsigned char far d_3404_099e[];
extern char far d_2414_d616[];
extern char far d_2414_00ea[];
extern char far d_2414_4662[];
extern char far d_2414_4612[];
extern char far d_2414_45c2[];
void f_7c1d_1218(int team, int a, int b);
void f_7c1d_0b15(void);
void f_7c1d_0239(int team);
void f_7c1d_0371(int a, char c, char d, char e, int b, int team);
void f_1d5e_0822(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
extern int d_5d51_d978;
extern int d_5d51_d87a;
extern int d_5d51_d87c;
extern int d_5d51_d878;
extern char d_5d51_d5f7;
extern int d_5d51_d876;
extern int d_5d51_d872;
extern int d_5d51_d870;
extern int d_5d51_d86e;
extern int d_5d51_d86c;
extern int d_5d51_d86a;
extern int d_5d51_d868;
extern int d_5d51_d866;
extern int d_5d51_d864;
extern char d_5d51_d563;
extern int d_5d51_d614;
extern int d_5d51_d612;
extern int d_5d51_d9b2;
extern int d_5d51_d862;
extern int d_5d51_d860;
extern int d_5d51_d85e;
extern int d_5d51_d85c;
extern int d_5d51_d85a;
extern int d_5d51_d858;
extern char d_5d51_d5bf;
extern char d_5d51_d5bd;
extern char d_5d51_d5be;
extern char d_5d51_d5d2;
void f_b0f1_3e09(char team);
void f_b0f1_3900(char team);
void f_b0f1_41c6(char team);
void f_b0f1_37af(char team);
void f_b0f1_3b19(char team);
unsigned char f_b0f1_42e9(char team);
extern char far d_2414_4572[];
extern char far d_2414_44d2[];
extern char far d_2414_4482[];
extern unsigned char far d_3404_0c4c[];
extern unsigned char far d_3404_502e[][60];
extern unsigned char far d_3404_4f7a[][60];
int f_1d5e_0c17(void);
char far *f_1d5e_0ced(void);
char f_1646_66f8(int a, int b);
char f_1646_68af(int x);
char f_1646_68d1(int x);
char f_1646_68ee(int x);
char f_1646_690b(int x);
char f_1646_692d(int x);
char f_1646_694f(int x);
void f_7c1d_019a(int minute);
unsigned char f_7c1d_1717(int p, int team);
extern int d_5d51_d856;
extern int d_5d51_d854;
extern int d_5d51_d852;
extern int d_5d51_d850;
extern char d_5d51_d5bc;
extern char d_5d51_d5b8;
extern char d_5d51_d5ba;
extern char d_5d51_d5b5;
extern char d_5d51_d5b4;
extern char d_5d51_d5b3;
extern char d_5d51_d5b1;
extern char d_5d51_d5f6;
extern int d_5d51_d934;
extern int d_5d51_d84e;
extern int d_5d51_d84c;
extern int d_5d51_d91c;
extern int d_5d51_d97e;
extern int d_5d51_d96a;
extern int d_5d51_d84a;
extern int d_5d51_d848;
extern int d_5d51_d846;
extern int d_5d51_d844;
extern int d_5d51_d842;
extern int d_5d51_d840;
extern int d_5d51_d9c2;
extern char far d_2414_442e[];
extern char far d_2414_43de[];
void f_7c1d_0cc1(void);
void f_b8e8_0000(char team);
void f_1646_3c89(float x, float y, int colour, char far *s);
void f_1646_459b(float x, float y, int team);
void f_1646_2fa4(int n, char far *title, char far *items);
void f_1646_3348(int last);
extern char d_5d51_d5cb;
extern int d_5d51_d834;
extern int d_5d51_d836;
extern int d_5d51_d838;
extern int d_5d51_d83a;
extern int d_5d51_d9ca;
extern char far d_2414_424e[];
extern char far d_2414_429e[];
extern char far d_2414_42ee[];
extern char far d_2414_433e[];
extern char far d_2414_438e[];
void f_7c1d_0000(int a, int b, int c, int d);
char far *f_1646_4849(int player);
void f_1646_38d0(float x, float y, int colour, char far *s);
extern int d_5d51_d82c;
extern int d_5d51_d82e;
extern int d_5d51_d830;
extern int d_5d51_d832;
extern char d_5d51_d9ea[][2];
extern char d_5d51_d998[][2];
extern char far d_2414_5488[];
extern char far d_2414_5462[];
char f_1646_60fb(char team, char week, char n);
extern unsigned char far d_3404_0dd9[][16];
extern char far d_2414_4134[];
extern char far d_2414_3f40[];
extern char far d_2414_3ef0[];
extern char far d_2414_3db0[];
extern char far d_2414_3ae0[];
extern char far d_2414_3c20[];
extern char far d_2414_3d60[];
extern char far d_2414_5024[];
extern char far d_2414_5074[];
extern unsigned char far d_3404_0dae[][16];
extern unsigned char far d_3404_5197[][5];
extern unsigned char far d_44d7_8c95[][5];
extern int d_5d51_da0c;
extern unsigned char far d_4f37_7792[][140];
extern unsigned char far d_4f37_0f80[];
extern unsigned char far d_2414_af3e[][4];
extern char far d_2414_4124[];
extern unsigned char far d_4f37_0bba[];
extern unsigned char far d_4f37_0db0[];
extern char far d_2414_4034[];
extern char far d_2414_3fe4[];
extern char d_5d51_d5bb;
extern char d_5d51_d5b9;
extern char d_5d51_d5b7;
extern char d_5d51_d5b6;
extern int d_5d51_d83c;
extern int d_5d51_d83e;
extern char far d_2414_3f90[];


void f_76ea_0000(char far *s)
{
    char buf[80];

    sprintf(buf, "%*s", (72 - strlen(s) * 4) / 8 + strlen(s), s);
    f_1646_3e54(1.5, 21.875, 1, 2, 0x90, buf);
    f_1d5e_0dbd(75);
    f_1646_3e54(1.5, 21.875, 1, 4, 0x90, "       DONE");
    f_1646_545c(d_5d51_da0a, 0);
}

void f_76ea_00ce(int team)
{
    if (team > 0) {
        f_1646_545c(team, 0);
        d_5d51_d924 = 0;
    }
}

/* the week's matches, played in the background, with the latest results on screen
 * (CM1's unmapped_f_7555_0634) */
void f_76ea_00eb(void)
{
    char buf[80];
    unsigned n;

    for (d_5d51_d9f2 = 0; d_5d51_d9f2 < 64; d_5d51_d9f2++)
        d_2414_ecec[d_5d51_d9f2] = 0;
    n = d_5d51_d9f2 = 0;
    d_5d51_d8ec = -1;
    d_5d51_d5d4 = -1;
    d_44d7_93fa[d_5d51_da06] = d_5d51_d8ea;
    d_44d7_94c2[d_5d51_da06] = d_5d51_d950;
    f_76ea_08a6();
    d_5d51_d8e8 = 1;
    d_5d51_d8e6 = (d_5d51_da06 & 1 ? 910 : 440) + f_1d5e_0d6a(3);
    if (f_1646_258b(d_5d51_da06) || f_1646_2646(d_5d51_da06))
        d_5d51_d8e6 += 5;
    for (d_5d51_d8e4 = 0; d_5d51_d8e4 <= d_5d51_d950 - 1; d_5d51_d8e4++) {
        d_5d51_d9e6 = d_2414_43a4[d_5d51_d8e4] - 32;
        d_5d51_d942 = d_4f37_1390[d_5d51_d9e6][0][d_5d51_da06] / 32;
        d_5d51_d940 = d_4f37_1390[d_5d51_d9e6][1][d_5d51_da06] / 32;
        d_5d51_d8f4 = d_5d51_d942;
        d_5d51_d8f2 = d_5d51_d940;
        f_76ea_11e0();
        f_76ea_1442();
        f_76ea_0a70();
        f_76ea_0b86();
        f_76ea_2010();
        f_76ea_1c81();
        d_5d51_d5c6 = d_5d51_d8e2 > 90 ? -1 : 0;
        d_5d51_d8e2 = -1;
        f_7c1d_2f57();
        if (d_5d51_d8e0 + d_5d51_d8de > 0) {
            f_1646_58a8(0);
            f_7c1d_3ca2(d_5d51_d8f4, d_5d51_d8f2, -1);
        }
        if (d_5d51_d942 < 38)
            f_7c1d_2dcd(d_5d51_d942);
        if (d_5d51_d940 < 38)
            f_7c1d_2dcd(d_5d51_d940);
        memcpy(d_2414_5894 + d_5d51_d9e6 * 174, d_2414_8414, 174);
        if (d_5d51_d942 < 38) {
            d_3404_40aa[0][d_5d51_d942] = d_5d51_d8ea + d_5d51_d9e6;
            d_3404_40aa[1][d_5d51_d942] = d_5d51_d9e6;
            d_3404_40aa[2][d_5d51_d942] = d_5d51_da06 - 1;
            d_2414_5460[0][d_5d51_d942] = -1;
            f_a7f0_41ac(d_5d51_d942);
            f_b0f1_5b01(d_5d51_d942);
        }
        if (d_5d51_d940 < 38) {
            d_3404_40aa[0][d_5d51_d940] = d_5d51_d8ea + d_5d51_d9e6;
            d_3404_40aa[1][d_5d51_d940] = d_5d51_d9e6;
            d_3404_40aa[2][d_5d51_d940] = d_5d51_da06 - 1;
            d_2414_5460[0][d_5d51_d940] = -1;
            f_a7f0_41ac(d_5d51_d940);
            f_b0f1_5b01(d_5d51_d940);
        }
        f_8119_00c1();
        if (d_5d51_d407 == 1 && d_5d51_d8e0 + d_5d51_d8de == 0 && d_5d51_d5c6 == 0
            && (f_1d5e_0d6a(3) > 0 || d_5d51_d8e4 == 0
                || f_1646_258b(d_5d51_da06) && f_1646_717d(d_5d51_d942) == 0)
            && d_5d51_d950 > 3 && n < 12) {
            if (d_5d51_da06 % 2 == 0)
                strcpy(d_2414_4354, "Today's");
            else
                strcpy(d_2414_4354, "Tonights");
            strcpy(buf, d_2414_4304);
            if (f_1646_258b(d_5d51_da06) || f_1646_2646(d_5d51_da06))
                sprintf(d_2414_4304, "%s  %s", f_1646_4b1e(f_1646_717d(d_5d51_d942) + 1, 2), buf);
            else if (f_1646_2674(d_5d51_da06))
                sprintf(d_2414_4304, "CUP  %s", buf);
            else if (f_1646_2a0c(d_5d51_da06, d_5d51_d9e6 + 1))
                sprintf(d_2414_4304, "AI  %s", buf);
            else if (f_1646_2833(d_5d51_da06, d_5d51_d9e6 + 1))
                sprintf(d_2414_4304, "UE  %s", buf);
            else if (f_1646_28e4(d_5d51_da06, d_5d51_d9e6 + 1))
                sprintf(d_2414_4304, "CW  %s", buf);
            else if (f_1646_297b(d_5d51_da06, d_5d51_d9e6 + 1))
                sprintf(d_2414_4304, "EC  %s", buf);
            else if (f_1646_2ba4(d_5d51_da06))
                sprintf(d_2414_4304, "PL  %s", buf);
            else if (d_5d51_da06 <= 12)
                sprintf(d_2414_4304, "FR  %s", buf);
            strcat(d_2414_4354, " Result");
            if (d_5d51_d950 > 1)
                strcat(d_2414_4354, "s");
            if (d_5d51_d8e8 == 1) {
                f_1646_4ba0("");
                f_1d5e_08cc(16);
                f_1d5e_08e2(20, 20, 308, 188);
                f_1d5e_08cc(20);
                f_1d5e_08e2(16, 16, 304, 184);
                f_1646_3e54(2.5, 3.0, 1, 8, 0x119, "           Latest Results");
                f_76ea_074a(1, d_2414_4354);
                sprintf(buf, "Week %d Season %d", f_1646_6aa9(d_5d51_da06), d_5d51_da04);
                f_76ea_074a(0, buf);
            }
            if (d_5d51_d8e8 == 3 || f_1d5e_0d6a(3) == 0) {
                if (d_5d51_d8e8 > 1)
                    f_76ea_074a(0, "");
                sprintf(d_2414_42b4, "%d", d_5d51_d8e6);
                sprintf(buf, "%c.%s", d_2414_42b4[0], f_1d5e_0f31(d_2414_42b4, 2));
                f_76ea_074a(1, buf);
                d_5d51_d8e6++;
            }
            f_76ea_074a(0, d_2414_4304);
            n++;
        }
    }
    if (d_5d51_d8e8 > 1) {
        f_76ea_074a(0, "");
        f_76ea_074a(0, "");
        f_76ea_074a(0, "Classified Check Follows");
    }
    f_8119_0000();
    d_5d51_d8ea += d_5d51_d950;
    d_5d51_d5d4 = 0;
}

void f_76ea_074a(char flag, char far *s)
{
    char buf[320];

    if (d_5d51_d8e8 == 17) {
        for (d_5d51_d8dc = 1; d_5d51_d8dc <= 4; d_5d51_d8dc++) {
            f_1d5e_114c(16, 38, 304, 183, 2, 20);
            f_1d5e_08d7(20);
            f_1d5e_0fe3(18, 38, 302, 38);
            f_1d5e_0fe3(18, 39, 302, 39);
        }
        d_5d51_d8e8 = 16;
    }
    if (strlen(s) != 0) {
        if (flag)
            f_1646_3686(3.0, d_5d51_d8e8 + 4.875, 1, 2, 0, s);
        else
            for (d_5d51_d9b8 = 1; d_5d51_d9b8 <= strlen(s); d_5d51_d9b8++) {
                sprintf(buf, "%c", s[d_5d51_d9b8 - 1]);
                f_1646_357e((d_5d51_d9b8 - 1) * 6 + 32, d_5d51_d8e8 * 8 + 39, 1, buf);
                f_1d5e_0dbd(1);
            }
    }
    d_5d51_d8e8++;
}

void f_76ea_08a6(void)
{
    char buf[320];

    strcpy(d_2414_4264, "");
    strcpy(d_2414_43a4, "");
    for (d_5d51_d9e6 = 0; d_5d51_d9e6 <= d_5d51_d950 - 1; d_5d51_d9e6++) {
        d_5d51_d942 = d_4f37_1390[d_5d51_d9e6][0][d_5d51_da06] / 32;
        d_5d51_d940 = d_4f37_1390[d_5d51_d9e6][1][d_5d51_da06] / 32;
        d_5d51_d5c5 = f_1646_2cc9(d_5d51_d942);
        if (d_5d51_d5c5 == 0)
            d_5d51_d5c5 = f_1646_2cc9(d_5d51_d940);
        if (d_5d51_d5c5)
            strcat(d_2414_4264, f_1d5e_0158(d_5d51_d9e6 + 32));
        else
            strcat(d_2414_43a4, f_1d5e_0158(d_5d51_d9e6 + 32));
    }
    for (d_5d51_d9e6 = 0; d_5d51_d9e6 <= d_5d51_d950 - 1; d_5d51_d9e6++) {
        d_5d51_d8da = f_1d5e_0d6a(strlen(d_2414_43a4));
        d_5d51_d8d8 = f_1d5e_0d6a(strlen(d_2414_43a4));
        d_5d51_d8d6 = d_2414_43a4[d_5d51_d8da];
        d_5d51_d8d4 = d_2414_43a4[d_5d51_d8d8];
        d_2414_43a4[d_5d51_d8da] = d_5d51_d8d4;
        d_2414_43a4[d_5d51_d8d8] = d_5d51_d8d6;
    }
    strcpy(buf, d_2414_43a4);
    sprintf(d_2414_43a4, "%s%s", d_2414_4264, buf);
}

void f_76ea_0a70(void)
{
    d_5d51_d5c4 = 0;
    if (d_5d51_da06 == 75) {
        strcpy(d_2414_4214, "WEMBLEY");
        d_5d51_d8d2 = 2;
        d_5d51_d8d0 = 2;
    } else if (d_5d51_da06 == 89) {
        strcpy(d_2414_4214, "ROTTERDAM");
        d_5d51_d8d2 = 2;
        d_5d51_d8d0 = 2;
    } else if (d_5d51_da06 == 93) {
        strcpy(d_2414_4214, "MILAN");
        d_5d51_d8d2 = 2;
        d_5d51_d8d0 = 2;
    } else if (f_1646_2b65(d_5d51_da06, d_5d51_d9e6 + 1)) {
        d_5d51_d8cc = 0;
        for (d_5d51_d8ca = 0; d_5d51_d8ca <= 37; d_5d51_d8ca++)
            if (d_3404_443a[1][d_5d51_d8ca] > d_5d51_d8cc && d_5d51_d8ca != d_5d51_d942
                && d_5d51_d8ca != d_5d51_d940 && d_5d51_d8ca != d_5d51_d8ec) {
                d_5d51_d8cc = d_3404_443a[1][d_5d51_d8ca];
                d_5d51_d8ce = d_5d51_d8ca;
            }
        d_5d51_d8ec = d_5d51_d8ce;
        strcpy(d_2414_4214, d_5d51_b4c6[d_5d51_d8ce]);
        d_5d51_d8d2 = 2;
        d_5d51_d8d0 = 2;
    } else {
        d_5d51_d8ce = d_5d51_d942;
        if (d_5d51_d8ce < 38)
            strcpy(d_2414_4214, d_5d51_b4c6[d_5d51_d8ce]);
        else
            strcpy(d_2414_4214, d_5d51_b476[d_5d51_d8ce]);
        d_5d51_d8d2 = 3;
        d_5d51_d8d0 = 1;
        d_5d51_d5c4 = -1;
    }
}

void f_76ea_0b86(void)
{
    d_5d51_d8c8 = 0;
    if (strstr(d_2414_4214, "MILAN") || strstr(d_2414_4214, "ROTTERDAM")) {
        d_5d51_d485 = (80 - f_1d5e_1089()) * 1000.0;
        return;
    }
    if (d_5d51_da06 == 71 || d_5d51_da06 == 77) {
        d_5d51_d485 = (d_3404_443a[1][d_5d51_d8ce] - f_1d5e_1089()) * 1000.0;
        return;
    }
    if ((d_5d51_d8f4 < 38 || d_5d51_d8f4 >= 438) && (d_5d51_d8f2 < 38 || d_5d51_d8f2 >= 438)
        && d_5d51_da06 > 12) {
        long dx, dy;

        d_5d51_d954 = d_5d51_d8f4 - (d_5d51_d8f4 >= 438 ? 400 : 0);
        d_5d51_d9d0 = d_5d51_d8f2 - (d_5d51_d8f2 >= 438 ? 400 : 0);
        if (d_4f37_7792[0][d_5d51_d954] > 0 && d_4f37_7792[0][d_5d51_d9d0] > 0) {
            dx = d_4f37_7792[0][d_5d51_d954] - d_4f37_7792[0][d_5d51_d9d0];
            dy = d_4f37_7792[1][d_5d51_d954] - d_4f37_7792[1][d_5d51_d9d0];
            d_5d51_d8c8 = 30.0 - sqrt(dx * dx + dy * dy) * 0.857;
        }
    }
    d_5d51_d8c6 = d_5d51_d8c8 > 0 ? d_5d51_d8c8 : 0;
    d_5d51_d8c4 = d_5d51_d8c8;
    if (f_1646_258b(d_5d51_da06) || f_1646_2646(d_5d51_da06)) {
        if (d_3404_45f2[d_5d51_d942] > 1)
            d_5d51_d8c6 += f_1646_2c39(d_5d51_d8b8, f_1646_717d(d_5d51_d942) == 0 ? d_5d51_da0e : d_5d51_da0c);
        if (d_3404_45f2[d_5d51_d940] > 1)
            d_5d51_d8c4 += f_1646_2c39(d_5d51_d8b4, f_1646_717d(d_5d51_d942) == 0 ? d_5d51_da0e : d_5d51_da0c);
    }
    d_5d51_d529 = 0.875;
    d_5d51_d525 = 0.125;
    if (f_1646_258b(d_5d51_da06) || f_1646_2646(d_5d51_da06))
        d_5d51_d5f8 = 70 - f_1646_717d(d_5d51_d942) * 6;
    else if (f_1646_2674(d_5d51_da06)) {
        if (d_5d51_da06 <= 33)
            d_5d51_d5f8 = 50;
        else if (d_5d51_da06 >= 59 && d_5d51_da06 <= 63)
            d_5d51_d5f8 = 75;
        else
            d_5d51_d5f8 = 100;
        d_5d51_d529 = 0.75;
        d_5d51_d525 = 0.25;
    } else if (f_1646_2833(d_5d51_da06, d_5d51_d9e6 + 1) || f_1646_28e4(d_5d51_da06, d_5d51_d9e6 + 1)
               || f_1646_297b(d_5d51_da06, d_5d51_d9e6 + 1)) {
        d_5d51_d5f8 = 100;
        d_5d51_d529 = 0.95;
        d_5d51_d525 = 0.05;
    } else if (f_1646_2ba4(d_5d51_da06)) {
        d_5d51_d5f8 = 100;
        d_5d51_d529 = 0.75;
        d_5d51_d525 = 0.25;
    } else if (f_1646_2a0c(d_5d51_da06, d_5d51_d9e6 + 1))
        d_5d51_d5f8 = 40;
    else
        d_5d51_d5f8 = 30;
    if (d_5d51_d8c8 > 24)
        d_5d51_d5f8 = d_5d51_d5f8 + 50;
    d_5d51_d8c6 = f_1d5e_136a(100, f_1d5e_1308(d_5d51_d8c6 + d_5d51_d5f8, 10));
    d_5d51_d8c4 = f_1d5e_136a(100, f_1d5e_1308(d_5d51_d8c4 + d_5d51_d5f8, 10));
    d_5d51_d9c4 = (f_1d5e_136a(f_1646_717d(d_5d51_d942), 3) + f_1d5e_136a(f_1646_717d(d_5d51_d940), 3)) * 25;
    d_5d51_d521 = ((d_3404_452a[d_5d51_d942] + d_3404_443a[0][d_5d51_d942] * 2 - 100) / 200.0 + 1)
                  * (d_5d51_d8c6 / (d_5d51_d9c4 + 75.0));
    d_5d51_d51d = ((d_3404_452a[d_5d51_d940] + d_3404_443a[0][d_5d51_d940] * 2 - 75) / 200.0 + 1)
                  * (d_5d51_d8c4 / (d_5d51_d9c4 + 75.0));
    d_5d51_d519 = f_1d5e_1342(d_3404_443a[1][d_5d51_d942] * d_5d51_d521 * d_5d51_d529,
                              d_3404_443a[1][d_5d51_d942] * d_5d51_d529);
    d_5d51_d515 = f_1d5e_1342(d_3404_443a[1][d_5d51_d940] * d_5d51_d51d * 0.3,
                              d_3404_443a[1][d_5d51_d942] * d_5d51_d525);
    d_5d51_d485 = f_1d5e_131d(2000.0 - f_1d5e_1089() * 1000.0,
                              (f_1d5e_1342(d_5d51_d519 + d_5d51_d515 - f_1d5e_1089(),
                                           d_3404_443a[1][d_5d51_d8ce]) - f_1d5e_1089()) * 1000.0);
    if (d_5d51_d942 < 38 && d_5d51_da06 > 12 && d_5d51_d8ce == d_5d51_d942) {
        d_3404_4dc2[d_5d51_d942]++;
        d_3404_4012[d_5d51_d942] += d_5d51_d485;
    }
}

void f_76ea_11e0(void)
{
    if (d_5d51_d942 > 37) {
        d_5d51_b4c2 = d_5d51_b4ca[d_5d51_d942];
        d_5d51_d8c2 = d_4f37_0f80[d_5d51_d942];
        f_9e79_0f6c(38, d_5d51_d8c2, 0);
        d_3404_443a[0][38] = f_1d5e_0d6a(9) + 4;
        d_3404_443a[1][38] = f_1d5e_1308((d_4f37_099e[d_5d51_d942] * 6 - 50) * (1 - f_1d5e_0d6a(6) / 20.0), 5);
        d_3404_443a[4][38] = d_4f37_099e[d_5d51_d942];
        d_3404_443a[6][38] = 100;
        d_5d51_d8c0 = d_4f37_1176[d_5d51_d942];
        if (d_5d51_d8c0 == 59)
            d_5d51_d8c0 = 0;
        d_5d51_d942 = 38;
    } else {
        d_5d51_d8c2 = d_3404_24e6[d_3404_4226[d_5d51_d942]] % 16;
        d_5d51_d8c0 = 0;
    }
    if (d_5d51_d940 > 37) {
        d_5d51_b4c4 = d_5d51_b4ca[d_5d51_d940];
        d_5d51_d8be = d_4f37_0f80[d_5d51_d940];
        f_9e79_0f6c(39, d_5d51_d8be, 0);
        d_3404_443a[0][39] = f_1d5e_0d6a(9) + 4;
        d_3404_443a[1][39] = f_1d5e_1308((d_4f37_099e[d_5d51_d940] * 6 - 50) * (1 - f_1d5e_0d6a(6) / 5.0), 5);
        d_3404_443a[4][39] = d_4f37_099e[d_5d51_d940];
        d_3404_443a[6][39] = 100;
        d_5d51_d8bc = d_4f37_1176[d_5d51_d940];
        if (d_5d51_d8bc == 59)
            d_5d51_d8bc = 0;
        d_5d51_d940 = 39;
    } else {
        d_5d51_d8be = d_3404_24e6[d_3404_4226[d_5d51_d940]] % 16;
        d_5d51_d8bc = 0;
    }
}

void f_76ea_1442(void)
{
    unsigned i, j;

    for (d_5d51_d9fe = 0; d_5d51_d9fe <= 15; d_5d51_d9fe++) {
        d_3404_0dce[0][d_5d51_d9fe] = d_5d51_d9fe > 10 ? 4 : 0;
        d_3404_0dce[1][d_5d51_d9fe] = d_5d51_d9fe > 10 ? 4 : 0;
        d_3404_0dce[2][d_5d51_d9fe] = 0;
        d_3404_0dce[3][d_5d51_d9fe] = 0;
        d_3404_0d8e[0][d_5d51_d9fe] = 255;
        d_3404_0d8e[1][d_5d51_d9fe] = 255;
        d_3404_0d8e[2][d_5d51_d9fe] = 255;
        d_3404_0d8e[3][d_5d51_d9fe] = 255;
        if (d_5d51_d942 < 38) {
            if (!f_1646_5dff(d_3404_0e34[d_5d51_d942][d_5d51_d9fe]))
                d_3404_0dce[4][d_5d51_d9fe] = d_44d7_0000[11][d_3404_0e34[d_5d51_d942][d_5d51_d9fe]];
            else
                d_3404_0dce[4][d_5d51_d9fe] = 1;
            d_5d51_d928 = d_5d51_d8f2;
        } else
            d_3404_0dce[4][d_5d51_d9fe] = 16;
        if (d_5d51_d940 < 38) {
            if (!f_1646_5dff(d_3404_0e34[d_5d51_d940][d_5d51_d9fe]))
                d_3404_0dce[5][d_5d51_d9fe] = d_44d7_0000[11][d_3404_0e34[d_5d51_d940][d_5d51_d9fe]];
            else
                d_3404_0dce[5][d_5d51_d9fe] = 1;
            d_5d51_d928 = d_5d51_d8f4;
        } else
            d_3404_0dce[5][d_5d51_d9fe] = 16;
    }
    d_5d51_d5ec = 0;
    d_5d51_d5eb = 0;
    for (i = 0; i < 3; i++)
        d_3404_0e2e[i] = 0;
    for (i = 0; i < 2; i++)
        for (j = 0; j <= 15; j++)
            d_2414_fcec[i][j] = 0;

    d_5d51_d8e0 = 0;
    d_5d51_d8ba = 1;
    if (d_5d51_d942 < 38) {
        f_a7f0_40bd(d_5d51_d942);
        f_b0f1_5aa5(d_5d51_d942, d_5d51_da06, d_5d51_d9e6 + 1);
        if (f_1646_2cc9(d_5d51_d942)) {
            d_5d51_d928 = d_5d51_d940;
            d_5d51_d5d3 = -1;
            f_71c8_3038(d_5d51_d942);
            d_5d51_d5d3 = 0;
            d_5d51_d8e0 = 1;
            d_5d51_d8ba = 0;
        }
        d_5d51_d8b8 = f_1646_46a0(d_5d51_d942);
        for (d_5d51_d9a0 = 0; d_5d51_d9a0 <= d_3404_4552[d_5d51_d942] - 1; d_5d51_d9a0++) {
            d_2414_af3d[d_44d7_9624[d_5d51_d942][d_5d51_d9a0]][0] &= 0x7f;
            d_2414_af3e[d_44d7_9624[d_5d51_d942][d_5d51_d9a0]][0] &= 0x7f;
        }
    } else
        d_5d51_d8b8 = f_1d5e_0d6a(10);
    f_76ea_1d87(d_5d51_d942);

    d_5d51_d8de = 0;
    d_5d51_d8b6 = 1;
    if (d_5d51_d940 < 38) {
        f_a7f0_40bd(d_5d51_d940);
        f_b0f1_5aa5(d_5d51_d940, d_5d51_da06, d_5d51_d9e6 + 1);
        if (f_1646_2cc9(d_5d51_d940)) {
            d_5d51_d928 = d_5d51_d942;
            d_5d51_d5d3 = -1;
            f_71c8_3038(d_5d51_d940);
            d_5d51_d5d3 = 0;
            d_5d51_d8de = 1;
            d_5d51_d8b6 = 0;
        }
        d_5d51_d8b4 = f_1646_46a0(d_5d51_d940);
        for (d_5d51_d9a0 = 0; d_5d51_d9a0 <= d_3404_4552[d_5d51_d940] - 1; d_5d51_d9a0++) {
            d_2414_af3d[d_44d7_9624[d_5d51_d940][d_5d51_d9a0]][0] &= 0x7f;
            d_2414_af3e[d_44d7_9624[d_5d51_d940][d_5d51_d9a0]][0] &= 0x7f;
        }
    } else
        d_5d51_d8b4 = f_1d5e_0d6a(10);
    f_76ea_1d87(d_5d51_d940);

    for (d_5d51_d9fe = 0; d_5d51_d9fe <= 15; d_5d51_d9fe++) {
        if (d_5d51_d942 < 38) {
            d_5d51_d928 = d_5d51_d8f2;
            f_a7f0_8152(d_3404_0e34[d_5d51_d942][d_5d51_d9fe], 0);
        }
        if (d_5d51_d940 < 38) {
            d_5d51_d928 = d_5d51_d8f4;
            f_a7f0_8152(d_3404_0e34[d_5d51_d940][d_5d51_d9fe], 0);
        }
    }

    memset(d_2414_8414, 0, 174);
    d_2414_8414[0].home = 15;
    d_2414_8414[0].away = 15;
    d_2414_8414[1].home = 15;
    d_2414_8414[1].away = 15;
    d_2414_8414[2].home = 15;
    d_2414_8414[2].away = 15;
    d_2414_8414[3].home = 15;
    d_2414_8414[3].away = 15;
    if (d_5d51_d8e0 + d_5d51_d8de > 0)
        f_8119_16ae(d_5d51_da06, d_5d51_d9e6 + 1, d_5d51_d8b8);
    d_5d51_d8b2 = 0;
    d_5d51_d8b0 = 0;
    d_5d51_d8ae = 1;
    d_5d51_d8ac = 1;
    d_5d51_d8aa = 1;
    d_5d51_d8a8 = 1;
    d_5d51_d8a6 = 1;
    d_5d51_d8a4 = 1;
    d_5d51_d89c = 0;
    d_5d51_d89a = 0;
    strcpy(d_2414_4174, "");
    strcpy(d_2414_4124, "");
    d_5d51_d8a2 = 0;
    d_5d51_d90a = 0;
    d_5d51_d8e2 = 45;
    d_5d51_d8a0 = 0;
    d_5d51_d89e = 0;
    d_5d51_d93a = 0;
    d_5d51_d938 = 0;
    d_5d51_d5c3 = 0;
    d_5d51_d5dd = 0;
    if (f_1646_2aa7(d_5d51_da06) || f_1646_2b06(d_5d51_da06)) {
        d_5d51_d5c2 = 0;
        if (f_1646_2674(d_5d51_da06) && d_5d51_da06 >= 15
            || f_1646_2a0c(d_5d51_da06, d_5d51_d9e6 + 1) && (d_5d51_da06 == 61 || d_5d51_da06 == 65)
            || f_1646_2833(d_5d51_da06, d_5d51_d9e6 + 1)
            || f_1646_28e4(d_5d51_da06, d_5d51_d9e6 + 1) && d_5d51_da06 != 89
            || f_1646_297b(d_5d51_da06, d_5d51_d9e6 + 1) && d_5d51_da06 <= 35)
            d_5d51_d5c2 = -1;
        if (f_1646_2aa7(d_5d51_da06))
            d_5d51_d5c3 = d_5d51_d5c2;
        else if (f_1646_2b06(d_5d51_da06))
            d_5d51_d5dd = d_5d51_d5c2;
    }
    if (d_5d51_d5dd) {
        d_5d51_d93c = f_71c8_2795(d_5d51_da06, d_5d51_d9e6 + 1);
        d_5d51_d93a = (unsigned char)d_44d7_8e60[d_5d51_d93c * 128 + d_5d51_d9e6 * 2 + 1];
        d_5d51_d938 = (unsigned char)d_44d7_8e60[d_5d51_d93c * 128 + d_5d51_d9e6 * 2];
    }
    d_5d51_d5c1 = 0;
    d_5d51_d898 = 0;
    d_5d51_d896 = 0;
    for (d_5d51_d9fe = 0; d_5d51_d9fe <= 15; d_5d51_d9fe++)
        for (d_5d51_d9b8 = 0; d_5d51_d9b8 <= 2; d_5d51_d9b8++) {
            if (d_5d51_d942 < 38)
                d_3404_5142[0][d_5d51_d9b8][d_5d51_d9fe] = d_3404_1334[d_5d51_d942][d_5d51_d9b8][d_5d51_d9fe];
            if (d_5d51_d940 < 38)
                d_3404_5142[1][d_5d51_d9b8][d_5d51_d9fe] = d_3404_1334[d_5d51_d940][d_5d51_d9b8][d_5d51_d9fe];
        }
    if (d_5d51_d942 < 38) {
        d_5d51_d894 = d_3404_24e6[d_3404_4226[d_5d51_d942]] / 16;
        d_5d51_d892 = d_3404_24e6[d_3404_4226[d_5d51_d942]] % 16;
    }
    if (d_5d51_d940 < 38) {
        d_5d51_d890 = d_3404_24e6[d_3404_4226[d_5d51_d940]] / 16;
        d_5d51_d88e = d_3404_24e6[d_3404_4226[d_5d51_d940]] % 16;
    }
}

void f_76ea_1c81(void)
{
    for (d_5d51_d9fe = 0; d_5d51_d9fe <= 15; d_5d51_d9fe++)
        for (d_5d51_d9b8 = 0; d_5d51_d9b8 <= 2; d_5d51_d9b8++) {
            if (d_5d51_d942 < 38)
                d_3404_1334[d_5d51_d942][d_5d51_d9b8][d_5d51_d9fe] = d_3404_5142[0][d_5d51_d9b8][d_5d51_d9fe];
            if (d_5d51_d940 < 38)
                d_3404_1334[d_5d51_d940][d_5d51_d9b8][d_5d51_d9fe] = d_3404_5142[1][d_5d51_d9b8][d_5d51_d9fe];
        }
    if (d_5d51_d942 < 38)
        d_3404_24e6[d_3404_4226[d_5d51_d942]] = d_5d51_d894 * 16 + d_5d51_d892;
    if (d_5d51_d940 < 38)
        d_3404_24e6[d_3404_4226[d_5d51_d940]] = d_5d51_d890 * 16 + d_5d51_d88e;
}

void f_76ea_1d87(int team)
{
    d_5d51_d88c = team == d_5d51_d942 ? d_5d51_d8c6 : d_5d51_d8c4;
    for (d_5d51_d9fe = 0; d_5d51_d9fe <= 15; d_5d51_d9fe++) {
        if (team < 38) {
            d_5d51_d9f0 = d_3404_0e34[team][d_5d51_d9fe];
            if (!f_1646_5dff(d_5d51_d9f0)) {
                d_44d7_0000[16][d_5d51_d9f0] = f_1d5e_0d6a(d_44d7_0000[8][d_5d51_d9f0]) == 0
                    ? f_1d5e_1308(d_44d7_0000[15][d_5d51_d9f0] * (f_1d5e_0d6a(3) + 4) * 0.1, 10)
                    : d_44d7_0000[15][d_5d51_d9f0];
                if (d_5d51_d88c > 65) {
                    if (d_5d51_d9f0 % 8 == 0)
                        d_44d7_0000[16][d_5d51_d9f0] = f_1d5e_136a(d_44d7_0000[16][d_5d51_d9f0] + f_1d5e_0d6a(10) + 15,
                                                                   d_44d7_0000[9][d_5d51_d9f0] + 25);
                    else if (d_5d51_d9f0 % 8 == 1)
                        d_44d7_0000[16][d_5d51_d9f0] = f_1d5e_1308(d_44d7_0000[16][d_5d51_d9f0] - 15 - f_1d5e_0d6a(10), 10);
                }
                if (d_3404_457a[team] > 0)
                    d_44d7_0000[16][d_5d51_d9f0] = f_1d5e_136a(d_44d7_0000[16][d_5d51_d9f0] + f_b0f1_2786(d_5d51_d9f0),
                                                               d_44d7_0000[9][d_5d51_d9f0] + 25);
            }
        } else {
            if (team == 38)
                d_5d51_d88a = d_4f37_099e[d_5d51_d8f4];
            else if (team == 39)
                d_5d51_d88a = d_4f37_099e[d_5d51_d8f2];
            d_3404_50e2[team == 39][d_5d51_d9fe] = f_1d5e_1308(d_5d51_d88a + f_1d5e_0d6a(5) - f_1d5e_0d6a(5), 1);
        }
    }
    if (team < 38) {
        if (d_3404_457a[team] > 0)
            d_3404_45a2[team]++;
        d_3404_457a[team] = 0;
    }
}

void f_76ea_2010(void)
{
    f_7c1d_1625(d_5d51_d942);
    f_7c1d_1625(d_5d51_d940);
    f_7c1d_1b40(d_5d51_d942);
    f_7c1d_1b40(d_5d51_d940);
    f_76ea_2fd9();
    strcpy(d_2414_40d4, "1st Half");
    if (d_5d51_d8e0 + d_5d51_d8de > 0) {
        f_7c1d_079e(0);
        f_1646_58a8(1);
        f_1d5e_0c37();
    }
    d_5d51_d888 = 7;
    d_5d51_d5b2 = 0;
    for (;;) {
        d_5d51_d886 = 0;
        do
            f_76ea_24e8();
        while (d_5d51_d90a < d_5d51_d8e2);
        d_5d51_d5b2 = -1;
        while (d_5d51_d886 > 0) {
            f_76ea_24e8();
            d_5d51_d886--;
        }
        d_5d51_d5b2 = 0;
        if (d_5d51_d8e0 + d_5d51_d8de > 0)
            f_1d5e_0dbd(50);
        if (d_5d51_d8e2 == 45) {
            d_2414_8414[0].home = d_5d51_d89c;
            d_2414_8414[0].away = d_5d51_d89a;
            strcpy(d_2414_40d4, "2nd Half");
            d_5d51_d8e2 = 90;
            if (d_5d51_d8e0 + d_5d51_d8de > 0) {
                f_1646_58a8(0);
                f_7c1d_2f57();
                f_7c1d_3ca2(d_5d51_d8f4, d_5d51_d8f2, 0);
                f_7c1d_079e(0);
            }
            continue;
        }
        if (d_5d51_d8e2 == 90) {
            d_2414_8414[1].home = d_5d51_d89c;
            d_2414_8414[1].away = d_5d51_d89a;
            if (d_5d51_d89c + d_5d51_d93a == d_5d51_d89a + d_5d51_d938
                && f_1646_258b(d_5d51_da06) == 0 && f_1646_2646(d_5d51_da06) == 0
                && d_5d51_da06 > 12) {
                if (d_5d51_d5dd != 0 && d_5d51_d89a != d_5d51_d93a)
                    f_7c1d_030a();
                else if (f_76ea_2325(d_5d51_da06, d_5d51_d9e6 + 1)) {
                    d_5d51_d8e2 = 105;
                    strcpy(d_2414_40d4, "Extra Time");
                    if (d_5d51_d8e0 + d_5d51_d8de > 0) {
                        f_7c1d_0c36(d_5d51_d942, d_2414_40d4);
                        f_1646_58a8(1);
                    }
                    continue;
                }
            }
        }
        if (d_5d51_d8e2 == 105) {
            d_5d51_d8e2 = 120;
            if (d_5d51_d8e0 + d_5d51_d8de > 0)
                f_1646_58a8(1);
            continue;
        }
        if (d_5d51_d8e2 == 120) {
            d_2414_8414[2].home = d_5d51_d89c;
            d_2414_8414[2].away = d_5d51_d89a;
            if (d_5d51_d89c + d_5d51_d93a == d_5d51_d89a + d_5d51_d938) {
                if (d_5d51_d5dd != 0 && d_5d51_d89a != d_5d51_d93a)
                    f_7c1d_030a();
                else if (f_76ea_2353(d_5d51_da06, d_5d51_d9e6 + 1)) {
                    d_5d51_d5c1 = -1;
                    strcpy(d_2414_40d4, "Penalty Shoot-Out !");
                    if (d_5d51_d8e0 + d_5d51_d8de > 0)
                        f_1646_58a8(1);
                    f_7c1d_0f30();
                    d_2414_8414[3].home = d_5d51_d89c;
                    d_2414_8414[3].away = d_5d51_d89a;
                }
            }
        }
        break;
    }
}

char f_76ea_2325(int club, int round)
{
    if (d_5d51_d5dd != 0 || club == 14 || club == 75 || club == 89 || club == 93 || club == 97)
        return -1;
    return 0;
}

char f_76ea_2353(int club, int round)
{
    return f_76ea_2325(club, round);
}

/* the formations' shirt numbers that 2364 looks for */
static char far *d_5d51_2100[] = {
    "04 10 11 12 13", "07 11", "02 09", "06 14", "03 13"
};

void f_76ea_2364(int a, int b, int c)
{
    d_5d51_d884 = b < 38 ? d_3404_448a[b] : d_4f37_0bba[b - 38];
    if (c < 38) {
        d_5d51_d882 = d_3404_448a[c];
        d_5d51_d880 = d_3404_44b2[c];
    } else {
        d_5d51_d882 = d_4f37_0bba[c - 38];
        d_5d51_d880 = d_4f37_0db0[c - 38];
    }
    if (a == b) {
        d_5d51_d93e = d_5d51_d884 / 16;
        d_5d51_d9c8 = d_5d51_d884 % 16;
    } else {
        d_5d51_d93e = d_5d51_d882 / 16;
        d_5d51_d9c8 = d_5d51_d882 % 16;
        d_5d51_d5c0 = d_5d51_d884 % 16 == d_5d51_d882 % 16;
        if (d_5d51_d5c0 == 0) {
            sprintf(d_2414_4034, "%02d", d_5d51_d884 % 16);
            sprintf(d_2414_3fe4, "%02d", d_5d51_d882 % 16);
            for (d_5d51_d87e = 0; d_5d51_d87e <= 4; d_5d51_d87e++)
                if (strstr(d_5d51_2100[d_5d51_d87e], d_2414_4034)
                    && strstr(d_5d51_2100[d_5d51_d87e], d_2414_3fe4)) {
                    d_5d51_d5c0 = -1;
                    d_5d51_d87e = 4;
                }
        }
        if (d_5d51_d5c0 != 0) {
            d_5d51_d93e = d_5d51_d880 / 16;
            d_5d51_d9c8 = d_5d51_d880 % 16;
        }
    }
}

void f_76ea_24e8(void)
{
    int n;

    n = d_5d51_d978 - (d_5d51_d8c8 > 24
        ? (d_5d51_d978 - d_5d51_d87a) / 4 - f_76ea_2c7c(1, d_5d51_d90a) : 0);
    d_5d51_d87c = (f_1d5e_0d6a(n) + f_1d5e_0d6a(n)) / 2;
    n = d_5d51_d87a + (d_5d51_d8c8 > 24
        ? (d_5d51_d978 - d_5d51_d87a) / 4 - f_76ea_2cb8(1, d_5d51_d90a) : 0);
    d_5d51_d878 = (f_1d5e_0d6a(n) + f_1d5e_0d6a(n)) / 2;
    if (d_5d51_d87c >= d_5d51_d878) {
        d_5d51_d8aa++;
        d_5d51_d5f7 = 1;
        if (d_5d51_d8e0 + d_5d51_d8de > 0)
            f_76ea_4c0b(3.5, 21.5);
        f_76ea_2cf4();
        f_76ea_263c();
    } else {
        d_5d51_d8a8++;
        d_5d51_d5f7 = 2;
        if (d_5d51_d8e0 + d_5d51_d8de > 0)
            f_76ea_4c0b(21.5, 3.5);
        f_76ea_2cf4();
        f_76ea_270c();
    }
}

void f_76ea_263c(void)
{
    int r;

    do {
        d_5d51_d876 = 0;
        r = d_5d51_d870 - f_76ea_2c7c(2, d_5d51_d90a);
        d_5d51_d872 = (f_1d5e_0d6a(r) + f_1d5e_0d6a(r)) / 2;   /* Italia: the mean of two draws */
        r = d_5d51_d86c - f_76ea_2cb8(0, d_5d51_d90a);
        d_5d51_d86e = (f_1d5e_0d6a(r) + f_1d5e_0d6a(r)) / 2;
        if (d_5d51_d872 >= d_5d51_d86e) {
            d_5d51_d8a6++;
            f_76ea_2cf4();
            f_76ea_27dc();
        } else {
            d_5d51_d8ac++;
            f_76ea_2cf4();
        }
    } while (d_5d51_d86e <= d_5d51_d872 && d_5d51_d876 == 0);
}

void f_76ea_270c(void)
{
    int r;

    do {
        d_5d51_d876 = 0;
        r = d_5d51_d868 - f_76ea_2cb8(2, d_5d51_d90a);
        d_5d51_d86a = (f_1d5e_0d6a(r) + f_1d5e_0d6a(r)) / 2;
        r = d_5d51_d864 - f_76ea_2c7c(0, d_5d51_d90a);
        d_5d51_d866 = (f_1d5e_0d6a(r) + f_1d5e_0d6a(r)) / 2;
        if (d_5d51_d86a >= d_5d51_d866) {
            d_5d51_d8a4++;
            f_76ea_2cf4();
            f_76ea_284a();
        } else {
            d_5d51_d8ae++;
            f_76ea_2cf4();
        }
    } while (d_5d51_d866 <= d_5d51_d86a && d_5d51_d876 == 0);
}

void f_76ea_27dc(void)
{
    d_5d51_d563 = f_1d5e_0d6a(d_5d51_d614) == 0 ? -1 : 0;
    d_5d51_d9b2 = d_5d51_d89c * 20 + 180;
    d_5d51_d9b4 = f_1d5e_0d6a(d_5d51_d862) + (d_5d51_d563 ? 100 : 0);
    if (d_5d51_d9b4 > d_5d51_d9b2) {
        d_5d51_d8b2++;
        f_76ea_2cf4();
        f_76ea_28b8();
    } else
        f_76ea_2cf4();
}

void f_76ea_284a(void)
{
    d_5d51_d563 = f_1d5e_0d6a(d_5d51_d612) == 0 ? -1 : 0;
    d_5d51_d9b2 = d_5d51_d89a * 20 + 180;
    d_5d51_d9b4 = f_1d5e_0d6a(d_5d51_d860) + (d_5d51_d563 ? 100 : 0);
    if (d_5d51_d9b4 > d_5d51_d9b2) {
        d_5d51_d8b0++;
        f_76ea_2cf4();
        f_76ea_2a9a();
    } else
        f_76ea_2cf4();
}

void f_76ea_28b8(void)
{
    char buf[320];

    d_5d51_d5bf = 0;
    d_5d51_d5be = 0;
    d_5d51_d5d2 = 0;
    if (d_5d51_d8e0 + d_5d51_d8de > 0) {
        f_1d5e_0822(0x57, 0x7e, 0x63, 0x84);
        sprintf(buf, "%d", d_5d51_d8b2);
        f_1646_357e(0x60, 0x84, 5, buf);
    }
    d_5d51_d85e = f_1d5e_0d6a(d_5d51_d85c);
    if (d_5d51_d85e < 43) {
        if (f_1d5e_0d6a(30) == 0) {
            f_76ea_3208(d_5d51_d942);
            d_5d51_d5be = -1;
        } else if (f_1d5e_0d6a(4) > 0) {
            f_b0f1_3e09(d_5d51_d942);
            d_5d51_d5d2 = -1;
        } else
            f_76ea_3183(d_5d51_d942);
        d_5d51_d876 = 1;
    } else if (d_5d51_d85e < 47) {
        f_b0f1_3900(d_5d51_d942);
        if (d_5d51_d8e0 + d_5d51_d8de > 0)
            f_7c1d_0b15();
        d_5d51_d876 = -d_5d51_d5bd;
        if (d_5d51_d5bd)
            d_5d51_d5bf = -1;
    } else if (d_5d51_d8e0 + d_5d51_d8de > 0 && d_5d51_d85e < 75) {
        if (f_1d5e_0d6a(10) == 0) {
            if (f_1d5e_0d6a(3) == 0)
                f_7c1d_0239(d_5d51_d942);
            else {
                f_b0f1_3e09(d_5d51_d942);
                f_b0f1_41c6(d_5d51_d942);
                f_7c1d_0c36(d_5d51_d942, d_2414_40d4);
            }
        } else if (f_1d5e_0d6a(10) == 0)
            f_b0f1_37af(d_5d51_d942);
        else
            f_b0f1_3b19(d_5d51_d942);
    }
    if (d_5d51_d876 == 1) {
        d_5d51_d89c++;
        f_7c1d_0371(d_5d51_d9f0, d_5d51_d5bf, d_5d51_d5be, d_5d51_d5d2, d_5d51_d858, d_5d51_d942);
    }
    f_76ea_2cf4();
}

void f_76ea_2a9a(void)
{
    char buf[320];

    d_5d51_d5bf = 0;
    d_5d51_d5be = 0;
    d_5d51_d5d2 = 0;
    if (d_5d51_d8e0 + d_5d51_d8de > 0) {
        f_1d5e_0822(0xe7, 0x7e, 0xf3, 0x84);
        sprintf(buf, "%d", d_5d51_d8b0);
        f_1646_357e(0xf0, 0x84, 5, buf);
    }
    d_5d51_d85e = f_1d5e_0d6a(d_5d51_d85a);
    if (d_5d51_d85e < 43) {
        if (f_1d5e_0d6a(30) == 0) {
            f_76ea_3208(d_5d51_d940);
            d_5d51_d5be = -1;
        } else if (f_1d5e_0d6a(4) > 0) {
            f_b0f1_3e09(d_5d51_d940);
            d_5d51_d5d2 = -1;
        } else
            f_76ea_3183(d_5d51_d940);
        d_5d51_d876 = 1;
    } else if (d_5d51_d85e < 47) {
        f_b0f1_3900(d_5d51_d940);
        if (d_5d51_d8e0 + d_5d51_d8de > 0)
            f_7c1d_0b15();
        d_5d51_d876 = -d_5d51_d5bd;
        if (d_5d51_d5bd)
            d_5d51_d5bf = -1;
    } else if (d_5d51_d8e0 + d_5d51_d8de > 0 && d_5d51_d85e < 75) {
        if (f_1d5e_0d6a(10) == 0) {
            if (f_1d5e_0d6a(3) == 0)
                f_7c1d_0239(d_5d51_d940);
            else {
                f_b0f1_3e09(d_5d51_d940);
                f_b0f1_41c6(d_5d51_d940);
                f_7c1d_0c36(d_5d51_d942, d_2414_40d4);   /* sic: the home team, as in the original */
            }
        } else if (f_1d5e_0d6a(10) == 0)
            f_b0f1_37af(d_5d51_d940);
        else
            f_b0f1_3b19(d_5d51_d940);
    }
    if (d_5d51_d876 == 1) {
        d_5d51_d89a++;
        f_7c1d_0371(d_5d51_d9f0, d_5d51_d5bf, d_5d51_d5be, d_5d51_d5d2, d_5d51_d858, d_5d51_d940);
    }
    f_76ea_2cf4();
}

unsigned char f_76ea_2c7c(unsigned char a, int b)
{
    return b < 60 ? 0 : d_3404_502e[a][f_1d5e_136a(b - 60, 59)];
}

unsigned char f_76ea_2cb8(unsigned char a, int b)
{
    return b < 60 ? 0 : d_3404_4f7a[a][f_1d5e_136a(b - 60, 59)];
}

void f_76ea_2cf4(void)
{
    char key[4];
    char c;

    d_5d51_d8a2++;
    d_5d51_d90a = d_5d51_d8a2 / 2;
    if (d_5d51_d90a > d_5d51_d8e2) {
        d_5d51_d90a = d_5d51_d8e2;
        d_5d51_d8a2 = d_5d51_d90a * 2;
    }
    if (d_5d51_d8e0 + d_5d51_d8de > 0) {
        f_7c1d_019a(d_5d51_d90a);
        f_76ea_4c7c();
        strcpy(key, strupr(f_1d5e_0ced()));
        c = f_1d5e_0c17();
        if (c != 3 && key[0] != ' ') {
            f_1d5e_0dbd(9);
            if (d_5d51_d8ba == 0 && (c == 1 || c != 0 && d_5d51_d8b6 == 1 || key[0] == 'H'))
                f_76ea_4495(d_5d51_d942, 0);
            if (d_5d51_d8b6 == 0 && (c == 2 || c != 0 && d_5d51_d8ba == 1 || key[0] == 'A'))
                f_76ea_4495(d_5d51_d940, 0);
        }
    }
    if (f_1d5e_0d6a(d_5d51_d856) == 0)
        f_76ea_3412(d_5d51_d942);
    if (f_1d5e_0d6a(d_5d51_d854) == 0)
        f_76ea_3412(d_5d51_d940);
    if (d_5d51_d90a > 65) {
        if (d_5d51_d8ba == 1 && d_5d51_d90a > d_5d51_d852 && d_3404_0dce[0][11] == 4 && d_5d51_d5bc &&
            d_5d51_d5ec < 2)
            f_76ea_4602(d_5d51_d942, 0);
        if (d_5d51_d8b6 == 1 && d_5d51_d90a > d_5d51_d850 && d_3404_0dce[1][11] == 4 && d_5d51_d5bb &&
            d_5d51_d5eb < 2)
            f_76ea_4602(d_5d51_d940, 0);
        if (d_5d51_d8ba == 1 && d_5d51_d90a > d_5d51_d852 && d_3404_0dce[0][12] == 4 && d_5d51_d5ba &&
            d_5d51_d5ec < 2)
            f_76ea_4602(d_5d51_d942, 0);
        if (d_5d51_d8b6 == 1 && d_5d51_d90a > d_5d51_d850 && d_3404_0dce[1][12] == 4 && d_5d51_d5b9 &&
            d_5d51_d5eb < 2)
            f_76ea_4602(d_5d51_d940, 0);
        if (d_5d51_d8ba == 1 && d_5d51_d90a > d_5d51_d852 && d_3404_0dce[0][13] == 4 && d_5d51_d5b8 &&
            d_5d51_d5ec < 2)
            f_76ea_4602(d_5d51_d942, 0);
        if (d_5d51_d8b6 == 1 && d_5d51_d90a > d_5d51_d850 && d_3404_0dce[1][13] == 4 && d_5d51_d5b7 &&
            d_5d51_d5eb < 2)
            f_76ea_4602(d_5d51_d940, 0);
        if (d_5d51_d8ba == 1 && d_5d51_d90a > d_5d51_d852 && d_3404_0dce[0][14] == 4 && d_5d51_d5b6 &&
            d_5d51_d5ec < 2)
            f_76ea_4602(d_5d51_d942, 0);
        if (d_5d51_d8b6 == 1 && d_5d51_d90a > d_5d51_d850 && d_3404_0dce[1][14] == 4 && d_5d51_d5b5 &&
            d_5d51_d5eb < 2)
            f_76ea_4602(d_5d51_d940, 0);
    }
}

void f_76ea_2fd9(void)
{
    d_5d51_d852 = f_1d5e_0d6a(20) + 65;
    d_5d51_d850 = f_1d5e_0d6a(20) + 65;
    d_5d51_d5bc = 0;
    d_5d51_d5ba = 0;
    d_5d51_d5b8 = 0;
    d_5d51_d5b6 = 0;
    d_5d51_d5bb = 0;
    d_5d51_d5b9 = 0;
    d_5d51_d5b7 = 0;
    d_5d51_d5b5 = 0;
    /* sic: both tests set the same two flags */
    if (d_5d51_d89c + d_5d51_d93a < d_5d51_d89a + d_5d51_d938 ||
        d_5d51_d89c + d_5d51_d93a == d_5d51_d89a + d_5d51_d938 && d_5d51_d89a >= d_5d51_d93a) {
        d_5d51_d5b8 = -1;
        d_5d51_d5b6 = -1;
    }
    if (d_5d51_d89a + d_5d51_d938 < d_5d51_d89c + d_5d51_d93a ||
        d_5d51_d89a + d_5d51_d938 == d_5d51_d89c + d_5d51_d93a && d_5d51_d89c >= d_5d51_d938) {
        d_5d51_d5b8 = -1;
        d_5d51_d5b6 = -1;
    }
    f_76ea_30b4(d_5d51_d942);
    f_76ea_30b4(d_5d51_d940);
}

void f_76ea_30b4(int team)
{
    if (f_1646_2cc9(team) == 0) {
        for (d_5d51_d9d0 = 11; d_5d51_d9d0 <= 14; d_5d51_d9d0++) {
            for (d_5d51_d9b8 = 2; d_5d51_d9b8 <= 10; d_5d51_d9b8++) {
                if (f_1646_66f8(d_3404_0e34[team][d_5d51_d9d0], d_5d51_d9b8)) {
                    d_3404_1334[team][0][d_5d51_d9d0] = d_5d51_d9b8 + (d_5d51_d9b8 < 5 ? 3 : 0);
                    d_3404_5142[team == d_5d51_d940][0][d_5d51_d9d0] = d_5d51_d9b8 + (d_5d51_d9b8 < 5 ? 3 : 0);
                }
            }
        }
    }
}

void f_76ea_3183(int team)
{
    d_5d51_d934 = 0;
    d_5d51_d858 = -1;
    for (d_5d51_d9fe = 0; d_5d51_d9fe <= 15; d_5d51_d9fe++) {
        if (d_3404_0dce[team == d_5d51_d940][d_5d51_d9fe] < 2) {
            if ((d_5d51_d84e = f_76ea_324d(team, d_5d51_d9fe)) > d_5d51_d934) {
                d_5d51_d934 = d_5d51_d84e;
                d_5d51_d9f0 = d_3404_0e34[team][d_5d51_d9fe];
                d_5d51_d858 = d_5d51_d9fe;
            }
        }
    }
}

void f_76ea_3208(int team)
{
    int other;

    other = team == d_5d51_d942 ? d_5d51_d940 : d_5d51_d942;
    d_5d51_d858 = f_b0f1_42e9(other);
    d_5d51_d9f0 = d_3404_0e34[other][d_5d51_d858];
}

int f_76ea_324d(int team, int p)
{
    d_5d51_d91c = d_3404_1334[team][0][p];
    if (d_5d51_d91c > 1) {
        d_5d51_d5f6 = d_3404_1334[team][2][p];
        if (d_5d51_d5f6 == 1)
            d_5d51_d97e = 1;
        else if (d_5d51_d5f6 == 2)
            d_5d51_d97e = -1;
        else
            d_5d51_d97e = 0;
        switch (d_5d51_d91c) {
        case 2:
        case 3:
        case 11:
        case 12:
            d_5d51_d84e = 5;
            break;
        case 4:
            d_5d51_d84e = 10;
            break;
        case 5:
        case 6:
            d_5d51_d84e = 15;
            break;
        case 7:
        case 8:
        case 9:
        case 13:
            d_5d51_d84e = 20;
            break;
        case 10:
            d_5d51_d84e = 35;
            break;
        }
        d_5d51_d84e += d_5d51_d97e * 5 + f_7c1d_1717(p, team) * 2;
        if (team < 38) {
            if (!f_1646_5dff(d_3404_0e34[team][p]))
                d_5d51_d84e = d_44d7_0000[7][d_3404_0e34[team][p]] * 0.75 +
                              (d_5d51_d563 ? d_44d7_0000[5][d_3404_0e34[team][p]] * 10 : 0) + d_5d51_d84e;
        } else
            d_5d51_d84e += 10;
        d_5d51_d84c = d_5d51_d84e;
        d_5d51_d84e += f_1d5e_0d6a(125);
    } else {
        d_5d51_d84c = 0;
        d_5d51_d84e = 0;
    }
    return d_5d51_d84e;
}

void f_76ea_3412(int team)
{
    d_5d51_d5b4 = 0;
    d_5d51_d96a = team == d_5d51_d942 ? d_5d51_d940 : d_5d51_d942;
    d_5d51_d9f0 = -1;
    d_5d51_d84a = 0;
    do {
        do {
            d_5d51_d9fe = f_1d5e_0d6a(16);
        } while (d_3404_1334[team][0][d_5d51_d9fe] <= 1 ||
                 d_3404_0dce[team == d_5d51_d940][d_5d51_d9fe] >= 2);
        if ((d_5d51_d848 = f_1d5e_0d6a(d_3404_0dce[team == d_5d51_d940 ? 5 : 4][d_5d51_d9fe] + 10 + f_1d5e_0d6a(4))) > d_5d51_d9c2 ||
            d_5d51_d9f0 == -1) {
            d_5d51_d9f0 = d_5d51_d9fe;
            d_5d51_d9c2 = d_5d51_d848;
        }
        d_5d51_d84a++;
    } while (d_5d51_d9f0 <= -1 || d_5d51_d84a < 5);
    d_5d51_d846 = d_3404_1334[team][0][d_5d51_d9f0];
    d_5d51_d844 = -1;
    d_5d51_d84a = 0;
    do {
        do {
            d_5d51_d9fe = f_1d5e_0d6a(16);
            d_5d51_d842 = d_3404_1334[d_5d51_d96a][0][d_5d51_d9fe];
        } while (d_3404_0dce[d_5d51_d96a == d_5d51_d940][d_5d51_d9fe] >= 2);
        d_5d51_d848 = f_1646_68af(d_5d51_d846) && f_1646_68ee(d_5d51_d842) ||
                      f_1646_68d1(d_5d51_d846) && f_1646_68d1(d_5d51_d842) ||
                      f_1646_68ee(d_5d51_d846) && (d_5d51_d842 == 1 || f_1646_68af(d_5d51_d842)) ? 11 : 0;
        d_5d51_d848 += f_1646_690b(d_5d51_d846) && f_1646_692d(d_5d51_d842) ||
                       f_1646_694f(d_5d51_d846) && f_1646_694f(d_5d51_d842) ||
                       f_1646_692d(d_5d51_d846) && f_1646_690b(d_5d51_d842) ? 10 : 0;
        if (d_5d51_d848 > d_5d51_d9c2 || d_5d51_d844 == -1) {
            d_5d51_d844 = d_5d51_d9fe;
            d_5d51_d9c2 = d_5d51_d848;
        }
        d_5d51_d84a++;
    } while (d_5d51_d844 <= -1 || d_5d51_d84a < 5);
    if (d_5d51_d8e0 + d_5d51_d8de > 0) {
        if (team < 38)
            strcpy(d_2414_3f90, f_1646_48c0(d_3404_0e34[team][d_5d51_d9f0]));
        else
            sprintf(d_2414_3f90, "No.%s", f_1646_2f4b(d_5d51_d9f0 + 1, 0));
        if (d_5d51_d96a < 38) {
            strcpy(d_2414_3f40, f_1646_48c0(d_3404_0e34[d_5d51_d96a][d_5d51_d844]));
            if (!f_1646_5dff(d_3404_0e34[d_5d51_d96a][d_5d51_d844]))
                d_5d51_d5b4 = f_1d5e_0d6a(d_44d7_0000[14][d_3404_0e34[d_5d51_d96a][d_5d51_d844]] + 10) < f_1d5e_0d6a(10);
            else
                d_5d51_d5b4 = f_1d5e_0d6a(5) == 0;
        } else {
            sprintf(d_2414_3f40, "their no.%s", f_1646_2f4b(d_5d51_d844 + 1, 0));
            d_5d51_d5b4 = f_1d5e_0d6a(2) == 0;
        }
    }
    f_76ea_4433();
    d_5d51_d5b3 = 0;
    switch (d_5d51_d840) {
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
        if (d_5d51_d96a < 38) {
            if (!f_1646_5dff(d_3404_0e34[d_5d51_d96a][d_5d51_d844]))
                d_5d51_d5b1 = f_1d5e_0d6a(d_44d7_0000[13][d_3404_0e34[d_5d51_d96a][d_5d51_d844]]) > f_1d5e_0d6a(10);
            else
                d_5d51_d5b1 = f_1d5e_0d6a(10) > f_1d5e_0d6a(10);
        } else
            d_5d51_d5b1 = f_1d5e_0d6a(12) > f_1d5e_0d6a(10);
        if (d_5d51_d5b1)
            f_76ea_398c(team, d_5d51_d9f0, d_5d51_d96a, d_5d51_d844);
        break;
    }
    f_76ea_3f45(team, d_5d51_d9f0);
    if (d_5d51_d5b4)
        d_3404_0dce[d_5d51_d96a == d_5d51_d940 ? 5 : 4][d_5d51_d844] = 20;
    if (d_5d51_d8e0 + d_5d51_d8de > 0)
        f_7c1d_0c36(d_5d51_d942, d_2414_40d4);
}

void f_76ea_398c(int a, int b, int team, int n)
{
    char hurt;
    char pos;
    char buf[320];
    char r;
    register int old = d_5d51_d9f0;
    register int saved = d_5d51_d844;

    hurt = f_1d5e_0d6a(3) == 0 ? -1 : 0;
    d_5d51_d9f0 = b;
    d_5d51_d844 = n;
    if (d_5d51_d8e0 + d_5d51_d8de > 0) {
        sprintf(buf, "%s injured by %s", d_2414_3f40, d_2414_3f90);
        f_7c1d_0c36(team, buf);
        f_1d5e_0dbd(100);
        f_7c1d_0cc1();
        sprintf(buf, "He was %s", d_2414_3ef0);
        f_7c1d_0c36(a, buf);
        f_1d5e_0dbd(75);
        f_7c1d_0cc1();
        if (hurt) {
            r = f_1d5e_0d6a(4);
            if (r == 0) {
                sprintf(buf, "He's struggling");
                f_7c1d_0c36(team, buf);
                d_3404_0dce[team == d_5d51_d940 ? 3 : 2][d_5d51_d844] =
                    d_3404_0dce[team == d_5d51_d940 ? 3 : 2][d_5d51_d844] * 0.8;
                f_7c1d_1b40(team);
            } else if (r == 1) {
                sprintf(buf, "He looks in trouble");
                f_7c1d_0c36(team, buf);
                d_3404_0dce[team == d_5d51_d940 ? 3 : 2][d_5d51_d844] =
                    d_3404_0dce[team == d_5d51_d940 ? 3 : 2][d_5d51_d844] * 0.8;
                f_7c1d_1b40(team);
            } else if (r == 2) {
                sprintf(buf, "He should be ok");
                f_7c1d_0c36(team, buf);
            } else if (r == 3) {
                sprintf(buf, "He's ok though");
                f_7c1d_0c36(team, buf);
            }
        } else {
            sprintf(buf, "He'll have to come off");
            f_7c1d_0c36(team, buf);
        }
        f_1d5e_0dbd(100);
        f_7c1d_0cc1();
        d_5d51_d5b3 = -1;
    }
    if (hurt == 0) {
        d_3404_0dce[team == d_5d51_d940][d_5d51_d844] = 6;
        if (team < 38) {
            sprintf(buf, "%s%04d", d_2414_3db0, d_3404_0e34[team][d_5d51_d844]);
            strcpy(d_2414_3db0, buf);
            f_a7f0_8152(d_3404_0e34[team][d_5d51_d844], 4);
        }
        pos = d_3404_1334[team][0][d_5d51_d844];
        if (f_1646_68af(pos)) {
            d_5d51_d83e = 0;
            d_5d51_d83c = 1;
            d_5d51_d83a = 2;
            d_5d51_d838 = 3;
        } else if (f_1646_68d1(pos)) {
            d_5d51_d83e = 1;
            d_5d51_d83c = 2;
            d_5d51_d83a = 3;
            d_5d51_d838 = 0;
        } else {
            d_5d51_d83e = 2;
            d_5d51_d83c = 3;
            d_5d51_d83a = 1;
            d_5d51_d838 = 0;
        }
        if (f_1646_2cc9(team)) {
            d_5d51_d5cb = -1;
            f_b8e8_0000(team);
            d_5d51_d5cb = 0;
            for (d_5d51_d9fe = 0; d_5d51_d9fe <= 15; d_5d51_d9fe++)
                d_3404_0dce[team == d_5d51_d940 ? 3 : 2][d_5d51_d9fe] = 0;
            f_7c1d_1b40(team);
            f_7c1d_079e(d_5d51_d5f7);
            f_7c1d_0c36(d_5d51_d942, d_2414_40d4);
        } else if (d_3404_1334[team][0][d_5d51_d844] == 1 && d_3404_0dd9[team == d_5d51_d940][4] == 4 &&
                   (team == d_5d51_d942 && d_5d51_d5ec < 2 || team == d_5d51_d940 && d_5d51_d5eb < 2) &&
                   f_1646_60fb(team, d_5d51_da06, d_5d51_d9e6 + 1)) {
            f_76ea_4602(team, 1);
        } else if (d_3404_0dd9[team == d_5d51_d940][d_5d51_d83e] == 4 &&
                   (team == d_5d51_d942 && d_5d51_d5ec < 2 || team == d_5d51_d940 && d_5d51_d5eb < 2)) {
            f_76ea_4602(team, 0);
        } else if (d_3404_0dd9[team == d_5d51_d940][d_5d51_d83c] == 4 &&
                   (team == d_5d51_d942 && d_5d51_d5ec < 2 || team == d_5d51_d940 && d_5d51_d5eb < 2)) {
            f_76ea_4602(team, 0);
        } else if (d_3404_0dd9[team == d_5d51_d940][d_5d51_d83a] == 4 &&
                   (team == d_5d51_d942 && d_5d51_d5ec < 2 || team == d_5d51_d940 && d_5d51_d5eb < 2)) {
            f_76ea_4602(team, 0);
        } else if (d_3404_0dd9[team == d_5d51_d940][d_5d51_d838] == 4 &&
                   (team == d_5d51_d942 && d_5d51_d5ec < 2 || team == d_5d51_d940 && d_5d51_d5eb < 2)) {
            f_76ea_4602(team, 0);
        } else {
            f_7c1d_1b40(team);
            d_5d51_d886 += f_1d5e_0d6a(3) * 2;
        }
    } else
        d_5d51_d886 += f_1d5e_0d6a(3) * 2;
    d_5d51_d9f0 = old;
    d_5d51_d844 = saved;
}

void f_76ea_3f45(int team, int p)
{
    int r;
    char buf[320];

    d_5d51_d836 = 0;
    d_5d51_d934 = d_5d51_d840 >= 15 && f_1d5e_0d6a(9) >= 2 ? (int)f_1d5e_0d6a(2) + 1 : (int)f_1d5e_0d6a(2);
    if (d_5d51_d934 == 2 || d_5d51_d934 == 1 && d_3404_0dce[team == d_5d51_d940][p] == 1) {
        if (f_1d5e_0d6a(2) == 0)
            strcpy(d_2414_3d60, "Sent off");
        else
            strcpy(d_2414_3d60, "Shown the red card");
        d_3404_0dce[team == d_5d51_d940][p] = 2;
        d_3404_0d8e[team == d_5d51_d942 ? 0 : 1][p] = d_5d51_d90a;
        if (team < 38) {
            sprintf(buf, "%s%04d", d_2414_3c20, d_3404_0e34[team][p]);
            strcpy(d_2414_3c20, buf);
            f_a7f0_8152(d_3404_0e34[team][p], 3);
        }
        d_5d51_d836 = 2;
        f_7c1d_1b40(team);
        d_5d51_d886 += f_1d5e_0d6a(2) * 2;
    } else if (d_5d51_d934 == 1) {
        if (f_1d5e_0d6a(2) == 0)
            strcpy(d_2414_3d60, "Booked");
        else
            strcpy(d_2414_3d60, "Shown the yellow card");
        d_3404_0dce[team == d_5d51_d940][p] = 1;
        if (team < 38) {
            sprintf(buf, "%s%04d", d_2414_3ae0, d_3404_0e34[team][p]);
            strcpy(d_2414_3ae0, buf);
            f_a7f0_8152(d_3404_0e34[team][p], 2);
        }
        d_5d51_d836 = 6;
    } else if (d_5d51_d934 == 0) {
        r = f_1d5e_0d6a(4);
        switch (r) {
        case 0: strcpy(d_2414_3d60, "warned"); break;
        case 1: strcpy(d_2414_3d60, "lectured"); break;
        case 2: strcpy(d_2414_3d60, "ticked off"); break;
        case 3: strcpy(d_2414_3d60, "spoken to"); break;
        }
        d_5d51_d836 = 1;
    }
    if (d_5d51_d8e0 + d_5d51_d8de > 0 && d_5d51_d836 > 0) {
        f_7c1d_0cc1();
        if (team == d_5d51_d942)
            f_76ea_2364(d_5d51_d8f4, d_5d51_d8f4, d_5d51_d8f2);
        else
            f_76ea_2364(d_5d51_d8f2, d_5d51_d8f4, d_5d51_d8f2);
        strcpy(buf, d_2414_3f90);
        f_1646_3e54(3.0, 8.5, -d_5d51_d93e, d_5d51_d9c8, 0, buf);
        f_1646_3c89(strlen(d_2414_3f90) + 5, 8.5, d_5d51_d836, d_2414_3d60);
        if (d_5d51_d5b3 == 0) {
            if (d_2414_3ef0[strlen(d_2414_3ef0) - 1] == '*') {
                d_2414_3ef0[strlen(d_2414_3ef0) - 1] = 0;
            } else {
                strcat(d_2414_3ef0, " ");
                strcat(d_2414_3ef0, d_2414_3f40);
            }
            f_1d5e_0dbd(75);
            f_7c1d_0cc1();
            sprintf(buf, "He %s", d_2414_3ef0);
            f_7c1d_0c36(team, buf);
        }
        f_1d5e_0dbd(75);
        f_7c1d_0cc1();
        if (d_5d51_d836 == 2 && f_1646_2cc9(team)) {
            d_5d51_d5cb = -1;
            f_b8e8_0000(team);
            d_5d51_d5cb = 0;
            for (d_5d51_d9fe = 0; d_5d51_d9fe <= 15; d_5d51_d9fe++)
                d_3404_0dce[team == d_5d51_d940 ? 3 : 2][d_5d51_d9fe] = 0;
            f_7c1d_1b40(team);
            f_7c1d_079e(d_5d51_d5f7);
            f_7c1d_0c36(d_5d51_d942, d_2414_40d4);
        }
    }
}

/* the commentary's fouls (CM93 had 21; a '*' marks an offence with no victim) */
static char far *d_5d51_2114[] = {
    "brought down", "hacked at", "kicked", "body checked", "obstructed", "up-ended",
    "tugged at", "flattened", "tripped", "pushed", "shoved", "held back", "clattered into",
    "handballed*", "said too much*", "feigned injury*", "gestured to the crowd*",
    "kicked the ball away*", "punched", "headbutted", "brought down", "cynically hacked",
    "spat at", "elbowed", "shoved the ref*", "dived deliberately*", "swore at the ref*",
    "intimidated the ref*"
};

void f_76ea_4433(void)
{
    d_5d51_d834 = f_1d5e_0d6a(100) + 1;
    if (d_5d51_d834 <= 80)
        d_5d51_d840 = f_1d5e_0d6a(18);
    else
        d_5d51_d840 = f_1d5e_0d6a(10) + 18;
    strcpy(d_2414_3ef0, d_5d51_2114[d_5d51_d840]);
}

void f_76ea_4495(int team, char c)
{
    int saved;
    char buf[320];
    int k;

    saved = d_5d51_d9ca;
    d_5d51_d9ca = team;
    for (;;) {
        f_1646_4ba0("Tactical move");
        f_1646_459b(1.0, 4.0, d_5d51_d9ca);
        strcpy(buf, "*Exit|Tactical change|Opponents team|");
        if (c == 0)
            strcat(buf, "Match Stats|");
        f_1646_2fa4(7, "", buf);
        f_1646_3348(c + 3);
        k = d_5d51_da0a;
        if (k == 1) {
            d_5d51_d5cb = -1;
            f_b8e8_0000(d_5d51_d9ca);
            d_5d51_d5cb = 0;
            for (d_5d51_d9fe = 0; d_5d51_d9fe <= 15; d_5d51_d9fe++)
                d_3404_0dce[d_5d51_d9ca == d_5d51_d940 ? 3 : 2][d_5d51_d9fe] = 0;
            f_7c1d_1b40(d_5d51_d9ca);
        } else if (k == 2) {
            if (d_5d51_d9ca == d_5d51_d942)
                d_5d51_d928 = d_5d51_d940;
            else
                d_5d51_d928 = d_5d51_d942;
            f_b8e8_0000(d_5d51_d928);
        } else if (k == 3) {
            f_7c1d_2f57();
            f_7c1d_3ca2(d_5d51_d8f4, d_5d51_d8f2, 0);
        } else
            break;
    }
    if (c == 0) {
        f_7c1d_079e(d_5d51_d5f7);
        f_7c1d_0c36(d_5d51_d942, d_2414_40d4);
    }
    d_5d51_d9ca = saved;
}

void f_76ea_4602(int team, int mode)
{
    char buf[320];

    f_76ea_4aed(team);
    if (mode == 1)
        d_5d51_d830 = 15;
    if (team == d_5d51_d942) {
        d_5d51_d844 = d_5d51_d940;
        d_5d51_d832 = d_5d51_d8c2;
    } else {
        d_5d51_d844 = d_5d51_d942;
        d_5d51_d832 = d_5d51_d8be;
    }
    d_5d51_d91c = d_3404_1334[team][0][d_5d51_d830];
    if (d_5d51_d832 == 0) {
        if (d_5d51_d91c > 7) {
            d_5d51_d9d0 = 5;
            d_5d51_d9fe = 10;
        } else {
            d_5d51_d9d0 = 2;
            d_5d51_d9fe = 7;
        }
    }
    if (d_5d51_d832 == 1) {
        d_5d51_d9d0 = 8;
        d_5d51_d9fe = 10;
    }
    if (d_5d51_d832 == 2) {
        d_5d51_d9d0 = 2;
        d_5d51_d9fe = 10;
    }
    d_5d51_d82e = 0;
    d_5d51_d9f0 = -1;
    for (d_5d51_d9b8 = 0; d_5d51_d9b8 <= 15; d_5d51_d9b8++) {
        if (d_3404_0dce[team == d_5d51_d940][d_5d51_d9b8] == 6) {
            d_5d51_d9f0 = d_5d51_d9b8;
            d_5d51_d9b8 = 15;
        } else if (d_3404_1334[team][0][d_5d51_d9b8] >= d_5d51_d9d0
                   && d_3404_1334[team][0][d_5d51_d9b8] <= d_5d51_d9fe
                   && d_3404_0dce[team == d_5d51_d940][d_5d51_d9b8] < 2) {
            d_5d51_d88a = f_7c1d_1717(d_5d51_d9b8, team);
            if (d_5d51_d82c - d_5d51_d88a > d_5d51_d82e) {
                d_5d51_d82e = d_5d51_d82c - d_5d51_d88a;
                d_5d51_d9f0 = d_5d51_d9b8;
            }
        }
    }
    if (d_5d51_d9f0 != -1) {
        strcpy(d_2414_5074, "tactical");
        if (d_3404_0dce[team == d_5d51_d940][d_5d51_d9f0] == 6) {
            strcpy(d_2414_5074, "enforced");
            d_3404_1334[team][0][d_5d51_d830] = d_3404_1334[team][0][d_5d51_d9f0];
        }
        if (team < 38) {
            strcpy(d_2414_5024, f_1646_4849(d_3404_0e34[team][d_5d51_d830]));
            strcat(d_2414_5024, " on for ");
            strcat(d_2414_5024, f_1646_4849(d_3404_0e34[team][d_5d51_d9f0]));
        } else {
            sprintf(d_2414_5024, "Their No.%s on for their No.%s",
                    f_1646_2f4b(d_5d51_d830 + 1, 0), f_1646_2f4b(d_5d51_d9f0 + 1, 0));
        }
        d_3404_0dce[team == d_5d51_d940][d_5d51_d830] = 0;
        if (d_3404_0dce[team == d_5d51_d940][d_5d51_d9f0] == 6)
            d_3404_0dce[team == d_5d51_d940][d_5d51_d9f0] = 3;
        else
            d_3404_0dce[team == d_5d51_d940][d_5d51_d9f0] = 5;
        d_3404_0d8e[team == d_5d51_d942 ? 0 : 1][d_5d51_d9f0] = d_5d51_d90a;
        d_3404_0dae[team == d_5d51_d942 ? 0 : 1][d_5d51_d830] = d_5d51_d90a;
        d_44d7_8c95[team == d_5d51_d940][d_5d51_d830] = d_5d51_d9f0;
        d_3404_5197[team == d_5d51_d940][d_5d51_d830] = d_5d51_d90a;
        if (team == d_5d51_d942)
            d_5d51_d5ec++;
        else
            d_5d51_d5eb++;
        f_7c1d_1b40(team);
        if (d_5d51_d8e0 + d_5d51_d8de > 0) {
            sprintf(buf, "%s %s move", (char far *)d_5d51_b476[team], d_2414_5074);
            f_7c1d_0c36(team, buf);
            f_1d5e_0dbd(75);
            f_7c1d_0c36(team, d_2414_5024);
            f_1d5e_0dbd(100);
            f_7c1d_0c36(d_5d51_d942, d_2414_40d4);
        }
    }
    if (team == d_5d51_d942) {
        if (d_5d51_d5bc)
            d_5d51_d5bc = 0;
        else if (d_5d51_d5ba)
            d_5d51_d5ba = 0;
        else if (d_5d51_d5b8)
            d_5d51_d5b8 = 0;
        else if (d_5d51_d5b6)
            d_5d51_d5b6 = 0;
    } else {
        if (d_5d51_d5bb)
            d_5d51_d5bb = 0;
        else if (d_5d51_d5b9)
            d_5d51_d5b9 = 0;
        else if (d_5d51_d5b7)
            d_5d51_d5b7 = 0;
        else if (d_5d51_d5b5)
            d_5d51_d5b5 = 0;
    }
}

void f_76ea_4aed(int team)
{
    int a;
    int b;
    int c;
    int d;

    d_5d51_d844 = team == d_5d51_d942 ? d_5d51_d940 : d_5d51_d942;
    a = -5000;
    b = -5000;
    c = -5000;
    d = -5000;
    if (d_3404_0dce[team == d_5d51_d940][11] == 4)
        a = f_7c1d_1717(11, team);
    if (d_3404_0dce[team == d_5d51_d940][12] == 4)
        b = f_7c1d_1717(12, team);
    if (d_3404_0dce[team == d_5d51_d940][13] == 4)
        c = f_7c1d_1717(13, team);
    if (d_3404_0dce[team == d_5d51_d940][14] == 4)
        d = f_7c1d_1717(14, team);
    if (d > b && d > c && d > a) {
        d_5d51_d830 = 14;
        d_5d51_d82c = d;
    } else {
        d_5d51_d830 = 11;
        d_5d51_d82c = a;
    }
}

void f_76ea_4c0b(float x, float y)
{
    f_1d5e_0822(18, 112, 261, 120);
    f_1646_38d0(x, 15.0, 6, "Attacking...");
    f_1646_38d0(y, 15.0, 12, "Defending...");
}

void f_76ea_4c7c(void)
{
    f_7c1d_0000(d_5d51_d8ae, d_5d51_d8a4, 0, 2);
    f_7c1d_0000(d_5d51_d8aa, d_5d51_d8a8, 1, 1);
    f_7c1d_0000(d_5d51_d8a6, d_5d51_d8ac, 2, 0);
}
