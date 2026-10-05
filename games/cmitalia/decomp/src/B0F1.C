/* @at b0f1:0000 */
/* @data 5d51:75d2 */
/* @module */

/* Overlay b0f1: CM93's overlay b628 (games/cm93/decomp/src/B628.C) changed for CM Italia:
 * player values, derby results, physio treatment, club news, friendlies, win bonuses and
 * board messages, penalty takers and the penalty commentary, shot and goal commentary,
 * approaching players, transfer news, loans, the new-game progress window, the help pages
 * and the credits. */
#include <stdio.h>
#include <string.h>
#include <mem.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
int f_b0f1_0000(int p, unsigned char team);
char f_b0f1_01df(unsigned char team);
void f_b0f1_028e(unsigned a, unsigned b, unsigned char g1, unsigned char g2);
unsigned char f_b0f1_0939(unsigned char team);
void f_b0f1_09d1(int player);
void f_b0f1_0c98(int p);
void f_b0f1_0d60(void);
void f_b0f1_0ede(void);
void f_b0f1_0f1d(unsigned char team);
void f_b0f1_14eb(unsigned char n, char lit);
void f_b0f1_163e(void);
void f_b0f1_16a7(int team, unsigned char week, int far *opp, unsigned char far *home, unsigned char far *slot);
void f_b0f1_1784(unsigned char team, unsigned char week);
char f_b0f1_1b60(int club, int team, unsigned char week);
void f_b0f1_1cc3(unsigned char team, unsigned char week);
void f_b0f1_1e6e(unsigned char team, char c);
void f_b0f1_1f8f(unsigned char team, int a, int b);
void f_b0f1_2009(unsigned char team, unsigned char week);
void f_b0f1_20fc(void);
void f_b0f1_258b(unsigned char team, int opp);
unsigned char f_b0f1_2786(int player);
void f_b0f1_2862(unsigned char team);
void f_b0f1_28de(void);
void f_b0f1_2916(unsigned char team);
void f_b0f1_2bd1(unsigned char team);
void f_b0f1_30c9(unsigned char team);
void f_b0f1_3238(unsigned char team, char mode, char from);
void f_b0f1_346f(unsigned char n, char hi);
void f_b0f1_35c0(void);
void f_b0f1_3629(int player);
void f_b0f1_36ad(int player, unsigned char team);
void f_b0f1_3704(int player, unsigned char team);
void f_b0f1_37af(unsigned char team);
void f_b0f1_3900(unsigned char team);
char far *f_b0f1_3a62(char given);
void f_b0f1_3b19(unsigned char team);
void f_b0f1_3e09(unsigned char team);
char far *f_b0f1_409c(void);
void f_b0f1_4128(unsigned char team);
void f_b0f1_41c6(unsigned char team);
unsigned char f_b0f1_42e9(unsigned char team);
int f_b0f1_43eb(unsigned char c);
int f_b0f1_445d(unsigned char c);
void f_b0f1_44cf(unsigned player, unsigned char team);
void f_b0f1_4572(unsigned player, unsigned char team);
char f_b0f1_4786(void);
char f_b0f1_4799(void);
void f_b0f1_47af(void);
void f_b0f1_48ea(void);
void f_b0f1_4c49(void);
void f_b0f1_4e24(void);
char f_b0f1_4e9f(int p);
char f_b0f1_4f0a(int p, unsigned char c);
void f_b0f1_4f55(int p, unsigned char c, long fee);
void f_b0f1_5032(int p, unsigned char c, long fee);
void f_b0f1_509b(unsigned src, unsigned dst);
char f_b0f1_5906(int p);
unsigned char f_b0f1_594e(int team, unsigned char w, unsigned char n);
void f_b0f1_5aa5(unsigned team, unsigned char w, unsigned char n);
void f_b0f1_5b01(unsigned team);
void f_b0f1_5b78(unsigned char team);
void f_b0f1_62ac(void);
char far *f_b0f1_63b6(int player);
void f_b0f1_6516(void);
void f_b0f1_66b9(char stage);
void f_b0f1_66f1(unsigned char n, char on);
void f_b0f1_6835(char stage, unsigned i, unsigned n);
void f_b0f1_69cc(void);
void f_b0f1_6b12(void);
void f_b0f1_6c58(void);
void f_b0f1_6c80(unsigned char n);
void f_b0f1_7336(void);
void f_b0f1_74c7(char far *title);
void f_b0f1_75b5(void);
void f_b0f1_7660(void);
void f_b0f1_68b8(void);

struct flags_a { unsigned char b0; unsigned f8 : 1; unsigned f9 : 1; unsigned : 6; unsigned : 2; unsigned f18 : 1; unsigned f19 : 1; unsigned : 4; unsigned : 0; unsigned f24 : 1; unsigned : 3; unsigned f28 : 1; unsigned : 1; unsigned f30 : 1; unsigned : 1; };
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
union flags { struct flags_a a; struct flags_w w; };
int f_1d5e_1308(int a, int b);
int f_1d5e_136a(int a, int b);
long f_1d5e_0d6a(long n);
void far *f_1d5e_1618(int handle, int page);
void f_1646_0b2f(int line, char far *s);
void f_1646_0b9f(char far *s);
void f_1646_0bf2(char far *s);
char f_1646_2a0c(int w, int n);
char f_1646_2b65(int a, int b);
char f_1646_2cc9(int x);
float f_1646_2cfd(int x);
void f_1646_2fa4(int n, char far *title, char far *items);
void f_1646_3348(int last);
void f_1646_3e54(float x, float y, int bg, int fg, int w, char far *s);
int f_1646_46a0(int team);
char far *f_1646_470f(int player);
char far *f_1646_48c0(int player);
void f_1646_4ba0(char far *title);
void f_1646_5bcb(int team, char far *title, char far *text);
float f_1646_6ab8(int x);
unsigned char f_1646_716c(unsigned char league);
unsigned char f_1646_717d(char team);
void f_71c8_0027(int team);
void f_8119_127c(int team, int amount);
void f_8119_1634(int team, int delta);
void f_8119_16ae(int team, int b, int c);
void f_9182_1975(int team, char far *s);
void f_9e79_1503(char all);
extern int far d_3404_1ab4[];
extern unsigned char far d_3404_1abe[];
extern unsigned char far d_3404_2770[][650];
extern unsigned char far d_3404_443a[][82];
extern unsigned char far d_3404_448a[];
extern unsigned char far d_3404_44da[];
extern unsigned char far d_3404_4552[];
extern unsigned char far d_3404_457a[];
extern char far d_2414_1e28[][40][5];
extern char far d_2414_206c[];
extern char far d_2414_41c4[];
extern unsigned char far d_3c0d_0000[][1500];
extern unsigned char far d_44d7_0000[][1500];
extern unsigned char far d_44d7_6978[];
extern int far d_44d7_9624[][26];
extern unsigned char far d_4f37_09c4[][460];
extern char near *d_5d51_b476[];
extern char d_5d51_d5a5;
extern char d_5d51_d5c1;
extern char d_5d51_d5e1;
extern int d_5d51_d628;
extern int d_5d51_d680;
extern int d_5d51_d8b8;
extern int d_5d51_d8c8;
extern int d_5d51_d940;
extern int d_5d51_d942;
extern int d_5d51_d956;
extern int d_5d51_d9e6;
extern int d_5d51_da0e;
extern int d_5d51_da06;
extern int d_5d51_da0a;
extern union flags far d_2414_af3c[];
extern int (far *d_5d51_da4c)[1500];
extern int d_5d51_dd9c;
void f_1d5e_08cc(int c);
void f_1d5e_08d7(int c);
void f_1d5e_08e2(int x1, int y1, int x2, int y2);
void f_1d5e_0929(int x1, int y1, int x2, int y2);
int f_1d5e_0c07(void);
int f_1d5e_0c0f(void);
char far *f_1646_3537(int x);
void f_1646_357e(int x, int y, int colour, char far *s);
void f_1646_3686(float x, float y, int bg, int fg, int w, char far *s);
char far *f_1646_4a8f(int division);
char far *f_1646_4b1e(int division, char full);
void f_1646_50c5(int a, float x, float y, int c, int d, int e, char far *s);
void f_1646_545c(int n, char swap);
int f_1646_5602(int a);
void f_1646_5869(int team);
void f_1646_6097(void);
void f_1646_60a7(void);
void f_6b47_55c8(int team);
extern unsigned char d_5d51_d408;
extern float d_5d51_d549;
extern float d_5d51_d551;
extern int d_5d51_d9c6;
extern char far * far d_4f37_0000[];
extern unsigned char far d_4f37_1176[];
extern int far d_4f37_1390[][2][100];
long f_1646_5ac3(int team);
char f_1646_6971(char x);
char f_1646_6ae2(int player, char c);
extern int d_5d51_d828;
extern int d_5d51_d958;
extern long (far *d_5d51_da44)[38];
extern int d_5d51_dd98;
extern int far d_2414_52cc[][26];
extern unsigned char far d_3404_1d44[];
extern long far d_3404_3e4a[][38];
extern int far d_3404_4226[];
extern unsigned char far d_3404_452a[];
extern unsigned char far d_3404_45a2[];
extern int far d_44d7_a5de[];
char far *f_1646_4849(int player);
char f_1646_5de5(int player);
void f_1d5e_0dbd(int ticks);
char far *f_1d5e_0efc(void);
void f_76ea_3183(int team);
void f_7c1d_0c36(int team, char far *s);
void f_7c1d_1218(int team, int chance, int shootout);
void f_a13d_4a1b(int player, int team, char buy);
extern char far d_2414_0e88[][40];
extern char far d_2414_40d4[];
extern char d_5d51_d5df;
extern int d_5d51_d62e;
extern int d_5d51_d84c;
extern int d_5d51_d858;
extern int d_5d51_d85a;
extern int d_5d51_d85c;
extern int d_5d51_d8de;
extern int d_5d51_d8e0;
extern int d_5d51_d9f0;
long f_1646_0204(int p, int n);
long f_1646_0da1(long v, char c);
void f_1646_459b(float x, float y, int team);
char f_1646_68af(int x);
char f_1646_68d1(int x);
char f_1646_694f(int x);
void f_8539_375d(int player, int club);
void f_8539_4451(int colour, char far *s);
void f_9915_1095(int p);
void f_9915_168a(int p);
extern int far d_3404_0e34[][16];
extern unsigned char far d_3404_0dce[][16];
extern unsigned char far d_3404_1334[][3][16];
extern unsigned char far d_56d9_52d4[];
extern unsigned char far d_56d9_545c[];
extern unsigned char far d_56d9_59c5[];
extern unsigned char far d_56d9_5b4d[];
extern char d_5d51_d55b;
extern char d_5d51_d561;
extern char d_5d51_d562;
extern char d_5d51_d5ae;
extern int d_5d51_d8f2;
extern int d_5d51_d8f4;
extern int d_5d51_da04;
extern int d_5d51_da18;
extern int d_5d51_da1a;
extern unsigned char (far *d_5d51_da38)[1500];
extern int d_5d51_dd92;
char f_1646_2833(int w, int n);
char f_1646_28e4(int w, int n);
char f_1646_297b(int w, int n);
int f_1646_2dce(int x);
char f_1646_5dff(int player);
void f_1d5e_1a24();
void f_8539_4508(int player, int to, int from, long fee, unsigned char kind);
void f_9915_138e(int p, int a, int b);
void f_a7f0_0592(int player, int team, char c);
extern unsigned char far d_4f37_11c6[];
extern int far d_3404_0e32[][16];
extern int far d_3404_51ac[][1500];
extern int far d_3404_691c[];
extern char far d_2414_0816[];
extern char far d_2414_321e[][6];
extern char near *d_5d51_b56a[];
extern char d_5d51_d55c;
extern unsigned char d_5d51_d5ed;
extern long far *d_5d51_da58;
extern int d_5d51_dda2;
void f_1646_015c(int x1, int y1, int x2, int y2);
int f_8539_2a25(int a, int b);
void f_8539_4fbd(int player, int a);
extern unsigned char far d_3404_4eda[];
extern unsigned char far d_3404_4f02[];
extern unsigned char far d_3404_4f2a[];
extern int d_5d51_d9ba;
extern int d_5d51_d944;
extern char d_5d51_dab0[];
char far *f_1646_4919(int manager, char full);
void f_1646_58a8(int a);
int f_1646_6aa9(int x);
struct news { int player; unsigned char from; unsigned char to; long fee; };
extern struct news far d_2414_9618[];
extern char d_5d51_d596;
extern char d_5d51_d5e6;
extern char far d_2414_1c84[][82][5];
extern unsigned char far d_56d9_4c08[];
extern unsigned char far d_56d9_4dc7[];
extern unsigned char far d_56d9_525f[];
extern unsigned char far d_56d9_541e[];
extern int d_5d51_d5fa;
void f_8539_1978(int p, char all);
char f_1646_258b(int w);
char f_1646_2646(int w);
char f_1646_2674(int w);
char f_1646_2ba4(int w);
extern unsigned char d_5d51_d401[];
extern char far d_2414_0050[];


int f_b0f1_0000(int p, unsigned char team)
{
    long v;
    unsigned char a[20] = {20, 20, 20, 20, 20, 30, 30, 30, 30, 35, 40, 60, 80, 100, 125, 150, 175, 200, 200, 200};
    unsigned char b[5] = {20, 50, 80, 100, 125};
    float c[2] = {1.0, 0.65};

    v = a[f_1d5e_1308(f_1d5e_136a(d_3404_2770[0][p] / 10, 19), 0)] * 2000L;
    if (f_b0f1_01df(team))
        v = v + 250000L;
    else
        v = v + b[d_3404_44da[team] - 13] * 1000L;
    v = v / 3;
    v = v * c[f_1646_717d(team)] * 1.0;
    v = v + d_3404_2770[0][p] * 35L;
    v = v / 1000;
    if (v < 100)
        v = v / 5 * 5;
    else
        v = v / 10 * 10;
    return v;
}

char f_b0f1_01df(unsigned char team)
{
    char buf[40];

    strcpy(buf, d_5d51_b476[team]);
    if (strstr(buf, "Milan") || strstr(buf, "Juventus") || strstr(buf, "Inter")
        || strstr(buf, "Lazio") || strstr(buf, "Napoli") || strstr(buf, "Sampdoria"))
        return -1;
    return 0;
}

void f_b0f1_028e(unsigned a, unsigned b, unsigned char g1, unsigned char g2)
{
    float f = 10;
    float m;
    unsigned char r;
    char buf[100];

    if (g1 >= g2) {
        m = g1 == g2 ? 0.5 : 1.0;
        f += a == d_5d51_d940;
        f += (g1 - g2) * 0.5;
        if (b < 38) {
            f += (3 - f_1646_717d(b)) / 2;
            f += (d_3404_44da[b] - d_3404_44da[a]) / 3 * m;
            if (f_1646_717d(a) == f_1646_717d(b)) {
                f += (f_1646_46a0(a) - f_1646_46a0(b)) / 8 * (f_1d5e_136a(d_5d51_da0e, 10) / 10) * m;
                f += (f_b0f1_0939(b) - f_b0f1_0939(a)) / 10 * m;
            } else {
                f += (f_1646_717d(a) - f_1646_717d(b)) * 3 * m;
                f += (f_b0f1_0939(b) - f_b0f1_0939(a)) / 20 * m;
            }
            if (d_5d51_d8c8 > 24)
                f += (d_5d51_d8c8 - 24) / 4 * m;
        } else
            f += (d_4f37_09c4[0][b - 38] - f_1646_2cfd(a)) * m;
        if (g1 > g2) {
            r = f_1d5e_1308(f, 10);
            if (d_3404_457a[a] > 0)
                f_b0f1_2862(a);
        } else
            r = f_1d5e_1308(f_1d5e_136a(f, 14), 8);
    } else if (g1 < g2) {
        f -= (g2 - g1) * 0.5;
        if (b < 38) {
            f -= (d_3404_44da[a] - d_3404_44da[b]) / 3;
            if (f_1646_717d(a) == f_1646_717d(b)) {
                f -= (f_1646_46a0(b) - f_1646_46a0(a)) / 8 * (f_1d5e_136a(d_5d51_da0e, 10) / 10);
                f -= (f_b0f1_0939(a) - f_b0f1_0939(b)) / 10;
            } else {
                f -= (f_1646_717d(b) - f_1646_717d(a)) * 3;
                f -= (f_b0f1_0939(a) - f_b0f1_0939(b)) / 20;
            }
            if (d_5d51_d8c8 > 24)
                f -= (d_5d51_d8c8 - 24) / 4;
        } else
            f -= f_1646_2cfd(a) - d_4f37_09c4[0][b - 38];
        r = f_1d5e_1308(f_1d5e_136a(f, 10), 1);
    }
    if (f_1646_2cc9(a)) {
        if (r < 4)
            strcpy(buf, "a disgraceful");
        else if (r < 6)
            strcpy(buf, "a very poor");
        else if (r < 8)
            strcpy(buf, "a disappointing");
        else if (r < 12)
            strcpy(buf, "");
        else if (r < 14)
            strcpy(buf, "a good");
        else if (r < 16)
            strcpy(buf, "an excellent");
        else
            strcpy(buf, "a superb");
        if (strlen(buf) > 0) {
            if (d_5d51_d8c8 > 24)
                strcat(buf, " derby");
            strcat(buf, " result.");
            if (f_1646_2cc9(a))
                f_9182_1975(a, buf);
        }
    }
    if (a < 38) {
        f_8119_1634(a, (r - 10) * 2);
        f_8119_127c(a, r * 300 / f_1646_6ab8(a));
        d_3404_443a[0][a] = f_1d5e_1308(1, f_1d5e_136a(16, r + d_3404_443a[0][a] - 10));
        if (r >= 13 && d_5d51_da06 > 12 && f_1646_2a0c(d_5d51_da06, d_5d51_d9e6 + 1) == 0) {
            if (r > d_3404_1ab4[4] || d_3404_1ab4[0] == -1) {
                d_3404_1ab4[0] = a;
                d_3404_1ab4[1] = b;
                strcpy(d_2414_206c, a == d_5d51_d942 ? "H" : "A");
                if (f_1646_2b65(d_5d51_da06, d_5d51_d9e6 + 1))
                    strcpy(d_2414_206c, "N");
                d_3404_1ab4[2] = g1;
                if (d_5d51_d5c1)
                    d_3404_1ab4[2] = -d_3404_1ab4[2];
                d_3404_1ab4[3] = g2;
                d_3404_1ab4[4] = r;
                f_8119_16ae(d_5d51_da06, d_5d51_d9e6 + 1, d_5d51_d8b8);
                strcat(d_2414_206c, d_2414_41c4);
            }
        }
    }
}

unsigned char f_b0f1_0939(unsigned char team)
{
    unsigned char i;
    unsigned char n = 0;
    char buf[40];
    char c;

    sprintf(buf, "%s%s", d_2414_1e28[0][team], d_2414_1e28[1][team]);
    for (i = 1; i <= strlen(buf); i = i + 1) {
        c = buf[i - 1];
        if (c == 'W')
            n += 3;
        else if (c == 'D' || c == 'X')
            n++;
    }
    return n;
}

void f_b0f1_09d1(int player)
{
    unsigned char team = d_44d7_6978[player];
    char text[320];
    char s[40];

    do {
        d_5d51_d5a5 = 0;
        f_1646_4ba0("Rehabilitation");
        sprintf(text, " %s injury ", f_1646_48c0(player));
        f_1646_3e54(1, 4, -(d_3404_448a[team] / 16), d_3404_448a[team] % 16, 0, text);
        if (d_2414_af3c[player].w.f25)
            strcpy(s, "Hi-Tec");
        else if (d_2414_af3c[player].w.f26)
            strcpy(s, "Intermediate");
        else if (d_2414_af3c[player].w.f27)
            strcpy(s, "Basic");
        else
            strcpy(s, "None");
        sprintf(text, "Current treatment : %s", s);
        f_1646_0b2f(-7, text);
        f_1646_0b2f(9, "Select new level of treatment");
        f_1646_2fa4(12, "", "*Exit|View Costs|Last Finances|Hi-Tec Level|Intermed Level|Basic Level|No treatment|");
        do {
            d_5d51_d5e1 = -1;
            f_1646_3348(6);
            d_5d51_d680 = d_5d51_da0a;
            if (d_5d51_d680 == 1) {
                f_1646_0b9f("Hi-Tec costs 10000 p/w");
                f_1646_0b9f("Intermediate costs 5000 p/w");
                if (!d_2414_af3c[player].w.f20)
                    f_1646_0b9f("Basic costs 3000 p/w");
                else
                    f_1646_0b9f("Basic is covered by insurance");
                d_5d51_d5e1 = 0;
            } else if (d_5d51_d680 == 2) {
                f_71c8_0027(team);
                d_5d51_d5a5 = -1;
            } else if (d_5d51_d680 >= 3 && d_5d51_d680 <= 5) {
                if (d_5d51_d680 == 3) {
                    f_1646_0b9f("Hi-tec treatment selected");
                    d_2414_af3c[player].w.f25 = 1;
                } else if (d_5d51_d680 == 4) {
                    f_1646_0b9f("Intermediate treatment selected");
                    d_2414_af3c[player].w.f26 = 1;
                } else {
                    f_1646_0b9f("Basic treatment selected");
                    d_2414_af3c[player].w.f27 = 1;
                }
                d_5d51_d5a5 = -1;
            } else if (d_5d51_d680 == 6) {
                f_1646_0b9f("No treatment selected");
                d_2414_af3c[player].w.f25 = 0;
                d_2414_af3c[player].w.f26 = 0;
                d_2414_af3c[player].w.f27 = 0;
                d_5d51_d5a5 = -1;
            }
        } while (!d_5d51_d5e1);
    } while (d_5d51_d5a5);
}

void f_b0f1_0c98(int p)
{
    if (d_44d7_0000[23][p] == 1) {
        if (f_1646_717d(d_44d7_6978[p]) == 0) {
            if (f_1d5e_0d6a(3) == 0)
                d_2414_af3c[p].w.f25 = 1;
            else
                d_2414_af3c[p].w.f26 = 1;
        } else if (d_2414_af3c[p].w.f20 || f_1d5e_0d6a(3) > 0)
            d_2414_af3c[p].w.f27 = 1;
    } else if (d_2414_af3c[p].w.f20)
        d_2414_af3c[p].w.f27 = 1;
}

void f_b0f1_0d60(void)
{
    unsigned char t;

    for (t = 0; t <= 37; t = t + 1) {
        if (f_1646_2cc9(t)) {
            unsigned char i;
            int best_p;
            float v;
            float best;
            char title[80];
            char text[320];

            best = 0;
            for (i = 0; i <= d_3404_4552[t] - 1; i = i + 1) {
                int p = d_44d7_9624[t][i];
                if (d_3c0d_0000[12][p] > 20) {
                    d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 0);
                    v = d_5d51_da4c[2][p] / d_3c0d_0000[12][p];
                    v = v * (d_3c0d_0000[13][p] / 100 + 1);
                    if (v > best) {
                        best_p = p;
                        best = v;
                    }
                }
            }
            sprintf(title, "%s Club News", (char far *)d_5d51_b476[t]);
            sprintf(text, "%s has been voted the supporter's club player of the year.", f_1646_470f(best_p));
            f_1646_5bcb(t, title, text);
        }
    }
}

void f_b0f1_0ede(void)
{
    if (d_5d51_d956 > 0) {
        f_9e79_1503(0);
        if (d_5d51_d628 > -1)
            f_b0f1_0f1d(d_3404_1abe[d_5d51_d628]);
    } else
        f_1646_0bf2("Not available on demo");
}

/* Friendlies: the friendly fixtures of weeks 2-12 (CM93: 2-8), and the buttons to arrange them
   (choices 13-16; Italia dropped "Season starts week five"). */
void f_b0f1_0f1d(unsigned char team)
{
    unsigned char i;
    unsigned char home;
    unsigned char slot;
    unsigned char week;
    unsigned char c;
    int opp;
    char buf[320];

    week = f_1d5e_1308(d_5d51_da06, 2);
    do {
        f_1646_6097();
        f_1646_4ba0("Friendlies");
        sprintf(buf, " %s ", (char far *)d_5d51_b476[team]);
        f_1646_3e54(1.25, 4.0, -(d_3404_448a[team] / 16), d_3404_448a[team] % 16, 0, buf);
        f_1646_60a7();
        for (c = 0; c <= 3; ++c)
            f_b0f1_14eb(c, 0);
        f_1646_50c5(2, 1.25, 22.5, 1, 4, 301, "                 Done");
        f_1646_6097();
        f_1646_3686(1.125, 10.25, 1, 2, 30, " Wk");
        f_1646_3686(5.125, 10.25, 1, 2, 120, " Opponents");
        f_1646_3686(20.375, 10.25, 1, 2, 112, " Of");
        f_1646_3686(34.625, 10.25, 1, 2, 36, " Ven");
        for (i = 1; i <= 11; ++i) {
            sprintf(buf, " %s", f_1646_4a8f(i / 2 + 1));
            f_1646_50c5(0, 1.125, i + 10.375, 1, 12, 30, buf);
            if (i + 1 < d_5d51_da06)
                f_1646_5869(i + 1);
            f_b0f1_16a7(team, i + 1, &opp, &home, &slot);
            if (opp > -1) {
                sprintf(buf, " %s", f_1646_3537(opp));
                f_1646_3686(5.125, i + 10.375, 1, 14, 120, buf);
                if (opp < 38)
                    sprintf(buf, " %s", f_1646_4b1e(f_1646_717d(opp) + 1, 0));
                else
                    sprintf(buf, " %s", d_4f37_0000[d_4f37_1176[opp]]);
                f_1646_3686(20.375, i + 10.375, 1, 4, 112, buf);
                strcpy(buf, home == 0 ? " Home" : " Away");
                f_1646_3686(34.625, i + 10.375, 0, 6, 36, buf);
            } else {
                f_1646_3686(5.125, i + 10.375, 1, 14, 120, " No Fixture");
                f_1646_3686(20.375, i + 10.375, 1, 4, 112, " -");
                f_1646_3686(34.625, i + 10.375, 0, 6, 36, " -");
            }
        }
        f_1646_60a7();
        f_1646_545c(week, -1);
        do {
            d_5d51_da0a = f_1646_5602(0);
            if (d_5d51_da0a == 0)
                f_b0f1_163e();
            c = d_5d51_da0a;
            if (c >= 2 && c <= 12) {
                if (c != week) {
                    f_1646_545c(week, 0);
                    week = c;
                    f_1646_545c(week, -1);
                }
            } else if (c >= 13) {
                f_b0f1_16a7(team, week, &opp, &home, &slot);
                if (opp == -1 && c >= 14)
                    c = 0;
            }
        } while (c == 0 || c >= 2 && c <= 12);
        if (c == 13) {
            if (opp == -1)
                f_b0f1_1784(team, week);
            else
                f_1646_0bf2("You already have a fixture");
        } else if (c == 14)
            f_b0f1_1cc3(team, week);
        else if (c == 15) {
            if (opp < 38)
                f_6b47_55c8(opp);
            else
                f_1646_0bf2("No information available");
        } else if (c == 16)
            f_b0f1_1e6e(team, week);
    } while (c != 1);
}

/* One of the four buttons under the fixtures, lit or not. */
void f_b0f1_14eb(unsigned char n, char lit)
{
    int x = n * 77 + 8;
    char far *label[4][2] = {"Select", "Opponents", "Select", "Venue",
                             "Opponents", "Details", "Cancel", "Fixture"};

    f_1d5e_08cc(16);
    f_1d5e_08e2(x + 2, 52, x + 75, 72);
    f_1d5e_08cc((lit ? 3 : 15) + 16);
    f_1d5e_08e2(x, 50, x + 73, 70);
    f_1d5e_08d7(19);
    f_1d5e_0929(x, 50, x + 73, 70);
    f_1646_357e(x + (36 - strlen(label[n][0]) * 3) + 8, 59, 1, label[n][0]);
    f_1646_357e(x + (36 - strlen(label[n][1]) * 3) + 8, 67, 1, label[n][1]);
}

/* A mouse click on one of the buttons: choice 13-16. */
void f_b0f1_163e(void)
{
    unsigned char i;
    unsigned x;

    for (i = 0; i <= 3; ++i) {
        x = i * 77 + 8;
        if (f_1d5e_0c0f() >= x && f_1d5e_0c0f() <= x + 73 &&
            f_1d5e_0c07() >= 50 && f_1d5e_0c07() <= 70) {
            d_5d51_da0a = i + 13;
            i = 3;
        }
    }
}

/* The friendly of a team in a week (64 fixture slots, 100 weeks): opponent (-1: none), at home (0) or away, and its
   fixture slot. */
void f_b0f1_16a7(int team, unsigned char week, int far *opp, unsigned char far *home, unsigned char far *slot)
{
    unsigned char i;

    *opp = -1;
    for (i = 0; i <= 63; i++) {
        if (d_4f37_1390[i][0][week] / 32 == team) {
            *opp = d_4f37_1390[i][1][week] / 32;
            *home = 0;
        } else if (d_4f37_1390[i][1][week] / 32 == team) {
            *opp = d_4f37_1390[i][0][week] / 32;
            *home = 1;
        } else
            continue;
        *slot = i;
        i = 63;
    }
}

/* Arrange Friendly: pick a club to approach, 48 a page. */
void f_b0f1_1784(unsigned char team, unsigned char week)
{
    unsigned char page;
    unsigned char key;
    int i;
    int club;
    char buf[320];
    char r;

    page = 1;
    do {
        f_1646_4ba0("Arrange Friendly");
        sprintf(buf, " Select a team to approach ");
        f_1646_3686(1.125, 4.0, 1, 2, 304, buf);
        f_1646_50c5(2, 1.25, 22.5, 1, 12, 53, " - Scr");
        f_1646_50c5(2, 32.25, 22.5, 1, 12, 53, " + Scr");
        f_1646_50c5(2, 8.5, 22.5, 1, 4, 185, "          Done");
        for (i = 0; i <= 47; i++) {
            club = (page - 1) * 48 + i;
            d_5d51_d549 = i / 16 * 12.75 + 1.125;
            d_5d51_d551 = i + 6 - i / 16 * 16;
            if (club < 540) {
                sprintf(buf, " %.15s", f_1646_3537(club));
                f_1646_50c5(0, d_5d51_d549, d_5d51_d551, f_1646_2cc9(club) ? 6 : 1, 14, 100, buf);
                if (team == club)
                    f_1646_5869(i + 4);
            } else
                f_1646_3686(d_5d51_d549, d_5d51_d551, 1, 14, 100, "");
        }
        do
            key = f_1646_5602(d_5d51_d9c6);
        while (key == 0);
        if (key == 1)
            page = page == 1 ? 12 : page - 1;
        else if (key == 2)
            page = page == 12 ? 1 : page + 1;
        else if (key >= 4) {
            club = (page - 1) * 48 + key - 4;
            f_1646_4ba0("Approach for friendly");
            sprintf(buf, " %s ", (char far *)d_5d51_b476[team]);
            f_1646_3e54(1.0, 4.0, -(d_3404_448a[team] / 16), d_3404_448a[team] % 16, 0, buf);
            sprintf(buf, "Approach %s ? ", f_1646_3537(club));
            f_1646_0b2f(-7, buf);
            f_1646_2fa4(10, "", "*Exit|Approach Them|");
            f_1646_3348(1);
            if (d_5d51_da0a == 1) {
                r = f_b0f1_1b60(club, team, week);
                if (r == 0)
                    f_1646_0b9f("They are not available");
                else if (r == 1)
                    f_1646_0b9f("They decline the offer");
                else {
                    f_1646_0b9f("They accept the offer");
                    f_b0f1_1f8f(week, team, club);
                    f_b0f1_1cc3(team, week);
                    key = 3;
                }
            }
        }
    } while (key != 3);
}

/* A club's answer to a friendly: 0 not available, 1 declined, 2 accepted (Italia: declined only
 * when the club is more than 6.0 stronger; CM93 also declined within the same division). */
char f_b0f1_1b60(int club, int team, unsigned char week)
{
    unsigned char slot;
    unsigned char home;
    int opp;
    char buf[320];

    f_b0f1_16a7(club, week, &opp, &home, &slot);
    if (opp > -1)
        return 0;
    if (f_1646_2cc9(club)) {
        f_1646_4ba0("Offer of Friendly");
        sprintf(buf, " %s ", (char far *)d_5d51_b476[club]);
        f_1646_3e54(1.0, 4.0, -(d_3404_448a[club] / 16), d_3404_448a[club] % 16, 0, buf);
        sprintf(buf, "%s want a friendly ", f_1646_3537(team));
        f_1646_0b2f(-7, buf);
        f_1646_2fa4(10, "", "Accept Offer|Refuse Offer|");
        f_1646_3348(1);
        if (d_5d51_da0a == 1)
            return 1;
    } else {
        if (d_5d51_d408 % 4 == club % 4)
            return 0;
        if (f_1646_2cfd(club) - f_1646_2cfd(team) > 6.0)
            return 1;
    }
    return 2;
}

/* Set Venue: play the week's friendly at home or away. */
void f_b0f1_1cc3(unsigned char team, unsigned char week)
{
    unsigned char slot;
    unsigned char home;
    int opp;
    int t;
    char buf[320];

    f_b0f1_16a7(team, week, &opp, &home, &slot);
    f_1646_4ba0("Set Venue");
    sprintf(buf, " %s ", (char far *)d_5d51_b476[team]);
    f_1646_3e54(1.0, 4.0, -(d_3404_448a[team] / 16), d_3404_448a[team] % 16, 0, buf);
    sprintf(buf, "Friendly vs %s ", f_1646_3537(opp));
    f_1646_0b2f(-7, buf);
    f_1646_2fa4(10, "", "Play at Home|Play Away|");
    f_1646_3348(1);
    if (home != d_5d51_da0a) {
        t = d_4f37_1390[slot][0][week];
        d_4f37_1390[slot][0][week] = d_4f37_1390[slot][1][week];
        d_4f37_1390[slot][1][week] = t;
        f_1646_0b9f("Ok - fixture now set");
    }
}

/* cancel a friendly */
void f_b0f1_1e6e(unsigned char team, char c)
{
    unsigned char idx;
    unsigned char home;
    int opp;
    char buf[320];

    f_b0f1_16a7(team, c, &opp, &home, &idx);
    f_1646_4ba0("Cancel Friendly");
    sprintf(buf, " %s ", (char far *)d_5d51_b476[team]);
    f_1646_3e54(1.0, 4.0, -(d_3404_448a[team] / 16), d_3404_448a[team] % 16, 0, buf);
    sprintf(buf, "Cancel game vs %s ? ", f_1646_3537(opp));
    f_1646_0b2f(-7, buf);
    f_1646_2fa4(10, "", "*Exit|Cancel Game|");
    f_1646_3348(1);
    if (d_5d51_da0a == 1)
        f_b0f1_2009(c, idx);
}

/* add a fixture to a team's list */
void f_b0f1_1f8f(unsigned char team, int a, int b)
{
    unsigned char n;

    n = d_44d7_a5de[team];
    d_4f37_1390[n][0][team] = a << 5;
    d_4f37_1390[n][1][team] = b << 5;
    d_44d7_a5de[team]++;
}

/* remove a fixture: the last one takes its place */
void f_b0f1_2009(unsigned char team, unsigned char week)
{
    unsigned char n;

    n = d_44d7_a5de[team] - 1;
    d_4f37_1390[week][0][team] = d_4f37_1390[n][0][team];
    d_4f37_1390[week][1][team] = d_4f37_1390[n][1][team];
    d_4f37_1390[n][0][team] = -32;
    d_4f37_1390[n][1][team] = -32;
    d_44d7_a5de[team]--;
}

/* board messages (the cash thresholds by division: Serie A, Serie B) */
void f_b0f1_20fc(void)
{
    unsigned char t;
    unsigned char team;
    unsigned char i;
    unsigned char a;
    unsigned char b;
    unsigned char c;
    unsigned char d;
    long low;
    long high;
    long big;
    char buf[320];

    for (t = 0; t <= d_5d51_d958 - 1; ++t) {
        team = d_3404_1d44[t];
        if (team < 255) {
            a = 0;
            b = 0;
            c = 0;
            d = 0;
            for (i = 0; i <= d_3404_4552[team] - 1; i++) {
                if (f_1646_6ae2(d_44d7_9624[team][i], -1)) {
                    if (d_5d51_d828 == 1)
                        a++;
                    else if (d_5d51_d828 == 4)
                        b++;
                    else if (d_5d51_d828 == 5)
                        c++;
                    else if (d_5d51_d828 == 7)
                        d++;
                }
            }
            if (f_1d5e_0d6a(5) == 0 && d_3404_452a[team] < 65 && a >= f_1d5e_0d6a(2) + 3) {
                sprintf(buf, "%s board message", (char far *)d_5d51_b476[team]);
                f_1646_5bcb(team, buf, "We find your current team selection somewhat questionable.");
            }
            if (f_1d5e_0d6a(5) == 0 && b >= f_1d5e_0d6a(2) + 3) {
                sprintf(buf, "%s board message", (char far *)d_5d51_b476[team]);
                f_1646_5bcb(team, buf, "We are concerned with the unrest between you and some of the players.");
            }
            if (f_1d5e_0d6a(5) == 0 && c >= f_1d5e_0d6a(2) + 3) {
                sprintf(buf, "%s board message", (char far *)d_5d51_b476[team]);
                f_1646_5bcb(team, buf, "There seems to be a conflict between some of the players and the coach.");
            }
            if (f_1d5e_0d6a(5) == 0 && d >= f_1d5e_0d6a(2) + 3) {
                sprintf(buf, "%s board message", (char far *)d_5d51_b476[team]);
                f_1646_5bcb(team, buf, "We are confused as to why you have fined some of the players. It is not helping morale.");
            }
            if (!f_1646_6971(0)) {
                if (f_1646_717d(team) == 0) {
                    low = 150000L;
                    high = 1000000L;
                } else if (f_1646_717d(team) == 1) {
                    low = 75000L;
                    high = 500000L;
                }
                big = 3000000L;
                if (f_1d5e_0d6a(5) == 0 && d_3404_4552[team] >= 19 && d_3404_3e4a[0][team] < low) {
                    sprintf(buf, "%s board message", (char far *)d_5d51_b476[team]);
                    f_1646_5bcb(team, buf, "We suggest selling players to ease our current financial situation.");
                } else if (f_1d5e_0d6a(5) == 0 && d_3404_4552[team] <= 23 && d_3404_3e4a[0][team] >= big) {
                    sprintf(buf, "%s board message", (char far *)d_5d51_b476[team]);
                    f_1646_5bcb(team, buf, "The board feel that the signing of a big-name player could be beneficial.");
                } else if (f_1d5e_0d6a(5) == 0 && d_3404_4552[team] <= 23 && d_3404_3e4a[0][team] >= high) {
                    sprintf(buf, "%s board message", (char far *)d_5d51_b476[team]);
                    f_1646_5bcb(team, buf, "There is cash available for the strengthening of our squad.");
                }
            }
        }
    }
}

/* set a win bonus (Italia: 5000 and 10,000 refused in Serie B, 500 and up before week 13) */
void f_b0f1_258b(unsigned char team, int opp)
{
    unsigned char ok;
    char buf[320];
    long bonus[7] = {0, 100, 250, 500, 1000, 5000, 10000};

    f_1646_4ba0("Win Bonus");
    sprintf(buf, " %s ", (char far *)d_5d51_b476[team]);
    f_1646_3e54(1.0, 4.0, -(d_3404_448a[team] / 16), d_3404_448a[team] % 16, 0, buf);
    sprintf(buf, "Game vs %s", f_1646_3537(opp));
    f_1646_0b2f(-7, buf);
    f_1646_0b2f(9, "Amount per player ?");
    f_1646_2fa4(12, "", "*No Bonus|\xa3" "100|\xa3" "250|\xa3" "500|\xa3" "1000|\xa3" "5000|\xa3" "10,000|");
    f_1646_3348(6);
    if (d_5d51_da0a > 0) {
        ok = 255;
        if (bonus[d_5d51_da0a] * 13 > f_1646_5ac3(team))
            ok = 0;
        else if ((d_5d51_da0a > 4 && f_1646_717d(team) > 0)
            || (d_5d51_da0a > 2 && d_5d51_da06 < 13))
            ok = 0;
        if (ok) {
            sprintf(buf, "Win bonus set at \xa3%ld", bonus[d_5d51_da0a]);
            f_1646_0b9f(buf);
            d_3404_457a[team] = d_5d51_da0a;
        } else
            f_1646_0b9f("The board refuse");
    } else {
        f_1646_0b9f("No bonus set");
        d_3404_457a[team] = 0;
    }
}

/* physio: days out for an injured player */
unsigned char f_b0f1_2786(int player)
{
    unsigned char team = d_44d7_6978[player];
    unsigned char r;
    unsigned char days[5] = {20, 18, 15, 12, 8};
    float f;
    float mult[7] = {0, 0.8, 0.9, 1.0, 1.1, 1.25, 1.5};

    f = d_3404_45a2[team] <= 4 ? days[d_3404_45a2[team]] : 5;
    f = mult[d_3404_457a[team]] * f;
    r = f;
    return f_1d5e_1308(f_1d5e_0d6a(r), f_1d5e_0d6a(r));
}

/* pay the win bonus */
void f_b0f1_2862(unsigned char team)
{
    long bonus[7] = {0, 100, 250, 500, 1000, 5000, 10000};

    d_5d51_da44 = f_1d5e_1618(d_5d51_dd98, 1);
    d_5d51_da44[7][team] += bonus[d_3404_457a[team]] * 13000;
}

void f_b0f1_28de(void)
{
    unsigned char t;

    for (t = 0; t <= 37; ++t)
        if (f_1646_2cc9(t))
            f_b0f1_2916(t);
}

/* copy a team's squad to its list and sort it */
void f_b0f1_2916(unsigned char team)
{
    unsigned char g;
    unsigned char i;
    unsigned char j;
    unsigned va;
    unsigned vb;
    int tmp;
    int a;
    int b;

    g = d_3404_4226[team] - 646;
    for (i = 0; i <= d_3404_4552[team] - 1; ++i)
        d_2414_52cc[g][i] = d_44d7_9624[team][i];
    for (i = 0; i <= d_3404_4552[team] - 2; ++i) {
        for (j = i + 1; j <= d_3404_4552[team] - 1; ++j) {
            a = d_2414_52cc[g][i];
            b = d_2414_52cc[g][j];
            va = d_2414_af3c[a].w.f3 * 1000 + d_2414_af3c[a].w.f2 * 500 + d_2414_af3c[a].w.f1 * 100 + d_2414_af3c[a].w.f6 * 50;
            vb = d_2414_af3c[b].w.f3 * 1000 + d_2414_af3c[b].w.f2 * 500 + d_2414_af3c[b].w.f1 * 100 + d_2414_af3c[b].w.f6 * 50;
            if (vb > va) {
                tmp = d_2414_52cc[g][i];
                d_2414_52cc[g][i] = d_2414_52cc[g][j];
                d_2414_52cc[g][j] = tmp;
            }
        }
    }
}

/* the penalty takers screen */
void f_b0f1_2bd1(unsigned char team)
{
    unsigned char row = d_3404_4226[team] + 0x7a;
    unsigned char k;
    unsigned char mode = 0;
    unsigned char sel = 1;
    int p;
    volatile int t;         /* volatile: the original keeps it on the stack; plain, -Oe puts it in CX */
    char buf[320];

    do {
        f_1646_4ba0("Penalty Takers");
        sprintf(buf, " %s ", (char far *)d_5d51_b476[team]);
        f_1646_3e54(1.25, 4.0, -(d_3404_448a[team] / 16), d_3404_448a[team] % 16, 0, buf);
        f_1646_3686(30.375, 7.25, 0, 5, 70, " Options");
        for (k = 0; k <= 4; k = k + 1)
            f_b0f1_346f(k, 0);
        f_1646_50c5(2, 1.25, 22.5, 1, 4, 301, "                 Done");
        f_1646_3686(1.125, 7.25, 0, 5, 77, " Name");
        f_1646_3686(15.75, 7.25, 0, 5, 77, " Name");
        f_b0f1_30c9(team);
        f_b0f1_3238(team, mode, -1);
        f_1646_545c(sel + 1, -1);
        do {
            d_5d51_da0a = f_1646_5602(-1);
            if (d_5d51_da0a == 0)
                f_b0f1_35c0();
            k = d_5d51_da0a;
            if (k >= 2 && k <= 29) {
                f_1646_545c(sel + 1, 0);
                sel = k - 1;
                f_1646_545c(sel + 1, -1);
            } else if (k == 30 && sel > 1) {
                f_b0f1_346f(0, -1);
                t = d_2414_52cc[row][sel - 1];
                d_2414_52cc[row][sel - 1] = d_2414_52cc[row][sel - 2];
                d_2414_52cc[row][sel - 2] = t;
                sel--;
                d_5d51_d62e = 1;
                f_b0f1_30c9(team);
                f_b0f1_3238(team, mode, sel);
                f_b0f1_3238(team, mode, sel + 1);
                f_1646_545c(sel + 1, -1);
                f_b0f1_346f(0, 0);
            } else if (k == 31 && d_3404_4552[team] > sel) {
                f_b0f1_346f(1, -1);
                t = d_2414_52cc[row][sel - 1];
                d_2414_52cc[row][sel - 1] = d_2414_52cc[row][sel];
                d_2414_52cc[row][sel] = t;
                sel++;
                d_5d51_d62e = 1;
                f_b0f1_30c9(team);
                f_b0f1_3238(team, mode, sel);
                f_b0f1_3238(team, mode, sel - 1);
                f_1646_545c(sel + 1, -1);
                f_b0f1_346f(1, 0);
            }
            if ((k == 33 && mode == 1) || (k == 34 && mode == 0)) {
                mode = mode == 0 ? 1 : 0;
                f_b0f1_346f(mode + 3, -1);
                f_b0f1_3238(team, mode, -1);
                f_b0f1_346f(mode + 3, 0);
            }
        } while (k != 1 && k != 32);
        if (k == 32) {
            p = d_2414_52cc[row][sel - 1];
            do
                f_a13d_4a1b(p, -1, 0);
            while (!d_5d51_d5df);
            d_5d51_d5df = 0;
        }
    } while (k != 1);
}

/* the names of the penalty takers */
void f_b0f1_30c9(unsigned char team)
{
    unsigned char i;
    unsigned char row;
    int p;
    float x;
    float y;
    char buf[320];

    row = d_3404_4226[team] + 0x7a;
    for (i = 1; i <= 26; i = i + 1) {
        x = i <= 13 ? 1.125 : 15.75;
        y = (i <= 13 ? i : i - 13) + 6.625 + 1;
        if (d_3404_4552[team] >= i) {
            p = d_2414_52cc[row][i - 1];
            sprintf(buf, " %.*s", 11, f_1646_4849(p));
            if (strcmp(buf, d_2414_0e88[d_5d51_d62e]))
                f_1646_50c5(0, x, y, 1, 14, 77, buf);
            else
                d_5d51_d62e++;
        } else
            f_1646_3686(x, y, 1, 14, 77, "");
    }
}

/* the goals or average rating column of the penalty takers (from == -1: all of it) */
void f_b0f1_3238(unsigned char team, char mode, char from)
{
    unsigned char i;
    unsigned char row;
    unsigned char last;
    float x;
    float y;
    char buf[40];
    register int p;
    unsigned char first;

    row = d_3404_4226[team] + 0x7a;
    if (from == -1) {
        strcpy(buf, mode == 0 ? " GLS" : " AV R");
        f_1646_3686(11.0, 7.25, 0, 5, 36, buf);
        f_1646_3686(25.625, 7.25, 0, 5, 36, buf);
        first = 1;
        last = 26;
    } else {
        first = from;
        last = from;
    }
    for (i = first; i <= last; i = i + 1) {
        x = i <= 13 ? 11.0 : 25.625;
        y = (i <= 13 ? i : i - 13) + 6.625 + 1;
        if (d_3404_4552[team] >= i) {
            p = d_2414_52cc[row][i - 1];
            if (mode == 0)
                sprintf(buf, "  %d", d_3c0d_0000[13][p]);
            else if (d_3c0d_0000[12][p] > 0) {
                float avg;

                d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 0);
                avg = (float)d_5d51_da4c[2][p] / d_3c0d_0000[12][p];
                sprintf(buf, " %4.2f", avg);
            } else
                strcpy(buf, " ----");
        } else
            strcpy(buf, "");
        f_1646_3686(x, y, 1, 15, 36, buf);
    }
}

/* one of the screen's five buttons */
void f_b0f1_346f(unsigned char n, char hi)
{
    register int y = n * 21 + 63;
    char far *names[10] = { "Move", "Up", "Move", "Down", "View", "Factfile", "Show", "Goals", "Show", "Av R" };

    f_1d5e_08cc(16);
    f_1d5e_08e2(244, y + 2, 314, y + 19);
    f_1d5e_08cc((hi ? 9 : 2) + 16);
    f_1d5e_08e2(242, y, 312, y + 17);
    f_1d5e_08d7(25);
    f_1d5e_0929(242, y, 312, y + 17);
    f_1646_357e(35 - strlen(names[n * 2]) * 3 + 250, y + 7, 1, names[n * 2]);
    f_1646_357e(35 - strlen(names[n * 2 + 1]) * 3 + 250, y + 15, 1, names[n * 2 + 1]);
}

/* which of the five buttons the mouse is on: sets d_5d51_da0a to 30 + its number */
void f_b0f1_35c0(void)
{
    unsigned char i;
    register unsigned y;

    for (i = 0; i <= 4; i = i + 1) {
        y = i * 21 + 63;
        if (f_1d5e_0c0f() >= 242 && f_1d5e_0c0f() <= 312 && f_1d5e_0c07() >= y && f_1d5e_0c07() <= y + 17) {
            d_5d51_da0a = i + 30;
            i = 4;
        }
    }
}

/* sets d_5d51_d84c from the player's place among his club's penalty takers */
void f_b0f1_3629(int player)
{
    unsigned char i = 0;
    unsigned char row = d_3404_4226[d_44d7_0000[18][player]] + 0x7a;

    if (f_1646_5de5(player)) {
        while (d_2414_52cc[row][i] != player)
            i++;
        d_5d51_d84c = 50 - i;
    } else
        d_5d51_d84c = f_1d5e_0d6a(20);
}

/* adds a player at the end of the team's penalty takers */
void f_b0f1_36ad(int player, unsigned char team)
{
    unsigned char row = d_3404_4226[team] + 0x7a;

    d_2414_52cc[row][d_3404_4552[team] - 1] = player;
}

/* takes a player out of the team's penalty takers */
void f_b0f1_3704(int player, unsigned char team)
{
    unsigned char row;
    unsigned char i;

    row = d_3404_4226[team] + 0x7a;
    for (i = 0; d_2414_52cc[row][i] != player; i++)
        ;
    for (; d_3404_4552[team] - 1 >= i; i++)
        d_2414_52cc[row][i] = d_2414_52cc[row][i + 1];
}

/* commentary: a penalty appeal turned down */
void f_b0f1_37af(unsigned char team)
{
    char msg[320];
    char name[40];
    char c;

    if (d_5d51_d8e0 + d_5d51_d8de > 0) {
        f_76ea_3183(team);
        if (team < 38)
            strcpy(name, f_1646_4849(d_5d51_d9f0));
        else
            sprintf(name, "No.%d", d_5d51_d858 + (d_5d51_d858 == 12) + 1);
        sprintf(msg, "%s %s", name, f_b0f1_3a62(0));
        f_7c1d_0c36(team, msg);
        f_1d5e_0dbd(100);
        if (f_1d5e_0d6a(20) == 0) {
            f_7c1d_0c36(team, "The ref consults his linesman");
            f_1d5e_0dbd(100);
            f_7c1d_0c36(team, "No penalty");
            f_1d5e_0dbd(100);
        } else {
            c = f_1d5e_0d6a(5);
            if (c == 0) {
                f_7c1d_0c36(team, "The ref waves play on");
                f_1d5e_0dbd(100);
            } else if (c == 1) {
                f_7c1d_0c36(team, "Penalty not given");
                f_1d5e_0dbd(100);
            } else if (c == 2) {
                f_7c1d_0c36(team, "No penalty");
                f_1d5e_0dbd(100);
            } else if (c == 3) {
                f_7c1d_0c36(team, "The ref just turns away");
                f_1d5e_0dbd(100);
            } else {
                f_7c1d_0c36(team, "Nothing given");
                f_1d5e_0dbd(100);
            }
        }
        f_7c1d_0c36(d_5d51_d942, d_2414_40d4);
    }
}

/* commentary: a penalty given */
void f_b0f1_3900(unsigned char team)
{
    char msg[320];
    char name[40];
    char c;

    if (d_5d51_d8e0 + d_5d51_d8de > 0) {
        f_76ea_3183(team);
        if (team < 38)
            strcpy(name, f_1646_4849(d_5d51_d9f0));
        else
            sprintf(name, "No.%d", d_5d51_d858 + (d_5d51_d858 == 12) + 1);
        sprintf(msg, "%s %s", name, f_b0f1_3a62(1));
        f_7c1d_0c36(team, msg);
        f_1d5e_0dbd(100);
        if (f_1d5e_0d6a(15) == 0) {
            f_7c1d_0c36(team, "The ref consults his linesman");
            f_1d5e_0dbd(100);
            f_7c1d_0c36(team, "It's a penalty!");
            f_1d5e_0dbd(100);
        } else {
            c = f_1d5e_0d6a(5);
            if (c == 0) {
                f_7c1d_0c36(team, "The ref gives a penalty!");
                f_1d5e_0dbd(100);
            } else if (c == 1) {
                f_7c1d_0c36(team, "The ref points to the spot!");
                f_1d5e_0dbd(100);
            } else if (c == 2) {
                f_7c1d_0c36(team, "Penalty!");
                f_1d5e_0dbd(100);
            } else if (c == 3) {
                f_7c1d_0c36(team, "Penalty given!");
                f_1d5e_0dbd(100);
            } else {
                f_7c1d_0c36(team, "Penalty kick!");
                f_1d5e_0dbd(100);
            }
        }
    }
    f_7c1d_1218(team, team == d_5d51_d942 ? d_5d51_d85c : d_5d51_d85a, 0);
}

/* how the player went down in the area (given: the penalty was given) */
char far *f_b0f1_3a62(char given)
{
    char far *s = f_1d5e_0efc();
    unsigned char r = f_1d5e_0d6a(7);

    if (r == 0)
        strcpy(s, "goes down in the area");
    else if (r == 1 && (given == 0 || f_1d5e_0d6a(3) == 0))
        strcpy(s, "dives in the area");
    else if (r == 2 && (given == 0 || f_1d5e_0d6a(3) == 0))
        strcpy(s, "falls in the area");
    else if (r == 3)
        strcpy(s, "tripped in the area");
    else if (r == 4)
        strcpy(s, "hacked in the box");
    else if (r == 5)
        strcpy(s, "pushed in the area");
    else
        strcpy(s, "fouled in the box");
    return s;
}

void f_b0f1_3b19(unsigned char team)
{
    char ok;
    unsigned char opp;
    char line[320];
    char name[40];

    if (d_5d51_d8e0 + d_5d51_d8de > 0) {
        ok = 1;
        if (f_1d5e_0d6a(f_1d5e_136a(d_5d51_da04 * 5 + 20, 40)) == 0) {
            opp = team == d_5d51_d942 ? d_5d51_d940 : d_5d51_d942;
            f_b0f1_4128(opp);
        }
        f_76ea_3183(team);
        if (team < 38)
            strcpy(name, f_1646_4849(d_5d51_d9f0));
        else
            sprintf(name, "No.%d", d_5d51_d858 + (d_5d51_d858 == 12) + 1);
        sprintf(line, "%s %s", name, f_b0f1_409c());
        f_7c1d_0c36(team, line);
        f_1d5e_0dbd(100);
        if ((d_5d51_d562 == 0 && team == d_5d51_d940) || (d_5d51_d561 == 0 && team == d_5d51_d942))
            ok = 0;
        if (f_1d5e_0d6a(60) == 0 && ok == 1) {
            f_7c1d_0c36(team, "He rounds the 'keeper");
            f_1d5e_0dbd(100);
            f_7c1d_0c36(team, "But somehow misses!!!");
            f_1d5e_0dbd(100);
        } else if (f_1d5e_0d6a(20) == 0 && ok == 1) {
            if (f_1d5e_0d6a(10) == 0) {
                f_7c1d_0c36(team, "He chips it over the 'keeper");
                f_1d5e_0dbd(100);
                if (f_1d5e_0d6a(2) == 0) {
                    f_7c1d_0c36(team, "But it comes back off the bar!");
                    f_1d5e_0dbd(100);
                } else {
                    f_7c1d_0c36(team, "But it goes over!");
                    f_1d5e_0dbd(100);
                }
            } else if (f_1d5e_0d6a(2) == 0) {
                f_7c1d_0c36(team, "He rounds the 'keeper");
                f_1d5e_0dbd(100);
                f_7c1d_0c36(team, "But it's cleared off the line!");
                f_1d5e_0dbd(100);
            } else {
                f_7c1d_0c36(team, "He slides it past the 'keeper");
                f_1d5e_0dbd(100);
                if (f_1d5e_0d6a(2) == 0) {
                    f_7c1d_0c36(team, "But it hits an upright!");
                    f_1d5e_0dbd(100);
                } else {
                    f_7c1d_0c36(team, "But it goes wide!");
                    f_1d5e_0dbd(100);
                }
            }
        } else {
            char c;

            c = f_1d5e_0d6a(11);
            if (c == 0 && ok == 1) {
                f_7c1d_0c36(team, "But his shot is saved!");
                f_1d5e_0dbd(100);
            } else if (c == 1 && ok == 1) {
                f_7c1d_0c36(team, "But his shot is smothered!");
                f_1d5e_0dbd(100);
            } else if (c == 2) {
                f_7c1d_0c36(team, "But he blazes it over!");
                f_1d5e_0dbd(100);
            } else if (c == 3) {
                f_7c1d_0c36(team, "But his shot lacks power!");
                f_1d5e_0dbd(100);
            } else if (c == 4) {
                f_7c1d_0c36(team, "But his finish is poor!");
                f_1d5e_0dbd(100);
            } else if (c == 5) {
                f_7c1d_0c36(team, "But he misses the target!");
                f_1d5e_0dbd(100);
            } else if (c == 6) {
                f_7c1d_0c36(team, "But he shoots wide!");
                f_1d5e_0dbd(100);
            } else if (c == 7) {
                f_7c1d_0c36(team, "But he's tackled!");
                f_1d5e_0dbd(100);
            } else if (c == 8) {
                f_7c1d_0c36(team, "But he squanders the chance!");
                f_1d5e_0dbd(100);
            } else if (c == 9) {
                f_7c1d_0c36(team, "But he wastes the chance!");
                f_1d5e_0dbd(100);
            } else {
                f_7c1d_0c36(team, "But he misses!");
                f_1d5e_0dbd(100);
            }
        }
        f_7c1d_0c36(d_5d51_d942, d_2414_40d4);
    }
}

void f_b0f1_3e09(unsigned char team)
{
    unsigned char c;
    char ok;
    unsigned char opp;
    char line[320];
    char name[40];

    f_76ea_3183(team);
    if (d_5d51_d8e0 + d_5d51_d8de > 0) {
        ok = 1;
        if (f_1d5e_0d6a(f_1d5e_136a(d_5d51_da04 * 5 + 20, 40)) == 0) {
            opp = team == d_5d51_d942 ? d_5d51_d940 : d_5d51_d942;
            f_b0f1_4128(opp);
        }
        if (team < 38)
            strcpy(name, f_1646_4849(d_5d51_d9f0));
        else
            sprintf(name, "No.%d", d_5d51_d858 + (d_5d51_d858 >= 12) + 1);
        sprintf(line, "%s %s", name, f_b0f1_409c());
        f_7c1d_0c36(team, line);
        f_1d5e_0dbd(100);
        if ((d_5d51_d562 == 0 && team == d_5d51_d940) || (d_5d51_d561 == 0 && team == d_5d51_d942))
            ok = 0;
        c = f_1d5e_0d6a(11);
        if (c <= 3 && ok == 1) {
            if (f_1d5e_0d6a(10) == 0) {
                f_7c1d_0c36(team, "He chips it over the 'keeper");
                f_1d5e_0dbd(100);
                f_7c1d_0c36(team, "And it's in!");
                f_1d5e_0dbd(100);
            } else if (f_1d5e_0d6a(2) == 0) {
                f_7c1d_0c36(team, "He rounds the 'keeper");
                f_1d5e_0dbd(100);
                f_7c1d_0c36(team, "And scores!");
                f_1d5e_0dbd(100);
            } else {
                f_7c1d_0c36(team, "He slides it past the 'keeper");
                f_1d5e_0dbd(100);
                f_7c1d_0c36(team, "And it's in!");
                f_1d5e_0dbd(100);
            }
        } else {
            sprintf(line, "Goal for %s!", f_1646_3537(team == d_5d51_d942 ? d_5d51_d8f4 : d_5d51_d8f2));
            f_7c1d_0c36(team, line);
            f_1d5e_0dbd(100);
            if (c == 4) {
                f_7c1d_0c36(team, "He finds the net");
                f_1d5e_0dbd(100);
            } else if (c == 5) {
                f_7c1d_0c36(team, "He finishes in style!");
                f_1d5e_0dbd(100);
            } else if (c == 6) {
                f_7c1d_0c36(team, "He finishes clinically!");
                f_1d5e_0dbd(100);
            } else if (c == 7) {
                f_7c1d_0c36(team, "His finish is superb!");
                f_1d5e_0dbd(100);
            } else if (c == 8) {
                f_7c1d_0c36(team, "He scores easily!");
                f_1d5e_0dbd(100);
            } else if (c == 9) {
                f_7c1d_0c36(team, "He finishes well!");
                f_1d5e_0dbd(100);
            } else {
                f_7c1d_0c36(team, "He scores!");
                f_1d5e_0dbd(100);
            }
        }
        f_7c1d_0c36(d_5d51_d942, d_2414_40d4);
    }
}

char far *f_b0f1_409c(void)
{
    char far *s;
    char c;

    s = f_1d5e_0efc();
    if (f_1d5e_0d6a(20) == 0)
        strcpy(s, "must surely score");
    else {
        c = f_1d5e_0d6a(6);
        if (c == 0)
            strcpy(s, "through on goal");
        else if (c == 1)
            strcpy(s, "with a good chance");
        else if (c == 2)
            strcpy(s, "clean through");
        else if (c == 3)
            strcpy(s, "has a real chance");
        else if (c == 4)
            strcpy(s, "clear of the defence");
        else
            strcpy(s, "races clear");
    }
    return s;
}

void f_b0f1_4128(unsigned char team)
{
    char buf[320];
    unsigned char n;

    n = f_b0f1_42e9(team);
    if (team < 38)
        sprintf(buf, "Bad backpass by %s!", f_1646_4849(d_3404_0e34[team][n]));
    else
        sprintf(buf, "Bad backpass by no.%d", n + (n >= 12) + 1);
    f_7c1d_0c36(team, buf);
    f_1d5e_0dbd(100);
}

void f_b0f1_41c6(unsigned char team)
{
    unsigned char c;
    char buf[320];

    if (f_1d5e_0d6a(2) == 0)
        f_7c1d_0c36(team, "But it's disallowed!");
    else
        f_7c1d_0c36(team, "But it won't count!");
    f_1d5e_0dbd(100);
    c = f_1d5e_0d6a(9);
    if (c == 0)
        strcpy(buf, "The ref saw an infringement");
    else if (c == 1)
        strcpy(buf, "The ref saw a handball");
    else if (c == 2)
        strcpy(buf, "The linesman saw an infringement");
    else if (c == 3)
        strcpy(buf, "The linesman flagged for offside");
    else if (c == 4)
        strcpy(buf, "The ref saw a foul");
    else if (c == 5)
        strcpy(buf, "The ref didn't play the advantage");
    else if (c == 6)
        strcpy(buf, "The linesman saw a foul");
    else if (c == 7)
        strcpy(buf, "The linesman saw a handball");
    else if (c == 8)
        strcpy(buf, "The reason isn't clear");
    f_7c1d_0c36(team, buf);
    f_1d5e_0dbd(100);
    if ((c == 5 || c == 8) && f_1d5e_0d6a(2) == 0) {
        f_7c1d_0c36(team, "He waves away the protests");
        f_1d5e_0dbd(100);
    }
}

unsigned char f_b0f1_42e9(unsigned char team)
{
    unsigned char best, i, max, v, p;

    max = 0;
    for (i = 0; i <= 15; i = i + 1) {
        if (d_3404_0dce[team == d_5d51_d940][i] < 2) {
            p = d_3404_1334[team][0][i];
            if (p > 1) {
                if (f_1646_68af(p))
                    v = 100;
                else if (f_1646_68d1(p))
                    v = 80;
                else
                    v = 50;
                if (f_1646_694f(p))
                    v += 10;
                v = v + f_1d5e_0d6a(20) - f_1d5e_0d6a(20);
                if (v > max) {
                    best = i;
                    max = v;
                }
            }
        }
    }
    return best;
}

int f_b0f1_43eb(unsigned char c)
{
    int r, best;
    unsigned char i, n;

    n = c == 0 ? 5 : 1;
    for (i = 1; i <= n; i = i + 1) {
        do
            r = f_1d5e_0d6a(447);
        while (d_56d9_4c08[r] != c);
        if (i == 1 || d_56d9_525f[r] > d_56d9_525f[best])
            best = r;
    }
    return best;
}

int f_b0f1_445d(unsigned char c)
{
    int r, best;
    unsigned char i, n;

    n = c == 0 ? 5 : 1;
    for (i = 1; i <= n; i = i + 1) {
        do
            r = f_1d5e_0d6a(1176);
        while (d_56d9_4dc7[r] != c);
        if (i == 1 || d_56d9_541e[r] > d_56d9_541e[best])
            best = r;
    }
    return best;
}

void f_b0f1_44cf(unsigned player, unsigned char team)
{
    long fee;

    fee = f_1646_0da1(f_1646_0204(player, -1), 0);
    if (f_b0f1_4f0a(player, team) && f_1646_5ac3(team) >= fee && f_b0f1_4786() == 0
        && d_5d51_d408 % 20 != player % 20) {
        f_8539_375d(player, team);
        if (d_5d51_d5ae) {
            f_b0f1_4f55(player, team, fee);
            d_5d51_d55b = -1;
        }
    }
}

void f_b0f1_4572(unsigned player, unsigned char team)
{
    long fee;
    char done;
    unsigned char club;
    char buf[320];

    done = 0;
    club = d_44d7_0000[18][player] + 116;
    do {
        f_1646_4ba0("Approach Player");
        f_1646_459b(1.0, 4.0, team);
        fee = f_1646_0da1(f_1646_0204(player, -1), 0);
        sprintf(buf, "The fee would be \xa3%ld", fee);
        f_1646_0b2f(7, buf);
        sprintf(buf, "Approach %s ?", f_1646_470f(player));
        f_1646_0b2f(9, buf);
        f_1646_2fa4(12, "", "*Exit|Approach To Buy|");
        f_1646_3348(1);
        if (d_5d51_da0a == 0)
            done = 1;
        else if (d_5d51_da0a == 1) {
            if (f_b0f1_4786() || d_5d51_d408 % 20 == player % 20)
                f_1646_0b9f("A work permit cannot be obtained");
            else if (f_1646_5ac3(team) < fee)
                f_1646_0b9f("We cannot afford the fee");
            else if (f_b0f1_4f0a(player, team) == 0)
                f_1646_0b9f("He isn't interested");
            else {
                f_1646_0b9f("He agrees to join");
                sprintf(buf, "The fee is \xa3%ld", fee);
                f_1646_0b9f(buf);
                f_8539_375d(player, team);
                if (d_5d51_d5ae) {
                    f_b0f1_4f55(player, team, fee);
                    d_5d51_d55b = -1;
                    done = 1;
                } else {
                    sprintf(buf, "He stays in %s", d_4f37_0000[club]);
                    f_8539_4451(6, buf);
                }
            }
        }
    } while (done == 0);
}

char f_b0f1_4786(void)
{
    if (d_5d51_da1a > 990)
        return -1;
    return 0;
}

char f_b0f1_4799(void)
{
    if (d_5d51_da18 + 1000 > 1490)
        return -1;
    return 0;
}

void f_b0f1_47af(void)
{
    unsigned i;

    for (i = 1000; i <= d_5d51_da18 + 999; i++) {
        d_44d7_0000[15][i] = d_44d7_0000[0][i] + f_1d5e_0d6a(25) - f_1d5e_0d6a(25);
        d_44d7_0000[21][i] = 100;
        d_44d7_0000[23][i] = 1;
        d_3c0d_0000[0][i] = 0;
        d_3c0d_0000[1][i] = 0;
        d_3c0d_0000[2][i] = 0;
        d_3c0d_0000[3][i] = 0;
        d_3c0d_0000[4][i] = 0;
        d_3c0d_0000[12][i] = 0;
        d_3c0d_0000[13][i] = 0;
        d_3c0d_0000[23][i] = 0;
        d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 1);
        d_5d51_da38[0][i] = 0xff;
        d_5d51_da38[1][i] = 0xff;
        d_5d51_da38[3][i] = 0;
        d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 1);
        d_5d51_da4c[0][i] = 0;
        d_5d51_da4c[2][i] = 0;
        if (d_44d7_0000[20][i] == 0 && f_1d5e_0d6a(10) == 0)
            f_9915_1095(i);
    }
}

void f_b0f1_48ea(void)
{
    unsigned i;

    for (i = 1000; i <= d_5d51_da18 + 999; i++) {
        float f;
        unsigned char j, g, n;

        if (d_44d7_0000[20][i] == 0) {
            if (f_1d5e_0d6a(5) > 0) {
                f = (d_44d7_0000[15][i] + f_1d5e_0d6a(15) - f_1d5e_0d6a(15)) / 50.0 + 4.0;
                g = f_1d5e_136a(f_1d5e_1308((unsigned char)f, 1), 10);
                n = 0;
                if (d_2414_af3c[i].w.f0 == 0)
                    for (j = 1; j <= 4; j = j + 1)
                        if (f_1d5e_0d6a(d_44d7_0000[7][i]) > f_1d5e_0d6a(d_2414_af3c[i].w.f3 == 1 ? 20 : 40)
                            && f_1d5e_0d6a(4) == 0)
                            n++;
                d_3c0d_0000[0][i]++;
                d_3c0d_0000[1][i] += n;
                if (f_1d5e_0d6a(d_44d7_0000[11][i]) > f_1d5e_0d6a(40))
                    d_3c0d_0000[2][i] = d_3c0d_0000[2][i] + 5;
                d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 1);
                d_5d51_da4c[0][i] += g;
                d_5d51_da4c[2][i] += g;
                d_3c0d_0000[12][i]++;
                d_3c0d_0000[13][i] += n;
                if (d_3c0d_0000[3][i] > g || d_3c0d_0000[3][i] == 0)
                    d_3c0d_0000[3][i] = g;
                if (d_3c0d_0000[4][i] < g)
                    d_3c0d_0000[4][i] = g;
            }
            if (f_1d5e_0d6a(20) == 0)
                d_44d7_0000[15][i] = d_44d7_0000[0][i] + f_1d5e_0d6a(25) - f_1d5e_0d6a(25);
            if (f_1d5e_0d6a(20) == 0)
                f_9915_1095(i);
        } else {
            d_44d7_0000[20][i] = d_44d7_0000[20][i] - 1;
            if (d_44d7_0000[20][i] == 0)
                f_9915_168a(i);
        }
        if (d_2414_af3c[i].w.f9 == 1 && d_5d51_da04 > 1 && f_1d5e_0d6a(50) == 0)
            d_2414_af3c[i].w.f9 = 0;
        else if (d_2414_af3c[i].w.f9 == 0 && d_5d51_da04 > 1 && f_1d5e_0d6a(50) == 0)
            d_2414_af3c[i].w.f9 = 1;
    }
}

void f_b0f1_4c49(void)
{
    unsigned n;
    unsigned char kind;
    unsigned char want;
    long fee;
    char buf[320];
    unsigned p;

    n = 0;
    if (d_5d51_da04 > 1) {
        while (d_5d51_d5fa > 0 && n < 1000) {
            p = f_1d5e_0d6a(d_5d51_da1a);
            if (f_b0f1_4799() == 0 && f_b0f1_4e9f(p)) {
                d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 0);
                kind = d_5d51_da38[9][p];
                fee = f_1646_0da1(f_1646_0204(p, -1), 0);
                if (kind != 0) {
                    want = kind;
                    sprintf(buf, "%s's %s has returned to a club in his home country %s for a fee of %ld.",
                            (char far *)d_5d51_b476[d_44d7_0000[18][p]], f_1646_470f(p), d_4f37_0000[want], fee);
                    f_1646_5bcb(d_44d7_0000[18][p], "Transfer News", buf);
                } else {
                    want = f_1d5e_0d6a(2) + 73;
                    sprintf(buf, "%s's %s has joined a club in %s for a fee of %ld.",
                            (char far *)d_5d51_b476[d_44d7_0000[18][p]], f_1646_470f(p), d_4f37_0000[want], fee);
                    f_1646_5bcb(d_44d7_0000[18][p], "Transfer News", buf);
                }
                d_3404_3e4a[0][d_44d7_0000[18][p]] += fee;
                d_3404_3e4a[2][d_44d7_0000[18][p]] += fee;
                f_b0f1_5032(p, want, fee);
            }
            n++;
        }
    }
}

void f_b0f1_4e24(void)
{
    unsigned p;

    if (d_5d51_d55c != 0 && d_5d51_da04 == 1)
        return;
    for (p = 1000; p <= d_5d51_da18 + 999; p++)
        if ((long)d_44d7_0000[17][p] > f_1d5e_0d6a(4) + 32)
            f_a7f0_0592(p, 255, f_1d5e_0d6a(10) == 0 ? 1 : 0);
}

char f_b0f1_4e9f(int p)
{
    char r = 0;

    if ((d_3404_691c[p] == 0 || d_3404_691c[p] / 100 == d_5d51_da04) &&
        d_44d7_0000[17][p] > 30 &&
        d_44d7_0000[0][p] < (d_5d51_da38[9][p] == 0 ? 120 : 150))
        r = -1;
    return r;
}

char f_b0f1_4f0a(int p, unsigned char c)
{
    char r = 0;

    if (f_1646_2cfd(c) >= f_1646_2dce(p) - 4)
        r = -1;
    return r;
}

void f_b0f1_4f55(int p, unsigned char c, long fee)
{
    int q;

    q = d_5d51_da1a;
    f_8539_1978(p, -1);
    f_b0f1_509b(p, q);
    d_5d51_da1a++;
    d_3c0d_0000[0][q] = 0;
    d_3c0d_0000[1][q] = 0;
    d_3c0d_0000[2][q] = 0;
    d_3c0d_0000[3][q] = 0;
    d_3c0d_0000[4][q] = 0;
    d_3c0d_0000[12][q] = 0;
    d_3c0d_0000[13][q] = 0;
    d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 1);
    d_5d51_da4c[0][q] = 0;
    d_5d51_da4c[2][q] = 0;
    f_8539_4508(q, c, d_44d7_0000[18][q], fee, 0);
    f_b0f1_509b(d_5d51_da18 + 999, p);
    d_5d51_da18--;
    d_5d51_d5fa++;
}

void f_b0f1_5032(int p, unsigned char c, long fee)
{
    int q;

    q = d_5d51_da18 + 1000;
    f_8539_1978(p, -1);
    f_b0f1_509b(p, q);
    d_5d51_da18++;
    f_8539_4508(q, c + 140, d_44d7_0000[18][q], fee, 0);
    f_b0f1_509b(d_5d51_da1a - 1, p);
    d_5d51_da1a--;
    d_5d51_d5fa--;
}

void f_b0f1_509b(unsigned src, unsigned dst)
{
    FILE *fp;
    unsigned char i;

    d_2414_af3c[dst].w.f0 = d_2414_af3c[src].w.f0;
    d_2414_af3c[dst].w.f1 = d_2414_af3c[src].w.f1;
    d_2414_af3c[dst].w.f2 = d_2414_af3c[src].w.f2;
    d_2414_af3c[dst].w.f3 = d_2414_af3c[src].w.f3;
    d_2414_af3c[dst].w.f4 = d_2414_af3c[src].w.f4;
    d_2414_af3c[dst].w.f5 = d_2414_af3c[src].w.f5;
    d_2414_af3c[dst].w.f6 = d_2414_af3c[src].w.f6;
    d_2414_af3c[dst].w.f7 = d_2414_af3c[src].w.f7;
    d_2414_af3c[dst].w.f8 = d_2414_af3c[src].w.f8;
    d_2414_af3c[dst].w.f9 = d_2414_af3c[src].w.f9;
    d_2414_af3c[dst].w.f10 = d_2414_af3c[src].w.f10;
    d_2414_af3c[dst].w.f11 = d_2414_af3c[src].w.f11;
    d_2414_af3c[dst].w.f12 = d_2414_af3c[src].w.f12;
    d_2414_af3c[dst].w.f13 = d_2414_af3c[src].w.f13;
    d_2414_af3c[dst].w.f14 = d_2414_af3c[src].w.f14;
    d_2414_af3c[dst].w.f15 = d_2414_af3c[src].w.f15;
    d_2414_af3c[dst].w.f16 = d_2414_af3c[src].w.f16;
    d_2414_af3c[dst].w.f17 = d_2414_af3c[src].w.f17;
    d_2414_af3c[dst].w.f18 = d_2414_af3c[src].w.f18;
    d_2414_af3c[dst].w.f19 = d_2414_af3c[src].w.f19;
    d_2414_af3c[dst].w.f20 = d_2414_af3c[src].w.f20;
    d_2414_af3c[dst].w.f21 = d_2414_af3c[src].w.f21;
    d_2414_af3c[dst].w.f22 = d_2414_af3c[src].w.f22;
    d_2414_af3c[dst].w.f23 = d_2414_af3c[src].w.f23;
    d_2414_af3c[dst].w.f24 = d_2414_af3c[src].w.f24;
    d_2414_af3c[dst].w.f25 = d_2414_af3c[src].w.f25;
    d_2414_af3c[dst].w.f26 = d_2414_af3c[src].w.f26;
    d_2414_af3c[dst].w.f27 = d_2414_af3c[src].w.f27;
    d_2414_af3c[dst].w.f28 = d_2414_af3c[src].w.f28;
    d_2414_af3c[dst].w.f29 = d_2414_af3c[src].w.f29;
    d_2414_af3c[dst].w.f30 = d_2414_af3c[src].w.f30;
    d_2414_af3c[dst].w.f31 = d_2414_af3c[src].w.f31;
    for (i = 0; i <= 23; i++)
        d_44d7_0000[i][dst] = d_44d7_0000[i][src];
    for (i = 0; i <= 23; i++)
        d_3c0d_0000[i][dst] = d_3c0d_0000[i][src];
    d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 1);
    for (i = 0; i <= 9; i++)
        d_5d51_da38[i][dst] = d_5d51_da38[i][src];
    for (i = 0; i <= 3; i++)
        d_3404_51ac[i][dst] = d_3404_51ac[i][src];
    d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 1);
    for (i = 0; i <= 4; i++)
        d_5d51_da4c[i][dst] = d_5d51_da4c[i][src];
    d_5d51_da58 = f_1d5e_1618(d_5d51_dda2, 1);
    d_5d51_da58[dst] = d_5d51_da58[src];
    f_1d5e_1a24(2);
    fp = fopen(d_2414_0050, "rb+");
    fseek(fp, (long)src * 133, 0);
    fread(d_2414_321e, 1, 133, fp);
    fseek(fp, (long)dst * 133, 0);
    fwrite(d_2414_321e, 1, 133, fp);
    fclose(fp);
}

char f_b0f1_5906(int p)
{
    unsigned char k;

    if (!f_1646_5dff(p)) {
        d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 0);
        k = d_5d51_da38[9][p];
        if (k != 0)
            return -1;
    }
    return 0;
}

unsigned char f_b0f1_594e(int team, unsigned char w, unsigned char n)
{
    unsigned char i;
    unsigned char found;
    unsigned char least;
    unsigned char limit;
    int p;

    least = 232;
    if (f_1646_2833(w, n) || f_1646_28e4(w, n) || f_1646_297b(w, n))
        limit = 4;
    else if (f_1646_258b(w) || f_1646_2674(w))
        limit = 3;
    else if (f_1646_2646(w) || f_1646_2a0c(w, n))
        limit = 2;
    else if (f_1646_2ba4(w)) {
        if (d_5d51_d401[n] == 0 || d_5d51_d401[n] == 1)
            limit = 3;
        else
            limit = 2;
    } else if (w <= 12)
        limit = 100;
    d_5d51_d5ed = 0;
    for (i = 1; i <= 16; i = i + 1) {
        p = d_3404_0e32[team][i];
        if (f_b0f1_5906(p)) {
            d_5d51_d5ed++;
            if (d_44d7_0000[15][p] < least) {
                found = i;
                least = d_44d7_0000[15][p];
            }
        }
    }
    return d_5d51_d5ed > limit ? found : 0;
}

void f_b0f1_5aa5(unsigned team, unsigned char w, unsigned char n)
{
    unsigned char i;

    if (f_1646_2cc9(team) == 0)
        while ((i = f_b0f1_594e(team, w, n)) > 0)
            f_9915_138e(d_3404_0e32[team][i], 51, 1);
}

void f_b0f1_5b01(unsigned team)
{
    unsigned char i;
    int p;

    if (f_1646_2cc9(team) == 0 && team < 38)
        for (i = 0; i <= d_3404_4552[team] - 1; i = i + 1) {
            p = d_44d7_9624[team][i];
            if (d_44d7_0000[19][p] == 51)
                f_9915_168a(p);
        }
}

void f_b0f1_5b78(unsigned char team)
{
    unsigned char choice;
    unsigned char n;
    unsigned i;

    do {
        float avg;
        char buf[320];
        int list[15];

        f_1646_6097();
        f_1646_4ba0("Players loaned out");
        sprintf(buf, " %s ", (char far *)d_5d51_b476[team]);
        f_1646_3e54(1.25, 4.0, -(d_3404_448a[team] / 16), d_3404_448a[team] % 16, 0, buf);
        f_1646_3686(1.125, 7.25, 1, 2, 84, " Player");
        f_1646_3686(11.875, 7.25, 1, 2, 72, " On loan to");
        f_1646_3686(21.125, 7.25, 1, 2, 24, " AP");
        f_1646_3686(24.375, 7.25, 1, 2, 24, " GL");
        f_1646_3686(27.625, 7.25, 1, 2, 36, " AV R");
        f_1646_3686(32.375, 7.25, 1, 2, 54, " Back");
        f_1646_60a7();
        f_1646_50c5(2, 1.25, 22.5, 1, 4, 301, "                 Done");
        f_1646_6097();
        n = 0;
        for (i = 0; i <= d_5d51_da1a - 1; i++) {
            if (d_3c0d_0000[7][i] == team) {
                sprintf(buf, " %s", f_1646_4849(i));
                f_1646_50c5(0, 1.125, n + 8.75, 1, n % 2 == 0 ? 3 : 15, 84, buf);
                sprintf(buf, " %s", (char far *)d_5d51_b476[d_44d7_0000[18][i]]);
                f_1646_3686(11.875, n + 8.75, 1, 4, 72, buf);
                sprintf(buf, " %d", d_3c0d_0000[12][i]);
                f_1646_3686(21.125, n + 8.75, 1, 12, 24, buf);
                sprintf(buf, " %d", d_3c0d_0000[13][i]);
                f_1646_3686(24.375, n + 8.75, 1, 12, 24, buf);
                if (d_3c0d_0000[12][i] > 0) {
                    d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 0);
                    avg = (float)d_5d51_da4c[2][i] / d_3c0d_0000[12][i];
                    sprintf(buf, " %4.2f", avg);
                } else
                    strcpy(buf, " ----");
                f_1646_3686(27.625, n + 8.75, 1, 12, 36, buf);
                strcpy(buf, "E.O.S.");
                f_1646_3686(32.375, n + 8.75, 1, 12, 54, buf);
                list[n] = i;
                n++;
                if (n == 13)
                    i = d_5d51_da1a - 1;
            }
        }
        for (; n < 13; n++) {
            f_1646_3686(1.125, n + 8.75, 1, n % 2 == 0 ? 3 : 15, 84, "");
            f_1646_3686(11.875, n + 8.75, 1, 4, 72, "");
            f_1646_3686(21.125, n + 8.75, 1, 12, 24, "");
            f_1646_3686(24.375, n + 8.75, 1, 12, 24, "");
            f_1646_3686(27.625, n + 8.75, 1, 12, 36, "");
            f_1646_3686(32.375, n + 8.75, 1, 12, 54, "");
        }
        f_1646_60a7();
        do {
            choice = f_1646_5602(-1);
            if (choice >= 2) {
                i = list[choice - 2];
                do {
                    f_a13d_4a1b(i, -1, -1);
                    f_8539_4fbd(i, d_5d51_d9ba);
                } while (!d_5d51_d5df);
                d_5d51_d5df = 0;
            }
        } while (choice == 0);
    } while (choice > 1);
}

void f_b0f1_62ac(void)
{
    unsigned char a, b, c, up;
    unsigned char i;

    for (i = 0; i <= 17; i++) {
        if (d_3404_44da[i] < 16) {
            a = d_3404_4eda[i];
            b = d_3404_4f02[i];
            c = d_3404_4f2a[i];
            up = 0;
            if (d_3404_44da[i] == 13 && a < 6
                || d_3404_44da[i] == 14 && a < 6 && (a + b + c) / 3 < 3
                || d_3404_44da[i] == 15 && a < 6 && (a + b + c) / 3 < 2)
                up = 1;
            d_3404_44da[i] += up;
        }
    }
}

char far *f_b0f1_63b6(int player)
{
    char far *s;
    unsigned char apps, goals;
    unsigned pts;

    s = f_1d5e_0efc();
    apps = d_3c0d_0000[12][player];
    goals = d_3c0d_0000[13][player];
    d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 0);
    pts = d_5d51_da4c[2][player];
    strcpy(s, "");
    if (apps < 8)
        sprintf(s, " He's disappointed he didn't play %s games.", apps == 0 ? "any" : "more");
    else {
        float av, gpg, r;
        av = pts / apps;
        gpg = goals / apps;
        r = (1 + gpg) * av;
        if (r < 5.0)
            strcpy(s, " He did not enjoy his loan spell.");
        else if (r >= 6.0 && r <= 7.0)
            strcpy(s, " He enjoyed his loan spell.");
        else if (r >= 7.0)
            strcpy(s, " He enjoyed his loan spell greatly.");
    }
    return s;
}

void f_b0f1_6516(void)
{
    char buf[320];

    f_1646_4ba0("");
    f_1d5e_08cc(16);
    f_1d5e_08e2(24, 19, 304, 189);
    f_1d5e_08cc(30);
    f_1d5e_08e2(20, 15, 300, 185);
    d_5d51_d944 = 15;
    f_1646_015c(24, 19, 296, 43);
    strcpy(buf, "Championship Manager Italia");
    f_1646_357e(136 - strlen(buf) * 3 + 32, 30, 1, buf);
    strcpy(buf, "Game Environment");
    f_1646_357e(136 - strlen(buf) * 3 + 32, 38, 1, buf);
    d_5d51_d944 = 8;
    f_1646_015c(24, 161, 296, 181);
    f_1d5e_08d7(16);
    f_1d5e_0929(26, 172, 294, 179);
    strcpy(buf, "Progress");
    f_1646_357e(136 - strlen(buf) * 3 + 32, 170, 1, buf);
    memset(d_5d51_dab0, 100, 10);
    f_b0f1_66b9(-1);
}

void f_b0f1_66b9(char stage)
{
    unsigned char i;

    for (i = 0; i <= 9; i = i + 1)
        f_b0f1_66f1(i, i == stage ? -1 : 0);
}

void f_b0f1_66f1(unsigned char n, char on)
{
    char far *labels[10][2] = {
        "Preparing", "Disk", "Creating", "Player Data",
        "Creating", "Staff Data", "Creating", "Euro Data", "Creating", "Club Records",
        "Creating", "Fixture List", "Player", "Retirements", "Creating", "Squads", "Computer",
        "Intelligence", "Transfer", "List"
    };
    int x, y;

    if (d_5d51_dab0[n] == on)
        return;
    if (on)
        d_5d51_d944 = 9;
    else
        d_5d51_d944 = 12;
    if (n <= 4) {
        x = 28;
        y = n * 22 + 49;
    } else {
        x = 163;
        y = (n - 5) * 22 + 49;
    }
    f_1646_015c(x, y, x + 129, y + 18);
    f_1646_357e(x + (64 - strlen(labels[n][0]) * 3) + 8, y + 9, 1, labels[n][0]);
    f_1646_357e(x + (64 - strlen(labels[n][1]) * 3) + 8, y + 16, 1, labels[n][1]);
    d_5d51_dab0[n] = on;
}

void f_b0f1_6835(char stage, unsigned i, unsigned n)
{
    float f;
    int w;

    if (i > 0) {
        f = i * 266.0;
        f = f / n;
        w = f;
        f_1d5e_08cc(17);
        f_1d5e_08e2(27, 173, w + 27, 178);
    } else {
        f_1d5e_08cc(24);
        f_1d5e_08e2(27, 173, 293, 178);
    }
}

void f_b0f1_68b8(void)
{
    f_b0f1_74c7("Mouse commands");
    f_1646_357e(38, 56, 5, "No mouse driver has been detected. A mouse is");
    f_1646_357e(38, 64, 5, "recommended, but you can use the keyboard  as");
    f_1646_357e(38, 72, 5, "follows : -");
    f_1646_357e(38, 84, 6, "  Up Arrow    - Move mouse up");
    f_1646_357e(38, 92, 6, "  Down Arrow  - Move mouse down");
    f_1646_357e(38, 100, 6, "  Left Arrow  - Move mouse left");
    f_1646_357e(38, 108, 6, "  Right Arrow - Move mouse right");
    f_1646_357e(38, 116, 6, "  Spacebar    - Mousebutton");
    f_1646_357e(38, 128, 5, "To print-out a  screen, press  the  Spacebar");
    f_1646_357e(38, 136, 5, "and the ALT key simultaneously.");
    f_1646_58a8(0);
}

void f_b0f1_69cc(void)
{
    f_b0f1_74c7("Start-up Options");
    f_1646_357e(38, 56, 1, "Please select from the following options : -");
    f_1646_357e(38, 68, 6, "New Game");
    f_1646_357e(38, 78, 5, "Initializes  a completely new game but takes");
    f_1646_357e(38, 86, 5, "about 15 mins depending on the speed of your");
    f_1646_357e(38, 94, 5, "machine.");
    f_1646_357e(38, 106, 6, "Continue Season");
    f_1646_357e(38, 116, 5, "Loads in  a previously saved game for you to");
    f_1646_357e(38, 124, 5, "continue.");
    f_1646_357e(38, 136, 6, "Quick Start");
    f_1646_357e(38, 146, 5, "Loads in the saved game supplied (one player");
    f_1646_357e(38, 154, 5, "game, Milan) but  allows  you to enter  your");
    f_1646_357e(38, 162, 5, "own manager name.");
    f_1646_58a8(0);
}

void f_b0f1_6b12(void)
{
    f_b0f1_74c7("Updating Options");
    f_1646_357e(38, 56, 1, "Updating the game  environment is  a lengthy");
    f_1646_357e(38, 64, 1, "process.  Please  select from  the following");
    f_1646_357e(38, 72, 1, "options : -");
    f_1646_357e(38, 84, 6, "Pause For News");
    f_1646_357e(38, 94, 5, "Pauses  and waits for a mouse click when any");
    f_1646_357e(38, 102, 5, "news items appear.");
    f_1646_357e(38, 114, 6, "Don't Pause");
    f_1646_357e(38, 124, 5, "Continues automatically without pausing  for");
    f_1646_357e(38, 132, 5, "news items. This quickens the process.");
    f_1646_357e(38, 144, 6, "Save Game");
    f_1646_357e(38, 154, 5, "Saves the current state of play, for you  to");
    f_1646_357e(38, 162, 5, "continue and update at a later date.");
    f_1646_58a8(0);
}

void f_b0f1_6c58(void)
{
    unsigned char i;

    for (i = 0; i <= 49; i++)
        d_2414_9618[i].player = -1;
}

void f_b0f1_6c80(unsigned char n)
{
    unsigned char page;
    unsigned char i;
    unsigned char line;
    unsigned char key;
    unsigned char last;
    int player;
    char buf[320];

    if (d_2414_9618[0].player > -1) {
        do {
            page = n / 15 + 1;
            if (n % 15 == 0 || d_5d51_d596) {
                f_1646_4ba0("Transfer News");
                sprintf(buf, " Week %d ", f_1646_6aa9(d_5d51_da06));
                f_1646_3e54(1.25, 3.5, 1, 8, 0, buf);
                f_1646_3686(1.125, 6.0, 1, 2, 94, " Player");
                f_1646_3686(13.125, 6.0, 1, 2, 81, " From");
                f_1646_3686(23.5, 6.0, 1, 2, 81, " To");
                f_1646_3686(33.875, 6.0, 1, 2, 42, " Fee");
                if (d_5d51_d5e6) {
                    f_1646_50c5(2, 1.25, 22.5, 1, 12, 53, " - Scr");
                    f_1646_50c5(2, 32.25, 22.5, 1, 12, 53, " Scr +");
                    f_1646_50c5(2, 8.5, 22.5, 1, 4, 185, "          Done");
                }
                d_5d51_d596 = 0;
                n = (page - 1) * 15;
            }
            line = n % 15 + 1;
            last = n / 15 * 15 + 14;
            for (i = n; i <= last; line++, i = i + 1) {
                if (d_2414_9618[i].player > -1) {
                    sprintf(buf, " %s", f_1646_4849(d_2414_9618[i].player));
                    if (d_5d51_d5e6)
                        f_1646_50c5(0, 1.125, line + 6.125, 1, line % 2 == 0 ? 8 : 14, 94, buf);
                    else
                        f_1646_3686(1.125, line + 6.125, 1, line % 2 == 0 ? 8 : 14, 94, buf);
                    if (d_2414_9618[i].from < 38)
                        sprintf(buf, " %s", (char far *)d_5d51_b476[d_2414_9618[i].from]);
                    else
                        sprintf(buf, " <%s>", d_4f37_0000[d_2414_9618[i].from - 140]);
                    f_1646_3686(13.125, line + 6.125, 1, 4, 81, buf);
                    if (d_2414_9618[i].to < 38)
                        sprintf(buf, " %s", (char far *)d_5d51_b476[d_2414_9618[i].to]);
                    else
                        sprintf(buf, " <%s>", d_4f37_0000[d_2414_9618[i].to - 140]);
                    f_1646_3686(23.5, line + 6.125, 1, 11, 81, buf);
                    if (d_2414_9618[i].fee == 0)
                        strcpy(buf, " Free");
                    else if (d_2414_9618[i].fee == 1)
                        strcpy(buf, " Loan");
                    else
                        sprintf(buf, " %dK", (int)(d_2414_9618[i].fee / 1000));
                    f_1646_3686(33.875, line + 6.125, 1, 15, 42, buf);
                }
            }
            if (d_5d51_d5e6) {
                do {
                    key = f_1646_5602(-1);
                    if ((key == 1 && page == 1) || (key == 2 && d_2414_9618[page * 15].player == -1))
                        key = 0;
                } while (key == 0);
                if (key == 1)
                    n -= 15;
                else if (key == 2)
                    n += 15;
                else if (key >= 4) {
                    player = d_2414_9618[(page - 1) * 15 + key - 4].player;
                    do {
                        f_a13d_4a1b(player, -1, -1);
                        f_8539_4fbd(player, d_5d51_d9ba);
                    } while (!d_5d51_d5df);
                    d_5d51_d5df = 0;
                }
            } else
                key = 3;
        } while (key != 3);
    } else
        f_1646_0bf2("No transfer news this week");
}

void f_b0f1_7336(void)
{
    f_b0f1_74c7("Developed By Intelek");
    f_1646_357e(38, 56, 5, "Intelek  is  the  team  formed   around  the");
    f_1646_357e(38, 64, 5, "original developers of Domark's Championship");
    f_1646_357e(38, 72, 5, "Manager.  We  aim  to  write  software  that");
    f_1646_357e(38, 80, 5, "provides lasting entertainment.");
    f_1646_357e(38, 92, 5, "If you would like to make any comments about");
    f_1646_357e(38, 100, 5, "Championship Manager Italia, please write to");
    f_1646_357e(38, 108, 5, "us at this address : -");
    f_1646_357e(54, 120, 6, "Intelek");
    f_1646_357e(54, 128, 6, "P.O. Box 1738");
    f_1646_357e(54, 136, 6, "Bournemouth");
    f_1646_357e(54, 144, 6, "England");
    f_1646_357e(54, 152, 6, "BH4 8YN");
    f_1646_357e(38, 164, 5, "Thanks to everyone who wrote in last time -");
    f_1646_357e(38, 172, 5, "your response has been overwhelming. We are");
    f_1646_357e(38, 180, 5, "currently replying to all your letters.");
    f_1646_58a8(0);
}

void f_b0f1_74c7(char far *title)
{
    char buf[320];

    f_1646_4ba0("");
    f_1d5e_08cc(16);
    f_1d5e_08e2(24, 19, 304, 189);
    f_1d5e_08cc(26);
    f_1d5e_08e2(20, 15, 300, 185);
    d_5d51_d944 = 12;
    f_1646_015c(24, 19, 296, 43);
    strcpy(buf, "Championship Manager Italia");
    f_1646_357e(136 - strlen(buf) * 3 + 32, 30, 1, buf);
    f_1646_357e(136 - strlen(title) * 3 + 32, 38, 1, title);
}

void f_b0f1_75b5(void)
{
    char a[80];
    char b[80];
    unsigned i;

    if (d_5d51_d55c) {
        for (i = 0; i <= d_5d51_da1a - 1; i++) {
            d_2414_af3c[i].a.f30 = 0;
            strcpy(a, f_1646_470f(i));
            strcpy(b, f_1646_4919(d_3404_4226[d_44d7_0000[18][i]], 0));
            if (stricmp(a, b) == 0)
                d_2414_af3c[i].a.f30 = 1;
        }
    }
}

void f_b0f1_7660(void)
{
    unsigned char n;
    unsigned i;
    unsigned best;

    if (d_5d51_da04 == 1 && d_5d51_d55c)
        return;
    n = 0;
    for (i = 0; i <= d_5d51_da1a - 1; i++)
        n += d_2414_af3c[i].a.f28;
    while (n < 8) {
        best = 0;
        for (i = 0; i <= d_5d51_da1a - 1; i++)
            if (d_44d7_0000[0][i] >= 180 && d_44d7_0000[0][i] > d_44d7_0000[0][best]
                && !d_2414_af3c[i].a.f28 && d_44d7_0000[17][i] < 25)
                best = i;
        if (best > 0) {
            d_2414_af3c[best].a.f28 = 1;
            n++;
        } else
            n = 8;
    }
}
