/* @at ab30:0000 */
/* @data 61eb:6950 */
/* @module */

/* Overlay ab30. */
#include <stdio.h>
#include <string.h>
#include <mem.h>

/* the functions, in the reverse order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
int f_ab30_0000(int p, unsigned char team);
char f_ab30_01ba(unsigned char team);
void f_ab30_0265(unsigned a, unsigned b, unsigned char g1, unsigned char g2);
unsigned char f_ab30_08e9(unsigned char team);
void f_ab30_0979(int player);
void f_ab30_0bf6(int p);
void f_ab30_0cb4(void);
void f_ab30_0e3e(void);
void f_ab30_0e80(unsigned char team);
void f_ab30_1346(unsigned char n, char lit);
void f_ab30_146f(void);
void f_ab30_14d9(int team, unsigned char week, int far *opp, unsigned char far *home, unsigned char far *slot);
void f_ab30_15b3(unsigned char team, unsigned char week);
char f_ab30_18e5(int club, int team, unsigned char week);
void f_ab30_1a2a(unsigned char team, unsigned char week);
void f_ab30_1b7a(unsigned char team, char c);
void f_ab30_1c6e(unsigned char team, int a, int b);
void f_ab30_1cd2(unsigned char team, unsigned char week);
void f_ab30_1d6d(void);
void f_ab30_21cf(unsigned char team, int opp);
unsigned char f_ab30_2397(int player);
void f_ab30_2473(unsigned char team);
void f_ab30_24eb(void);
void f_ab30_2524(unsigned char team);
void f_ab30_2768(unsigned char team);
void f_ab30_2b3d(unsigned char team);
void f_ab30_2c7c(unsigned char team, char mode, char from);
void f_ab30_2e7c(unsigned char n, char hi);
void f_ab30_2fb1(void);
void f_ab30_301b(int player);
void f_ab30_30a0(int player, unsigned char team);
void f_ab30_30f0(int player, unsigned char team);
void f_ab30_3187(unsigned char team);
void f_ab30_32c7(unsigned char team);
char far *f_ab30_3419(char given);
void f_ab30_34cb(unsigned char team);
void f_ab30_3798(unsigned char team);
char far *f_ab30_3a10(void);
void f_ab30_3a99(unsigned char team);
void f_ab30_3b31(unsigned char team);
unsigned char f_ab30_3c47(unsigned char team);
int f_ab30_3d3f(unsigned char c);
int f_ab30_3db7(unsigned char c);
void f_ab30_3e2f(unsigned player, unsigned char team);
void f_ab30_3ed6(unsigned player, unsigned char team);
char f_ab30_40ce(void);
char f_ab30_40e5(void);
void f_ab30_40ff(void);
void f_ab30_4257(void);
void f_ab30_45bb(void);
void f_ab30_47a7(void);
char f_ab30_482b(int p);
char f_ab30_48a4(int p, unsigned char c);
void f_ab30_48f1(int p, unsigned char c, long fee);
void f_ab30_49df(int p, unsigned char c, long fee);
void f_ab30_4a55(unsigned src, unsigned dst);
char f_ab30_51ed(int p);
unsigned char f_ab30_5236(int team, unsigned char w, unsigned char n);
void f_ab30_5396(unsigned team, unsigned char w, unsigned char n);
void f_ab30_53ed(unsigned team);
void f_ab30_5462(unsigned char team);
void f_ab30_5a33(void);
char far *f_ab30_5b32(int player);
void f_ab30_5c8d(void);
void f_ab30_5ded(unsigned char stage);
void f_ab30_5e27(unsigned char n, char on);
void f_ab30_5f57(char stage, unsigned i, unsigned n);
void f_ab30_60a6(void);
void f_ab30_619f(void);
void f_ab30_6298(void);
void f_ab30_62c1(unsigned char n);
void f_ab30_6836(void);
void f_ab30_6968(char far *title);
void f_ab30_6a32(void);
void f_ab30_6aea(void);
void f_ab30_5fd3(void);

char unmapped_f_b8da_5e02(int player);
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
int f_215d_1343(int a, int b);
int f_215d_13af(int a, int b);
long f_215d_0d96(long n);
void far *f_215d_1629(int handle, int page);
void f_1a83_0b12(int line, char far *s);
void f_1a83_0b7d(char far *s);
void f_1a83_0bb7(char far *s);
char f_1a83_280b(int w, int n);
char f_1a83_2962(int a, int b);
char f_1a83_2ad4(int x);
float f_1a83_2b0c(int x);
void f_1a83_2da6(int n, char far *title, char far *items);
void f_1a83_3122(int last);
void f_1a83_3c08(float x, float y, int bg, int fg, int w, char far *s);
int f_1a83_440f(int team);
char far *f_1a83_4485(int player);
char far *f_1a83_462c(int player);
void f_1a83_48f9(char far *title);
void f_1a83_5844(int team, char far *title, char far *text);
float f_1a83_66fa(int x);
void f_75a4_002a(int team);
void f_8402_1106(int team, int amount);
void f_8402_14c0(int team, int delta);
void f_8402_1543(int team, int b, int c);
void f_93a1_172a(int team, char far *s);
void f_9f8d_1379(char all);
extern int far d_3334_f26e[];
extern unsigned char far d_3334_bef2[];
extern unsigned char far d_3334_bdb2[][40];
extern char far d_432e_ec37[];
extern char far d_432e_cab7[];
extern unsigned char far d_28d4_82d0[];
extern unsigned char far d_3334_cee2[];
extern unsigned char far d_3334_db94[][650];
extern unsigned char far d_432e_0000[][82];
extern unsigned char far d_3334_be02[];
extern unsigned char far d_3334_be52[];
extern unsigned char far d_3334_beca[];
extern unsigned char far d_432e_0290[];
extern char far d_432e_ed13[][40][5];
extern char far d_5313_ec37[];
extern char far d_5313_cab7[];
extern unsigned char far d_3334_0000[][1500];
extern unsigned char far d_28d4_1958[][1500];
extern int far d_28d4_081c[][26];
extern unsigned char far d_53fc_09c0[][502];
extern char near *d_61eb_b0ec[];
extern char d_61eb_da04;
extern char d_61eb_d9e8;
extern char d_61eb_d9c8;
extern int d_61eb_d980;
extern int d_61eb_d928;
extern int d_61eb_d6f0;
extern int d_61eb_d6e0;
extern int d_61eb_d668;
extern int d_61eb_d666;
extern int d_61eb_d652;
extern int d_61eb_d5c2;
extern int d_61eb_d59a;
extern int d_61eb_d5a2;
extern int d_61eb_d59e;
extern struct flags_w far d_432e_45de[];
extern int (far *d_61eb_dbb8)[1500];
extern int d_61eb_dc4e;
void f_215d_088c();
void f_215d_089b();
void f_215d_08aa(int x1, int y1, int x2, int y2);
void f_215d_0904(int x1, int y1, int x2, int y2);
int f_215d_0c08(void);
int f_215d_0c14(void);
char far *f_1a83_3300(int x);
void f_1a83_3347(int x, int y, int colour, char far *s);
void f_1a83_3450(float x, float y, int bg, int fg, int w, char far *s);
char far *f_1a83_47e8(int division);
char far *f_1a83_4876(int division, char full);
void f_1a83_4d96(int a, float x, float y, int c, int d, int e, char far *s);
void f_1a83_5117(int n, char swap);
int f_1a83_5296(int a);
void f_1a83_54f9(int team);
void f_1a83_5ccd(void);
void f_1a83_5ce1(void);
void f_6ffe_4a89(int team);
extern unsigned char d_61eb_dba1;
extern float d_61eb_da5d;
extern float d_61eb_da55;
extern int d_61eb_d5e2;
extern char far * far d_53fc_0000[];
extern unsigned char far d_53fc_1172[];
extern int far d_53fc_138c[][2][100];
long f_1a83_5747(int team);
char f_1a83_65a9(int x);
unsigned char f_1a83_6d8b(unsigned char team);
char f_1a83_6728(int player, char c);
extern int d_61eb_d780;
extern int d_61eb_d650;
extern long (far *d_61eb_dbc0)[38];
extern int d_61eb_dc52;
extern long far d_3334_cc82[][38];
extern int far d_3334_ca6e[];
extern unsigned char far d_432e_01ec[];
extern unsigned char far d_432e_bef0[];
char far *f_1a83_45b4(int player);
char f_1a83_5a2e(int player);
void f_215d_0df0(int ticks);
char far *f_215d_0f2d(void);
void f_7a45_2fe1(int team);
void f_7f4a_0a9c(int team, char far *s);
void f_7f4a_1050(int team, int chance, int shootout);
void f_a214_4120(int player, int team, char buy);
extern char d_61eb_d9ca;
extern int d_61eb_d97a;
extern int d_61eb_d75c;
extern int d_61eb_d750;
extern int d_61eb_d74e;
extern int d_61eb_d74c;
extern int d_61eb_d6ca;
extern int d_61eb_d6c8;
extern int d_61eb_d5b8;
long f_1a83_01d6(int p, int n);
long f_1a83_0cef(long v, char c);
void f_1a83_4327(float x, float y, int team);
char f_1a83_64cf(int x);
char f_1a83_64f5(int x);
char f_1a83_6583(int x);
void f_87dc_35cf(int player, int club);
void f_87dc_41a3(int colour, char far *s);
void f_9a9e_0f8a(int p);
void f_9a9e_155d(int p);
extern unsigned char far d_3334_f278[][3][16];
extern char d_61eb_da4e;
extern char d_61eb_da48;
extern char d_61eb_da47;
extern char d_61eb_d9fb;
extern int d_61eb_d6b6;
extern int d_61eb_d6b4;
extern int d_61eb_d5a4;
extern int d_61eb_d590;
extern int d_61eb_d58e;
extern unsigned char (far *d_61eb_dbcc)[1500];
extern int d_61eb_dc58;
char f_1a83_277e(int w, int n);
int f_1a83_2bdb(int x);
char f_1a83_5a4c(int player);
void f_215d_19eb();
void f_87dc_423a(int player, int to, int from, long fee, unsigned char kind);
void f_9a9e_125e(int p, int a, int b);
void f_a7b6_05a9(int player, int team, char c);
extern unsigned char far d_53fc_11ba[];
extern int far d_3334_8ca0[][1500];
extern int far d_3334_a410[];
extern char near *d_61eb_b1e0[];
extern char d_61eb_da4d;
extern unsigned char d_61eb_d9bc;
extern long far *d_61eb_dbac;
extern int d_61eb_dc48;
void f_1a83_0134(int x1, int y1, int x2, int y2);
int f_87dc_291e(int a, int b);
void f_87dc_4c9b(int player, int a);
extern int d_61eb_d5ee;
extern int d_61eb_d664;
extern char d_61eb_dc3c[];
char far *f_1a83_4686(int manager, char full);
void f_1a83_5540(int a);
int f_1a83_66e8(int x);
struct news { int player; unsigned char from, to; long fee; };
extern char d_61eb_da13;
extern char d_61eb_d9c3;
extern unsigned char far d_432e_d168[];
extern int far d_28d4_bc8c[];
extern int far d_5313_b92f[][26];
extern char far d_5313_f047[][40];
extern char far d_5313_cba7[];
extern int far d_3334_f9f8[][16];
extern unsigned char far d_432e_0384[][14];
extern unsigned char far d_5b9b_49b8[];
extern unsigned char far d_5b9b_4b73[];
extern unsigned char far d_5b9b_4fe2[];
extern unsigned char far d_5b9b_519d[];
char f_1a83_2644(int w, int n);
char f_1a83_26ed(int w, int n);
extern int far d_432e_f9f6[][14];
extern unsigned char far d_432e_c7d4[];
extern unsigned char far d_432e_c826[];
extern unsigned char far d_432e_c878[];
extern int far d_432e_35f6[][2][22];
extern int (far *d_61eb_dbc4)[100];
extern char far d_5313_0df7[];
extern char far d_5313_d995[];
extern struct news far d_5313_848e[];
extern int far d_432e_f26e[];
extern unsigned char far d_432e_cee2[];
extern char far d_5313_ed13[][82][5];
extern unsigned char far d_3334_fe98[][1860];
extern char far * far d_53fc_bce0[];
extern unsigned char far d_3334_bea2[];
extern unsigned char far d_3334_d168[];
extern int far d_28d4_0000[];
extern unsigned char far d_3334_bf1a[];
extern int far d_432e_b92f[][26];
extern char far d_432e_eea3[][40];
extern char far d_432e_cba7[];
extern unsigned char far d_432e_00a4[];
extern int d_61eb_d9ae;
extern unsigned char far d_3334_fefe[][16];
char f_1a83_2387(int);
char f_1a83_2448(int);
char f_1a83_247b(int);
char f_1a83_29a3(int);
void f_87dc_182c(int p, char all);
extern int far d_3334_f9f6[][16];
extern char far d_432e_d995[];
extern char far d_5313_0e10[];
extern unsigned char d_61eb_dba3[];
extern unsigned char far d_3334_c852[];
extern unsigned char far d_3334_c87a[];
extern unsigned char far d_3334_c8a2[];
extern struct news far d_432e_74e2[];


int f_ab30_0000(int p, unsigned char team)
{
    long v;
    unsigned char a[20] = {20, 20, 20, 20, 20, 30, 30, 30, 30, 35, 40, 60, 80, 100, 125, 150, 175, 200, 200, 200};
    unsigned char b[5] = {20, 50, 80, 100, 125};
    float c[2] = {1.0, 0.65};

    v = a[f_215d_1343(f_215d_13af(d_3334_db94[0][p] / 10, 19), 0)] * 2000L;
    if (f_ab30_01ba(team))
        v = v + 250000L;
    else
        v = v + b[d_3334_be52[team] - 13] * 1000L;
    v = v / 3;
    v = v * c[f_1a83_6d8b(team)] * 1.0;
    v = v + d_3334_db94[0][p] * 35L;
    v = v / 1000;
    if (v < 100)
        v = v / 5 * 5;
    else
        v = v / 10 * 10;
    return v;
}

char f_ab30_01ba(unsigned char team)
{
    char buf[40];

    strcpy(buf, d_61eb_b0ec[team]);
    if (strstr(buf, "Milan") || strstr(buf, "Juventus") || strstr(buf, "Inter")
        || strstr(buf, "Lazio") || strstr(buf, "Napoli") || strstr(buf, "Sampdoria"))
        return -1;
    return 0;
}

void f_ab30_0265(unsigned a, unsigned b, unsigned char g1, unsigned char g2)
{
    float f = 10;
    float m;
    unsigned char r;
    char buf[100];

    if (g1 >= g2) {
        m = g1 == g2 ? 0.5 : 1.0;
        f += a == d_61eb_d668;
        f += (g1 - g2) * 0.5;
        if (b < 38) {
            f += (3 - f_1a83_6d8b(b)) / 2;
            f += (d_3334_be52[b] - d_3334_be52[a]) / 3 * m;
            if (f_1a83_6d8b(a) == f_1a83_6d8b(b)) {
                f += (f_1a83_440f(a) - f_1a83_440f(b)) / 8 * (f_215d_13af(d_61eb_d59a, 10) / 10) * m;
                f += (f_ab30_08e9(b) - f_ab30_08e9(a)) / 10 * m;
            } else {
                f += (f_1a83_6d8b(a) - f_1a83_6d8b(b)) * 3 * m;
                f += (f_ab30_08e9(b) - f_ab30_08e9(a)) / 20 * m;
            }
            if (d_61eb_d6e0 > 24)
                f += (d_61eb_d6e0 - 24) / 4 * m;
        } else
            f += (d_53fc_09c0[0][b - 38] - f_1a83_2b0c(a)) * m;
        if (g1 > g2) {
            r = f_215d_1343(f, 10);
            if (d_3334_bef2[a] > 0)
                f_ab30_2473(a);
        } else
            r = f_215d_1343(f_215d_13af(f, 14), 8);
    } else if (g1 < g2) {
        f -= (g2 - g1) * 0.5;
        if (b < 38) {
            f -= (d_3334_be52[a] - d_3334_be52[b]) / 3;
            if (f_1a83_6d8b(a) == f_1a83_6d8b(b)) {
                f -= (f_1a83_440f(b) - f_1a83_440f(a)) / 8 * (f_215d_13af(d_61eb_d59a, 10) / 10);
                f -= (f_ab30_08e9(a) - f_ab30_08e9(b)) / 10;
            } else {
                f -= (f_1a83_6d8b(b) - f_1a83_6d8b(a)) * 3;
                f -= (f_ab30_08e9(a) - f_ab30_08e9(b)) / 20;
            }
            if (d_61eb_d6e0 > 24)
                f -= (d_61eb_d6e0 - 24) / 4;
        } else
            f -= f_1a83_2b0c(a) - d_53fc_09c0[0][b - 38];
        r = f_215d_1343(f_215d_13af(f, 10), 1);
    }
    if (f_1a83_2ad4(a)) {
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
            if (d_61eb_d6e0 > 24)
                strcat(buf, " derby");
            strcat(buf, " result.");
            if (f_1a83_2ad4(a))
                f_93a1_172a(a, buf);
        }
    }
    if (a < 38) {
        f_8402_14c0(a, (r - 10) * 3 / 2);
        f_8402_1106(a, r * 300 / f_1a83_66fa(a));
        d_3334_bdb2[0][a] = f_215d_1343(1, f_215d_13af(16, r + d_3334_bdb2[0][a] - 10));
        if (r >= 13 && d_61eb_d5a2 > 12 && f_1a83_280b(d_61eb_d5a2, d_61eb_d5c2 + 1) == 0) {
            if (r > d_3334_f26e[4] || d_3334_f26e[0] == -1) {
                d_3334_f26e[0] = a;
                d_3334_f26e[1] = b;
                strcpy(d_432e_ec37, a == d_61eb_d666 ? "H" : "A");
                if (f_1a83_2962(d_61eb_d5a2, d_61eb_d5c2 + 1))
                    strcpy(d_432e_ec37, "N");
                d_3334_f26e[2] = g1;
                if (d_61eb_d9e8)
                    d_3334_f26e[2] = -d_3334_f26e[2];
                d_3334_f26e[3] = g2;
                d_3334_f26e[4] = r;
                f_8402_1543(d_61eb_d5a2, d_61eb_d5c2 + 1, d_61eb_d6f0);
                strcat(d_432e_ec37, d_432e_cab7);
            }
        }
    }
}

unsigned char f_ab30_08e9(unsigned char team)
{
    unsigned char i;
    unsigned char n = 0;
    char buf[40];
    char c;

    sprintf(buf, "%s%s", d_432e_ed13[0][team], d_432e_ed13[1][team]);
    for (i = 1; i <= strlen(buf); i = i + 1) {
        c = buf[i - 1];
        if (c == 'W')
            n += 3;
        else if (c == 'D' || c == 'X')
            n++;
    }
    return n;
}

void f_ab30_0979(int player)
{
    unsigned char team = d_28d4_82d0[player];
    char text[320];
    char s[40];

    do {
        d_61eb_da04 = 0;
        f_1a83_48f9("Rehabilitation");
        sprintf(text, " %s injury ", f_1a83_462c(player));
        f_1a83_3c08(1, 4, -(d_3334_be02[team] / 16), d_3334_be02[team] % 16, 0, text);
        if (d_432e_45de[player].f25)
            strcpy(s, "Hi-Tec");
        else if (d_432e_45de[player].f26)
            strcpy(s, "Intermediate");
        else if (d_432e_45de[player].f27)
            strcpy(s, "Basic");
        else
            strcpy(s, "None");
        sprintf(text, "Current treatment : %s", s);
        f_1a83_0b12(-7, text);
        f_1a83_0b12(9, "Select new level of treatment");
        f_1a83_2da6(12, "", "*Exit|View Costs|Last Finances|Hi-Tec Level|Intermed Level|Basic Level|No treatment|");
        do {
            d_61eb_d9c8 = -1;
            f_1a83_3122(6);
            d_61eb_d928 = d_61eb_d59e;
            if (d_61eb_d928 == 1) {
                f_1a83_0b7d("Hi-Tec costs 10000 p/w");
                f_1a83_0b7d("Intermediate costs 5000 p/w");
                if (!d_432e_45de[player].f20)
                    f_1a83_0b7d("Basic costs 3000 p/w");
                else
                    f_1a83_0b7d("Basic is covered by insurance");
                d_61eb_d9c8 = 0;
            } else if (d_61eb_d928 == 2) {
                f_75a4_002a(team);
                d_61eb_da04 = -1;
            } else if (d_61eb_d928 >= 3 && d_61eb_d928 <= 5) {
                if (d_61eb_d928 == 3) {
                    f_1a83_0b7d("Hi-tec treatment selected");
                    d_432e_45de[player].f25 = 1;
                } else if (d_61eb_d928 == 4) {
                    f_1a83_0b7d("Intermediate treatment selected");
                    d_432e_45de[player].f26 = 1;
                } else {
                    f_1a83_0b7d("Basic treatment selected");
                    d_432e_45de[player].f27 = 1;
                }
                d_61eb_da04 = -1;
            } else if (d_61eb_d928 == 6) {
                f_1a83_0b7d("No treatment selected");
                d_432e_45de[player].f25 = 0;
                d_432e_45de[player].f26 = 0;
                d_432e_45de[player].f27 = 0;
                d_61eb_da04 = -1;
            }
        } while (!d_61eb_d9c8);
    } while (d_61eb_da04);
}

void f_ab30_0bf6(int p)
{
    if (d_28d4_1958[23][p] == 1) {
        if (f_1a83_6d8b(d_28d4_82d0[p]) == 0) {
            if (f_215d_0d96(3) == 0)
                d_432e_45de[p].f25 = 1;
            else
                d_432e_45de[p].f26 = 1;
        } else if (d_432e_45de[p].f20 || f_215d_0d96(3) > 0)
            d_432e_45de[p].f27 = 1;
    } else if (d_432e_45de[p].f20)
        d_432e_45de[p].f27 = 1;
}

void f_ab30_0cb4(void)
{
    unsigned char t;

    for (t = 0; t <= 37; t = t + 1) {
        if (f_1a83_2ad4(t)) {
            unsigned char i;
            int p;
            int best_p;
            float v;
            float best;
            char title[80];
            char text[320];

            best = 0;
            for (i = 0; i <= d_3334_beca[t] - 1; i = i + 1) {
                p = d_28d4_081c[t][i];
                if (d_3334_0000[12][p] > 20) {
                    d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 0);
                    v = d_61eb_dbb8[2][p] / d_3334_0000[12][p];
                    v = v * (d_3334_0000[13][p] / 100 + 1);
                    if (v > best) {
                        best_p = p;
                        best = v;
                    }
                }
            }
            sprintf(title, "%s Club News", (char far *)d_61eb_b0ec[t]);
            sprintf(text, "%s has been voted the supporter's club player of the year.", f_1a83_4485(best_p));
            f_1a83_5844(t, title, text);
        }
    }
}

void f_ab30_0e3e(void)
{
    if (d_61eb_d652 > 0) {
        f_9f8d_1379(0);
        if (d_61eb_d980 > -1)
            f_ab30_0e80(d_3334_cee2[d_61eb_d980]);
    } else
        f_1a83_0bb7("Not available on demo");
}

/* Friendlies: the friendly fixtures of weeks 2-12 (CM94: 2-8), and the buttons to arrange them
   (choices 13-16; no "Season starts week five"). */
void f_ab30_0e80(unsigned char team)
{
    unsigned char i;
    unsigned char home;
    unsigned char slot;
    unsigned char week;
    unsigned char c;
    int opp;
    char buf[320];

    week = f_215d_1343(d_61eb_d5a2, 2);
    do {
        f_1a83_5ccd();
        f_1a83_48f9("Friendlies");
        sprintf(buf, " %s ", (char far *)d_61eb_b0ec[team]);
        f_1a83_3c08(1.25, 4.0, -(d_3334_be02[team] / 16), d_3334_be02[team] % 16, 0, buf);
        f_1a83_5ce1();
        for (c = 0; c <= 3; ++c)
            f_ab30_1346(c, 0);
        f_1a83_4d96(2, 1.25, 22.5, 1, 4, 301, "                 Done");
        f_1a83_5ccd();
        f_1a83_3450(1.125, 10.25, 1, 2, 30, " Wk");
        f_1a83_3450(5.125, 10.25, 1, 2, 120, " Opponents");
        f_1a83_3450(20.375, 10.25, 1, 2, 112, " Of");
        f_1a83_3450(34.625, 10.25, 1, 2, 36, " Ven");
        for (i = 1; i <= 11; ++i) {
            sprintf(buf, " %s", f_1a83_47e8(i / 2 + 1));
            f_1a83_4d96(0, 1.125, i + 10.375, 1, 12, 30, buf);
            if (i + 1 < d_61eb_d5a2)
                f_1a83_54f9(i + 1);
            f_ab30_14d9(team, i + 1, &opp, &home, &slot);
            if (opp > -1) {
                sprintf(buf, " %s", f_1a83_3300(opp));
                f_1a83_3450(5.125, i + 10.375, 1, 14, 120, buf);
                if (opp < 38)
                    sprintf(buf, " %s", f_1a83_4876(f_1a83_6d8b(opp) + 1, 0));
                else
                    sprintf(buf, " %s", d_53fc_0000[d_53fc_1172[opp]]);
                f_1a83_3450(20.375, i + 10.375, 1, 4, 112, buf);
                strcpy(buf, home == 0 ? " Home" : " Away");
                f_1a83_3450(34.625, i + 10.375, 0, 6, 36, buf);
            } else {
                f_1a83_3450(5.125, i + 10.375, 1, 14, 120, " No Fixture");
                f_1a83_3450(20.375, i + 10.375, 1, 4, 112, " -");
                f_1a83_3450(34.625, i + 10.375, 0, 6, 36, " -");
            }
        }
        f_1a83_5ce1();
        f_1a83_5117(week, -1);
        do {
            d_61eb_d59e = f_1a83_5296(0);
            if (d_61eb_d59e == 0)
                f_ab30_146f();
            c = d_61eb_d59e;
            if (c >= 2 && c <= 12) {
                if (c != week) {
                    f_1a83_5117(week, 0);
                    week = c;
                    f_1a83_5117(week, -1);
                }
            } else if (c >= 13) {
                f_ab30_14d9(team, week, &opp, &home, &slot);
                if (opp == -1 && c >= 14)
                    c = 0;
            }
        } while (c == 0 || c >= 2 && c <= 12);
        if (c == 13) {
            if (opp == -1)
                f_ab30_15b3(team, week);
            else
                f_1a83_0bb7("You already have a fixture");
        } else if (c == 14)
            f_ab30_1a2a(team, week);
        else if (c == 15) {
            if (opp < 38)
                f_6ffe_4a89(opp);
            else
                f_1a83_0bb7("No information available");
        } else if (c == 16)
            f_ab30_1b7a(team, week);
    } while (c != 1);
}

#pragma option -O-
/* One of the four buttons under the fixtures, lit or not. */
void f_ab30_1346(unsigned char n, char lit)
{
    int x = n * 77 + 8;
    char far *label[8] = {"Select", "Opponents", "Select", "Venue",
                             "Opponents", "Details", "Cancel", "Fixture"};

    f_215d_088c(16);
    f_215d_08aa(x + 2, 52, x + 75, 72);
    f_215d_088c((lit ? 3 : 15) + 16);
    f_215d_08aa(x, 50, x + 73, 70);
    f_215d_089b(19);
    f_215d_0904(x, 50, x + 73, 70);
    f_1a83_3347(x + (36 - strlen(label[n * 2]) * 3) + 8, 59, 1, label[n * 2]);
    f_1a83_3347(x + (36 - strlen(label[n * 2 + 1]) * 3) + 8, 67, 1, label[n * 2 + 1]);
}

/* A mouse click on one of the buttons: choice 9-12. */
void f_ab30_146f(void)
{
    unsigned char i;
    unsigned x;

    for (i = 0; i <= 3; ++i) {
        x = i * 77 + 8;
        if (f_215d_0c14() >= x && f_215d_0c14() <= x + 73 &&
            f_215d_0c08() >= 50 && f_215d_0c08() <= 70) {
            d_61eb_d59e = i + 13;
            i = 3;
        }
    }
}

/* The friendly of a team in a week (64 fixture slots, 100 weeks): opponent (-1: none), at home (0) or away, and its
   fixture slot. */
void f_ab30_14d9(int team, unsigned char week, int far *opp, unsigned char far *home, unsigned char far *slot)
{
    unsigned char i;

    *opp = -1;
    for (i = 0; i <= 63; i++) {
        if (d_53fc_138c[i][0][week] / 32 == team) {
            *opp = d_53fc_138c[i][1][week] / 32;
            *home = 0;
        } else if (d_53fc_138c[i][1][week] / 32 == team) {
            *opp = d_53fc_138c[i][0][week] / 32;
            *home = 1;
        } else
            continue;
        *slot = i;
        i = 63;
    }
}

/* Arrange Friendly: pick a club to approach, 48 a page. */
void f_ab30_15b3(unsigned char team, unsigned char week)
{
    unsigned char page;
    unsigned char key;
    int i;
    int club;
    char buf[320];
    char r;

    page = 1;
    do {
        f_1a83_48f9("Arrange Friendly");
        sprintf(buf, " Select a team to approach ");
        f_1a83_3450(1.125, 4.0, 1, 2, 304, buf);
        f_1a83_4d96(2, 1.25, 22.5, 1, 12, 53, " - Scr");
        f_1a83_4d96(2, 32.25, 22.5, 1, 12, 53, " + Scr");
        f_1a83_4d96(2, 8.5, 22.5, 1, 4, 185, "          Done");
        for (i = 0; i <= 47; i++) {
            club = (page - 1) * 48 + i;
            d_61eb_da5d = i / 16 * 12.75 + 1.125;
            d_61eb_da55 = i + 6 - i / 16 * 16;
            if (club < 540) {
                sprintf(buf, " %.15s", f_1a83_3300(club));
                f_1a83_4d96(0, d_61eb_da5d, d_61eb_da55, f_1a83_2ad4(club) ? 6 : 1, 14, 100, buf);
                if (team == club)
                    f_1a83_54f9(i + 4);
            } else
                f_1a83_3450(d_61eb_da5d, d_61eb_da55, 1, 14, 100, "");
        }
        do
            key = f_1a83_5296(d_61eb_d5e2);
        while (key == 0);
        if (key == 1)
            page = page == 1 ? 12 : page - 1;
        else if (key == 2)
            page = page == 12 ? 1 : page + 1;
        else if (key >= 4) {
            club = (page - 1) * 48 + key - 4;
            f_1a83_48f9("Approach for friendly");
            sprintf(buf, " %s ", (char far *)d_61eb_b0ec[team]);
            f_1a83_3c08(1.0, 4.0, -(d_3334_be02[team] / 16), d_3334_be02[team] % 16, 0, buf);
            sprintf(buf, "Approach %s ? ", f_1a83_3300(club));
            f_1a83_0b12(-7, buf);
            f_1a83_2da6(10, "", "*Exit|Approach Them|");
            f_1a83_3122(1);
            if (d_61eb_d59e == 1) {
                r = f_ab30_18e5(club, team, week);
                if (r == 0)
                    f_1a83_0b7d("They are not available");
                else if (r == 1)
                    f_1a83_0b7d("They decline the offer");
                else {
                    f_1a83_0b7d("They accept the offer");
                    f_ab30_1c6e(week, team, club);
                    f_ab30_1a2a(team, week);
                    key = 3;
                }
            }
        }
    } while (key != 3);
}

/* A club's answer to a friendly: 0 not available, 1 declined (more than 6.0 stronger), 2 accepted. */
char f_ab30_18e5(int club, int team, unsigned char week)
{
    unsigned char slot;
    unsigned char home;
    int opp;
    char buf[320];

    f_ab30_14d9(club, week, &opp, &home, &slot);
    if (opp > -1)
        return 0;
    if (f_1a83_2ad4(club)) {
        f_1a83_48f9("Offer of Friendly");
        sprintf(buf, " %s ", (char far *)d_61eb_b0ec[club]);
        f_1a83_3c08(1.0, 4.0, -(d_3334_be02[club] / 16), d_3334_be02[club] % 16, 0, buf);
        sprintf(buf, "%s want a friendly ", f_1a83_3300(team));
        f_1a83_0b12(-7, buf);
        f_1a83_2da6(10, "", "Accept Offer|Refuse Offer|");
        f_1a83_3122(1);
        if (d_61eb_d59e == 1)
            return 1;
    } else {
        if (club % 4 == d_61eb_dba1 % 4)
            return 0;
        if (f_1a83_2b0c(club) - f_1a83_2b0c(team) > 6.0)
            return 1;
    }
    return 2;
}

/* Set Venue: play the week's friendly at home or away. */
void f_ab30_1a2a(unsigned char team, unsigned char week)
{
    unsigned char slot;
    unsigned char home;
    int opp;
    char buf[320];

    f_ab30_14d9(team, week, &opp, &home, &slot);
    f_1a83_48f9("Set Venue");
    sprintf(buf, " %s ", (char far *)d_61eb_b0ec[team]);
    f_1a83_3c08(1.0, 4.0, -(d_3334_be02[team] / 16), d_3334_be02[team] % 16, 0, buf);
    sprintf(buf, "Friendly vs %s ", f_1a83_3300(opp));
    f_1a83_0b12(-7, buf);
    f_1a83_2da6(10, "", "Play at Home|Play Away|");
    f_1a83_3122(1);
    if (home != d_61eb_d59e) {
        int t;

        t = d_53fc_138c[slot][0][week];
        d_53fc_138c[slot][0][week] = d_53fc_138c[slot][1][week];
        d_53fc_138c[slot][1][week] = t;
        f_1a83_0b7d("Ok - fixture now set");
    }
}

/* cancel a friendly */
void f_ab30_1b7a(unsigned char team, char c)
{
    unsigned char idx;
    unsigned char home;
    int opp;
    char buf[320];

    f_ab30_14d9(team, c, &opp, &home, &idx);
    f_1a83_48f9("Cancel Friendly");
    sprintf(buf, " %s ", (char far *)d_61eb_b0ec[team]);
    f_1a83_3c08(1.0, 4.0, -(d_3334_be02[team] / 16), d_3334_be02[team] % 16, 0, buf);
    sprintf(buf, "Cancel game vs %s ? ", f_1a83_3300(opp));
    f_1a83_0b12(-7, buf);
    f_1a83_2da6(10, "", "*Exit|Cancel Game|");
    f_1a83_3122(1);
    if (d_61eb_d59e == 1)
        f_ab30_1cd2(c, idx);
}

/* add a fixture to a team's list */
void f_ab30_1c6e(unsigned char team, int a, int b)
{
    unsigned char n;

    n = d_28d4_0000[team - 1];
    d_53fc_138c[n][0][team] = a << 5;
    d_53fc_138c[n][1][team] = b << 5;
    d_28d4_0000[team - 1]++;
}

/* remove a fixture: the last one takes its place */
void f_ab30_1cd2(unsigned char team, unsigned char week)
{
    unsigned char n;

    n = d_28d4_0000[team - 1] - 1;
    d_53fc_138c[week][0][team] = d_53fc_138c[n][0][team];
    d_53fc_138c[week][1][team] = d_53fc_138c[n][1][team];
    d_53fc_138c[n][0][team] = -32;
    d_53fc_138c[n][1][team] = -32;
    d_28d4_0000[team - 1]--;
}

/* board messages (the cash thresholds by division: Serie A, Serie B) */
void f_ab30_1d6d(void)
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

    for (t = 0; t <= d_61eb_d650 - 1; ++t) {
        team = d_3334_d168[t];
        if (team < 255) {
            a = 0;
            b = 0;
            c = 0;
            d = 0;
            for (i = 0; i <= d_3334_beca[team] - 1; i++) {
                if (f_1a83_6728(d_28d4_081c[team][i], -1)) {
                    if (d_61eb_d780 == 1)
                        a++;
                    else if (d_61eb_d780 == 4)
                        b++;
                    else if (d_61eb_d780 == 5)
                        c++;
                    else if (d_61eb_d780 == 7)
                        d++;
                }
            }
            if (f_215d_0d96(5) == 0 && d_3334_bea2[team] < 65 && a >= f_215d_0d96(2) + 3) {
                sprintf(buf, "%s board message", (char far *)d_61eb_b0ec[team]);
                f_1a83_5844(team, buf, "We find your current team selection somewhat questionable.");
            }
            if (f_215d_0d96(5) == 0 && b >= f_215d_0d96(2) + 3) {
                sprintf(buf, "%s board message", (char far *)d_61eb_b0ec[team]);
                f_1a83_5844(team, buf, "We are concerned with the unrest between you and some of the players.");
            }
            if (f_215d_0d96(5) == 0 && c >= f_215d_0d96(2) + 3) {
                sprintf(buf, "%s board message", (char far *)d_61eb_b0ec[team]);
                f_1a83_5844(team, buf, "There seems to be a conflict between some of the players and the coach.");
            }
            if (f_215d_0d96(5) == 0 && d >= f_215d_0d96(2) + 3) {
                sprintf(buf, "%s board message", (char far *)d_61eb_b0ec[team]);
                f_1a83_5844(team, buf, "We are confused as to why you have fined some of the players. It is not helping morale.");
            }
            if (!f_1a83_65a9(0)) {
                if (f_1a83_6d8b(team) == 0) {
                    low = 150000L;
                    high = 1000000L;
                } else if (f_1a83_6d8b(team) == 1) {
                    low = 75000L;
                    high = 500000L;
                }
                big = 3000000L;
                if (f_215d_0d96(5) == 0 && d_3334_beca[team] >= 19 && d_3334_cc82[0][team] < low) {
                    sprintf(buf, "%s board message", (char far *)d_61eb_b0ec[team]);
                    f_1a83_5844(team, buf, "We suggest selling players to ease our current financial situation.");
                } else if (f_215d_0d96(5) == 0 && d_3334_beca[team] <= 23 && d_3334_cc82[0][team] >= big) {
                    sprintf(buf, "%s board message", (char far *)d_61eb_b0ec[team]);
                    f_1a83_5844(team, buf, "The board feel that the signing of a big-name player could be beneficial.");
                } else if (f_215d_0d96(5) == 0 && d_3334_beca[team] <= 23 && d_3334_cc82[0][team] >= high) {
                    sprintf(buf, "%s board message", (char far *)d_61eb_b0ec[team]);
                    f_1a83_5844(team, buf, "There is cash available for the strengthening of our squad.");
                }
            }
        }
    }
}

/* set a win bonus (5000 and 10,000 refused in Serie B, 500 and up before week 13) */
void f_ab30_21cf(unsigned char team, int opp)
{
    char buf[320];
    long bonus[7] = {0, 100, 250, 500, 1000, 5000, 10000};

    f_1a83_48f9("Win Bonus");
    sprintf(buf, " %s ", (char far *)d_61eb_b0ec[team]);
    f_1a83_3c08(1.0, 4.0, -(d_3334_be02[team] / 16), d_3334_be02[team] % 16, 0, buf);
    sprintf(buf, "Game vs %s", f_1a83_3300(opp));
    f_1a83_0b12(-7, buf);
    f_1a83_0b12(9, "Amount per player ?");
    f_1a83_2da6(12, "", "*No Bonus|\xa3" "100|\xa3" "250|\xa3" "500|\xa3" "1000|\xa3" "5000|\xa3" "10,000|");
    f_1a83_3122(6);
    if (d_61eb_d59e > 0) {
        unsigned char ok;

        ok = 255;
        if (bonus[d_61eb_d59e] * 13 > f_1a83_5747(team))
            ok = 0;
        else if ((d_61eb_d59e > 4 && f_1a83_6d8b(team) > 0)
            || (d_61eb_d59e > 2 && d_61eb_d5a2 < 13))
            ok = 0;
        if (ok) {
            sprintf(buf, "Win bonus set at \xa3%ld", bonus[d_61eb_d59e]);
            f_1a83_0b7d(buf);
            d_3334_bef2[team] = d_61eb_d59e;
        } else
            f_1a83_0b7d("The board refuse");
    } else {
        f_1a83_0b7d("No bonus set");
        d_3334_bef2[team] = 0;
    }
}

/* physio: days out for an injured player */
unsigned char f_ab30_2397(int player)
{
    unsigned char team = d_28d4_1958[18][player];
    unsigned char r;
    unsigned char days[5] = {20, 18, 15, 12, 8};
    float f;
    float mult[7] = {0, 0.8, 0.9, 1.0, 1.1, 1.25, 1.5};

    f = d_3334_bf1a[team] <= 4 ? days[d_3334_bf1a[team]] : 5;
    f = mult[d_3334_bef2[team]] * f;
    r = f;
    return f_215d_1343(f_215d_0d96(r), f_215d_0d96(r));
}

/* pay the win bonus */
void f_ab30_2473(unsigned char team)
{
    long bonus[7] = {0, 100, 250, 500, 1000, 5000, 10000};

    d_61eb_dbc0 = f_215d_1629(d_61eb_dc52, 1);
    d_61eb_dbc0[7][team] += bonus[d_3334_bef2[team]] * 13000;
}

void f_ab30_24eb(void)
{
    unsigned char t;

    for (t = 0; t <= 37; ++t)
        if (f_1a83_2ad4(t))
            f_ab30_2524(t);
}

/* copy a team's squad to its list and sort it */
void f_ab30_2524(unsigned char team)
{
    unsigned char g;
    unsigned char i;
    unsigned char j;
    int a;
    int b;
    unsigned va;
    unsigned vb;

    g = d_3334_ca6e[team] - 646;
    for (i = 0; i <= d_3334_beca[team] - 1; ++i)
        d_432e_b92f[g][i] = d_28d4_081c[team][i];
    for (i = 0; i <= d_3334_beca[team] - 2; ++i) {
        for (j = i + 1; j <= d_3334_beca[team] - 1; ++j) {
            a = d_432e_b92f[g][i];
            b = d_432e_b92f[g][j];
            va = d_432e_45de[a].f3 * 1000 + d_432e_45de[a].f2 * 500 + d_432e_45de[a].f1 * 100 + d_432e_45de[a].f6 * 50;
            vb = d_432e_45de[b].f3 * 1000 + d_432e_45de[b].f2 * 500 + d_432e_45de[b].f1 * 100 + d_432e_45de[b].f6 * 50;
            if (vb > va) {
                int tmp;

                tmp = d_432e_b92f[g][i];
                d_432e_b92f[g][i] = d_432e_b92f[g][j];
                d_432e_b92f[g][j] = tmp;
            }
        }
    }
}

/* the penalty takers screen */
void f_ab30_2768(unsigned char team)
{
    unsigned char row = d_3334_ca6e[team] + 0x7a;
    unsigned char k;
    unsigned char mode = 0;
    unsigned char sel = 1;
    int p;
    char buf[320];

    do {
        f_1a83_48f9("Penalty Takers");
        sprintf(buf, " %s ", (char far *)d_61eb_b0ec[team]);
        f_1a83_3c08(1.25, 4.0, -(d_3334_be02[team] / 16), d_3334_be02[team] % 16, 0, buf);
        f_1a83_3450(30.375, 7.25, 0, 5, 70, " Options");
        for (k = 0; k <= 4; k = k + 1)
            f_ab30_2e7c(k, 0);
        f_1a83_4d96(2, 1.25, 22.5, 1, 4, 301, "                 Done");
        f_1a83_3450(1.125, 7.25, 0, 5, 77, " Name");
        f_1a83_3450(15.75, 7.25, 0, 5, 77, " Name");
        f_ab30_2b3d(team);
        f_ab30_2c7c(team, mode, -1);
        f_1a83_5117(sel + 1, -1);
        do {
            d_61eb_d59e = f_1a83_5296(-1);
            if (d_61eb_d59e == 0)
                f_ab30_2fb1();
            k = d_61eb_d59e;
            if (k >= 2 && k <= 29) {
                f_1a83_5117(sel + 1, 0);
                sel = k - 1;
                f_1a83_5117(sel + 1, -1);
            } else if (k == 30 && sel > 1) {
                int t;

                f_ab30_2e7c(0, -1);
                t = d_432e_b92f[row][sel - 1];
                d_432e_b92f[row][sel - 1] = d_432e_b92f[row][sel - 2];
                d_432e_b92f[row][sel - 2] = t;
                sel--;
                d_61eb_d97a = 1;
                f_ab30_2b3d(team);
                f_ab30_2c7c(team, mode, sel);
                f_ab30_2c7c(team, mode, sel + 1);
                f_1a83_5117(sel + 1, -1);
                f_ab30_2e7c(0, 0);
            } else if (k == 31 && d_3334_beca[team] > sel) {
                int t;

                f_ab30_2e7c(1, -1);
                t = d_432e_b92f[row][sel - 1];
                d_432e_b92f[row][sel - 1] = d_432e_b92f[row][sel];
                d_432e_b92f[row][sel] = t;
                sel++;
                d_61eb_d97a = 1;
                f_ab30_2b3d(team);
                f_ab30_2c7c(team, mode, sel);
                f_ab30_2c7c(team, mode, sel - 1);
                f_1a83_5117(sel + 1, -1);
                f_ab30_2e7c(1, 0);
            }
            if ((k == 33 && mode == 1) || (k == 34 && mode == 0)) {
                mode = mode == 0 ? 1 : 0;
                f_ab30_2e7c(mode + 3, -1);
                f_ab30_2c7c(team, mode, -1);
                f_ab30_2e7c(mode + 3, 0);
            }
        } while (k != 1 && k != 32);
        if (k == 32) {
            p = d_432e_b92f[row][sel - 1];
            do
                f_a214_4120(p, -1, 0);
            while (!d_61eb_d9ca);
            d_61eb_d9ca = 0;
        }
    } while (k != 1);
}

/* the names of the penalty takers */
void f_ab30_2b3d(unsigned char team)
{
    unsigned char i;
    unsigned char row;
    int p;
    float x;
    float y;
    char buf[320];

    row = d_3334_ca6e[team] + 0x7a;
    for (i = 1; i <= 26; i = i + 1) {
        x = i <= 13 ? 1.125 : 15.75;
        y = (i <= 13 ? i : i - 13) + 6.625 + 1;
        if (d_3334_beca[team] >= i) {
            p = d_432e_b92f[row][i - 1];
            sprintf(buf, " %.*s", 11, f_1a83_45b4(p));
            if (strcmp(buf, d_432e_eea3[d_61eb_d97a]))
                f_1a83_4d96(0, x, y, 1, 14, 77, buf);
            else
                d_61eb_d97a++;
        } else
            f_1a83_3450(x, y, 1, 14, 77, "");
    }
}

/* the goals or average rating column of the penalty takers (from == -1: all of it) */
void f_ab30_2c7c(unsigned char team, char mode, char from)
{
    unsigned char i;
    unsigned char row;
    unsigned char last;
    int p;
    float x;
    float y;
    char buf[40];
    unsigned char first;

    row = d_3334_ca6e[team] + 0x7a;
    if (from == -1) {
        strcpy(buf, mode == 0 ? " GLS" : " AV R");
        f_1a83_3450(11.0, 7.25, 0, 5, 36, buf);
        f_1a83_3450(25.625, 7.25, 0, 5, 36, buf);
        first = 1;
        last = 26;
    } else {
        first = from;
        last = from;
    }
    for (i = first; i <= last; i = i + 1) {
        x = i <= 13 ? 11.0 : 25.625;
        y = (i <= 13 ? i : i - 13) + 6.625 + 1;
        if (d_3334_beca[team] >= i) {
            p = d_432e_b92f[row][i - 1];
            if (mode == 0)
                sprintf(buf, "  %d", d_3334_0000[13][p]);
            else if (d_3334_0000[12][p] > 0) {
                float avg;

                d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 0);
                avg = (float)d_61eb_dbb8[2][p] / d_3334_0000[12][p];
                sprintf(buf, " %4.2f", avg);
            } else
                strcpy(buf, " ----");
        } else
            strcpy(buf, "");
        f_1a83_3450(x, y, 1, 15, 36, buf);
    }
}

/* one of the screen's five buttons */
void f_ab30_2e7c(unsigned char n, char hi)
{
    register int y = n * 21 + 63;
    char far *names[10] = { "Move", "Up", "Move", "Down", "View", "Factfile", "Show", "Goals", "Show", "Av R" };

    f_215d_088c(16);
    f_215d_08aa(244, y + 2, 314, y + 19);
    f_215d_088c((hi ? 9 : 2) + 16);
    f_215d_08aa(242, y, 312, y + 17);
    f_215d_089b(25);
    f_215d_0904(242, y, 312, y + 17);
    f_1a83_3347(35 - strlen(names[n * 2]) * 3 + 250, y + 7, 1, names[n * 2]);
    f_1a83_3347(35 - strlen(names[n * 2 + 1]) * 3 + 250, y + 15, 1, names[n * 2 + 1]);
}

/* which of the five buttons the mouse is on: sets d_61eb_d59e to 30 + its number */
void f_ab30_2fb1(void)
{
    unsigned char i;
    register unsigned y;

    for (i = 0; i <= 4; i = i + 1) {
        y = i * 21 + 63;
        if (f_215d_0c14() >= 242 && f_215d_0c14() <= 312 && f_215d_0c08() >= y && f_215d_0c08() <= y + 17) {
            d_61eb_d59e = i + 30;
            i = 4;
        }
    }
}

/* sets d_61eb_d75c from the player's place among his club's penalty takers */
void f_ab30_301b(int player)
{
    unsigned char i = 0;
    unsigned char row = d_3334_ca6e[d_28d4_82d0[player]] + 0x7a;

    if (f_1a83_5a2e(player)) {
        while (d_432e_b92f[row][i] != player)
            i++;
        d_61eb_d75c = 50 - i;
    } else
        d_61eb_d75c = f_215d_0d96(20);
}

/* adds a player at the end of the team's penalty takers */
void f_ab30_30a0(int player, unsigned char team)
{
    unsigned char row = d_3334_ca6e[team] + 0x7a;

    d_432e_b92f[row][d_3334_beca[team] - 1] = player;
}

/* takes a player out of the team's penalty takers */
void f_ab30_30f0(int player, unsigned char team)
{
    unsigned char row;
    unsigned char i;

    row = d_3334_ca6e[team] + 0x7a;
    for (i = 0; d_432e_b92f[row][i] != player; i++)
        ;
    for (; d_3334_beca[team] - 1 >= i; i++)
        d_432e_b92f[row][i] = d_432e_b92f[row][i + 1];
}

/* commentary: a penalty appeal turned down */
void f_ab30_3187(unsigned char team)
{
    char msg[320];
    char name[40];
    char c;

    if (d_61eb_d6c8 + d_61eb_d6ca > 0) {
        f_7a45_2fe1(team);
        if (team < 38)
            strcpy(name, f_1a83_45b4(d_61eb_d5b8));
        else
            sprintf(name, "No.%d", d_61eb_d750 + (d_61eb_d750 == 12) + 1);
        sprintf(msg, "%s %s", name, f_ab30_3419(0));
        f_7f4a_0a9c(team, msg);
        f_215d_0df0(100);
        if (f_215d_0d96(20) == 0) {
            f_7f4a_0a9c(team, "The ref consults his linesman");
            f_215d_0df0(100);
            f_7f4a_0a9c(team, "No penalty");
            f_215d_0df0(100);
        } else {
            c = f_215d_0d96(5);
            if (c == 0) {
                f_7f4a_0a9c(team, "The ref waves play on");
                f_215d_0df0(100);
            } else if (c == 1) {
                f_7f4a_0a9c(team, "Penalty not given");
                f_215d_0df0(100);
            } else if (c == 2) {
                f_7f4a_0a9c(team, "No penalty");
                f_215d_0df0(100);
            } else if (c == 3) {
                f_7f4a_0a9c(team, "The ref just turns away");
                f_215d_0df0(100);
            } else {
                f_7f4a_0a9c(team, "Nothing given");
                f_215d_0df0(100);
            }
        }
        f_7f4a_0a9c(d_61eb_d666, d_432e_cba7);
    }
}

/* commentary: a penalty given */
void f_ab30_32c7(unsigned char team)
{
    char msg[320];
    char name[40];
    char c;

    if (d_61eb_d6c8 + d_61eb_d6ca > 0) {
        f_7a45_2fe1(team);
        if (team < 38)
            strcpy(name, f_1a83_45b4(d_61eb_d5b8));
        else
            sprintf(name, "No.%d", d_61eb_d750 + (d_61eb_d750 == 12) + 1);
        sprintf(msg, "%s %s", name, f_ab30_3419(1));
        f_7f4a_0a9c(team, msg);
        f_215d_0df0(100);
        if (f_215d_0d96(15) == 0) {
            f_7f4a_0a9c(team, "The ref consults his linesman");
            f_215d_0df0(100);
            f_7f4a_0a9c(team, "It's a penalty!");
            f_215d_0df0(100);
        } else {
            c = f_215d_0d96(5);
            if (c == 0) {
                f_7f4a_0a9c(team, "The ref gives a penalty!");
                f_215d_0df0(100);
            } else if (c == 1) {
                f_7f4a_0a9c(team, "The ref points to the spot!");
                f_215d_0df0(100);
            } else if (c == 2) {
                f_7f4a_0a9c(team, "Penalty!");
                f_215d_0df0(100);
            } else if (c == 3) {
                f_7f4a_0a9c(team, "Penalty given!");
                f_215d_0df0(100);
            } else {
                f_7f4a_0a9c(team, "Penalty kick!");
                f_215d_0df0(100);
            }
        }
    }
    f_7f4a_1050(team, team == d_61eb_d666 ? d_61eb_d74c : d_61eb_d74e, 0);
}

/* how the player went down in the area (given: the penalty was given) */
char far *f_ab30_3419(char given)
{
    char far *s = f_215d_0f2d();
    unsigned char r = f_215d_0d96(7);

    if (r == 0)
        strcpy(s, "goes down in the area");
    else if (r == 1 && (given == 0 || f_215d_0d96(3) == 0))
        strcpy(s, "dives in the area");
    else if (r == 2 && (given == 0 || f_215d_0d96(3) == 0))
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

void f_ab30_34cb(unsigned char team)
{
    char ok;
    unsigned char opp;
    char line[320];
    char name[40];

    if (d_61eb_d6c8 + d_61eb_d6ca > 0) {
        ok = 1;
        if (f_215d_0d96(f_215d_13af(d_61eb_d5a4 * 5 + 20, 40)) == 0) {
            opp = team == d_61eb_d666 ? d_61eb_d668 : d_61eb_d666;
            f_ab30_3a99(opp);
        }
        f_7a45_2fe1(team);
        if (team < 38)
            strcpy(name, f_1a83_45b4(d_61eb_d5b8));
        else
            sprintf(name, "No.%d", d_61eb_d750 + (d_61eb_d750 == 12) + 1);
        sprintf(line, "%s %s", name, f_ab30_3a10());
        f_7f4a_0a9c(team, line);
        f_215d_0df0(100);
        if ((d_61eb_da47 == 0 && team == d_61eb_d668) || (d_61eb_da48 == 0 && team == d_61eb_d666))
            ok = 0;
        if (f_215d_0d96(60) == 0 && ok == 1) {
            f_7f4a_0a9c(team, "He rounds the 'keeper");
            f_215d_0df0(100);
            f_7f4a_0a9c(team, "But somehow misses!!!");
            f_215d_0df0(100);
        } else if (f_215d_0d96(20) == 0 && ok == 1) {
            if (f_215d_0d96(10) == 0) {
                f_7f4a_0a9c(team, "He chips it over the 'keeper");
                f_215d_0df0(100);
                if (f_215d_0d96(2) == 0) {
                    f_7f4a_0a9c(team, "But it comes back off the bar!");
                    f_215d_0df0(100);
                } else {
                    f_7f4a_0a9c(team, "But it goes over!");
                    f_215d_0df0(100);
                }
            } else if (f_215d_0d96(2) == 0) {
                f_7f4a_0a9c(team, "He rounds the 'keeper");
                f_215d_0df0(100);
                f_7f4a_0a9c(team, "But it's cleared off the line!");
                f_215d_0df0(100);
            } else {
                f_7f4a_0a9c(team, "He slides it past the 'keeper");
                f_215d_0df0(100);
                if (f_215d_0d96(2) == 0) {
                    f_7f4a_0a9c(team, "But it hits an upright!");
                    f_215d_0df0(100);
                } else {
                    f_7f4a_0a9c(team, "But it goes wide!");
                    f_215d_0df0(100);
                }
            }
        } else {
            char c;

            c = f_215d_0d96(11);
            if (c == 0 && ok == 1) {
                f_7f4a_0a9c(team, "But his shot is saved!");
                f_215d_0df0(100);
            } else if (c == 1 && ok == 1) {
                f_7f4a_0a9c(team, "But his shot is smothered!");
                f_215d_0df0(100);
            } else if (c == 2) {
                f_7f4a_0a9c(team, "But he blazes it over!");
                f_215d_0df0(100);
            } else if (c == 3) {
                f_7f4a_0a9c(team, "But his shot lacks power!");
                f_215d_0df0(100);
            } else if (c == 4) {
                f_7f4a_0a9c(team, "But his finish is poor!");
                f_215d_0df0(100);
            } else if (c == 5) {
                f_7f4a_0a9c(team, "But he misses the target!");
                f_215d_0df0(100);
            } else if (c == 6) {
                f_7f4a_0a9c(team, "But he shoots wide!");
                f_215d_0df0(100);
            } else if (c == 7) {
                f_7f4a_0a9c(team, "But he's tackled!");
                f_215d_0df0(100);
            } else if (c == 8) {
                f_7f4a_0a9c(team, "But he squanders the chance!");
                f_215d_0df0(100);
            } else if (c == 9) {
                f_7f4a_0a9c(team, "But he wastes the chance!");
                f_215d_0df0(100);
            } else {
                f_7f4a_0a9c(team, "But he misses!");
                f_215d_0df0(100);
            }
        }
        f_7f4a_0a9c(d_61eb_d666, d_432e_cba7);
    }
}

void f_ab30_3798(unsigned char team)
{
    unsigned char c;
    char ok;
    unsigned char opp;
    char line[320];
    char name[40];

    f_7a45_2fe1(team);
    if (d_61eb_d6c8 + d_61eb_d6ca > 0) {
        ok = 1;
        if (f_215d_0d96(f_215d_13af(d_61eb_d5a4 * 5 + 20, 40)) == 0) {
            opp = team == d_61eb_d666 ? d_61eb_d668 : d_61eb_d666;
            f_ab30_3a99(opp);
        }
        if (team < 38)
            strcpy(name, f_1a83_45b4(d_61eb_d5b8));
        else
            sprintf(name, "No.%d", d_61eb_d750 + (d_61eb_d750 >= 12) + 1);
        sprintf(line, "%s %s", name, f_ab30_3a10());
        f_7f4a_0a9c(team, line);
        f_215d_0df0(100);
        if ((d_61eb_da47 == 0 && team == d_61eb_d668) || (d_61eb_da48 == 0 && team == d_61eb_d666))
            ok = 0;
        c = f_215d_0d96(11);
        if (c <= 3 && ok == 1) {
            if (f_215d_0d96(10) == 0) {
                f_7f4a_0a9c(team, "He chips it over the 'keeper");
                f_215d_0df0(100);
                f_7f4a_0a9c(team, "And it's in!");
                f_215d_0df0(100);
            } else if (f_215d_0d96(2) == 0) {
                f_7f4a_0a9c(team, "He rounds the 'keeper");
                f_215d_0df0(100);
                f_7f4a_0a9c(team, "And scores!");
                f_215d_0df0(100);
            } else {
                f_7f4a_0a9c(team, "He slides it past the 'keeper");
                f_215d_0df0(100);
                f_7f4a_0a9c(team, "And it's in!");
                f_215d_0df0(100);
            }
        } else {
            sprintf(line, "Goal for %s!", f_1a83_3300(team == d_61eb_d666 ? d_61eb_d6b4 : d_61eb_d6b6));
            f_7f4a_0a9c(team, line);
            f_215d_0df0(100);
            if (c == 4) {
                f_7f4a_0a9c(team, "He finds the net");
                f_215d_0df0(100);
            } else if (c == 5) {
                f_7f4a_0a9c(team, "He finishes in style!");
                f_215d_0df0(100);
            } else if (c == 6) {
                f_7f4a_0a9c(team, "He finishes clinically!");
                f_215d_0df0(100);
            } else if (c == 7) {
                f_7f4a_0a9c(team, "His finish is superb!");
                f_215d_0df0(100);
            } else if (c == 8) {
                f_7f4a_0a9c(team, "He scores easily!");
                f_215d_0df0(100);
            } else if (c == 9) {
                f_7f4a_0a9c(team, "He finishes well!");
                f_215d_0df0(100);
            } else {
                f_7f4a_0a9c(team, "He scores!");
                f_215d_0df0(100);
            }
        }
        f_7f4a_0a9c(d_61eb_d666, d_432e_cba7);
    }
}

char far *f_ab30_3a10(void)
{
    char far *s;
    char c;

    s = f_215d_0f2d();
    if (f_215d_0d96(20) == 0)
        strcpy(s, "must surely score");
    else {
        c = f_215d_0d96(6);
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

void f_ab30_3a99(unsigned char team)
{
    char buf[320];
    unsigned char n;

    n = f_ab30_3c47(team);
    if (team < 38)
        sprintf(buf, "Bad backpass by %s!", f_1a83_45b4(d_3334_f9f8[team][n]));
    else
        sprintf(buf, "Bad backpass by no.%d", (n >= 12 ? 1 : 0) + n + 1);
    f_7f4a_0a9c(team, buf);
    f_215d_0df0(100);
}

void f_ab30_3b31(unsigned char team)
{
    unsigned char c;
    char buf[320];

    if (f_215d_0d96(2) == 0)
        f_7f4a_0a9c(team, "But it's disallowed!");
    else
        f_7f4a_0a9c(team, "But it won't count!");
    f_215d_0df0(100);
    c = f_215d_0d96(9);
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
    f_7f4a_0a9c(team, buf);
    f_215d_0df0(100);
    if ((c == 5 || c == 8) && f_215d_0d96(2) == 0) {
        f_7f4a_0a9c(team, "He waves away the protests");
        f_215d_0df0(100);
    }
}

unsigned char f_ab30_3c47(unsigned char team)
{
    unsigned char best, i, max, v, p;

    max = 0;
    for (i = 0; i <= 15; i = i + 1) {
        if (d_3334_fefe[team == d_61eb_d668][i] < 2) {
            p = d_3334_f278[team][0][i];
            if (p > 1) {
                if (f_1a83_64cf(p))
                    v = 100;
                else if (f_1a83_64f5(p))
                    v = 80;
                else
                    v = 50;
                if (f_1a83_6583(p))
                    v += 10;
                v = v + f_215d_0d96(20) - f_215d_0d96(20);
                if (v > max) {
                    best = i;
                    max = v;
                }
            }
        }
    }
    return best;
}

int f_ab30_3d3f(unsigned char c)
{
    int r, best;
    unsigned char i, n;

    n = c == 0 ? 5 : 1;
    for (i = 1; i <= n; i = i + 1) {
        for (;;) {
            r = f_215d_0d96(443);
            if (d_5b9b_49b8[r] == c)
                break;
        }
        if (i == 1 || d_5b9b_4fe2[r] > d_5b9b_4fe2[best])
            best = r;
    }
    return best;
}

int f_ab30_3db7(unsigned char c)
{
    int r, best;
    unsigned char i, n;

    n = c == 0 ? 5 : 1;
    for (i = 1; i <= n; i = i + 1) {
        for (;;) {
            r = f_215d_0d96(1135);
            if (d_5b9b_4b73[r] == c)
                break;
        }
        if (i == 1 || d_5b9b_519d[r] > d_5b9b_519d[best])
            best = r;
    }
    return best;
}

void f_ab30_3e2f(unsigned player, unsigned char team)
{
    long fee;

    fee = f_1a83_0cef(f_1a83_01d6(player, -1), 0);
    if (f_ab30_48a4(player, team) && f_1a83_5747(team) >= fee && f_ab30_40ce() == 0
        && player % 20 != d_61eb_dba1 % 20) {
        f_87dc_35cf(player, team);
        if (d_61eb_d9fb) {
            f_ab30_48f1(player, team, fee);
            d_61eb_da4e = -1;
        }
    }
}

void f_ab30_3ed6(unsigned player, unsigned char team)
{
    long fee;
    char done;
    unsigned char club;
    char buf[320];

    done = 0;
    club = d_28d4_82d0[player] + 116;
    do {
        f_1a83_48f9("Approach Player");
        f_1a83_4327(1.0, 4.0, team);
        fee = f_1a83_0cef(f_1a83_01d6(player, -1), 0);
        sprintf(buf, "The fee would be \xa3%ld", fee);
        f_1a83_0b12(7, buf);
        sprintf(buf, "Approach %s ?", f_1a83_4485(player));
        f_1a83_0b12(9, buf);
        f_1a83_2da6(12, "", "*Exit|Approach To Buy|");
        f_1a83_3122(1);
        if (d_61eb_d59e == 0)
            done = 1;
        else if (d_61eb_d59e == 1) {
            if (f_ab30_40ce() || player % 20 == d_61eb_dba1 % 20)
                f_1a83_0b7d("A work permit cannot be obtained");
            else if (f_1a83_5747(team) < fee)
                f_1a83_0b7d("We cannot afford the fee");
            else if (f_ab30_48a4(player, team) == 0)
                f_1a83_0b7d("He isn't interested");
            else {
                f_1a83_0b7d("He agrees to join");
                sprintf(buf, "The fee is \xa3%ld", fee);
                f_1a83_0b7d(buf);
                f_87dc_35cf(player, team);
                if (d_61eb_d9fb) {
                    f_ab30_48f1(player, team, fee);
                    d_61eb_da4e = -1;
                    done = 1;
                } else {
                    sprintf(buf, "He stays in %s", d_53fc_0000[club]);
                    f_87dc_41a3(6, buf);
                }
            }
        }
    } while (done == 0);
}

char f_ab30_40ce(void)
{
    if (d_61eb_d58e > 990)
        return -1;
    return 0;
}

char f_ab30_40e5(void)
{
    if (d_61eb_d590 + 1000 > 1490)
        return -1;
    return 0;
}

void f_ab30_40ff(void)
{
    unsigned i;

    for (i = 1000; i <= d_61eb_d590 + 999; i++) {
        d_28d4_1958[15][i] = d_28d4_1958[0][i] + f_215d_0d96(25) - f_215d_0d96(25);
        d_28d4_1958[21][i] = 100;
        d_28d4_1958[23][i] = 1;
        d_3334_0000[0][i] = 0;
        d_3334_0000[1][i] = 0;
        d_3334_0000[2][i] = 0;
        d_3334_0000[3][i] = 0;
        d_3334_0000[4][i] = 0;
        d_3334_0000[12][i] = 0;
        d_3334_0000[13][i] = 0;
        d_3334_0000[23][i] = 0;
        d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 1);
        d_61eb_dbcc[0][i] = 0xff;
        d_61eb_dbcc[1][i] = 0xff;
        d_61eb_dbcc[3][i] = 0;
        d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 1);
        d_61eb_dbb8[0][i] = 0;
        d_61eb_dbb8[2][i] = 0;
        if (d_28d4_1958[20][i] == 0 && f_215d_0d96(10) == 0)
            f_9a9e_0f8a(i);
    }
}

void f_ab30_4257(void)
{
    unsigned i;

    for (i = 1000; i <= d_61eb_d590 + 999; i++) {
        float f;
        unsigned char j, g, n;

        if (d_28d4_1958[20][i] == 0) {
            if (f_215d_0d96(5) > 0) {
                f = (d_28d4_1958[15][i] + f_215d_0d96(15) - f_215d_0d96(15)) / 50.0 + 4.0;
                g = f_215d_13af(f_215d_1343((unsigned char)f, 1), 10);
                n = 0;
                if (d_432e_45de[i].f0 == 0)
                    for (j = 1; j <= 4; j = j + 1)
                        if (f_215d_0d96(d_28d4_1958[7][i]) > f_215d_0d96(d_432e_45de[i].f3 == 1 ? 20 : 40)
                            && f_215d_0d96(4) == 0)
                            n++;
                d_3334_0000[0][i]++;
                d_3334_0000[1][i] += n;
                if (f_215d_0d96(d_28d4_1958[11][i]) > f_215d_0d96(40))
                    d_3334_0000[2][i] = d_3334_0000[2][i] + 5;
                d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 1);
                d_61eb_dbb8[0][i] += g;
                d_61eb_dbb8[2][i] += g;
                d_3334_0000[12][i]++;
                d_3334_0000[13][i] += n;
                if (d_3334_0000[3][i] > g || d_3334_0000[3][i] == 0)
                    d_3334_0000[3][i] = g;
                if (d_3334_0000[4][i] < g)
                    d_3334_0000[4][i] = g;
            }
            if (f_215d_0d96(20) == 0)
                d_28d4_1958[15][i] = d_28d4_1958[0][i] + f_215d_0d96(25) - f_215d_0d96(25);
            if (f_215d_0d96(20) == 0)
                f_9a9e_0f8a(i);
        } else {
            d_28d4_1958[20][i] = d_28d4_1958[20][i] - 1;
            if (d_28d4_1958[20][i] == 0)
                f_9a9e_155d(i);
        }
        if (d_432e_45de[i].f9 == 1 && d_61eb_d5a4 > 1 && f_215d_0d96(50) == 0)
            d_432e_45de[i].f9 = 0;
        else if (d_432e_45de[i].f9 == 0 && d_61eb_d5a4 > 1 && f_215d_0d96(50) == 0)
            d_432e_45de[i].f9 = 1;
    }
}

void f_ab30_45bb(void)
{
    unsigned p;
    unsigned n;
    unsigned char kind;
    unsigned char want;
    long fee;
    char buf[320];

    n = 0;
    if (d_61eb_d5a4 > 1) {
        while (d_61eb_d9ae > 0 && n < 1000) {
            p = f_215d_0d96(d_61eb_d58e);
            if (f_ab30_40e5() == 0 && f_ab30_482b(p)) {
                d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 0);
                kind = d_61eb_dbcc[9][p];
                fee = f_1a83_0cef(f_1a83_01d6(p, -1), 0);
                if (kind != 0) {
                    want = kind;
                    sprintf(buf, "%s's %s has returned to a club in his home country %s for a fee of %ld.",
                            (char far *)d_61eb_b0ec[d_28d4_82d0[p]], f_1a83_4485(p), d_53fc_0000[want], fee);
                    f_1a83_5844(d_28d4_82d0[p], "Transfer News", buf);
                } else {
                    want = f_215d_0d96(2) + 73;
                    sprintf(buf, "%s's %s has joined a club in %s for a fee of %ld.",
                            (char far *)d_61eb_b0ec[d_28d4_82d0[p]], f_1a83_4485(p), d_53fc_0000[want], fee);
                    f_1a83_5844(d_28d4_82d0[p], "Transfer News", buf);
                }
                d_3334_cc82[0][d_28d4_82d0[p]] += fee;
                d_3334_cc82[2][d_28d4_82d0[p]] += fee;
                f_ab30_49df(p, want, fee);
            }
            n++;
        }
    }
}

void f_ab30_47a7(void)
{
    unsigned p;

    if (d_61eb_da4d != 0 && d_61eb_d5a4 == 1)
        return;
    for (p = 1000; p <= d_61eb_d590 + 999; p++)
        if ((long)d_28d4_1958[17][p] > f_215d_0d96(4) + 32)
            f_a7b6_05a9(p, 255, f_215d_0d96(10) == 0 ? 1 : 0);
}

char f_ab30_482b(int p)
{
    char r = 0;

    if ((d_3334_a410[p] == 0 || d_3334_a410[p] / 100 == d_61eb_d5a4) &&
        d_28d4_1958[17][p] > 30 &&
        d_28d4_1958[0][p] < (d_61eb_dbcc[9][p] == 0 ? 120 : 150))
        r = -1;
    return r;
}

char f_ab30_48a4(int p, unsigned char c)
{
    char r = 0;

    if (f_1a83_2b0c(c) >= f_1a83_2bdb(p) - 4)
        r = -1;
    return r;
}

void f_ab30_48f1(int p, unsigned char c, long fee)
{
    int q;

    q = d_61eb_d58e;
    f_87dc_182c(p, -1);
    f_ab30_4a55(p, q);
    d_61eb_d58e++;
    d_3334_0000[0][q] = 0;
    d_3334_0000[1][q] = 0;
    d_3334_0000[2][q] = 0;
    d_3334_0000[3][q] = 0;
    d_3334_0000[4][q] = 0;
    d_3334_0000[12][q] = 0;
    d_3334_0000[13][q] = 0;
    d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 1);
    d_61eb_dbb8[0][q] = 0;
    d_61eb_dbb8[2][q] = 0;
    f_87dc_423a(q, c, d_28d4_1958[18][q], fee, 0);
    f_ab30_4a55(d_61eb_d590 + 999, p);
    d_61eb_d590--;
    d_61eb_d9ae++;
}

void f_ab30_49df(int p, unsigned char c, long fee)
{
    int q;

    q = d_61eb_d590 + 1000;
    f_87dc_182c(p, -1);
    f_ab30_4a55(p, q);
    d_61eb_d590++;
    f_87dc_423a(q, c + 140, d_28d4_1958[18][q], fee, 0);
    f_ab30_4a55(d_61eb_d58e - 1, p);
    d_61eb_d58e--;
    d_61eb_d9ae--;
}

void f_ab30_4a55(unsigned src, unsigned dst)
{
    FILE *fp;
    unsigned char i;

    d_432e_45de[dst].f0 = d_432e_45de[src].f0;
    d_432e_45de[dst].f1 = d_432e_45de[src].f1;
    d_432e_45de[dst].f2 = d_432e_45de[src].f2;
    d_432e_45de[dst].f3 = d_432e_45de[src].f3;
    d_432e_45de[dst].f4 = d_432e_45de[src].f4;
    d_432e_45de[dst].f5 = d_432e_45de[src].f5;
    d_432e_45de[dst].f6 = d_432e_45de[src].f6;
    d_432e_45de[dst].f7 = d_432e_45de[src].f7;
    d_432e_45de[dst].f8 = d_432e_45de[src].f8;
    d_432e_45de[dst].f9 = d_432e_45de[src].f9;
    d_432e_45de[dst].f10 = d_432e_45de[src].f10;
    d_432e_45de[dst].f11 = d_432e_45de[src].f11;
    d_432e_45de[dst].f12 = d_432e_45de[src].f12;
    d_432e_45de[dst].f13 = d_432e_45de[src].f13;
    d_432e_45de[dst].f14 = d_432e_45de[src].f14;
    d_432e_45de[dst].f15 = d_432e_45de[src].f15;
    d_432e_45de[dst].f16 = d_432e_45de[src].f16;
    d_432e_45de[dst].f17 = d_432e_45de[src].f17;
    d_432e_45de[dst].f18 = d_432e_45de[src].f18;
    d_432e_45de[dst].f19 = d_432e_45de[src].f19;
    d_432e_45de[dst].f20 = d_432e_45de[src].f20;
    d_432e_45de[dst].f21 = d_432e_45de[src].f21;
    d_432e_45de[dst].f22 = d_432e_45de[src].f22;
    d_432e_45de[dst].f23 = d_432e_45de[src].f23;
    d_432e_45de[dst].f24 = d_432e_45de[src].f24;
    d_432e_45de[dst].f25 = d_432e_45de[src].f25;
    d_432e_45de[dst].f26 = d_432e_45de[src].f26;
    d_432e_45de[dst].f27 = d_432e_45de[src].f27;
    d_432e_45de[dst].f28 = d_432e_45de[src].f28;
    d_432e_45de[dst].f29 = d_432e_45de[src].f29;
    d_432e_45de[dst].f30 = d_432e_45de[src].f30;
    d_432e_45de[dst].f31 = d_432e_45de[src].f31;
    for (i = 0; i <= 23; i++)
        d_28d4_1958[i][dst] = d_28d4_1958[i][src];
    for (i = 0; i <= 23; i++)
        d_3334_0000[i][dst] = d_3334_0000[i][src];
    d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 1);
    for (i = 0; i <= 9; i++)
        d_61eb_dbcc[i][dst] = d_61eb_dbcc[i][src];
    for (i = 0; i <= 3; i++)
        d_3334_8ca0[i][dst] = d_3334_8ca0[i][src];
    d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 1);
    for (i = 0; i <= 4; i++)
        d_61eb_dbb8[i][dst] = d_61eb_dbb8[i][src];
    d_61eb_dbac = f_215d_1629(d_61eb_dc48, 1);
    d_61eb_dbac[dst] = d_61eb_dbac[src];
    f_215d_19eb(2);
    fp = fopen(d_5313_0e10, "rb+");
    fseek(fp, (long)src * 133, 0);
    fread(d_432e_d995, 1, 133, fp);
    fseek(fp, (long)dst * 133, 0);
    fwrite(d_432e_d995, 1, 133, fp);
    fclose(fp);
}

char f_ab30_51ed(int p)
{
    unsigned char k;

    if (!f_1a83_5a4c(p)) {
        d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 0);
        k = d_61eb_dbcc[9][p];
        if (k != 0)
            return -1;
    }
    return 0;
}

unsigned char f_ab30_5236(int team, unsigned char w, unsigned char n)
{
    unsigned char i;
    unsigned char found;
    unsigned char least;
    unsigned char limit;
    int p;

    least = 232;
    if (f_1a83_2644(w, n) || f_1a83_26ed(w, n) || f_1a83_277e(w, n))
        limit = 4;
    else if (f_1a83_2387(w) || f_1a83_247b(w))
        limit = 3;
    else if (f_1a83_2448(w) || f_1a83_280b(w, n)) {
        limit = 2;
        w;
    }
    else if (f_1a83_29a3(w)) {
        if (d_61eb_dba3[n] == 0 || d_61eb_dba3[n] == 1)
            limit = 3;
        else
            limit = 2;
    } else if (w <= 12)
        limit = 100;
    d_61eb_d9bc = 0;
    for (i = 1; i <= 16; i = i + 1) {
        p = d_3334_f9f6[team][i];
        if (f_ab30_51ed(p)) {
            d_61eb_d9bc++;
            if (d_28d4_1958[15][p] < least) {
                found = i;
                least = d_28d4_1958[15][p];
            }
        }
    }
    return d_61eb_d9bc > limit ? found : 0;
}

void f_ab30_5396(unsigned team, unsigned char w, unsigned char n)
{
    unsigned char i;

    if (f_1a83_2ad4(team) == 0)
        while ((i = f_ab30_5236(team, w, n)) > 0)
            f_9a9e_125e(d_3334_f9f6[team][i], 51, 1);
}

void f_ab30_53ed(unsigned team)
{
    unsigned char i;
    int p;

    if (f_1a83_2ad4(team) == 0 && team < 38)
        for (i = 0; i <= d_3334_beca[team] - 1; i = i + 1) {
            p = d_28d4_081c[team][i];
            if (d_28d4_1958[19][p] == 51)
                f_9a9e_155d(p);
        }
}

void f_ab30_5462(unsigned char team)
{
    unsigned char choice;
    unsigned char n;
    unsigned i;

    do {
        char buf[320];
        int list[15];

        f_1a83_5ccd();
        f_1a83_48f9("Players loaned out");
        sprintf(buf, " %s ", (char far *)d_61eb_b0ec[team]);
        f_1a83_3c08(1.25, 4.0, -(d_3334_be02[team] / 16), d_3334_be02[team] % 16, 0, buf);
        f_1a83_3450(1.125, 7.25, 1, 2, 84, " Player");
        f_1a83_3450(11.875, 7.25, 1, 2, 72, " On loan to");
        f_1a83_3450(21.125, 7.25, 1, 2, 24, " AP");
        f_1a83_3450(24.375, 7.25, 1, 2, 24, " GL");
        f_1a83_3450(27.625, 7.25, 1, 2, 36, " AV R");
        f_1a83_3450(32.375, 7.25, 1, 2, 54, " Back");
        f_1a83_5ce1();
        f_1a83_4d96(2, 1.25, 22.5, 1, 4, 301, "                 Done");
        f_1a83_5ccd();
        n = 0;
        for (i = 0; i <= d_61eb_d58e - 1; i++) {
            if (d_3334_0000[7][i] == team) {
                sprintf(buf, " %s", f_1a83_45b4(i));
                f_1a83_4d96(0, 1.125, n + 8.75, 1, n % 2 == 0 ? 3 : 15, 84, buf);
                sprintf(buf, " %s", (char far *)d_61eb_b0ec[d_28d4_1958[18][i]]);
                f_1a83_3450(11.875, n + 8.75, 1, 4, 72, buf);
                sprintf(buf, " %d", d_3334_0000[12][i]);
                f_1a83_3450(21.125, n + 8.75, 1, 12, 24, buf);
                sprintf(buf, " %d", d_3334_0000[13][i]);
                f_1a83_3450(24.375, n + 8.75, 1, 12, 24, buf);
                if (d_3334_0000[12][i] > 0) {
                    float avg;

                    d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 0);
                    avg = (float)d_61eb_dbb8[2][i] / d_3334_0000[12][i];
                    sprintf(buf, " %4.2f", avg);
                } else
                    strcpy(buf, " ----");
                f_1a83_3450(27.625, n + 8.75, 1, 12, 36, buf);
                strcpy(buf, "E.O.S.");
                f_1a83_3450(32.375, n + 8.75, 1, 12, 54, buf);
                list[n] = i;
                n++;
                if (n == 13)
                    i = d_61eb_d58e - 1;
            }
        }
        for (; n < 13; n++) {
            f_1a83_3450(1.125, n + 8.75, 1, n % 2 == 0 ? 3 : 15, 84, "");
            f_1a83_3450(11.875, n + 8.75, 1, 4, 72, "");
            f_1a83_3450(21.125, n + 8.75, 1, 12, 24, "");
            f_1a83_3450(24.375, n + 8.75, 1, 12, 24, "");
            f_1a83_3450(27.625, n + 8.75, 1, 12, 36, "");
            f_1a83_3450(32.375, n + 8.75, 1, 12, 54, "");
        }
        f_1a83_5ce1();
        do {
            choice = f_1a83_5296(-1);
            if (choice >= 2) {
                unsigned p;

                p = list[choice - 2];
                do {
                    f_a214_4120(p, -1, -1);
                    f_87dc_4c9b(p, d_61eb_d5ee);
                } while (!d_61eb_d9ca);
                d_61eb_d9ca = 0;
            }
        } while (choice == 0);
    } while (choice > 1);
}

void f_ab30_5a33(void)
{
    unsigned char i;

    for (i = 0; i <= 17; i++) {
        if (d_3334_be52[i] < 16) {
            unsigned char a, b, c, up;

            a = d_3334_c852[i];
            b = d_3334_c87a[i];
            c = d_3334_c8a2[i];
            up = 0;
            if (d_3334_be52[i] == 13 && a < 6
                || d_3334_be52[i] == 14 && a < 6 && (a + b + c) / 3 < 3
                || d_3334_be52[i] == 15 && a < 6 && (a + b + c) / 3 < 2)
                up = 1;
            d_3334_be52[i] += up;
        }
    }
}

char far *f_ab30_5b32(int player)
{
    char far *s;
    unsigned char apps, goals;
    unsigned pts;

    s = f_215d_0f2d();
    apps = d_3334_0000[12][player];
    goals = d_3334_0000[13][player];
    d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 0);
    pts = d_61eb_dbb8[2][player];
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

void f_ab30_5c8d(void)
{
    char buf[320];

    f_1a83_48f9("");
    f_215d_088c(16);
    f_215d_08aa(24, 19, 304, 189);
    f_215d_088c(30);
    f_215d_08aa(20, 15, 300, 185);
    d_61eb_d664 = 15;
    f_1a83_0134(24, 19, 296, 43);
    strcpy(buf, "Championship Manager Italia");
    f_1a83_3347(136 - strlen(buf) * 3 + 32, 30, 1, buf);
    strcpy(buf, "Game Environment");
    f_1a83_3347(136 - strlen(buf) * 3 + 32, 38, 1, buf);
    d_61eb_d664 = 8;
    f_1a83_0134(24, 161, 296, 181);
    f_215d_089b(16);
    f_215d_0904(26, 172, 294, 179);
    strcpy(buf, "Progress");
    f_1a83_3347(136 - strlen(buf) * 3 + 32, 170, 1, buf);
    memset(d_61eb_dc3c, 100, 10);
    f_ab30_5ded(255);
}

void f_ab30_5ded(unsigned char stage)
{
    unsigned char i;

    for (i = 0; i <= 9; i = i + 1)
        f_ab30_5e27(i, i == stage ? -1 : 0);
}

void f_ab30_5e27(unsigned char n, char on)
{
    char far *labels[20] = {
        "Preparing", "Disk", "Creating", "Player Data",
        "Creating", "Staff Data", "Creating", "Euro Data", "Creating", "Club Records",
        "Creating", "Fixture List", "Player", "Retirements", "Creating", "Squads", "Computer",
        "Intelligence", "Transfer", "List"
    };
    int x, y;

    if (d_61eb_dc3c[n] == on)
        return;
    if (on)
        d_61eb_d664 = 9;
    else
        d_61eb_d664 = 12;
    if (n <= 4) {
        x = 28;
        y = n * 22 + 49;
    } else {
        x = 163;
        y = (n - 5) * 22 + 49;
    }
    f_1a83_0134(x, y, x + 129, y + 18);
    f_1a83_3347(x + (64 - strlen(labels[n * 2]) * 3) + 8, y + 9, 1, labels[n * 2]);
    f_1a83_3347(x + (64 - strlen(labels[n * 2 + 1]) * 3) + 8, y + 16, 1, labels[n * 2 + 1]);
    d_61eb_dc3c[n] = on;
}

void f_ab30_5f57(char stage, unsigned i, unsigned n)
{
    float f;
    int w;

    if (i > 0) {
        f = i * 266.0;
        f = f / n;
        w = f;
        f_215d_088c(17);
        f_215d_08aa(27, 173, w + 27, 178);
    } else {
        f_215d_088c(24);
        f_215d_08aa(27, 173, 293, 178);
    }
}

void f_ab30_5fd3(void)
{
    f_ab30_6968("Mouse commands");
    f_1a83_3347(38, 56, 5, "No mouse driver has been detected. A mouse is");
    f_1a83_3347(38, 64, 5, "recommended, but you can use the keyboard  as");
    f_1a83_3347(38, 72, 5, "follows : -");
    f_1a83_3347(38, 84, 6, "  Up Arrow    - Move mouse up");
    f_1a83_3347(38, 92, 6, "  Down Arrow  - Move mouse down");
    f_1a83_3347(38, 100, 6, "  Left Arrow  - Move mouse left");
    f_1a83_3347(38, 108, 6, "  Right Arrow - Move mouse right");
    f_1a83_3347(38, 116, 6, "  Spacebar    - Mousebutton");
    f_1a83_3347(38, 128, 5, "To print-out a  screen, press  the  Spacebar");
    f_1a83_3347(38, 136, 5, "and the ALT key simultaneously.");
    f_1a83_5540(0);
}

void f_ab30_60a6(void)
{
    f_ab30_6968("Start-up Options");
    f_1a83_3347(38, 56, 1, "Please select from the following options : -");
    f_1a83_3347(38, 68, 6, "New Game");
    f_1a83_3347(38, 78, 5, "Initializes  a completely new game but takes");
    f_1a83_3347(38, 86, 5, "about 15 mins depending on the speed of your");
    f_1a83_3347(38, 94, 5, "machine.");
    f_1a83_3347(38, 106, 6, "Continue Season");
    f_1a83_3347(38, 116, 5, "Loads in  a previously saved game for you to");
    f_1a83_3347(38, 124, 5, "continue.");
    f_1a83_3347(38, 136, 6, "Quick Start");
    f_1a83_3347(38, 146, 5, "Loads in the saved game supplied (one player");
    f_1a83_3347(38, 154, 5, "game, Milan) but  allows  you to enter  your");
    f_1a83_3347(38, 162, 5, "own manager name.");
    f_1a83_5540(0);
}

void f_ab30_619f(void)
{
    f_ab30_6968("Updating Options");
    f_1a83_3347(38, 56, 1, "Updating the game  environment is  a lengthy");
    f_1a83_3347(38, 64, 1, "process.  Please  select from  the following");
    f_1a83_3347(38, 72, 1, "options : -");
    f_1a83_3347(38, 84, 6, "Pause For News");
    f_1a83_3347(38, 94, 5, "Pauses  and waits for a mouse click when any");
    f_1a83_3347(38, 102, 5, "news items appear.");
    f_1a83_3347(38, 114, 6, "Don't Pause");
    f_1a83_3347(38, 124, 5, "Continues automatically without pausing  for");
    f_1a83_3347(38, 132, 5, "news items. This quickens the process.");
    f_1a83_3347(38, 144, 6, "Save Game");
    f_1a83_3347(38, 154, 5, "Saves the current state of play, for you  to");
    f_1a83_3347(38, 162, 5, "continue and update at a later date.");
    f_1a83_5540(0);
}

void f_ab30_6298(void)
{
    unsigned char i;

    for (i = 0; i <= 49; i++)
        d_432e_74e2[i].player = -1;
}

void f_ab30_62c1(unsigned char n)
{
    unsigned char page;
    unsigned char i;
    unsigned char line;
    unsigned char key;
    unsigned char last;
    int player;
    char buf[320];

    if (d_432e_74e2[0].player > -1) {
        do {
            page = n / 15 + 1;
            if (n % 15 == 0 || d_61eb_da13) {
                f_1a83_48f9("Transfer News");
                sprintf(buf, " Week %d ", f_1a83_66e8(d_61eb_d5a2));
                f_1a83_3c08(1.25, 3.5, 1, 8, 0, buf);
                f_1a83_3450(1.125, 6.0, 1, 2, 94, " Player");
                f_1a83_3450(13.125, 6.0, 1, 2, 81, " From");
                f_1a83_3450(23.5, 6.0, 1, 2, 81, " To");
                f_1a83_3450(33.875, 6.0, 1, 2, 42, " Fee");
                if (d_61eb_d9c3) {
                    f_1a83_4d96(2, 1.25, 22.5, 1, 12, 53, " - Scr");
                    f_1a83_4d96(2, 32.25, 22.5, 1, 12, 53, " Scr +");
                    f_1a83_4d96(2, 8.5, 22.5, 1, 4, 185, "          Done");
                }
                d_61eb_da13 = 0;
                n = (page - 1) * 15;
            }
            line = n % 15 + 1;
            last = n / 15 * 15 + 14;
            for (i = n; i <= last; line++, i = i + 1) {
                if (d_432e_74e2[i].player > -1) {
                    sprintf(buf, " %s", f_1a83_45b4(d_432e_74e2[i].player));
                    if (d_61eb_d9c3)
                        f_1a83_4d96(0, 1.125, line + 6.125, 1, line % 2 == 0 ? 8 : 14, 94, buf);
                    else
                        f_1a83_3450(1.125, line + 6.125, 1, line % 2 == 0 ? 8 : 14, 94, buf);
                    if (d_432e_74e2[i].from < 38)
                        sprintf(buf, " %s", (char far *)d_61eb_b0ec[d_432e_74e2[i].from]);
                    else
                        sprintf(buf, " <%s>", d_53fc_0000[d_432e_74e2[i].from - 140]);
                    f_1a83_3450(13.125, line + 6.125, 1, 4, 81, buf);
                    if (d_432e_74e2[i].to < 38)
                        sprintf(buf, " %s", (char far *)d_61eb_b0ec[d_432e_74e2[i].to]);
                    else
                        sprintf(buf, " <%s>", d_53fc_0000[d_432e_74e2[i].to - 140]);
                    f_1a83_3450(23.5, line + 6.125, 1, 11, 81, buf);
                    if (d_432e_74e2[i].fee == 0)
                        strcpy(buf, " Free");
                    else if (d_432e_74e2[i].fee == 1)
                        strcpy(buf, " Loan");
                    else
                        sprintf(buf, " %dK", (int)(d_432e_74e2[i].fee / 1000));
                    f_1a83_3450(33.875, line + 6.125, 1, 15, 42, buf);
                }
            }
            if (d_61eb_d9c3) {
                do {
                    key = f_1a83_5296(-1);
                    if ((key == 1 && page == 1) || (key == 2 && d_432e_74e2[page * 15].player == -1))
                        key = 0;
                } while (key == 0);
                if (key == 1)
                    n -= 15;
                else if (key == 2)
                    n += 15;
                else if (key >= 4) {
                    player = d_432e_74e2[(page - 1) * 15 + key - 4].player;
                    do {
                        f_a214_4120(player, -1, -1);
                        f_87dc_4c9b(player, d_61eb_d5ee);
                    } while (!d_61eb_d9ca);
                    d_61eb_d9ca = 0;
                }
            } else
                key = 3;
        } while (key != 3);
    } else
        f_1a83_0bb7("No transfer news this week");
}

void f_ab30_6836(void)
{
    f_ab30_6968("Developed By Intelek");
    f_1a83_3347(38, 56, 5, "Intelek  is  the  team  formed   around  the");
    f_1a83_3347(38, 64, 5, "original developers of Domark's Championship");
    f_1a83_3347(38, 72, 5, "Manager.  We  aim  to  write  software  that");
    f_1a83_3347(38, 80, 5, "provides lasting entertainment.");
    f_1a83_3347(38, 92, 5, "If you would like to make any comments about");
    f_1a83_3347(38, 100, 5, "Championship Manager Italia, please write to");
    f_1a83_3347(38, 108, 5, "us at this address : -");
    f_1a83_3347(54, 120, 6, "Intelek");
    f_1a83_3347(54, 128, 6, "P.O. Box 1738");
    f_1a83_3347(54, 136, 6, "Bournemouth");
    f_1a83_3347(54, 144, 6, "England");
    f_1a83_3347(54, 152, 6, "BH4 8YN");
    f_1a83_3347(38, 164, 5, "Thanks to everyone who wrote in last time -");
    f_1a83_3347(38, 172, 5, "your response has been overwhelming. We are");
    f_1a83_3347(38, 180, 5, "currently replying to all your letters.");
    f_1a83_5540(0);
}

void f_ab30_6968(char far *title)
{
    char buf[320];

    f_1a83_48f9("");
    f_215d_088c(16);
    f_215d_08aa(24, 19, 304, 189);
    f_215d_088c(26);
    f_215d_08aa(20, 15, 300, 185);
    d_61eb_d664 = 12;
    f_1a83_0134(24, 19, 296, 43);
    strcpy(buf, "Championship Manager Italia");
    f_1a83_3347(136 - strlen(buf) * 3 + 32, 30, 1, buf);
    f_1a83_3347(136 - strlen(title) * 3 + 32, 38, 1, title);
}

void f_ab30_6a32(void)
{
    char a[80];
    char b[80];
    unsigned i;

    if (d_61eb_da4d) {
        for (i = 0; i <= d_61eb_d58e - 1; i++) {
            d_432e_45de[i].f30 = 0;
            strcpy(a, f_1a83_4485(i));
            strcpy(b, f_1a83_4686(d_3334_ca6e[d_28d4_1958[18][i]], 0));
            if (stricmp(a, b) == 0)
                d_432e_45de[i].f30 = 1;
        }
    }
}

void f_ab30_6aea(void)
{
    unsigned char n;
    unsigned best;
    unsigned i;

    if (d_61eb_d5a4 == 1 && d_61eb_da4d)
        return;
    n = 0;
    for (i = 0; i <= d_61eb_d58e - 1; i++)
        n += d_432e_45de[i].f28;
    while (n < 8) {
        best = 0;
        for (i = 0; i <= d_61eb_d58e - 1; i++)
            if (d_28d4_1958[0][i] >= 180 && d_28d4_1958[0][i] > d_28d4_1958[0][best]
                && !d_432e_45de[i].f28 && d_28d4_1958[17][i] < 25)
                best = i;
        if (best > 0) {
            d_432e_45de[best].f28 = 1;
            n++;
        } else
            n = 8;
    }
}
