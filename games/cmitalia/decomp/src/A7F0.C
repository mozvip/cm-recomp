/* @at a7f0:0000 */
/* @data 5d51:6cb2 */
/* @module */

/* Overlay a7f0: CM93's overlay ad38 (games/cm93/decomp/src/AD38.C) changed for CM Italia:
 * loading the data files (team.dat, league.dat, foreign.dat), player info screens, fines,
 * the match history files, the club's season, league and cup records and transfers, board
 * messages and the scouts. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <mem.h>
#include <bios.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_a7f0_0000(void);
void f_a7f0_0290(void);
unsigned char f_a7f0_0592(int player, int team, char c);
char f_a7f0_0990(int p, int team, char mode);
char f_a7f0_210a(int a, char b);
void f_a7f0_2207(int p, unsigned char a, char kind);
unsigned char f_a7f0_28e5(int p, unsigned char r, unsigned char x);
void f_a7f0_29ba(int p, unsigned char week, int team, unsigned char r, unsigned char apps, unsigned char goals, int z, unsigned char perf);
void f_a7f0_3054(int player);
void f_a7f0_321e(int p, unsigned char team);
void f_a7f0_331b(unsigned char team, unsigned char i);
void f_a7f0_34c8(void);
void f_a7f0_3545(unsigned char team, unsigned char i);
unsigned char f_a7f0_3a19(unsigned char team, unsigned char gk);
void f_a7f0_3af0(unsigned char team);
void f_a7f0_3cfa(void);
void f_a7f0_4061(void);
void f_a7f0_4066(void);
void f_a7f0_406b(char far *s);
void f_a7f0_4092(unsigned char n);
void f_a7f0_40bd(unsigned team);
void f_a7f0_41ac(unsigned team);
void f_a7f0_4226(void);
void f_a7f0_425e(void);
void f_a7f0_42c5(unsigned char team, char mode, int player, unsigned char club, long fee, unsigned char x);
void f_a7f0_4a13(unsigned char team, unsigned char idx);
void f_a7f0_4ab0(unsigned char team);
void f_a7f0_4bae(void);
void f_a7f0_4f67(void);
void f_a7f0_54f2(void);
void f_a7f0_57df(void);
void f_a7f0_5b4d(void);
void f_a7f0_5da7(void);
void f_a7f0_6001(void);
void f_a7f0_60fc(void);
char f_a7f0_6332(unsigned char club, char far *title);
void f_a7f0_6442(unsigned char team, int player);
void f_a7f0_675a(unsigned char m);
void f_a7f0_6f34(unsigned char n, char lit);
void f_a7f0_7087(void);
void f_a7f0_70f0(unsigned char h, unsigned char n);
void f_a7f0_7f03(unsigned char n, char lit);
void f_a7f0_806e(void);
unsigned char f_a7f0_80e4(unsigned char h, unsigned char n);
void f_a7f0_8152(int player, char ev);

struct flags_a { unsigned char b0; unsigned f8 : 1; unsigned f9 : 1; unsigned : 6; unsigned : 2; unsigned f18 : 1; unsigned f19 : 1; unsigned : 4; unsigned : 0; unsigned f24 : 1; unsigned : 3; unsigned f28 : 1; unsigned : 1; unsigned f30 : 1; unsigned : 1; };
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
union flags { struct flags_a a; struct flags_w w; };
void f_1d5e_1a24();
long f_1d5e_0d6a(long n);
int f_1d5e_136a(int a, int b);
void far *f_1d5e_1618(int handle, int page);
int f_1646_5da8(FILE *fp);
char f_1646_6f38(int player);
int f_1646_6f80(int player, int club);
void f_b0f1_66b9(char a);
void f_b0f1_6835(char a, int i, int n);
extern char far d_2414_0050[];
extern int far d_2414_84c2[][38];
extern long far d_3404_3e4a[][38];
extern unsigned char far d_3404_443a[][40];
extern unsigned char far d_3404_4e8a[];
extern unsigned char far d_3404_4552[];
extern unsigned char far d_3404_45ca[][82];
extern int far d_3404_51ac[][1500];
extern int far d_3404_691c[];
extern unsigned char far d_44d7_0000[][1500];
extern unsigned char far d_3c0d_0000[][1500];
extern FILE *d_5d51_0094;
extern FILE *d_5d51_d40d;
extern char d_5d51_d55c;
extern int d_5d51_d9fe;
extern int d_5d51_da04;
extern int d_5d51_da18;
extern int d_5d51_da1a;
extern union flags far d_2414_af3c[];
extern unsigned char (far *d_5d51_da38)[1500];
extern int (far *d_5d51_da4c)[1500];
extern int d_5d51_dd92;
extern int d_5d51_dd9c;
int f_1d5e_1308(int a, int b);
int f_b0f1_43eb(unsigned char c);
int f_b0f1_445d(unsigned char c);
extern unsigned char far d_2414_c6ac[][5][16];
extern int far d_3404_5d64[];
extern int far d_3404_74d4[];
extern float d_5d51_d4d5;
extern float d_5d51_d4d9;
extern float d_5d51_d4dd;
extern int d_5d51_d71e;
extern int d_5d51_d720;
extern int d_5d51_d722;
extern int d_5d51_d724;
extern int d_5d51_d726;
extern int d_5d51_d834;
extern int d_5d51_d8d4;
extern int d_5d51_d8d6;
extern int d_5d51_d98e;
extern int (far *d_5d51_da34)[2][16];
extern int d_5d51_dd90;
float f_1646_2cfd(int x);
char f_1646_60b7(int p);
float f_1d5e_1089(void);
float f_1d5e_12e0(float a, float b);
float f_1d5e_1342(float a, float b);
extern char far d_2414_321e[][6];
extern char far d_2414_321f[][6];
extern unsigned char far d_2414_f168[];
extern float d_5d51_d4c9;
extern float d_5d51_d4cd;
extern float d_5d51_d4d1;
extern int d_5d51_d6fc;
extern int d_5d51_d6fe;
extern int d_5d51_d700;
extern int d_5d51_d704;
extern int d_5d51_d706;
extern int d_5d51_d708;
extern int d_5d51_d70e;
extern int d_5d51_d768;
extern int d_5d51_d7f8;
extern int d_5d51_d818;
extern int d_5d51_d9cc;
void f_1d5e_08cc(int c);
void f_1d5e_08e2(int x1, int y1, int x2, int y2);
void f_1d5e_1a29(void);
void f_1d5e_1a2e(void);
void f_1d5e_03a3(char on);
int f_1d5e_0c17(void);
void f_1646_3686(float x, float y, int bg, int fg, int w, char far *s);
char f_1646_5dff(int player);
void f_1646_5bcb(int team, char far *title, char far *text);
int f_1646_6aa9(int x);
char f_1646_2646(int w);
char f_1646_2674(int w);
void f_8119_1634(int team, int delta);
void f_9915_138e(int player, int a, int b);
void f_9915_168a(int p);
extern unsigned char far d_2414_c6dc[][80];
extern unsigned char far d_2414_c6ec[][80];
extern char far *far d_56d9_0000[];
extern char far *far d_56d9_13b9[];
extern char far d_2414_5460[][80];
extern int d_5d51_da06;
extern int far d_3404_0e34[][16];
extern unsigned char far d_3404_1d44[];
extern int far d_44d7_9624[][26];
extern unsigned char far d_44d7_6978[];
extern unsigned char far d_3c0d_2904[];
extern char near *d_5d51_b476[];
extern int d_5d51_dd98;
extern long (far *d_5d51_da44)[38];
extern char d_5d51_d5e7;
extern unsigned far d_2412_001d;
extern struct { int a, b, start, len; } far d_2414_a5dc[];
extern int d_5d51_dd8e;
extern char far *d_5d51_da30;
extern int d_5d51_d958;
struct s_trans { int a[15]; /* +00 d_3404_5d64[player] */ int b[15]; /* +1e d_3404_74d4[player] */ char club[15][15]; /* +3c the other club's name */ long fee[15]; /* +11d */ unsigned char c[15]; /* +159 */ };
struct s_mhst { unsigned char season; /* 00 season + 93 */ char name[15]; /* 01 the club's name */ unsigned char pos; /* 10 league position (index in d_3404_0728) */ unsigned char played; /* 11 */ unsigned char won; /* 12 */ unsigned char drawn; /* 13 */ unsigned char lost; /* 14 */ unsigned char gf; /* 15 */ unsigned char ga; /* 16 */ unsigned char pts; /* 17 */ unsigned char conf; /* 18 d_3404_452a[team] */ char manager[10]; /* 19 f_9182_14f6(team + 646, 0) */ unsigned char n[2]; /* 23 players bought, sold */ unsigned char x25; /* 25 d_3404_4dc2[team] */ long x26; /* 26 d_3404_4012[team] */ unsigned char x2a; /* 2a d_2414_e918[team] */ unsigned char x2b; /* 2b d_2414_e9a4[team] */ unsigned char cup; /* 2c */ unsigned char cupround; /* 2d */ struct s_trans t[2]; /* 2e bought, 196 sold */ };
int f_1d5e_0d9c(char far *path);
void f_1646_0bf2(char far *s);
void f_1646_3e54(float x, float y, int bg, int fg, int w, char far *s);
char far *f_1646_4919(int manager, char full);
char far *f_1646_4a8f(int division);
char far *f_1646_4b1e(int division, char full);
void f_1646_4ba0(char far *title);
void f_1646_50c5(int a, float x, float y, int c, int d, int e, char far *s);
int f_1646_5602(int a);
void f_1646_5869(int team);
void f_1646_6097(void);
void f_1646_60a7(void);
char far *f_9182_14f6(int manager, int type);
int f_9e79_0000(int x);
void f_9e79_1503(char all);
extern char far d_2414_07c6[];
extern unsigned char far d_2414_5890[];
extern unsigned char far d_2414_e5d0[][140];
extern unsigned char far d_2414_e918[];
extern unsigned char far d_2414_e9a4[];
extern unsigned char far d_2414_ea30[];
extern unsigned char far d_2414_eabc[];
extern unsigned char far d_2414_eb48[];
extern unsigned char far d_2414_ebd4[];
extern long far d_3404_4012[];
extern unsigned char far d_3404_452a[];
extern unsigned char far d_3404_461a[];
extern unsigned char far d_3404_4642[];
extern unsigned char far d_3404_466a[];
extern unsigned char far d_3404_4692[];
extern unsigned char far d_3404_4dc2[];
extern char far * far d_4f37_0000[];
extern int d_5d51_d628;
extern int d_5d51_d9c6;
extern int d_5d51_da0e;
void f_1646_2fa4(int n, char far *title, char far *items);
char f_1646_2cc9(int x);
void f_1646_3348(int last);
void f_1646_357e(int x, int y, int colour, char far *s);
char f_1646_6971(char x);
void f_8119_1230(int team, long amount, long z);
char far *f_9182_6d1c(int round);
extern char far d_2414_2e2c[];
extern char far d_2414_2ecc[];
extern char far d_2414_2f1c[];
extern int far d_3404_42be[][38];
extern unsigned char far d_3404_4e62[];
extern int d_5d51_d9ca;
extern int d_5d51_da0a;
struct scout { char used; /* +00 */ unsigned player; /* +01: player watched + 1, 0: none */ unsigned match; /* +03: record of the match in the match file */ unsigned char comp; /* +05 */ unsigned char week; /* +06 */ int opponent; /* +07 */ unsigned char shirt; /* +09: 0 not picked */ unsigned char fitness; /* +0a */ unsigned char minutes; /* +0b: minutes played */ unsigned char rating[6]; /* +0c: this match, then the last five */ unsigned char goals; /* +12 */ unsigned char booked; /* +13: minute */ unsigned char sent_off; /* +14: minute */ unsigned char injured; /* +15: minute */ unsigned char other; /* +16: team + 1 of another club's scout present */ };
void f_1646_0b2f(int line, char far *s);
void f_1646_0b9f(char far *s);
char far *f_1646_470f(int player);
char far *f_1646_48c0(int player);
char far *f_1646_4849(int player);
void f_1646_545c(int a, char b);
void f_9182_0a23(int team);
void f_a13d_4a1b(int player, int a, char b);
void f_8539_4fbd(int player, int a);
void f_1d5e_08d7(int c);
void f_1d5e_0929(int x1, int y1, int x2, int y2);
int f_1d5e_0c07(void);
int f_1d5e_0c0f(void);
extern int far d_3404_4226[][38];
extern unsigned char far d_3404_448a[];
extern struct scout far d_2414_a46c[][4];
extern int d_5d51_d9ba;
extern char d_5d51_d5df;
char far *f_1646_3537(int x);
void f_1646_459b(float x, float y, int team);
void f_6b47_55c8(int team);
void f_71c8_3038(int team);
void f_7c1d_3ca2(int a, int b, char c);
int f_8539_1b9e(int team, int p);
char f_8ba7_3364(int p, int team, int n);
extern char far d_2414_083e[];
extern char far d_2414_8414[];
extern int far d_3404_4732[];
extern unsigned char far d_3c0d_86c4[];
extern unsigned char far d_44d7_7b0c[];
extern int far d_4f37_1392[][2][100];
extern char near *d_5d51_b474[];
extern int d_5d51_d7fa;
extern int d_5d51_d8ea;
extern int d_5d51_d908;
extern int d_5d51_d90a;
extern int d_5d51_d928;
extern int d_5d51_d9e6;
char f_1646_6f56(int player);
extern char far d_2414_0816[];
extern unsigned char far d_56d9_4dc7[];
extern FILE *d_5d51_0098;
unsigned char f_1646_717d(char team);
extern char far d_2414_0000[];
extern unsigned char far d_3404_0728[];
extern struct s_mhst far d_2414_8722;
extern struct s_mhst far d_2414_8a20[];
extern int d_5d51_da0c;
char far *f_9182_6df8(int round, int cup);
extern char far d_2414_873b[];
extern unsigned char far d_2414_873a;
extern unsigned char far d_2414_8745;
extern unsigned char far d_2414_8746;
extern unsigned char far d_2414_8747;
extern unsigned long far d_2414_8748;
extern unsigned char far d_2414_874c;
extern unsigned char far d_2414_874e;
extern unsigned char far d_2414_874f;
extern int far d_2414_8750[];
extern int far d_2414_876e[];
extern char far d_2414_878c[][15];
extern long far d_2414_886d[];
extern char far d_2414_88a9[];
extern int far d_2414_88b8[];
extern int far d_2414_88d6[];
extern char far d_2414_88f4[][15];
extern long far d_2414_89d5[];
extern char far d_2414_8a11[];
extern char far d_2414_0078[];


void f_a7f0_0000(void)
{
    unsigned char i;
    unsigned char hi;
    unsigned char lo;
    FILE *fp;

    f_1d5e_1a24(2);
    fp = fopen("team.dat", "rb");
    for (i = 0; i <= 37; i = i + 1) {
        d_3404_443a[1][i] = fgetc(fp);
        d_3404_4e8a[i] = fgetc(fp);
        hi = fgetc(fp);
        lo = fgetc(fp);
        d_3404_443a[2][i] = (hi << 4) + lo;
        hi = fgetc(fp);
        lo = fgetc(fp);
        d_3404_443a[3][i] = (hi << 4) + lo;
        d_3404_443a[4][i] = fgetc(fp);
        d_3404_443a[0][i] = fgetc(fp);
        d_3404_3e4a[0][i] = (long)(unsigned)f_1646_5da8(fp) * 1000;
        d_3404_443a[6][i] = fgetc(fp);
        d_2414_84c2[0][i] = f_1646_5da8(fp);
        d_2414_84c2[1][i] = f_1646_5da8(fp);
        d_2414_84c2[2][i] = fgetc(fp);
        d_2414_84c2[3][i] = fgetc(fp);
        d_2414_84c2[4][i] = fgetc(fp);
        d_2414_84c2[5][i] = fgetc(fp);
        d_2414_84c2[6][i] = f_1646_5da8(fp);
        d_2414_84c2[7][i] = f_1646_5da8(fp);
    }
    fclose(fp);
}

void f_a7f0_0290(void)
{
    unsigned char i;
    unsigned char j;
    unsigned char t;
    int p;
    register int n;
    register int done;

    t = 0;
    n = 0;
    d_5d51_da1a = 864;
    d_5d51_da18 = 374;
    for (i = 0; i <= 37; i = i + 1) {
        d_3404_4552[i] = 0;
        d_3404_45ca[0][i] = 0;
    }
    f_b0f1_66b9(1);
    f_1d5e_1a24(2);
    d_5d51_0094 = fopen(d_2414_0050, "rb+");
    f_1d5e_1a24(2);
    if (d_5d51_d55c != 0) {
        d_5d51_d40d = fopen("league.dat", "rb");
        for (i = 0; i <= 37; i = i + 1) {
            do {
                done = f_a7f0_0592(n, i, 4);
                if (done == 0) {
                    f_b0f1_6835(1, n, d_5d51_da1a + d_5d51_da18 - 1);
                    n++;
                }
            } while (done == 0);
            for (j = 0; j <= 15; j = j + 1)
                f_a7f0_331b(i, j);
        }
        fclose(d_5d51_d40d);
    } else if (d_5d51_d55c == 0) {
        for (i = 0; i <= 37; i = i + 1) {
            float f;
            unsigned char k;
            unsigned char count;

            f = (d_5d51_da1a - n) / (38 - t) + (t < 37 ? 0.5 : 0.0);
            count = f;
            for (k = 1; k <= count; k = k + 1) {
                done = f_a7f0_0592(n, i, k <= 2 ? 1 : 0);
                if (done == 0) {
                    f_b0f1_6835(1, n, d_5d51_da1a + d_5d51_da18 - 1);
                    n++;
                }
            }
            for (j = 0; j <= 15; j = j + 1)
                f_a7f0_331b(i, j);
            t++;
        }
    }
    p = 1000;
    if (d_5d51_d55c != 0) {
        f_1d5e_1a24(2);
        d_5d51_d40d = fopen("foreign.dat", "rb");
        do {
            done = f_a7f0_0592(p, 255, 4);
            if (done == 0) {
                f_b0f1_6835(1, n, d_5d51_da1a + d_5d51_da18 - 1);
                p++;
                n++;
            }
        } while (done == 0);
        fclose(d_5d51_d40d);
    } else if (d_5d51_d55c == 0) {
        unsigned m;

        for (m = 1; m <= d_5d51_da18; m++) {
            done = f_a7f0_0592(p, 255, f_1d5e_0d6a(10) == 0 ? 1 : 0);
            if (done == 0) {
                f_b0f1_6835(1, n, d_5d51_da1a + d_5d51_da18 - 1);
                p++;
                n++;
            }
        }
    }
    fclose(d_5d51_0094);
    d_5d51_0094 = 0;
}

unsigned char f_a7f0_0592(int player, int team, char c)
{
    d_2414_af3c[player].w.f0 = 0;
    d_2414_af3c[player].w.f1 = 0;
    d_2414_af3c[player].w.f2 = 0;
    d_2414_af3c[player].w.f3 = 0;
    d_2414_af3c[player].w.f4 = 0;
    d_2414_af3c[player].w.f5 = 0;
    d_2414_af3c[player].w.f6 = 0;
    d_2414_af3c[player].w.f7 = 0;
    d_2414_af3c[player].w.f8 = 0;
    d_2414_af3c[player].w.f9 = 0;
    d_2414_af3c[player].w.f10 = 0;
    d_2414_af3c[player].w.f11 = 0;
    d_2414_af3c[player].w.f12 = 0;
    d_2414_af3c[player].w.f13 = 0;
    d_2414_af3c[player].w.f14 = 0;
    d_2414_af3c[player].w.f15 = 0;
    d_2414_af3c[player].w.f16 = 0;
    d_2414_af3c[player].w.f17 = 0;
    d_2414_af3c[player].w.f18 = 0;
    d_2414_af3c[player].w.f19 = 0;
    d_2414_af3c[player].w.f20 = 0;
    d_2414_af3c[player].w.f21 = 0;
    d_2414_af3c[player].w.f22 = 0;
    d_2414_af3c[player].w.f23 = 0;
    d_2414_af3c[player].w.f24 = 0;
    d_2414_af3c[player].w.f25 = 0;
    d_2414_af3c[player].w.f26 = 0;
    d_2414_af3c[player].w.f27 = 0;
    d_2414_af3c[player].w.f28 = 0;
    d_2414_af3c[player].w.f29 = 0;
    d_2414_af3c[player].w.f30 = 0;
    d_2414_af3c[player].w.f31 = 0;
    for (d_5d51_d9fe = 0; d_5d51_d9fe <= 47; d_5d51_d9fe++) {
        if (d_5d51_d9fe < 24)
            d_44d7_0000[d_5d51_d9fe][player] = 0;
        else
            d_3c0d_0000[d_5d51_d9fe - 24][player] = 0;
        if (d_5d51_d9fe < 5) {
            d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 1);
            d_5d51_da4c[d_5d51_d9fe][player] = 0;
        }
        if (d_5d51_d9fe < 10) {
            d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 1);
            d_5d51_da38[d_5d51_d9fe][player] = d_5d51_d9fe <= 1 ? 255 : 0;
        }
        if (d_5d51_d9fe < 4)
            d_3404_51ac[d_5d51_d9fe][player] = 0;
    }
    if (f_a7f0_0990(player, team, c) == 1)
        return 1;
    f_a7f0_2207(player, team, c);
    d_2414_af3c[player].w.f13 = c == 2 || c == 3;
    d_44d7_0000[21][player] = 100;
    d_3c0d_0000[7][player] = 255;
    d_3404_691c[player] = (d_5d51_da04 + f_1d5e_136a(f_1d5e_0d6a(5), f_1d5e_0d6a(5))
                           + d_2414_af3c[player].w.f9) * 100 + f_1d5e_0d6a(30) + 1;
    if (f_1646_6f38(player) == 0) {
        d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 1);
        d_5d51_da4c[4][player] = f_1646_6f80(player, team);
        d_3404_4552[team]++;
        if (d_2414_af3c[player].w.f0)
            d_3404_45ca[0][team]++;
    }
    return 0;
}

/* Fills player p's attributes: from the open data file (mode 4), from the team's
   default squad (modes 2 and 3) or at random. Italia: the attribute balancing runs only
   for players not read from the file, and the nationality of a random player (outside
   modes 2-3) is no longer CM93's 26-entry table or weighted choice: about 200 times in
   380 Italian (0), otherwise the nationality of a random non-Italian surname
   (d_56d9_4dc7); everyone else is Italian. */
char f_a7f0_0990(int p, int team, char mode)
{
    unsigned char i;
    unsigned char k;
    char fromfile;
    char squad;
    char a[7];
    char ok;

    fromfile = mode == 4 ? -1 : 0;
    squad = mode == 2 || mode == 3 ? -1 : 0;
    if (fromfile) {
        d_3404_5d64[p] = f_1646_5da8(d_5d51_d40d);
        if (d_3404_5d64[p] == 3000)
            return 1;
    } else if (squad) {
        k = f_a7f0_3a19(team, mode == 3 ? 1 : 0);
        d_5d51_da34 = f_1d5e_1618(d_5d51_dd90, 0);
        d_3404_5d64[p] = d_5d51_da34[team][0][k];
    } else
        d_3404_5d64[p] = 3000;
    if (fromfile)
        d_3404_74d4[p] = f_1646_5da8(d_5d51_d40d);
    else if (squad) {
        d_5d51_da34 = f_1d5e_1618(d_5d51_dd90, 0);
        d_3404_74d4[p] = d_5d51_da34[team][1][k];
    } else
        d_3404_74d4[p] = 3000;
    if (fromfile) {
        d_2414_af3c[p].w.f9 = fgetc(d_5d51_d40d);
        if (f_1646_6f38(p))
            d_44d7_0000[18][p] = fgetc(d_5d51_d40d);
        d_2414_af3c[p].a.f28 = fgetc(d_5d51_d40d);
    }
    for (i = 0; i <= 6; i = i + 1) {
        a[i] = fromfile ? fgetc(d_5d51_d40d) : 100;
        if (a[i] == 1)
            a[i] = -1;
        if (squad && i <= 3)
            a[i] = d_2414_c6ac[team][0][k] - 1 == i ? -1 : 0;
    }
    if (fromfile && a[3] && !a[2] && !a[1] && !a[6])
        a[2] = -1;
    if (fromfile && a[2] && !a[3] && !a[1] && !a[6])
        a[6] = -1;
    d_44d7_0000[17][p] = fromfile ? fgetc(d_5d51_d40d) : -1;
    if (squad)
        d_44d7_0000[17][p] = d_2414_c6ac[team][1][k];
    d_3c0d_0000[17][p] = fromfile ? fgetc(d_5d51_d40d) : -1;
    d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 1);
    d_5d51_da38[9][p] = fromfile ? fgetc(d_5d51_d40d) : -1;
    d_44d7_0000[0][p] = fromfile ? fgetc(d_5d51_d40d) : -1;
    if (squad) {
        d_44d7_0000[0][p] = d_2414_c6ac[team][2][k];
        f_a7f0_331b(team, k);
    }
    for (i = 1; i <= 14; i = i + 1)
        d_44d7_0000[i][p] = fromfile ? fgetc(d_5d51_d40d) : -1;
    d_44d7_0000[22][p] = fromfile ? fgetc(d_5d51_d40d) : -1;
    do {
        ok = 1;
        d_5d51_d834 = f_1d5e_0d6a(1000) + 1;
        if (d_5d51_d834 < 101 && mode != 1 && mode != 3 && mode != 4)
            ok = 0;
        else if (d_5d51_d834 >= 101 && (mode == 1 || mode == 3))
            ok = 0;
    } while (ok == 0);
    if (a[0] == 100)
        a[0] = d_5d51_d834 < 101 ? -1 : 0;
    if (a[1] == 100)
        a[1] = d_5d51_d834 > 100 && d_5d51_d834 < 400 || d_5d51_d834 > 760 && d_5d51_d834 < 855
               || d_5d51_d834 > 998 ? -1 : 0;
    if (a[2] == 100)
        a[2] = d_5d51_d834 > 399 && d_5d51_d834 < 572 || d_5d51_d834 > 760 ? -1 : 0;
    if (a[3] == 100)
        a[3] = d_5d51_d834 > 571 && d_5d51_d834 < 761 || d_5d51_d834 > 854 ? -1 : 0;
    if (a[0] == 0) {
        unsigned char j;
        unsigned char m;

        d_5d51_d834 = f_1d5e_0d6a(1000) + 1;
        if (a[4] == 100)
            a[4] = d_5d51_d834 < 153 || d_5d51_d834 > 873 && d_5d51_d834 < 930
                   || d_5d51_d834 > 981 ? -1 : 0;
        if (a[5] == 100)
            a[5] = d_5d51_d834 > 152 && d_5d51_d834 < 331 || d_5d51_d834 > 929 ? -1 : 0;
        if (a[6] == 100)
            a[6] = d_5d51_d834 > 330 && d_5d51_d834 < 982 || d_5d51_d834 > 998 ? -1 : 0;
        if (fromfile == 0 && a[3] && a[6] == 0 && a[2] == 0) {
            if (f_1d5e_0d6a(2) == 0)
                a[6] = -1;
            else
                a[2] = -1;
        }
        if (fromfile == 0 && a[2] && a[6] == 0 && a[3] == 0 && a[1] == 0) {
            d_5d51_d834 = f_1d5e_0d6a(3);
            if (d_5d51_d834 == 0)
                a[6] = -1;
            else if (d_5d51_d834 == 1)
                a[3] = -1;
            else
                a[1] = -1;
        }
        if (d_44d7_0000[1][p] == 255)
            d_44d7_0000[1][p] = f_a7f0_210a(a[2] || a[3], 0);
        if (d_44d7_0000[2][p] == 255)
            d_44d7_0000[2][p] = f_a7f0_210a(f_1d5e_1308(a[1] ? 2 : 0, a[2] ? 1 : 0), 0);
        if (d_44d7_0000[3][p] == 255)
            d_44d7_0000[3][p] = f_a7f0_210a(1, a[4] || a[5] ? -1 : 0);
        if (d_44d7_0000[4][p] == 255)
            d_44d7_0000[4][p] = f_a7f0_210a(1, a[6] && (a[1] || a[3]) ? -1 : 0);
        if (d_44d7_0000[5][p] == 255)
            d_44d7_0000[5][p] = f_a7f0_210a(a[3] ? 1 : 0, a[4] || a[5] ? -1 : 0);
        if (d_44d7_0000[6][p] == 255)
            d_44d7_0000[6][p] = f_a7f0_210a(a[2] || a[3], 0);
        if (d_44d7_0000[7][p] == 255)
            d_44d7_0000[7][p] = f_a7f0_210a(f_1d5e_1308(a[2] ? 1 : 0, a[3] ? 2 : 0), a[6] ? -1 : 0);
        if (fromfile == 0) {
            if (a[1] && (a[4] || a[5])) {
                for (j = 0; d_44d7_0000[2][p] + d_44d7_0000[3][p] < 30; j++)
                    d_44d7_0000[j % 2 == 0 ? 2 : 3][p] = f_1d5e_136a(d_44d7_0000[j % 2 == 0 ? 2 : 3][p] + 1, 20);
            }
            if (a[1] && a[6]) {
                for (j = 0; d_44d7_0000[2][p] + d_44d7_0000[4][p] < 30; j++)
                    d_44d7_0000[j % 2 == 0 ? 2 : 4][p] = f_1d5e_136a(d_44d7_0000[j % 2 == 0 ? 2 : 4][p] + 1, 20);
                for (j = 0; d_44d7_0000[5][p] + d_44d7_0000[6][p] > 15; j++)
                    d_44d7_0000[j % 2 == 0 ? 5 : 6][p] = f_1d5e_1308(d_44d7_0000[j % 2 == 0 ? 5 : 6][p] - 1, 1);
            }
            if (a[2] && (a[4] || a[5])) {
                for (j = 0; d_44d7_0000[1][p] + d_44d7_0000[3][p] + d_44d7_0000[6][p] < 30; j++) {
                    if (j % 3 == 0)
                        m = 1;
                    else if (j % 3 == 1)
                        m = 3;
                    else
                        m = 6;
                    d_44d7_0000[m][p] = f_1d5e_136a(d_44d7_0000[m][p] + 1, 20);
                }
                for (j = 0; d_44d7_0000[6][p] < d_44d7_0000[1][p] - 5; j++) {
                    if (j % 2 == 0)
                        d_44d7_0000[6][p] = f_1d5e_136a(d_44d7_0000[6][p] + 1, 20);
                    else
                        d_44d7_0000[1][p] = f_1d5e_1308(d_44d7_0000[1][p] - 1, 1);
                }
            }
            if (a[2] && a[6]) {
                for (j = 0; d_44d7_0000[1][p] + d_44d7_0000[2][p] < 30; j++)
                    d_44d7_0000[j % 2 == 0 ? 1 : 2][p] = f_1d5e_136a(d_44d7_0000[j % 2 == 0 ? 1 : 2][p] + 1, 20);
                for (j = 0; d_44d7_0000[6][p] < d_44d7_0000[1][p] - 5; j++) {
                    if (j % 2 == 0)
                        d_44d7_0000[6][p] = f_1d5e_136a(d_44d7_0000[6][p] + 1, 20);
                    else
                        d_44d7_0000[1][p] = f_1d5e_1308(d_44d7_0000[1][p] - 1, 1);
                }
            }
            if (a[3] && (a[4] || a[5])) {
                for (j = 0; d_44d7_0000[3][p] + d_44d7_0000[5][p] < 30; j++)
                    d_44d7_0000[j % 2 == 0 ? 3 : 5][p] = f_1d5e_136a(d_44d7_0000[j % 2 == 0 ? 3 : 5][p] + 1, 20);
                for (j = 0; d_44d7_0000[6][p] < d_44d7_0000[5][p] - 5; j++) {
                    if (j % 2 == 0)
                        d_44d7_0000[6][p] = f_1d5e_136a(d_44d7_0000[6][p] + 1, 20);
                    else
                        d_44d7_0000[5][p] = f_1d5e_1308(d_44d7_0000[5][p] - 1, 1);
                }
            }
            if (a[3] && a[6]) {
                for (j = 0; d_44d7_0000[6][p] + d_44d7_0000[7][p] > 25; j++)
                    d_44d7_0000[j % 2 == 0 ? 6 : 7][p] = f_1d5e_1308(d_44d7_0000[j % 2 == 0 ? 6 : 7][p] - 1, 1);
                for (j = 0; d_44d7_0000[4][p] + d_44d7_0000[5][p] > 25; j++)
                    d_44d7_0000[j % 2 == 0 ? 4 : 5][p] = f_1d5e_1308(d_44d7_0000[j % 2 == 0 ? 4 : 5][p] - 1, 1);
                for (j = 0; d_44d7_0000[5][p] < d_44d7_0000[6][p] - 5; j++) {
                    if (j % 2 == 0)
                        d_44d7_0000[5][p] = f_1d5e_136a(d_44d7_0000[5][p] + 1, 20);
                    else
                        d_44d7_0000[6][p] = f_1d5e_1308(d_44d7_0000[6][p] - 1, 1);
                }
            }
        }
    } else {
        a[1] = 0;
        a[2] = 0;
        a[3] = 0;
        a[4] = 0;
        a[5] = 0;
        a[6] = 0;
        d_44d7_0000[1][p] = 0;
        d_44d7_0000[2][p] = 0;
        d_44d7_0000[3][p] = 0;
        d_44d7_0000[4][p] = 0;
        d_44d7_0000[5][p] = 0;
        d_44d7_0000[6][p] = 0;
        d_44d7_0000[7][p] = 0;
    }
    if (d_44d7_0000[10][p] == 255)
        d_44d7_0000[10][p] = f_a7f0_210a(1, 0);
    if (d_44d7_0000[11][p] == 255)
        d_44d7_0000[11][p] = f_a7f0_210a(1, 0);
    if (d_44d7_0000[13][p] == 255)
        d_44d7_0000[13][p] = f_a7f0_210a(1, 0);
    if (d_44d7_0000[17][p] == 255) {
        if (mode != 2 && mode != 3) {
            d_5d51_d726 = f_1d5e_0d6a(18 - a[0] * 5) + 17;
            d_5d51_d724 = f_1d5e_0d6a(18 - a[0] * 5) + 17;
            if (abs(d_5d51_d726 - 28) < abs(d_5d51_d724 - 28))
                d_44d7_0000[17][p] = d_5d51_d726;
            else
                d_44d7_0000[17][p] = d_5d51_d724;
        } else
            d_44d7_0000[17][p] = f_1d5e_0d6a(5) + 16;
    }
    if (d_3c0d_0000[17][p] == 255)
        d_3c0d_0000[17][p] = f_1d5e_0d6a(10);
    d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 0);
    if (d_5d51_da38[9][p] == 255) {
        int j;
        char it;

        if ((f_1646_6f38(p) || f_1d5e_0d6a(100) <= 4) && !squad) {
            it = f_1d5e_0d6a(380) < 200 ? 1 : 0;
            do
                j = f_1d5e_0d6a(1176);
            while (d_56d9_4dc7[j] == 0 && it == 0 || d_56d9_4dc7[j] != 0 && it == 1);
            d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 1);
            d_5d51_da38[9][p] = it == 0 ? d_56d9_4dc7[j] : 0;
            if (f_1646_6f38(p))
                d_44d7_0000[18][p] = (it == 0 ? d_56d9_4dc7[j] : f_1d5e_0d6a(2) + 73) + 140;
        } else {
            d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 1);
            d_5d51_da38[9][p] = 0;
        }
    }
    if (d_3404_5d64[p] == 3000) {
        d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 0);
        d_3404_5d64[p] = f_b0f1_43eb(d_5d51_da38[9][p]);
    }
    if (d_3404_74d4[p] == 3000) {
        d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 0);
        d_3404_74d4[p] = f_b0f1_445d(d_5d51_da38[9][p]);
    }
    d_5d51_d4dd = 1;
    d_5d51_d4d9 = 1;
    switch (d_3c0d_0000[17][p]) {
    case 0:
        d_5d51_d722 = f_1d5e_0d6a(3) + 1;
        d_5d51_d720 = f_1d5e_0d6a(5) + 1;
        d_5d51_d71e = f_1d5e_0d6a(20) + 1;
        d_5d51_d4dd = 0.7;
        break;
    case 1:
        d_5d51_d722 = f_1d5e_0d6a(4) + 3;
        d_5d51_d720 = f_1d5e_0d6a(8) + 3;
        d_5d51_d71e = f_1d5e_0d6a(5) + 16;
        break;
    case 2:
        d_5d51_d722 = f_1d5e_0d6a(5) + 1;
        d_5d51_d720 = f_1d5e_0d6a(8) + 5;
        d_5d51_d71e = f_1d5e_0d6a(10) + 3;
        d_5d51_d4dd = 2.0;
        d_5d51_d4d9 = 0.5;
        break;
    case 3:
        d_5d51_d722 = f_1d5e_0d6a(6) + 3;
        d_5d51_d720 = f_1d5e_0d6a(8) + 8;
        d_5d51_d71e = f_1d5e_0d6a(11) + 5;
        d_5d51_d4dd = 0.5;
        d_5d51_d4d9 = 2.0;
        break;
    case 4:
        d_5d51_d722 = f_1d5e_0d6a(6) + 3;
        d_5d51_d720 = f_1d5e_0d6a(7) + 4;
        d_5d51_d71e = f_1d5e_0d6a(12) + 1;
        d_5d51_d4d9 = 0.75;
        d_5d51_d4dd = 1.25;
        break;
    case 5:
        d_5d51_d722 = f_1d5e_0d6a(8) + 3;
        d_5d51_d720 = f_1d5e_0d6a(6) + 15;
        d_5d51_d71e = f_1d5e_0d6a(5) + 16;
        break;
    case 6:
        d_5d51_d722 = f_1d5e_0d6a(4) + 5;
        d_5d51_d720 = f_1d5e_0d6a(8) + 8;
        d_5d51_d71e = f_1d5e_0d6a(8) + 1;
        break;
    case 7:
        d_5d51_d722 = f_1d5e_0d6a(3) + 8;
        d_5d51_d720 = f_1d5e_0d6a(9) + 12;
        d_5d51_d71e = f_1d5e_0d6a(11) + 5;
        d_5d51_d4dd = 1.5;
        break;
    case 8:
        d_5d51_d722 = f_1d5e_0d6a(8) + 2;
        d_5d51_d720 = f_1d5e_0d6a(11) + 10;
        d_5d51_d71e = f_1d5e_0d6a(11) + 10;
        d_5d51_d4d9 = 1.5;
        break;
    case 9:
        d_5d51_d722 = f_1d5e_0d6a(6) + 1;
        d_5d51_d720 = f_1d5e_0d6a(7) + 6;
        d_5d51_d71e = f_1d5e_0d6a(3) + 1;
        d_5d51_d4d5 = 0.75;
        break;
    }
    if (!fromfile) {
        d_44d7_0000[6][p] = f_1d5e_136a(d_44d7_0000[6][p] * d_5d51_d4d9, 20);
        d_44d7_0000[7][p] = f_1d5e_136a(d_44d7_0000[7][p] * d_5d51_d4dd, 20);
    }
    if (d_44d7_0000[8][p] == 255)
        d_44d7_0000[8][p] = d_5d51_d722;
    if (d_44d7_0000[12][p] == 255)
        d_44d7_0000[12][p] = d_5d51_d720;
    if (d_44d7_0000[14][p] == 255)
        d_44d7_0000[14][p] = d_5d51_d71e;
    if (d_44d7_0000[22][p] == 255)
        d_44d7_0000[22][p] = a[6] && f_1d5e_0d6a(4) > 0 ? f_1d5e_0d6a(11) + 10 : f_1d5e_0d6a(20) + 1;
    d_2414_af3c[p].w.f0 = a[0] ? 1 : 0;
    d_2414_af3c[p].w.f1 = a[1] ? 1 : 0;
    d_2414_af3c[p].w.f2 = a[2] ? 1 : 0;
    d_2414_af3c[p].w.f3 = a[3] ? 1 : 0;
    d_2414_af3c[p].w.f4 = a[4] ? 1 : 0;
    d_2414_af3c[p].w.f5 = a[5] ? 1 : 0;
    d_2414_af3c[p].w.f6 = a[6] ? 1 : 0;
    return 0;
}

char f_a7f0_210a(int a, char b)
{
    if (a == 0) {
        d_5d51_d8d6 = 1;
        d_5d51_d8d4 = 2;
    } else if (a == 1) {
        d_5d51_d8d6 = 0;
        d_5d51_d8d4 = 2;
    } else {
        d_5d51_d8d6 = 0;
        d_5d51_d8d4 = 1;
    }
    switch (f_1d5e_0d6a(20) + 1) {
    case 1:
    case 2:
    case 3:
    case 4:
        d_5d51_d98e = d_5d51_d8d6;
        break;
    case 5:
    case 6:
    case 7:
    case 8:
        d_5d51_d98e = d_5d51_d8d4;
        break;
    default:
        d_5d51_d98e = a;
    }
    return d_5d51_d98e = f_1d5e_136a(d_5d51_d98e * 7 + (int)f_1d5e_0d6a(7)
                                     + (b ? (int)f_1d5e_0d6a(5) : 0) + 1, 20);
}

void f_a7f0_2207(int p, unsigned char a, char kind)
{
    FILE *fp;
    char c4 = kind == 4 ? -1 : 0;
    char c23 = kind == 2 || kind == 3 ? -1 : 0;
    char done;
    unsigned char n;
    unsigned char r;
    unsigned char week;
    unsigned char last;
    unsigned char team;
    unsigned char goals;
    unsigned char perf;
    {
    unsigned char ed;
    unsigned char ec;
    unsigned v;
    float f;
    unsigned char tbl[12] = {80, 100, 100, 110, 125, 135, 150, 170, 175, 180, 190, 190};

    if (d_44d7_0000[0][p] == 0xff) {
        ed = f_1646_6f38(p) ? (unsigned char)f_1646_60b7(p) : f_1646_2cfd(a);
        if (f_1646_6f38(p) && f_1646_6f56(p))
            ed = 10;
        do {
            done = 1;
            v = tbl[ed - 6] + f_1d5e_1308(f_1d5e_0d6a(25) - f_1d5e_0d6a(25), f_1d5e_0d6a(25) - f_1d5e_0d6a(25));
            if (f_1d5e_0d6a(10) == 0)
                v = v * 0.65;
            else if (f_1d5e_0d6a(50) == 0)
                v += 20;
            if (d_44d7_0000[17][p] < 22) {
                f = 1 - (22 - d_44d7_0000[17][p]) / 15;
                v = v * f;
            }
            if (v > 190)
                v = 190;
            d_44d7_0000[0][p] = v;
        } while (done == 0);
    }
    if (d_44d7_0000[9][p] == 0xff) {
        n = 0;
        do {
            done = 1;
            d_44d7_0000[9][p] = f_1d5e_0d6a(126) + 75;
            if (d_44d7_0000[9][p] < d_44d7_0000[0][p] ||
                abs(28 - d_44d7_0000[17][p]) < 3 && d_44d7_0000[9][p] - d_44d7_0000[0][p] > n * 2 + 20)
                done = 0;
            n++;
        } while (done == 0);
    }
    d_3c0d_0000[18][p] = d_44d7_0000[0][p] + f_1d5e_0d6a(200 - d_44d7_0000[0][p]);
    memset(d_2414_321e, 0, 0x98);
    d_3c0d_0000[20][p] = 0;
    d_5d51_d768 = 0;
    if (!c23) {
        r = f_1d5e_1308(d_44d7_0000[0][p] / 2 + f_1d5e_0d6a(20) - f_1d5e_0d6a(20), 20);
        week = c4 ? 0 : 94 - (d_44d7_0000[17][p] - 16);
        team = c4 ? 0 : f_a7f0_28e5(p, r, -1);
        do {
            if (week < 94) {
                last = week;
                if (c4) {
                    week = fgetc(d_5d51_d40d);
                    if (week < 255) {
                        team = fgetc(d_5d51_d40d);
                        goals = fgetc(d_5d51_d40d);
                        ed = goals == 255 ? 50 : goals;
                        perf = fgetc(d_5d51_d40d);
                        f_a7f0_29ba(p, week, team, r, goals, perf, 255, ed);
                    } else
                        week = 94;
                } else {
                    ed = f_1646_6f38(p) ? (unsigned char)f_1646_60b7(p) : f_1646_2cfd(team);
                    if (abs(ed - r / 10) > 3 && f_1d5e_0d6a(5) == 0 || f_1d5e_0d6a(10) == 0) {
                        ec = f_1d5e_0d6a(40) + 1;
                        f_a7f0_29ba(p, week, team, r, -1, -1, 255, ec / 40.0 * 50.0);
                        team = f_a7f0_28e5(p, r, team);
                        f_a7f0_29ba(p, week, team, r, -1, -1, 255, (40 - ec) / 40.0 * 50.0);
                    } else
                        f_a7f0_29ba(p, week, team, r, -1, -1, 255, 50);
                    week++;
                }
                if (week > last && week < 94)
                    r = (d_44d7_0000[17][p] - (94 - week) >= 30 ? r * 2 + 100 : r * 2 + d_44d7_0000[9][p]) / 3;
            }
        } while (week < 94);
    }
    if (!f_1646_6f38(p))
        d_44d7_0000[18][p] = a;
    if (!c4 && !c23)
        f_a7f0_321e(p, d_44d7_0000[18][p]);
    if (d_5d51_0094 == 0) {
        f_1d5e_1a24(2);
        fp = fopen(d_2414_0050, "rb+");
        fseek(fp, (long)p * 133, 0);
        fwrite(d_2414_321e, 1, 133, fp);
        fclose(fp);
    } else {
        fseek(d_5d51_0094, (long)p * 133, 0);
        fwrite(d_2414_321e, 1, 133, d_5d51_0094);
    }
    if (d_5d51_d768 > 0) {
        d_3c0d_0000[5][p] = d_5d51_d768;
        d_3c0d_0000[6][p] = d_5d51_d7f8;
        d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 1);
        d_5d51_da38[6][p] = d_5d51_d700;
        d_5d51_da38[7][p] = d_5d51_d708;
        d_5d51_da38[8][p] = d_5d51_d706;
        d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 1);
        d_5d51_da4c[1][p] = d_5d51_d70e;
    }
}
}

unsigned char f_a7f0_28e5(int p, unsigned char r, unsigned char x)
{
    char done;
    unsigned char v;
    unsigned char i;
    unsigned char pos;

    i = 0;
    d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 0);
    pos = d_5d51_da38[9][p];
    if (f_1646_6f38(p) == 0 && pos == 0) {
        do {
            done = 1;
            v = f_1d5e_0d6a(38);
            if (abs((int)(f_1646_2cfd(v) - r / 10)) > i / 5 + 2 || v == x)
                done = 0;
            i++;
        } while (done == 0);
    } else {
        d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 0);
        v = d_5d51_da38[9][p] - 116;
    }
    return v;
}

void f_a7f0_29ba(int p, unsigned char week, int team, unsigned char r, unsigned char apps,
                 unsigned char goals, int z, unsigned char perf)
{
    char far *s;
    unsigned char q;

    if (team < 38)
        q = f_1646_2cfd(team);
    else if (team < 140)
        q = f_1646_2cfd(team + 362);
    else
        q = 14;
    if (week == 93)
        d_5d51_d818 = f_1d5e_136a(d_44d7_0000[0][p] + f_1d5e_0d6a(15) - f_1d5e_0d6a(15), d_44d7_0000[9][p]);
    else
        d_5d51_d818 = f_1d5e_1308(f_1d5e_136a(r + f_1d5e_0d6a(25) - f_1d5e_0d6a(25), d_44d7_0000[9][p]), 10);
    if (apps == 255) {
        float f;
        unsigned char a;
        unsigned char b;
        unsigned char c;

        f = (d_5d51_d818 / 10.0 - q) * 16.0 + 70.0;
        if (f > 40.0)
            f = 40.0;
        else if (f < 0)
            f = 0;
        f = f / 40.0;
        d_5d51_d768 = perf * f;
        a = f_1d5e_0d6a(d_5d51_d768);
        b = f_1d5e_0d6a(d_5d51_d768);
        c = f_1d5e_0d6a(d_5d51_d768);
        if (a > b && a > c)
            d_5d51_d768 = a;
        else if (b > a && b > c)
            d_5d51_d768 = b;
        else
            d_5d51_d768 = c;
    } else
        d_5d51_d768 = apps;
    d_5d51_d7f8 = 0;
    d_5d51_d700 = 0;
    d_5d51_d70e = 0;
    if (d_5d51_d768 > 0) {
        d_5d51_d4d1 = f_1d5e_12e0(f_1d5e_1342(d_5d51_d818 / 40.0 + 3.0, 8.0), 3.0);
        d_5d51_d70e = f_1d5e_1342(f_1d5e_12e0((f_1d5e_1089() - f_1d5e_1089()) *
                                              (2.0 - d_5d51_d768 * 0.03) + d_5d51_d4d1, 1.0),
                                  10.0) * d_5d51_d768 + 0.5;
        d_5d51_d4cd = (float)d_5d51_d70e / d_5d51_d768;
        d_5d51_d708 = d_5d51_d4cd;
        d_5d51_d706 = d_5d51_d708 + (d_5d51_d708 < d_5d51_d4cd);
        if (d_5d51_d768 > 2) {
            d_5d51_d708 = f_1d5e_1308(d_5d51_d708 - f_1d5e_0d6a(2), 1);
            d_5d51_d706 = f_1d5e_136a(d_5d51_d706 + f_1d5e_0d6a(2), 10);
        }
        d_5d51_d700 = (float)d_5d51_d768 / perf * 50.0 *
                      (f_1d5e_1308(f_1d5e_0d6a(d_44d7_0000[11][p]), f_1d5e_0d6a(d_44d7_0000[11][p])) + 1) / 20.0;
        d_5d51_d700 = d_5d51_d700 / 5 * 5;
        if (d_2414_af3c[p].w.f0 == 0 && goals == 255) {
            if (d_2414_af3c[p].w.f3)
                d_5d51_d6fe = f_1d5e_136a((d_2414_af3c[p].w.f2 ? f_1d5e_0d6a(2) : 0) +
                                          (d_2414_af3c[p].w.f1 ? f_1d5e_0d6a(2) : 0) * 2 + 1, 3);
            else if (d_2414_af3c[p].w.f2)
                d_5d51_d6fe = (d_2414_af3c[p].w.f1 ? f_1d5e_0d6a(2) : 0) + 2;
            else if (d_2414_af3c[p].w.f1)
                d_5d51_d6fe = 3;
            d_5d51_d4c9 = (d_44d7_0000[7][p] * 0.03 + 0.07) / d_5d51_d6fe - f_1d5e_1089() / 5.0 +
                          f_1d5e_1089() / 5.0;
            d_5d51_d7f8 = f_1d5e_1308(0, f_1d5e_0d6a(3) - f_1d5e_0d6a(3) + d_5d51_d768 * d_5d51_d4c9 + 0.5);
            if (d_5d51_d7f8 < 0 || d_5d51_d7f8 > 50)
                d_5d51_d7f8 = d_5d51_d7f8;
        } else if (goals != 255)
            d_5d51_d7f8 = goals;
        else
            d_5d51_d7f8 = 0;
    }
    d_5d51_d704 = d_3c0d_0000[20][p];
    if (d_5d51_d704 > 21)
        d_5d51_d6fc = d_5d51_d704 - 22;
    else
        d_5d51_d6fc = d_5d51_d704;
    s = d_2414_321f[d_5d51_d6fc];
    *s++ = week;
    if (team < 140) {
        for (d_5d51_d9cc = 0; d_5d51_d9cc <= 139; d_5d51_d9cc++) {
            if (d_2414_f168[d_5d51_d9cc] == team) {
                *s++ = d_5d51_d9cc;
                d_5d51_d9cc = 139;
            }
        }
    } else
        *s++ = team;
    *s++ = d_5d51_d768;
    *s++ = d_5d51_d7f8;
    *s++ = d_5d51_d70e >> 8;
    *s = d_5d51_d70e & 0xff;
    d_3c0d_0000[20][p] = d_5d51_d704 + 1;
}

void f_a7f0_3054(int player)
{
    char far *s;
    unsigned char t;
    int n;

    fseek(d_5d51_0098, (long)player * 133, 0);
    fread(d_2414_321e, 1, 133, d_5d51_0098);
    d_5d51_d704 = d_3c0d_0000[20][player];
    if (d_5d51_d704 > 0 || d_3c0d_0000[12][player] > 0) {
        t = 255;
        if (d_44d7_0000[18][player] < 140) {
            for (d_5d51_d9cc = 0; d_5d51_d9cc <= 139; d_5d51_d9cc++) {
                if (d_2414_f168[d_5d51_d9cc] == d_44d7_0000[18][player]) {
                    t = d_5d51_d9cc;
                    d_5d51_d9cc = 139;
                }
            }
        } else
            t = d_44d7_0000[18][player];
        if (t < 255) {
            if (d_5d51_d704 > 21)
                d_5d51_d6fc = d_5d51_d704 - 22;
            else
                d_5d51_d6fc = d_5d51_d704;
            s = d_2414_321f[d_5d51_d6fc];
            *s++ = d_5d51_da04 + 93;
            *s++ = t;
            *s++ = d_3c0d_0000[12][player];
            *s++ = d_3c0d_0000[13][player];
            d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 0);
            n = d_5d51_da4c[2][player];
            *s++ = n >> 8;
            *s = n;
            d_3c0d_0000[20][player] = d_5d51_d704 + 1;
            fseek(d_5d51_0098, (long)player * 133, 0);
            fwrite(d_2414_321e, 1, 133, d_5d51_0098);
        }
    }
}

void f_a7f0_321e(int p, unsigned char team)
{
    unsigned char cur;
    unsigned char old;
    unsigned char i;
    unsigned char k;
    unsigned char n;

    d_3c0d_0000[10][p] = 255;
    if (d_3c0d_0000[20][p] > 0) {
        n = d_3c0d_0000[20][p];
        old = d_2414_321f[n > 22 ? n - 23 : n - 1][1];
        do {
            cur = d_2414_321f[n > 22 ? n - 23 : n - 1][1];
            if (cur == old) {
                for (i = 0; i <= 139; i = i + 1)
                    if (d_2414_f168[i] == team)
                        k = i;
                d_2414_321f[n > 22 ? n - 23 : n - 1][1] = k;
            } else if (cur != team) {
                d_3c0d_0000[10][p] = cur;
                n = 1;
            }
            n--;
        } while (n > 0);
    }
}

/* a new youth player in a team's slot */
void f_a7f0_331b(unsigned char team, unsigned char i)
{
    unsigned char r;

    d_5d51_da34 = f_1d5e_1618(d_5d51_dd90, 1);
    d_5d51_da34[team][0][i] = f_b0f1_43eb(0);
    d_5d51_da34[team][1][i] = f_b0f1_445d(0);
    if (i <= 1)
        d_2414_c6ac[team][0][i] = 1;
    else {
        r = f_1d5e_0d6a(14) + 1;
        if (r <= 5)
            d_2414_c6ac[team][0][i] = 2;
        else if (r >= 6 && r <= 10)
            d_2414_c6ac[team][0][i] = 3;
        else if (r >= 11)
            d_2414_c6ac[team][0][i] = 4;
    }
    d_2414_c6ac[team][1][i] = f_1d5e_0d6a(4) + 16;
    d_2414_c6ac[team][2][i] = f_1d5e_0d6a(50) + 90;
    d_2414_c6dc[team][i] = 0;
    d_2414_c6ec[team][i] = 0;
}

/* the youth players get a year older */
void f_a7f0_34c8(void)
{
    unsigned char team, i;

    for (team = 0; team <= 37; team = team + 1)
        for (i = 0; i <= 15; i = i + 1) {
            d_2414_c6ac[team][1][i]++;
            if (d_2414_c6ac[team][1][i] > 23)
                f_a7f0_331b(team, i);
        }
}

/* info on a youth player */
void f_a7f0_3545(unsigned char team, unsigned char i)
{
    char buf[80], line[80];

    f_1d5e_1a29();
    f_1d5e_08cc(16);
    f_1d5e_08e2(0x3d, 0x51, 0x10b, 0x7b);
    f_1d5e_08cc(19);
    f_1d5e_08e2(0x39, 0x4d, 0x107, 0x77);
    d_5d51_da34 = f_1d5e_1618(d_5d51_dd90, 0);
    sprintf(buf, "Info on %s %s", d_56d9_0000[d_5d51_da34[team][0][i]],
            d_56d9_13b9[d_5d51_da34[team][1][i]]);
    sprintf(line, "%*s", 17 - strlen(buf) / 2 + strlen(buf), buf);
    f_1646_3686(7.5, 10.625, 0, 1, 0xca, line);
    f_1646_3686(7.5, 11.625, 6, 15, 100, " Age");
    sprintf(buf, " %d Yrs", d_2414_c6ac[team][1][i]);
    f_1646_3686(20.25, 11.625, 6, 15, 100, buf);
    f_1646_3686(7.5, 12.625, 6, 15, 100, " Position");
    if (d_2414_c6ac[team][0][i] == 1)
        strcpy(buf, " Goalkeeper");
    else if (d_2414_c6ac[team][0][i] == 2)
        strcpy(buf, " Defence");
    else if (d_2414_c6ac[team][0][i] == 3)
        strcpy(buf, " Midfield");
    else if (d_2414_c6ac[team][0][i] == 4)
        strcpy(buf, " Attack");
    f_1646_3686(20.25, 12.625, 6, 15, 100, buf);
    f_1646_3686(7.5, 13.625, 6, 15, 100, " Rating");
    if (d_2414_c6ac[team][2][i] >= 80)
        strcpy(buf, " Good");
    else if (d_2414_c6ac[team][2][i] >= 60)
        strcpy(buf, " Promising");
    else
        strcpy(buf, " Fair");
    f_1646_3686(20.25, 13.625, 6, 15, 100, buf);
    f_1646_3686(7.5, 14.625, 6, 15, 100, " Status");
    if (d_2414_c6dc[team][i] == 0)
        strcpy(buf, " Available");
    else
        sprintf(buf, " Out %d week%s", d_2414_c6dc[team][i],
                d_2414_c6dc[team][i] > 1 ? "s" : "");
    f_1646_3686(20.25, 14.625, 6, 15, 100, buf);
    f_1d5e_03a3(0);
    while (f_1d5e_0c17() == 0)
        ;
    f_1d5e_03a3(1);
    f_1d5e_1a2e();
}

/* the best youth player of a team (keepers only if gk == 1) */
unsigned char f_a7f0_3a19(unsigned char team, unsigned char gk)
{
    unsigned char i, best, bestv;

    best = 0;
    bestv = 0;
    for (i = 0; i <= 15; i = i + 1) {
        if (gk == 1 && d_2414_c6ac[team][0][i] > 1)
            continue;
        if (d_2414_c6ac[team][2][i] + f_1d5e_0d6a(10) - f_1d5e_0d6a(10) > bestv) {
            bestv = d_2414_c6ac[team][2][i];
            best = i;
        }
    }
    return best;
}

/* fine a club for fielding reserve players */
void f_a7f0_3af0(unsigned char team)
{
    unsigned char n1, n2, i;
    long fine;
    char buf[320];

    if (d_2414_5460[0][team] != 0 && d_5d51_da06 > 12) {
        n1 = 0;
        n2 = 0;
        for (i = 0; i <= 10; i = i + 1)
            if (f_1646_5dff(d_3404_0e34[team][i]))
                n1++;
        for (i = 0; d_3404_4552[team] - 1 >= i; i = i + 1)
            if (d_44d7_0000[20][d_44d7_9624[team][i]] == 0)
                n2++;
        if (n1 >= f_1d5e_1308(15 - n2, 0) && n1 >= 5) {
            switch (f_1646_717d(team)) {
            case 0:
                fine = f_1d5e_0d6a(6) * 2500 + 20000;
                break;
            case 1:
                fine = f_1d5e_0d6a(6) * 1000 + 10000;
                break;
            }
            sprintf(buf, "%s have been fined %ld for unnecessarily fielding reserve players.",
                    (char far *)d_5d51_b476[team], fine);
            f_1646_5bcb(team, "Disciplinary action", buf);
            d_5d51_da44 = f_1d5e_1618(d_5d51_dd98, 1);
            d_5d51_da44[12][team] = d_5d51_da44[12][team] + fine;
            f_8119_1634(team, -(f_1d5e_0d6a(5) + 5));
        }
    }
}

/* print the week's news */
void f_a7f0_3cfa(void)
{
    unsigned char cnt;
    int last;
    int start;
    int len;
    char buf[80];
    unsigned i, j;
    int t, d;

    if (d_2412_001d > 0 && d_5d51_d5e7 != 0) {
        f_a7f0_4061();
        f_a7f0_406b("______________________________________________________________________________\n");
        f_a7f0_4092(2);
        sprintf(buf, "                                Week %d/Season %d",
                f_1646_6aa9(d_5d51_da06), d_5d51_da04);
        f_a7f0_406b(buf);
        f_a7f0_4092(2);
        for (i = 0; i <= d_2412_001d - 2; i = i + 1)
            for (j = i + 1; j <= d_2412_001d - 1; j++) {
                d = d_2414_a5dc[i].b - d_2414_a5dc[j].b;
                if (d >= 8 || (abs(d) < 8 && d_2414_a5dc[i].a > d_2414_a5dc[j].a)) {
                    t = d_2414_a5dc[i].a;
                    d_2414_a5dc[i].a = d_2414_a5dc[j].a;
                    d_2414_a5dc[j].a = t;
                    t = d_2414_a5dc[i].b;
                    d_2414_a5dc[i].b = d_2414_a5dc[j].b;
                    d_2414_a5dc[j].b = t;
                    t = d_2414_a5dc[i].start;
                    d_2414_a5dc[i].start = d_2414_a5dc[j].start;
                    d_2414_a5dc[j].start = t;
                    t = d_2414_a5dc[i].len;
                    d_2414_a5dc[i].len = d_2414_a5dc[j].len;
                    d_2414_a5dc[j].len = t;
                }
            }
        i = 0;
        last = -1;
        while (i <= d_2412_001d - 1) {
            if (d_2414_a5dc[i].b - last >= 8 || last == -1) {
                f_a7f0_4092(1);
                f_a7f0_406b("   ");
                cnt = 0;
                last = d_2414_a5dc[i].b;
            }
            if (cnt == d_2414_a5dc[i].a / 4) {
                start = d_2414_a5dc[i].start;
                len = d_2414_a5dc[i].len;
                d_5d51_da30 = f_1d5e_1618(d_5d51_dd8e, 0);
                for (t = 0; t <= len - 1; t++)
                    buf[t] = d_5d51_da30[start + t];
                buf[len] = 0;
                f_a7f0_406b(buf);
                cnt += strlen(buf);
                i++;
            } else {
                f_a7f0_406b(" ");
                cnt++;
            }
        }
        f_a7f0_4092(3);
        f_a7f0_406b("______________________________________________________________________________\n");
        f_a7f0_4092(2);
        f_a7f0_4066();
    }
}

void f_a7f0_4061(void)
{
}

void f_a7f0_4066(void)
{
}

/* print a string */
void f_a7f0_406b(char far *s)
{
    while (*s != 0)
        _bios_printer(0, 0, *s++);
}

/* print n new lines */
void f_a7f0_4092(unsigned char n)
{
    unsigned char i;

    for (i = 1; i <= n; i = i + 1)
        f_a7f0_406b("\r\n");
}

void f_a7f0_40bd(unsigned team)
{
    unsigned char i, k;
    int p;

    if (f_1646_2674(d_5d51_da06) && team < 38) {
        k = f_1646_2674(d_5d51_da06) ? 0 : 1;
        for (i = 0; i <= d_3404_4552[team] - 1; i = i + 1) {
            p = d_44d7_9624[team][i];
            d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 0);
            if ((d_5d51_da38[k][p] != 255 && d_5d51_da38[k][p] != d_44d7_6978[p])
                || d_3c0d_2904[p] < 255)
                f_9915_138e(p, 50, 1);
        }
    }
}

void f_a7f0_41ac(unsigned team)
{
    unsigned char i;
    int p;

    if (f_1646_2674(d_5d51_da06) && team < 38)
        for (i = 0; i <= d_3404_4552[team] - 1; i = i + 1) {
            p = d_44d7_9624[team][i];
            if (d_44d7_0000[19][p] == 50)
                f_9915_168a(p);
        }
}

void f_a7f0_4226(void)
{
    unsigned i;

    for (i = 0; i <= d_5d51_da1a - 1; i = i + 1) {
        d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 1);
        d_5d51_da38[0][i] = 255;
        d_5d51_da38[1][i] = 255;
    }
}

void f_a7f0_425e(void)
{
    unsigned char i;

    if (d_5d51_d958 > 0)
        for (i = 0; i <= d_5d51_d958 - 1; i = i + 1)
            if (d_3404_1d44[i] < 255) {
                f_a7f0_42c5(i, 0, 0, 0, 0L, 0);
                f_a7f0_4ab0(i);
            }
}

void f_a7f0_42c5(unsigned char team, char mode, int player, unsigned char club, long fee, unsigned char x)
{
    unsigned char t;
    char buf[40];
    unsigned char c;

    if (mode == 0) {
        t = d_3404_1d44[team];
        strcpy(buf, d_5d51_b476[t]);
        buf[14] = 0;
        d_2414_8a20[team].season = d_5d51_da04 + 93;
        strcpy(d_2414_8a20[team].name, buf);
        for (d_2414_8a20[team].pos = 0; d_3404_0728[d_2414_8a20[team].pos] != t; d_2414_8a20[team].pos++)
            ;
        d_2414_8a20[team].played = t < 18 ? d_5d51_da0e : d_5d51_da0c;
        d_2414_8a20[team].won = d_3404_461a[t];
        d_2414_8a20[team].lost = d_3404_4642[t];
        d_2414_8a20[team].drawn = d_2414_8a20[team].played - d_2414_8a20[team].won - d_2414_8a20[team].lost;
        d_2414_8a20[team].gf = d_3404_466a[t];
        d_2414_8a20[team].ga = d_3404_4692[t];
        d_2414_8a20[team].pts = f_9e79_0000(d_2414_8a20[team].pos);
        d_2414_8a20[team].conf = d_3404_452a[t];
        strcpy(d_2414_8a20[team].manager, f_9182_14f6(team + 646, 0));
        d_2414_8a20[team].x25 = d_3404_4dc2[t];
        d_2414_8a20[team].x26 = d_3404_4012[t];
        d_2414_8a20[team].x2a = d_2414_e918[t];
        c = 0;
        if (d_2414_ea30[t] > 0)
            c = 8;
        else if (d_2414_eabc[t] > 0)
            c = 9;
        else if (d_2414_eb48[t] > 0)
            c = 10;
        else if (d_2414_ebd4[t] > 0)
            c = 11;
        if (c > 0) {
            d_2414_8a20[team].cup = c - 5;
            d_2414_8a20[team].cupround = d_2414_e5d0[c][t];
        } else
            d_2414_8a20[team].cup = 0;
    } else {
        if (club < 38)
            strcpy(buf, d_5d51_b476[club]);
        else
            sprintf(buf, "<%s>", d_4f37_0000[club - 140]);
        buf[14] = 0;
        if (mode == 1 && d_2414_8a20[team].n[0] < 13) {
            d_2414_8a20[team].t[0].a[d_2414_8a20[team].n[0]] = d_3404_5d64[player];
            d_2414_8a20[team].t[0].b[d_2414_8a20[team].n[0]] = d_3404_74d4[player];
            strcpy(d_2414_8a20[team].t[0].club[d_2414_8a20[team].n[0]], buf);
            d_2414_8a20[team].t[0].fee[d_2414_8a20[team].n[0]] = fee;
            d_2414_8a20[team].t[0].c[d_2414_8a20[team].n[0]] = x;
            d_2414_8a20[team].n[0]++;
        } else if (mode == 2 && d_2414_8a20[team].n[1] < 13) {
            d_2414_8a20[team].t[1].a[d_2414_8a20[team].n[1]] = d_3404_5d64[player];
            d_2414_8a20[team].t[1].b[d_2414_8a20[team].n[1]] = d_3404_74d4[player];
            strcpy(d_2414_8a20[team].t[1].club[d_2414_8a20[team].n[1]], buf);
            d_2414_8a20[team].t[1].fee[d_2414_8a20[team].n[1]] = fee;
            d_2414_8a20[team].t[1].c[d_2414_8a20[team].n[1]] = x;
            d_2414_8a20[team].n[1]++;
        }
    }
}

void f_a7f0_4a13(unsigned char team, unsigned char idx)
{
    FILE *fp;
    char buf[40];

    f_1d5e_1a24(2);
    sprintf(buf, "mhstP%d%s", team, d_2414_0000);
    fp = fopen(buf, "rb+");
    fseek(fp, (long)idx * 0x2fe, 0);
    fread(&d_2414_8722, 1, 0x2fe, fp);
    fclose(fp);
}

void f_a7f0_4ab0(unsigned char team)
{
    FILE *fp;
    unsigned char idx;
    char buf[40];

    idx = d_2414_5890[team] % 25;
    f_1d5e_1a24(2);
    sprintf(buf, "mhstP%d%s", team, d_2414_0000);
    if (f_1d5e_0d9c(buf) == 0)
        fp = fopen(buf, "wb");
    else {
        fp = fopen(buf, "rb+");
        fseek(fp, (long)idx * 0x2fe, 0);
    }
    fwrite(&d_2414_8a20[team], 1, 0x2fe, fp);
    fclose(fp);
    d_2414_5890[team]++;
}

void f_a7f0_4bae(void)
{
    unsigned char t;
    unsigned char key;
    unsigned char idx;
    unsigned char page;
    char buf[320];

    f_9e79_1503(-1);
    if (d_5d51_d628 > -1) {
        t = d_5d51_d628 + 122;
        if (d_2414_5890[t] > 0) {
            idx = (d_2414_5890[t] - 1) % 25;
            page = 0;
            f_a7f0_4a13(t, idx);
            do {
                f_1646_6097();
                f_1646_4ba0(f_1646_4919(t + 646, 0));
                sprintf(buf, " Season %d/%s ", d_2414_8722.season - 93, d_2414_8722.name);
                f_1646_3e54(1.25, 3.5, 0, 1, 0, buf);
                if (page == 0) {
                    f_a7f0_4f67();
                    f_a7f0_54f2();
                    f_a7f0_57df();
                    f_1646_60a7();
                    f_1646_50c5(2, 29.0, 3.5, 1, 12, 37, "Bght");
                    f_1646_50c5(2, 34.25, 3.5, 1, 12, 37, "Sold");
                } else if (page == 1) {
                    f_a7f0_5b4d();
                    f_1646_60a7();
                    f_1646_50c5(2, 29.0, 3.5, 0, 6, 37, "Misc");
                    f_1646_50c5(2, 34.25, 3.5, 0, 6, 37, "Sold");
                } else if (page == 2) {
                    f_a7f0_5da7();
                    f_1646_60a7();
                    f_1646_50c5(2, 29.0, 3.5, 0, 6, 37, "Misc");
                    f_1646_50c5(2, 34.25, 3.5, 0, 6, 37, "Bght");
                }
                f_1646_50c5(2, 1.25, 22.5, 6, 2, 53, " - Rec");
                f_1646_50c5(2, 32.25, 22.5, 6, 2, 53, " Rec +");
                f_1646_50c5(2, 8.5, 22.5, 1, 4, 185, "          Done");
                if (idx == 0)
                    f_1646_5869(3);
                if (d_2414_5890[t] - 1 == idx)
                    f_1646_5869(4);
                do
                    key = f_1646_5602(d_5d51_d9c6);
                while (key <= 0);
                if (page == 0 && key == 1 || page == 2 && key == 2)
                    page = 1;
                else if (page == 0 && key == 2 || page == 1 && key == 2)
                    page = 2;
                else if (page == 1 && key == 1 || page == 2 && key == 1)
                    page = 0;
                else if (key == 3)
                    f_a7f0_4a13(t, idx = idx == 0 ? 24 : idx - 1);
                else if (key == 4)
                    f_a7f0_4a13(t, idx = idx == 24 ? 0 : idx + 1);
            } while (key != 5);
        } else
            f_1646_0bf2("No records to show");
    }
}

void f_a7f0_4f67(void)
{
    char buf[320];

    f_1d5e_08cc(16);
    f_1d5e_08e2(12, 47, 316, 73);
    f_1d5e_08cc(20);
    f_1d5e_08e2(8, 43, 312, 69);
    f_1646_3686(1.375, 6.375, 0, 1, 300, " League Record");
    f_1646_3686(1.375, 7.375, 0, 5, 31, " SER");
    sprintf(buf, " %s", f_1646_4b1e(f_1646_717d(d_2414_8722.pos) + 1, 3));
    f_1646_3686(1.375, 8.375, 1, 8, 31, buf);
    f_1646_3686(5.5, 7.375, 0, 5, 31, " POS");
    sprintf(buf, " %s", f_1646_4a8f(d_2414_8722.pos < 18 ? d_2414_8722.pos + 1 : d_2414_8722.pos - 17));
    f_1646_3686(5.5, 8.375, 1, 8, 31, buf);
    f_1646_3686(9.625, 7.375, 0, 5, 31, " PLD");
    sprintf(buf, "  %d", d_2414_8722.played);
    f_1646_3686(9.625, 8.375, 1, 8, 31, buf);
    f_1646_3686(13.75, 7.375, 0, 5, 32, " WON");
    sprintf(buf, "  %d", d_2414_8722.won);
    f_1646_3686(13.75, 8.375, 1, 8, 32, buf);
    f_1646_3686(18.0, 7.375, 0, 5, 32, " DRN");
    sprintf(buf, "  %d", d_2414_8722.drawn);
    f_1646_3686(18.0, 8.375, 1, 8, 32, buf);
    f_1646_3686(22.25, 7.375, 0, 5, 32, " LST");
    sprintf(buf, "  %d", d_2414_8722.lost);
    f_1646_3686(22.25, 8.375, 1, 8, 32, buf);
    f_1646_3686(26.5, 7.375, 0, 5, 32, " FOR");
    sprintf(buf, "  %d", d_2414_8722.gf);
    f_1646_3686(26.5, 8.375, 1, 8, 32, buf);
    f_1646_3686(30.75, 7.375, 0, 5, 32, " AGG");
    sprintf(buf, "  %d", d_2414_8722.ga);
    f_1646_3686(30.75, 8.375, 1, 8, 32, buf);
    f_1646_3686(35.0, 7.375, 0, 5, 31, " PTS");
    sprintf(buf, "  %d", d_2414_8722.pts);
    f_1646_3686(35.0, 8.375, 1, 8, 31, buf);
}

/* the season's cup record: the Italian Cup, then the other cup (Italia has two rows where CM93 had three) */
void f_a7f0_54f2(void)
{
    char buf[320];
    char buf2[320];

    f_1d5e_08cc(16);
    f_1d5e_08e2(12, 0x51, 0x13c, 0x73);
    f_1d5e_08cc(20);
    f_1d5e_08e2(8, 0x4d, 0x138, 0x6f);
    f_1646_3686(1.375, 10.625, 0, 1, 300, " Cup Record");
    f_1646_3686(1.375, 11.625, 1, 12, 0x95, " Italian Cup");
    strcpy(buf, "");
    if (d_2414_874c > 0) {
        strcpy(buf, f_9182_6d1c(d_2414_874c));
        sprintf(buf, " %s", d_2414_2f1c);
    } else
        strcpy(buf, " Draw Not Made");
    f_1646_3686(20.25, 11.625, 1, 12, 0x95, buf);
    strcpy(buf, "");
    strcpy(buf2, "");
    if (d_2414_874e > 0) {
        strcpy(buf, f_9182_6df8(d_2414_874f, d_2414_874e));
        sprintf(buf, " %s", d_2414_2ecc);
        if (d_2414_874f > 0)
            sprintf(buf2, " %s", d_2414_2f1c);
        else
            strcpy(buf2, " Draw Not Made");
    }
    f_1646_3686(1.375, 12.625, 1, 12, 0x95, buf);
    f_1646_3686(20.25, 12.625, 1, 12, 0x95, buf2);
    f_1646_3686(1.375, 13.625, 1, 12, 0x95, "");
    f_1646_3686(20.25, 13.625, 1, 12, 0x95, "");
}

void f_a7f0_57df(void)
{
    unsigned long avg;
    char buf[320];

    f_1d5e_08cc(16);
    f_1d5e_08e2(12, 0x7a, 0x13c, 0xac);
    f_1d5e_08cc(31);
    f_1d5e_08e2(8, 0x76, 0x138, 0xa8);
    f_1646_3686(1.375, 15.75, 0, 6, 300, " General Stats");
    f_1646_3686(1.375, 16.75, 1, 3, 0x95, " Players Bought");
    sprintf(buf, " %d", d_2414_8745);
    f_1646_3686(20.25, 16.75, 1, 3, 0x95, buf);
    f_1646_3686(1.375, 17.75, 1, 3, 0x95, " Players Sold");
    sprintf(buf, " %d", d_2414_8746);
    f_1646_3686(20.25, 17.75, 1, 3, 0x95, buf);
    f_1646_3686(1.375, 18.75, 1, 3, 0x95, " Average Gate");
    strcpy(buf, "");
    if (d_2414_8747 > 0) {
        avg = d_2414_8748 / d_2414_8747;
        sprintf(buf, " %ld", avg);
    }
    f_1646_3686(20.25, 18.75, 1, 3, 0x95, buf);
    f_1646_3686(1.375, 19.75, 1, 3, 0x95, " Board Confidence");
    sprintf(buf, " %d%", d_2414_873a);
    f_1646_3686(20.25, 19.75, 1, 3, 0x95, buf);
    f_1646_3686(1.375, 20.75, 1, 3, 0x95, " Manager Rating");
    sprintf(buf, " %s", d_2414_873b);
    f_1646_3686(20.25, 20.75, 1, 3, 0x95, buf);
}

void f_a7f0_5b4d(void)
{
    unsigned char y;
    unsigned char i;
    char name[50];
    char info[50];

    y = 0x3f;
    f_1646_3686(1.125, 6.375, 1, 8, 0x130, "Players Bought/Loaned in");
    if (d_2414_8745 > 0) {
        for (i = 0; i <= d_2414_8745 - 1; ++i) {
            sprintf(name, "%s %s", d_56d9_0000[d_2414_8750[i]], d_56d9_13b9[d_2414_876e[i]]);
            if (d_2414_886d[i] == 0)
                sprintf(info, "%s Free Transfer", d_2414_878c[i]);
            else if (d_2414_886d[i] == 1)
                sprintf(info, "%s On Loan", d_2414_878c[i]);
            else
                sprintf(info, "%s %ld%s", d_2414_878c[i], d_2414_886d[i], d_2414_88a9[i] ? "T" : "");
            if (i % 2 == 0) {
                f_1646_357e(0x11, y, 6, name);
                f_1646_357e(0x11, y + 8, 2, info);
            } else {
                f_1646_357e(0xa9, y, 6, name);
                f_1646_357e(0xa9, y + 8, 2, info);
                y += 20;
            }
        }
    } else
        f_1646_357e(0x11, y, 5, "No players");
}

void f_a7f0_5da7(void)
{
    unsigned char y;
    unsigned char i;
    char name[50];
    char info[50];

    y = 0x3f;
    f_1646_3686(1.125, 6.375, 1, 8, 0x130, "Players Sold/Loaned out");
    if (d_2414_8746 > 0) {
        for (i = 0; i <= d_2414_8746 - 1; ++i) {
            sprintf(name, "%s %s", d_56d9_0000[d_2414_88b8[i]], d_56d9_13b9[d_2414_88d6[i]]);
            if (d_2414_89d5[i] == 0)
                sprintf(info, "%s Free Transfer", d_2414_88f4[i]);
            else if (d_2414_89d5[i] == 1)
                sprintf(info, "%s On Loan", d_2414_88f4[i]);
            else
                sprintf(info, "%s %ld%s", d_2414_88f4[i], d_2414_89d5[i], d_2414_8a11[i] ? "T" : "");
            if (i % 2 == 0) {
                f_1646_357e(0x11, y, 6, name);
                f_1646_357e(0x11, y + 8, 2, info);
            } else {
                f_1646_357e(0xa9, y, 6, name);
                f_1646_357e(0xa9, y + 8, 2, info);
                y += 20;
            }
        }
    } else
        f_1646_357e(0x11, y, 5, "No players");
}

void f_a7f0_6001(void)
{
    unsigned char club;
    unsigned char a;
    unsigned char n;
    int p;

    if (f_1d5e_0d6a(20))
        return;
    club = f_1d5e_0d6a(38);
    a = f_1d5e_0d6a(3) + 4;
    n = f_1d5e_0d6a(5) + 2;
    strcpy(d_2414_2e2c, "");
    for (; n > 0; n--) {
        do
            p = d_44d7_9624[club][f_1d5e_0d6a(d_3404_4552[club])];
        while (d_44d7_0000[20][p] > 0);
        f_9915_138e(p, a, f_1d5e_136a(f_1d5e_0d6a(2) + 1, f_1d5e_0d6a(2) + 1));
    }
}

void f_a7f0_60fc(void)
{
    unsigned char i;
    long limit;
    long amount;
    char title[320];
    char text[320];
    unsigned char c;

    for (i = 0; i <= 37; ++i) {
        if (d_3404_452a[i] < 95)
            d_3404_4e62[i] = 0;
        if (d_3404_4e62[i] < 15)
            c = 50;
        else if (d_3404_4e62[i] >= 15 && d_3404_4e62[i] < 30)
            c = 35;
        else
            c = 20;
        if (d_3404_452a[i] >= 95 && !f_1d5e_0d6a(c) && (f_1646_6971(0) == 0 || f_1646_6971(1) == 0)) {
            switch (f_1646_717d(i)) {
            case 0:
                limit = 1500000L;
                amount = (f_1d5e_0d6a(4) + 2) * 100000L;
                break;
            case 1:
                limit = 500000L;
                amount = (f_1d5e_0d6a(4) + 2) * 50000L;
                break;
            }
            if (d_3404_3e4a[0][i] < limit && d_3404_4552[i] < 24) {
                f_8119_1230(i, amount, 0L);
                if (f_1646_2cc9(i)) {
                    sprintf(title, "%s board message", (char far *)d_5d51_b476[i]);
                    sprintf(text, "The board have made %ld available for the signing of new players. Keep up the good work!", amount);
                    f_1646_5bcb(d_5d51_d9ca, title, text);
                }
            }
        }
        if (d_3404_452a[i] >= 95 && d_3404_4e62[i] < 100)
            d_3404_4e62[i]++;
    }
}

char f_a7f0_6332(unsigned char club, char far *title)
{
    unsigned char i;
    char buf[320];

    f_1646_4ba0(title);
    f_1646_3e54(1.0, 4.0, 0, 2, 0, " Select Scout ");
    strcpy(buf, "*Exit|");
    for (i = 0; i <= 3; ++i) {
        if (i == 3)
            strcat(buf, "$");
        strcat(buf, f_1646_4919(d_3404_42be[i][club], -1));
        strcat(buf, "|");
    }
    f_1646_2fa4(7, "", buf);
    f_1646_3348(4);
    if (d_5d51_da0a > 0)
        i = d_5d51_da0a - 1;
    else
        i = 0xff;
    return i;
}

/* sends one of the team's scouts to watch a player */
void f_a7f0_6442(unsigned char team, int player)
{
    unsigned char s, m, ok;
    char buf[320];
    register unsigned char i;

    m = d_3404_4226[0][team] - 646;
    s = f_a7f0_6332(team, "Watch Player");
    if (s < 255) {
        ok = 1;
        if (d_2414_a46c[m][s].player > 0) {
            if (d_2414_a46c[m][s].player - 1 != player) {
                f_1646_4ba0("Watch Player");
                f_1646_3e54(1.25, 4.0, -(d_3404_448a[team] / 16), d_3404_448a[team] % 16, 0,
                            d_5d51_b476[team]);
                sprintf(buf, "%s is currently assigned", f_1646_4919(d_3404_42be[s][team], -1));
                f_1646_0b2f(7, buf);
                sprintf(buf, "to watch %s", f_1646_470f(d_2414_a46c[m][s].player - 1));
                f_1646_0b2f(9, buf);
                f_1646_2fa4(12, "", "*Exit|Continue|");
                f_1646_3348(1);
                if (d_5d51_da0a == 0)
                    ok = 0;
            } else {
                sprintf(buf, "%s already|watched by %s", f_1646_48c0(player),
                        f_1646_4919(d_3404_42be[s][team], 0));
                f_1646_0bf2(buf);
                ok = 0;
            }
        }
        if (ok == 1) {
            sprintf(buf, "Ok - %s now|watched by %s", f_1646_48c0(player),
                    f_1646_4919(d_3404_42be[s][team], 0));
            f_1646_0bf2(buf);
            d_2414_a46c[m][s].used = 0;
            d_2414_a46c[m][s].player = player + 1;
            for (i = 0; i <= 5; i++)
                d_2414_a46c[m][s].rating[i] = 0;
        }
    }
}

/* the scouts screen of human manager m */
void f_a7f0_675a(unsigned char m)
{
    unsigned char team, c, i, sel;
    char buf[320];
    register unsigned p;

    team = d_3404_1d44[m];
    sel = 0;
    do {
        f_1646_4ba0("Scouts");
        sprintf(buf, " %s ", (char far *)d_5d51_b476[team]);
        f_1646_3e54(1.25, 4.0, -(d_3404_448a[team] / 16), d_3404_448a[team] % 16, 0, buf);
        f_1646_60a7();
        for (c = 0; c <= 3; ++c)
            f_a7f0_6f34(c, 0);
        f_1646_50c5(2, 1.25, 22.5, 1, 4, 0x12d, "                 Done");
        f_1646_6097();
        f_1646_3686(1.125, 10.25, 1, 2, 0x62, " Scout");
        f_1646_3686(13.625, 10.25, 1, 2, 0x36, " Rep");
        f_1646_3686(20.625, 10.25, 1, 2, 0x62, " Watching");
        f_1646_3686(33.125, 10.25, 1, 2, 0x30, " Report");
        for (i = 0; i <= 3; ++i) {
            sprintf(buf, " %s", f_1646_4919(d_3404_42be[i][team], -1));
            f_1646_50c5(0, 1.125, i + 11.5, 1, i % 2 == 0 ? 12 : 4, 0x62, buf);
            sprintf(buf, " %s", f_9182_14f6(d_3404_42be[i][team], i + 2));
            f_1646_3686(13.625, i + 11.5, 1, 14, 0x36, buf);
            p = d_2414_a46c[m][i].player;
            if (p > 0)
                sprintf(buf, " %s", f_1646_4849(p - 1));
            else
                strcpy(buf, " -");
            f_1646_3686(20.625, i + 11.5, 1, 3, 0x62, buf);
            if (p > 0)
                sprintf(buf, " %s", d_2414_a46c[m][i].used ? "Yes" : "No");
            else
                strcpy(buf, " -");
            f_1646_3686(33.125, i + 11.5, 1, 15, 0x30, buf);
        }
        f_1646_545c(sel + 2, -1);
        do {
            d_5d51_da0a = f_1646_5602(0);
            if (d_5d51_da0a == 0)
                f_a7f0_7087();
            c = d_5d51_da0a;
            if (c >= 2 && c <= 5 && c - 2 != sel) {
                f_1646_545c(sel + 2, 0);
                sel = c - 2;
                f_1646_545c(sel + 2, -1);
            } else if (c == 6) {
                if (d_2414_a46c[m][sel].player > 0) {
                    if (d_2414_a46c[m][sel].used)
                        f_a7f0_70f0(m, sel);
                    else
                        f_1646_0bf2("No report to show");
                } else
                    c = 0;
            } else if (c == 7) {
                if (d_2414_a46c[m][sel].player > 0) {
                    f_1646_4ba0(f_1646_4919(d_3404_42be[sel][team], 0));
                    f_1646_3e54(1.25, 4.0, -(d_3404_448a[team] / 16), d_3404_448a[team] % 16, 0,
                                d_5d51_b476[team]);
                    sprintf(buf, "Stop reporting on %s?", f_1646_48c0(d_2414_a46c[m][sel].player - 1));
                    f_1646_0b2f(7, buf);
                    f_1646_2fa4(10, "", "*Exit|Stop Reporting|");
                    f_1646_3348(1);
                    if (d_5d51_da0a == 1) {
                        sprintf(buf, "Ok - %s no longer watched",
                                f_1646_48c0(d_2414_a46c[m][sel].player - 1));
                        f_1646_0b9f(buf);
                        d_2414_a46c[m][sel].player = 0;
                    }
                } else
                    c = 0;
            } else if (c == 8) {
                if (d_2414_a46c[m][sel].player > 0) {
                    p = d_2414_a46c[m][sel].player - 1;
                    do {
                        f_a13d_4a1b(p, -1, -1);
                        f_8539_4fbd(p, d_5d51_d9ba);
                    } while (!d_5d51_d5df);
                    d_5d51_d5df = 0;
                } else
                    c = 0;
            } else if (c == 9)
                f_9182_0a23(team);
        } while (c != 1 && c != 6 && c != 7 && c != 8 && c != 9);
    } while (c != 1);
}

/* one of the four scout buttons, lit or not */
void f_a7f0_6f34(unsigned char n, char lit)
{
    register unsigned x = n * 77 + 8;
    char far *labels[8] = {"Last", "Report", "Stop", "Watching", "Player", "Factfile", "View", "Staff"};

    f_1d5e_08cc(16);
    f_1d5e_08e2(x + 2, 0x34, x + 0x4b, 0x48);
    f_1d5e_08cc((lit ? 8 : 14) + 16);
    f_1d5e_08e2(x, 0x32, x + 0x49, 0x46);
    f_1d5e_08d7(0x18);
    f_1d5e_0929(x, 0x32, x + 0x49, 0x46);
    f_1646_357e(x + (36 - strlen(labels[n * 2]) * 3) + 8, 0x3b, 1, labels[n * 2]);
    f_1646_357e(x + (36 - strlen(labels[n * 2 + 1]) * 3) + 8, 0x43, 1, labels[n * 2 + 1]);
}

/* which of the four scout buttons the mouse is on: sets d_5d51_da0a to 6 + its number */
void f_a7f0_7087(void)
{
    unsigned char i;
    register unsigned x;

    for (i = 0; i <= 3; ++i) {
        x = i * 77 + 8;
        if (f_1d5e_0c0f() >= x && f_1d5e_0c0f() <= x + 0x49 && f_1d5e_0c07() >= 0x32 &&
            f_1d5e_0c07() <= 0x46) {
            d_5d51_da0a = i + 6;
            i = 3;
        }
    }
}

/* f_a7f0_70f0: human h's scout n's report on a player; buttons View Factfile, Match
   Report, His Squad, Our Squad */
void f_a7f0_70f0(unsigned char h, unsigned char n)
{
    unsigned char team, i, j;
    char choice, played;
    register int p;
    char buf[320];

    team = d_3404_1d44[h];
    do {
        f_1646_4ba0("Scout Report");
        f_1646_459b(1.25, 3.0, team);
        p = d_2414_a46c[h][n].player - 1;
        sprintf(buf, " Report on %s of %s ", f_1646_470f(p),
                (char far *)d_5d51_b476[d_44d7_6978[p]]);
        f_1646_3686(1.125, 6.25, 0, 1, 0x130, buf);
        f_1d5e_08cc(16);
        f_1d5e_08e2(12, 58, 238, 164);
        f_1d5e_08cc(19);
        f_1d5e_08e2(8, 54, 234, 160);
        for (i = 0; i <= 3; i = i + 1)
            f_a7f0_7f03(i, 0);
        f_1646_3686(1.375, 7.75, 0, 6, 0x6e, " Scout Present");
        sprintf(buf, " %s", f_1646_4919(d_3404_42be[n][team], 0));
        f_1646_3686(15.375, 7.75, 0, 6, 0x6e, buf);
        f_1646_3686(1.375, 8.75, 1, 15, 0x6e, " Opponents");
        sprintf(buf, " %s", f_1646_3537(d_2414_a46c[h][n].opponent));
        f_1646_3686(15.375, 8.75, 1, 15, 0x6e, buf);
        f_1646_3686(1.375, 9.75, 1, 15, 0x6e, " Shirt / Fitness");
        if (d_2414_a46c[h][n].shirt == 0)
            sprintf(buf, " Not Picked / %d%", d_2414_a46c[h][n].fitness);
        else
            sprintf(buf, " No.%d / %d%", d_2414_a46c[h][n].shirt, d_2414_a46c[h][n].fitness);
        f_1646_3686(15.375, 9.75, 1, 15, 0x6e, buf);
        played = d_2414_a46c[h][n].shirt > 0 && d_2414_a46c[h][n].minutes > 0;
        f_1646_3686(1.375, 10.75, 1, 15, 0x6e, " Played");
        strcpy(buf, " -");
        if (played)
            sprintf(buf, " %d mins", d_2414_a46c[h][n].minutes);
        f_1646_3686(15.375, 10.75, 1, 15, 0x6e, buf);
        f_1646_3686(1.375, 11.75, 1, 15, 0x6e, " Rating");
        strcpy(buf, " -");
        if (played && d_2414_a46c[h][n].rating[0] > 0)
            sprintf(buf, " %d", d_2414_a46c[h][n].rating[0]);
        f_1646_3686(15.375, 11.75, 1, 15, 0x6e, buf);
        f_1646_3686(1.375, 12.75, 1, 15, 0x6e, " Goals");
        strcpy(buf, " -");
        if (played)
            sprintf(buf, " %d", d_2414_a46c[h][n].goals);
        f_1646_3686(15.375, 12.75, 1, 15, 0x6e, buf);
        f_1646_3686(1.375, 13.75, 1, 15, 0x6e, " Booked");
        strcpy(buf, " -");
        if (played && d_2414_a46c[h][n].booked > 0)
            sprintf(buf, " %d mins", d_2414_a46c[h][n].booked);
        f_1646_3686(15.375, 13.75, 1, 15, 0x6e, buf);
        f_1646_3686(1.375, 14.75, 1, 15, 0x6e, " Sent off");
        strcpy(buf, " -");
        if (played && d_2414_a46c[h][n].sent_off > 0)
            sprintf(buf, " %d mins", d_2414_a46c[h][n].sent_off);
        f_1646_3686(15.375, 14.75, 1, 15, 0x6e, buf);
        f_1646_3686(1.375, 15.75, 1, 15, 0x6e, " Injured");
        strcpy(buf, " -");
        if (played && d_2414_a46c[h][n].injured > 0)
            sprintf(buf, " %d mins", d_2414_a46c[h][n].injured);
        f_1646_3686(15.375, 15.75, 1, 15, 0x6e, buf);
        f_1646_3686(1.375, 16.75, 1, 15, 0x6e, " Last 5 games");
        strcpy(buf, "");
        for (j = 1; j <= 5; j = j + 1) {
            if (d_2414_a46c[h][n].rating[j] > 0) {
                char tmp[5];
                sprintf(tmp, " %d", d_2414_a46c[h][n].rating[j]);
                strcat(buf, tmp);
            } else
                strcat(buf, " -");
        }
        f_1646_3686(15.375, 16.75, 1, 15, 0x6e, buf);
        f_1646_3686(1.375, 17.75, 1, 4, 0xde, "            Other Scouts");
        if (d_2414_a46c[h][n].other > 0)
            sprintf(buf, "A scout from %s was present",
                    (char far *)d_5d51_b474[d_2414_a46c[h][n].other]);
        else
            strcpy(buf, "                None");
        f_1646_3686(1.375, 18.75, 1, 4, 0xde, buf);
        f_1646_3686(1.375, 19.75, 0, 5, 0x6e, " Approach ?");
        if (f_8ba7_3364(p, team, n))
            strcpy(buf, " Yes");
        else
            strcpy(buf, " No");
        f_1646_3686(15.375, 19.75, 0, 5, 0x6e, buf);
        f_1646_50c5(2, 1.25, 22.5, 1, 4, 0x12d, "                 Done");
        do {
            d_5d51_da0a = f_1646_5602(-1);
            if (d_5d51_da0a == 0)
                f_a7f0_806e();
            choice = d_5d51_da0a;
        } while (choice == 0);
        if (choice == 2) {
            do {
                f_a13d_4a1b(p, -1, -1);
                f_8539_4fbd(p, d_5d51_d9ba);
            } while (!d_5d51_d5df);
            d_5d51_d5df = 0;
        } else if (choice == 3) {
            FILE *fp;
            f_1d5e_1a24(2);
            fp = fopen(d_2414_0078, "rb");
            fseek(fp, d_2414_a46c[h][n].match * 174L, 0);
            fread(d_2414_8414, 1, 174, fp);
            fclose(fp);
            f_7c1d_3ca2(d_4f37_1392[d_2414_a46c[h][n].comp][0][d_2414_a46c[h][n].week] / 32,
                        d_4f37_1392[d_2414_a46c[h][n].comp][1][d_2414_a46c[h][n].week] / 32, -1);
        } else if (choice == 4)
            f_6b47_55c8(d_44d7_6978[p]);
        else if (choice == 5)
            f_71c8_3038(team);
    } while (choice != 1);
}

/* f_a7f0_7f03: button n of the scout report; lit: drawn highlighted */
void f_a7f0_7f03(unsigned char n, char lit)
{
    char far *labels[4][2] = {{"View", "Factfile"}, {"Match", "Report"}, {"His", "Squad"},
                              {"Our", "Squad"}};
    int y;

    y = n * 27 + 54;
    f_1d5e_08cc(16);
    f_1d5e_08e2(244, y + 2, 314, y + 25);
    f_1d5e_08cc((lit ? 1 : 2) + 16);
    f_1d5e_08e2(242, y, 312, y + 23);
    f_1d5e_08d7(25);
    f_1d5e_0929(242, y, 312, y + 23);
    f_1646_357e(35 - strlen(labels[n][0]) * 3 + 250, y + 11, lit ? 0 : 1, labels[n][0]);
    f_1646_357e(35 - strlen(labels[n][1]) * 3 + 250, y + 19, lit ? 0 : 1, labels[n][1]);
}

/* f_a7f0_806e: which button the mouse is on: sets d_5d51_da0a to 2 + its number */
void f_a7f0_806e(void)
{
    unsigned char i;
    unsigned y;

    for (i = 0; i <= 4; i = i + 1) {
        y = i * 27 + 54;
        if (f_1d5e_0c0f() >= 242 && f_1d5e_0c0f() <= 312 && f_1d5e_0c07() >= y
            && f_1d5e_0c07() <= y + 23) {
            f_a7f0_7f03(i, -1);
            d_5d51_da0a = i + 2;
            i = 4;
        }
    }
}

/* f_a7f0_80e4: human h's next scout after n with a report, or -1 */
unsigned char f_a7f0_80e4(unsigned char h, unsigned char n)
{
    unsigned char c;

    c = n;
    do
        c = c == 3 ? 0 : c + 1;
    while (d_2414_a46c[h][c].used == 0 && c != n);
    return d_2414_a46c[h][c].used == 0 ? -1 : c;
}

/* f_a7f0_8152: a match event for a player the scouts watch (0 picked, 1 goal, 2 booked,
   3 sent off, 4 injured, 5 full time) */
void f_a7f0_8152(int player, char ev)
{
    unsigned char h, n, t, cnt;
    unsigned char k;

    for (h = 0; h <= 3; h = h + 1) {
        if (d_3404_1d44[h] < 255) {
            for (n = 0; n <= 3; n = n + 1) {
                if (d_2414_a46c[h][n].player > 0 && d_2414_a46c[h][n].player - 1 == player) {
                    if (ev == 0) {
                        d_2414_a46c[h][n].used = -1;
                        d_2414_a46c[h][n].match = d_5d51_d8ea + d_5d51_d9e6 - 1;
                        d_2414_a46c[h][n].comp = d_5d51_d9e6;
                        d_2414_a46c[h][n].week = d_5d51_da06 - 1;
                        d_2414_a46c[h][n].opponent = d_5d51_d928;
                        d_2414_a46c[h][n].shirt = d_5d51_d9fe + (d_5d51_d9fe == 12 ? 1 : 0) + 1;
                        d_2414_a46c[h][n].fitness = d_44d7_7b0c[player];
                        d_2414_a46c[h][n].goals = 0;
                        d_2414_a46c[h][n].booked = 0;
                        d_2414_a46c[h][n].sent_off = 0;
                        d_2414_a46c[h][n].injured = 0;
                        d_2414_a46c[h][n].minutes = 0;
                        d_2414_a46c[h][n].other = 0;
                    } else if (ev == 1)
                        d_2414_a46c[h][n].goals++;
                    else if (ev == 2)
                        d_2414_a46c[h][n].booked = d_5d51_d90a;
                    else if (ev == 3)
                        d_2414_a46c[h][n].sent_off = d_5d51_d90a;
                    else if (ev == 4)
                        d_2414_a46c[h][n].injured = d_5d51_d90a;
                    else if (ev == 5) {
                        d_2414_a46c[h][n].minutes = d_5d51_d908;
                        for (k = 5; k >= 1; k = k - 1)
                            d_2414_a46c[h][n].rating[k] = d_2414_a46c[h][n].rating[k - 1];
                        d_2414_a46c[h][n].rating[0] = d_5d51_d7fa;
                        d_2414_a46c[h][n].other = 0;
                        if (d_3c0d_86c4[player] > 0 && !d_2414_af3c[player].a.f9
                            && !d_2414_af3c[player].a.f30) {
                            cnt = 0;
                            do {
                                do
                                    ;
                                while ((t = f_1d5e_0d6a(38)) == d_3404_4732[h]);
                                cnt++;
                            } while (f_8539_1b9e(t, player) == 0 && cnt < 40);
                            if (cnt < 40)
                                d_2414_a46c[h][n].other = t + 1;
                        }
                    }
                }
            }
        }
    }
}
