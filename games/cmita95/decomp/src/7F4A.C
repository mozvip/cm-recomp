/* @at 7f4a:0000 */
/* @data 61eb:24ec */
/* @module */

/* Overlay 7f4a (CM94's 8773.C, CM93's 817E.C, CM1's 7A28.C): the match engine's events:
 * goals and their commentary, disallowed goals, penalties and shoot-outs, the score bar and
 * attempts, team strengths and player ratings during the match, the result, and the match
 * statistics screen. Its data starts with the goal commentary tables (how the ball went in,
 * where it went, and the (verb, place) pairs that do not go together), then the initialiser
 * of 3002's local float table, ahead of the literals. */
#include <stdio.h>
#include <string.h>
#include <mem.h>
#include <stdlib.h>

/* the functions, in the reverse order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_7f4a_0000(int a, int b, int c, int d);
void f_7f4a_00c5(void);
void f_7f4a_0143(int minute);
void f_7f4a_01cc(int team);
void f_7f4a_0283(void);
void f_7f4a_02ed(int a, char c, char d, char e, int b, int team);
void f_7f4a_0714(char c);
void f_7f4a_09cd(void);
void f_7f4a_0a9c(int team, char far *s);
void f_7f4a_0b12(void);
void f_7f4a_0b2c(int team);
void f_7f4a_0d6a(void);
char f_7f4a_0efe(int a, int b, int na, int nb, int n);
void f_7f4a_0f30(int team);
void f_7f4a_1050(int team, int chance, int shootout);
void f_7f4a_142c(int team);
unsigned char f_7f4a_1525(int p, int team);
void f_7f4a_193a(int team);
void f_7f4a_28bf(int team);
void f_7f4a_2ac3(unsigned char a, unsigned char b, unsigned char c);
void f_7f4a_2b32(unsigned char a, unsigned char b, unsigned char c);
void f_7f4a_2ba1(int team);
void f_7f4a_2d1a(void);
void f_7f4a_3002();             /* no prototype: its callers pass words, it reads bytes (CM94) */
int f_7f4a_3980(int i, int team);
void f_7f4a_3a06(int a, int b, char c);
void f_7f4a_3f77(char a, int b, int c, int d, int e, float f);

void f_215d_088c();
void f_215d_08aa(int x1, int y1, int x2, int y2);
void f_215d_089b();
void f_215d_0904(int x1, int y1, int x2, int y2);
void f_215d_07ec(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_215d_0b01();
void f_215d_0987(int a);
void f_215d_09d7(int x, int y, char far *s);
char far *f_215d_0e90(char far *s);
void f_215d_0df0(int ticks);
long f_215d_0d96(long n);
void f_1a83_3347(int x, int y, int colour, char far *s);
void f_1a83_3a43(float x, float y, int colour, char far *s);
void f_1a83_3c08(float x, float y, int a, int b, int c, char far *s);
char far *f_1a83_45b4(int player);
char far *f_1a83_2d52(int x, char c);
char f_1a83_5a4c(int player);
void f_1a83_48f9(char far *title);
void f_b26d_3f53(int player, char c);
void f_ab30_3b31(char team);
void f_7a45_220c(int a, int b, int c);
void f_7a45_2e3e(void);
void f_7a45_4961(float x, float y);
extern char near *d_61eb_b0ec[];
extern char d_61eb_da48;
extern char d_61eb_da47;
extern char d_61eb_d9f7;
extern char d_61eb_d9cc;
extern int d_61eb_d77e;
extern int d_61eb_d70e;
extern int d_61eb_d70c;
extern int d_61eb_d70a;
extern int d_61eb_d708;
extern int d_61eb_d6f8;
extern int d_61eb_d6f6;
extern int d_61eb_d6ca;
extern int d_61eb_d6c8;
extern int d_61eb_d6b6;
extern int d_61eb_d6b4;
extern int d_61eb_d69e;
extern int d_61eb_d680;
extern int d_61eb_d670;
extern int d_61eb_d66e;
extern int d_61eb_d66a;
extern int d_61eb_d668;
extern int d_61eb_d666;
extern int d_61eb_d5e0;
extern int d_61eb_d5d8;
extern int d_61eb_d5a2;
extern char far d_432e_d2db[];
extern char far d_432e_d28b[];
extern char far d_432e_d23b[];
extern char far d_432e_cab7[];
extern char far d_432e_ca67[];
extern unsigned char far d_3334_0000[][1500];
char far *f_1a83_462c(int player);
char f_1a83_2ad4(int x);
int f_7a45_30ad(int team, int p);
int f_ab30_301b(int player);
extern char d_61eb_da46;
extern char d_61eb_d9f9;
extern char d_61eb_d9ec;
extern char d_61eb_d9df;
extern int d_61eb_d99c;
extern int d_61eb_d99a;
extern int d_61eb_d998;
extern int d_61eb_d782;
extern int d_61eb_d75c;
extern int d_61eb_d750;
extern int d_61eb_d74e;
extern int d_61eb_d74c;
extern int d_61eb_d712;
extern int d_61eb_d710;
extern int d_61eb_d674;
extern int d_61eb_d5de;
extern int d_61eb_d5b8;
extern int d_61eb_d5aa;
extern char far d_432e_c125[];
extern unsigned char far d_3334_fefe[][16];
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
extern struct flags_w far d_432e_45de[];
extern int far d_3334_f9f8[][16];
extern unsigned char far d_28d4_1958[][1500];
extern unsigned char far d_3334_c82a[];
struct goals { unsigned char pad; unsigned char g[2][16]; };
extern struct goals far d_432e_880f;
extern char far d_432e_cba7[];
extern char far d_432e_d37b[];
char far *f_1a83_4485(int player);
char f_1a83_247b(int week);
unsigned char f_1a83_6d8b(unsigned char team);
char f_1a83_2644(int, int);
char f_1a83_26ed(int, int);
char f_1a83_277e(int, int);
char f_1a83_5a2e(int player);
extern char d_61eb_d9fa;
extern char d_61eb_d9e8;
extern unsigned char d_61eb_d9b5;
extern unsigned char d_61eb_d9b4;
extern int d_61eb_d788;
extern int d_61eb_d786;
extern int d_61eb_d784;
extern int d_61eb_d5f4;
extern int d_61eb_d5c2;
extern char far d_432e_d50b[];
extern char far d_432e_d4bb[];
extern float far d_432e_0f9e[];
float f_215d_1319(float a, float b);
int f_215d_1343(int a, int b);
float f_215d_1385(float a, float b);
int f_1a83_1eed(int a, int b, int c);
int f_1a83_234b(unsigned char a);
char f_1a83_2962(int a, int b);
unsigned char f_1a83_5a9f(int player, unsigned char a);
extern float d_61eb_daa1;
extern float d_61eb_da9d;
extern float d_61eb_da99;
extern float d_61eb_da95;
extern char d_61eb_da30;
extern unsigned char d_61eb_d9b7;
extern unsigned char d_61eb_d9b6;
extern int d_61eb_d9a0;
extern int d_61eb_d99e;
extern int d_61eb_d996;
extern int d_61eb_d994;
extern int d_61eb_d8e6;
extern int d_61eb_d7aa;
extern int d_61eb_d7a8;
extern int d_61eb_d7a6;
extern int d_61eb_d7a4;
extern int d_61eb_d7a2;
extern int d_61eb_d7a0;
extern int d_61eb_d79e;
extern int d_61eb_d79c;
extern int d_61eb_d79a;
extern int d_61eb_d798;
extern int d_61eb_d796;
extern int d_61eb_d794;
extern int d_61eb_d792;
extern int d_61eb_d790;
extern int d_61eb_d78e;
extern int d_61eb_d78c;
extern int d_61eb_d78a;
extern int d_61eb_d768;
extern int d_61eb_d754;
extern int d_61eb_d752;
extern int d_61eb_d74a;
extern int d_61eb_d748;
extern int d_61eb_d746;
extern int d_61eb_d744;
extern int d_61eb_d740;
extern int d_61eb_d73c;
extern int d_61eb_d738;
extern int d_61eb_d72e;
extern int d_61eb_d71e;
extern int d_61eb_d6de;
extern int d_61eb_d68c;
extern int d_61eb_d630;
extern float far d_432e_0f1e[][16];
extern unsigned char far d_3334_ff1e[][16];
extern unsigned char far d_3334_fefa[];
extern unsigned char far d_3334_f278[][3][16];
extern unsigned char far d_3334_d680[];
extern unsigned char far d_3334_d90a[];
extern unsigned char far d_3334_db94[];
extern unsigned char far d_3334_de1e[];
extern int far d_3334_ca6e[];
extern int far d_3334_caba[];
extern unsigned char far d_3334_bdb2[][40];
extern unsigned char far d_3334_bcfe[][60];
extern unsigned char far d_3334_bc4a[][60];
extern unsigned char far d_3334_bc2a[][16];
extern unsigned char far d_3334_bb80[][5];
extern unsigned char far d_53fc_095c[][10];
extern long (far *d_61eb_dbc0)[38];
extern unsigned char (far *d_61eb_dbcc)[1500];
extern int (far *d_61eb_dbb8)[1500];
char unmapped_f_1a70_2490(int);
char unmapped_f_1a70_24c5(int);
int f_1a83_669a(int a, int b, int c);
double f_1a83_65dc(int x, int y);
float f_1a83_66fa(int x);
long f_215d_135c(long a, long b);
void far *f_215d_1629(int handle, int page);
extern long d_61eb_db21;
extern float d_61eb_daa5;
extern int d_61eb_d7ac;
extern int d_61eb_d704;
extern int d_61eb_d702;
extern int d_61eb_d700;
extern int d_61eb_d6fe;
extern int d_61eb_d6fc;
extern int d_61eb_d6fa;
extern int d_61eb_d686;
extern int d_61eb_d67e;
extern int d_61eb_d5fc;
extern int d_61eb_d5e6;
extern int d_61eb_dc52;
extern int far d_28d2_001d;
extern float far d_28d2_0019;
extern int far d_432e_1f1e[];
extern unsigned char far d_432e_066a[];
extern unsigned char far d_3334_fef8[];
extern unsigned char far d_3334_bdda[];
extern int far d_53fc_138c[][2][100];
int f_215d_13af(int a, int b);
void f_93a1_45de(int team, int a, int player, int b);
extern int d_61eb_d7ae;
extern int d_61eb_d7b0;
extern int d_61eb_d6c6;
char far *f_1a83_3300(int x);
void f_1a83_3450(float x, float y, int bg, int fg, int w, char far *s);
void f_1a83_3697(float x, float y, int colour, char far *s);
void f_1a83_380b(float x, float y, int bg, int fg, int w, char far *s);
void f_7a45_420a(int team, char c);
void f_1a83_5540(int a);
extern int d_61eb_d7b2;
extern int d_61eb_d7b4;
extern int d_61eb_d73e;
extern int d_61eb_d6ee;
extern int d_61eb_d6f2;
void f_215d_13f1(void far *a, void far *b, int n);
extern int d_61eb_d5c6;
extern int d_61eb_d5ca;
extern int d_61eb_d5da;
extern int d_61eb_d732;
extern int d_61eb_d6ba;
extern char d_61eb_d9f8;
extern char d_61eb_d9e1;
extern int far d_3334_bbea[][16];
extern int d_61eb_dc58;
extern int d_61eb_dc4e;
extern int d_61eb_d58e;
extern int d_61eb_d6a0;
char f_1a83_5d3d(char team, char week, char n);
void f_1a83_5ccd(void);
void f_1a83_5ce1(void);
extern char far * far d_53fc_058f[];
extern char far d_432e_ecc3[];
extern char far d_432e_ec73[];
extern char far d_432e_d55d[];
extern char far d_432e_d55b[];
extern char far d_432e_bc57[];
extern char far d_432e_bc07[];
extern int d_61eb_d734;
extern unsigned char far d_3334_ff5e[][16];
extern unsigned char far d_3334_ff7e[][16];
extern int far d_432e_87d0[][16];
extern unsigned char far d_432e_8810[][16];
extern unsigned char far d_432e_8830[][16];
extern unsigned char far d_432e_8850[][16];
extern long far d_432e_87cc;
struct matchstats { /* the match record's ratings and counts */ unsigned def : 7; /* the three ratings shown on the stats screen */ unsigned mid : 7; unsigned att : 7; unsigned shots_h : 6; /* attempts */ unsigned shots_a : 6; unsigned capt_h : 4; /* the captains' shirt numbers */ unsigned capt_a : 4; unsigned motm : 6; /* the man of the match: 1-16 home, 17-32 away */ };
extern struct matchstats far d_432e_8870;
struct score { unsigned home1 : 4; unsigned away1 : 4; unsigned home2 : 4; unsigned away2 : 4; };
extern struct score far d_432e_87c8[];

/* the goal commentary: how the ball went in, where it went, and the pairs (verb, place)
 * that do not go together, ended by -1. A '*' is replaced by the keeper's name. */
static char far *d_61eb_24ec[] = {
    "Tapped", "Volleyed", "Headed", "Guided", "Placed", "Side footed", "Driven", "Curled",
    "Chipped", "Thundered", "Flicked", "Lashed", "Hooked", "Scrambled", "Rifled",
    "Hammered", "Glorious strike", "Smashed", "Powered", "Downward header",
    "Bullet header", "Looping header", "Forced", "Rammed", "Despatched",
    "Hit ferociously", "Thumped", "Slotted", "Buried", "Bundled", "Hit first time",
    "Calmly placed", "Clinical strike", "Crashed"
};
static char far *d_61eb_2574[] = {
    "past*", "into the net", "into the corner", "into the top corner", "in off a post",
    "in off the bar", "in beyond*", "through a crowd", "under*", "home",
    "into the open net"
};
static char d_61eb_25a0[] = {
    0, 3, 0, 5, 0, 7, 3, 7, 4, 7, 4, 9, 7, 7, 7, 8, 7, 9, 8, 7, 8, 8, 8, 9, 10, 7, 13, 3,
    16, 8, 16, 9, 19, 7, 19, 8, 19, 9, 20, 7, 20, 8, 20, 9, 21, 7, 21, 8, 21, 9, 22, 3,
    24, 9, 25, 9, 27, 3, 27, 4, 27, 5, 27, 7, 29, 3, 30, 3, 31, 7, 31, 9, 32, 7, 32, 9,
    33, 8, -1
};

void f_7f4a_0000(int a, int b, int c, int d)
{
    int t1, t2;

    t1 = b * 38 / (a + b);
    t2 = 38 - t1;
    f_215d_088c(16);
    f_215d_08aa(c * 36 + 24, 139, c * 36 + 31, 177 - t2);
    f_215d_08aa(d * 36 + 168, 139, d * 36 + 175, 177 - t1);
    f_215d_088c(28);
    f_215d_08aa(c * 36 + 24, t1 + 139, c * 36 + 31, 177);
    f_215d_08aa(d * 36 + 168, t2 + 139, d * 36 + 175, 177);
}

void f_7f4a_00c5(void)
{
    f_215d_088c(28);
    f_215d_08aa(224, 14, 306, 42);
    f_215d_088c(16);
    f_215d_08aa(226, 16, 304, 40);
    f_215d_089b(22);
    f_215d_0904(222, 12, 308, 44);
    f_215d_089b(24);
    f_215d_0904(260, 18, 290, 36);
    f_1a83_3347(240, 30, 6, "TIME");
    f_7f4a_0143(d_61eb_d69e);
}

void f_7f4a_0143(int minute)
{
    char buf[80];

    if (d_61eb_d9f7)
        sprintf(buf, "Inj");
    else
        sprintf(buf, "%03d", minute);
    f_215d_088c(16);
    f_215d_08aa(261, 19, 289, 35);
    f_215d_0b01(0);
    if (d_61eb_d77e != 2)
        f_215d_0987(2);
    f_215d_089b(18);
    f_215d_09d7(264, 34, buf);
    f_215d_0b01(1);
}

void f_7f4a_01cc(int team)
{
    char buf[320];

    if (d_61eb_d6c8 + d_61eb_d6ca > 0) {
        if (team == d_61eb_d666)
            d_61eb_d680 = d_61eb_d668;
        else
            d_61eb_d680 = d_61eb_d666;
        f_7f4a_0b2c(d_61eb_d680);
        sprintf(buf, "%s for %s!", d_432e_d23b, (char far *)d_61eb_b0ec[team]);
        f_7f4a_0a9c(team, buf);
        f_215d_0df0(100);
        sprintf(buf, "%s %s", d_432e_d28b, d_432e_d2db);
        f_7f4a_0a9c(team, buf);
        f_215d_0df0(100);
        f_ab30_3b31(team);
        f_7f4a_0a9c(d_61eb_d666, d_432e_cba7);
    }
}

void f_7f4a_0283(void)
{
    int team;
    char buf[320];

    if (d_61eb_d70e > d_61eb_d66e) {
        team = d_61eb_d668;
        d_61eb_d70a = 1;
    }
    if (d_61eb_d70e < d_61eb_d66e) {
        team = d_61eb_d666;
        d_61eb_d708 = 1;
    }
    if (d_61eb_d6c8 + d_61eb_d6ca > 0) {
        sprintf(buf, "%s win on away goals!", (char far *)d_61eb_b0ec[team]);
        f_7f4a_0a9c(team, buf);
    }
}

void f_7f4a_02ed(int a, char c, char d, char e, int b, int team)
{
    char buf[320];

    if (team < 38 && !f_1a83_5a4c(a) && d == 0) {
        if (d_61eb_d5a2 > 12) {
            unsigned char other = team == d_61eb_d666 ? d_61eb_d668 : d_61eb_d666;

            d_3334_0000[1][a]++;
            d_3334_0000[13][a]++;
            if (other < 38) {
                int keeper = d_3334_f9f8[other][0];

                if (!f_1a83_5a4c(keeper) && d_432e_45de[keeper].f0)
                    d_28d4_1958[1][keeper]++;
            }
        }
        f_b26d_3f53(a, 1);
    }
    if (team < 38 && d != 0 && d_61eb_d5a2 > 12)
        d_3334_c82a[team]++;
    if (d_61eb_d6c8 + d_61eb_d6ca > 0) {
        if (d != 0) {
            char k;
            char own = 1;

            d_61eb_d680 = team == d_61eb_d666 ? d_61eb_d668 : d_61eb_d666;
            sprintf(buf, "Goal for %s!", (char far *)d_61eb_b0ec[team]);
            f_7f4a_0a9c(team, buf);
            f_215d_0df0(100);
            k = f_215d_0d96(5);
            if (k == 0)
                strcpy(buf, "Put");
            else if (k == 1)
                strcpy(buf, "Sliced");
            else if (k == 2)
                strcpy(buf, "Headed");
            else if (k == 3)
                strcpy(buf, "Chipped");
            else
                strcpy(buf, "Deflected");
            k = f_215d_0d96(2);
            if (d_61eb_da47 == 0 && team == d_61eb_d668 || d_61eb_da48 == 0 && team == d_61eb_d666)
                own = 0;
            if (k == 0 && own == 1)
                strcat(buf, " past his own 'keeper!");
            else
                strcat(buf, " into his own net!");
            f_7f4a_0a9c(d_61eb_d680, buf);
            f_215d_0df0(100);
            if (d_61eb_d680 < 38) {
                sprintf(buf, "Own goal by %s", f_1a83_45b4(a));
                f_7f4a_0a9c(d_61eb_d680, buf);
            } else {
                sprintf(buf, "Own goal by their No.%s", f_1a83_2d52(b + 1, 0));
                f_7f4a_0a9c(d_61eb_d680, buf);
            }
            0;
            f_215d_0df0(100);
            f_7f4a_0a9c(d_61eb_d666, d_432e_cba7);
        } else if (c == 0 && e == 0) {
            if (team == d_61eb_d666)
                d_61eb_d680 = d_61eb_d668;
            else
                d_61eb_d680 = d_61eb_d666;
            f_7f4a_0b2c(d_61eb_d680);
            sprintf(buf, "%s for %s!", d_432e_d23b, (char far *)d_61eb_b0ec[team]);
            f_7f4a_0a9c(team, buf);
            f_215d_0df0(100);
            sprintf(buf, "%s %s", d_432e_d28b, d_432e_d2db);
            f_7f4a_0a9c(team, buf);
            f_215d_0df0(100);
            if (team < 38) {
                sprintf(buf, "Scored by %s", f_1a83_45b4(a));
                f_7f4a_0a9c(team, buf);
            } else {
                sprintf(buf, "Scored by their No.%s", f_1a83_2d52(b + 1, 0));
                f_7f4a_0a9c(team, buf);
            }
            f_215d_0df0(100);
            f_7f4a_0a9c(d_61eb_d666, d_432e_cba7);
        }
        f_7f4a_09cd();
    }
    if (d == 0) {
        if (team == d_61eb_d666) {
            d_432e_880f.g[0][b] += 16;
            if (d_432e_880f.g[0][b] / 16 == 3 && team < 38) {
                sprintf(buf, "%04d", a);
                strcat(d_432e_d37b, buf);
            }
        } else {
            d_432e_880f.g[1][b] += 16;
            if (d_432e_880f.g[1][b] / 16 == 3 && team < 38) {
                sprintf(buf, "%04d", a);
                strcat(d_432e_d37b, buf);
            }
        }
    } else if (d != 0) {
        if (team == d_61eb_d666)
            d_432e_880f.g[1][b]++;
        else
            d_432e_880f.g[0][b]++;
    }
    f_7a45_2e3e();
}

void f_7f4a_0714(char c)
{
    char buf[320];

    f_7a45_220c(d_61eb_d6b4, d_61eb_d6b4, d_61eb_d6b6);
    f_1a83_48f9("");
    if (strlen(d_432e_cab7) + 9 <= 19)
        sprintf(buf, " %s from the", d_432e_cab7);
    else
        sprintf(buf, " %s", d_432e_cab7);
    f_1a83_3c08(3.0, 2.0, -d_61eb_d66a, d_61eb_d5e0, 165, buf);
    sprintf(buf, " %s", d_432e_ca67);
    if (buf[strlen(buf) - 1] == '*')
        buf[strlen(buf) - 1] = 0;
    f_1a83_3c08(3.0, 4.5, -d_61eb_d66a, d_61eb_d5e0, 165, buf);
    f_7f4a_00c5();
    f_7f4a_0a9c(d_61eb_d666, d_432e_cba7);
    sprintf(buf, " %s ", f_215d_0e90(d_61eb_b0ec[d_61eb_d666]));
    f_1a83_3c08(3.0, 12.0, -d_61eb_d66a, d_61eb_d5e0, 0, buf);
    f_7a45_220c(d_61eb_d6b6, d_61eb_d6b4, d_61eb_d6b6);
    sprintf(buf, " %s ", f_215d_0e90(d_61eb_b0ec[d_61eb_d668]));
    f_1a83_3c08(21.0, 12.0, -d_61eb_d66a, d_61eb_d5e0, 0, buf);
    f_7f4a_09cd();
    f_1a83_3347(30, 132, 1, "CHANCES :");
    sprintf(buf, "%d", d_61eb_d6f6);
    f_1a83_3347(96, 132, 5, buf);
    f_1a83_3347(174, 132, 1, "CHANCES :");
    sprintf(buf, "%d", d_61eb_d6f8);
    f_1a83_3347(240, 132, 5, buf);
    f_215d_089b(17);
    for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= 2; d_61eb_d5d8++) {
        f_215d_0904(d_61eb_d5d8 * 36 + 23, 138, d_61eb_d5d8 * 36 + 32, 178);
        f_215d_0904(d_61eb_d5d8 * 36 + 167, 138, d_61eb_d5d8 * 36 + 176, 178);
    }
    f_1a83_3347(28, 188, 6, "DEF   MID   ATT         DEF   MID   ATT");
    if (c == 1)
        f_7a45_4961(3.5, 21.5);
    else if (c == 2)
        f_7a45_4961(21.5, 3.5);
}

void f_7f4a_09cd(void)
{
    char buf[320];

    f_215d_07ec(134, 91, 153, 106);
    f_215d_07ec(278, 91, 297, 106);
    sprintf(buf, "%d", d_61eb_d70c);
    f_1a83_3a43(18.0, 12.0, 1, buf);
    sprintf(buf, "%d", d_61eb_d70e);
    f_1a83_3a43(36.0, 12.0, 1, buf);
    if (d_61eb_d9cc != 0) {
        f_215d_07ec(223, 46, 277, 52);
        sprintf(buf, "AGG %d-%d", d_61eb_d70c + d_61eb_d66e, d_61eb_d70e + d_61eb_d670);
        f_1a83_3347(232, 52, 3, buf);
    }
}

void f_7f4a_0a9c(int team, char far *s)
{
    char buf[320];

    if (team == d_61eb_d666)
        f_7a45_220c(d_61eb_d6b4, d_61eb_d6b4, d_61eb_d6b6);
    else
        f_7a45_220c(d_61eb_d6b6, d_61eb_d6b4, d_61eb_d6b6);
    f_7f4a_0b12();
    sprintf(buf, " %s ", s);
    f_1a83_3c08(3.0, 8.5, -d_61eb_d66a, d_61eb_d5e0, 0, buf);
}

void f_7f4a_0b12(void)
{
    f_215d_07ec(16, 56, 312, 80);
}

void f_7f4a_0b2c(int team)
{
    int b;
    int a;
    int w;
    char buf[40];
    int i;
    int v;

    do {
        d_61eb_d9df = -1;
        a = f_215d_0d96(34);
        if ((d_61eb_da47 == 0 && team == d_61eb_d666) ||
            (d_61eb_da48 == 0 && team == d_61eb_d668))
            b = 10;
        else
            do {
                b = f_215d_0d96(10);
            } while (f_215d_0d96(3) && b >= 3 && b <= 5);
        i = 0;
        do {
            v = d_61eb_25a0[i++];
            if (v != -1) {
                w = d_61eb_25a0[i++];
                if (a == v && b == w) {
                    d_61eb_d9df = 0;
                    v = -1;
                }
            }
        } while (v != -1);
        if (d_61eb_d9df != 0) {
            strcpy(d_432e_d28b, d_61eb_24ec[a]);
            strcpy(d_432e_d2db, d_61eb_2574[b]);
            if (d_432e_d2db[strlen(d_432e_d2db) - 1] == '*') {
                if (team < 38)
                    strcpy(buf, f_1a83_462c(d_3334_f9f8[team][0]));
                else
                    strcpy(buf, "their 'keeper");
                d_432e_d2db[strlen(d_432e_d2db) - 1] = ' ';
                strcat(d_432e_d2db, buf);
            }
            if (strlen(d_432e_d28b) + strlen(d_432e_d2db) > 32)
                d_61eb_d9df = 0;
        }
    } while (!d_61eb_d9df);
    if (b < 10) {
        d_61eb_d9f9 = -1;
        switch (a) {
        case 0: case 5: case 12: case 13: case 22: case 29:
            d_61eb_d9f9 = 0;
            d_61eb_da46 = 0;
        }
        if (d_61eb_da46)
            strcpy(d_432e_d23b, "Magnificent goal");
        else if (d_61eb_d9f9 && (!f_215d_0d96(4) || a == 16)) {
            if (f_215d_0d96(2) == 0)
                strcpy(d_432e_d23b, "Brilliant goal");
            else
                strcpy(d_432e_d23b, "Superb goal");
        } else
            strcpy(d_432e_d23b, "Goal");
    }
}

void f_7f4a_0d6a(void)
{
    if (d_61eb_d6c8 + d_61eb_d6ca > 0)
        f_7f4a_0a9c(d_61eb_d666, d_432e_cba7);
    d_61eb_d782 = 1;
    d_61eb_d998 = 0;
    d_61eb_d99a = 0;
    d_61eb_d99c = 5;
    while (f_7f4a_0efe(d_61eb_d710, d_61eb_d712, d_61eb_d998, d_61eb_d99a, d_61eb_d99c) == 0) {
        f_7f4a_1050(d_61eb_d666, d_61eb_d74c, 1);
        d_61eb_d998++;
        if (d_61eb_d9ec) {
            d_61eb_d710++;
            d_61eb_d70c++;
            if (d_61eb_d6c8 + d_61eb_d6ca > 0)
                f_7f4a_09cd();
        }
        if (f_7f4a_0efe(d_61eb_d710, d_61eb_d712, d_61eb_d998, d_61eb_d99a, d_61eb_d99c) == 0) {
            f_7f4a_1050(d_61eb_d668, d_61eb_d74e, 1);
            d_61eb_d99a++;
            if (d_61eb_d9ec) {
                d_61eb_d712++;
                d_61eb_d70e++;
                if (d_61eb_d6c8 + d_61eb_d6ca > 0)
                    f_7f4a_09cd();
            }
        }
        if (d_61eb_d710 == d_61eb_d712 && d_61eb_d998 == d_61eb_d99c)
            d_61eb_d99c++;
    }
    if (d_61eb_d6c8 + d_61eb_d6ca > 0) {
        d_61eb_d5de = d_61eb_d710 > d_61eb_d712 ? d_61eb_d666 : d_61eb_d668;
        sprintf(d_432e_c125, "%s win the match! ", (char far *)d_61eb_b0ec[d_61eb_d5de]);
        f_7f4a_0a9c(d_61eb_d5de, d_432e_c125);
    }
    for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= 15; d_61eb_d5d8++)
        for (d_61eb_d5aa = 0; d_61eb_d5aa <= 1; d_61eb_d5aa++)
            if (d_3334_fefe[d_61eb_d5aa][d_61eb_d5d8] == 7)
                d_3334_fefe[d_61eb_d5aa][d_61eb_d5d8] = 0;
}

char f_7f4a_0efe(int a, int b, int na, int nb, int n)
{
    if (a != b) {
        if (a + (n - na) < b)
            return -1;
        if (b + (n - nb) < a)
            return -1;
    }
    return 0;
}

void f_7f4a_0f30(int team)
{
    for (;;) {
        d_61eb_d674 = 0;
        d_61eb_d750 = -1;
        for (d_61eb_d5aa = 0; d_61eb_d5aa <= 15; d_61eb_d5aa++) {
            if (d_3334_fefe[team == d_61eb_d668][d_61eb_d5aa] < 2) {
                if (f_1a83_2ad4(team))
                    f_ab30_301b(d_3334_f9f8[team][d_61eb_d5aa]);
                else
                    f_7a45_30ad(team, d_61eb_d5aa);
                if (d_61eb_d75c > d_61eb_d674) {
                    d_61eb_d674 = d_61eb_d75c;
                    d_61eb_d5b8 = d_3334_f9f8[team][d_61eb_d5aa];
                    d_61eb_d750 = d_61eb_d5aa;
                }
            }
        }
        if (d_61eb_d750 != -1)
            break;
        for (d_61eb_d5aa = 0; d_61eb_d5aa <= 15; d_61eb_d5aa++)
            if (d_3334_fefe[team == d_61eb_d668][d_61eb_d5aa] == 7)
                d_3334_fefe[team == d_61eb_d668][d_61eb_d5aa] = 0;
    }
}

void f_7f4a_1050(int team, int chance, int shootout)
{
    unsigned char c;

    f_7f4a_0f30(team);
    d_61eb_d784 = team == d_61eb_d666 ? d_61eb_d668 : d_61eb_d666;
    d_61eb_d9ec = 0;
    if (d_61eb_d6c8 + d_61eb_d6ca > 0) {
        if (shootout) {
            sprintf(d_432e_c125, "%s's penalty....", (char far *)d_61eb_b0ec[team]);
            f_7f4a_0a9c(team, d_432e_c125);
            f_215d_0df0(100);
        }
        if (team < 38)
            sprintf(d_432e_c125, "%s steps up...", f_1a83_4485(d_61eb_d5b8));
        else
            sprintf(d_432e_c125, "Their No.%d steps up...", d_61eb_d750 + 1);
        f_7f4a_0a9c(team, d_432e_c125);
        f_215d_0df0(f_215d_0d96(3) * 30 + 40);
    }
    if (team < 38) {
        if (f_1a83_5a2e(d_61eb_d5b8))
            c = (d_28d4_1958[7][d_61eb_d5b8] * 30 + d_28d4_1958[15][d_61eb_d5b8]) / 8;
        else
            c = 25;
    } else
        c = 75;
    if ((d_61eb_d5f4 = f_215d_0d96(c + 300)) > f_215d_0d96(chance)) {
        if (d_61eb_d5f4 % 12 > 0) {
            d_61eb_d786 = f_215d_0d96(d_61eb_d9e8 + 5);
            switch (d_61eb_d786) {
            case 0: strcpy(d_432e_d4bb, "blasts it home"); break;
            case 1: strcpy(d_432e_d4bb, "finds the corner"); break;
            case 2: strcpy(d_432e_d4bb, "scores easily"); break;
            case 3: strcpy(d_432e_d4bb, "buries it"); break;
            case 4:
                sprintf(d_432e_d4bb, "makes it %d-%d", d_61eb_d70c + (team == d_61eb_d666),
                        d_61eb_d70e + (team == d_61eb_d668));
                break;
            }
            if (team < 38)
                sprintf(d_432e_c125, "And %s %s !", f_1a83_462c(d_61eb_d5b8), d_432e_d4bb);
            else
                sprintf(d_432e_c125, "And he %s !", d_432e_d4bb);
            d_61eb_d9ec = -1;
        } else {
            d_61eb_d788 = f_215d_0d96(4);
            switch (d_61eb_d788) {
            case 0: strcpy(d_432e_d50b, "blasts it over"); break;
            case 1: strcpy(d_432e_d50b, "puts it wide"); break;
            case 2: strcpy(d_432e_d50b, "hits the post"); break;
            case 3: strcpy(d_432e_d50b, "hits the bar"); break;
            }
            if (team < 38)
                sprintf(d_432e_c125, "But %s %s !", f_1a83_462c(d_61eb_d5b8), d_432e_d50b);
            else
                sprintf(d_432e_c125, "But he %s !", d_432e_d50b);
        }
    } else if (d_61eb_d784 < 38) {
        sprintf(d_432e_c125, "But %s saves it !", f_1a83_462c(d_3334_f9f8[d_61eb_d784][0]));
        if (!f_1a83_5a4c(d_3334_f9f8[d_61eb_d784][0]))
            d_28d4_1958[16][d_3334_f9f8[d_61eb_d784][0]] = d_28d4_1958[16][d_3334_f9f8[d_61eb_d784][0]] + 10;
    } else
        strcpy(d_432e_c125, "But the 'keeper saves it !");
    if (d_61eb_d6c8 + d_61eb_d6ca > 0) {
        f_7f4a_0a9c(team, d_432e_c125);
        f_215d_0df0(100);
    }
    if (shootout)
        d_3334_fefe[team == d_61eb_d668][d_61eb_d750] = 7;
    else if (d_61eb_d6c8 + d_61eb_d6ca > 0)
        f_7f4a_0a9c(d_61eb_d666, d_432e_cba7);
}

void f_7f4a_142c(int team)
{
    float f;

    f = 1.0;
    if (f_1a83_247b(d_61eb_d5a2)) {
        d_61eb_d9b4 = f_1a83_6d8b(d_61eb_d666);
        d_61eb_d9b5 = f_1a83_6d8b(d_61eb_d668);
        d_61eb_d9fa = (team == d_61eb_d666 && d_61eb_d9b4 > d_61eb_d9b5)
                   || (team == d_61eb_d668 && d_61eb_d9b4 < d_61eb_d9b5);
        f = d_61eb_d9fa ? 1.04 : 1.02;
    } else if (f_1a83_2644(d_61eb_d5a2, d_61eb_d5c2 + 1)
            || f_1a83_26ed(d_61eb_d5a2, d_61eb_d5c2 + 1)
            || f_1a83_277e(d_61eb_d5a2, d_61eb_d5c2 + 1)) {
        f = 1.1;
    }
    d_432e_0f9e[team == d_61eb_d668] = f;
}

unsigned char f_7f4a_1525(int p, int team)
{
    d_61eb_d9b6 = team == d_61eb_d668 ? 1 : 0;
    if (d_3334_ff1e[d_61eb_d9b6][p] == 0) {
        d_61eb_d78a = d_3334_fefa[d_61eb_d9b6];
        if (team < 38) {
            d_61eb_d9b7 = d_3334_f278[team][0][p];
            d_61eb_d78c = d_3334_ca6e[team];
            d_61eb_d5b8 = d_3334_f9f8[team][p];
            if (!f_1a83_5a4c(d_61eb_d5b8)) {
                d_61eb_d790 = d_28d4_1958[16][d_61eb_d5b8];
                d_61eb_d78e = d_3334_caba[team];
                if (d_61eb_d78e == 650) {
                    d_61eb_d794 = d_61eb_d790 * 0.8;
                } else {
                    d_61eb_d792 = (1 - (d_53fc_095c[d_3334_d680[d_61eb_d78c]][d_3334_d680[d_61eb_d78e]] - 5) * 0.05)
                                * d_3334_de1e[d_61eb_d78e];
                    d_61eb_d794 = (1 - (d_53fc_095c[d_3334_0000[17][d_61eb_d5b8]][d_3334_d680[d_61eb_d78e]] - 5) * 0.05)
                                * ((d_61eb_d790 * 2 + d_61eb_d792) / 3.0);
                }
                d_61eb_d794 = (f_215d_1319(f_215d_1385(d_61eb_d794, d_61eb_d790 * 1.25), d_61eb_d790 * 0.75) * 0.4
                               + d_61eb_d78a) / 5.0;
                d_61eb_d796 = f_1a83_1eed(d_61eb_d9b7, d_61eb_d5b8, d_3334_d90a[d_3334_ca6e[team]] / 16);
                if (f_1a83_234b(d_61eb_d9b7) >= d_61eb_d796)
                    d_61eb_d794 = (long)d_61eb_d794 * d_61eb_d796 / f_1a83_234b(d_61eb_d9b7);
                else
                    d_61eb_d794 = (d_61eb_d796 / (f_1a83_234b(d_61eb_d9b7) * 2.0) + 0.5) * d_61eb_d794;
            } else {
                d_61eb_d794 = f_1a83_5a9f(d_61eb_d5b8, d_61eb_d9b7) + (int)f_215d_0d96(3) - (int)f_215d_0d96(3);
            }
        } else {
            d_61eb_d794 = (d_3334_bc2a[team == 39][p] * 4 + d_61eb_d78a) / 5;
        }
        d_61eb_d794 = d_61eb_d794 * d_432e_0f9e[d_61eb_d9b6];
        d_3334_ff1e[d_61eb_d9b6][p] = d_61eb_d794 * 0.6 + 9.0;
        d_432e_0f1e[d_61eb_d9b6][p] = f_215d_1319(f_215d_1385(d_61eb_d794 * 0.25 + 3.0, 8.0), 3.0);
    }
    return d_3334_ff1e[d_61eb_d9b6][p];
}

void f_7f4a_193a(team)
register int team;
{
    int i;              /* -Oe: i (CX) and x (DX) live in registers, j on the stack */
    int j;
    int x;
    int n;
    unsigned char c3;
    unsigned char c4;
    float f8;
    float fc;
    float f10;
    float f14;

    d_61eb_d6de = 0;
    d_61eb_d798 = 0;
    n = 0;
    d_61eb_d79a = 0;
    d_61eb_d5f4 = 0;
    d_61eb_d79c = 0;
    d_61eb_d79e = 0;
    d_61eb_d7a0 = 0;
    d_61eb_d7a2 = 0;
    d_61eb_d7a4 = 0;
    d_61eb_d7a6 = 0;
    d_61eb_d7a8 = 0;
    d_61eb_d74a = 0;
    d_61eb_d7aa = 0;
    d_61eb_da95 = 0;
    d_61eb_da99 = 0;
    d_61eb_d768 = 400;
    d_61eb_d99e = 750;
    f_7f4a_28bf(team);
    if (team == d_61eb_d666) {
        for (i = 0; i < 3; i++)
            for (j = 0; j < 60; j++)
                d_3334_bc4a[i][j] = 0;
    } else {
        for (i = 0; i < 3; i++)
            for (j = 0; j < 60; j++)
                d_3334_bcfe[i][j] = 0;
    }
    for (d_61eb_d5aa = 0; d_61eb_d5aa <= 15; d_61eb_d5aa++) {
        if (d_3334_fefe[team == d_61eb_d668][d_61eb_d5aa] < 2) {
            unsigned char k;

            d_61eb_d71e = f_7f4a_1525(d_61eb_d5aa, team);
            d_61eb_d68c = d_3334_f278[team][0][d_61eb_d5aa];
            k = d_3334_f278[team][2][d_61eb_d5aa];
            f8 = (k == 1) * -0.25 + (k == 2) * 0.25;
            fc = 0;
            f10 = 0;
            if (team < 38) {
                d_61eb_d8e6 = d_3334_f9f8[team][d_61eb_d5aa];
                if (!f_1a83_5a4c(d_61eb_d8e6)) {
                    float t;

                    d_61eb_da95 = (x = d_28d4_1958[6][d_61eb_d8e6]) * x / 2000.0;
                    d_61eb_da99 = (x = d_28d4_1958[7][d_61eb_d8e6]) * x / 2000.0;
                    if (d_61eb_d68c == 7) {
                        fc = (x = d_28d4_1958[1][d_61eb_d8e6]) * x / 1000.0;
                        f10 = (x = d_28d4_1958[2][d_61eb_d8e6]) * x / 1000.0;
                    }
                    f14 = (x = d_28d4_1958[12][d_61eb_d8e6]) * x / 2000.0;
                    c4 = f_215d_1343((int)(d_28d4_1958[21][d_61eb_d8e6] / 100.0 * d_28d4_1958[22][d_61eb_d8e6]), 1);
                    d_61eb_d768 -= d_28d4_1958[11][d_61eb_d8e6] + 5;
                    x = d_28d4_1958[5][d_61eb_d8e6];
                    t = d_28d4_1958[16][d_61eb_d8e6] / 100.0 * (x * x / 100.0);
                    d_61eb_d9a0 = t * t * t;
                } else {
                    d_61eb_da95 = 0.095;
                    d_61eb_da99 = 0.095;
                    if (d_61eb_d68c == 7) {
                        fc = 0.095;
                        f10 = 0.095;
                    }
                    f14 = 0.095;
                    c4 = 5;
                    d_61eb_d768 -= 10;
                    d_61eb_d9a0 = f_215d_0d96(50);
                }
            } else {
                if (team == d_61eb_d666)
                    d_61eb_da30 = d_61eb_d6b4 >= 438 ? -1 : 0;
                else
                    d_61eb_da30 = d_61eb_d6b6 >= 438 ? -1 : 0;
                d_61eb_da95 = d_61eb_da30 ? 0.09 : 0.1;
                d_61eb_da99 = d_61eb_da30 ? 0.09 : 0.1;
                if (d_61eb_d68c == 7) {
                    fc = d_61eb_da30 ? 0.09 : 0.1;
                    f10 = d_61eb_da30 ? 0.09 : 0.1;
                }
                f14 = d_61eb_da30 ? 0.09 : 0.1;
                c4 = d_61eb_da30 ? 5 : 10;
                d_61eb_d768 -= 10;
                d_61eb_d9a0 = f_215d_0d96(d_61eb_da30 ? 100 : 400);
            }
            if (d_61eb_d5aa > 10)
                c3 = d_3334_bb80[team == d_61eb_d668][d_61eb_d5aa - 11];
            else
                c3 = 0;
            if (d_61eb_d68c == 1 && d_61eb_d74a == 0) {
                d_61eb_d6de = (f14 + 3.95) * d_61eb_d71e + d_61eb_d6de;
                d_61eb_d74a = 1;
                d_61eb_d9a0 = 0;
            }
            if (d_61eb_d68c == 11) {
                d_61eb_d6de = (f14 + 1.45) * d_61eb_d71e + d_61eb_d6de;
                d_61eb_d798 = (f14 + 2.95) * d_61eb_d71e + d_61eb_d798;
                n = (f14 + 0.45) * d_61eb_d71e + n;
                if (team == d_61eb_d666)
                    f_7f4a_2ac3(c4, c3, 0);
                else
                    f_7f4a_2b32(c4, c3, 0);
                d_61eb_d7aa = 1;
                d_61eb_d9a0 /= 4;
            }
            if (d_61eb_d68c == 12) {
                d_61eb_d6de = (f14 + 0.95) * d_61eb_d71e + d_61eb_d6de;
                d_61eb_d798 = (f14 + 1.95) * d_61eb_d71e + d_61eb_d798;
                n = (f14 + 1.9) * d_61eb_d71e + n;
                if (team == d_61eb_d666)
                    f_7f4a_2ac3(c4, c3, 0);
                else
                    f_7f4a_2b32(c4, c3, 0);
                d_61eb_d7aa = 1;
                d_61eb_d9a0 /= 4;
            }
            if (d_61eb_d68c == 13) {
                d_61eb_d798 = (f14 + 0.35) * d_61eb_d71e + d_61eb_d798;
                n = (1.75 - f8 + fc + f10 + f14) * d_61eb_d71e + n;
                d_61eb_d79a = (f8 + 1.4 + d_61eb_da95 + f14) * d_61eb_d71e + d_61eb_d79a;
                d_61eb_d5f4 = (d_61eb_da99 + 2.0) * d_61eb_d71e + d_61eb_d5f4;
                if (team == d_61eb_d666)
                    f_7f4a_2ac3(c4, c3, 1);
                else
                    f_7f4a_2b32(c4, c3, 1);
            }
            if (d_61eb_d68c > 1 && d_61eb_d68c < 5) {
                d_61eb_d6de = (f14 + 0.95) * d_61eb_d71e + d_61eb_d6de;
                d_61eb_d798 = (1.95 - f8 + f14) * d_61eb_d71e + d_61eb_d798;
                n = (f8 + 0.95 + f14) * d_61eb_d71e + n;
                d_61eb_d5f4 = (d_61eb_da99 + 1.0) * d_61eb_d71e + d_61eb_d5f4;
                if (team == d_61eb_d666)
                    f_7f4a_2ac3(c4, c3, 0);
                else
                    f_7f4a_2b32(c4, c3, 0);
                d_61eb_d9a0 = d_61eb_d9a0 / (4.0 - f8 * 2.0);
            }
            if (d_61eb_d68c > 4 && d_61eb_d68c < 8) {
                d_61eb_d798 = (f14 + 0.95) * d_61eb_d71e + d_61eb_d798;
                n = (1.75 - f8 + fc + f10 + f14) * d_61eb_d71e + n;
                d_61eb_d79a = (f8 + 0.8 + d_61eb_da95 + f14) * d_61eb_d71e + d_61eb_d79a;
                d_61eb_d5f4 = (d_61eb_da99 + 2.0) * d_61eb_d71e + d_61eb_d5f4;
                if (team == d_61eb_d666)
                    f_7f4a_2ac3(c4, c3, 1);
                else
                    f_7f4a_2b32(c4, c3, 1);
                d_61eb_d9a0 = d_61eb_d9a0 / (2.0 - f8 * 2.0);
            }
            if (d_61eb_d68c > 7 && d_61eb_d68c < 11) {
                n = (0.95 - f8 + f14) * d_61eb_d71e + n;
                d_61eb_d79a = (f8 + 1.8 + d_61eb_da95 + f14) * d_61eb_d71e + d_61eb_d79a;
                d_61eb_d5f4 = (d_61eb_da99 + 4.0) * d_61eb_d71e + d_61eb_d5f4;
                if (team == d_61eb_d666)
                    f_7f4a_2ac3(c4, c3, 2);
                else
                    f_7f4a_2b32(c4, c3, 2);
            }
            d_61eb_d99e = f_215d_1343(3, d_61eb_d99e - d_61eb_d9a0);
            switch (d_61eb_d68c) {
            case 2:
                d_61eb_d79c++;
                break;
            case 3:
                d_61eb_d79e++;
                break;
            case 4:
                d_61eb_d7a0++;
                break;
            case 5:
            case 8:
                d_61eb_d7a2++;
                break;
            case 6:
            case 9:
                d_61eb_d7a4++;
                break;
            case 7:
                d_61eb_d7a6++;
                break;
            case 10:
                d_61eb_d7a8++;
            }
        }
    }
    d_61eb_d798 += (d_61eb_d79c != 1) * 15 + (d_61eb_d79e != 1) * 15 + (d_61eb_d7a0 < 1) * 15;
    n += (d_61eb_d79c != 1) * 15 + (d_61eb_d79e != 1) * 15 + (d_61eb_d7a0 < 1) * 15
        + (d_61eb_d7a2 == 0 || d_61eb_d7a2 > 2) * 15 + (d_61eb_d7a4 == 0 || d_61eb_d7a4 > 2) * 15
        + (d_61eb_d7a6 == 0 || d_61eb_d7a6 > 3) * 15 + (d_61eb_d7a8 == 0 || d_61eb_d7a8 > 3) * 15;
    d_61eb_d79a += (d_61eb_d7a2 == 0 || d_61eb_d7a2 > 2) * 15 + (d_61eb_d7a4 == 0 || d_61eb_d7a4 > 2) * 15
        + (d_61eb_d7a6 == 0 || d_61eb_d7a6 > 3) * 15 + (d_61eb_d7a8 == 0 || d_61eb_d7a8 > 3) * 15;
    d_61eb_d5f4 += (d_61eb_d7a2 == 0 || d_61eb_d7a2 > 2) * 30 + (d_61eb_d7a4 == 0 || d_61eb_d7a4 > 2) * 30
        + (d_61eb_d7a6 == 0 || d_61eb_d7a6 > 3) * 30 + (d_61eb_d7a8 == 0 || d_61eb_d7a8 > 3) * 30;
    if (d_61eb_d7a0 > 2 && d_61eb_d7aa == 1 || d_61eb_d7a0 > 3) {
        d_61eb_d798 -= (d_61eb_d7a0 + d_61eb_d7aa - 3) * 15;
        n -= (d_61eb_d7a0 + d_61eb_d7aa - 3) * 15;
    }
    d_61eb_d6de = d_61eb_d6de * 1.25;
    if (team < 38) {
        if (f_1a83_2ad4(team) == 0) {
            float t;

            t = d_3334_db94[d_3334_ca6e[team]] / 10.0;
            d_61eb_da9d = t * t / 20000.0;
        } else
            d_61eb_da9d = 0;
    } else
        d_61eb_da9d = 0.01;
    if (team == d_61eb_d666) {
        d_61eb_d752 = d_61eb_d768;
        if (f_1a83_2962(d_61eb_d5a2, d_61eb_d5c2 + 1) == 0)
            d_61eb_daa1 = 1.02
                - (f_1a83_2644(d_61eb_d5a2, d_61eb_d5c2 + 1) || f_1a83_26ed(d_61eb_d5a2, d_61eb_d5c2 + 1)
                   || f_1a83_277e(d_61eb_d5a2, d_61eb_d5c2 + 1)) * 0.02
                + f_1a83_247b(d_61eb_d5a2) * 0.01;
        else
            d_61eb_daa1 = 1.0;
        d_61eb_daa1 = (d_3334_bdb2[0][d_61eb_d666] - 8.5) / 500.0 + d_61eb_da9d + d_61eb_daa1;
        d_61eb_da47 = d_61eb_d74a == 1 ? -1 : 0;
        d_61eb_d74e = d_61eb_d6de * d_61eb_daa1;
        d_61eb_d744 = d_61eb_d798 * d_61eb_daa1;
        d_61eb_d630 = n * d_61eb_daa1;
        d_61eb_d738 = d_61eb_d79a * d_61eb_daa1;
        d_61eb_d746 = d_61eb_d5f4 * d_61eb_daa1;
        d_61eb_d994 = d_61eb_d99e;
    } else {
        d_61eb_daa1 = (d_3334_bdb2[0][d_61eb_d668] - 8.5) / 500.0 + 1.0 + d_61eb_da9d;
        d_61eb_d754 = d_61eb_d768;
        d_61eb_da48 = d_61eb_d74a == 1 ? -1 : 0;
        d_61eb_d74c = d_61eb_d6de * d_61eb_daa1;
        d_61eb_d73c = d_61eb_d798 * d_61eb_daa1;
        d_61eb_d72e = n * d_61eb_daa1;
        d_61eb_d740 = d_61eb_d79a * d_61eb_daa1;
        d_61eb_d748 = d_61eb_d5f4 * d_61eb_daa1;
        d_61eb_d996 = d_61eb_d99e;
    }
}

/* every float constant of this part is shared with an earlier part's pool: 4.0 at 2b64,
 * 0.25 at 2af0, 0.75 at 2ac8, 4.5 at 2b90, 3.0 at 2ac4 */
void f_7f4a_28bf(int team)
{
    char ok;

    d_61eb_d7ac = f_1a83_2ad4(team) ? 14 : 10;
    d_61eb_d5e6 = 0;
    for (d_61eb_d5aa = 0; d_61eb_d5aa <= d_61eb_d7ac; d_61eb_d5aa++) {
        if (d_3334_fefe[team == d_61eb_d668][d_61eb_d5aa] < 2) {
            if (team > 37) {
                d_61eb_d5fc = d_3334_f278[team][0][d_61eb_d5aa];
                d_61eb_d78a = f_1a83_669a(d_61eb_d5aa, team, d_61eb_d5fc);
                ok = -1;
            } else if (f_1a83_2ad4(team) == 0) {
                if (!f_1a83_5a4c(d_3334_f9f8[team][d_61eb_d5aa]))
                    d_61eb_d78a = f_1a83_65dc(d_3334_f9f8[team][d_61eb_d5aa],
                                              d_3334_f278[team][0][d_61eb_d5aa]);
                else
                    d_61eb_d78a = 1;
                ok = -1;
            } else {
                if (!f_1a83_5a4c(d_3334_f9f8[team][d_61eb_d5aa]))
                    d_61eb_d78a = f_1a83_65dc(d_3334_f9f8[team][d_61eb_d5aa],
                                              d_3334_f278[team][0][d_61eb_d5aa]);
                else
                    d_61eb_d78a = 1;
                ok = d_432e_066a[d_3334_ca6e[team] - 646] - 1 == d_61eb_d5aa;
            }
            if (ok && d_61eb_d78a > d_61eb_d5e6) {
                d_61eb_d5e6 = d_61eb_d78a;
                d_3334_fef8[team == d_61eb_d668] = d_61eb_d5aa + 1;
                d_61eb_d67e = d_61eb_d5aa + 1;
            }
        }
    }
    d_3334_fef8[team == d_61eb_d668 ? 3 : 2] = d_61eb_d5e6;
}

void f_7f4a_2ac3(unsigned char a, unsigned char b, unsigned char c)
{
    int base;

    base = a * 3 + b + 57;
    for (d_61eb_d5d8 = base; d_61eb_d5d8 <= 119; d_61eb_d5d8++)
        d_3334_bc4a[c][d_61eb_d5d8 - 60] += (d_61eb_d5d8 - base) / 4;
}

void f_7f4a_2b32(unsigned char a, unsigned char b, unsigned char c)
{
    int base;

    base = a * 3 + b + 57;
    for (d_61eb_d5d8 = base; d_61eb_d5d8 <= 119; d_61eb_d5d8++)
        d_3334_bcfe[c][d_61eb_d5d8 - 60] += (d_61eb_d5d8 - base) / 4;
}

void f_7f4a_2ba1(int team)
{
    float f;
    long v;

    switch (f_1a83_6d8b(d_61eb_d666)) {     /* 1: team d666 is in Serie B (> 17) */
    case 1:
        f = 6.5;
        break;
    default:
        f = 10.0;
    }
    v = f_215d_135c((long)(d_61eb_db21 - d_3334_bdda[d_61eb_d666] * 1000
                                         / (f_1a83_66fa(d_61eb_d666) * 4.0)), 0L) * f;
    if (f_1a83_2962(d_61eb_d5a2, d_61eb_d5c2 + 1))
        v = v / 2;
    else if (f_1a83_2644(d_61eb_d5a2, d_61eb_d5c2 + 1) || f_1a83_26ed(d_61eb_d5a2, d_61eb_d5c2 + 1)
             || f_1a83_277e(d_61eb_d5a2, d_61eb_d5c2 + 1))
        v = team == d_61eb_d668 ? 0 : v;
    else
        v = v * (team == d_61eb_d668 ? 0.25 : 0.75);
    d_61eb_dbc0 = f_215d_1629(d_61eb_dc52, 1);
    (*d_61eb_dbc0)[team] += v;
}

void f_7f4a_2d1a(void)
{
    int a, b, c, d, e, g;
    int s, t;
    int u;
    float r;

    d_53fc_138c[d_61eb_d5c2][0][d_61eb_d5a2] = d_61eb_d6b4 * 32 + d_61eb_d70c - d_61eb_d710;
    d_53fc_138c[d_61eb_d5c2][1][d_61eb_d5a2] = d_61eb_d6b6 * 32 + d_61eb_d70e - d_61eb_d712;
    if (d_61eb_d9e8 != 0)
        d_432e_1f1e[d_61eb_d5c2] = d_61eb_d712 > d_61eb_d710 ? 2 : 1;
    a = (long)d_61eb_d6fa * 100 / (d_61eb_d6fa + d_61eb_d704);
    b = (long)d_61eb_d6fe * 100 / (d_61eb_d6fe + d_61eb_d700);
    c = (long)d_61eb_d702 * 100 / (d_61eb_d702 + d_61eb_d6fc);
    d = (long)d_61eb_d6fc * 100 / (d_61eb_d6fc + d_61eb_d702);
    e = (long)d_61eb_d700 * 100 / (d_61eb_d6fe + d_61eb_d700);
    g = (long)d_61eb_d704 * 100 / (d_61eb_d704 + d_61eb_d6fa);
    s = 0;
    d_61eb_d686 = 0;
    for (d_61eb_d5aa = 0; d_61eb_d5aa <= 10; d_61eb_d5aa++) {
        s = s + d_432e_0f1e[0][d_61eb_d5aa];
        d_61eb_d686 = d_61eb_d686 + d_432e_0f1e[1][d_61eb_d5aa];
    }
    t = d_61eb_d6f6 * 8 + a + b + c;
    u = d_61eb_d6f8 * 8 + d + e + g;
    t += (d_61eb_d70c - d_61eb_d710) * 20
         + ((d_61eb_d70c - d_61eb_d710) - (d_61eb_d70e - d_61eb_d712)) * 8;
    u += (d_61eb_d70e - d_61eb_d712) * 20
         + ((d_61eb_d70e - d_61eb_d712) - (d_61eb_d70c - d_61eb_d710)) * 8;
    r = (float)s / d_61eb_d686 / ((float)t / u);
    if (r > 1)
        d_61eb_daa5 = r * 0.75 - 0.75;
    else
        d_61eb_daa5 = r * 4.5 - 3.0;
    d_28d2_0019 = 0;
    d_28d2_001d = -1;
    f_7f4a_3002(d_61eb_d666, a, b, c, d_61eb_d6f6);
    f_7f4a_3002(d_61eb_d668, d, e, g, d_61eb_d6f8);
}

void f_7f4a_3002(team, a, b, c, d)
int team, a, b, c;
register int d;
{
    char k;
    float f;
    float g;

    for (d_61eb_d5aa = 0; d_61eb_d5aa <= 15; d_61eb_d5aa++) {
        if (team < 38)
            d_61eb_d5b8 = d_3334_f9f8[team][d_61eb_d5aa];
        else
            d_61eb_d5b8 = d_3334_f278[team][0][d_61eb_d5aa] + 1500;
        k = d_3334_fefe[team == d_61eb_d668][d_61eb_d5aa];
        d_61eb_d6a0 = f_7f4a_3980(d_61eb_d5aa, team);
        if (k != 4 && d_61eb_d5b8 >= 0 && d_61eb_d58e - 1 >= d_61eb_d5b8) {
            if (f_1a83_247b(d_61eb_d5a2)) {
                d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 1);
                d_61eb_dbcc[0][d_61eb_d5b8] = d_28d4_1958[18][d_61eb_d5b8];
            }
        }
        if (k != 4 && d_61eb_d6a0 >= 5) {
            if (d_3334_bbea[team == d_61eb_d668][d_61eb_d5aa] == 0 || k == 0 || k == 1) {
                /* the fwait after this store is the one BCC writes before a label */
                if (1)
                    f = (team == d_61eb_d666 ? d_432e_0f1e[0][d_61eb_d5aa] - d_61eb_daa5
                         : d_432e_0f1e[1][d_61eb_d5aa] + d_61eb_daa5) + 0.5;
                d_61eb_d7ae = f;
                d_61eb_d7ae = f_215d_13af(f_215d_1343(1, d_61eb_d7ae), 10);
                d_3334_bbea[team == d_61eb_d668][d_61eb_d5aa] = d_61eb_d7ae;
            } else {
                f = d_3334_bbea[team == d_61eb_d668][d_61eb_d5aa];
                d_61eb_d7ae = f;
            }
            d_61eb_d7b0 = team == d_61eb_d666 ? d_432e_8810[0][d_61eb_d5aa] / 16
                          : d_432e_8810[1][d_61eb_d5aa] / 16;
            if (d_61eb_d7b0 > 0) {
                float t[3] = {0.5, 1.0, 2.0};

                f += t[f_215d_13af(d_61eb_d7b0, 3) - 1];
                d_61eb_d7ae = f;
                d_61eb_d7ae = f_215d_13af(f_215d_1343(1, d_61eb_d7ae), 10);
            }
            if ((char)f == (char)d_28d2_0019)
                g = f_215d_0d96(5) * 0.1;
            else
                g = 0;
            if (d_61eb_d6c6 == -1 && f + g > d_28d2_0019 && d_61eb_d6a0 >= 20
                && d_3334_fefe[team == d_61eb_d668][d_61eb_d5aa] != 2) {
                d_432e_8870.motm = team == d_61eb_d666 ? d_61eb_d5aa + 1 : d_61eb_d5aa + 17;
                d_28d2_001d = d_61eb_d5b8;
                d_28d2_0019 = f;
            }
            if (d_61eb_d6c6 == -1 && team < 38 && d_61eb_d5a2 > 12 && !f_1a83_5a4c(d_61eb_d5b8)) {
                d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 1);
                d_61eb_dbb8[0][d_61eb_d5b8] += d_61eb_d7ae;
                d_61eb_dbb8[2][d_61eb_d5b8] += d_61eb_d7ae;
                d_3334_0000[22][d_61eb_d5b8] += d_61eb_d7ae;
                if (d_3334_0000[3][d_61eb_d5b8] > d_61eb_d7ae || d_3334_0000[3][d_61eb_d5b8] == 0)
                    d_3334_0000[3][d_61eb_d5b8] = d_61eb_d7ae;
                if (d_3334_0000[4][d_61eb_d5b8] < d_61eb_d7ae || d_3334_0000[4][d_61eb_d5b8] == 0)
                    d_3334_0000[4][d_61eb_d5b8] = d_61eb_d7ae;
                d_3334_0000[0][d_61eb_d5b8]++;
                d_3334_0000[12][d_61eb_d5b8]++;
                d_3334_0000[21][d_61eb_d5b8]++;
                if (d_61eb_d5a2 > 12 && *(d_28d4_1958[21] + d_61eb_d5b8) >= 80 && !d_432e_45de[d_61eb_d5b8].f0)
                    d_28d4_1958[21][d_61eb_d5b8] = f_215d_1343(0, *(d_28d4_1958[21] + d_61eb_d5b8)
                        - f_215d_1343(abs(28 - d_28d4_1958[17][d_61eb_d5b8]) / 2, 2) * (d_61eb_d6a0 / 90));
                if (5 - f_1a83_6d8b(team) > d_61eb_d7ae)
                    d_432e_45de[d_61eb_d5b8].f15 = 1;
                if (team == d_61eb_d666) {
                    d_61eb_d7b0 = d_432e_8810[0][d_61eb_d5aa] / 16;
                    d_61eb_d680 = d_61eb_d6b6;
                } else {
                    d_61eb_d7b0 = d_432e_8810[1][d_61eb_d5aa] / 16;
                    d_61eb_d680 = d_61eb_d6b4;
                }
                f_93a1_45de(team, d_61eb_d680, d_61eb_d5b8, d_61eb_d7b0);
            }
        } else {
            d_61eb_d6a0 = 0;
            d_61eb_d7ae = 0;
        }
        if (d_61eb_d6c6 == -1)
            f_b26d_3f53(d_61eb_d5b8, 5);
        if (team == d_61eb_d666) {
            if (k == 4)
                d_432e_87d0[0][d_61eb_d5aa] = -2;
            else if (d_61eb_d5aa < 15 || f_1a83_5d3d(team, d_61eb_d5a2, d_61eb_d5c2 + 1))
                d_432e_87d0[0][d_61eb_d5aa] = d_61eb_d5b8;
            else
                d_432e_87d0[0][d_61eb_d5aa] = -1;
            d_432e_8830[0][d_61eb_d5aa] = d_61eb_d7ae;
            if (d_3334_fefe[team == d_61eb_d668][d_61eb_d5aa] == 2)
                d_432e_8850[0][d_61eb_d5aa] = 1;
            else if (d_3334_fefe[team == d_61eb_d668][d_61eb_d5aa] == 3 ||
                     d_3334_fefe[team == d_61eb_d668][d_61eb_d5aa] == 6)
                d_432e_8850[0][d_61eb_d5aa] = 2;
            else if (d_3334_fefe[team == d_61eb_d668][d_61eb_d5aa] == 1)
                d_432e_8850[0][d_61eb_d5aa] = 3;
        }
        if (team == d_61eb_d668) {
            if (k == 4)
                d_432e_87d0[1][d_61eb_d5aa] = -2;
            else if (d_61eb_d5aa < 15 || f_1a83_5d3d(team, d_61eb_d5a2, d_61eb_d5c2 + 1))
                d_432e_87d0[1][d_61eb_d5aa] = d_61eb_d5b8;
            else
                d_432e_87d0[1][d_61eb_d5aa] = -1;
            d_432e_8830[1][d_61eb_d5aa] = d_61eb_d7ae;
            if (d_3334_fefe[team == d_61eb_d668][d_61eb_d5aa] == 2)
                d_432e_8850[1][d_61eb_d5aa] = 1;
            else if (d_3334_fefe[team == d_61eb_d668][d_61eb_d5aa] == 3 ||
                     d_3334_fefe[team == d_61eb_d668][d_61eb_d5aa] == 6)
                d_432e_8850[1][d_61eb_d5aa] = 2;
            else if (d_3334_fefe[team == d_61eb_d668][d_61eb_d5aa] == 1)
                d_432e_8850[1][d_61eb_d5aa] = 3;
        }
    }
    if (team == d_61eb_d668 && d_61eb_d6c6 == -1 && d_28d2_001d >= 0
        && d_28d2_001d <= d_61eb_d58e - 1 && d_61eb_d5a2 > 12) {
        d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 1);
        d_61eb_dbcc[3][d_28d2_001d]++;
    }
    d_432e_87cc = d_61eb_db21;
    if (team == d_61eb_d666) {
        d_432e_8870.def = a;
        d_432e_8870.mid = b;
        d_432e_8870.att = c;
        d_432e_8870.shots_h = d;
        d_432e_8870.capt_h = d_3334_fef8[0];
    } else {
        d_432e_8870.shots_a = d;
        d_432e_8870.capt_a = d_3334_fef8[1];
    }
}

int f_7f4a_3980(int i, int team)
{
    unsigned char on;
    unsigned char off;
    int r;

    r = 0;
    on = d_3334_ff5e[team == d_61eb_d666 ? 0 : 1][i];
    off = d_3334_ff7e[team == d_61eb_d666 ? 0 : 1][i];
    if (i <= 10)
        on = 0;
    if (on < 255) {
        if (off == 255)
            r = d_61eb_d69e - on;
        else
            r = off - on;
    }
    return r;
}

/* the match statistics screen (c: full time, else half time / so far) */
void f_7f4a_3a06(int a, int b, char c)
{
    int h1;
    int h2;
    int x;
    int y;
    char done;
    char ok;
    char name2[80];
    char name1[80];
    char s[320];

    do {
        done = -1;
        f_1a83_5ccd();
        if (c) {
            f_1a83_48f9("Match Statistics");
            if (d_432e_87c8[1].home1 == 15 && d_432e_87c8[1].away1 == 15) {
                d_61eb_d7b2 = d_432e_87c8[0].home2;
                d_61eb_d7b4 = d_432e_87c8[0].away2;
            } else {
                d_61eb_d7b2 = d_432e_87c8[1].home1;
                d_61eb_d7b4 = d_432e_87c8[1].away1;
            }
        } else {
            if (d_61eb_d69e == 45)
                strcpy(s, "Half-time Stats");
            else
                sprintf(s, "Stats %d mins", d_61eb_d69e);
            f_1a83_48f9(s);
            d_61eb_d7b2 = d_61eb_d70c;
            d_61eb_d7b4 = d_61eb_d70e;
        }
        d_61eb_db21 = d_432e_87cc;
        h1 = d_432e_8870.def;
        h2 = d_432e_8870.mid;
        d_61eb_d73e = d_432e_8870.att;
        d_61eb_d6f6 = d_432e_8870.shots_h;
        d_61eb_d6f8 = d_432e_8870.shots_a;

        f_7a45_220c(a, a, b);
        strcpy(name1, f_215d_0e90(f_1a83_3300(a)));
        sprintf(s, " %s ", name1);
        f_1a83_380b(1.25, 4.0, d_61eb_d66a, d_61eb_d5e0, 0, s);
        sprintf(s, " %d", d_61eb_d7b2);
        f_1a83_3697(17.5, 4.0, 1, s);

        f_7a45_220c(b, a, b);
        strcpy(name2, f_215d_0e90(f_1a83_3300(b)));
        sprintf(s, " %s ", name2);
        f_1a83_380b(20.5, 4.0, d_61eb_d66a, d_61eb_d5e0, 0, s);
        sprintf(s, " %d", d_61eb_d7b4);
        f_1a83_3697(36.75, 4.0, 1, s);

        if (c) {
            sprintf(d_432e_c125, "HT %d-%d", d_432e_87c8[0].home1, d_432e_87c8[0].away1);
            sprintf(s, " %s ", d_432e_c125);
            f_1a83_3450(1.125, 5.0, 1, 12, 0, s);
            if (d_432e_87c8[1].home1 != 15 || d_432e_87c8[1].away1 != 15) {
                x = d_432e_87c8[0].home2;
                y = d_432e_87c8[0].away2;
                sprintf(d_432e_c125, "FT %d-%d", x, y);
                sprintf(s, " %s ", d_432e_c125);
                f_1a83_3450(7.375, 5.0, 1, 12, 0, s);
                if (d_432e_87c8[1].home2 != 15 || d_432e_87c8[1].away2 != 15) {
                    sprintf(d_432e_c125, "%d-%d PENS", d_432e_87c8[1].home2 - d_61eb_d7b2,
                            d_432e_87c8[1].away2 - d_61eb_d7b4);
                    sprintf(s, " %s ", d_432e_c125);
                    f_1a83_3450(13.625, 5.0, 1, 12, 0, s);
                }
            }
        }

        f_7f4a_3f77(-1, h1, h2, d_61eb_d73e, d_61eb_d6f6, 1.125);
        f_7f4a_3f77(0, 100 - d_61eb_d73e, 100 - h2, 100 - h1, d_61eb_d6f8, 20.375);
        strcpy(d_432e_bc07, "Attendance");
        sprintf(d_432e_bc57, "%7ld", d_61eb_db21);
        sprintf(s, " %s     -%s", d_432e_bc07, d_432e_bc57);
        f_1a83_3450(1.125, 24.0, 1, 12, 150, s);
        f_1a83_5ce1();

        if (d_61eb_d69e == 45) {
            do {
                ok = -1;
                f_1a83_5540(2);
                if (strcmp(f_215d_0e90(d_432e_d55b), "H") == 0 && d_61eb_d6ee == 0) {
                    f_7a45_420a(d_61eb_d666, -1);
                    done = 0;
                } else if (strcmp(f_215d_0e90(d_432e_d55b), "A") == 0 && d_61eb_d6f2 == 0) {
                    f_7a45_420a(d_61eb_d668, -1);
                    done = 0;
                } else if (d_432e_d55b[0] != 0)
                    ok = 0;
            } while (!ok);
        } else
            f_1a83_5540(0);
    } while (!done);
}

/* one team's column of the statistics screen: its players, their marks, ratings and
 * goals, then its strengths and attempts (a: home team, f: the column's x) */
void f_7f4a_3f77(char a, int b, int c, int d, int e, float f)
{
    int x0;
    int y;
    int n;
    char flag;
    char booked;
    char sub;
    int fg;
    char buf[320];

    x0 = f * 8;
    d_61eb_d5c6 = 0;
    y = 0;
    d_61eb_d5aa = 0;
    d_61eb_d5ca = 14;
    d_61eb_d5da = 8;
    do {
        if (a) {
            d_61eb_d5b8 = d_432e_87d0[0][d_61eb_d5aa];
            d_61eb_d7ae = d_432e_8830[0][d_61eb_d5aa];
            flag = d_432e_8850[0][d_61eb_d5aa] == 1;
            d_61eb_d9f8 = d_432e_8850[0][d_61eb_d5aa] == 2;
            booked = d_432e_8850[0][d_61eb_d5aa] == 3;
            d_61eb_d732 = d_432e_8810[0][d_61eb_d5aa] / 16;
            d_61eb_d734 = d_432e_8810[0][d_61eb_d5aa] % 16;
            d_61eb_d9e1 = d_61eb_d5aa + 1 == d_432e_8870.capt_h;
            sub = d_61eb_d5aa + 1 == d_432e_8870.motm;
        } else {
            d_61eb_d5b8 = d_432e_87d0[1][d_61eb_d5aa];
            d_61eb_d7ae = d_432e_8830[1][d_61eb_d5aa];
            flag = d_432e_8850[1][d_61eb_d5aa] == 1;
            d_61eb_d9f8 = d_432e_8850[1][d_61eb_d5aa] == 2;
            booked = d_432e_8850[1][d_61eb_d5aa] == 3;
            d_61eb_d732 = d_432e_8810[1][d_61eb_d5aa] / 16;
            d_61eb_d734 = d_432e_8810[1][d_61eb_d5aa] % 16;
            d_61eb_d9e1 = d_61eb_d5aa + 1 == d_432e_8870.capt_a;
            sub = d_61eb_d5aa + 17 == d_432e_8870.motm;
        }
        if (d_61eb_d5b8 != -2) {
            if (f_1a83_5a4c(d_61eb_d5b8))
                n = 4;
            else
                n = d_61eb_d5aa > 10 ? 6 : 1;
            strcpy(d_432e_ec73, "");
            if (flag)
                strcpy(d_432e_ec73, "so");
            else if (d_61eb_d9f8)
                strcpy(d_432e_ec73, "ij");
            else if (booked)
                strcpy(d_432e_ec73, "bk");
            if (d_61eb_d9e1)
                strcat(d_432e_ec73, booked ? " c" : "c");
            strcpy(d_432e_d55d, "");
            if (d_61eb_d732 > 0)
                sprintf(d_432e_d55d, "%d", d_61eb_d732);
            else if (d_61eb_d734 > 0)
                sprintf(d_432e_d55d, "%d", d_61eb_d734);
            if (d_61eb_d5b8 == -1)
                strcpy(d_432e_c125, "");
            else if (f_1a83_5a2e(d_61eb_d5b8) || f_1a83_5a4c(d_61eb_d5b8)) {
                strcpy(d_432e_bc07, f_1a83_45b4(d_61eb_d5b8));
                if (strlen(d_432e_ec73) == 0)
                    d_61eb_d6ba = 14;
                else
                    d_61eb_d6ba = 14 - (strlen(d_432e_ec73) + 1);
                sprintf(d_432e_c125, "%.*s", d_61eb_d6ba, d_432e_bc07);
            } else if (d_61eb_d5b8 >= 1501) {
                strcpy(d_432e_bc07, d_53fc_058f[d_61eb_d5b8 - 1500]);
                if (d_61eb_d5aa > 10)
                    sprintf(d_432e_bc07, "Substitute %c", d_61eb_d5aa + 54);
                strcpy(d_432e_c125, d_432e_bc07);
            }
            sprintf(buf, " %s", f_1a83_2d52(d_61eb_d5aa + 1, 1));
            if (d_61eb_d5ca == 14)
                fg = 9;
            else
                fg = 2;
            f_1a83_3450(f, d_61eb_d5c6 + 6, 1, fg, 24, buf);
            sprintf(buf, " %s", d_432e_c125);
            if (sub && d_61eb_d6c6 == -1)
                f_1a83_3450(f + 3.25, d_61eb_d5c6 + 6, 0, 1, 92, buf);
            else
                f_1a83_3450(f + 3.25, d_61eb_d5c6 + 6, n, d_61eb_d5ca, 92, buf);
            f_1a83_3347(x0 + f_215d_13af(strlen(d_432e_c125), 11) * 6 + 48, -(y + 48),
                        d_61eb_d9f8 || flag ? 2 : 6, d_432e_ec73);
            if (d_61eb_d7ae > 0) {
                sprintf(d_432e_ecc3, "%2d", d_61eb_d7ae);
                sprintf(buf, " %s", d_432e_ecc3);
                f_1a83_3450(f + 15, -(d_61eb_d5c6 + 6), 1, 3, 30, buf);
            } else
                f_1a83_3450(f + 15, -(d_61eb_d5c6 + 6), 1, 3, 30, "  -");
            f_1a83_3347(x0 + strlen(d_432e_ecc3) * 6 + 136, -(y + 48),
                        d_61eb_d734 > 0 && d_61eb_d732 == 0 ? 4 : 6, d_432e_d55d);
            d_61eb_d5c6++;
            y += 8;
            f_215d_13f1(&d_61eb_d5ca, &d_61eb_d5da, 2);
        }
        d_61eb_d5aa++;
    } while (d_61eb_d5aa != 16);
    sprintf(buf, " Defence        -    %d%%", b);
    f_1a83_3450(f, 20.0, 1, 4, 150, buf);
    sprintf(buf, " Midfield       -    %d%%", c);
    f_1a83_3450(f, 21.0, 1, 4, 150, buf);
    sprintf(buf, " Attack         -    %d%%", d);
    f_1a83_3450(f, 22.0, 1, 4, 150, buf);
    sprintf(buf, " Attempts       -    %d", e);
    f_1a83_3450(f, 23.0, 1, 4, 150, buf);
}
