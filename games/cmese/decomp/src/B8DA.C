/* @at b8da:0000 */
/* @data 69da:7176 */
/* @module */

/* Overlay b8da (CM93's B628.C): player values, derby and result reactions, physio
 * treatment, club news, friendlies, win bonuses and board messages, penalty takers and the
 * penalty commentary, shot and goal commentary, approaching players, transfer news, loans,
 * the new-game progress window, the options and help pages and the credits. Its data is
 * the function-local initialisers (value tables, menu labels, bonus tables), then its
 * literal pool; jump optimisation is off from f_b8da_389a on. */
#include <stdio.h>
#include <string.h>
#include <mem.h>

/* the functions, in the reverse order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
int f_b8da_0000(int p, unsigned char team);
char f_b8da_01ba(unsigned char team);
void f_b8da_027a(unsigned a, unsigned b, unsigned char g1, unsigned char g2);
unsigned char f_b8da_0904(unsigned char team);
void f_b8da_0994(int player);
void f_b8da_0c4c(int p);
void f_b8da_0d08(void);
void f_b8da_0e92(void);
void f_b8da_0ed4(unsigned char team);
void f_b8da_13b5(unsigned char n, char lit);
void f_b8da_14de(void);
void f_b8da_1548(int team, unsigned char week, int far *opp, unsigned char far *home, unsigned char far *slot);
void f_b8da_1622(unsigned char team, unsigned char week);
char f_b8da_1954(int club, int team, unsigned char week);
void f_b8da_1aae(unsigned char team, unsigned char week);
void f_b8da_1bfe(unsigned char team, char c);
void f_b8da_1cf2(unsigned char team, int a, int b);
void f_b8da_1d56(unsigned char team, unsigned char week);
void f_b8da_1df1(void);
void f_b8da_229c(unsigned char team, int opp);
unsigned char f_b8da_2494(int player);
void f_b8da_2575(unsigned char team);
void f_b8da_25ed(void);
void f_b8da_2626(unsigned char team);
void f_b8da_286a(unsigned char team);
void f_b8da_2c3f(unsigned char team);
void f_b8da_2d7e(unsigned char team, char mode, char from);
void f_b8da_2f7e(unsigned char n, char hi);
void f_b8da_30b3(void);
void f_b8da_311d(int player);
void f_b8da_31a2(int player, unsigned char team);
void f_b8da_31f2(int player, unsigned char team);
void f_b8da_3289(unsigned char team);
void f_b8da_33c9(unsigned char team);
char far *f_b8da_351b(char given);
void f_b8da_35cd(unsigned char team);
void f_b8da_389a(unsigned char team);
char far *f_b8da_3b12(void);
void f_b8da_3b9b(unsigned char team);
void f_b8da_3c33(unsigned char team);
unsigned char f_b8da_3d49(unsigned char team);
int f_b8da_3e41(unsigned char c);
int f_b8da_3ebf(unsigned char c);
void f_b8da_3f3d(unsigned player, unsigned char team);
void f_b8da_3fe4(unsigned player, unsigned char team);
char f_b8da_4206(void);
char f_b8da_421d(void);
void f_b8da_4237(void);
void f_b8da_4391(void);
void f_b8da_4704(void);
void f_b8da_49b3(void);
char f_b8da_4a37(int p);
char f_b8da_4ad7(int p, unsigned char c);
void f_b8da_4b26(int p, unsigned char c, long fee);
void f_b8da_4c01(int p, unsigned char c, long fee);
void f_b8da_4c64(unsigned src, unsigned dst);
char f_b8da_54e0(int p);
unsigned char f_b8da_5529(int team);
void f_b8da_55af(unsigned team);
void f_b8da_5643(unsigned team);
void f_b8da_56ff(unsigned char team);
void f_b8da_5d03(void);
char f_b8da_5e02(int player);
char far *f_b8da_5f44(int player);
void f_b8da_609f(void);
void f_b8da_61ff(unsigned char stage);
void f_b8da_6239(unsigned char n, char on);
void f_b8da_6369(char stage, unsigned i, unsigned n);
void f_b8da_63e5(void);
void f_b8da_64b8(void);
void f_b8da_65b1(void);
void f_b8da_66aa(void);
void f_b8da_66d3(unsigned char n);
void f_b8da_6c48(void);
void f_b8da_6e6a(char far *title);
void f_b8da_6f34(void);
void f_b8da_6ff1(void);

struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
int f_2162_134e(int a, int b);
int f_2162_13ba(int a, int b);
long f_2162_0da1(long n);
void far *f_2162_1634(int handle, int page);
void f_1a70_0adb(int line, char far *s);
void f_1a70_0b46(char far *s);
void f_1a70_0b80(char far *s);
char f_1a70_2855(int w, int n);
char f_1a70_2a20(int a, int b);
char f_1a70_2bc7(int x);
float f_1a70_2bff(int x);
void f_1a70_2eaa(int n, char far *title, char far *items);
void f_1a70_3226(int last);
void f_1a70_3d0c(float x, float y, int bg, int fg, int w, char far *s);
int f_1a70_4513(int team);
char far *f_1a70_4592(int player);
char far *f_1a70_4739(int player);
void f_1a70_4a41(char far *title);
void f_1a70_598c(int team, char far *title, char far *text);
float f_1a70_68b6(int x);
void f_7dd6_002a(int team);
void f_8c32_10fd(int team, int amount);
void f_8c32_150f(int team, int delta);
void f_8c32_1592(int team, int b, int c);
void f_9c01_1720(int team, char far *s);
void f_a83a_1344(char all);
extern int far d_4512_471c[];
extern unsigned char far d_28da_ad40[];
extern unsigned char far d_4512_2390[];
extern unsigned char far d_4512_3042[][650];
extern unsigned char far d_4512_0000[][82];
extern unsigned char far d_4512_00a4[];
extern unsigned char far d_4512_0148[];
extern unsigned char far d_4512_023e[];
extern unsigned char far d_4512_0290[];
extern char far d_536d_83b9[][82][5];
extern char far d_536d_82dd[];
extern char far d_536d_615d[];
extern unsigned char far d_3668_0000[][1860];
extern unsigned char far d_28da_2a78[][1860];
extern int far d_28da_10f0[][26];
extern unsigned char far d_5dbf_0996[][460];
extern char near *d_69da_b1fc[];
extern char d_69da_ddf4;
extern char d_69da_dddc;
extern char d_69da_ddbc;
extern int d_69da_dd76;
extern int d_69da_dd1e;
extern int d_69da_daea;
extern int d_69da_dada;
extern int d_69da_da62;
extern int d_69da_da60;
extern int d_69da_da4c;
extern int d_69da_d9bc;
extern int d_69da_d9ba;
extern int d_69da_d996;
extern int d_69da_d992;
extern struct flags_w far d_4512_bdc8[];
extern int (far *d_69da_dfa6)[1860];
extern int d_69da_dfec;
void f_2162_0897();
void f_2162_08a6();
void f_2162_08b5(int x1, int y1, int x2, int y2);
void f_2162_090f(int x1, int y1, int x2, int y2);
int f_2162_0c13(void);
int f_2162_0c1f(void);
char far *f_1a70_3404(int x);
void f_1a70_344b(int x, int y, int colour, char far *s);
void f_1a70_3554(float x, float y, int bg, int fg, int w, char far *s);
char far *f_1a70_48f5(int division);
char far *f_1a70_4983(int division, char full);
void f_1a70_4ede(int a, float x, float y, int c, int d, int e, char far *s);
void f_1a70_525f(int n, char swap);
int f_1a70_53de(int a);
void f_1a70_5641(int team);
void f_1a70_5e32(void);
void f_1a70_5e46(void);
void f_7827_4b4d(int team);
extern unsigned char d_69da_df91;
extern float d_69da_de4d;
extern float d_69da_de45;
extern int d_69da_d9dc;
extern char far * far d_5dbf_0000[];
extern unsigned char far d_5dbf_1076[];
extern int far d_5dbf_1290[][2][98];
long f_1a70_588f(int team);
char f_1a70_6783(int x);
char f_1a70_68f0(int player, char c);
extern int d_69da_db76;
extern int d_69da_da4a;
extern long (far *d_69da_dfae)[80];
extern int d_69da_dff0;
extern long far d_4512_1e90[][80];
extern int far d_4512_1a30[];
extern unsigned char far d_4512_01ec[];
extern unsigned char far d_4512_02e2[];
char far *f_1a70_46c1(int player);
char f_1a70_5b76(int player);
void f_2162_0dfb(int ticks);
char far *f_2162_0f38(void);
void f_829f_2e96(int team);
void f_8773_0a64(int team, char far *s);
void f_8773_1018(int team, int chance, int shootout);
void f_aac9_42ed(int player, int team, char buy);
extern char d_69da_ddbe;
extern int d_69da_dd70;
extern int d_69da_db56;
extern int d_69da_db4a;
extern int d_69da_db48;
extern int d_69da_db46;
extern int d_69da_dac4;
extern int d_69da_dac2;
extern int d_69da_d9ae;
long f_1a70_01d9(int p, int n);
long f_1a70_0cb8(long v, char c);
void f_1a70_442b(float x, float y, int team);
char f_1a70_66a9(int x);
char f_1a70_66cf(int x);
char f_1a70_675d(int x);
void f_9007_366e(int player, int club);
void f_9007_4276(int colour, char far *s);
void f_a330_1014(int p);
void f_a330_15f1(int p);
extern unsigned char far d_4512_4726[][3][14];
extern char d_69da_de3e;
extern char d_69da_de38;
extern char d_69da_de37;
extern char d_69da_ddeb;
extern int d_69da_dab0;
extern int d_69da_daae;
extern int d_69da_d99a;
extern int d_69da_d990;
extern int d_69da_d98e;
extern unsigned char (far *d_69da_dfba)[1860];
extern int d_69da_dff6;
char f_1a70_27c8(int w, int n);
int f_1a70_2ccc(int x);
char f_1a70_5b94(int player);
void f_2162_19f6();
void f_9007_430d(int player, int to, int from, long fee, unsigned char kind);
void f_a330_12ed(int p, int a, int b);
void f_b085_08ac(int player, int team, char c);
extern unsigned char far d_5dbf_10c6[];
extern int far d_3668_ae60[][1860];
extern int far d_3668_cb70[];
extern char near *d_69da_b344[];
extern char d_69da_de3d;
extern unsigned char d_69da_ddb0;
extern long far *d_69da_df9a;
extern int d_69da_dfe6;
void f_1a70_0137(int x1, int y1, int x2, int y2);
int f_9007_29b8(int a, int b);
void f_9007_4da1(int player, int a);
extern int d_69da_d9e8;
extern int d_69da_da5e;
extern char d_69da_dfda[];
char far *f_1a70_4793(int manager, char full);
void f_1a70_5688(int a);
int f_1a70_68a4(int x);
struct news { int player; unsigned char from, to; long fee; };
extern char d_69da_de03;
extern char d_69da_ddb7;
extern unsigned char far d_4512_2616[];
extern int far d_28da_0000[];
extern int far d_536d_4fd5[][26];
extern char far d_536d_86ed[][40];
extern char far d_536d_624d[];
extern int far d_4512_549a[][14];
extern unsigned char far d_4512_5d98[][14];
extern unsigned char far d_62e5_51ea[];
extern unsigned char far d_62e5_53ae[];
extern unsigned char far d_62e5_592e[];
extern unsigned char far d_62e5_5af2[];
char f_1a70_268e(int w, int n);
char f_1a70_2737(int w, int n);
extern int far d_4512_5498[][14];
extern unsigned char far d_4512_15c8[];
extern unsigned char far d_4512_161a[];
extern unsigned char far d_4512_166c[];
extern int far d_4512_9e64[][2][22];
extern int (far *d_69da_dfb2)[100];
extern char far d_536d_a49d[];
extern char far d_536d_703b[];
extern struct news far d_536d_1ae0[];


int f_b8da_0000(int p, unsigned char team)
{
    long v;
    unsigned char a[20] = {20, 20, 20, 20, 20, 30, 30, 30, 30, 35, 40, 60, 80, 100, 125, 150, 175, 200, 200, 200};
    unsigned char b[5] = {20, 50, 80, 100, 125};
    float c[4] = {1.0, 0.8, 0.65, 0.6};

    v = a[f_2162_134e(f_2162_13ba(d_4512_3042[0][p] / 10, 19), 0)] * 2000L;
    if (f_b8da_01ba(team))
        v = v + 250000L;
    else
        v = v + b[d_4512_0148[team] - 13] * 1000L;
    v = v / 3;
    v = v * c[team / 20] * 1.0;
    v = v + d_4512_3042[0][p] * 35L;
    v = v / 1000;
    if (v < 100)
        v = v / 5 * 5;
    else
        v = v / 10 * 10;
    return v;
}

char f_b8da_01ba(unsigned char team)
{
    char buf[40];

    strcpy(buf, d_69da_b1fc[team]);
    if (strstr(buf, "Arsenal") || strstr(buf, "Tottenham") || strstr(buf, "Leeds")
        || strstr(buf, "Man Utd") || strstr(buf, "Aston Villa") || strstr(buf, "Liverpool")
        || strstr(buf, "Everton"))
        return -1;
    return 0;
}

void f_b8da_027a(unsigned a, unsigned b, unsigned char g1, unsigned char g2)
{
    float f = 10;
    float m;
    unsigned char r;
    char buf[100];

    if (g1 >= g2) {
        m = g1 == g2 ? 0.5 : 1.0;
        f += a == d_69da_da62;
        f += (g1 - g2) * 0.5;
        if (b < 80) {
            f += (3 - b / 20) / 2;
            f += (d_4512_0148[b] - d_4512_0148[a]) / 3 * m;
            if (a / 20 == b / 20) {
                f += (f_1a70_4513(a) - f_1a70_4513(b)) / 8 * (f_2162_13ba(d_69da_d9ba, 10) / 10) * m;
                f += (f_b8da_0904(b) - f_b8da_0904(a)) / 10 * m;
            } else {
                f += (a / 20 - b / 20) * 3 * m;
                f += (f_b8da_0904(b) - f_b8da_0904(a)) / 20 * m;
            }
            if (d_69da_dada > 24)
                f += (d_69da_dada - 24) / 4 * m;
        } else
            f += (d_5dbf_0996[0][b - 80] - f_1a70_2bff(a)) * m;
        if (g1 > g2) {
            r = f_2162_134e(f, 10);
            if (d_4512_0290[a] > 0)
                f_b8da_2575(a);
        } else
            r = f_2162_134e(f_2162_13ba(f, 14), 8);
    } else if (g1 < g2) {
        f -= (g2 - g1) * 0.5;
        if (b < 80) {
            f -= (d_4512_0148[a] - d_4512_0148[b]) / 3;
            if (a / 20 == b / 20) {
                f -= (f_1a70_4513(b) - f_1a70_4513(a)) / 8 * (f_2162_13ba(d_69da_d9ba, 10) / 10);
                f -= (f_b8da_0904(a) - f_b8da_0904(b)) / 10;
            } else {
                f -= (b / 20 - a / 20) * 3;
                f -= (f_b8da_0904(a) - f_b8da_0904(b)) / 20;
            }
            if (d_69da_dada > 24)
                f -= (d_69da_dada - 24) / 4;
        } else
            f -= f_1a70_2bff(a) - d_5dbf_0996[0][b - 80];
        r = f_2162_134e(f_2162_13ba(f, 10), 1);
    }
    if (f_1a70_2bc7(a)) {
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
            if (d_69da_dada > 24)
                strcat(buf, " derby");
            strcat(buf, " result.");
            if (f_1a70_2bc7(a))
                f_9c01_1720(a, buf);
        }
    }
    if (a < 80) {
        f_8c32_150f(a, (r - 10) * 1.5);
        f_8c32_10fd(a, r * 300 / f_1a70_68b6(a));
        d_4512_0000[0][a] = f_2162_134e(1, f_2162_13ba(16, r + d_4512_0000[0][a] - 10));
        if (r >= 13 && d_69da_d996 > 10 && f_1a70_2855(d_69da_d996, d_69da_d9bc + 1) == 0) {
            if (r > d_4512_471c[4] || d_4512_471c[0] == -1) {
                d_4512_471c[0] = a;
                d_4512_471c[1] = b;
                strcpy(d_536d_82dd, a == d_69da_da60 ? "H" : "A");
                if (f_1a70_2a20(d_69da_d996, d_69da_d9bc + 1))
                    strcpy(d_536d_82dd, "N");
                d_4512_471c[2] = g1;
                if (d_69da_dddc)
                    d_4512_471c[2] = -d_4512_471c[2];
                d_4512_471c[3] = g2;
                d_4512_471c[4] = r;
                f_8c32_1592(d_69da_d996, d_69da_d9bc + 1, d_69da_daea);
                strcat(d_536d_82dd, d_536d_615d);
            }
        }
    }
}

unsigned char f_b8da_0904(unsigned char team)
{
    unsigned char i;
    unsigned char n = 0;
    char buf[40];
    char c;

    sprintf(buf, "%s%s", d_536d_83b9[0][team], d_536d_83b9[1][team]);
    for (i = 1; i <= strlen(buf); i = i + 1) {
        c = buf[i - 1];
        if (c == 'W')
            n += 3;
        else if (c == 'D' || c == 'X')
            n++;
    }
    return n;
}

void f_b8da_0994(int player)
{
    unsigned char team = *(d_28da_2a78[18] + player);
    char text[320];
    char s[40];

    do {
        d_69da_ddf4 = 0;
        f_1a70_4a41("Rehabilitation");
        sprintf(text, " %s injury ", f_1a70_4739(player));
        f_1a70_3d0c(1, 4, -(d_4512_00a4[team] / 16), d_4512_00a4[team] % 16, 0, text);
        if (d_4512_bdc8[player].f25)
            strcpy(s, "Hi-Tec");
        else if (d_4512_bdc8[player].f26)
            strcpy(s, "Intermediate");
        else if (d_4512_bdc8[player].f27)
            strcpy(s, "Basic");
        else
            strcpy(s, "None");
        sprintf(text, "Current treatment : %s", s);
        f_1a70_0adb(-7, text);
        f_1a70_0adb(9, "Select new level of treatment");
        f_1a70_2eaa(12, "", "*Exit|View Costs|Last Finances|Hi-Tec Level|Intermed Level|Basic Level|No treatment|");
        do {
            d_69da_ddbc = -1;
            f_1a70_3226(6);
            d_69da_dd1e = d_69da_d992;
            if (d_69da_dd1e == 1) {
                f_1a70_0b46("Hi-Tec costs 10000 p/w");
                f_1a70_0b46("Intermediate costs 5000 p/w");
                if (!d_4512_bdc8[player].f20)
                    f_1a70_0b46("Basic costs 3000 p/w");
                else
                    f_1a70_0b46("Basic is covered by insurance");
                d_69da_ddbc = 0;
            } else if (d_69da_dd1e == 2) {
                f_7dd6_002a(team);
                d_69da_ddf4 = -1;
            } else if (d_69da_dd1e >= 3 && d_69da_dd1e <= 5) {
                d_4512_bdc8[player].f25 = 0;
                d_4512_bdc8[player].f26 = 0;
                d_4512_bdc8[player].f27 = 0;
                if (d_69da_dd1e == 3) {
                    f_1a70_0b46("Hi-tec treatment selected");
                    d_4512_bdc8[player].f25 = 1;
                } else if (d_69da_dd1e == 4) {
                    f_1a70_0b46("Intermediate treatment selected");
                    d_4512_bdc8[player].f26 = 1;
                } else {
                    f_1a70_0b46("Basic treatment selected");
                    d_4512_bdc8[player].f27 = 1;
                }
                d_69da_ddf4 = -1;
            } else if (d_69da_dd1e == 6) {
                f_1a70_0b46("No treatment selected");
                d_4512_bdc8[player].f25 = 0;
                d_4512_bdc8[player].f26 = 0;
                d_4512_bdc8[player].f27 = 0;
                d_69da_ddf4 = -1;
            }
        } while (!d_69da_ddbc);
    } while (d_69da_ddf4);
}

void f_b8da_0c4c(int p)
{
    if (d_28da_2a78[23][p] == 1) {
        if (d_28da_2a78[18][p] / 20 == 0) {
            if (f_2162_0da1(3) == 0)
                d_4512_bdc8[p].f25 = 1;
            else
                d_4512_bdc8[p].f26 = 1;
        } else if (d_4512_bdc8[p].f20 || f_2162_0da1(3) > 0)
            d_4512_bdc8[p].f27 = 1;
    } else if (d_4512_bdc8[p].f20)
        d_4512_bdc8[p].f27 = 1;
}

void f_b8da_0d08(void)
{
    unsigned char t;

    for (t = 0; t <= 79; t = t + 1) {
        if (f_1a70_2bc7(t)) {
            unsigned char i;
            int p;
            int best_p;
            float v;
            float best;
            char title[80];
            char text[320];

            best = 0;
            for (i = 0; i <= d_4512_023e[t] - 1; i = i + 1) {
                p = d_28da_10f0[t][i];
                if (d_3668_0000[12][p] > 20) {
                    d_69da_dfa6 = f_2162_1634(d_69da_dfec, 0);
                    v = d_69da_dfa6[2][p] / d_3668_0000[12][p];
                    v = v * (d_3668_0000[13][p] / 100 + 1);
                    if (v > best) {
                        best_p = p;
                        best = v;
                    }
                }
            }
            sprintf(title, "%s Club News", (char far *)d_69da_b1fc[t]);
            sprintf(text, "%s has been voted the supporter's club player of the year.", f_1a70_4592(best_p));
            f_1a70_598c(t, title, text);
        }
    }
}

void f_b8da_0e92(void)
{
    if (d_69da_da4c > 0) {
        f_a83a_1344(0);
        if (d_69da_dd76 > -1)
            f_b8da_0ed4(d_4512_2390[d_69da_dd76]);
    } else
        f_1a70_0b80("Not available on demo");
}

/* Friendlies: the friendly fixtures of weeks 1-7, and the buttons to arrange them. */
void f_b8da_0ed4(unsigned char team)
{
    unsigned char i;
    unsigned char home;
    unsigned char slot;
    unsigned char week;
    unsigned char c;
    int opp;
    char buf[320];

    week = f_2162_134e(d_69da_d996, 2);
    do {
        f_1a70_5e32();
        f_1a70_4a41("Friendlies");
        sprintf(buf, " %s ", (char far *)d_69da_b1fc[team]);
        f_1a70_3d0c(1.25, 4.0, -(d_4512_00a4[team] / 16), d_4512_00a4[team] % 16, 0, buf);
        f_1a70_5e46();
        for (c = 0; c <= 3; ++c)
            f_b8da_13b5(c, 0);
        f_1a70_4ede(2, 1.25, 22.5, 1, 4, 301, "                 Done");
        f_1a70_5e32();
        f_1a70_3554(1.125, 10.25, 1, 2, 30, " Wk");
        f_1a70_3554(5.125, 10.25, 1, 2, 120, " Opponents");
        f_1a70_3554(20.375, 10.25, 1, 2, 112, " Of");
        f_1a70_3554(34.625, 10.25, 1, 2, 36, " Ven");
        for (i = 1; i <= 7; ++i) {
            sprintf(buf, " %s", f_1a70_48f5(i / 2 + 1));
            f_1a70_4ede(0, 1.125, i + 11.375, 1, 12, 30, buf);
            if (i + 1 < d_69da_d996)
                f_1a70_5641(i + 1);
            f_b8da_1548(team, i + 1, &opp, &home, &slot);
            if (opp > -1) {
                sprintf(buf, " %s", f_1a70_3404(opp));
                f_1a70_3554(5.125, i + 11.375, 1, 14, 120, buf);
                if (opp < 80)
                    sprintf(buf, " %s", f_1a70_4983(opp / 20 + 1, 0));
                else
                    sprintf(buf, " %s", d_5dbf_0000[d_5dbf_1076[opp]]);
                f_1a70_3554(20.375, i + 11.375, 1, 4, 112, buf);
                strcpy(buf, home == 0 ? " Home" : " Away");
                f_1a70_3554(34.625, i + 11.375, 0, 6, 36, buf);
            } else {
                f_1a70_3554(5.125, i + 11.375, 1, 14, 120, " No Fixture");
                f_1a70_3554(20.375, i + 11.375, 1, 4, 112, " -");
                f_1a70_3554(34.625, i + 11.375, 0, 6, 36, " -");
            }
        }
        f_1a70_3554(1.125, 19.875, 1, 4, 304, " Season starts week five ");
        f_1a70_5e46();
        f_1a70_525f(week, -1);
        do {
            d_69da_d992 = f_1a70_53de(0);
            if (d_69da_d992 == 0)
                f_b8da_14de();
            c = d_69da_d992;
            if (c >= 2 && c <= 8) {
                if (c != week) {
                    f_1a70_525f(week, 0);
                    week = c;
                    f_1a70_525f(week, -1);
                }
            } else if (c >= 9) {
                f_b8da_1548(team, week, &opp, &home, &slot);
                if (opp == -1 && c >= 10)
                    c = 0;
            }
        } while (c == 0 || c >= 2 && c <= 8);
        if (c == 9) {
            if (opp == -1)
                f_b8da_1622(team, week);
            else
                f_1a70_0b80("You already have a fixture");
        } else if (c == 10)
            f_b8da_1aae(team, week);
        else if (c == 11) {
            if (opp < 80)
                f_7827_4b4d(opp);
            else
                f_1a70_0b80("No information available");
        } else if (c == 12)
            f_b8da_1bfe(team, week);
    } while (c != 1);
}

/* One of the four buttons under the fixtures, lit or not. */
void f_b8da_13b5(unsigned char n, char lit)
{
    int x = n * 77 + 8;
    char far *label[8] = {"Select", "Opponents", "Select", "Venue",
                             "Opponents", "Details", "Cancel", "Fixture"};

    f_2162_0897(16);
    f_2162_08b5(x + 2, 52, x + 75, 72);
    f_2162_0897((lit ? 3 : 15) + 16);
    f_2162_08b5(x, 50, x + 73, 70);
    f_2162_08a6(19);
    f_2162_090f(x, 50, x + 73, 70);
    f_1a70_344b(x + (36 - strlen(label[n * 2]) * 3) + 8, 59, 1, label[n * 2]);
    f_1a70_344b(x + (36 - strlen(label[n * 2 + 1]) * 3) + 8, 67, 1, label[n * 2 + 1]);
}

/* A mouse click on one of the buttons: choice 9-12. */
void f_b8da_14de(void)
{
    unsigned char i;
    unsigned x;

    for (i = 0; i <= 3; ++i) {
        x = i * 77 + 8;
        if (f_2162_0c1f() >= x && f_2162_0c1f() <= x + 73 &&
            f_2162_0c13() >= 50 && f_2162_0c13() <= 70) {
            d_69da_d992 = i + 9;
            i = 3;
        }
    }
}

/* The friendly of a team in a week: opponent (-1: none), at home (0) or away, and its
   fixture slot. */
void f_b8da_1548(int team, unsigned char week, int far *opp, unsigned char far *home, unsigned char far *slot)
{
    unsigned char i;

    *opp = -1;
    for (i = 0; i <= 39; i++) {
        if (d_5dbf_1290[i][0][week] / 32 == team) {
            *opp = d_5dbf_1290[i][1][week] / 32;
            *home = 0;
        } else if (d_5dbf_1290[i][1][week] / 32 == team) {
            *opp = d_5dbf_1290[i][0][week] / 32;
            *home = 1;
        } else
            continue;
        *slot = i;
        i = 39;
    }
}

/* Arrange Friendly: pick a club to approach, 48 a page. */
void f_b8da_1622(unsigned char team, unsigned char week)
{
    unsigned char page;
    unsigned char key;
    int i;
    int club;
    char buf[320];
    char r;

    page = 1;
    do {
        f_1a70_4a41("Arrange Friendly");
        sprintf(buf, " Select a team to approach ");
        f_1a70_3554(1.125, 4.0, 1, 2, 304, buf);
        f_1a70_4ede(2, 1.25, 22.5, 1, 12, 53, " - Scr");
        f_1a70_4ede(2, 32.25, 22.5, 1, 12, 53, " + Scr");
        f_1a70_4ede(2, 8.5, 22.5, 1, 4, 185, "          Done");
        for (i = 0; i <= 47; i++) {
            club = (page - 1) * 48 + i;
            d_69da_de4d = i / 16 * 12.75 + 1.125;
            d_69da_de45 = i + 6 - i / 16 * 16;
            if (club < 540) {
                sprintf(buf, " %.15s", f_1a70_3404(club));
                f_1a70_4ede(0, d_69da_de4d, d_69da_de45, f_1a70_2bc7(club) ? 6 : 1, 14, 100, buf);
                if (team == club)
                    f_1a70_5641(i + 4);
            } else
                f_1a70_3554(d_69da_de4d, d_69da_de45, 1, 14, 100, "");
        }
        do
            key = f_1a70_53de(d_69da_d9dc);
        while (key == 0);
        if (key == 1)
            page = page == 1 ? 12 : page - 1;
        else if (key == 2)
            page = page == 12 ? 1 : page + 1;
        else if (key >= 4) {
            club = (page - 1) * 48 + key - 4;
            f_1a70_4a41("Approach for friendly");
            sprintf(buf, " %s ", (char far *)d_69da_b1fc[team]);
            f_1a70_3d0c(1.0, 4.0, -(d_4512_00a4[team] / 16), d_4512_00a4[team] % 16, 0, buf);
            sprintf(buf, "Approach %s ? ", f_1a70_3404(club));
            f_1a70_0adb(-7, buf);
            f_1a70_2eaa(10, "", "*Exit|Approach Them|");
            f_1a70_3226(1);
            if (d_69da_d992 == 1) {
                r = f_b8da_1954(club, team, week);
                if (r == 0)
                    f_1a70_0b46("They are not available");
                else if (r == 1)
                    f_1a70_0b46("They decline the offer");
                else {
                    f_1a70_0b46("They accept the offer");
                    f_b8da_1cf2(week, team, club);
                    f_b8da_1aae(team, week);
                    key = 3;
                }
            }
        }
    } while (key != 3);
}

/* A club's answer to a friendly: 0 not available, 1 declined, 2 accepted. */
char f_b8da_1954(int club, int team, unsigned char week)
{
    unsigned char slot;
    unsigned char home;
    int opp;
    char buf[320];

    f_b8da_1548(club, week, &opp, &home, &slot);
    if (opp > -1)
        return 0;
    if (f_1a70_2bc7(club)) {
        f_1a70_4a41("Offer of Friendly");
        sprintf(buf, " %s ", (char far *)d_69da_b1fc[club]);
        f_1a70_3d0c(1.0, 4.0, -(d_4512_00a4[club] / 16), d_4512_00a4[club] % 16, 0, buf);
        sprintf(buf, "%s want a friendly ", f_1a70_3404(team));
        f_1a70_0adb(-7, buf);
        f_1a70_2eaa(10, "", "Accept Offer|Refuse Offer|");
        f_1a70_3226(1);
        if (d_69da_d992 == 1)
            return 1;
    } else {
        if (club % 4 == d_69da_df91 % 4)
            return 0;
        if (f_1a70_2bff(club) - f_1a70_2bff(team) > 3.0 || club / 20 == team / 20)
            return 1;
    }
    return 2;
}

/* Set Venue: play the week's friendly at home or away. */
void f_b8da_1aae(unsigned char team, unsigned char week)
{
    unsigned char slot;
    unsigned char home;
    int opp;
    char buf[320];

    f_b8da_1548(team, week, &opp, &home, &slot);
    f_1a70_4a41("Set Venue");
    sprintf(buf, " %s ", (char far *)d_69da_b1fc[team]);
    f_1a70_3d0c(1.0, 4.0, -(d_4512_00a4[team] / 16), d_4512_00a4[team] % 16, 0, buf);
    sprintf(buf, "Friendly vs %s ", f_1a70_3404(opp));
    f_1a70_0adb(-7, buf);
    f_1a70_2eaa(10, "", "Play at Home|Play Away|");
    f_1a70_3226(1);
    if (home != d_69da_d992) {
        int t;

        t = d_5dbf_1290[slot][0][week];
        d_5dbf_1290[slot][0][week] = d_5dbf_1290[slot][1][week];
        d_5dbf_1290[slot][1][week] = t;
        f_1a70_0b46("Ok - fixture now set");
    }
}

/* cancel a friendly */
void f_b8da_1bfe(unsigned char team, char c)
{
    unsigned char idx;
    unsigned char home;
    int opp;
    char buf[320];

    f_b8da_1548(team, c, &opp, &home, &idx);
    f_1a70_4a41("Cancel Friendly");
    sprintf(buf, " %s ", (char far *)d_69da_b1fc[team]);
    f_1a70_3d0c(1.0, 4.0, -(d_4512_00a4[team] / 16), d_4512_00a4[team] % 16, 0, buf);
    sprintf(buf, "Cancel game vs %s ? ", f_1a70_3404(opp));
    f_1a70_0adb(-7, buf);
    f_1a70_2eaa(10, "", "*Exit|Cancel Game|");
    f_1a70_3226(1);
    if (d_69da_d992 == 1)
        f_b8da_1d56(c, idx);
}

/* add a fixture to a team's list */
void f_b8da_1cf2(unsigned char team, int a, int b)
{
    unsigned char n;

    n = d_28da_0000[team - 1];
    d_5dbf_1290[n][0][team] = a << 5;
    d_5dbf_1290[n][1][team] = b << 5;
    d_28da_0000[team - 1]++;
}

/* remove a fixture: the last one takes its place */
void f_b8da_1d56(unsigned char team, unsigned char week)
{
    unsigned char n;

    n = d_28da_0000[team - 1] - 1;
    d_5dbf_1290[week][0][team] = d_5dbf_1290[n][0][team];
    d_5dbf_1290[week][1][team] = d_5dbf_1290[n][1][team];
    d_5dbf_1290[n][0][team] = -32;
    d_5dbf_1290[n][1][team] = -32;
    d_28da_0000[team - 1]--;
}

/* board messages */
void f_b8da_1df1(void)
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

    for (t = 0; t <= d_69da_da4a - 1; ++t) {
        team = d_4512_2616[t];
        if (team < 255) {
            a = 0;
            b = 0;
            c = 0;
            d = 0;
            for (i = 0; i <= d_4512_023e[team] - 1; i++) {
                if (f_1a70_68f0(d_28da_10f0[team][i], -1)) {
                    if (d_69da_db76 == 1)
                        a++;
                    else if (d_69da_db76 == 4)
                        b++;
                    else if (d_69da_db76 == 5)
                        c++;
                    else if (d_69da_db76 == 7)
                        d++;
                }
            }
            if (f_2162_0da1(5) == 0 && d_4512_01ec[team] < 65 && a >= f_2162_0da1(2) + 3) {
                sprintf(buf, "%s board message", (char far *)d_69da_b1fc[team]);
                f_1a70_598c(team, buf, "We find your current team selection somewhat questionable.");
            }
            if (f_2162_0da1(5) == 0 && b >= f_2162_0da1(2) + 3) {
                sprintf(buf, "%s board message", (char far *)d_69da_b1fc[team]);
                f_1a70_598c(team, buf, "We are concerned with the unrest between you and some of the players.");
            }
            if (f_2162_0da1(5) == 0 && c >= f_2162_0da1(2) + 3) {
                sprintf(buf, "%s board message", (char far *)d_69da_b1fc[team]);
                f_1a70_598c(team, buf, "There seems to be a conflict between some of the players and the coach.");
            }
            if (f_2162_0da1(5) == 0 && d >= f_2162_0da1(2) + 3) {
                sprintf(buf, "%s board message", (char far *)d_69da_b1fc[team]);
                f_1a70_598c(team, buf, "We are confused as to why you have fined some of the players. It is not helping morale.");
            }
            if (!f_1a70_6783(d_69da_d996)) {
                if (team / 20 == 0) {
                    low = 150000L;
                    high = 1000000L;
                } else if (team / 20 == 1) {
                    low = 75000L;
                    high = 500000L;
                } else {
                    low = 25000L;
                    high = 250000L;
                }
                big = 3000000L;
                if (f_2162_0da1(5) == 0 && d_4512_023e[team] >= 19 && d_4512_1e90[0][team] < low) {
                    sprintf(buf, "%s board message", (char far *)d_69da_b1fc[team]);
                    f_1a70_598c(team, buf, "We suggest selling players to ease our current financial situation.");
                } else if (f_2162_0da1(5) == 0 && d_4512_01ec[team] > 30 && d_4512_023e[team] <= 23 && d_4512_1e90[0][team] >= big) {
                    sprintf(buf, "%s board message", (char far *)d_69da_b1fc[team]);
                    f_1a70_598c(team, buf, "The board feel that the signing of a big-name player could be beneficial.");
                } else if (f_2162_0da1(5) == 0 && d_4512_01ec[team] > 30 && d_4512_023e[team] <= 23 && d_4512_1e90[0][team] >= high) {
                    sprintf(buf, "%s board message", (char far *)d_69da_b1fc[team]);
                    f_1a70_598c(team, buf, "There is cash available for the strengthening of our squad.");
                }
            }
        }
    }
}

/* set a win bonus */
void f_b8da_229c(unsigned char team, int opp)
{
    char buf[320];
    long bonus[7] = {0, 100, 250, 500, 1000, 5000, 10000};

    f_1a70_4a41("Win Bonus");
    sprintf(buf, " %s ", (char far *)d_69da_b1fc[team]);
    f_1a70_3d0c(1.0, 4.0, -(d_4512_00a4[team] / 16), d_4512_00a4[team] % 16, 0, buf);
    sprintf(buf, "Game vs %s", f_1a70_3404(opp));
    f_1a70_0adb(-7, buf);
    f_1a70_0adb(9, "Amount per player ?");
    f_1a70_2eaa(12, "", "*No Bonus|\xa3" "100|\xa3" "250|\xa3" "500|\xa3" "1000|\xa3" "5000|\xa3" "10,000|");
    f_1a70_3226(6);
    if (d_69da_d992 > 0) {
        unsigned char ok;

        ok = 255;
        if (bonus[d_69da_d992] * 13 > f_1a70_588f(team))
            ok = 0;
        else if ((d_69da_d992 > 5 && team / 20 > 0)
            || (d_69da_d992 > 4 && team / 20 > 1)
            || (d_69da_d992 > 3 && team / 20 > 2)
            || (d_69da_d992 > 2 && d_69da_d996 < 10))
            ok = 0;
        if (ok) {
            sprintf(buf, "Win bonus set at \xa3%ld", bonus[d_69da_d992]);
            f_1a70_0b46(buf);
            d_4512_0290[team] = d_69da_d992;
        } else
            f_1a70_0b46("The board refuse");
    } else {
        f_1a70_0b46("No bonus set");
        d_4512_0290[team] = 0;
    }
}

/* physio: days out for an injured player */
unsigned char f_b8da_2494(int player)
{
    unsigned char team = d_28da_2a78[18][player];
    unsigned char r;
    unsigned char days[5] = {20, 18, 15, 12, 8};
    float f;
    float mult[7] = {0, 0.8, 0.9, 1.0, 1.1, 1.25, 1.5};

    f = d_4512_02e2[team] <= 4 ? days[d_4512_02e2[team]] : 5;
    f = mult[d_4512_0290[team]] * f;
    r = f;
    return f_2162_134e(f_2162_0da1(r), f_2162_0da1(r));
}

/* pay the win bonus */
void f_b8da_2575(unsigned char team)
{
    long bonus[7] = {0, 100, 250, 500, 1000, 5000, 10000};

    d_69da_dfae = f_2162_1634(d_69da_dff0, 1);
    d_69da_dfae[7][team] += bonus[d_4512_0290[team]] * 13000;
}

void f_b8da_25ed(void)
{
    unsigned char t;

    for (t = 0; t <= 79; ++t)
        if (f_1a70_2bc7(t))
            f_b8da_2626(t);
}

/* copy a team's squad to its list and sort it */
void f_b8da_2626(unsigned char team)
{
    unsigned char g;
    unsigned char i;
    unsigned char j;
    int a;
    int b;
    unsigned va;
    unsigned vb;

    g = d_4512_1a30[team] - 646;
    for (i = 0; i <= d_4512_023e[team] - 1; ++i)
        d_536d_4fd5[g][i] = d_28da_10f0[team][i];
    for (i = 0; i <= d_4512_023e[team] - 2; ++i) {
        for (j = i + 1; j <= d_4512_023e[team] - 1; ++j) {
            a = d_536d_4fd5[g][i];
            b = d_536d_4fd5[g][j];
            va = d_4512_bdc8[a].f3 * 1000 + d_4512_bdc8[a].f2 * 500 + d_4512_bdc8[a].f1 * 100 + d_4512_bdc8[a].f6 * 50;
            vb = d_4512_bdc8[b].f3 * 1000 + d_4512_bdc8[b].f2 * 500 + d_4512_bdc8[b].f1 * 100 + d_4512_bdc8[b].f6 * 50;
            if (vb > va) {
                int tmp;

                tmp = d_536d_4fd5[g][i];
                d_536d_4fd5[g][i] = d_536d_4fd5[g][j];
                d_536d_4fd5[g][j] = tmp;
            }
        }
    }
}

/* the penalty takers screen */
void f_b8da_286a(unsigned char team)
{
    unsigned char row = d_4512_1a30[team] + 0x7a;
    unsigned char k;
    unsigned char mode = 0;
    unsigned char sel = 1;
    int p;
    char buf[320];

    do {
        f_1a70_4a41("Penalty Takers");
        sprintf(buf, " %s ", (char far *)d_69da_b1fc[team]);
        f_1a70_3d0c(1.25, 4.0, -(d_4512_00a4[team] / 16), d_4512_00a4[team] % 16, 0, buf);
        f_1a70_3554(30.375, 7.25, 0, 5, 70, " Options");
        for (k = 0; k <= 4; k = k + 1)
            f_b8da_2f7e(k, 0);
        f_1a70_4ede(2, 1.25, 22.5, 1, 4, 301, "                 Done");
        f_1a70_3554(1.125, 7.25, 0, 5, 77, " Name");
        f_1a70_3554(15.75, 7.25, 0, 5, 77, " Name");
        f_b8da_2c3f(team);
        f_b8da_2d7e(team, mode, -1);
        f_1a70_525f(sel + 1, -1);
        do {
            d_69da_d992 = f_1a70_53de(-1);
            if (d_69da_d992 == 0)
                f_b8da_30b3();
            k = d_69da_d992;
            if (k >= 2 && k <= 29) {
                f_1a70_525f(sel + 1, 0);
                sel = k - 1;
                f_1a70_525f(sel + 1, -1);
            } else if (k == 30 && sel > 1) {
                int t;

                f_b8da_2f7e(0, -1);
                t = d_536d_4fd5[row][sel - 1];
                d_536d_4fd5[row][sel - 1] = d_536d_4fd5[row][sel - 2];
                d_536d_4fd5[row][sel - 2] = t;
                sel--;
                d_69da_dd70 = 1;
                f_b8da_2c3f(team);
                f_b8da_2d7e(team, mode, sel);
                f_b8da_2d7e(team, mode, sel + 1);
                f_1a70_525f(sel + 1, -1);
                f_b8da_2f7e(0, 0);
            } else if (k == 31 && d_4512_023e[team] > sel) {
                int t;

                f_b8da_2f7e(1, -1);
                t = d_536d_4fd5[row][sel - 1];
                d_536d_4fd5[row][sel - 1] = d_536d_4fd5[row][sel];
                d_536d_4fd5[row][sel] = t;
                sel++;
                d_69da_dd70 = 1;
                f_b8da_2c3f(team);
                f_b8da_2d7e(team, mode, sel);
                f_b8da_2d7e(team, mode, sel - 1);
                f_1a70_525f(sel + 1, -1);
                f_b8da_2f7e(1, 0);
            }
            if ((k == 33 && mode == 1) || (k == 34 && mode == 0)) {
                mode = mode == 0 ? 1 : 0;
                f_b8da_2f7e(mode + 3, -1);
                f_b8da_2d7e(team, mode, -1);
                f_b8da_2f7e(mode + 3, 0);
            }
        } while (k != 1 && k != 32);
        if (k == 32) {
            p = d_536d_4fd5[row][sel - 1];
            do
                f_aac9_42ed(p, -1, 0);
            while (!d_69da_ddbe);
            d_69da_ddbe = 0;
        }
    } while (k != 1);
}

/* the names of the penalty takers */
void f_b8da_2c3f(unsigned char team)
{
    unsigned char i;
    unsigned char row;
    int p;
    float x;
    float y;
    char buf[320];

    row = d_4512_1a30[team] + 0x7a;
    for (i = 1; i <= 26; i = i + 1) {
        x = i <= 13 ? 1.125 : 15.75;
        y = (i <= 13 ? i : i - 13) + 6.625 + 1;
        if (d_4512_023e[team] >= i) {
            p = d_536d_4fd5[row][i - 1];
            sprintf(buf, " %.*s", 11, f_1a70_46c1(p));
            if (strcmp(buf, d_536d_86ed[d_69da_dd70]))
                f_1a70_4ede(0, x, y, 1, 14, 77, buf);
            else
                d_69da_dd70++;
        } else
            f_1a70_3554(x, y, 1, 14, 77, "");
    }
}

/* the goals or average rating column of the penalty takers (from == -1: all of it) */
void f_b8da_2d7e(unsigned char team, char mode, char from)
{
    unsigned char i;
    unsigned char row;
    unsigned char last;
    int p;
    float x;
    float y;
    char buf[40];
    unsigned char first;

    row = d_4512_1a30[team] + 0x7a;
    if (from == -1) {
        strcpy(buf, mode == 0 ? " GLS" : " AV R");
        f_1a70_3554(11.0, 7.25, 0, 5, 36, buf);
        f_1a70_3554(25.625, 7.25, 0, 5, 36, buf);
        first = 1;
        last = 26;
    } else {
        first = from;
        last = from;
    }
    for (i = first; i <= last; i = i + 1) {
        x = i <= 13 ? 11.0 : 25.625;
        y = (i <= 13 ? i : i - 13) + 6.625 + 1;
        if (d_4512_023e[team] >= i) {
            p = d_536d_4fd5[row][i - 1];
            if (mode == 0)
                sprintf(buf, "  %d", d_3668_0000[13][p]);
            else if (d_3668_0000[12][p] > 0) {
                float avg;

                d_69da_dfa6 = f_2162_1634(d_69da_dfec, 0);
                avg = (float)d_69da_dfa6[2][p] / d_3668_0000[12][p];
                sprintf(buf, " %4.2f", avg);
            } else
                strcpy(buf, " ----");
        } else
            strcpy(buf, "");
        f_1a70_3554(x, y, 1, 15, 36, buf);
    }
}

/* one of the screen's five buttons */
void f_b8da_2f7e(unsigned char n, char hi)
{
    register int y = n * 21 + 63;
    char far *names[10] = { "Move", "Up", "Move", "Down", "View", "Factfile", "Show", "Goals", "Show", "Av R" };

    f_2162_0897(16);
    f_2162_08b5(244, y + 2, 314, y + 19);
    f_2162_0897((hi ? 9 : 2) + 16);
    f_2162_08b5(242, y, 312, y + 17);
    f_2162_08a6(25);
    f_2162_090f(242, y, 312, y + 17);
    f_1a70_344b(35 - strlen(names[n * 2]) * 3 + 250, y + 7, 1, names[n * 2]);
    f_1a70_344b(35 - strlen(names[n * 2 + 1]) * 3 + 250, y + 15, 1, names[n * 2 + 1]);
}

/* which of the five buttons the mouse is on: sets d_69da_d992 to 30 + its number */
void f_b8da_30b3(void)
{
    unsigned char i;
    register unsigned y;

    for (i = 0; i <= 4; i = i + 1) {
        y = i * 21 + 63;
        if (f_2162_0c1f() >= 242 && f_2162_0c1f() <= 312 && f_2162_0c13() >= y && f_2162_0c13() <= y + 17) {
            d_69da_d992 = i + 30;
            i = 4;
        }
    }
}

/* sets d_69da_db56 from the player's place among his club's penalty takers */
void f_b8da_311d(int player)
{
    unsigned char i = 0;
    unsigned char row = d_4512_1a30[d_28da_ad40[player]] + 0x7a;

    if (f_1a70_5b76(player)) {
        while (d_536d_4fd5[row][i] != player)
            i++;
        d_69da_db56 = 50 - i;
    } else
        d_69da_db56 = f_2162_0da1(20);
}

/* adds a player at the end of the team's penalty takers */
void f_b8da_31a2(int player, unsigned char team)
{
    unsigned char row = d_4512_1a30[team] + 0x7a;

    d_536d_4fd5[row][d_4512_023e[team] - 1] = player;
}

/* takes a player out of the team's penalty takers */
void f_b8da_31f2(int player, unsigned char team)
{
    unsigned char row;
    unsigned char i;

    row = d_4512_1a30[team] + 0x7a;
    for (i = 0; d_536d_4fd5[row][i] != player; i++)
        ;
    for (; d_4512_023e[team] - 1 >= i; i++)
        d_536d_4fd5[row][i] = d_536d_4fd5[row][i + 1];
}

/* commentary: a penalty appeal turned down */
void f_b8da_3289(unsigned char team)
{
    char msg[320];
    char name[40];
    char c;

    if (d_69da_dac2 + d_69da_dac4 > 0) {
        f_829f_2e96(team);
        if (team < 80)
            strcpy(name, f_1a70_46c1(d_69da_d9ae));
        else
            sprintf(name, "No.%d", d_69da_db4a + (d_69da_db4a == 12) + 1);
        sprintf(msg, "%s %s", name, f_b8da_351b(0));
        f_8773_0a64(team, msg);
        f_2162_0dfb(100);
        if (f_2162_0da1(20) == 0) {
            f_8773_0a64(team, "The ref consults his linesman");
            f_2162_0dfb(100);
            f_8773_0a64(team, "No penalty");
            f_2162_0dfb(100);
        } else {
            c = f_2162_0da1(5);
            if (c == 0) {
                f_8773_0a64(team, "The ref waves play on");
                f_2162_0dfb(100);
            } else if (c == 1) {
                f_8773_0a64(team, "Penalty not given");
                f_2162_0dfb(100);
            } else if (c == 2) {
                f_8773_0a64(team, "No penalty");
                f_2162_0dfb(100);
            } else if (c == 3) {
                f_8773_0a64(team, "The ref just turns away");
                f_2162_0dfb(100);
            } else {
                f_8773_0a64(team, "Nothing given");
                f_2162_0dfb(100);
            }
        }
        f_8773_0a64(d_69da_da60, d_536d_624d);
    }
}

/* commentary: a penalty given */
void f_b8da_33c9(unsigned char team)
{
    char msg[320];
    char name[40];
    char c;

    if (d_69da_dac2 + d_69da_dac4 > 0) {
        f_829f_2e96(team);
        if (team < 80)
            strcpy(name, f_1a70_46c1(d_69da_d9ae));
        else
            sprintf(name, "No.%d", d_69da_db4a + (d_69da_db4a == 12) + 1);
        sprintf(msg, "%s %s", name, f_b8da_351b(1));
        f_8773_0a64(team, msg);
        f_2162_0dfb(100);
        if (f_2162_0da1(15) == 0) {
            f_8773_0a64(team, "The ref consults his linesman");
            f_2162_0dfb(100);
            f_8773_0a64(team, "It's a penalty!");
            f_2162_0dfb(100);
        } else {
            c = f_2162_0da1(5);
            if (c == 0) {
                f_8773_0a64(team, "The ref gives a penalty!");
                f_2162_0dfb(100);
            } else if (c == 1) {
                f_8773_0a64(team, "The ref points to the spot!");
                f_2162_0dfb(100);
            } else if (c == 2) {
                f_8773_0a64(team, "Penalty!");
                f_2162_0dfb(100);
            } else if (c == 3) {
                f_8773_0a64(team, "Penalty given!");
                f_2162_0dfb(100);
            } else {
                f_8773_0a64(team, "Penalty kick!");
                f_2162_0dfb(100);
            }
        }
    }
    f_8773_1018(team, team == d_69da_da60 ? d_69da_db46 : d_69da_db48, 0);
}

/* how the player went down in the area (given: the penalty was given) */
char far *f_b8da_351b(char given)
{
    char far *s = f_2162_0f38();
    unsigned char r = f_2162_0da1(7);

    if (r == 0)
        strcpy(s, "goes down in the area");
    else if (r == 1 && (given == 0 || f_2162_0da1(3) == 0))
        strcpy(s, "dives in the area");
    else if (r == 2 && (given == 0 || f_2162_0da1(3) == 0))
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

void f_b8da_35cd(unsigned char team)
{
    char ok;
    unsigned char opp;
    char line[320];
    char name[40];

    if (d_69da_dac2 + d_69da_dac4 > 0) {
        ok = 1;
        if (f_2162_0da1(f_2162_13ba(d_69da_d99a * 5 + 20, 40)) == 0) {
            opp = team == d_69da_da60 ? d_69da_da62 : d_69da_da60;
            f_b8da_3b9b(opp);
        }
        f_829f_2e96(team);
        if (team < 80)
            strcpy(name, f_1a70_46c1(d_69da_d9ae));
        else
            sprintf(name, "No.%d", d_69da_db4a + (d_69da_db4a == 12) + 1);
        sprintf(line, "%s %s", name, f_b8da_3b12());
        f_8773_0a64(team, line);
        f_2162_0dfb(100);
        if ((d_69da_de37 == 0 && team == d_69da_da62) || (d_69da_de38 == 0 && team == d_69da_da60))
            ok = 0;
        if (f_2162_0da1(60) == 0 && ok == 1) {
            f_8773_0a64(team, "He rounds the 'keeper");
            f_2162_0dfb(100);
            f_8773_0a64(team, "But somehow misses!!!");
            f_2162_0dfb(100);
        } else if (f_2162_0da1(20) == 0 && ok == 1) {
            if (f_2162_0da1(10) == 0) {
                f_8773_0a64(team, "He chips it over the 'keeper");
                f_2162_0dfb(100);
                if (f_2162_0da1(2) == 0) {
                    f_8773_0a64(team, "But it comes back off the bar!");
                    f_2162_0dfb(100);
                } else {
                    f_8773_0a64(team, "But it goes over!");
                    f_2162_0dfb(100);
                }
            } else if (f_2162_0da1(2) == 0) {
                f_8773_0a64(team, "He rounds the 'keeper");
                f_2162_0dfb(100);
                f_8773_0a64(team, "But it's cleared off the line!");
                f_2162_0dfb(100);
            } else {
                f_8773_0a64(team, "He slides it past the 'keeper");
                f_2162_0dfb(100);
                if (f_2162_0da1(2) == 0) {
                    f_8773_0a64(team, "But it hits an upright!");
                    f_2162_0dfb(100);
                } else {
                    f_8773_0a64(team, "But it goes wide!");
                    f_2162_0dfb(100);
                }
            }
        } else {
            char c;

            c = f_2162_0da1(11);
            if (c == 0 && ok == 1) {
                f_8773_0a64(team, "But his shot is saved!");
                f_2162_0dfb(100);
            } else if (c == 1 && ok == 1) {
                f_8773_0a64(team, "But his shot is smothered!");
                f_2162_0dfb(100);
            } else if (c == 2) {
                f_8773_0a64(team, "But he blazes it over!");
                f_2162_0dfb(100);
            } else if (c == 3) {
                f_8773_0a64(team, "But his shot lacks power!");
                f_2162_0dfb(100);
            } else if (c == 4) {
                f_8773_0a64(team, "But his finish is poor!");
                f_2162_0dfb(100);
            } else if (c == 5) {
                f_8773_0a64(team, "But he misses the target!");
                f_2162_0dfb(100);
            } else if (c == 6) {
                f_8773_0a64(team, "But he shoots wide!");
                f_2162_0dfb(100);
            } else if (c == 7) {
                f_8773_0a64(team, "But he's tackled!");
                f_2162_0dfb(100);
            } else if (c == 8) {
                f_8773_0a64(team, "But he squanders the chance!");
                f_2162_0dfb(100);
            } else if (c == 9) {
                f_8773_0a64(team, "But he wastes the chance!");
                f_2162_0dfb(100);
            } else {
                f_8773_0a64(team, "But he misses!");
                f_2162_0dfb(100);
            }
        }
        f_8773_0a64(d_69da_da60, d_536d_624d);
    }
}

#pragma option -O-
void f_b8da_389a(unsigned char team)
{
    unsigned char c;
    char ok;
    unsigned char opp;
    char line[320];
    char name[40];

    f_829f_2e96(team);
    if (d_69da_dac2 + d_69da_dac4 > 0) {
        ok = 1;
        if (f_2162_0da1(f_2162_13ba(d_69da_d99a * 5 + 20, 40)) == 0) {
            opp = team == d_69da_da60 ? d_69da_da62 : d_69da_da60;
            f_b8da_3b9b(opp);
        }
        if (team < 80)
            strcpy(name, f_1a70_46c1(d_69da_d9ae));
        else
            sprintf(name, "No.%d", d_69da_db4a + (d_69da_db4a >= 12) + 1);
        sprintf(line, "%s %s", name, f_b8da_3b12());
        f_8773_0a64(team, line);
        f_2162_0dfb(100);
        if ((d_69da_de37 == 0 && team == d_69da_da62) || (d_69da_de38 == 0 && team == d_69da_da60))
            ok = 0;
        c = f_2162_0da1(11);
        if (c <= 3 && ok == 1) {
            if (f_2162_0da1(10) == 0) {
                f_8773_0a64(team, "He chips it over the 'keeper");
                f_2162_0dfb(100);
                f_8773_0a64(team, "And it's in!");
                f_2162_0dfb(100);
            } else if (f_2162_0da1(2) == 0) {
                f_8773_0a64(team, "He rounds the 'keeper");
                f_2162_0dfb(100);
                f_8773_0a64(team, "And scores!");
                f_2162_0dfb(100);
            } else {
                f_8773_0a64(team, "He slides it past the 'keeper");
                f_2162_0dfb(100);
                f_8773_0a64(team, "And it's in!");
                f_2162_0dfb(100);
            }
        } else {
            sprintf(line, "Goal for %s!", f_1a70_3404(team == d_69da_da60 ? d_69da_daae : d_69da_dab0));
            f_8773_0a64(team, line);
            f_2162_0dfb(100);
            if (c == 4) {
                f_8773_0a64(team, "He finds the net");
                f_2162_0dfb(100);
            } else if (c == 5) {
                f_8773_0a64(team, "He finishes in style!");
                f_2162_0dfb(100);
            } else if (c == 6) {
                f_8773_0a64(team, "He finishes clinically!");
                f_2162_0dfb(100);
            } else if (c == 7) {
                f_8773_0a64(team, "His finish is superb!");
                f_2162_0dfb(100);
            } else if (c == 8) {
                f_8773_0a64(team, "He scores easily!");
                f_2162_0dfb(100);
            } else if (c == 9) {
                f_8773_0a64(team, "He finishes well!");
                f_2162_0dfb(100);
            } else {
                f_8773_0a64(team, "He scores!");
                f_2162_0dfb(100);
            }
        }
        f_8773_0a64(d_69da_da60, d_536d_624d);
    }
}

char far *f_b8da_3b12(void)
{
    char far *s;
    char c;

    s = f_2162_0f38();
    if (f_2162_0da1(20) == 0)
        strcpy(s, "must surely score");
    else {
        c = f_2162_0da1(6);
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

void f_b8da_3b9b(unsigned char team)
{
    char buf[320];
    unsigned char n;

    n = f_b8da_3d49(team);
    if (team < 80)
        sprintf(buf, "Bad backpass by %s!", f_1a70_46c1(d_4512_549a[team][n]));
    else
        sprintf(buf, "Bad backpass by no.%d", (n >= 12 ? 1 : 0) + n + 1);
    f_8773_0a64(team, buf);
    f_2162_0dfb(100);
}

void f_b8da_3c33(unsigned char team)
{
    unsigned char c;
    char buf[320];

    if (f_2162_0da1(2) == 0)
        f_8773_0a64(team, "But it's disallowed!");
    else
        f_8773_0a64(team, "But it won't count!");
    f_2162_0dfb(100);
    c = f_2162_0da1(9);
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
    f_8773_0a64(team, buf);
    f_2162_0dfb(100);
    if ((c == 5 || c == 8) && f_2162_0da1(2) == 0) {
        f_8773_0a64(team, "He waves away the protests");
        f_2162_0dfb(100);
    }
}

unsigned char f_b8da_3d49(unsigned char team)
{
    unsigned char best, i, max, v, p;

    max = 0;
    for (i = 0; i <= 13; i = i + 1) {
        if (d_4512_5d98[team == d_69da_da62][i] < 2) {
            p = d_4512_4726[team][0][i];
            if (p > 1) {
                if (f_1a70_66a9(p))
                    v = 100;
                else if (f_1a70_66cf(p))
                    v = 80;
                else
                    v = 50;
                if (f_1a70_675d(p))
                    v += 10;
                v = v + f_2162_0da1(20) - f_2162_0da1(20);
                if (v > max) {
                    best = i;
                    max = v;
                }
            }
        }
    }
    return best;
}

int f_b8da_3e41(unsigned char c)
{
    int r, best;
    unsigned char i, n;

    n = c == 0 || c == 255 ? 5 : 1;
    for (i = 1; i <= n; i = i + 1) {
        for (;;) {
            r = f_2162_0da1(452);
            if (d_62e5_51ea[r] == c)
                break;
        }
        if (i == 1 || d_62e5_592e[r] > d_62e5_592e[best])
            best = r;
    }
    return best;
}

int f_b8da_3ebf(unsigned char c)
{
    int r, best;
    unsigned char i, n;

    n = c == 0 || c == 255 ? 5 : 1;
    for (i = 1; i <= n; i = i + 1) {
        for (;;) {
            r = f_2162_0da1(1408);
            if (d_62e5_53ae[r] == c)
                break;
        }
        if (i == 1 || d_62e5_5af2[r] > d_62e5_5af2[best])
            best = r;
    }
    return best;
}

void f_b8da_3f3d(unsigned player, unsigned char team)
{
    long fee;

    fee = f_1a70_0cb8(f_1a70_01d9(player, -1), 0);
    if (f_b8da_4ad7(player, team) && f_1a70_588f(team) >= fee && f_b8da_4206() == 0
        && player % 20 != d_69da_df91 % 20) {
        f_9007_366e(player, team);
        if (d_69da_ddeb) {
            f_b8da_4b26(player, team, fee);
            d_69da_de3e = -1;
        }
    }
}

void f_b8da_3fe4(unsigned player, unsigned char team)
{
    long fee;
    char done;
    unsigned char club;
    char buf[320];

    done = 0;
    club = d_28da_ad40[player] + 116;
    do {
        f_1a70_4a41("Approach Player");
        f_1a70_442b(1.0, 4.0, team);
        fee = f_1a70_0cb8(f_1a70_01d9(player, -1), 0);
        sprintf(buf, "The fee would be \xa3%ld", fee);
        f_1a70_0adb(7, buf);
        sprintf(buf, "Approach %s ?", f_1a70_4592(player));
        f_1a70_0adb(9, buf);
        f_1a70_2eaa(12, "", "*Exit|Approach To Buy|");
        f_1a70_3226(1);
        if (d_69da_d992 == 0)
            done = 1;
        else if (d_69da_d992 == 1) {
            if (f_b8da_4206() || player % 20 == d_69da_df91 % 20) {
                d_69da_dfba = f_2162_1634(d_69da_dff6, 0);
                if (d_69da_dfba[9][player])
                    f_1a70_0b46("A work permit cannot be obtained");
                else
                    f_1a70_0b46("His club refuse the approach");
            } else if (f_1a70_588f(team) < fee)
                f_1a70_0b46("We cannot afford the fee");
            else if (f_b8da_4ad7(player, team) == 0)
                f_1a70_0b46("He isn't interested");
            else {
                f_1a70_0b46("He agrees to join");
                sprintf(buf, "The fee is \xa3%ld", fee);
                f_1a70_0b46(buf);
                f_9007_366e(player, team);
                if (d_69da_ddeb) {
                    f_b8da_4b26(player, team, fee);
                    d_69da_de3e = -1;
                    done = 1;
                } else {
                    sprintf(buf, "He stays in %s", d_5dbf_0000[club]);
                    f_9007_4276(6, buf);
                }
            }
        }
    } while (done == 0);
}

char f_b8da_4206(void)
{
    if (d_69da_d98e > 1670)
        return -1;
    return 0;
}

char f_b8da_421d(void)
{
    if (d_69da_d990 + 1680 > 1850)
        return -1;
    return 0;
}

void f_b8da_4237(void)
{
    unsigned i;

    for (i = 1680; i <= d_69da_d990 + 1679; i++) {
        d_28da_2a78[15][i] = d_28da_2a78[0][i] + f_2162_0da1(25) - f_2162_0da1(25);
        d_28da_2a78[21][i] = 100;
        d_28da_2a78[23][i] = 1;
        d_3668_0000[0][i] = 0;
        d_3668_0000[1][i] = 0;
        d_3668_0000[2][i] = 0;
        d_3668_0000[3][i] = 0;
        d_3668_0000[4][i] = 0;
        d_3668_0000[12][i] = 0;
        d_3668_0000[13][i] = 0;
        d_3668_0000[23][i] = 0;
        d_69da_dfba = f_2162_1634(d_69da_dff6, 1);
        d_69da_dfba[0][i] = 0xff;
        d_69da_dfba[1][i] = 0xff;
        d_69da_dfba[3][i] = 0;
        d_69da_dfa6 = f_2162_1634(d_69da_dfec, 1);
        d_69da_dfa6[0][i] = 0;
        d_69da_dfa6[2][i] = 0;
        if (d_28da_2a78[20][i] == 0 && f_2162_0da1(10) == 0)
            f_a330_1014(i);
    }
}

void f_b8da_4391(void)
{
    unsigned i;

    for (i = 1680; i <= d_69da_d990 + 1679; i++) {
        float f;
        unsigned char j, g, n;

        if (d_28da_2a78[20][i] == 0) {
            if (f_2162_0da1(5) > 0) {
                f = (d_28da_2a78[15][i] + f_2162_0da1(15) - f_2162_0da1(15)) / 50.0 + 4.0;
                g = f_2162_13ba(f_2162_134e((unsigned char)f, 1), 10);
                n = 0;
                if (d_4512_bdc8[i].f0 == 0)
                    for (j = 1; j <= 4; j = j + 1)
                        if (f_2162_0da1(d_28da_2a78[7][i]) > f_2162_0da1(d_4512_bdc8[i].f3 == 1 ? 20 : 40)
                            && f_2162_0da1(4) == 0)
                            n++;
                d_3668_0000[0][i]++;
                d_3668_0000[1][i] += n;
                if (f_2162_0da1(d_28da_2a78[11][i]) > f_2162_0da1(40))
                    d_3668_0000[2][i] = d_3668_0000[2][i] + 5;
                d_69da_dfa6 = f_2162_1634(d_69da_dfec, 1);
                d_69da_dfa6[0][i] += g;
                d_69da_dfa6[2][i] += g;
                d_3668_0000[12][i]++;
                d_3668_0000[13][i] += n;
                if (d_3668_0000[3][i] > g || d_3668_0000[3][i] == 0)
                    d_3668_0000[3][i] = g;
                if (d_3668_0000[4][i] < g)
                    d_3668_0000[4][i] = g;
            }
            if (f_2162_0da1(20) == 0)
                d_28da_2a78[15][i] = d_28da_2a78[0][i] + f_2162_0da1(25) - f_2162_0da1(25);
            if (f_2162_0da1(20) == 0)
                f_a330_1014(i);
        } else {
            d_28da_2a78[20][i] = d_28da_2a78[20][i] - 1;
            if (d_28da_2a78[20][i] == 0)
                f_a330_15f1(i);
        }
        if (d_4512_bdc8[i].f9 == 1 && d_69da_d99a > 1 && f_2162_0da1(50) == 0)
            d_4512_bdc8[i].f9 = 0;
        else if (d_4512_bdc8[i].f9 == 0 && d_69da_d99a > 1 && f_2162_0da1(50) == 0)
            d_4512_bdc8[i].f9 = 1;
    }
}

void f_b8da_4704(void)
{
    unsigned p;

    if (d_69da_d99a > 1) {
        p = 0;
        do {
            if (f_b8da_421d() == 0 && f_b8da_4a37(p)) {
                unsigned char kind;
                unsigned char want;
                unsigned char tries;
                unsigned char best;
                unsigned t;
                unsigned club;
                long fee;
                char buf[320];

                d_69da_dfba = f_2162_1634(d_69da_dff6, 0);
                kind = d_69da_dfba[9][p];
                if ((kind == 1 || kind == 2 || kind == 3 || kind == 4 || kind == 6 || kind == 8 ||
                     kind == 11 || kind == 25 || kind == 30) && f_2162_0da1(3) == 0)
                    want = kind;
                else if (f_2162_0da1(5) > 0)
                    want = 4;
                else {
                    unsigned char nations[4] = {2, 3, 4, 11};
                    want = nations[f_2162_0da1(4)];
                }
                tries = 0;
                best = 0;
                do {
                    do
                        t = f_2162_0da1(460) + 80;
                    while (d_5dbf_10c6[t - 80] != want);
                    if (f_1a70_2bff(t) > best) {
                        club = t;
                        best = f_1a70_2bff(t) + f_2162_0da1(3);
                    }
                    tries++;
                } while (tries < 5 || best < 13 - tries / 5);
                fee = f_1a70_0cb8(f_1a70_01d9(p, -1), 0);
                sprintf(buf, "%s's %s has joined %s of %s for a fee of %ld.",
                        (char far *)d_69da_b1fc[d_28da_2a78[18][p]], f_1a70_4592(p),
                        (char far *)d_69da_b344[club - 80], d_5dbf_0000[want], fee);
                f_1a70_598c(d_28da_ad40[p], "Transfer News", buf);
                d_4512_1e90[0][d_28da_ad40[p]] += fee;
                d_4512_1e90[2][d_28da_ad40[p]] += fee;
                f_b8da_4c01(p, want, fee);
            }
            p++;
        } while (p <= d_69da_d98e - 1);
    }
}

void f_b8da_49b3(void)
{
    unsigned p;

    if (d_69da_de3d != 0 && d_69da_d99a == 1)
        return;
    for (p = 0x690; p <= d_69da_d990 + 0x68f; p++)
        if ((long)d_28da_2a78[17][p] > f_2162_0da1(4) + 32)
            f_b085_08ac(p, 255, f_2162_0da1(10) == 0 ? 1 : 0);
}

char f_b8da_4a37(int p)
{
    char r = 0;

    if ((d_3668_cb70[p] == 0 || d_3668_cb70[p] / 100 == d_69da_d99a) &&
        d_28da_2a78[0][p] > d_69da_df91 % 10 + 180 &&
        d_28da_2a78[15][p] >= d_28da_2a78[0][p] - 5 &&
        d_28da_2a78[17][p] > 22 && d_28da_2a78[17][p] < 30)
        r = -1;
    return r;
}

char f_b8da_4ad7(int p, unsigned char c)
{
    char r = 0;

    if (f_1a70_2ccc(p) <= f_1a70_2bff(c) + 3)
        r = -1;
    return r;
}

void f_b8da_4b26(int p, unsigned char c, long fee)
{
    int q;

    q = d_69da_d98e;
    f_b8da_4c64(p, q);
    d_69da_d98e++;
    d_3668_0000[0][q] = 0;
    d_3668_0000[1][q] = 0;
    d_3668_0000[2][q] = 0;
    d_3668_0000[3][q] = 0;
    d_3668_0000[4][q] = 0;
    d_3668_0000[12][q] = 0;
    d_3668_0000[13][q] = 0;
    d_69da_dfa6 = f_2162_1634(d_69da_dfec, 1);
    d_69da_dfa6[0][q] = 0;
    d_69da_dfa6[2][q] = 0;
    f_9007_430d(q, c, d_28da_ad40[q], fee, 0);
    f_b8da_4c64(d_69da_d990 + 1679, p);
    d_69da_d990--;
}

void f_b8da_4c01(int p, unsigned char c, long fee)
{
    int q;

    q = d_69da_d990 + 1680;
    f_b8da_4c64(p, q);
    d_69da_d990++;
    f_9007_430d(q, c + 140, d_28da_ad40[q], fee, 0);
    f_b8da_4c64(d_69da_d98e - 1, p);
    d_69da_d98e--;
}

void f_b8da_4c64(unsigned src, unsigned dst)
{
    FILE *fp;
    unsigned char j, k;
    unsigned char i;

    d_4512_bdc8[dst].f0 = d_4512_bdc8[src].f0;
    d_4512_bdc8[dst].f1 = d_4512_bdc8[src].f1;
    d_4512_bdc8[dst].f2 = d_4512_bdc8[src].f2;
    d_4512_bdc8[dst].f3 = d_4512_bdc8[src].f3;
    d_4512_bdc8[dst].f4 = d_4512_bdc8[src].f4;
    d_4512_bdc8[dst].f5 = d_4512_bdc8[src].f5;
    d_4512_bdc8[dst].f6 = d_4512_bdc8[src].f6;
    d_4512_bdc8[dst].f7 = d_4512_bdc8[src].f7;
    d_4512_bdc8[dst].f8 = d_4512_bdc8[src].f8;
    d_4512_bdc8[dst].f9 = d_4512_bdc8[src].f9;
    d_4512_bdc8[dst].f10 = d_4512_bdc8[src].f10;
    d_4512_bdc8[dst].f11 = d_4512_bdc8[src].f11;
    d_4512_bdc8[dst].f12 = d_4512_bdc8[src].f12;
    d_4512_bdc8[dst].f13 = d_4512_bdc8[src].f13;
    d_4512_bdc8[dst].f14 = d_4512_bdc8[src].f14;
    d_4512_bdc8[dst].f15 = d_4512_bdc8[src].f15;
    d_4512_bdc8[dst].f16 = d_4512_bdc8[src].f16;
    d_4512_bdc8[dst].f17 = d_4512_bdc8[src].f17;
    d_4512_bdc8[dst].f18 = d_4512_bdc8[src].f18;
    d_4512_bdc8[dst].f19 = d_4512_bdc8[src].f19;
    d_4512_bdc8[dst].f20 = d_4512_bdc8[src].f20;
    d_4512_bdc8[dst].f21 = d_4512_bdc8[src].f21;
    d_4512_bdc8[dst].f22 = d_4512_bdc8[src].f22;
    d_4512_bdc8[dst].f23 = d_4512_bdc8[src].f23;
    d_4512_bdc8[dst].f24 = d_4512_bdc8[src].f24;
    d_4512_bdc8[dst].f25 = d_4512_bdc8[src].f25;
    d_4512_bdc8[dst].f26 = d_4512_bdc8[src].f26;
    d_4512_bdc8[dst].f27 = d_4512_bdc8[src].f27;
    d_4512_bdc8[dst].f28 = d_4512_bdc8[src].f28;
    d_4512_bdc8[dst].f29 = d_4512_bdc8[src].f29;
    d_4512_bdc8[dst].f30 = d_4512_bdc8[src].f30;
    d_4512_bdc8[dst].f31 = d_4512_bdc8[src].f31;
    for (i = 0; i <= 23; i++)
        d_28da_2a78[i][dst] = d_28da_2a78[i][src];
    for (i = 0; i <= 23; i++)
        d_3668_0000[i][dst] = d_3668_0000[i][src];
    d_69da_dfba = f_2162_1634(d_69da_dff6, 1);
    for (i = 0; i <= 9; i++)
        d_69da_dfba[i][dst] = d_69da_dfba[i][src];
    for (i = 0; i <= 3; i++)
        d_3668_ae60[i][dst] = d_3668_ae60[i][src];
    d_69da_dfa6 = f_2162_1634(d_69da_dfec, 1);
    for (i = 0; i <= 4; i++)
        d_69da_dfa6[i][dst] = d_69da_dfa6[i][src];
    d_69da_df9a = f_2162_1634(d_69da_dfe6, 1);
    d_69da_df9a[dst] = d_69da_df9a[src];
    for (i = 0; i <= 4; i++)
        for (j = 0; j <= 1; j = j + 1)
            for (k = 0; k <= 21; k = k + 1)
                if (d_4512_9e64[i][j][k] == src)
                    d_4512_9e64[i][j][k] = dst;
    for (i = 0; i <= 4; i++)
        for (j = 0; j <= 99; j = j + 1)
            if (d_69da_dfb2[i][j] == src)
                d_69da_dfb2[i][j] = dst;
    f_2162_19f6(2);
    fp = fopen(d_536d_a49d, "rb+");
    fseek(fp, (long)src * 133, 0);
    fread(d_536d_703b, 1, 133, fp);
    fseek(fp, (long)dst * 133, 0);
    fwrite(d_536d_703b, 1, 133, fp);
    fclose(fp);
}

char f_b8da_54e0(int p)
{
    unsigned char k;

    if (!f_1a70_5b94(p)) {
        d_69da_dfba = f_2162_1634(d_69da_dff6, 0);
        k = d_69da_dfba[9][p];
        if (k != 0)
            return -1;
    }
    return 0;
}

unsigned char f_b8da_5529(int team)
{
    unsigned char i;
    unsigned char found;
    unsigned char least;
    int p;

    least = 232;
    d_69da_ddb0 = 0;
    for (i = 1; i <= 14; i = i + 1) {
        p = d_4512_5498[team][i];
        if (f_b8da_54e0(p)) {
            d_69da_ddb0++;
            if (d_28da_2a78[15][p] < least) {
                found = i;
                least = d_28da_2a78[15][p];
            }
        }
    }
    return d_69da_ddb0 > 4 ? found : 0;
}

void f_b8da_55af(unsigned team)
{
    unsigned char i;

    if (f_1a70_2bc7(team) == 0 &&
        (f_1a70_268e(d_69da_d996, d_69da_d9bc + 1) || f_1a70_2737(d_69da_d996, d_69da_d9bc + 1) ||
         f_1a70_27c8(d_69da_d996, d_69da_d9bc + 1)) && team < 80)
        while ((i = f_b8da_5529(team)) > 0)
            f_a330_12ed(d_4512_5498[team][i], 51, 1);
}

void f_b8da_5643(unsigned team)
{
    unsigned char i;
    int p;

    if (f_1a70_2bc7(team) == 0 &&
        (f_1a70_268e(d_69da_d996, d_69da_d9bc + 1) || f_1a70_2737(d_69da_d996, d_69da_d9bc + 1) ||
         f_1a70_27c8(d_69da_d996, d_69da_d9bc + 1)) && team < 80)
        for (i = 0; i <= d_4512_023e[team] - 1; i = i + 1) {
            p = d_28da_10f0[team][i];
            if (d_28da_2a78[19][p] == 51)
                f_a330_15f1(p);
        }
}

void f_b8da_56ff(unsigned char team)
{
    unsigned char choice;
    unsigned char n;
    unsigned i;

    do {
        char buf[320];
        int list[15];

        f_1a70_5e32();
        f_1a70_4a41("Players loaned out");
        sprintf(buf, " %s ", (char far *)d_69da_b1fc[team]);
        f_1a70_3d0c(1.25, 4.0, -(d_4512_00a4[team] / 16), d_4512_00a4[team] % 16, 0, buf);
        f_1a70_3554(1.125, 7.25, 1, 2, 84, " Player");
        f_1a70_3554(11.875, 7.25, 1, 2, 72, " On loan to");
        f_1a70_3554(21.125, 7.25, 1, 2, 24, " AP");
        f_1a70_3554(24.375, 7.25, 1, 2, 24, " GL");
        f_1a70_3554(27.625, 7.25, 1, 2, 36, " AV R");
        f_1a70_3554(32.375, 7.25, 1, 2, 54, " Back");
        f_1a70_5e46();
        f_1a70_4ede(2, 1.25, 22.5, 1, 4, 301, "                 Done");
        f_1a70_5e32();
        n = 0;
        for (i = 0; i <= d_69da_d98e - 1; i++) {
            if (d_3668_0000[7][i] == team) {
                sprintf(buf, " %s", f_1a70_46c1(i));
                f_1a70_4ede(0, 1.125, n + 8.75, 1, n % 2 == 0 ? 3 : 15, 84, buf);
                sprintf(buf, " %s", (char far *)d_69da_b1fc[d_28da_2a78[18][i]]);
                f_1a70_3554(11.875, n + 8.75, 1, 4, 72, buf);
                sprintf(buf, " %d", d_3668_0000[12][i]);
                f_1a70_3554(21.125, n + 8.75, 1, 12, 24, buf);
                sprintf(buf, " %d", d_3668_0000[13][i]);
                f_1a70_3554(24.375, n + 8.75, 1, 12, 24, buf);
                if (d_3668_0000[12][i] > 0) {
                    float avg;

                    d_69da_dfa6 = f_2162_1634(d_69da_dfec, 0);
                    avg = (float)d_69da_dfa6[2][i] / d_3668_0000[12][i];
                    sprintf(buf, " %4.2f", avg);
                } else
                    strcpy(buf, " ----");
                f_1a70_3554(27.625, n + 8.75, 1, 12, 36, buf);
                sprintf(buf, " %d Week%s", d_3668_0000[8][i], d_3668_0000[8][i] > 1 ? "s" : "");
                f_1a70_3554(32.375, n + 8.75, 1, 12, 54, buf);
                list[n] = i;
                n++;
                if (n == 13)
                    i = d_69da_d98e - 1;
            }
        }
        for (; n < 13; n++) {
            f_1a70_3554(1.125, n + 8.75, 1, n % 2 == 0 ? 3 : 15, 84, "");
            f_1a70_3554(11.875, n + 8.75, 1, 4, 72, "");
            f_1a70_3554(21.125, n + 8.75, 1, 12, 24, "");
            f_1a70_3554(24.375, n + 8.75, 1, 12, 24, "");
            f_1a70_3554(27.625, n + 8.75, 1, 12, 36, "");
            f_1a70_3554(32.375, n + 8.75, 1, 12, 54, "");
        }
        f_1a70_5e46();
        do {
            choice = f_1a70_53de(-1);
            if (choice >= 2) {
                unsigned p;

                p = list[choice - 2];
                do {
                    f_aac9_42ed(p, -1, -1);
                    f_9007_4da1(p, d_69da_d9e8);
                } while (!d_69da_ddbe);
                d_69da_ddbe = 0;
            }
        } while (choice == 0);
    } while (choice > 1);
}

void f_b8da_5d03(void)
{
    unsigned char i;

    for (i = 0; i <= 19; i++) {
        if (d_4512_0148[i] < 16) {
            unsigned char a, b, c, up;

            a = d_4512_15c8[i];
            b = d_4512_161a[i];
            c = d_4512_166c[i];
            up = 0;
            if (d_4512_0148[i] == 13 && a < 6
                || d_4512_0148[i] == 14 && a < 6 && (a + b + c) / 3 < 3
                || d_4512_0148[i] == 15 && a < 6 && (a + b + c) / 3 < 2)
                up = 1;
            d_4512_0148[i] += up;
        }
    }
}

char f_b8da_5e02(int player)
{
    char r;
    unsigned char club;
    char buf[320];

    r = 0;
    club = d_3668_0000[7][player];
    if (f_1a70_2bc7(club)) {
        do {
            f_1a70_4a41("Loan Extension");
            f_1a70_442b(1.0, 4.0, club);
            sprintf(buf, "%s want to extend", (char far *)d_69da_b1fc[d_28da_2a78[18][d_69da_d9ae]]);
            f_1a70_0adb(7, buf);
            sprintf(buf, "%s's loan by a month", f_1a70_4739(player));
            f_1a70_0adb(9, buf);
            f_1a70_2eaa(12, "", "View Factfile|Accept Request|Refuse request|");
            f_1a70_3226(2);
            if (d_69da_d992 == 0) {
                do
                    f_aac9_42ed(player, -1, 0);
                while (!d_69da_ddbe);
                d_69da_ddbe = 0;
            } else if (d_69da_d992 == 1)
                r = -1;
        } while (d_69da_d992 == 0);
    } else if (d_3668_0000[9][player] < 2 && f_9007_29b8(player, club) > 1)
        r = -1;
    return r;
}

char far *f_b8da_5f44(int player)
{
    char far *s;
    unsigned char apps, goals;
    unsigned pts;

    s = f_2162_0f38();
    apps = d_3668_0000[12][player];
    goals = d_3668_0000[13][player];
    d_69da_dfa6 = f_2162_1634(d_69da_dfec, 0);
    pts = d_69da_dfa6[2][player];
    strcpy(s, "");
    if (apps < 4)
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

void f_b8da_609f(void)
{
    char buf[320];

    f_1a70_4a41("");
    f_2162_0897(16);
    f_2162_08b5(24, 19, 304, 189);
    f_2162_0897(30);
    f_2162_08b5(20, 15, 300, 185);
    d_69da_da5e = 2;
    f_1a70_0137(24, 19, 296, 43);
    strcpy(buf, "Championship Manager '94");
    f_1a70_344b(136 - strlen(buf) * 3 + 32, 30, 1, buf);
    strcpy(buf, "Game Environment");
    f_1a70_344b(136 - strlen(buf) * 3 + 32, 38, 1, buf);
    d_69da_da5e = 8;
    f_1a70_0137(24, 161, 296, 181);
    f_2162_08a6(16);
    f_2162_090f(26, 172, 294, 179);
    strcpy(buf, "Progress");
    f_1a70_344b(136 - strlen(buf) * 3 + 32, 170, 1, buf);
    memset(d_69da_dfda, 100, 10);
    f_b8da_61ff(255);
}

void f_b8da_61ff(unsigned char stage)
{
    unsigned char i;

    for (i = 0; i <= 9; i = i + 1)
        f_b8da_6239(i, i == stage ? -1 : 0);
}

void f_b8da_6239(unsigned char n, char on)
{
    char far *labels[20] = {
        "Preparing", "Disk", "Creating", "Player Data",
        "Creating", "Staff Data", "Creating", "Euro Data", "Creating", "Club Records",
        "Creating", "Fixture List", "Player", "Retirements", "Creating", "Squads", "Computer",
        "Intelligence", "Transfer", "List"
    };
    int x, y;

    if (d_69da_dfda[n] == on)
        return;
    if (on)
        d_69da_da5e = 9;
    else
        d_69da_da5e = 12;
    if (n <= 4) {
        x = 28;
        y = n * 22 + 49;
    } else {
        x = 163;
        y = (n - 5) * 22 + 49;
    }
    f_1a70_0137(x, y, x + 129, y + 18);
    f_1a70_344b(x + (64 - strlen(labels[n * 2]) * 3) + 8, y + 9, 1, labels[n * 2]);
    f_1a70_344b(x + (64 - strlen(labels[n * 2 + 1]) * 3) + 8, y + 16, 1, labels[n * 2 + 1]);
    d_69da_dfda[n] = on;
}

void f_b8da_6369(char stage, unsigned i, unsigned n)
{
    float f;
    int w;

    if (i > 0) {
        f = i * 266.0;
        f = f / n;
        w = f;
        f_2162_0897(17);
        f_2162_08b5(27, 173, w + 27, 178);
    } else {
        f_2162_0897(24);
        f_2162_08b5(27, 173, 293, 178);
    }
}

void f_b8da_63e5(void)
{
    f_b8da_6e6a("Mouse commands");
    f_1a70_344b(38, 56, 5, "No mouse driver has been detected. A mouse is");
    f_1a70_344b(38, 64, 5, "recommended, but you can use the keyboard  as");
    f_1a70_344b(38, 72, 5, "follows : -");
    f_1a70_344b(38, 84, 6, "  Up Arrow    - Move mouse up");
    f_1a70_344b(38, 92, 6, "  Down Arrow  - Move mouse down");
    f_1a70_344b(38, 100, 6, "  Left Arrow  - Move mouse left");
    f_1a70_344b(38, 108, 6, "  Right Arrow - Move mouse right");
    f_1a70_344b(38, 116, 6, "  Spacebar    - Mousebutton");
    f_1a70_344b(38, 128, 5, "To print-out a  screen, press  the  Spacebar");
    f_1a70_344b(38, 136, 5, "and the ALT key simultaneously.");
    f_1a70_5688(0);
}

void f_b8da_64b8(void)
{
    f_b8da_6e6a("Start-up Options");
    f_1a70_344b(38, 56, 1, "Please select from the following options : -");
    f_1a70_344b(38, 68, 6, "New Game");
    f_1a70_344b(38, 78, 5, "Initializes  a completely new game but takes");
    f_1a70_344b(38, 86, 5, "about 30 mins depending on the speed of your");
    f_1a70_344b(38, 94, 5, "machine.");
    f_1a70_344b(38, 106, 6, "Continue Season");
    f_1a70_344b(38, 116, 5, "Loads in  a previously saved game for you to");
    f_1a70_344b(38, 124, 5, "continue.");
    f_1a70_344b(38, 136, 6, "Quick Start");
    f_1a70_344b(38, 146, 5, "Loads in the saved game supplied (one player");
    f_1a70_344b(38, 154, 5, "game, Man Utd) but allows you to enter  your");
    f_1a70_344b(38, 162, 5, "own manager name.");
    f_1a70_5688(0);
}

void f_b8da_65b1(void)
{
    f_b8da_6e6a("Updating Options");
    f_1a70_344b(38, 56, 1, "Updating the game  environment is  a lengthy");
    f_1a70_344b(38, 64, 1, "process.  Please  select from  the following");
    f_1a70_344b(38, 72, 1, "options : -");
    f_1a70_344b(38, 84, 6, "Pause For News");
    f_1a70_344b(38, 94, 5, "Pauses  and waits for a mouse click when any");
    f_1a70_344b(38, 102, 5, "news items appear.");
    f_1a70_344b(38, 114, 6, "Don't Pause");
    f_1a70_344b(38, 124, 5, "Continues automatically without pausing  for");
    f_1a70_344b(38, 132, 5, "news items. This quickens the process.");
    f_1a70_344b(38, 144, 6, "Save Game");
    f_1a70_344b(38, 154, 5, "Saves the current state of play, for you  to");
    f_1a70_344b(38, 162, 5, "continue and update at a later date.");
    f_1a70_5688(0);
}

void f_b8da_66aa(void)
{
    unsigned char i;

    for (i = 0; i <= 49; i++)
        d_536d_1ae0[i].player = -1;
}

void f_b8da_66d3(unsigned char n)
{
    unsigned char page;
    unsigned char i;
    unsigned char line;
    unsigned char key;
    unsigned char last;
    int player;
    char buf[320];

    if (d_536d_1ae0[0].player > -1) {
        do {
            page = n / 15 + 1;
            if (n % 15 == 0 || d_69da_de03) {
                f_1a70_4a41("Transfer News");
                sprintf(buf, " Week %d ", f_1a70_68a4(d_69da_d996));
                f_1a70_3d0c(1.25, 3.5, 1, 8, 0, buf);
                f_1a70_3554(1.125, 6.0, 1, 2, 94, " Player");
                f_1a70_3554(13.125, 6.0, 1, 2, 81, " From");
                f_1a70_3554(23.5, 6.0, 1, 2, 81, " To");
                f_1a70_3554(33.875, 6.0, 1, 2, 42, " Fee");
                if (d_69da_ddb7) {
                    f_1a70_4ede(2, 1.25, 22.5, 1, 12, 53, " - Scr");
                    f_1a70_4ede(2, 32.25, 22.5, 1, 12, 53, " Scr +");
                    f_1a70_4ede(2, 8.5, 22.5, 1, 4, 185, "          Done");
                }
                d_69da_de03 = 0;
                n = (page - 1) * 15;
            }
            line = n % 15 + 1;
            last = n / 15 * 15 + 14;
            for (i = n; i <= last; line++, i = i + 1) {
                if (d_536d_1ae0[i].player > -1) {
                    sprintf(buf, " %s", f_1a70_46c1(d_536d_1ae0[i].player));
                    if (d_69da_ddb7)
                        f_1a70_4ede(0, 1.125, line + 6.125, 1, line % 2 == 0 ? 8 : 14, 94, buf);
                    else
                        f_1a70_3554(1.125, line + 6.125, 1, line % 2 == 0 ? 8 : 14, 94, buf);
                    if (d_536d_1ae0[i].from < 80)
                        sprintf(buf, " %s", (char far *)d_69da_b1fc[d_536d_1ae0[i].from]);
                    else
                        sprintf(buf, " <%s>", d_5dbf_0000[d_536d_1ae0[i].from - 140]);
                    f_1a70_3554(13.125, line + 6.125, 1, 4, 81, buf);
                    if (d_536d_1ae0[i].to < 80)
                        sprintf(buf, " %s", (char far *)d_69da_b1fc[d_536d_1ae0[i].to]);
                    else
                        sprintf(buf, " <%s>", d_5dbf_0000[d_536d_1ae0[i].to - 140]);
                    f_1a70_3554(23.5, line + 6.125, 1, 11, 81, buf);
                    if (d_536d_1ae0[i].fee == 0)
                        strcpy(buf, " Free");
                    else if (d_536d_1ae0[i].fee == 1)
                        strcpy(buf, " Loan");
                    else
                        sprintf(buf, " %dK", (int)(d_536d_1ae0[i].fee / 1000));
                    f_1a70_3554(33.875, line + 6.125, 1, 15, 42, buf);
                }
            }
            if (d_69da_ddb7) {
                do {
                    key = f_1a70_53de(-1);
                    if ((key == 1 && page == 1) || (key == 2 && d_536d_1ae0[page * 15].player == -1))
                        key = 0;
                } while (key == 0);
                if (key == 1)
                    n -= 15;
                else if (key == 2)
                    n += 15;
                else if (key >= 4) {
                    player = d_536d_1ae0[(page - 1) * 15 + key - 4].player;
                    do {
                        f_aac9_42ed(player, -1, -1);
                        f_9007_4da1(player, d_69da_d9e8);
                    } while (!d_69da_ddbe);
                    d_69da_ddbe = 0;
                }
            } else
                key = 3;
        } while (key != 3);
    } else
        f_1a70_0b80("No transfer news this week");
}

void f_b8da_6c48(void)
{
    f_b8da_6e6a("Developed By Intelek");
    f_1a70_344b(38, 56, 5, "Championship  Manager '93  and the  '94 data");
    f_1a70_344b(38, 64, 5, "disk were developed by Intelek. If you would");
    f_1a70_344b(38, 72, 5, "like to  make any  comments  about the game,");
    f_1a70_344b(38, 80, 5, "please write to us at this address : -");
    f_1a70_344b(38, 92, 6, "  Intelek");
    f_1a70_344b(38, 100, 6, "  PO Box 1738");
    f_1a70_344b(38, 108, 6, "  Bournemouth");
    f_1a70_344b(38, 120, 5, "Thanks to everyone who wrote in last time -");
    f_1a70_344b(38, 128, 5, "we intend  to  reply to all of you over the");
    f_1a70_344b(38, 136, 5, "coming weeks.");
    f_1a70_344b(38, 148, 5, "The  next  page details  the Italian edition");
    f_1a70_344b(38, 156, 5, "of Championship  Manager  which is currently");
    f_1a70_344b(38, 164, 5, "available.");
    f_1a70_5688(0);
    f_b8da_6e6a("Developed By Intelek");
    f_1a70_344b(38, 56, 1, "Championship Manager Italia");
    f_1a70_344b(38, 64, 1, "---------------------------");
    f_1a70_344b(38, 76, 6, "We  are now  able to  offer you a simulation");
    f_1a70_344b(38, 84, 6, "of the most  skillful league in  the world -");
    f_1a70_344b(38, 92, 6, "the Italian league.");
    f_1a70_344b(38, 104, 5, "Instead of away trips  to Mansfield, its the");
    f_1a70_344b(38, 112, 5, "San Siro and  Van Basten,  and  the pressure");
    f_1a70_344b(38, 120, 5, "of Italian football!");
    f_1a70_344b(38, 132, 5, "Featuring accurate information on players in");
    f_1a70_344b(38, 140, 5, "Serie A  and B,  all the correct competition");
    f_1a70_344b(38, 148, 5, "structures  and  rules  of  Italian football");
    f_1a70_344b(38, 156, 5, "this is not one to miss out on!");
    f_1a70_344b(38, 168, 5, "To order, please  read the  advert which  is");
    f_1a70_344b(38, 176, 5, "shown when loading this game.");
    f_1a70_5688(0);
}

void f_b8da_6e6a(char far *title)
{
    char buf[320];

    f_1a70_4a41("");
    f_2162_0897(16);
    f_2162_08b5(24, 19, 304, 189);
    f_2162_0897(26);
    f_2162_08b5(20, 15, 300, 185);
    d_69da_da5e = 12;
    f_1a70_0137(24, 19, 296, 43);
    strcpy(buf, "Domark's Championship Manager '94");
    f_1a70_344b(136 - strlen(buf) * 3 + 32, 30, 1, buf);
    f_1a70_344b(136 - strlen(title) * 3 + 32, 38, 1, title);
}

void f_b8da_6f34(void)
{
    char a[80];
    char b[80];
    unsigned i;

    if (d_69da_de3d) {
        for (i = 0; i <= d_69da_d98e - 1; i++) {
            d_4512_bdc8[i].f30 = 0;
            strcpy(a, f_1a70_4592(i));
            strcpy(b, f_1a70_4793(d_4512_1a30[d_28da_2a78[18][i]], 0));
            if (stricmp(a, b) == 0)
                d_4512_bdc8[i].f30 = 1;
        }
    }
}

void f_b8da_6ff1(void)
{
    unsigned char n;
    unsigned best;
    unsigned i;

    if (d_69da_d99a == 1 && d_69da_de3d)
        return;
    n = 0;
    for (i = 0; i <= d_69da_d98e - 1; i++)
        n += d_4512_bdc8[i].f28;
    while (n < 8) {
        best = 0;
        for (i = 0; i <= d_69da_d98e - 1; i++)
            if (d_28da_2a78[0][i] >= 170 && d_28da_2a78[0][i] > d_28da_2a78[0][best]
                && !d_4512_bdc8[i].f28 && d_28da_2a78[17][i] < 25)
                best = i;
        if (best > 0) {
            d_4512_bdc8[best].f28 = 1;
            n++;
        } else
            n = 8;
    }
}
