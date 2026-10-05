/* @at b628:0000 */
/* @data 60ae:7556 */
/* @module */

/* Overlay b628: new in CM93: player values, derby results, physio treatment, club news,
 * friendlies, win bonuses and board messages, penalty takers and the penalty commentary,
 * shot and goal commentary, approaching players, transfer news, loans, the new-game
 * progress window, the help pages and the credits. */
#include <stdio.h>
#include <string.h>
#include <mem.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
int f_b628_0000(int p, unsigned char team);
char f_b628_01d6(unsigned char team);
void f_b628_029e(unsigned a, unsigned b, unsigned char g1, unsigned char g2);
unsigned char f_b628_0957(unsigned char team);
void f_b628_09ef(int player);
void f_b628_0c80(int p);
void f_b628_0d28(void);
void f_b628_0ea6(void);
void f_b628_0ee5(unsigned char team);
void f_b628_14e5(unsigned char n, char lit);
void f_b628_1638(void);
void f_b628_16a1(int team, unsigned char week, int far *opp, unsigned char far *home, unsigned char far *slot);
void f_b628_177e(unsigned char team, unsigned char week);
char f_b628_1b5a(int club, int team, unsigned char week);
void f_b628_1cd0(unsigned char team, unsigned char week);
void f_b628_1e7b(unsigned char team, char c);
void f_b628_1f9c(unsigned char team, int a, int b);
void f_b628_2016(unsigned char team, unsigned char week);
void f_b628_2109(void);
void f_b628_25b2(unsigned char team, int opp);
unsigned char f_b628_27dc(int player);
void f_b628_28b8(unsigned char team);
void f_b628_2934(void);
void f_b628_296c(unsigned char team);
void f_b628_2bf7(unsigned char team);
void f_b628_30ef(unsigned char team);
void f_b628_325e(unsigned char team, char mode, char from);
void f_b628_3495(unsigned char n, char hi);
void f_b628_35e6(void);
void f_b628_364f(int player);
void f_b628_36d3(int player, unsigned char team);
void f_b628_372a(int player, unsigned char team);
void f_b628_37d5(unsigned char team);
void f_b628_3926(unsigned char team);
char far *f_b628_3a88(char given);
void f_b628_3b3f(unsigned char team);
void f_b628_3e2f(unsigned char team);
char far *f_b628_40c2(void);
void f_b628_414e(unsigned char team);
void f_b628_41ed(unsigned char team);
unsigned char f_b628_4310(unsigned char team);
int f_b628_4413(unsigned char c);
int f_b628_448b(unsigned char c);
void f_b628_4503(unsigned player, unsigned char team);
void f_b628_45a6(unsigned player, unsigned char team);
char f_b628_47ba(void);
char f_b628_47cd(void);
void f_b628_47e3(void);
void f_b628_491e(void);
void f_b628_4c59(void);
void f_b628_4ed1(void);
char f_b628_4f4c(int p);
char f_b628_4fde(int p, unsigned char c);
void f_b628_502b(int p, unsigned char c, long fee);
void f_b628_50f9(int p, unsigned char c, long fee);
void f_b628_5153(unsigned src, unsigned dst);
char f_b628_5872(int p);
unsigned char f_b628_58ba(int team);
void f_b628_5940(unsigned team);
void f_b628_59d8(unsigned team);
void f_b628_5a8e(unsigned char team);
void f_b628_61ea(void);
char f_b628_62f4(int player);
char far *f_b628_644b(int player);
void f_b628_65ab(void);
void f_b628_674e(char stage);
void f_b628_6786(unsigned char n, char on);
void f_b628_68ca(char stage, unsigned i, unsigned n);
void f_b628_694d(void);
void f_b628_6a61(void);
void f_b628_6ba7(void);
void f_b628_6ced(void);
void f_b628_6d15(unsigned char n);
void f_b628_73cb(void);
void f_b628_766b(char far *title);
void f_b628_7759(void);
void f_b628_77f4(void);

struct flags_a { unsigned char b0; unsigned f8 : 1; unsigned f9 : 1; unsigned : 6; unsigned : 2; unsigned f18 : 1; unsigned f19 : 1; unsigned : 4; unsigned : 0; unsigned f24 : 1; unsigned : 3; unsigned f28 : 1; unsigned : 1; unsigned f30 : 1; unsigned : 1; };
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
union flags { struct flags_a a; struct flags_w w; };
int f_1bd3_1307(int a, int b);
int f_1bd3_1369(int a, int b);
long f_1bd3_0d69(long n);
void far *f_1bd3_1617(int handle, int page);
void f_14bc_0ac0(int line, char far *s);
void f_14bc_0b30(char far *s);
void f_14bc_0b83(char far *s);
char f_14bc_295d(int w, int n);
char f_14bc_2b27(int a, int b);
char f_14bc_2cc0(int x);
float f_14bc_2cf4(int x);
void f_14bc_2f90(int n, char far *title, char far *items);
void f_14bc_3334(int last);
void f_14bc_3e40(float x, float y, int bg, int fg, int w, char far *s);
int f_14bc_468c(int team);
char far *f_14bc_4703(int player);
char far *f_14bc_48b4(int player);
void f_14bc_4bd3(char far *title);
void f_14bc_5bfe(int team, char far *title, char far *text);
float f_14bc_6b14(int x);
void f_7732_0027(int team);
void f_8683_1244(int team, int amount);
void f_8683_1661(int team, int delta);
void f_8683_16db(int team, int b, int c);
void f_96bb_1968(int team, char far *s);
void f_a3de_14f5(char all);
extern int far d_323f_1bfe[];
extern unsigned char far d_323f_1c08[];
extern unsigned char far d_323f_28ba[][650];
extern unsigned char far d_323f_4c14[][82];
extern unsigned char far d_323f_4cb8[];
extern unsigned char far d_323f_4d5c[];
extern unsigned char far d_323f_4e52[];
extern unsigned char far d_323f_4ea4[];
extern char far d_2289_1e28[][82][5];
extern char far d_2289_2210[];
extern char far d_2289_4368[];
extern unsigned char far d_3c35_0000[][1860];
extern unsigned char far d_471b_0000[][1860];
extern unsigned char far d_471b_82c8[];
extern int far d_471b_b7a8[][26];
extern unsigned char far d_54d9_0904[][460];
extern char near *d_60ae_b572[];
extern char d_60ae_d93f;
extern char d_60ae_d957;
extern char d_60ae_d977;
extern int d_60ae_d9bc;
extern int d_60ae_da14;
extern int d_60ae_dc48;
extern int d_60ae_dc58;
extern int d_60ae_dcd0;
extern int d_60ae_dcd2;
extern int d_60ae_dce6;
extern int d_60ae_dd76;
extern int d_60ae_dd78;
extern int d_60ae_dd9c;
extern int d_60ae_dda0;
extern union flags d_60ae_ddbe[];
extern int (far *d_60ae_fae6)[1860];
extern int d_60ae_fde6;
void f_1bd3_08cb(int c);
void f_1bd3_08d6(int c);
void f_1bd3_08e1(int x1, int y1, int x2, int y2);
void f_1bd3_0928(int x1, int y1, int x2, int y2);
int f_1bd3_0c06(void);
int f_1bd3_0c0e(void);
char far *f_14bc_3523(int x);
void f_14bc_356a(int x, int y, int colour, char far *s);
void f_14bc_3672(float x, float y, int bg, int fg, int w, char far *s);
char far *f_14bc_4a83(int division);
char far *f_14bc_4b12(int division, char full);
void f_14bc_50f8(int a, float x, float y, int c, int d, int e, char far *s);
void f_14bc_548f(int n, char swap);
int f_14bc_5635(int a);
void f_14bc_589c(int team);
void f_14bc_60ca(void);
void f_14bc_60da(void);
void f_70a9_5667(int team);
extern unsigned char d_60ae_d7a2;
extern float d_60ae_d8e3;
extern float d_60ae_d8eb;
extern int d_60ae_dd56;
extern char far * far d_54d9_0000[];
extern unsigned char far d_54d9_0fe4[];
extern int far d_54d9_11fe[][2][98];
long f_14bc_5af6(int team);
char f_14bc_69ec(int x);
char f_14bc_6b4a(int player, char c);
extern int d_60ae_dbbc;
extern int d_60ae_dce8;
extern long (far *d_60ae_fade)[80];
extern int d_60ae_fde2;
extern int far d_2289_5470[][26];
extern unsigned char far d_323f_1e8e[];
extern long far d_323f_3f94[][80];
extern int far d_323f_47b4[];
extern unsigned char far d_323f_4e00[];
extern unsigned char far d_323f_4ef6[];
extern int far d_471b_d8c6[];
char far *f_14bc_483d(int player);
char f_14bc_5e18(int player);
void f_1bd3_0dbc(int ticks);
char far *f_1bd3_0efb(void);
void f_7c74_304d(int team);
void f_817e_0bfb(int team, char far *s);
void f_817e_11f4(int team, int chance, int shootout);
void f_a694_49c9(int player, int team, char buy);
extern char far d_2289_0e88[][40];
extern char far d_2289_4278[];
extern char d_60ae_d975;
extern int d_60ae_d9c2;
extern int d_60ae_dbdc;
extern int d_60ae_dbe8;
extern int d_60ae_dbea;
extern int d_60ae_dbec;
extern int d_60ae_dc6e;
extern int d_60ae_dc70;
extern int d_60ae_dd84;
long f_14bc_020c(int p, int n);
long f_14bc_0d32(long v, char c);
void f_14bc_4587(float x, float y, int team);
char f_14bc_692a(int x);
char f_14bc_694c(int x);
char f_14bc_69ca(int x);
void f_8aa1_36d2(int player, int club);
void f_8aa1_43f6(int colour, char far *s);
void f_9e77_10aa(int p);
void f_9e77_1699(int p);
extern int far d_323f_0592[][14];
extern unsigned char far d_323f_0538[][14];
extern unsigned char far d_323f_0e8a[][3][14];
extern unsigned char far d_59f5_4edb[];
extern unsigned char far d_59f5_5063[];
extern unsigned char far d_59f5_55cc[];
extern unsigned char far d_59f5_5754[];
extern char d_60ae_d8f5;
extern char d_60ae_d8fb;
extern char d_60ae_d8fc;
extern char d_60ae_d948;
extern int d_60ae_dc82;
extern int d_60ae_dc84;
extern int d_60ae_dd98;
extern int d_60ae_dda2;
extern int d_60ae_dda4;
extern unsigned char (far *d_60ae_fad2)[1860];
extern int d_60ae_fddc;
char f_14bc_2784(int w, int n);
char f_14bc_2835(int w, int n);
char f_14bc_28cc(int w, int n);
int f_14bc_2db8(int x);
char f_14bc_5e32(int player);
void f_1bd3_1a23();
void f_8aa1_44ad(int player, int to, int from, long fee, unsigned char kind);
void f_9e77_139d(int p, int a, int b);
void f_ad38_0557(int player, int team, char c);
extern unsigned char far d_54d9_1034[];
extern int far d_323f_0590[][14];
extern int far d_323f_653a[][1860];
extern int far d_323f_824a[];
extern char far d_2289_0050[];
extern char far d_2289_33c2[][6];
extern char near *d_60ae_b6ba[];
extern char d_60ae_d8f6;
extern unsigned char d_60ae_d983;
extern long far *d_60ae_faf2;
extern int d_60ae_fdec;
void f_14bc_0164(int x1, int y1, int x2, int y2);
int f_8aa1_299a(int a, int b);
void f_8aa1_4f06(int player, int a);
extern unsigned char far d_323f_61dc[];
extern unsigned char far d_323f_622e[];
extern unsigned char far d_323f_6280[];
extern int d_60ae_dd4a;
extern int d_60ae_dcd4;
extern char d_60ae_fafa[];
char far *f_14bc_490d(int manager, char full);
void f_14bc_58db(int a);
int f_14bc_6b05(int x);
struct news { int player; unsigned char from; unsigned char to; long fee; };
extern struct news far d_2289_7986[];
extern char d_60ae_d930;
extern char d_60ae_d97c;


int f_b628_0000(int p, unsigned char team)
{
    long v;
    unsigned char a[20] = {20, 20, 20, 20, 20, 30, 30, 30, 30, 35, 40, 60, 80, 100, 125, 150, 175, 200, 200, 200};
    unsigned char b[5] = {20, 50, 80, 100, 125};
    float c[4] = {1.0, 0.8, 0.65, 0.6};

    v = a[f_1bd3_1307(f_1bd3_1369(d_323f_28ba[0][p] / 10, 19), 0)] * 2000L;
    if (f_b628_01d6(team))
        v = v + 250000L;
    else
        v = v + b[d_323f_4d5c[team] - 13] * 1000L;
    v = v / 3;
    v = v * c[team / 20] * 1.0;
    v = v + d_323f_28ba[0][p] * 35L;
    v = v / 1000;
    if (v < 100)
        v = v / 5 * 5;
    else
        v = v / 10 * 10;
    return v;
}

char f_b628_01d6(unsigned char team)
{
    char buf[40];

    strcpy(buf, d_60ae_b572[team]);
    if (strstr(buf, "Arsenal") || strstr(buf, "Tottenham") || strstr(buf, "Leeds")
        || strstr(buf, "Man Utd") || strstr(buf, "Aston Villa") || strstr(buf, "Liverpool")
        || strstr(buf, "Everton"))
        return -1;
    return 0;
}

void f_b628_029e(unsigned a, unsigned b, unsigned char g1, unsigned char g2)
{
    float f = 10;
    float m;
    unsigned char r;
    char buf[100];

    if (g1 >= g2) {
        m = g1 == g2 ? 0.5 : 1.0;
        f += a == d_60ae_dcd0;
        f += (g1 - g2) * 0.5;
        if (b < 80) {
            f += (3 - b / 20) / 2;
            f += (d_323f_4d5c[b] - d_323f_4d5c[a]) / 3 * m;
            if (a / 20 == b / 20) {
                f += (f_14bc_468c(a) - f_14bc_468c(b)) / 8 * (f_1bd3_1369(d_60ae_dd78, 10) / 10) * m;
                f += (f_b628_0957(b) - f_b628_0957(a)) / 10 * m;
            } else {
                f += (a / 20 - b / 20) * 3 * m;
                f += (f_b628_0957(b) - f_b628_0957(a)) / 20 * m;
            }
            if (d_60ae_dc58 > 24)
                f += (d_60ae_dc58 - 24) / 4 * m;
        } else
            f += (d_54d9_0904[0][b - 80] - f_14bc_2cf4(a)) * m;
        if (g1 > g2) {
            r = f_1bd3_1307(f, 10);
            if (d_323f_4ea4[a] > 0)
                f_b628_28b8(a);
        } else
            r = f_1bd3_1307(f_1bd3_1369(f, 14), 8);
    } else if (g1 < g2) {
        f -= (g2 - g1) * 0.5;
        if (b < 80) {
            f -= (d_323f_4d5c[a] - d_323f_4d5c[b]) / 3;
            if (a / 20 == b / 20) {
                f -= (f_14bc_468c(b) - f_14bc_468c(a)) / 8 * (f_1bd3_1369(d_60ae_dd78, 10) / 10);
                f -= (f_b628_0957(a) - f_b628_0957(b)) / 10;
            } else {
                f -= (b / 20 - a / 20) * 3;
                f -= (f_b628_0957(a) - f_b628_0957(b)) / 20;
            }
            if (d_60ae_dc58 > 24)
                f -= (d_60ae_dc58 - 24) / 4;
        } else
            f -= f_14bc_2cf4(a) - d_54d9_0904[0][b - 80];
        r = f_1bd3_1369(f, 10);
    }
    if (f_14bc_2cc0(a)) {
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
            if (d_60ae_dc58 > 24)
                strcat(buf, " derby");
            strcat(buf, " result.");
            if (f_14bc_2cc0(a))
                f_96bb_1968(a, buf);
        }
    }
    if (a < 80) {
        f_8683_1661(a, (r - 10) * 1.5);
        f_8683_1244(a, r * 300 / f_14bc_6b14(a));
        d_323f_4c14[0][a] = f_1bd3_1307(1, f_1bd3_1369(16, r + d_323f_4c14[0][a] - 10));
        if (r >= 13 && d_60ae_dd9c > 10 && f_14bc_295d(d_60ae_dd9c, d_60ae_dd76 + 1) == 0) {
            if (r > d_323f_1bfe[4] || d_323f_1bfe[0] == -1) {
                d_323f_1bfe[0] = a;
                d_323f_1bfe[1] = b;
                strcpy(d_2289_2210, a == d_60ae_dcd2 ? "H" : "A");
                if (f_14bc_2b27(d_60ae_dd9c, d_60ae_dd76 + 1))
                    strcpy(d_2289_2210, "N");
                d_323f_1bfe[2] = g1;
                if (d_60ae_d957)
                    d_323f_1bfe[2] = -d_323f_1bfe[2];
                d_323f_1bfe[3] = g2;
                d_323f_1bfe[4] = r;
                f_8683_16db(d_60ae_dd9c, d_60ae_dd76 + 1, d_60ae_dc48);
                strcat(d_2289_2210, d_2289_4368);
            }
        }
    }
}

unsigned char f_b628_0957(unsigned char team)
{
    unsigned char i;
    unsigned char n = 0;
    char buf[40];
    char c;

    sprintf(buf, "%s%s", d_2289_1e28[0][team], d_2289_1e28[1][team]);
    for (i = 1; i <= strlen(buf); i = i + 1) {
        c = buf[i - 1];
        if (c == 'W')
            n += 3;
        else if (c == 'D' || c == 'X')
            n++;
    }
    return n;
}

void f_b628_09ef(int player)
{
    unsigned char team = d_471b_82c8[player];
    char text[320];
    char s[40];

    do {
        d_60ae_d93f = 0;
        f_14bc_4bd3("Rehabilitation");
        sprintf(text, " %s injury ", f_14bc_48b4(player));
        f_14bc_3e40(1, 4, -(d_323f_4cb8[team] / 16), d_323f_4cb8[team] % 16, 0, text);
        if (d_60ae_ddbe[player].w.f25)
            strcpy(s, "Hi-Tec");
        else if (d_60ae_ddbe[player].w.f26)
            strcpy(s, "Intermediate");
        else if (d_60ae_ddbe[player].w.f27)
            strcpy(s, "Basic");
        else
            strcpy(s, "None");
        sprintf(text, "Current treatment : %s", s);
        f_14bc_0ac0(-7, text);
        f_14bc_0ac0(9, "Select new level of treatment");
        f_14bc_2f90(12, "", "*Exit|View Costs|Last Finances|Hi-Tec Level|Intermed Level|Basic Level|No treatment|");
        do {
            d_60ae_d977 = -1;
            f_14bc_3334(6);
            d_60ae_da14 = d_60ae_dda0;
            if (d_60ae_da14 == 1) {
                f_14bc_0b30("Hi-Tec costs 10000 p/w");
                f_14bc_0b30("Intermediate costs 5000 p/w");
                if (!d_60ae_ddbe[player].w.f20)
                    f_14bc_0b30("Basic costs 3000 p/w");
                else
                    f_14bc_0b30("Basic is covered by insurance");
                d_60ae_d977 = 0;
            } else if (d_60ae_da14 == 2) {
                f_7732_0027(team);
                d_60ae_d93f = -1;
            } else if (d_60ae_da14 >= 3 && d_60ae_da14 <= 5) {
                if (d_60ae_da14 == 3) {
                    f_14bc_0b30("Hi-tec treatment selected");
                    d_60ae_ddbe[player].w.f25 = 1;
                } else if (d_60ae_da14 == 4) {
                    f_14bc_0b30("Intermediate treatment selected");
                    d_60ae_ddbe[player].w.f26 = 1;
                } else {
                    f_14bc_0b30("Basic treatment selected");
                    d_60ae_ddbe[player].w.f27 = 1;
                }
                d_60ae_d93f = -1;
            } else if (d_60ae_da14 == 6) {
                f_14bc_0b30("No treatment selected");
                d_60ae_ddbe[player].w.f25 = 0;
                d_60ae_ddbe[player].w.f26 = 0;
                d_60ae_ddbe[player].w.f27 = 0;
                d_60ae_d93f = -1;
            }
        } while (!d_60ae_d977);
    } while (d_60ae_d93f);
}

void f_b628_0c80(int p)
{
    if (d_471b_0000[23][p] == 1) {
        if (d_471b_82c8[p] / 20 == 0) {
            if (f_1bd3_0d69(3) == 0)
                d_60ae_ddbe[p].w.f25 = 1;
            else
                d_60ae_ddbe[p].w.f26 = 1;
        } else if (d_60ae_ddbe[p].w.f20 || f_1bd3_0d69(3) > 0)
            d_60ae_ddbe[p].w.f27 = 1;
    } else if (d_60ae_ddbe[p].w.f20)
        d_60ae_ddbe[p].w.f27 = 1;
}

void f_b628_0d28(void)
{
    unsigned char t;

    for (t = 0; t <= 79; t = t + 1) {
        if (f_14bc_2cc0(t)) {
            unsigned char i;
            int best_p;
            float v;
            float best;
            char title[80];
            char text[320];

            best = 0;
            for (i = 0; i <= d_323f_4e52[t] - 1; i = i + 1) {
                int p = d_471b_b7a8[t][i];
                if (d_3c35_0000[12][p] > 20) {
                    d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 0);
                    v = d_60ae_fae6[2][p] / d_3c35_0000[12][p];
                    v = v * (d_3c35_0000[13][p] / 100 + 1);
                    if (v > best) {
                        best_p = p;
                        best = v;
                    }
                }
            }
            sprintf(title, "%s Club News", (char far *)d_60ae_b572[t]);
            sprintf(text, "%s has been voted the supporter's club player of the year.", f_14bc_4703(best_p));
            f_14bc_5bfe(t, title, text);
        }
    }
}

void f_b628_0ea6(void)
{
    if (d_60ae_dce6 > 0) {
        f_a3de_14f5(0);
        if (d_60ae_d9bc > -1)
            f_b628_0ee5(d_323f_1c08[d_60ae_d9bc]);
    } else
        f_14bc_0b83("Not available on demo");
}

/* Friendlies: the friendly fixtures of weeks 1-7, and the buttons to arrange them. */
void f_b628_0ee5(unsigned char team)
{
    unsigned char i;
    unsigned char home;
    unsigned char slot;
    unsigned char week;
    unsigned char c;
    int opp;
    char buf[320];

    week = f_1bd3_1307(d_60ae_dd9c, 2);
    do {
        f_14bc_60ca();
        f_14bc_4bd3("Friendlies");
        sprintf(buf, " %s ", (char far *)d_60ae_b572[team]);
        f_14bc_3e40(1.25, 4.0, -(d_323f_4cb8[team] / 16), d_323f_4cb8[team] % 16, 0, buf);
        f_14bc_60da();
        for (c = 0; c <= 3; ++c)
            f_b628_14e5(c, 0);
        f_14bc_50f8(2, 1.25, 22.5, 1, 4, 301, "                 Done");
        f_14bc_60ca();
        f_14bc_3672(1.125, 10.25, 1, 2, 30, " Wk");
        f_14bc_3672(5.125, 10.25, 1, 2, 120, " Opponents");
        f_14bc_3672(20.375, 10.25, 1, 2, 112, " Of");
        f_14bc_3672(34.625, 10.25, 1, 2, 36, " Ven");
        for (i = 1; i <= 7; ++i) {
            sprintf(buf, " %s", f_14bc_4a83(i / 2 + 1));
            f_14bc_50f8(0, 1.125, i + 11.375, 1, 12, 30, buf);
            if (i + 1 < d_60ae_dd9c)
                f_14bc_589c(i + 1);
            f_b628_16a1(team, i + 1, &opp, &home, &slot);
            if (opp > -1) {
                sprintf(buf, " %s", f_14bc_3523(opp));
                f_14bc_3672(5.125, i + 11.375, 1, 14, 120, buf);
                if (opp < 80)
                    sprintf(buf, " %s", f_14bc_4b12(opp / 20 + 1, 0));
                else
                    sprintf(buf, " %s", d_54d9_0000[d_54d9_0fe4[opp]]);
                f_14bc_3672(20.375, i + 11.375, 1, 4, 112, buf);
                strcpy(buf, home == 0 ? " Home" : " Away");
                f_14bc_3672(34.625, i + 11.375, 0, 6, 36, buf);
            } else {
                f_14bc_3672(5.125, i + 11.375, 1, 14, 120, " No Fixture");
                f_14bc_3672(20.375, i + 11.375, 1, 4, 112, " -");
                f_14bc_3672(34.625, i + 11.375, 0, 6, 36, " -");
            }
        }
        f_14bc_3672(1.125, 19.875, 1, 4, 304, " Season starts week five ");
        f_14bc_60da();
        f_14bc_548f(week, -1);
        do {
            d_60ae_dda0 = f_14bc_5635(0);
            if (d_60ae_dda0 == 0)
                f_b628_1638();
            c = d_60ae_dda0;
            if (c >= 2 && c <= 8) {
                if (c != week) {
                    f_14bc_548f(week, 0);
                    week = c;
                    f_14bc_548f(week, -1);
                }
            } else if (c >= 9) {
                f_b628_16a1(team, week, &opp, &home, &slot);
                if (opp == -1 && c >= 10)
                    c = 0;
            }
        } while (c == 0 || c >= 2 && c <= 8);
        if (c == 9) {
            if (opp == -1)
                f_b628_177e(team, week);
            else
                f_14bc_0b83("You already have a fixture");
        } else if (c == 10)
            f_b628_1cd0(team, week);
        else if (c == 11) {
            if (opp < 80)
                f_70a9_5667(opp);
            else
                f_14bc_0b83("No information available");
        } else if (c == 12)
            f_b628_1e7b(team, week);
    } while (c != 1);
}

/* One of the four buttons under the fixtures, lit or not. */
void f_b628_14e5(unsigned char n, char lit)
{
    int x = n * 77 + 8;
    char far *label[4][2] = {"Select", "Opponents", "Select", "Venue",
                             "Opponents", "Details", "Cancel", "Fixture"};

    f_1bd3_08cb(16);
    f_1bd3_08e1(x + 2, 52, x + 75, 72);
    f_1bd3_08cb((lit ? 3 : 15) + 16);
    f_1bd3_08e1(x, 50, x + 73, 70);
    f_1bd3_08d6(19);
    f_1bd3_0928(x, 50, x + 73, 70);
    f_14bc_356a(x + (36 - strlen(label[n][0]) * 3) + 8, 59, 1, label[n][0]);
    f_14bc_356a(x + (36 - strlen(label[n][1]) * 3) + 8, 67, 1, label[n][1]);
}

/* A mouse click on one of the buttons: choice 9-12. */
void f_b628_1638(void)
{
    unsigned char i;
    unsigned x;

    for (i = 0; i <= 3; ++i) {
        x = i * 77 + 8;
        if (f_1bd3_0c0e() >= x && f_1bd3_0c0e() <= x + 73 &&
            f_1bd3_0c06() >= 50 && f_1bd3_0c06() <= 70) {
            d_60ae_dda0 = i + 9;
            i = 3;
        }
    }
}

/* The friendly of a team in a week: opponent (-1: none), at home (0) or away, and its
   fixture slot. */
void f_b628_16a1(int team, unsigned char week, int far *opp, unsigned char far *home, unsigned char far *slot)
{
    unsigned char i;

    *opp = -1;
    for (i = 0; i <= 39; i++) {
        if (d_54d9_11fe[i][0][week] / 32 == team) {
            *opp = d_54d9_11fe[i][1][week] / 32;
            *home = 0;
        } else if (d_54d9_11fe[i][1][week] / 32 == team) {
            *opp = d_54d9_11fe[i][0][week] / 32;
            *home = 1;
        } else
            continue;
        *slot = i;
        i = 39;
    }
}

/* Arrange Friendly: pick a club to approach, 48 a page. */
void f_b628_177e(unsigned char team, unsigned char week)
{
    unsigned char page;
    unsigned char key;
    int i;
    int club;
    char buf[320];
    char r;

    page = 1;
    do {
        f_14bc_4bd3("Arrange Friendly");
        sprintf(buf, " Select a team to approach ");
        f_14bc_3672(1.125, 4.0, 1, 2, 304, buf);
        f_14bc_50f8(2, 1.25, 22.5, 1, 12, 53, " - Scr");
        f_14bc_50f8(2, 32.25, 22.5, 1, 12, 53, " + Scr");
        f_14bc_50f8(2, 8.5, 22.5, 1, 4, 185, "          Done");
        for (i = 0; i <= 47; i++) {
            club = (page - 1) * 48 + i;
            d_60ae_d8e3 = i / 16 * 12.75 + 1.125;
            d_60ae_d8eb = i + 6 - i / 16 * 16;
            if (club < 540) {
                sprintf(buf, " %.15s", f_14bc_3523(club));
                f_14bc_50f8(0, d_60ae_d8e3, d_60ae_d8eb, f_14bc_2cc0(club) ? 6 : 1, 14, 100, buf);
                if (team == club)
                    f_14bc_589c(i + 4);
            } else
                f_14bc_3672(d_60ae_d8e3, d_60ae_d8eb, 1, 14, 100, "");
        }
        do
            key = f_14bc_5635(d_60ae_dd56);
        while (key == 0);
        if (key == 1)
            page = page == 1 ? 12 : page - 1;
        else if (key == 2)
            page = page == 12 ? 1 : page + 1;
        else if (key >= 4) {
            club = (page - 1) * 48 + key - 4;
            f_14bc_4bd3("Approach for friendly");
            sprintf(buf, " %s ", (char far *)d_60ae_b572[team]);
            f_14bc_3e40(1.0, 4.0, -(d_323f_4cb8[team] / 16), d_323f_4cb8[team] % 16, 0, buf);
            sprintf(buf, "Approach %s ? ", f_14bc_3523(club));
            f_14bc_0ac0(-7, buf);
            f_14bc_2f90(10, "", "*Exit|Approach Them|");
            f_14bc_3334(1);
            if (d_60ae_dda0 == 1) {
                r = f_b628_1b5a(club, team, week);
                if (r == 0)
                    f_14bc_0b30("They are not available");
                else if (r == 1)
                    f_14bc_0b30("They decline the offer");
                else {
                    f_14bc_0b30("They accept the offer");
                    f_b628_1f9c(week, team, club);
                    f_b628_1cd0(team, week);
                    key = 3;
                }
            }
        }
    } while (key != 3);
}

/* A club's answer to a friendly: 0 not available, 1 declined, 2 accepted. */
char f_b628_1b5a(int club, int team, unsigned char week)
{
    unsigned char slot;
    unsigned char home;
    int opp;
    char buf[320];

    f_b628_16a1(club, week, &opp, &home, &slot);
    if (opp > -1)
        return 0;
    if (f_14bc_2cc0(club)) {
        f_14bc_4bd3("Offer of Friendly");
        sprintf(buf, " %s ", (char far *)d_60ae_b572[club]);
        f_14bc_3e40(1.0, 4.0, -(d_323f_4cb8[club] / 16), d_323f_4cb8[club] % 16, 0, buf);
        sprintf(buf, "%s want a friendly ", f_14bc_3523(team));
        f_14bc_0ac0(-7, buf);
        f_14bc_2f90(10, "", "Accept Offer|Refuse Offer|");
        f_14bc_3334(1);
        if (d_60ae_dda0 == 1)
            return 1;
    } else {
        if (d_60ae_d7a2 % 4 == club % 4)
            return 0;
        if (f_14bc_2cf4(club) - f_14bc_2cf4(team) > 3.0 || club / 20 == team / 20)
            return 1;
    }
    return 2;
}

/* Set Venue: play the week's friendly at home or away. */
void f_b628_1cd0(unsigned char team, unsigned char week)
{
    unsigned char slot;
    unsigned char home;
    int opp;
    int t;
    char buf[320];

    f_b628_16a1(team, week, &opp, &home, &slot);
    f_14bc_4bd3("Set Venue");
    sprintf(buf, " %s ", (char far *)d_60ae_b572[team]);
    f_14bc_3e40(1.0, 4.0, -(d_323f_4cb8[team] / 16), d_323f_4cb8[team] % 16, 0, buf);
    sprintf(buf, "Friendly vs %s ", f_14bc_3523(opp));
    f_14bc_0ac0(-7, buf);
    f_14bc_2f90(10, "", "Play at Home|Play Away|");
    f_14bc_3334(1);
    if (home != d_60ae_dda0) {
        t = d_54d9_11fe[slot][0][week];
        d_54d9_11fe[slot][0][week] = d_54d9_11fe[slot][1][week];
        d_54d9_11fe[slot][1][week] = t;
        f_14bc_0b30("Ok - fixture now set");
    }
}

/* cancel a friendly */
void f_b628_1e7b(unsigned char team, char c)
{
    unsigned char idx;
    unsigned char home;
    int opp;
    char buf[320];

    f_b628_16a1(team, c, &opp, &home, &idx);
    f_14bc_4bd3("Cancel Friendly");
    sprintf(buf, " %s ", (char far *)d_60ae_b572[team]);
    f_14bc_3e40(1.0, 4.0, -(d_323f_4cb8[team] / 16), d_323f_4cb8[team] % 16, 0, buf);
    sprintf(buf, "Cancel game vs %s ? ", f_14bc_3523(opp));
    f_14bc_0ac0(-7, buf);
    f_14bc_2f90(10, "", "*Exit|Cancel Game|");
    f_14bc_3334(1);
    if (d_60ae_dda0 == 1)
        f_b628_2016(c, idx);
}

/* add a fixture to a team's list */
void f_b628_1f9c(unsigned char team, int a, int b)
{
    unsigned char n;

    n = d_471b_d8c6[team];
    d_54d9_11fe[n][0][team] = a << 5;
    d_54d9_11fe[n][1][team] = b << 5;
    d_471b_d8c6[team]++;
}

/* remove a fixture: the last one takes its place */
void f_b628_2016(unsigned char team, unsigned char week)
{
    unsigned char n;

    n = d_471b_d8c6[team] - 1;
    d_54d9_11fe[week][0][team] = d_54d9_11fe[n][0][team];
    d_54d9_11fe[week][1][team] = d_54d9_11fe[n][1][team];
    d_54d9_11fe[n][0][team] = -32;
    d_54d9_11fe[n][1][team] = -32;
    d_471b_d8c6[team]--;
}

/* board messages */
void f_b628_2109(void)
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

    for (t = 0; t <= d_60ae_dce8 - 1; ++t) {
        team = d_323f_1e8e[t];
        if (team < 255) {
            a = 0;
            b = 0;
            c = 0;
            d = 0;
            for (i = 0; i <= d_323f_4e52[team] - 1; i++) {
                if (f_14bc_6b4a(d_471b_b7a8[team][i], -1)) {
                    if (d_60ae_dbbc == 1)
                        a++;
                    else if (d_60ae_dbbc == 4)
                        b++;
                    else if (d_60ae_dbbc == 5)
                        c++;
                    else if (d_60ae_dbbc == 7)
                        d++;
                }
            }
            if (f_1bd3_0d69(5) == 0 && d_323f_4e00[team] < 65 && a >= f_1bd3_0d69(2) + 3) {
                sprintf(buf, "%s board message", (char far *)d_60ae_b572[team]);
                f_14bc_5bfe(team, buf, "We find your current team selection somewhat questionable.");
            }
            if (f_1bd3_0d69(5) == 0 && b >= f_1bd3_0d69(2) + 3) {
                sprintf(buf, "%s board message", (char far *)d_60ae_b572[team]);
                f_14bc_5bfe(team, buf, "We are concerned with the unrest between you and some of the players.");
            }
            if (f_1bd3_0d69(5) == 0 && c >= f_1bd3_0d69(2) + 3) {
                sprintf(buf, "%s board message", (char far *)d_60ae_b572[team]);
                f_14bc_5bfe(team, buf, "There seems to be a conflict between some of the players and the coach.");
            }
            if (f_1bd3_0d69(5) == 0 && d >= f_1bd3_0d69(2) + 3) {
                sprintf(buf, "%s board message", (char far *)d_60ae_b572[team]);
                f_14bc_5bfe(team, buf, "We are confused as to why you have fined some of the players. It is not helping morale.");
            }
            if (!f_14bc_69ec(d_60ae_dd9c)) {
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
                if (f_1bd3_0d69(5) == 0 && d_323f_4e52[team] >= 19 && d_323f_3f94[0][team] < low) {
                    sprintf(buf, "%s board message", (char far *)d_60ae_b572[team]);
                    f_14bc_5bfe(team, buf, "We suggest selling players to ease our current financial situation.");
                } else if (f_1bd3_0d69(5) == 0 && d_323f_4e52[team] <= 23 && d_323f_3f94[0][team] >= big) {
                    sprintf(buf, "%s board message", (char far *)d_60ae_b572[team]);
                    f_14bc_5bfe(team, buf, "The board feel that the signing of a big-name player could be beneficial.");
                } else if (f_1bd3_0d69(5) == 0 && d_323f_4e52[team] <= 23 && d_323f_3f94[0][team] >= high) {
                    sprintf(buf, "%s board message", (char far *)d_60ae_b572[team]);
                    f_14bc_5bfe(team, buf, "There is cash available for the strengthening of our squad.");
                }
            }
        }
    }
}

/* set a win bonus */
void f_b628_25b2(unsigned char team, int opp)
{
    unsigned char ok;
    char buf[320];
    long bonus[7] = {0, 100, 250, 500, 1000, 5000, 10000};

    f_14bc_4bd3("Win Bonus");
    sprintf(buf, " %s ", (char far *)d_60ae_b572[team]);
    f_14bc_3e40(1.0, 4.0, -(d_323f_4cb8[team] / 16), d_323f_4cb8[team] % 16, 0, buf);
    sprintf(buf, "Game vs %s", f_14bc_3523(opp));
    f_14bc_0ac0(-7, buf);
    f_14bc_0ac0(9, "Amount per player ?");
    f_14bc_2f90(12, "", "*No Bonus|\xa3" "100|\xa3" "250|\xa3" "500|\xa3" "1000|\xa3" "5000|\xa3" "10,000|");
    f_14bc_3334(6);
    if (d_60ae_dda0 > 0) {
        ok = 255;
        if (bonus[d_60ae_dda0] * 13 > f_14bc_5af6(team))
            ok = 0;
        else if ((d_60ae_dda0 > 5 && team / 20 > 0)
            || (d_60ae_dda0 > 4 && team / 20 > 1)
            || (d_60ae_dda0 > 3 && team / 20 > 2)
            || (d_60ae_dda0 > 2 && d_60ae_dd9c < 10))
            ok = 0;
        if (ok) {
            sprintf(buf, "Win bonus set at \xa3%ld", bonus[d_60ae_dda0]);
            f_14bc_0b30(buf);
            d_323f_4ea4[team] = d_60ae_dda0;
        } else
            f_14bc_0b30("The board refuse");
    } else {
        f_14bc_0b30("No bonus set");
        d_323f_4ea4[team] = 0;
    }
}

/* physio: days out for an injured player */
unsigned char f_b628_27dc(int player)
{
    unsigned char team = d_471b_82c8[player];
    unsigned char r;
    unsigned char days[5] = {20, 18, 15, 12, 8};
    float f;
    float mult[7] = {0, 0.8, 0.9, 1.0, 1.1, 1.25, 1.5};

    f = d_323f_4ef6[team] <= 4 ? days[d_323f_4ef6[team]] : 5;
    f = mult[d_323f_4ea4[team]] * f;
    r = f;
    return f_1bd3_1307(f_1bd3_0d69(r), f_1bd3_0d69(r));
}

/* pay the win bonus */
void f_b628_28b8(unsigned char team)
{
    long bonus[7] = {0, 100, 250, 500, 1000, 5000, 10000};

    d_60ae_fade = f_1bd3_1617(d_60ae_fde2, 1);
    d_60ae_fade[7][team] += bonus[d_323f_4ea4[team]] * 13000;
}

void f_b628_2934(void)
{
    unsigned char t;

    for (t = 0; t <= 79; ++t)
        if (f_14bc_2cc0(t))
            f_b628_296c(t);
}

/* copy a team's squad to its list and sort it */
void f_b628_296c(unsigned char team)
{
    unsigned char g;
    unsigned char i;
    unsigned char j;
    unsigned va;
    unsigned vb;
    int tmp;
    int a;
    int b;

    g = d_323f_47b4[team] - 646;
    for (i = 0; i <= d_323f_4e52[team] - 1; ++i)
        d_2289_5470[g][i] = d_471b_b7a8[team][i];
    for (i = 0; i <= d_323f_4e52[team] - 2; ++i) {
        for (j = i + 1; j <= d_323f_4e52[team] - 1; ++j) {
            a = d_2289_5470[g][i];
            b = d_2289_5470[g][j];
            va = d_60ae_ddbe[a].w.f3 * 1000 + d_60ae_ddbe[a].w.f2 * 500 + d_60ae_ddbe[a].w.f1 * 100 + d_60ae_ddbe[a].w.f6 * 50;
            vb = d_60ae_ddbe[b].w.f3 * 1000 + d_60ae_ddbe[b].w.f2 * 500 + d_60ae_ddbe[b].w.f1 * 100 + d_60ae_ddbe[b].w.f6 * 50;
            if (vb > va) {
                tmp = d_2289_5470[g][i];
                d_2289_5470[g][i] = d_2289_5470[g][j];
                d_2289_5470[g][j] = tmp;
            }
        }
    }
}

/* the penalty takers screen */
void f_b628_2bf7(unsigned char team)
{
    unsigned char row = d_323f_47b4[team] + 0x7a;
    unsigned char k;
    unsigned char mode = 0;
    unsigned char sel = 1;
    int p;
    volatile int t;         /* volatile: the original keeps it on the stack; plain, -Oe puts it in CX */
    char buf[320];

    do {
        f_14bc_4bd3("Penalty Takers");
        sprintf(buf, " %s ", (char far *)d_60ae_b572[team]);
        f_14bc_3e40(1.25, 4.0, -(d_323f_4cb8[team] / 16), d_323f_4cb8[team] % 16, 0, buf);
        f_14bc_3672(30.375, 7.25, 0, 5, 70, " Options");
        for (k = 0; k <= 4; k = k + 1)
            f_b628_3495(k, 0);
        f_14bc_50f8(2, 1.25, 22.5, 1, 4, 301, "                 Done");
        f_14bc_3672(1.125, 7.25, 0, 5, 77, " Name");
        f_14bc_3672(15.75, 7.25, 0, 5, 77, " Name");
        f_b628_30ef(team);
        f_b628_325e(team, mode, -1);
        f_14bc_548f(sel + 1, -1);
        do {
            d_60ae_dda0 = f_14bc_5635(-1);
            if (d_60ae_dda0 == 0)
                f_b628_35e6();
            k = d_60ae_dda0;
            if (k >= 2 && k <= 29) {
                f_14bc_548f(sel + 1, 0);
                sel = k - 1;
                f_14bc_548f(sel + 1, -1);
            } else if (k == 30 && sel > 1) {
                f_b628_3495(0, -1);
                t = d_2289_5470[row][sel - 1];
                d_2289_5470[row][sel - 1] = d_2289_5470[row][sel - 2];
                d_2289_5470[row][sel - 2] = t;
                sel--;
                d_60ae_d9c2 = 1;
                f_b628_30ef(team);
                f_b628_325e(team, mode, sel);
                f_b628_325e(team, mode, sel + 1);
                f_14bc_548f(sel + 1, -1);
                f_b628_3495(0, 0);
            } else if (k == 31 && d_323f_4e52[team] > sel) {
                f_b628_3495(1, -1);
                t = d_2289_5470[row][sel - 1];
                d_2289_5470[row][sel - 1] = d_2289_5470[row][sel];
                d_2289_5470[row][sel] = t;
                sel++;
                d_60ae_d9c2 = 1;
                f_b628_30ef(team);
                f_b628_325e(team, mode, sel);
                f_b628_325e(team, mode, sel - 1);
                f_14bc_548f(sel + 1, -1);
                f_b628_3495(1, 0);
            }
            if ((k == 33 && mode == 1) || (k == 34 && mode == 0)) {
                mode = mode == 0 ? 1 : 0;
                f_b628_3495(mode + 3, -1);
                f_b628_325e(team, mode, -1);
                f_b628_3495(mode + 3, 0);
            }
        } while (k != 1 && k != 32);
        if (k == 32) {
            p = d_2289_5470[row][sel - 1];
            do
                f_a694_49c9(p, -1, 0);
            while (!d_60ae_d975);
            d_60ae_d975 = 0;
        }
    } while (k != 1);
}

/* the names of the penalty takers */
void f_b628_30ef(unsigned char team)
{
    unsigned char i;
    unsigned char row;
    int p;
    float x;
    float y;
    char buf[320];

    row = d_323f_47b4[team] + 0x7a;
    for (i = 1; i <= 26; i = i + 1) {
        x = i <= 13 ? 1.125 : 15.75;
        y = (i <= 13 ? i : i - 13) + 6.625 + 1;
        if (d_323f_4e52[team] >= i) {
            p = d_2289_5470[row][i - 1];
            sprintf(buf, " %.*s", 11, f_14bc_483d(p));
            if (strcmp(buf, d_2289_0e88[d_60ae_d9c2]))
                f_14bc_50f8(0, x, y, 1, 14, 77, buf);
            else
                d_60ae_d9c2++;
        } else
            f_14bc_3672(x, y, 1, 14, 77, "");
    }
}

/* the goals or average rating column of the penalty takers (from == -1: all of it) */
void f_b628_325e(unsigned char team, char mode, char from)
{
    unsigned char i;
    unsigned char row;
    unsigned char last;
    float x;
    float y;
    char buf[40];
    register int p;
    unsigned char first;

    row = d_323f_47b4[team] + 0x7a;
    if (from == -1) {
        strcpy(buf, mode == 0 ? " GLS" : " AV R");
        f_14bc_3672(11.0, 7.25, 0, 5, 36, buf);
        f_14bc_3672(25.625, 7.25, 0, 5, 36, buf);
        first = 1;
        last = 26;
    } else {
        first = from;
        last = from;
    }
    for (i = first; i <= last; i = i + 1) {
        x = i <= 13 ? 11.0 : 25.625;
        y = (i <= 13 ? i : i - 13) + 6.625 + 1;
        if (d_323f_4e52[team] >= i) {
            p = d_2289_5470[row][i - 1];
            if (mode == 0)
                sprintf(buf, "  %d", d_3c35_0000[13][p]);
            else if (d_3c35_0000[12][p] > 0) {
                float avg;

                d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 0);
                avg = (float)d_60ae_fae6[2][p] / d_3c35_0000[12][p];
                sprintf(buf, " %4.2f", avg);
            } else
                strcpy(buf, " ----");
        } else
            strcpy(buf, "");
        f_14bc_3672(x, y, 1, 15, 36, buf);
    }
}

/* one of the screen's five buttons */
void f_b628_3495(unsigned char n, char hi)
{
    register int y = n * 21 + 63;
    char far *names[10] = { "Move", "Up", "Move", "Down", "View", "Factfile", "Show", "Goals", "Show", "Av R" };

    f_1bd3_08cb(16);
    f_1bd3_08e1(244, y + 2, 314, y + 19);
    f_1bd3_08cb((hi ? 9 : 2) + 16);
    f_1bd3_08e1(242, y, 312, y + 17);
    f_1bd3_08d6(25);
    f_1bd3_0928(242, y, 312, y + 17);
    f_14bc_356a(35 - strlen(names[n * 2]) * 3 + 250, y + 7, 1, names[n * 2]);
    f_14bc_356a(35 - strlen(names[n * 2 + 1]) * 3 + 250, y + 15, 1, names[n * 2 + 1]);
}

/* which of the five buttons the mouse is on: sets d_60ae_dda0 to 30 + its number */
void f_b628_35e6(void)
{
    unsigned char i;
    register unsigned y;

    for (i = 0; i <= 4; i = i + 1) {
        y = i * 21 + 63;
        if (f_1bd3_0c0e() >= 242 && f_1bd3_0c0e() <= 312 && f_1bd3_0c06() >= y && f_1bd3_0c06() <= y + 17) {
            d_60ae_dda0 = i + 30;
            i = 4;
        }
    }
}

/* sets d_60ae_dbdc from the player's place among his club's penalty takers */
void f_b628_364f(int player)
{
    unsigned char i = 0;
    unsigned char row = d_323f_47b4[d_471b_0000[18][player]] + 0x7a;

    if (f_14bc_5e18(player)) {
        while (d_2289_5470[row][i] != player)
            i++;
        d_60ae_dbdc = 50 - i;
    } else
        d_60ae_dbdc = f_1bd3_0d69(20);
}

/* adds a player at the end of the team's penalty takers */
void f_b628_36d3(int player, unsigned char team)
{
    unsigned char row = d_323f_47b4[team] + 0x7a;

    d_2289_5470[row][d_323f_4e52[team] - 1] = player;
}

/* takes a player out of the team's penalty takers */
void f_b628_372a(int player, unsigned char team)
{
    unsigned char row;
    unsigned char i;

    row = d_323f_47b4[team] + 0x7a;
    for (i = 0; d_2289_5470[row][i] != player; i++)
        ;
    for (; d_323f_4e52[team] - 1 >= i; i++)
        d_2289_5470[row][i] = d_2289_5470[row][i + 1];
}

/* commentary: a penalty appeal turned down */
void f_b628_37d5(unsigned char team)
{
    char msg[320];
    char name[40];
    char c;

    if (d_60ae_dc70 + d_60ae_dc6e > 0) {
        f_7c74_304d(team);
        if (team < 80)
            strcpy(name, f_14bc_483d(d_60ae_dd84));
        else
            sprintf(name, "No.%d", d_60ae_dbe8 + (d_60ae_dbe8 == 12) + 1);
        sprintf(msg, "%s %s", name, f_b628_3a88(0));
        f_817e_0bfb(team, msg);
        f_1bd3_0dbc(100);
        if (f_1bd3_0d69(20) == 0) {
            f_817e_0bfb(team, "The ref consults his linesman");
            f_1bd3_0dbc(100);
            f_817e_0bfb(team, "No penalty");
            f_1bd3_0dbc(100);
        } else {
            c = f_1bd3_0d69(5);
            if (c == 0) {
                f_817e_0bfb(team, "The ref waves play on");
                f_1bd3_0dbc(100);
            } else if (c == 1) {
                f_817e_0bfb(team, "Penalty not given");
                f_1bd3_0dbc(100);
            } else if (c == 2) {
                f_817e_0bfb(team, "No penalty");
                f_1bd3_0dbc(100);
            } else if (c == 3) {
                f_817e_0bfb(team, "The ref just turns away");
                f_1bd3_0dbc(100);
            } else {
                f_817e_0bfb(team, "Nothing given");
                f_1bd3_0dbc(100);
            }
        }
        f_817e_0bfb(d_60ae_dcd2, d_2289_4278);
    }
}

/* commentary: a penalty given */
void f_b628_3926(unsigned char team)
{
    char msg[320];
    char name[40];
    char c;

    if (d_60ae_dc70 + d_60ae_dc6e > 0) {
        f_7c74_304d(team);
        if (team < 80)
            strcpy(name, f_14bc_483d(d_60ae_dd84));
        else
            sprintf(name, "No.%d", d_60ae_dbe8 + (d_60ae_dbe8 == 12) + 1);
        sprintf(msg, "%s %s", name, f_b628_3a88(1));
        f_817e_0bfb(team, msg);
        f_1bd3_0dbc(100);
        if (f_1bd3_0d69(15) == 0) {
            f_817e_0bfb(team, "The ref consults his linesman");
            f_1bd3_0dbc(100);
            f_817e_0bfb(team, "It's a penalty!");
            f_1bd3_0dbc(100);
        } else {
            c = f_1bd3_0d69(5);
            if (c == 0) {
                f_817e_0bfb(team, "The ref gives a penalty!");
                f_1bd3_0dbc(100);
            } else if (c == 1) {
                f_817e_0bfb(team, "The ref points to the spot!");
                f_1bd3_0dbc(100);
            } else if (c == 2) {
                f_817e_0bfb(team, "Penalty!");
                f_1bd3_0dbc(100);
            } else if (c == 3) {
                f_817e_0bfb(team, "Penalty given!");
                f_1bd3_0dbc(100);
            } else {
                f_817e_0bfb(team, "Penalty kick!");
                f_1bd3_0dbc(100);
            }
        }
    }
    f_817e_11f4(team, team == d_60ae_dcd2 ? d_60ae_dbec : d_60ae_dbea, 0);
}

/* how the player went down in the area (given: the penalty was given) */
char far *f_b628_3a88(char given)
{
    char far *s = f_1bd3_0efb();
    unsigned char r = f_1bd3_0d69(7);

    if (r == 0)
        strcpy(s, "goes down in the area");
    else if (r == 1 && (given == 0 || f_1bd3_0d69(3) == 0))
        strcpy(s, "dives in the area");
    else if (r == 2 && (given == 0 || f_1bd3_0d69(3) == 0))
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

void f_b628_3b3f(unsigned char team)
{
    char ok;
    unsigned char opp;
    char line[320];
    char name[40];

    if (d_60ae_dc70 + d_60ae_dc6e > 0) {
        ok = 1;
        if (f_1bd3_0d69(f_1bd3_1369(d_60ae_dd98 * 5 + 20, 40)) == 0) {
            opp = team == d_60ae_dcd2 ? d_60ae_dcd0 : d_60ae_dcd2;
            f_b628_414e(opp);
        }
        f_7c74_304d(team);
        if (team < 80)
            strcpy(name, f_14bc_483d(d_60ae_dd84));
        else
            sprintf(name, "No.%d", d_60ae_dbe8 + (d_60ae_dbe8 == 12) + 1);
        sprintf(line, "%s %s", name, f_b628_40c2());
        f_817e_0bfb(team, line);
        f_1bd3_0dbc(100);
        if ((d_60ae_d8fc == 0 && team == d_60ae_dcd0) || (d_60ae_d8fb == 0 && team == d_60ae_dcd2))
            ok = 0;
        if (f_1bd3_0d69(60) == 0 && ok == 1) {
            f_817e_0bfb(team, "He rounds the 'keeper");
            f_1bd3_0dbc(100);
            f_817e_0bfb(team, "But somehow misses!!!");
            f_1bd3_0dbc(100);
        } else if (f_1bd3_0d69(20) == 0 && ok == 1) {
            if (f_1bd3_0d69(10) == 0) {
                f_817e_0bfb(team, "He chips it over the 'keeper");
                f_1bd3_0dbc(100);
                if (f_1bd3_0d69(2) == 0) {
                    f_817e_0bfb(team, "But it comes back off the bar!");
                    f_1bd3_0dbc(100);
                } else {
                    f_817e_0bfb(team, "But it goes over!");
                    f_1bd3_0dbc(100);
                }
            } else if (f_1bd3_0d69(2) == 0) {
                f_817e_0bfb(team, "He rounds the 'keeper");
                f_1bd3_0dbc(100);
                f_817e_0bfb(team, "But it's cleared off the line!");
                f_1bd3_0dbc(100);
            } else {
                f_817e_0bfb(team, "He slides it past the 'keeper");
                f_1bd3_0dbc(100);
                if (f_1bd3_0d69(2) == 0) {
                    f_817e_0bfb(team, "But it hits an upright!");
                    f_1bd3_0dbc(100);
                } else {
                    f_817e_0bfb(team, "But it goes wide!");
                    f_1bd3_0dbc(100);
                }
            }
        } else {
            char c;

            c = f_1bd3_0d69(11);
            if (c == 0 && ok == 1) {
                f_817e_0bfb(team, "But his shot is saved!");
                f_1bd3_0dbc(100);
            } else if (c == 1 && ok == 1) {
                f_817e_0bfb(team, "But his shot is smothered!");
                f_1bd3_0dbc(100);
            } else if (c == 2) {
                f_817e_0bfb(team, "But he blazes it over!");
                f_1bd3_0dbc(100);
            } else if (c == 3) {
                f_817e_0bfb(team, "But his shot lacks power!");
                f_1bd3_0dbc(100);
            } else if (c == 4) {
                f_817e_0bfb(team, "But his finish is poor!");
                f_1bd3_0dbc(100);
            } else if (c == 5) {
                f_817e_0bfb(team, "But he misses the target!");
                f_1bd3_0dbc(100);
            } else if (c == 6) {
                f_817e_0bfb(team, "But he shoots wide!");
                f_1bd3_0dbc(100);
            } else if (c == 7) {
                f_817e_0bfb(team, "But he's tackled!");
                f_1bd3_0dbc(100);
            } else if (c == 8) {
                f_817e_0bfb(team, "But he squanders the chance!");
                f_1bd3_0dbc(100);
            } else if (c == 9) {
                f_817e_0bfb(team, "But he wastes the chance!");
                f_1bd3_0dbc(100);
            } else {
                f_817e_0bfb(team, "But he misses!");
                f_1bd3_0dbc(100);
            }
        }
        f_817e_0bfb(d_60ae_dcd2, d_2289_4278);
    }
}

void f_b628_3e2f(unsigned char team)
{
    unsigned char c;
    char ok;
    unsigned char opp;
    char line[320];
    char name[40];

    f_7c74_304d(team);
    if (d_60ae_dc70 + d_60ae_dc6e > 0) {
        ok = 1;
        if (f_1bd3_0d69(f_1bd3_1369(d_60ae_dd98 * 5 + 20, 40)) == 0) {
            opp = team == d_60ae_dcd2 ? d_60ae_dcd0 : d_60ae_dcd2;
            f_b628_414e(opp);
        }
        if (team < 80)
            strcpy(name, f_14bc_483d(d_60ae_dd84));
        else
            sprintf(name, "No.%d", d_60ae_dbe8 + (d_60ae_dbe8 >= 12) + 1);
        sprintf(line, "%s %s", name, f_b628_40c2());
        f_817e_0bfb(team, line);
        f_1bd3_0dbc(100);
        if ((d_60ae_d8fc == 0 && team == d_60ae_dcd0) || (d_60ae_d8fb == 0 && team == d_60ae_dcd2))
            ok = 0;
        c = f_1bd3_0d69(11);
        if (c <= 3 && ok == 1) {
            if (f_1bd3_0d69(10) == 0) {
                f_817e_0bfb(team, "He chips it over the 'keeper");
                f_1bd3_0dbc(100);
                f_817e_0bfb(team, "And it's in!");
                f_1bd3_0dbc(100);
            } else if (f_1bd3_0d69(2) == 0) {
                f_817e_0bfb(team, "He rounds the 'keeper");
                f_1bd3_0dbc(100);
                f_817e_0bfb(team, "And scores!");
                f_1bd3_0dbc(100);
            } else {
                f_817e_0bfb(team, "He slides it past the 'keeper");
                f_1bd3_0dbc(100);
                f_817e_0bfb(team, "And it's in!");
                f_1bd3_0dbc(100);
            }
        } else {
            sprintf(line, "Goal for %s!", f_14bc_3523(team == d_60ae_dcd2 ? d_60ae_dc84 : d_60ae_dc82));
            f_817e_0bfb(team, line);
            f_1bd3_0dbc(100);
            if (c == 4) {
                f_817e_0bfb(team, "He finds the net");
                f_1bd3_0dbc(100);
            } else if (c == 5) {
                f_817e_0bfb(team, "He finishes in style!");
                f_1bd3_0dbc(100);
            } else if (c == 6) {
                f_817e_0bfb(team, "He finishes clinically!");
                f_1bd3_0dbc(100);
            } else if (c == 7) {
                f_817e_0bfb(team, "His finish is superb!");
                f_1bd3_0dbc(100);
            } else if (c == 8) {
                f_817e_0bfb(team, "He scores easily!");
                f_1bd3_0dbc(100);
            } else if (c == 9) {
                f_817e_0bfb(team, "He finishes well!");
                f_1bd3_0dbc(100);
            } else {
                f_817e_0bfb(team, "He scores!");
                f_1bd3_0dbc(100);
            }
        }
        f_817e_0bfb(d_60ae_dcd2, d_2289_4278);
    }
}

char far *f_b628_40c2(void)
{
    char far *s;
    char c;

    s = f_1bd3_0efb();
    if (f_1bd3_0d69(20) == 0)
        strcpy(s, "must surely score");
    else {
        c = f_1bd3_0d69(6);
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

void f_b628_414e(unsigned char team)
{
    char buf[320];
    unsigned char n;

    n = f_b628_4310(team);
    if (team < 80)
        sprintf(buf, "Bad backpass by %s!", f_14bc_483d(d_323f_0592[team][n]));
    else
        sprintf(buf, "Bad backpass by no.%d", n + (n >= 12) + 1);
    f_817e_0bfb(team, buf);
    f_1bd3_0dbc(100);
}

void f_b628_41ed(unsigned char team)
{
    unsigned char c;
    char buf[320];

    if (f_1bd3_0d69(2) == 0)
        f_817e_0bfb(team, "But it's disallowed!");
    else
        f_817e_0bfb(team, "But it won't count!");
    f_1bd3_0dbc(100);
    c = f_1bd3_0d69(9);
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
    f_817e_0bfb(team, buf);
    f_1bd3_0dbc(100);
    if ((c == 5 || c == 8) && f_1bd3_0d69(2) == 0) {
        f_817e_0bfb(team, "He waves away the protests");
        f_1bd3_0dbc(100);
    }
}

unsigned char f_b628_4310(unsigned char team)
{
    unsigned char best, i, max, v, p;

    max = 0;
    for (i = 0; i <= 13; i = i + 1) {
        if (d_323f_0538[team == d_60ae_dcd0][i] < 2) {
            p = d_323f_0e8a[team][0][i];
            if (p > 1) {
                if (f_14bc_692a(p))
                    v = 100;
                else if (f_14bc_694c(p))
                    v = 80;
                else
                    v = 50;
                if (f_14bc_69ca(p))
                    v += 10;
                v = v + f_1bd3_0d69(20) - f_1bd3_0d69(20);
                if (v > max) {
                    best = i;
                    max = v;
                }
            }
        }
    }
    return best;
}

int f_b628_4413(unsigned char c)
{
    int r, best;
    unsigned char i, n;

    n = c == 0 || c == 25 ? 4 : 1;
    for (i = 1; i <= n; i = i + 1) {
        do
            r = f_1bd3_0d69(392);
        while (d_59f5_4edb[r] != c);
        if (i == 1 || d_59f5_55cc[r] > d_59f5_55cc[best])
            best = r;
    }
    return best;
}

int f_b628_448b(unsigned char c)
{
    int r, best;
    unsigned char i, n;

    n = c == 0 || c == 255 ? 4 : 1;
    for (i = 1; i <= n; i = i + 1) {
        do
            r = f_1bd3_0d69(1385);
        while (d_59f5_5063[r] != c);
        if (i == 1 || d_59f5_5754[r] > d_59f5_5754[best])
            best = r;
    }
    return best;
}

void f_b628_4503(unsigned player, unsigned char team)
{
    long fee;

    fee = f_14bc_0d32(f_14bc_020c(player, -1), 0);
    if (f_b628_4fde(player, team) && f_14bc_5af6(team) >= fee && f_b628_47ba() == 0
        && d_60ae_d7a2 % 20 != player % 20) {
        f_8aa1_36d2(player, team);
        if (d_60ae_d948) {
            f_b628_502b(player, team, fee);
            d_60ae_d8f5 = -1;
        }
    }
}

void f_b628_45a6(unsigned player, unsigned char team)
{
    long fee;
    char done;
    unsigned char club;
    char buf[320];

    done = 0;
    club = d_471b_0000[18][player] + 116;
    do {
        f_14bc_4bd3("Approach Player");
        f_14bc_4587(1.0, 4.0, team);
        fee = f_14bc_0d32(f_14bc_020c(player, -1), 0);
        sprintf(buf, "The fee would be \xa3%ld", fee);
        f_14bc_0ac0(7, buf);
        sprintf(buf, "Approach %s ?", f_14bc_4703(player));
        f_14bc_0ac0(9, buf);
        f_14bc_2f90(12, "", "*Exit|Approach To Buy|");
        f_14bc_3334(1);
        if (d_60ae_dda0 == 0)
            done = 1;
        else if (d_60ae_dda0 == 1) {
            if (f_b628_47ba() || d_60ae_d7a2 % 20 == player % 20)
                f_14bc_0b30("A work permit cannot be obtained");
            else if (f_14bc_5af6(team) < fee)
                f_14bc_0b30("We cannot afford the fee");
            else if (f_b628_4fde(player, team) == 0)
                f_14bc_0b30("He isn't interested");
            else {
                f_14bc_0b30("He agrees to join");
                sprintf(buf, "The fee is \xa3%ld", fee);
                f_14bc_0b30(buf);
                f_8aa1_36d2(player, team);
                if (d_60ae_d948) {
                    f_b628_502b(player, team, fee);
                    d_60ae_d8f5 = -1;
                    done = 1;
                } else {
                    sprintf(buf, "He stays in %s", d_54d9_0000[club]);
                    f_8aa1_43f6(6, buf);
                }
            }
        }
    } while (done == 0);
}

char f_b628_47ba(void)
{
    if (d_60ae_dda4 > 1690)
        return -1;
    return 0;
}

char f_b628_47cd(void)
{
    if (d_60ae_dda2 + 1700 > 1850)
        return -1;
    return 0;
}

void f_b628_47e3(void)
{
    unsigned i;

    for (i = 1700; i <= d_60ae_dda2 + 1699; i++) {
        d_471b_0000[15][i] = d_471b_0000[0][i] + f_1bd3_0d69(25) - f_1bd3_0d69(25);
        d_471b_0000[21][i] = 100;
        d_471b_0000[23][i] = 1;
        d_3c35_0000[0][i] = 0;
        d_3c35_0000[1][i] = 0;
        d_3c35_0000[2][i] = 0;
        d_3c35_0000[3][i] = 0;
        d_3c35_0000[4][i] = 0;
        d_3c35_0000[12][i] = 0;
        d_3c35_0000[13][i] = 0;
        d_3c35_0000[23][i] = 0;
        d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 1);
        d_60ae_fad2[0][i] = 0xff;
        d_60ae_fad2[1][i] = 0xff;
        d_60ae_fad2[3][i] = 0;
        d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 1);
        d_60ae_fae6[0][i] = 0;
        d_60ae_fae6[2][i] = 0;
        if (d_471b_0000[20][i] == 0 && f_1bd3_0d69(10) == 0)
            f_9e77_10aa(i);
    }
}

void f_b628_491e(void)
{
    unsigned i;

    for (i = 1700; i <= d_60ae_dda2 + 1699; i++) {
        float f;
        unsigned char j, g, n;

        if (d_471b_0000[20][i] == 0) {
            if (f_1bd3_0d69(5) > 0) {
                f = (d_471b_0000[15][i] + f_1bd3_0d69(15) - f_1bd3_0d69(15)) / 50.0 + 4.0;
                g = f_1bd3_1369(f_1bd3_1307((unsigned char)f, 1), 10);
                n = 0;
                if (d_60ae_ddbe[i].w.f0 == 0)
                    for (j = 1; j <= 4; j = j + 1)
                        if (f_1bd3_0d69(d_471b_0000[7][i]) > f_1bd3_0d69(d_60ae_ddbe[i].w.f3 == 1 ? 20 : 40)
                            && f_1bd3_0d69(4) == 0)
                            n++;
                d_3c35_0000[0][i]++;
                d_3c35_0000[1][i] += n;
                if (f_1bd3_0d69(d_471b_0000[11][i]) > f_1bd3_0d69(40))
                    d_3c35_0000[2][i] = d_3c35_0000[2][i] + 5;
                d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 1);
                d_60ae_fae6[0][i] += g;
                d_60ae_fae6[2][i] += g;
                d_3c35_0000[12][i]++;
                d_3c35_0000[13][i] += n;
                if (d_3c35_0000[3][i] > g || d_3c35_0000[3][i] == 0)
                    d_3c35_0000[3][i] = g;
                if (d_3c35_0000[4][i] < g)
                    d_3c35_0000[4][i] = g;
            }
            if (f_1bd3_0d69(20) == 0)
                d_471b_0000[15][i] = d_471b_0000[0][i] + f_1bd3_0d69(25) - f_1bd3_0d69(25);
            if (f_1bd3_0d69(20) == 0)
                f_9e77_10aa(i);
        } else {
            d_471b_0000[20][i] = d_471b_0000[20][i] - 1;
            if (d_471b_0000[20][i] == 0)
                f_9e77_1699(i);
        }
        if (d_60ae_ddbe[i].w.f9 == 1 && d_60ae_dd98 > 1 && f_1bd3_0d69(50) == 0)
            d_60ae_ddbe[i].w.f9 = 0;
        else if (d_60ae_ddbe[i].w.f9 == 0 && d_60ae_dd98 > 1 && f_1bd3_0d69(50) == 0)
            d_60ae_ddbe[i].w.f9 = 1;
    }
}

void f_b628_4c59(void)
{
    unsigned p;
    unsigned t;

    if (d_60ae_dd98 > 1) {
        p = 0;
        do {
            if (f_b628_47cd() == 0 && f_b628_4f4c(p)) {
                unsigned char kind;
                unsigned char want;
                unsigned char tries;
                unsigned char best;
                unsigned club;
                long fee;
                char buf[320];

                d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 0);
                kind = d_60ae_fad2[9][p];
                if ((kind == 1 || kind == 2 || kind == 3 || kind == 4 || kind == 6 || kind == 8 ||
                     kind == 11 || kind == 25 || kind == 30) && f_1bd3_0d69(3) == 0)
                    want = kind;
                else if (f_1bd3_0d69(5) > 0)
                    want = 4;
                else {
                    unsigned char nations[4] = {2, 3, 4, 11};
                    want = nations[f_1bd3_0d69(4)];
                }
                tries = 0;
                best = 0;
                do {
                    do
                        t = f_1bd3_0d69(460) + 80;
                    while (d_54d9_1034[t - 80] != want);
                    if (f_14bc_2cf4(t) > best) {
                        club = t;
                        best = f_14bc_2cf4(t);
                    }
                    tries++;
                } while (tries < 5 || best < 13 - tries / 5);
                fee = f_14bc_0d32(f_14bc_020c(p, -1), 0);
                sprintf(buf, "%s's %s has joined %s of %s for a fee of %ld.",
                        (char far *)d_60ae_b572[d_471b_0000[18][p]], f_14bc_4703(p),
                        (char far *)d_60ae_b6ba[club - 80], d_54d9_0000[want], fee);
                f_14bc_5bfe(d_471b_0000[18][p], "Transfer News", buf);
                d_323f_3f94[0][d_471b_0000[18][p]] += fee;
                d_323f_3f94[2][d_471b_0000[18][p]] += fee;
                f_b628_50f9(p, want, fee);
            }
            p++;
        } while (p <= d_60ae_dda4 - 1);
    }
}

void f_b628_4ed1(void)
{
    unsigned p;

    if (d_60ae_d8f6 != 0 && d_60ae_dd98 == 1)
        return;
    for (p = 0x6a4; p <= d_60ae_dda2 + 0x6a3; p++)
        if ((long)d_471b_0000[17][p] > f_1bd3_0d69(4) + 32)
            f_ad38_0557(p, 255, f_1bd3_0d69(10) == 0 ? 1 : 0);
}

char f_b628_4f4c(int p)
{
    char r = 0;

    if ((d_323f_824a[p] == 0 || d_323f_824a[p] / 100 == d_60ae_dd98) &&
        d_471b_0000[0][p] > d_60ae_d7a2 % 10 + 170 &&
        d_471b_0000[15][p] >= d_471b_0000[0][p] - 5 &&
        d_471b_0000[17][p] > 22 && d_471b_0000[17][p] < 30)
        r = -1;
    return r;
}

char f_b628_4fde(int p, unsigned char c)
{
    char r = 0;

    if (f_14bc_2db8(p) <= f_14bc_2cf4(c) + 3)
        r = -1;
    return r;
}

void f_b628_502b(int p, unsigned char c, long fee)
{
    int q;

    q = d_60ae_dda4;
    f_b628_5153(p, q);
    d_60ae_dda4++;
    d_3c35_0000[0][q] = 0;
    d_3c35_0000[1][q] = 0;
    d_3c35_0000[2][q] = 0;
    d_3c35_0000[3][q] = 0;
    d_3c35_0000[4][q] = 0;
    d_3c35_0000[12][q] = 0;
    d_3c35_0000[13][q] = 0;
    d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 1);
    d_60ae_fae6[0][q] = 0;
    d_60ae_fae6[2][q] = 0;
    f_8aa1_44ad(q, c, d_471b_0000[18][q], fee, 0);
    f_b628_5153(d_60ae_dda2 + 0x6a3, p);
    d_60ae_dda2--;
}

void f_b628_50f9(int p, unsigned char c, long fee)
{
    int q;

    q = d_60ae_dda2 + 0x6a4;
    f_b628_5153(p, q);
    d_60ae_dda2++;
    f_8aa1_44ad(q, c + 140, d_471b_0000[18][q], fee, 0);
    f_b628_5153(d_60ae_dda4 - 1, p);
    d_60ae_dda4--;
}

void f_b628_5153(unsigned src, unsigned dst)
{
    FILE *fp;
    unsigned char i;

    d_60ae_ddbe[dst].w.f0 = d_60ae_ddbe[src].w.f0;
    d_60ae_ddbe[dst].w.f1 = d_60ae_ddbe[src].w.f1;
    d_60ae_ddbe[dst].w.f2 = d_60ae_ddbe[src].w.f2;
    d_60ae_ddbe[dst].w.f3 = d_60ae_ddbe[src].w.f3;
    d_60ae_ddbe[dst].w.f4 = d_60ae_ddbe[src].w.f4;
    d_60ae_ddbe[dst].w.f5 = d_60ae_ddbe[src].w.f5;
    d_60ae_ddbe[dst].w.f6 = d_60ae_ddbe[src].w.f6;
    d_60ae_ddbe[dst].w.f7 = d_60ae_ddbe[src].w.f7;
    d_60ae_ddbe[dst].w.f8 = d_60ae_ddbe[src].w.f8;
    d_60ae_ddbe[dst].w.f9 = d_60ae_ddbe[src].w.f9;
    d_60ae_ddbe[dst].w.f10 = d_60ae_ddbe[src].w.f10;
    d_60ae_ddbe[dst].w.f11 = d_60ae_ddbe[src].w.f11;
    d_60ae_ddbe[dst].w.f12 = d_60ae_ddbe[src].w.f12;
    d_60ae_ddbe[dst].w.f13 = d_60ae_ddbe[src].w.f13;
    d_60ae_ddbe[dst].w.f14 = d_60ae_ddbe[src].w.f14;
    d_60ae_ddbe[dst].w.f15 = d_60ae_ddbe[src].w.f15;
    d_60ae_ddbe[dst].w.f16 = d_60ae_ddbe[src].w.f16;
    d_60ae_ddbe[dst].w.f17 = d_60ae_ddbe[src].w.f17;
    d_60ae_ddbe[dst].w.f18 = d_60ae_ddbe[src].w.f18;
    d_60ae_ddbe[dst].w.f19 = d_60ae_ddbe[src].w.f19;
    d_60ae_ddbe[dst].w.f20 = d_60ae_ddbe[src].w.f20;
    d_60ae_ddbe[dst].w.f21 = d_60ae_ddbe[src].w.f21;
    d_60ae_ddbe[dst].w.f22 = d_60ae_ddbe[src].w.f22;
    d_60ae_ddbe[dst].w.f23 = d_60ae_ddbe[src].w.f23;
    d_60ae_ddbe[dst].w.f24 = d_60ae_ddbe[src].w.f24;
    d_60ae_ddbe[dst].w.f25 = d_60ae_ddbe[src].w.f25;
    d_60ae_ddbe[dst].w.f26 = d_60ae_ddbe[src].w.f26;
    d_60ae_ddbe[dst].w.f27 = d_60ae_ddbe[src].w.f27;
    d_60ae_ddbe[dst].w.f28 = d_60ae_ddbe[src].w.f28;
    d_60ae_ddbe[dst].w.f29 = d_60ae_ddbe[src].w.f29;
    d_60ae_ddbe[dst].w.f30 = d_60ae_ddbe[src].w.f30;
    d_60ae_ddbe[dst].w.f31 = d_60ae_ddbe[src].w.f31;
    for (i = 0; i <= 23; i++)
        d_471b_0000[i][dst] = d_471b_0000[i][src];
    for (i = 0; i <= 23; i++)
        d_3c35_0000[i][dst] = d_3c35_0000[i][src];
    d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 1);
    for (i = 0; i <= 9; i++)
        d_60ae_fad2[i][dst] = d_60ae_fad2[i][src];
    for (i = 0; i <= 3; i++)
        d_323f_653a[i][dst] = d_323f_653a[i][src];
    d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 1);
    for (i = 0; i <= 4; i++)
        d_60ae_fae6[i][dst] = d_60ae_fae6[i][src];
    d_60ae_faf2 = f_1bd3_1617(d_60ae_fdec, 1);
    d_60ae_faf2[dst] = d_60ae_faf2[src];
    f_1bd3_1a23(2);
    fp = fopen(d_2289_0050, "rb+");
    fseek(fp, (long)src * 133, 0);
    fread(d_2289_33c2, 1, 133, fp);
    fseek(fp, (long)dst * 133, 0);
    fwrite(d_2289_33c2, 1, 133, fp);
    fclose(fp);
}

char f_b628_5872(int p)
{
    unsigned char k;

    if (!f_14bc_5e32(p)) {
        d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 0);
        k = d_60ae_fad2[9][p];
        if (k != 0)
            return -1;
    }
    return 0;
}

unsigned char f_b628_58ba(int team)
{
    unsigned char i;
    unsigned char found;
    unsigned char least;
    int p;

    least = 232;
    d_60ae_d983 = 0;
    for (i = 1; i <= 14; i = i + 1) {
        p = d_323f_0590[team][i];
        if (f_b628_5872(p)) {
            d_60ae_d983++;
            if (d_471b_0000[15][p] < least) {
                found = i;
                least = d_471b_0000[15][p];
            }
        }
    }
    return d_60ae_d983 > 4 ? found : 0;
}

void f_b628_5940(unsigned team)
{
    unsigned char i;

    if (f_14bc_2cc0(team) == 0 &&
        (f_14bc_2784(d_60ae_dd9c, d_60ae_dd76 + 1) || f_14bc_2835(d_60ae_dd9c, d_60ae_dd76 + 1) ||
         f_14bc_28cc(d_60ae_dd9c, d_60ae_dd76 + 1)) && team < 80)
        while ((i = f_b628_58ba(team)) > 0)
            f_9e77_139d(d_323f_0590[team][i], 51, 1);
}

void f_b628_59d8(unsigned team)
{
    unsigned char i;
    int p;

    if (f_14bc_2cc0(team) == 0 &&
        (f_14bc_2784(d_60ae_dd9c, d_60ae_dd76 + 1) || f_14bc_2835(d_60ae_dd9c, d_60ae_dd76 + 1) ||
         f_14bc_28cc(d_60ae_dd9c, d_60ae_dd76 + 1)) && team < 80)
        for (i = 0; i <= d_323f_4e52[team] - 1; i = i + 1) {
            p = d_471b_b7a8[team][i];
            if (d_471b_0000[19][p] == 51)
                f_9e77_1699(p);
        }
}

void f_b628_5a8e(unsigned char team)
{
    unsigned char choice;
    unsigned char n;
    unsigned i;

    do {
        float avg;
        char buf[320];
        int list[15];

        f_14bc_60ca();
        f_14bc_4bd3("Players loaned out");
        sprintf(buf, " %s ", (char far *)d_60ae_b572[team]);
        f_14bc_3e40(1.25, 4.0, -(d_323f_4cb8[team] / 16), d_323f_4cb8[team] % 16, 0, buf);
        f_14bc_3672(1.125, 7.25, 1, 2, 84, " Player");
        f_14bc_3672(11.875, 7.25, 1, 2, 72, " On loan to");
        f_14bc_3672(21.125, 7.25, 1, 2, 24, " AP");
        f_14bc_3672(24.375, 7.25, 1, 2, 24, " GL");
        f_14bc_3672(27.625, 7.25, 1, 2, 36, " AV R");
        f_14bc_3672(32.375, 7.25, 1, 2, 54, " Back");
        f_14bc_60da();
        f_14bc_50f8(2, 1.25, 22.5, 1, 4, 301, "                 Done");
        f_14bc_60ca();
        n = 0;
        for (i = 0; i <= d_60ae_dda4 - 1; i++) {
            if (d_3c35_0000[7][i] == team) {
                sprintf(buf, " %s", f_14bc_483d(i));
                f_14bc_50f8(0, 1.125, n + 8.75, 1, n % 2 == 0 ? 3 : 15, 84, buf);
                sprintf(buf, " %s", (char far *)d_60ae_b572[d_471b_0000[18][i]]);
                f_14bc_3672(11.875, n + 8.75, 1, 4, 72, buf);
                sprintf(buf, " %d", d_3c35_0000[12][i]);
                f_14bc_3672(21.125, n + 8.75, 1, 12, 24, buf);
                sprintf(buf, " %d", d_3c35_0000[13][i]);
                f_14bc_3672(24.375, n + 8.75, 1, 12, 24, buf);
                if (d_3c35_0000[12][i] > 0) {
                    d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 0);
                    avg = (float)d_60ae_fae6[2][i] / d_3c35_0000[12][i];
                    sprintf(buf, " %4.2f", avg);
                } else
                    strcpy(buf, " ----");
                f_14bc_3672(27.625, n + 8.75, 1, 12, 36, buf);
                sprintf(buf, " %d Week%s", d_3c35_0000[8][i], d_3c35_0000[8][i] > 1 ? "s" : "");
                f_14bc_3672(32.375, n + 8.75, 1, 12, 54, buf);
                list[n] = i;
                n++;
                if (n == 13)
                    i = d_60ae_dda4 - 1;
            }
        }
        for (; n < 13; n++) {
            f_14bc_3672(1.125, n + 8.75, 1, n % 2 == 0 ? 3 : 15, 84, "");
            f_14bc_3672(11.875, n + 8.75, 1, 4, 72, "");
            f_14bc_3672(21.125, n + 8.75, 1, 12, 24, "");
            f_14bc_3672(24.375, n + 8.75, 1, 12, 24, "");
            f_14bc_3672(27.625, n + 8.75, 1, 12, 36, "");
            f_14bc_3672(32.375, n + 8.75, 1, 12, 54, "");
        }
        f_14bc_60da();
        do {
            choice = f_14bc_5635(-1);
            if (choice >= 2) {
                i = list[choice - 2];
                do {
                    f_a694_49c9(i, -1, -1);
                    f_8aa1_4f06(i, d_60ae_dd4a);
                } while (!d_60ae_d975);
                d_60ae_d975 = 0;
            }
        } while (choice == 0);
    } while (choice > 1);
}

void f_b628_61ea(void)
{
    unsigned char a, b, c, up;
    unsigned char i;

    for (i = 0; i <= 19; i++) {
        if (d_323f_4d5c[i] < 16) {
            a = d_323f_61dc[i];
            b = d_323f_622e[i];
            c = d_323f_6280[i];
            up = 0;
            if (d_323f_4d5c[i] == 13 && a < 6
                || d_323f_4d5c[i] == 14 && a < 6 && (a + b + c) / 3 < 3
                || d_323f_4d5c[i] == 15 && a < 6 && (a + b + c) / 3 < 2)
                up = 1;
            d_323f_4d5c[i] += up;
        }
    }
}

char f_b628_62f4(int player)
{
    char r;
    unsigned char club;
    char buf[320];

    r = 0;
    club = d_3c35_0000[7][player];
    if (f_14bc_2cc0(club)) {
        do {
            f_14bc_4bd3("Loan Extension");
            f_14bc_4587(1.0, 4.0, club);
            sprintf(buf, "%s want to extend", (char far *)d_60ae_b572[d_471b_0000[18][d_60ae_dd84]]);
            f_14bc_0ac0(7, buf);
            sprintf(buf, "%s's loan by a month", f_14bc_48b4(player));
            f_14bc_0ac0(9, buf);
            f_14bc_2f90(12, "", "View Factfile|Accept Request|Refuse request|");
            f_14bc_3334(2);
            if (d_60ae_dda0 == 0) {
                do
                    f_a694_49c9(player, -1, 0);
                while (!d_60ae_d975);
                d_60ae_d975 = 0;
            } else if (d_60ae_dda0 == 1)
                r = -1;
        } while (d_60ae_dda0 == 0);
    } else if (d_3c35_0000[9][player] < 2 && f_8aa1_299a(player, club) > 1)
        r = -1;
    return r;
}

char far *f_b628_644b(int player)
{
    char far *s;
    unsigned char apps, goals;
    unsigned pts;

    s = f_1bd3_0efb();
    apps = d_3c35_0000[12][player];
    goals = d_3c35_0000[13][player];
    d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 0);
    pts = d_60ae_fae6[2][player];
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

void f_b628_65ab(void)
{
    char buf[320];

    f_14bc_4bd3("");
    f_1bd3_08cb(16);
    f_1bd3_08e1(24, 19, 304, 189);
    f_1bd3_08cb(30);
    f_1bd3_08e1(20, 15, 300, 185);
    d_60ae_dcd4 = 2;
    f_14bc_0164(24, 19, 296, 43);
    strcpy(buf, "Championship Manager '93");
    f_14bc_356a(136 - strlen(buf) * 3 + 32, 30, 1, buf);
    strcpy(buf, "Game Environment");
    f_14bc_356a(136 - strlen(buf) * 3 + 32, 38, 1, buf);
    d_60ae_dcd4 = 8;
    f_14bc_0164(24, 161, 296, 181);
    f_1bd3_08d6(16);
    f_1bd3_0928(26, 172, 294, 179);
    strcpy(buf, "Progress");
    f_14bc_356a(136 - strlen(buf) * 3 + 32, 170, 1, buf);
    memset(d_60ae_fafa, 100, 10);
    f_b628_674e(-1);
}

void f_b628_674e(char stage)
{
    unsigned char i;

    for (i = 0; i <= 9; i = i + 1)
        f_b628_6786(i, i == stage ? -1 : 0);
}

void f_b628_6786(unsigned char n, char on)
{
    char far *labels[10][2] = {
        "Preparing", "Disk", "Creating", "Player Data",
        "Creating", "Staff Data", "Creating", "Euro Data", "Creating", "Club Records",
        "Creating", "Fixture List", "Player", "Retirements", "Creating", "Squads", "Computer",
        "Intelligence", "Transfer", "List"
    };
    int x, y;

    if (d_60ae_fafa[n] == on)
        return;
    if (on)
        d_60ae_dcd4 = 9;
    else
        d_60ae_dcd4 = 12;
    if (n <= 4) {
        x = 28;
        y = n * 22 + 49;
    } else {
        x = 163;
        y = (n - 5) * 22 + 49;
    }
    f_14bc_0164(x, y, x + 129, y + 18);
    f_14bc_356a(x + (64 - strlen(labels[n][0]) * 3) + 8, y + 9, 1, labels[n][0]);
    f_14bc_356a(x + (64 - strlen(labels[n][1]) * 3) + 8, y + 16, 1, labels[n][1]);
    d_60ae_fafa[n] = on;
}

void f_b628_68ca(char stage, unsigned i, unsigned n)
{
    float f;
    int w;

    if (i > 0) {
        f = i * 266.0;
        f = f / n;
        w = f;
        f_1bd3_08cb(17);
        f_1bd3_08e1(27, 173, w + 27, 178);
    } else {
        f_1bd3_08cb(24);
        f_1bd3_08e1(27, 173, 293, 178);
    }
}

void f_b628_694d(void)
{
    f_b628_766b("Mouse commands");
    f_14bc_356a(38, 56, 5, "No mouse driver has been detected. A mouse is");
    f_14bc_356a(38, 64, 5, "recommended, but you can use the keyboard  as");
    f_14bc_356a(38, 72, 5, "follows : -");
    f_14bc_356a(38, 84, 6, "  Up Arrow    - Move mouse up");
    f_14bc_356a(38, 92, 6, "  Down Arrow  - Move mouse down");
    f_14bc_356a(38, 100, 6, "  Left Arrow  - Move mouse left");
    f_14bc_356a(38, 108, 6, "  Right Arrow - Move mouse right");
    f_14bc_356a(38, 116, 6, "  Spacebar    - Mousebutton");
    f_14bc_356a(38, 128, 5, "To print-out a  screen, press  the  Spacebar");
    f_14bc_356a(38, 136, 5, "and the ALT key simultaneously.");
    f_14bc_58db(0);
}

void f_b628_6a61(void)
{
    f_b628_766b("Start-up Options");
    f_14bc_356a(38, 56, 1, "Please select from the following options : -");
    f_14bc_356a(38, 68, 6, "New Game");
    f_14bc_356a(38, 78, 5, "Initializes  a completely new game but takes");
    f_14bc_356a(38, 86, 5, "about 30 mins depending on the speed of your");
    f_14bc_356a(38, 94, 5, "machine.");
    f_14bc_356a(38, 106, 6, "Continue Season");
    f_14bc_356a(38, 116, 5, "Loads in  a previously saved game for you to");
    f_14bc_356a(38, 124, 5, "continue.");
    f_14bc_356a(38, 136, 6, "Quick Start");
    f_14bc_356a(38, 146, 5, "Loads in the saved game supplied (one player");
    f_14bc_356a(38, 154, 5, "game, Man Utd) but allows you to enter  your");
    f_14bc_356a(38, 162, 5, "own manager name.");
    f_14bc_58db(0);
}

void f_b628_6ba7(void)
{
    f_b628_766b("Updating Options");
    f_14bc_356a(38, 56, 1, "Updating the game  environment is  a lengthy");
    f_14bc_356a(38, 64, 1, "process.  Please  select from  the following");
    f_14bc_356a(38, 72, 1, "options : -");
    f_14bc_356a(38, 84, 6, "Pause For News");
    f_14bc_356a(38, 94, 5, "Pauses  and waits for a mouse click when any");
    f_14bc_356a(38, 102, 5, "news items appear.");
    f_14bc_356a(38, 114, 6, "Don't Pause");
    f_14bc_356a(38, 124, 5, "Continues automatically without pausing  for");
    f_14bc_356a(38, 132, 5, "news items. This quickens the process.");
    f_14bc_356a(38, 144, 6, "Save Game");
    f_14bc_356a(38, 154, 5, "Saves the current state of play, for you  to");
    f_14bc_356a(38, 162, 5, "continue and update at a later date.");
    f_14bc_58db(0);
}

void f_b628_6ced(void)
{
    unsigned char i;

    for (i = 0; i <= 49; i++)
        d_2289_7986[i].player = -1;
}

void f_b628_6d15(unsigned char n)
{
    unsigned char page;
    unsigned char i;
    unsigned char line;
    unsigned char key;
    unsigned char last;
    int player;
    char buf[320];

    if (d_2289_7986[0].player > -1) {
        do {
            page = n / 15 + 1;
            if (n % 15 == 0 || d_60ae_d930) {
                f_14bc_4bd3("Transfer News");
                sprintf(buf, " Week %d ", f_14bc_6b05(d_60ae_dd9c));
                f_14bc_3e40(1.25, 3.5, 1, 8, 0, buf);
                f_14bc_3672(1.125, 6.0, 1, 2, 94, " Player");
                f_14bc_3672(13.125, 6.0, 1, 2, 81, " From");
                f_14bc_3672(23.5, 6.0, 1, 2, 81, " To");
                f_14bc_3672(33.875, 6.0, 1, 2, 42, " Fee");
                if (d_60ae_d97c) {
                    f_14bc_50f8(2, 1.25, 22.5, 1, 12, 53, " - Scr");
                    f_14bc_50f8(2, 32.25, 22.5, 1, 12, 53, " Scr +");
                    f_14bc_50f8(2, 8.5, 22.5, 1, 4, 185, "          Done");
                }
                d_60ae_d930 = 0;
                n = (page - 1) * 15;
            }
            line = n % 15 + 1;
            last = n / 15 * 15 + 14;
            for (i = n; i <= last; line++, i = i + 1) {
                if (d_2289_7986[i].player > -1) {
                    sprintf(buf, " %s", f_14bc_483d(d_2289_7986[i].player));
                    if (d_60ae_d97c)
                        f_14bc_50f8(0, 1.125, line + 6.125, 1, line % 2 == 0 ? 8 : 14, 94, buf);
                    else
                        f_14bc_3672(1.125, line + 6.125, 1, line % 2 == 0 ? 8 : 14, 94, buf);
                    if (d_2289_7986[i].from < 80)
                        sprintf(buf, " %s", (char far *)d_60ae_b572[d_2289_7986[i].from]);
                    else
                        sprintf(buf, " <%s>", d_54d9_0000[d_2289_7986[i].from - 140]);
                    f_14bc_3672(13.125, line + 6.125, 1, 4, 81, buf);
                    if (d_2289_7986[i].to < 80)
                        sprintf(buf, " %s", (char far *)d_60ae_b572[d_2289_7986[i].to]);
                    else
                        sprintf(buf, " <%s>", d_54d9_0000[d_2289_7986[i].to - 140]);
                    f_14bc_3672(23.5, line + 6.125, 1, 11, 81, buf);
                    if (d_2289_7986[i].fee == 0)
                        strcpy(buf, " Free");
                    else if (d_2289_7986[i].fee == 1)
                        strcpy(buf, " Loan");
                    else
                        sprintf(buf, " %dK", (int)(d_2289_7986[i].fee / 1000));
                    f_14bc_3672(33.875, line + 6.125, 1, 15, 42, buf);
                }
            }
            if (d_60ae_d97c) {
                do {
                    key = f_14bc_5635(-1);
                    if ((key == 1 && page == 1) || (key == 2 && d_2289_7986[page * 15].player == -1))
                        key = 0;
                } while (key == 0);
                if (key == 1)
                    n -= 15;
                else if (key == 2)
                    n += 15;
                else if (key >= 4) {
                    player = d_2289_7986[(page - 1) * 15 + key - 4].player;
                    do {
                        f_a694_49c9(player, -1, -1);
                        f_8aa1_4f06(player, d_60ae_dd4a);
                    } while (!d_60ae_d975);
                    d_60ae_d975 = 0;
                }
            } else
                key = 3;
        } while (key != 3);
    } else
        f_14bc_0b83("No transfer news this week");
}

void f_b628_73cb(void)
{
    f_b628_766b("Developed By Intelek");
    f_14bc_356a(38, 56, 5, "Intelek  is a  new  team  formed  around the");
    f_14bc_356a(38, 64, 5, "original developers of Domark's Championship");
    f_14bc_356a(38, 72, 5, "Manager.  We  aim  to  write  software  that");
    f_14bc_356a(38, 80, 5, "provides lasting entertainment.");
    f_14bc_356a(38, 92, 5, "If you would like to make any comments about");
    f_14bc_356a(38, 100, 5, "Championship Manager '93, please write to us");
    f_14bc_356a(38, 108, 5, "at this address : -");
    f_14bc_356a(54, 120, 6, "Intelek");
    f_14bc_356a(54, 128, 6, "P.O. Box 17 38");
    f_14bc_356a(54, 136, 6, "Bournemouth");
    f_14bc_356a(54, 144, 6, "England");
    f_14bc_356a(54, 152, 6, "BH4 8YN");
    f_14bc_356a(38, 164, 5, "Future updates to Championship Manager '93");
    f_14bc_356a(38, 172, 5, "(data   updates/editors,   foreign  league");
    f_14bc_356a(38, 180, 5, "versions etc) depend on feedback from you.");
    f_14bc_58db(0);
    f_b628_766b("Developed By Intelek");
    f_14bc_356a(38, 56, 6, "Sound FX");
    f_14bc_356a(38, 64, 6, "--------");
    f_14bc_356a(38, 76, 5, "To include sound  effects of any  reasonable");
    f_14bc_356a(38, 84, 5, "quality  would have  taken up a large amount");
    f_14bc_356a(38, 92, 5, "of memory, and  meant leaving  out important");
    f_14bc_356a(38, 100, 5, "new features.");
    f_14bc_356a(38, 112, 6, "And Finally");
    f_14bc_356a(38, 120, 6, "-----------");
    f_14bc_356a(38, 132, 5, "What are your greatest achievements  playing");
    f_14bc_356a(38, 140, 5, "Championship Manager? Write and let us know.");
    f_14bc_58db(0);
}

void f_b628_766b(char far *title)
{
    char buf[320];

    f_14bc_4bd3("");
    f_1bd3_08cb(16);
    f_1bd3_08e1(24, 19, 304, 189);
    f_1bd3_08cb(26);
    f_1bd3_08e1(20, 15, 300, 185);
    d_60ae_dcd4 = 12;
    f_14bc_0164(24, 19, 296, 43);
    strcpy(buf, "Domark's Championship Manager '93");
    f_14bc_356a(136 - strlen(buf) * 3 + 32, 30, 1, buf);
    f_14bc_356a(136 - strlen(title) * 3 + 32, 38, 1, title);
}

void f_b628_7759(void)
{
    char a[80];
    char b[80];
    unsigned i;

    if (d_60ae_d8f6) {
        for (i = 0; i <= d_60ae_dda4 - 1; i++) {
            d_60ae_ddbe[i].a.f30 = 0;
            strcpy(a, f_14bc_4703(i));
            strcpy(b, f_14bc_490d(d_323f_47b4[d_471b_0000[18][i]], 0));
            if (stricmp(a, b) == 0)
                d_60ae_ddbe[i].a.f30 = 1;
        }
    }
}

void f_b628_77f4(void)
{
    unsigned char n;
    unsigned i;
    unsigned best;

    if (d_60ae_dd98 == 1 && d_60ae_d8f6)
        return;
    n = 0;
    for (i = 0; i <= d_60ae_dda4 - 1; i++)
        n += d_60ae_ddbe[i].a.f28;
    while (n < 8) {
        best = 0;
        for (i = 0; i <= d_60ae_dda4 - 1; i++)
            if (d_471b_0000[0][i] >= 170 && d_471b_0000[0][i] > d_471b_0000[0][best]
                && !d_60ae_ddbe[i].a.f28 && d_471b_0000[17][i] < 25)
                best = i;
        if (best > 0) {
            d_60ae_ddbe[best].a.f28 = 1;
            n++;
        } else
            n = 8;
    }
}
