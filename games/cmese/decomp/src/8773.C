/* @at 8773:0000 */
/* @data 69da:23c6 */
/* @module */

/* Overlay 8773 (CM93's 817E.C, CM1's 7A28.C): the match engine's events: goals and their
 * commentary, disallowed goals, penalties and shoot-outs, the score bar and attempts, team
 * strengths and player ratings during the match, the result, and the match statistics
 * screen. Its data starts with the goal commentary tables (how the ball went in, where it
 * went, and the (verb, place) pairs that do not go together), then the initialiser of
 * 303f's local float table, ahead of the literals. */
#include <stdio.h>
#include <string.h>
#include <mem.h>
#include <stdlib.h>

/* the functions, in the reverse order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_8773_0000(int a, int b, int c, int d);
void f_8773_00c5(void);
void f_8773_0143(int minute);
void f_8773_01cc(int team);
void f_8773_0283(void);
void f_8773_02ed(int a, char c, char d, char e, int b, int team);
void f_8773_0714(char c);
void f_8773_0995(void);
void f_8773_0a64(int team, char far *s);
void f_8773_0ada(void);
void f_8773_0af4(int team);
void f_8773_0d32(void);
char f_8773_0ec6(int a, int b, int na, int nb, int n);
void f_8773_0ef8(int team);
void f_8773_1018(int team, int chance, int shootout);
void f_8773_13f4(int team);
unsigned char f_8773_14f6(int p, int team);
void f_8773_190b(int team);
void f_8773_28ec(int team);
void f_8773_2af0(unsigned char a, unsigned char b, unsigned char c);
void f_8773_2b5f(unsigned char a, unsigned char b, unsigned char c);
void f_8773_2bce(int team);
void f_8773_2d57(void);
void f_8773_303f();             /* no prototype: 2b9b passes it words, it reads bytes */
int f_8773_39f3(int i, int team);
void f_8773_3a79(int a, int b, char c);
void f_8773_3fea(char a, int b, int c, int d, int e, float f);

void f_2162_0897();
void f_2162_08b5(int x1, int y1, int x2, int y2);
void f_2162_08a6();
void f_2162_090f(int x1, int y1, int x2, int y2);
void f_2162_07f7(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_2162_0b0c();
void f_2162_0992(int a);
void f_2162_09e2(int x, int y, char far *s);
char far *f_2162_0e9b(char far *s);
void f_2162_0dfb(int ticks);
long f_2162_0da1(long n);
void f_1a70_344b(int x, int y, int colour, char far *s);
void f_1a70_3b47(float x, float y, int colour, char far *s);
void f_1a70_3d0c(float x, float y, int a, int b, int c, char far *s);
char far *f_1a70_46c1(int player);
char far *f_1a70_2e4a(int x, char c);
char f_1a70_5b94(int player);
void f_1a70_4a41(char far *title);
void f_b085_77f9(int player, char c);
void f_b8da_3c33(char team);
void f_829f_22b0(int a, int b, int c);
void f_829f_2d07(void);
void f_829f_468e(float x, float y);
extern char near *d_69da_b1fc[];
extern char d_69da_de38;
extern char d_69da_de37;
extern char d_69da_dde7;
extern char d_69da_ddc0;
extern int d_69da_db74;
extern int d_69da_db08;
extern int d_69da_db06;
extern int d_69da_db04;
extern int d_69da_db02;
extern int d_69da_daf2;
extern int d_69da_daf0;
extern int d_69da_dac4;
extern int d_69da_dac2;
extern int d_69da_dab0;
extern int d_69da_daae;
extern int d_69da_da98;
extern int d_69da_da7a;
extern int d_69da_da6a;
extern int d_69da_da68;
extern int d_69da_da64;
extern int d_69da_da62;
extern int d_69da_da60;
extern int d_69da_d9da;
extern int d_69da_d9d2;
extern int d_69da_d996;
extern char far d_536d_6981[];
extern char far d_536d_6931[];
extern char far d_536d_68e1[];
extern char far d_536d_615d[];
extern char far d_536d_610d[];
extern unsigned char far d_3668_0000[][1860];
char far *f_1a70_4739(int player);
char f_1a70_2bc7(int x);
int f_829f_2f62(int team, int p);
int f_b8da_311d(int player);
extern char d_69da_de36;
extern char d_69da_dde9;
extern char d_69da_dde0;
extern char d_69da_ddd3;
extern int d_69da_dd92;
extern int d_69da_dd90;
extern int d_69da_dd8e;
extern int d_69da_db78;
extern int d_69da_db56;
extern int d_69da_db4a;
extern int d_69da_db48;
extern int d_69da_db46;
extern int d_69da_db0c;
extern int d_69da_db0a;
extern int d_69da_da6e;
extern int d_69da_d9d8;
extern int d_69da_d9ae;
extern int d_69da_d9a0;
extern char far d_536d_57cb[];
extern unsigned char far d_4512_5d98[][14];
extern long (far *d_69da_dfae)[80];
extern unsigned char (far *d_69da_dfba)[1860];
extern int (far *d_69da_dfa6)[1860];
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
extern struct flags_w far d_4512_bdc8[];
extern int far d_4512_549a[][14];
extern unsigned char far d_28da_2a78[][1860];
extern unsigned char far d_4512_1576[];
struct goals { unsigned char pad; unsigned char g[2][14]; };
extern struct goals far d_536d_30a5;
extern char far d_536d_624d[];
extern char far d_536d_6a21[];
char far *f_1a70_4592(int player);
char f_1a70_2490(int);
char f_1a70_24c5(int);
char f_1a70_268e(int, int);
char f_1a70_2737(int, int);
char f_1a70_27c8(int, int);
char f_1a70_5b76(int player);
extern char d_69da_ddea;
extern char d_69da_dddc;
extern unsigned char d_69da_dda9;
extern unsigned char d_69da_dda8;
extern int d_69da_db7e;
extern int d_69da_db7c;
extern int d_69da_db7a;
extern int d_69da_d9ee;
extern int d_69da_d9bc;
extern char far d_536d_6bb1[];
extern char far d_536d_6b61[];
extern float far d_4512_747c[];
float f_2162_1324(float a, float b);
int f_2162_134e(int a, int b);
float f_2162_1390(float a, float b);
int f_1a70_1eda(int a, int b, int c);
int f_1a70_2342(unsigned char a);
char f_1a70_2a20(int a, int b);
unsigned char f_1a70_5be7(int player, unsigned char a);
extern float d_69da_de91;
extern float d_69da_de8d;
extern float d_69da_de89;
extern float d_69da_de85;
extern char d_69da_de20;
extern unsigned char d_69da_ddab;
extern unsigned char d_69da_ddaa;
extern int d_69da_dd96;
extern int d_69da_dd94;
extern int d_69da_dd8c;
extern int d_69da_dd8a;
extern int d_69da_dcdc;
extern int d_69da_dba0;
extern int d_69da_db9e;
extern int d_69da_db9c;
extern int d_69da_db9a;
extern int d_69da_db98;
extern int d_69da_db96;
extern int d_69da_db94;
extern int d_69da_db92;
extern int d_69da_db90;
extern int d_69da_db8e;
extern int d_69da_db8c;
extern int d_69da_db8a;
extern int d_69da_db88;
extern int d_69da_db86;
extern int d_69da_db84;
extern int d_69da_db82;
extern int d_69da_db80;
extern int d_69da_db62;
extern int d_69da_db4e;
extern int d_69da_db4c;
extern int d_69da_db44;
extern int d_69da_db42;
extern int d_69da_db40;
extern int d_69da_db3e;
extern int d_69da_db3a;
extern int d_69da_db36;
extern int d_69da_db32;
extern int d_69da_db28;
extern int d_69da_db18;
extern int d_69da_dada;
extern int d_69da_dad8;
extern int d_69da_da86;
extern int d_69da_da2a;
extern float far d_4512_740c[][14];
extern unsigned char far d_4512_5db4[][14];
extern unsigned char far d_4512_5d94[];
extern unsigned char far d_4512_4726[][3][14];
extern unsigned char far d_4512_2b2e[];
extern unsigned char far d_4512_2db8[];
extern unsigned char far d_4512_3042[];
extern unsigned char far d_4512_32cc[];
extern int far d_4512_1a30[];
extern int far d_4512_1ad0[];
extern unsigned char far d_4512_0000[][82];
extern unsigned char far d_3668_e9e2[][60];
extern unsigned char far d_3668_e92e[][60];
extern unsigned char far d_3668_e912[][14];
extern unsigned char far d_3668_e880[][3];
extern unsigned char far d_5dbf_0932[][10];
int f_1a70_6856(int a, int b, int c);
double f_1a70_6798(int x, int y);
float f_1a70_68b6(int x);
long f_2162_1367(long a, long b);
void far *f_2162_1634(int handle, int page);
extern long d_69da_df11;
extern float d_69da_de95;
extern int d_69da_dba2;
extern int d_69da_dafe;
extern int d_69da_dafc;
extern int d_69da_dafa;
extern int d_69da_daf8;
extern int d_69da_daf6;
extern int d_69da_daf4;
extern int d_69da_da80;
extern int d_69da_da78;
extern int d_69da_d9f6;
extern int d_69da_d9e0;
extern int d_69da_dff0;
extern int far d_28d8_001d;
extern float far d_28d8_0019;
extern int far d_4512_87bc[];
extern unsigned char far d_4512_6378[];
extern unsigned char far d_4512_5d92[];
extern unsigned char far d_4512_0052[];
extern int far d_5dbf_1290[][2][98];
extern unsigned char far d_536d_30a6[][14];
int f_2162_13ba(int a, int b);
void f_9c01_47c8(int team, int a, int player, int b);
extern int d_69da_dba4;
extern int d_69da_dba6;
extern int d_69da_dac0;
char far *f_1a70_3404(int x);
void f_1a70_3554(float x, float y, int bg, int fg, int w, char far *s);
void f_1a70_379b(float x, float y, int colour, char far *s);
void f_1a70_390f(float x, float y, int bg, int fg, int w, char far *s);
void f_829f_3ff9(int team, char c);
void f_1a70_5688(int a);
extern int d_69da_dba8;
extern int d_69da_dbaa;
extern int d_69da_db38;
extern int d_69da_dae8;
extern int d_69da_daec;
void f_2162_13fc(void far *a, void far *b, int n);
extern int d_69da_d9c0;
extern int d_69da_d9c4;
extern int d_69da_d9d4;
extern int d_69da_db2c;
extern int d_69da_dab4;
extern char d_69da_dde8;
extern char d_69da_ddd5;
struct matchstats { /* the match record's ratings and counts */ unsigned def : 7; /* the three ratings shown on the stats screen */ unsigned mid : 7; unsigned att : 7; unsigned shots_h : 6; /* attempts */ unsigned shots_a : 6; unsigned capt_h : 4; /* the captains' shirt numbers */ unsigned capt_a : 4; unsigned motm : 6; /* the man of the match: 1-14 home, 15-28 away */ };
extern unsigned char far d_4512_5e08[][14];
extern unsigned char far d_4512_5dec[][14];
extern int far d_3668_e8da[][14];
extern int far d_536d_306e[][14];
extern unsigned char far d_536d_30c2[][14];
extern unsigned char far d_536d_30de[][14];
extern long far d_536d_306a;
extern struct matchstats far d_536d_30fa;
extern unsigned char far d_28da_ad40[];
extern int d_69da_dff6;
extern int d_69da_dfec;
extern int d_69da_d98e;
extern int d_69da_da9a;
char f_1a70_5ea2(char team, char week, char n);
void f_1a70_5e32(void);
void f_1a70_5e46(void);
struct score { unsigned home1 : 4; unsigned away1 : 4; unsigned home2 : 4; unsigned away2 : 4; };
extern struct score far d_536d_3066[];
extern char far * far d_5dbf_0565[];
extern char far d_536d_8369[];
extern char far d_536d_8319[];
extern char far d_536d_6c03[];
extern char far d_536d_6c01[];
extern char far d_536d_52fd[];
extern char far d_536d_52ad[];
extern int d_69da_db2e;

/* the goal commentary: how the ball went in, where it went, and the pairs (verb, place)
 * that do not go together, ended by -1. A '*' is replaced by the keeper's name. */
static char far *d_69da_23c6[] = {
    "Tapped", "Volleyed", "Headed", "Guided", "Placed", "Side footed", "Driven", "Curled",
    "Chipped", "Thundered", "Flicked", "Lashed", "Hooked", "Scrambled", "Rifled",
    "Hammered", "Glorious strike", "Smashed", "Powered", "Downward header",
    "Bullet header", "Looping header", "Forced", "Rammed", "Despatched",
    "Hit ferociously", "Thumped", "Slotted", "Buried", "Bundled", "Hit first time",
    "Calmly placed", "Clinical strike", "Crashed"
};
static char far *d_69da_244e[] = {
    "past*", "into the net", "into the corner", "into the top corner", "in off a post",
    "in off the bar", "in beyond*", "through a crowd", "under*", "home",
    "into the open net"
};
static char d_69da_247a[] = {
    0, 3, 0, 5, 0, 7, 3, 7, 4, 7, 4, 9, 7, 7, 7, 8, 7, 9, 8, 7, 8, 8, 8, 9, 10, 7, 13, 3,
    16, 8, 16, 9, 19, 7, 19, 8, 19, 9, 20, 7, 20, 8, 20, 9, 21, 7, 21, 8, 21, 9, 22, 3,
    24, 9, 25, 9, 27, 3, 27, 4, 27, 5, 27, 7, 29, 3, 30, 3, 31, 7, 31, 9, 32, 7, 32, 9,
    33, 8, -1
};

void f_8773_0000(int a, int b, int c, int d)
{
    int t1, t2;

    t1 = b * 38 / (a + b);
    t2 = 38 - t1;
    f_2162_0897(16);
    f_2162_08b5(c * 36 + 24, 139, c * 36 + 31, 177 - t2);
    f_2162_08b5(d * 36 + 168, 139, d * 36 + 175, 177 - t1);
    f_2162_0897(28);
    f_2162_08b5(c * 36 + 24, t1 + 139, c * 36 + 31, 177);
    f_2162_08b5(d * 36 + 168, t2 + 139, d * 36 + 175, 177);
}

void f_8773_00c5(void)
{
    f_2162_0897(28);
    f_2162_08b5(224, 14, 306, 42);
    f_2162_0897(16);
    f_2162_08b5(226, 16, 304, 40);
    f_2162_08a6(22);
    f_2162_090f(222, 12, 308, 44);
    f_2162_08a6(24);
    f_2162_090f(260, 18, 290, 36);
    f_1a70_344b(240, 30, 6, "TIME");
    f_8773_0143(d_69da_da98);
}

void f_8773_0143(int minute)
{
    char buf[80];

    if (d_69da_dde7)
        sprintf(buf, "Inj");
    else
        sprintf(buf, "%03d", minute);
    f_2162_0897(16);
    f_2162_08b5(261, 19, 289, 35);
    f_2162_0b0c(0);
    if (d_69da_db74 != 2)
        f_2162_0992(2);
    f_2162_08a6(18);
    f_2162_09e2(264, 34, buf);
    f_2162_0b0c(1);
}

void f_8773_01cc(int team)
{
    char buf[320];

    if (d_69da_dac2 + d_69da_dac4 > 0) {
        if (team == d_69da_da60)
            d_69da_da7a = d_69da_da62;
        else
            d_69da_da7a = d_69da_da60;
        f_8773_0af4(d_69da_da7a);
        sprintf(buf, "%s for %s!", d_536d_68e1, (char far *)d_69da_b1fc[team]);
        f_8773_0a64(team, buf);
        f_2162_0dfb(100);
        sprintf(buf, "%s %s", d_536d_6931, d_536d_6981);
        f_8773_0a64(team, buf);
        f_2162_0dfb(100);
        f_b8da_3c33(team);
        f_8773_0a64(d_69da_da60, d_536d_624d);
    }
}

void f_8773_0283(void)
{
    int team;
    char buf[320];

    if (d_69da_db08 > d_69da_da68) {
        team = d_69da_da62;
        d_69da_db04 = 1;
    }
    if (d_69da_db08 < d_69da_da68) {
        team = d_69da_da60;
        d_69da_db02 = 1;
    }
    if (d_69da_dac2 + d_69da_dac4 > 0) {
        sprintf(buf, "%s win on away goals!", (char far *)d_69da_b1fc[team]);
        f_8773_0a64(team, buf);
    }
}

void f_8773_02ed(int a, char c, char d, char e, int b, int team)
{
    char buf[320];

    if (team < 80 && !f_1a70_5b94(a) && d == 0) {
        if (d_69da_d996 > 8) {
            unsigned char other = team == d_69da_da60 ? d_69da_da62 : d_69da_da60;

            d_3668_0000[1][a]++;
            d_3668_0000[13][a]++;
            if (other < 80) {
                int keeper = d_4512_549a[other][0];

                if (!f_1a70_5b94(keeper) && d_4512_bdc8[keeper].f0)
                    d_28da_2a78[1][keeper]++;
            }
        }
        f_b085_77f9(a, 1);
    }
    if (team < 80 && d != 0 && d_69da_d996 >= 10)
        d_4512_1576[team]++;
    if (d_69da_dac2 + d_69da_dac4 > 0) {
        if (d != 0) {
            char k;
            char own = 1;

            d_69da_da7a = team == d_69da_da60 ? d_69da_da62 : d_69da_da60;
            sprintf(buf, "Goal for %s!", (char far *)d_69da_b1fc[team]);
            f_8773_0a64(team, buf);
            f_2162_0dfb(100);
            k = f_2162_0da1(5);
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
            k = f_2162_0da1(2);
            if (d_69da_de37 == 0 && team == d_69da_da62 || d_69da_de38 == 0 && team == d_69da_da60)
                own = 0;
            if (k == 0 && own == 1)
                strcat(buf, " past his own 'keeper!");
            else
                strcat(buf, " into his own net!");
            f_8773_0a64(d_69da_da7a, buf);
            f_2162_0dfb(100);
            if (d_69da_da7a < 80) {
                sprintf(buf, "Own goal by %s", f_1a70_46c1(a));
                f_8773_0a64(d_69da_da7a, buf);
            } else {
                sprintf(buf, "Own goal by their No.%s", f_1a70_2e4a(b + 1, 0));
                f_8773_0a64(d_69da_da7a, buf);
            }
            0;
            f_2162_0dfb(100);
            f_8773_0a64(d_69da_da60, d_536d_624d);
        } else if (c == 0 && e == 0) {
            if (team == d_69da_da60)
                d_69da_da7a = d_69da_da62;
            else
                d_69da_da7a = d_69da_da60;
            f_8773_0af4(d_69da_da7a);
            sprintf(buf, "%s for %s!", d_536d_68e1, (char far *)d_69da_b1fc[team]);
            f_8773_0a64(team, buf);
            f_2162_0dfb(100);
            sprintf(buf, "%s %s", d_536d_6931, d_536d_6981);
            f_8773_0a64(team, buf);
            f_2162_0dfb(100);
            if (team < 80) {
                sprintf(buf, "Scored by %s", f_1a70_46c1(a));
                f_8773_0a64(team, buf);
            } else {
                sprintf(buf, "Scored by their No.%s", f_1a70_2e4a(b + 1, 0));
                f_8773_0a64(team, buf);
            }
            f_2162_0dfb(100);
            f_8773_0a64(d_69da_da60, d_536d_624d);
        }
        f_8773_0995();
    }
    if (d == 0) {
        if (team == d_69da_da60) {
            d_536d_30a5.g[0][b] += 16;
            if (d_536d_30a5.g[0][b] / 16 == 3 && team < 80) {
                sprintf(buf, "%04d", a);
                strcat(d_536d_6a21, buf);
            }
        } else {
            d_536d_30a5.g[1][b] += 16;
            if (d_536d_30a5.g[1][b] / 16 == 3 && team < 80) {
                sprintf(buf, "%04d", a);
                strcat(d_536d_6a21, buf);
            }
        }
    } else if (d != 0) {
        if (team == d_69da_da60)
            d_536d_30a5.g[1][b]++;
        else
            d_536d_30a5.g[0][b]++;
    }
    f_829f_2d07();
}

void f_8773_0714(char c)
{
    char buf[320];

    f_829f_22b0(d_69da_daae, d_69da_daae, d_69da_dab0);
    f_1a70_4a41("");
    if (strlen(d_536d_615d) + 5 <= 19)
        sprintf(buf, " %s from", d_536d_615d);
    else
        sprintf(buf, " %s", d_536d_615d);
    f_1a70_3d0c(3.0, 2.0, -d_69da_da64, d_69da_d9da, 165, buf);
    sprintf(buf, " %s", d_536d_610d);
    f_1a70_3d0c(3.0, 4.5, -d_69da_da64, d_69da_d9da, 165, buf);
    f_8773_00c5();
    f_8773_0a64(d_69da_da60, d_536d_624d);
    sprintf(buf, " %s ", f_2162_0e9b(d_69da_b1fc[d_69da_da60]));
    f_1a70_3d0c(3.0, 12.0, -d_69da_da64, d_69da_d9da, 0, buf);
    f_829f_22b0(d_69da_dab0, d_69da_daae, d_69da_dab0);
    sprintf(buf, " %s ", f_2162_0e9b(d_69da_b1fc[d_69da_da62]));
    f_1a70_3d0c(21.0, 12.0, -d_69da_da64, d_69da_d9da, 0, buf);
    f_8773_0995();
    f_1a70_344b(30, 132, 1, "CHANCES :");
    sprintf(buf, "%d", d_69da_daf0);
    f_1a70_344b(96, 132, 5, buf);
    f_1a70_344b(174, 132, 1, "CHANCES :");
    sprintf(buf, "%d", d_69da_daf2);
    f_1a70_344b(240, 132, 5, buf);
    f_2162_08a6(17);
    for (d_69da_d9d2 = 0; d_69da_d9d2 <= 2; d_69da_d9d2++) {
        f_2162_090f(d_69da_d9d2 * 36 + 23, 138, d_69da_d9d2 * 36 + 32, 178);
        f_2162_090f(d_69da_d9d2 * 36 + 167, 138, d_69da_d9d2 * 36 + 176, 178);
    }
    f_1a70_344b(28, 188, 6, "DEF   MID   ATT         DEF   MID   ATT");
    if (c == 1)
        f_829f_468e(3.5, 21.5);
    else if (c == 2)
        f_829f_468e(21.5, 3.5);
}

void f_8773_0995(void)
{
    char buf[320];

    f_2162_07f7(134, 91, 153, 106);
    f_2162_07f7(278, 91, 297, 106);
    sprintf(buf, "%d", d_69da_db06);
    f_1a70_3b47(18.0, 12.0, 1, buf);
    sprintf(buf, "%d", d_69da_db08);
    f_1a70_3b47(36.0, 12.0, 1, buf);
    if (d_69da_ddc0 != 0) {
        f_2162_07f7(223, 46, 277, 52);
        sprintf(buf, "AGG %d-%d", d_69da_db06 + d_69da_da68, d_69da_db08 + d_69da_da6a);
        f_1a70_344b(232, 52, 3, buf);
    }
}

void f_8773_0a64(int team, char far *s)
{
    char buf[320];

    if (team == d_69da_da60)
        f_829f_22b0(d_69da_daae, d_69da_daae, d_69da_dab0);
    else
        f_829f_22b0(d_69da_dab0, d_69da_daae, d_69da_dab0);
    f_8773_0ada();
    sprintf(buf, " %s ", s);
    f_1a70_3d0c(3.0, 8.5, -d_69da_da64, d_69da_d9da, 0, buf);
}

void f_8773_0ada(void)
{
    f_2162_07f7(16, 56, 312, 80);
}

void f_8773_0af4(int team)
{
    int b;
    int a;
    int w;
    char buf[40];
    int i;
    int v;

    do {
        d_69da_ddd3 = -1;
        a = f_2162_0da1(34);
        if ((d_69da_de37 == 0 && team == d_69da_da60) ||
            (d_69da_de38 == 0 && team == d_69da_da62))
            b = 10;
        else
            do {
                b = f_2162_0da1(10);
            } while (f_2162_0da1(3) && b >= 3 && b <= 5);
        i = 0;
        do {
            v = d_69da_247a[i++];
            if (v != -1) {
                w = d_69da_247a[i++];
                if (a == v && b == w) {
                    d_69da_ddd3 = 0;
                    v = -1;
                }
            }
        } while (v != -1);
        if (d_69da_ddd3 != 0) {
            strcpy(d_536d_6931, d_69da_23c6[a]);
            strcpy(d_536d_6981, d_69da_244e[b]);
            if (d_536d_6981[strlen(d_536d_6981) - 1] == '*') {
                if (team < 80)
                    strcpy(buf, f_1a70_4739(d_4512_549a[team][0]));
                else
                    strcpy(buf, "their 'keeper");
                d_536d_6981[strlen(d_536d_6981) - 1] = ' ';
                strcat(d_536d_6981, buf);
            }
            if (strlen(d_536d_6931) + strlen(d_536d_6981) > 32)
                d_69da_ddd3 = 0;
        }
    } while (!d_69da_ddd3);
    if (b < 10) {
        d_69da_dde9 = -1;
        switch (a) {
        case 0: case 5: case 12: case 13: case 22: case 29:
            d_69da_dde9 = 0;
            d_69da_de36 = 0;
        }
        if (d_69da_de36)
            strcpy(d_536d_68e1, "Magnificent goal");
        else if (d_69da_dde9 && (!f_2162_0da1(5) || a == 16)) {
            if (f_2162_0da1(2) == 0)
                strcpy(d_536d_68e1, "Brilliant goal");
            else
                strcpy(d_536d_68e1, "Superb goal");
        } else
            strcpy(d_536d_68e1, "Goal");
    }
}

void f_8773_0d32(void)
{
    if (d_69da_dac2 + d_69da_dac4 > 0)
        f_8773_0a64(d_69da_da60, d_536d_624d);
    d_69da_db78 = 1;
    d_69da_dd8e = 0;
    d_69da_dd90 = 0;
    d_69da_dd92 = 5;
    while (f_8773_0ec6(d_69da_db0a, d_69da_db0c, d_69da_dd8e, d_69da_dd90, d_69da_dd92) == 0) {
        f_8773_1018(d_69da_da60, d_69da_db46, 1);
        d_69da_dd8e++;
        if (d_69da_dde0) {
            d_69da_db0a++;
            d_69da_db06++;
            if (d_69da_dac2 + d_69da_dac4 > 0)
                f_8773_0995();
        }
        if (f_8773_0ec6(d_69da_db0a, d_69da_db0c, d_69da_dd8e, d_69da_dd90, d_69da_dd92) == 0) {
            f_8773_1018(d_69da_da62, d_69da_db48, 1);
            d_69da_dd90++;
            if (d_69da_dde0) {
                d_69da_db0c++;
                d_69da_db08++;
                if (d_69da_dac2 + d_69da_dac4 > 0)
                    f_8773_0995();
            }
        }
        if (d_69da_db0a == d_69da_db0c && d_69da_dd8e == d_69da_dd92)
            d_69da_dd92++;
    }
    if (d_69da_dac2 + d_69da_dac4 > 0) {
        d_69da_d9d8 = d_69da_db0a > d_69da_db0c ? d_69da_da60 : d_69da_da62;
        sprintf(d_536d_57cb, "%s win the match! ", (char far *)d_69da_b1fc[d_69da_d9d8]);
        f_8773_0a64(d_69da_d9d8, d_536d_57cb);
    }
    for (d_69da_d9d2 = 0; d_69da_d9d2 <= 13; d_69da_d9d2++)
        for (d_69da_d9a0 = 0; d_69da_d9a0 <= 1; d_69da_d9a0++)
            if (d_4512_5d98[d_69da_d9a0][d_69da_d9d2] == 7)
                d_4512_5d98[d_69da_d9a0][d_69da_d9d2] = 0;
}

char f_8773_0ec6(int a, int b, int na, int nb, int n)
{
    if (a != b) {
        if (a + (n - na) < b)
            return -1;
        if (b + (n - nb) < a)
            return -1;
    }
    return 0;
}

void f_8773_0ef8(int team)
{
    for (;;) {
        d_69da_da6e = 0;
        d_69da_db4a = -1;
        for (d_69da_d9a0 = 0; d_69da_d9a0 <= 13; d_69da_d9a0++) {
            if (d_4512_5d98[team == d_69da_da62][d_69da_d9a0] < 2) {
                if (f_1a70_2bc7(team))
                    f_b8da_311d(d_4512_549a[team][d_69da_d9a0]);
                else
                    f_829f_2f62(team, d_69da_d9a0);
                if (d_69da_db56 > d_69da_da6e) {
                    d_69da_da6e = d_69da_db56;
                    d_69da_d9ae = d_4512_549a[team][d_69da_d9a0];
                    d_69da_db4a = d_69da_d9a0;
                }
            }
        }
        if (d_69da_db4a != -1)
            break;
        for (d_69da_d9a0 = 0; d_69da_d9a0 <= 13; d_69da_d9a0++)
            if (d_4512_5d98[team == d_69da_da62][d_69da_d9a0] == 7)
                d_4512_5d98[team == d_69da_da62][d_69da_d9a0] = 0;
    }
}

void f_8773_1018(int team, int chance, int shootout)
{
    unsigned char c;

    f_8773_0ef8(team);
    d_69da_db7a = team == d_69da_da60 ? d_69da_da62 : d_69da_da60;
    d_69da_dde0 = 0;
    if (d_69da_dac2 + d_69da_dac4 > 0) {
        if (shootout) {
            sprintf(d_536d_57cb, "%s's penalty....", (char far *)d_69da_b1fc[team]);
            f_8773_0a64(team, d_536d_57cb);
            f_2162_0dfb(100);
        }
        if (team < 80)
            sprintf(d_536d_57cb, "%s steps up...", f_1a70_4592(d_69da_d9ae));
        else
            sprintf(d_536d_57cb, "Their No.%d steps up...", d_69da_db4a + 1);
        f_8773_0a64(team, d_536d_57cb);
        f_2162_0dfb(f_2162_0da1(3) * 30 + 40);
    }
    if (team < 80) {
        if (f_1a70_5b76(d_69da_d9ae))
            c = (d_28da_2a78[7][d_69da_d9ae] * 30 + d_28da_2a78[15][d_69da_d9ae]) / 8;
        else
            c = 25;
    } else
        c = 75;
    if ((d_69da_d9ee = f_2162_0da1(c + 300)) > f_2162_0da1(chance)) {
        if (d_69da_d9ee % 12 > 0) {
            d_69da_db7c = f_2162_0da1(d_69da_dddc + 5);
            switch (d_69da_db7c) {
            case 0: strcpy(d_536d_6b61, "blasts it home"); break;
            case 1: strcpy(d_536d_6b61, "finds the corner"); break;
            case 2: strcpy(d_536d_6b61, "scores easily"); break;
            case 3: strcpy(d_536d_6b61, "buries it"); break;
            case 4:
                sprintf(d_536d_6b61, "makes it %d-%d", d_69da_db06 + (team == d_69da_da60),
                        d_69da_db08 + (team == d_69da_da62));
                break;
            }
            if (team < 80)
                sprintf(d_536d_57cb, "And %s %s !", f_1a70_4739(d_69da_d9ae), d_536d_6b61);
            else
                sprintf(d_536d_57cb, "And he %s !", d_536d_6b61);
            d_69da_dde0 = -1;
        } else {
            d_69da_db7e = f_2162_0da1(4);
            switch (d_69da_db7e) {
            case 0: strcpy(d_536d_6bb1, "blasts it over"); break;
            case 1: strcpy(d_536d_6bb1, "puts it wide"); break;
            case 2: strcpy(d_536d_6bb1, "hits the post"); break;
            case 3: strcpy(d_536d_6bb1, "hits the bar"); break;
            }
            if (team < 80)
                sprintf(d_536d_57cb, "But %s %s !", f_1a70_4739(d_69da_d9ae), d_536d_6bb1);
            else
                sprintf(d_536d_57cb, "But he %s !", d_536d_6bb1);
        }
    } else if (d_69da_db7a < 80) {
        sprintf(d_536d_57cb, "But %s saves it !", f_1a70_4739(d_4512_549a[d_69da_db7a][0]));
        if (!f_1a70_5b94(d_4512_549a[d_69da_db7a][0]))
            d_28da_2a78[16][d_4512_549a[d_69da_db7a][0]] = d_28da_2a78[16][d_4512_549a[d_69da_db7a][0]] + 10;
    } else
        strcpy(d_536d_57cb, "But the 'keeper saves it !");
    if (d_69da_dac2 + d_69da_dac4 > 0) {
        f_8773_0a64(team, d_536d_57cb);
        f_2162_0dfb(100);
    }
    if (shootout)
        d_4512_5d98[team == d_69da_da62][d_69da_db4a] = 7;
    else if (d_69da_dac2 + d_69da_dac4 > 0)
        f_8773_0a64(d_69da_da60, d_536d_624d);
}

void f_8773_13f4(int team)
{
    float f;

    f = 1.0;
    if (f_1a70_2490(d_69da_d996) || f_1a70_24c5(d_69da_d996)) {
        d_69da_dda8 = d_69da_da60 / 20;
        d_69da_dda9 = d_69da_da62 / 20;
        d_69da_ddea = (team == d_69da_da60 && d_69da_dda8 > d_69da_dda9)
                   || (team == d_69da_da62 && d_69da_dda8 < d_69da_dda9);
        f = d_69da_ddea ? 1.05 : 1.025;
    } else if (f_1a70_268e(d_69da_d996, d_69da_d9bc + 1)
            || f_1a70_2737(d_69da_d996, d_69da_d9bc + 1)
            || f_1a70_27c8(d_69da_d996, d_69da_d9bc + 1)) {
        f = 1.1;
    }
    d_4512_747c[team == d_69da_da62] = f;
}

unsigned char f_8773_14f6(int p, int team)
{
    d_69da_ddaa = team == d_69da_da62 ? 1 : 0;
    if (d_4512_5db4[d_69da_ddaa][p] == 0) {
        d_69da_db80 = d_4512_5d94[d_69da_ddaa];
        if (team < 80) {
            d_69da_ddab = d_4512_4726[team][0][p];
            d_69da_db82 = d_4512_1a30[team];
            d_69da_d9ae = d_4512_549a[team][p];
            if (!f_1a70_5b94(d_69da_d9ae)) {
                d_69da_db86 = d_28da_2a78[16][d_69da_d9ae];
                d_69da_db84 = d_4512_1ad0[team];
                if (d_69da_db84 == 650) {
                    d_69da_db8a = d_69da_db86 * 0.8;
                } else {
                    d_69da_db88 = (1 - (d_5dbf_0932[d_4512_2b2e[d_69da_db82]][d_4512_2b2e[d_69da_db84]] - 5) * 0.05)
                                * d_4512_32cc[d_69da_db84];
                    d_69da_db8a = (1 - (d_5dbf_0932[d_3668_0000[17][d_69da_d9ae]][d_4512_2b2e[d_69da_db84]] - 5) * 0.05)
                                * ((d_69da_db86 * 2 + d_69da_db88) / 3.0);
                }
                d_69da_db8a = (f_2162_1324(f_2162_1390(d_69da_db8a, d_69da_db86 * 1.25), d_69da_db86 * 0.75) * 0.4
                               + d_69da_db80) / 5.0;
                d_69da_db8c = f_1a70_1eda(d_69da_ddab, d_69da_d9ae, d_4512_2db8[d_4512_1a30[team]] / 16);
                if (f_1a70_2342(d_69da_ddab) >= d_69da_db8c)
                    d_69da_db8a = (long)d_69da_db8a * d_69da_db8c / f_1a70_2342(d_69da_ddab);
                else
                    d_69da_db8a = (d_69da_db8c / (f_1a70_2342(d_69da_ddab) * 2.0) + 0.5) * d_69da_db8a;
            } else {
                d_69da_db8a = f_1a70_5be7(d_69da_d9ae, d_69da_ddab) + (int)f_2162_0da1(3) - (int)f_2162_0da1(3);
            }
        } else {
            d_69da_db8a = (d_3668_e912[team == 81][p] * 4 + d_69da_db80) / 5;
        }
        d_69da_db8a = d_69da_db8a * d_4512_747c[d_69da_ddaa];
        d_4512_5db4[d_69da_ddaa][p] = d_69da_db8a * 0.55 + 9.0;
        d_4512_740c[d_69da_ddaa][p] = f_2162_1324(f_2162_1390(d_69da_db8a * 0.25 + 3.0, 8.0), 3.0);
    }
    return d_4512_5db4[d_69da_ddaa][p];
}

void f_8773_190b(team)
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

    d_69da_dad8 = 0;
    d_69da_db8e = 0;
    n = 0;
    d_69da_db90 = 0;
    d_69da_d9ee = 0;
    d_69da_db92 = 0;
    d_69da_db94 = 0;
    d_69da_db96 = 0;
    d_69da_db98 = 0;
    d_69da_db9a = 0;
    d_69da_db9c = 0;
    d_69da_db9e = 0;
    d_69da_db44 = 0;
    d_69da_dba0 = 0;
    d_69da_de85 = 0;
    d_69da_de89 = 0;
    d_69da_db62 = 400;
    d_69da_dd94 = 750;
    f_8773_28ec(team);
    if (team == d_69da_da60) {
        for (i = 0; i < 3; i++)
            for (j = 0; j < 60; j++)
                d_3668_e92e[i][j] = 0;
    } else {
        for (i = 0; i < 3; i++)
            for (j = 0; j < 60; j++)
                d_3668_e9e2[i][j] = 0;
    }
    for (d_69da_d9a0 = 0; d_69da_d9a0 <= 13; d_69da_d9a0++) {
        if (d_4512_5d98[team == d_69da_da62][d_69da_d9a0] < 2) {
            unsigned char k;

            d_69da_db18 = f_8773_14f6(d_69da_d9a0, team);
            d_69da_da86 = d_4512_4726[team][0][d_69da_d9a0];
            k = d_4512_4726[team][2][d_69da_d9a0];
            f8 = (k == 1) * -0.25 + (k == 2) * 0.25;
            fc = 0;
            f10 = 0;
            if (team < 80) {
                d_69da_dcdc = d_4512_549a[team][d_69da_d9a0];
                if (!f_1a70_5b94(d_69da_dcdc)) {
                    float t;

                    d_69da_de85 = (x = d_28da_2a78[6][d_69da_dcdc]) * x / 2000.0;
                    d_69da_de89 = (x = d_28da_2a78[7][d_69da_dcdc]) * x / 2000.0;
                    if (d_69da_da86 == 7) {
                        fc = (x = d_28da_2a78[1][d_69da_dcdc]) * x / 1000.0;
                        f10 = (x = d_28da_2a78[2][d_69da_dcdc]) * x / 1000.0;
                    }
                    f14 = (x = d_28da_2a78[12][d_69da_dcdc]) * x / 2000.0;
                    c4 = f_2162_134e((int)(d_28da_2a78[21][d_69da_dcdc] / 100.0 * d_28da_2a78[22][d_69da_dcdc]), 1);
                    d_69da_db62 -= d_28da_2a78[11][d_69da_dcdc];
                    x = d_28da_2a78[5][d_69da_dcdc];
                    t = d_28da_2a78[16][d_69da_dcdc] / 100.0 * (x * x / 100.0);
                    d_69da_dd96 = t * t * t;
                } else {
                    d_69da_de85 = 0.095;
                    d_69da_de89 = 0.095;
                    if (d_69da_da86 == 7) {
                        fc = 0.095;
                        f10 = 0.095;
                    }
                    f14 = 0.095;
                    c4 = 5;
                    d_69da_db62 -= 10;
                    d_69da_dd96 = f_2162_0da1(50);
                }
            } else {
                if (team == d_69da_da60)
                    d_69da_de20 = d_69da_daae >= 480 ? -1 : 0;
                else
                    d_69da_de20 = d_69da_dab0 >= 480 ? -1 : 0;
                d_69da_de85 = d_69da_de20 ? 0.095 : 0.1;
                d_69da_de89 = d_69da_de20 ? 0.095 : 0.1;
                if (d_69da_da86 == 7) {
                    fc = d_69da_de20 ? 0.095 : 0.1;
                    f10 = d_69da_de20 ? 0.095 : 0.1;
                }
                f14 = d_69da_de20 ? 0.095 : 0.1;
                c4 = d_69da_de20 ? 5 : 10;
                d_69da_db62 -= 16;
                d_69da_dd96 = f_2162_0da1(d_69da_de20 ? 100 : 400);
            }
            if (d_69da_d9a0 > 10)
                c3 = d_3668_e880[team == d_69da_da62][d_69da_d9a0 - 11];
            else
                c3 = 0;
            if (d_69da_da86 == 1 && d_69da_db44 == 0) {
                d_69da_dad8 = (f14 + 3.95) * d_69da_db18 + d_69da_dad8;
                d_69da_db44 = 1;
                d_69da_dd96 = 0;
            }
            if (d_69da_da86 == 11) {
                d_69da_dad8 = (f14 + 1.45) * d_69da_db18 + d_69da_dad8;
                d_69da_db8e = (f14 + 2.95) * d_69da_db18 + d_69da_db8e;
                n = (f14 + 0.45) * d_69da_db18 + n;
                if (team == d_69da_da60)
                    f_8773_2af0(c4, c3, 0);
                else
                    f_8773_2b5f(c4, c3, 0);
                d_69da_dba0 = 1;
                d_69da_dd96 /= 4;
            }
            if (d_69da_da86 == 12) {
                d_69da_dad8 = (f14 + 0.95) * d_69da_db18 + d_69da_dad8;
                d_69da_db8e = (f14 + 1.95) * d_69da_db18 + d_69da_db8e;
                n = (f14 + 1.9) * d_69da_db18 + n;
                if (team == d_69da_da60)
                    f_8773_2af0(c4, c3, 0);
                else
                    f_8773_2b5f(c4, c3, 0);
                d_69da_dba0 = 1;
                d_69da_dd96 /= 4;
            }
            if (d_69da_da86 == 13) {
                d_69da_db8e = (f14 + 0.35) * d_69da_db18 + d_69da_db8e;
                n = (1.75 - f8 + fc + f10 + f14) * d_69da_db18 + n;
                d_69da_db90 = (f8 + 1.4 + d_69da_de85 + f14) * d_69da_db18 + d_69da_db90;
                d_69da_d9ee = (d_69da_de89 + 1.95) * d_69da_db18 + d_69da_d9ee;
                if (team == d_69da_da60)
                    f_8773_2af0(c4, c3, 1);
                else
                    f_8773_2b5f(c4, c3, 1);
            }
            if (d_69da_da86 > 1 && d_69da_da86 < 5) {
                d_69da_dad8 = (f14 + 0.95) * d_69da_db18 + d_69da_dad8;
                d_69da_db8e = (1.95 - f8 + f14) * d_69da_db18 + d_69da_db8e;
                n = (f8 + 0.95 + f14) * d_69da_db18 + n;
                d_69da_d9ee = (d_69da_de89 + 0.95) * d_69da_db18 + d_69da_d9ee;
                if (team == d_69da_da60)
                    f_8773_2af0(c4, c3, 0);
                else
                    f_8773_2b5f(c4, c3, 0);
                d_69da_dd96 = d_69da_dd96 / (4.0 - f8 * 2.0);
            }
            if (d_69da_da86 > 4 && d_69da_da86 < 8) {
                d_69da_db8e = (f14 + 0.95) * d_69da_db18 + d_69da_db8e;
                n = (1.75 - f8 + fc + f10 + f14) * d_69da_db18 + n;
                d_69da_db90 = (f8 + 0.8 + d_69da_de85 + f14) * d_69da_db18 + d_69da_db90;
                d_69da_d9ee = (d_69da_de89 + 1.95) * d_69da_db18 + d_69da_d9ee;
                if (team == d_69da_da60)
                    f_8773_2af0(c4, c3, 1);
                else
                    f_8773_2b5f(c4, c3, 1);
                d_69da_dd96 = d_69da_dd96 / (2.0 - f8 * 2.0);
            }
            if (d_69da_da86 > 7 && d_69da_da86 < 11) {
                n = (0.95 - f8 + f14) * d_69da_db18 + n;
                d_69da_db90 = (f8 + 1.8 + d_69da_de85 + f14) * d_69da_db18 + d_69da_db90;
                d_69da_d9ee = (d_69da_de89 + 3.95) * d_69da_db18 + d_69da_d9ee;
                if (team == d_69da_da60)
                    f_8773_2af0(c4, c3, 2);
                else
                    f_8773_2b5f(c4, c3, 2);
            }
            d_69da_dd94 = f_2162_134e(3, d_69da_dd94 - d_69da_dd96);
            switch (d_69da_da86) {
            case 2:
                d_69da_db92++;
                break;
            case 3:
                d_69da_db94++;
                break;
            case 4:
                d_69da_db96++;
                break;
            case 5:
            case 8:
                d_69da_db98++;
                break;
            case 6:
            case 9:
                d_69da_db9a++;
                break;
            case 7:
                d_69da_db9c++;
                break;
            case 10:
                d_69da_db9e++;
            }
        }
    }
    d_69da_db8e += (d_69da_db92 != 1) * 15 + (d_69da_db94 != 1) * 15 + (d_69da_db96 < 1) * 15;
    n += (d_69da_db92 != 1) * 15 + (d_69da_db94 != 1) * 15 + (d_69da_db96 < 1) * 15
        + (d_69da_db98 == 0 || d_69da_db98 > 2) * 15 + (d_69da_db9a == 0 || d_69da_db9a > 2) * 15
        + (d_69da_db9c == 0 || d_69da_db9c > 3) * 15 + (d_69da_db9e == 0 || d_69da_db9e > 3) * 15;
    d_69da_db90 += (d_69da_db98 == 0 || d_69da_db98 > 2) * 15 + (d_69da_db9a == 0 || d_69da_db9a > 2) * 15
        + (d_69da_db9c == 0 || d_69da_db9c > 3) * 15 + (d_69da_db9e == 0 || d_69da_db9e > 3) * 15;
    d_69da_d9ee += (d_69da_db98 == 0 || d_69da_db98 > 2) * 30 + (d_69da_db9a == 0 || d_69da_db9a > 2) * 30
        + (d_69da_db9c == 0 || d_69da_db9c > 3) * 30 + (d_69da_db9e == 0 || d_69da_db9e > 3) * 30;
    if (d_69da_db96 > 2 && d_69da_dba0 == 1 || d_69da_db96 > 3) {
        d_69da_db8e -= (d_69da_db96 + d_69da_dba0 - 3) * 15;
        n -= (d_69da_db96 + d_69da_dba0 - 3) * 15;
    }
    d_69da_dad8 = d_69da_dad8 * 1.25;
    if (team < 80) {
        if (f_1a70_2bc7(team) == 0) {
            float t;

            t = d_4512_3042[d_4512_1a30[team]] / 10.0;
            d_69da_de8d = t * t / 25000.0;
        } else
            d_69da_de8d = 0;
    } else
        d_69da_de8d = 0.01;
    if (team == d_69da_da60) {
        d_69da_db4c = d_69da_db62;
        if (f_1a70_2a20(d_69da_d996, d_69da_d9bc + 1) == 0)
            d_69da_de91 = f_2162_1390(f_2162_1324(
                1.07 - d_69da_dada / 1000.0
                - (f_1a70_268e(d_69da_d996, d_69da_d9bc + 1) || f_1a70_2737(d_69da_d996, d_69da_d9bc + 1)
                   || f_1a70_27c8(d_69da_d996, d_69da_d9bc + 1)) * 0.02
                + (f_1a70_2490(d_69da_d996) || f_1a70_24c5(d_69da_d996)) * 0.02,
                1.0), 1.11);
        else
            d_69da_de91 = 1.0;
        d_69da_de91 = (d_4512_0000[0][d_69da_da60] - 8.5) / 500.0 + d_69da_de8d + d_69da_de91;
        d_69da_de37 = d_69da_db44 == 1 ? -1 : 0;
        d_69da_db48 = d_69da_dad8 * d_69da_de91;
        d_69da_db3e = d_69da_db8e * d_69da_de91;
        d_69da_da2a = n * d_69da_de91;
        d_69da_db32 = d_69da_db90 * d_69da_de91;
        d_69da_db40 = d_69da_d9ee * d_69da_de91;
        d_69da_dd8a = d_69da_dd94;
    } else {
        d_69da_de91 = (d_4512_0000[0][d_69da_da62] - 8.5) / 500.0 + 1.0 + d_69da_de8d;
        d_69da_db4e = d_69da_db62;
        d_69da_de38 = d_69da_db44 == 1 ? -1 : 0;
        d_69da_db46 = d_69da_dad8 * d_69da_de91;
        d_69da_db36 = d_69da_db8e * d_69da_de91;
        d_69da_db28 = n * d_69da_de91;
        d_69da_db3a = d_69da_db90 * d_69da_de91;
        d_69da_db42 = d_69da_d9ee * d_69da_de91;
        d_69da_dd8c = d_69da_dd94;
    }
}

void f_8773_28ec(int team)
{
    char ok;

    d_69da_dba2 = f_1a70_2bc7(team) ? 12 : 10;
    d_69da_d9e0 = 0;
    for (d_69da_d9a0 = 0; d_69da_d9a0 <= d_69da_dba2; d_69da_d9a0++) {
        if (d_4512_5d98[team == d_69da_da62][d_69da_d9a0] < 2) {
            if (team > 79) {
                d_69da_d9f6 = d_4512_4726[team][0][d_69da_d9a0];
                d_69da_db80 = f_1a70_6856(d_69da_d9a0, team, d_69da_d9f6);
                ok = -1;
            } else if (f_1a70_2bc7(team) == 0) {
                if (!f_1a70_5b94(d_4512_549a[team][d_69da_d9a0]))
                    d_69da_db80 = f_1a70_6798(d_4512_549a[team][d_69da_d9a0],
                                              d_4512_4726[team][0][d_69da_d9a0]);
                else
                    d_69da_db80 = 1;
                ok = -1;
            } else {
                if (!f_1a70_5b94(d_4512_549a[team][d_69da_d9a0]))
                    d_69da_db80 = f_1a70_6798(d_4512_549a[team][d_69da_d9a0],
                                              d_4512_4726[team][0][d_69da_d9a0]);
                else
                    d_69da_db80 = 1;
                ok = d_4512_6378[d_4512_1a30[team] - 646] - 1 == d_69da_d9a0;
            }
            if (ok && d_69da_db80 > d_69da_d9e0) {
                d_69da_d9e0 = d_69da_db80;
                d_4512_5d92[team == d_69da_da62] = d_69da_d9a0 + 1;
                d_69da_da78 = d_69da_d9a0 + 1;
            }
        }
    }
    d_4512_5d92[team == d_69da_da62 ? 3 : 2] = d_69da_d9e0;
}

void f_8773_2af0(unsigned char a, unsigned char b, unsigned char c)
{
    int base;

    base = a * 3 + b + 57;
    for (d_69da_d9d2 = base; d_69da_d9d2 <= 119; d_69da_d9d2++)
        d_3668_e92e[c][d_69da_d9d2 - 60] += (d_69da_d9d2 - base) / 4;
}

void f_8773_2b5f(unsigned char a, unsigned char b, unsigned char c)
{
    int base;

    base = a * 3 + b + 57;
    for (d_69da_d9d2 = base; d_69da_d9d2 <= 119; d_69da_d9d2++)
        d_3668_e9e2[c][d_69da_d9d2 - 60] += (d_69da_d9d2 - base) / 4;
}

void f_8773_2bce(int team)
{
    float f;
    long v;

    switch (d_69da_da60 / 20) {
    case 1:
        f = 6.5;
        break;
    case 2:
    case 3:
        f = 6.0;
        break;
    default:
        f = 8.0;
    }
    v = f_2162_1367((long)(d_69da_df11 - d_4512_0052[d_69da_da60] * 1000
                                         / (f_1a70_68b6(d_69da_da60) * 4.0)), 0L) * f;
    if (f_1a70_2a20(d_69da_d996, d_69da_d9bc + 1))
        v = v / 2;
    else if (f_1a70_268e(d_69da_d996, d_69da_d9bc + 1) || f_1a70_2737(d_69da_d996, d_69da_d9bc + 1)
             || f_1a70_27c8(d_69da_d996, d_69da_d9bc + 1))
        v = team == d_69da_da62 ? 0 : v;
    else
        v = v * (team == d_69da_da62 ? 0.25 : 0.75);
    d_69da_dfae = f_2162_1634(d_69da_dff0, 1);
    (*d_69da_dfae)[team] += v;
}

void f_8773_2d57(void)
{
    int a, b, c, d, e, g;
    int s, t;
    int u;
    float r;

    d_5dbf_1290[d_69da_d9bc][0][d_69da_d996] = d_69da_daae * 32 + d_69da_db06 - d_69da_db0a;
    d_5dbf_1290[d_69da_d9bc][1][d_69da_d996] = d_69da_dab0 * 32 + d_69da_db08 - d_69da_db0c;
    if (d_69da_dddc != 0)
        d_4512_87bc[d_69da_d9bc] = d_69da_db0c > d_69da_db0a ? 2 : 1;
    a = (long)d_69da_daf4 * 100 / (d_69da_daf4 + d_69da_dafe);
    b = (long)d_69da_daf8 * 100 / (d_69da_daf8 + d_69da_dafa);
    c = (long)d_69da_dafc * 100 / (d_69da_dafc + d_69da_daf6);
    d = (long)d_69da_daf6 * 100 / (d_69da_daf6 + d_69da_dafc);
    e = (long)d_69da_dafa * 100 / (d_69da_daf8 + d_69da_dafa);
    g = (long)d_69da_dafe * 100 / (d_69da_dafe + d_69da_daf4);
    s = 0;
    d_69da_da80 = 0;
    for (d_69da_d9a0 = 0; d_69da_d9a0 <= 10; d_69da_d9a0++) {
        s = s + d_4512_740c[0][d_69da_d9a0];
        d_69da_da80 = d_69da_da80 + d_4512_740c[1][d_69da_d9a0];
    }
    t = d_69da_daf0 * 8 + a + b + c;
    u = d_69da_daf2 * 8 + d + e + g;
    t += (d_69da_db06 - d_69da_db0a) * 20
         + ((d_69da_db06 - d_69da_db0a) - (d_69da_db08 - d_69da_db0c)) * 8;
    u += (d_69da_db08 - d_69da_db0c) * 20
         + ((d_69da_db08 - d_69da_db0c) - (d_69da_db06 - d_69da_db0a)) * 8;
    r = (float)s / d_69da_da80 / ((float)t / u);
    if (r > 1)
        d_69da_de95 = r * 0.75 - 0.75;
    else
        d_69da_de95 = r * 4.5 - 3.0;
    d_28d8_0019 = 0;
    d_28d8_001d = -1;
    f_8773_303f(d_69da_da60, a, b, c, d_69da_daf0);
    f_8773_303f(d_69da_da62, d, e, g, d_69da_daf2);
}

void f_8773_303f(team, a, b, c, d)
int team, a, b, c;
register int d;
{
    char k;
    float f;
    float g;

    for (d_69da_d9a0 = 0; d_69da_d9a0 <= 13; d_69da_d9a0++) {
        if (team < 80)
            d_69da_d9ae = d_4512_549a[team][d_69da_d9a0];
        else
            d_69da_d9ae = d_4512_4726[team][0][d_69da_d9a0] + 1860;
        k = d_4512_5d98[team == d_69da_da62][d_69da_d9a0];
        d_69da_da9a = f_8773_39f3(d_69da_d9a0, team);
        if (k != 4 && d_69da_d9ae >= 0 && d_69da_d98e - 1 >= d_69da_d9ae) {
            if (f_1a70_2490(d_69da_d996)) {
                d_69da_dfba = f_2162_1634(d_69da_dff6, 1);
                d_69da_dfba[0][d_69da_d9ae] = d_28da_ad40[d_69da_d9ae];
            } else if (f_1a70_24c5(d_69da_d996)) {
                d_69da_dfba = f_2162_1634(d_69da_dff6, 1);
                d_69da_dfba[1][d_69da_d9ae] = d_28da_ad40[d_69da_d9ae];
            }
        }
        if (k != 4 && d_69da_da9a >= 5) {
            if (d_3668_e8da[team == d_69da_da62][d_69da_d9a0] == 0 || k == 0 || k == 1) {
                /* the fwait after this store is the one BCC writes before a label */
                if (1)
                    f = (team == d_69da_da60 ? d_4512_740c[0][d_69da_d9a0] - d_69da_de95
                         : d_4512_740c[1][d_69da_d9a0] + d_69da_de95) + 0.5;
                d_69da_dba4 = f;
                d_69da_dba4 = f_2162_13ba(f_2162_134e(1, d_69da_dba4), 10);
                d_3668_e8da[team == d_69da_da62][d_69da_d9a0] = d_69da_dba4;
            } else {
                f = d_3668_e8da[team == d_69da_da62][d_69da_d9a0];
                d_69da_dba4 = f;
            }
            d_69da_dba6 = team == d_69da_da60 ? d_536d_30a6[0][d_69da_d9a0] / 16
                          : d_536d_30a6[1][d_69da_d9a0] / 16;
            if (d_69da_dba6 > 0) {
                float t[3] = {0.5, 1.0, 2.0};

                f += t[f_2162_13ba(d_69da_dba6, 3) - 1];
                d_69da_dba4 = f;
                d_69da_dba4 = f_2162_13ba(f_2162_134e(1, d_69da_dba4), 10);
            }
            if ((char)f == (char)d_28d8_0019)
                g = f_2162_0da1(5) * 0.1;
            else
                g = 0;
            if (d_69da_dac0 == -1 && f + g > d_28d8_0019 && d_69da_da9a >= 20
                && d_4512_5d98[team == d_69da_da62][d_69da_d9a0] != 2) {
                d_536d_30fa.motm = team == d_69da_da60 ? d_69da_d9a0 + 1 : d_69da_d9a0 + 15;
                d_28d8_001d = d_69da_d9ae;
                d_28d8_0019 = f;
            }
            if (d_69da_dac0 == -1 && team < 80 && d_69da_d996 > 8 && !f_1a70_5b94(d_69da_d9ae)) {
                d_69da_dfa6 = f_2162_1634(d_69da_dfec, 1);
                d_69da_dfa6[0][d_69da_d9ae] += d_69da_dba4;
                d_69da_dfa6[2][d_69da_d9ae] += d_69da_dba4;
                d_3668_0000[22][d_69da_d9ae] += d_69da_dba4;
                if (d_3668_0000[3][d_69da_d9ae] > d_69da_dba4 || d_3668_0000[3][d_69da_d9ae] == 0)
                    d_3668_0000[3][d_69da_d9ae] = d_69da_dba4;
                if (d_3668_0000[4][d_69da_d9ae] < d_69da_dba4 || d_3668_0000[4][d_69da_d9ae] == 0)
                    d_3668_0000[4][d_69da_d9ae] = d_69da_dba4;
                d_3668_0000[0][d_69da_d9ae]++;
                d_3668_0000[12][d_69da_d9ae]++;
                d_3668_0000[21][d_69da_d9ae]++;
                if (d_69da_d996 > 8 && *(d_28da_2a78[21] + d_69da_d9ae) >= 80 && !d_4512_bdc8[d_69da_d9ae].f0)
                    d_28da_2a78[21][d_69da_d9ae] = f_2162_134e(0, *(d_28da_2a78[21] + d_69da_d9ae)
                        - f_2162_134e(abs(28 - d_28da_2a78[17][d_69da_d9ae]) / 2, 2) * (d_69da_da9a / 90));
                if (5 - team / 20 + (team > 59 ? 1 : 0) > d_69da_dba4)
                    d_4512_bdc8[d_69da_d9ae].f15 = 1;
                if (team == d_69da_da60) {
                    d_69da_dba6 = d_536d_30a6[0][d_69da_d9a0] / 16;
                    d_69da_da7a = d_69da_dab0;
                } else {
                    d_69da_dba6 = d_536d_30a6[1][d_69da_d9a0] / 16;
                    d_69da_da7a = d_69da_daae;
                }
                f_9c01_47c8(team, d_69da_da7a, d_69da_d9ae, d_69da_dba6);
            }
        } else {
            d_69da_da9a = 0;
            d_69da_dba4 = 0;
        }
        if (d_69da_dac0 == -1)
            f_b085_77f9(d_69da_d9ae, 5);
        if (team == d_69da_da60) {
            if (d_69da_d9a0 < 13 || f_1a70_5ea2(team, d_69da_d996, d_69da_d9bc + 1))
                d_536d_306e[0][d_69da_d9a0] = d_69da_d9ae;
            else
                d_536d_306e[0][d_69da_d9a0] = -1;
            d_536d_30c2[0][d_69da_d9a0] = d_69da_dba4;
            if (d_4512_5d98[team == d_69da_da62][d_69da_d9a0] == 2)
                d_536d_30de[0][d_69da_d9a0] = 1;
            else if (d_4512_5d98[team == d_69da_da62][d_69da_d9a0] == 3 ||
                     d_4512_5d98[team == d_69da_da62][d_69da_d9a0] == 6)
                d_536d_30de[0][d_69da_d9a0] = 2;
            else if (d_4512_5d98[team == d_69da_da62][d_69da_d9a0] == 1)
                d_536d_30de[0][d_69da_d9a0] = 3;
        }
        if (team == d_69da_da62) {
            if (d_69da_d9a0 < 13 || f_1a70_5ea2(team, d_69da_d996, d_69da_d9bc + 1))
                d_536d_306e[1][d_69da_d9a0] = d_69da_d9ae;
            else
                d_536d_306e[1][d_69da_d9a0] = -1;
            d_536d_30c2[1][d_69da_d9a0] = d_69da_dba4;
            if (d_4512_5d98[team == d_69da_da62][d_69da_d9a0] == 2)
                d_536d_30de[1][d_69da_d9a0] = 1;
            else if (d_4512_5d98[team == d_69da_da62][d_69da_d9a0] == 3 ||
                     d_4512_5d98[team == d_69da_da62][d_69da_d9a0] == 6)
                d_536d_30de[1][d_69da_d9a0] = 2;
            else if (d_4512_5d98[team == d_69da_da62][d_69da_d9a0] == 1)
                d_536d_30de[1][d_69da_d9a0] = 3;
        }
    }
    if (team == d_69da_da62 && d_69da_dac0 == -1 && d_28d8_001d >= 0
        && d_28d8_001d <= d_69da_d98e - 1 && d_69da_d996 >= 10) {
        d_69da_dfba = f_2162_1634(d_69da_dff6, 1);
        d_69da_dfba[3][d_28d8_001d]++;
    }
    d_536d_306a = d_69da_df11;
    if (team == d_69da_da60) {
        d_536d_30fa.def = a;
        d_536d_30fa.mid = b;
        d_536d_30fa.att = c;
        d_536d_30fa.shots_h = d;
        d_536d_30fa.capt_h = d_4512_5d92[0];
    } else {
        d_536d_30fa.shots_a = d;
        d_536d_30fa.capt_a = d_4512_5d92[1];
    }
}

int f_8773_39f3(int i, int team)
{
    unsigned char on;
    unsigned char off;
    int r;

    r = 0;
    on = d_4512_5dec[team == d_69da_da60 ? 0 : 1][i];
    off = d_4512_5e08[team == d_69da_da60 ? 0 : 1][i];
    if (i <= 10)
        on = 0;
    if (on < 255) {
        if (off == 255)
            r = d_69da_da98 - on;
        else
            r = off - on;
    }
    return r;
}

/* the match statistics screen (c: full time, else half time / so far) */
void f_8773_3a79(int a, int b, char c)
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
        f_1a70_5e32();
        if (c) {
            f_1a70_4a41("Match Statistics");
            if (d_536d_3066[1].home1 == 15 && d_536d_3066[1].away1 == 15) {
                d_69da_dba8 = d_536d_3066[0].home2;
                d_69da_dbaa = d_536d_3066[0].away2;
            } else {
                d_69da_dba8 = d_536d_3066[1].home1;
                d_69da_dbaa = d_536d_3066[1].away1;
            }
        } else {
            if (d_69da_da98 == 45)
                strcpy(s, "Half-time Stats");
            else
                sprintf(s, "Stats %d mins", d_69da_da98);
            f_1a70_4a41(s);
            d_69da_dba8 = d_69da_db06;
            d_69da_dbaa = d_69da_db08;
        }
        d_69da_df11 = d_536d_306a;
        h1 = d_536d_30fa.def;
        h2 = d_536d_30fa.mid;
        d_69da_db38 = d_536d_30fa.att;
        d_69da_daf0 = d_536d_30fa.shots_h;
        d_69da_daf2 = d_536d_30fa.shots_a;

        f_829f_22b0(a, a, b);
        strcpy(name1, f_2162_0e9b(f_1a70_3404(a)));
        sprintf(s, " %s ", name1);
        f_1a70_390f(1.25, 4.0, d_69da_da64, d_69da_d9da, 0, s);
        sprintf(s, " %d", d_69da_dba8);
        f_1a70_379b(17.5, 4.0, 1, s);

        f_829f_22b0(b, a, b);
        strcpy(name2, f_2162_0e9b(f_1a70_3404(b)));
        sprintf(s, " %s ", name2);
        f_1a70_390f(20.5, 4.0, d_69da_da64, d_69da_d9da, 0, s);
        sprintf(s, " %d", d_69da_dbaa);
        f_1a70_379b(36.75, 4.0, 1, s);

        if (c) {
            sprintf(d_536d_57cb, "HT %d-%d", d_536d_3066[0].home1, d_536d_3066[0].away1);
            sprintf(s, " %s ", d_536d_57cb);
            f_1a70_3554(1.125, 5.0, 1, 12, 0, s);
            if (d_536d_3066[1].home1 != 15 || d_536d_3066[1].away1 != 15) {
                x = d_536d_3066[0].home2;
                y = d_536d_3066[0].away2;
                sprintf(d_536d_57cb, "FT %d-%d", x, y);
                sprintf(s, " %s ", d_536d_57cb);
                f_1a70_3554(7.375, 5.0, 1, 12, 0, s);
                if (d_536d_3066[1].home2 != 15 || d_536d_3066[1].away2 != 15) {
                    sprintf(d_536d_57cb, "%d-%d PENS", d_536d_3066[1].home2 - d_69da_dba8,
                            d_536d_3066[1].away2 - d_69da_dbaa);
                    sprintf(s, " %s ", d_536d_57cb);
                    f_1a70_3554(13.625, 5.0, 1, 12, 0, s);
                }
            }
        }

        f_8773_3fea(-1, h1, h2, d_69da_db38, d_69da_daf0, 1.125);
        f_8773_3fea(0, 100 - d_69da_db38, 100 - h2, 100 - h1, d_69da_daf2, 20.375);
        strcpy(d_536d_52ad, "Attendance");
        sprintf(d_536d_52fd, "%7ld", d_69da_df11);
        sprintf(s, " %s     -%s", d_536d_52ad, d_536d_52fd);
        f_1a70_3554(1.125, 24.0, 1, 12, 150, s);
        f_1a70_5e46();

        if (d_69da_da98 == 45) {
            do {
                ok = -1;
                f_1a70_5688(2);
                if (strcmp(f_2162_0e9b(d_536d_6c01), "H") == 0 && d_69da_dae8 == 0) {
                    f_829f_3ff9(d_69da_da60, -1);
                    done = 0;
                } else if (strcmp(f_2162_0e9b(d_536d_6c01), "A") == 0 && d_69da_daec == 0) {
                    f_829f_3ff9(d_69da_da62, -1);
                    done = 0;
                } else if (d_536d_6c01[0] != 0)
                    ok = 0;
            } while (!ok);
        } else
            f_1a70_5688(0);
    } while (!done);
}

/* one team's column of the statistics screen: its players, their marks, ratings and
 * goals, then its strengths and attempts (a: home team, f: the column's x) */
void f_8773_3fea(char a, int b, int c, int d, int e, float f)
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
    d_69da_d9c0 = 0;
    y = 0;
    d_69da_d9a0 = 0;
    d_69da_d9c4 = 14;
    d_69da_d9d4 = 8;
    do {
        if (a) {
            d_69da_d9ae = d_536d_306e[0][d_69da_d9a0];
            d_69da_dba4 = d_536d_30c2[0][d_69da_d9a0];
            flag = d_536d_30de[0][d_69da_d9a0] == 1;
            d_69da_dde8 = d_536d_30de[0][d_69da_d9a0] == 2;
            booked = d_536d_30de[0][d_69da_d9a0] == 3;
            d_69da_db2c = d_536d_30a6[0][d_69da_d9a0] / 16;
            d_69da_db2e = d_536d_30a6[0][d_69da_d9a0] % 16;
            d_69da_ddd5 = d_69da_d9a0 + 1 == d_536d_30fa.capt_h;
            sub = d_69da_d9a0 + 1 == d_536d_30fa.motm;
        } else {
            d_69da_d9ae = d_536d_306e[1][d_69da_d9a0];
            d_69da_dba4 = d_536d_30c2[1][d_69da_d9a0];
            flag = d_536d_30de[1][d_69da_d9a0] == 1;
            d_69da_dde8 = d_536d_30de[1][d_69da_d9a0] == 2;
            booked = d_536d_30de[1][d_69da_d9a0] == 3;
            d_69da_db2c = d_536d_30a6[1][d_69da_d9a0] / 16;
            d_69da_db2e = d_536d_30a6[1][d_69da_d9a0] % 16;
            d_69da_ddd5 = d_69da_d9a0 + 1 == d_536d_30fa.capt_a;
            sub = d_69da_d9a0 + 15 == d_536d_30fa.motm;
        }
        if (f_1a70_5b94(d_69da_d9ae))
            n = 4;
        else
            n = d_69da_d9a0 > 10 ? 6 : 1;
        strcpy(d_536d_8319, "");
        if (flag)
            strcpy(d_536d_8319, "so");
        else if (d_69da_dde8)
            strcpy(d_536d_8319, "ij");
        else if (booked)
            strcpy(d_536d_8319, "bk");
        if (d_69da_ddd5)
            strcat(d_536d_8319, booked ? " c" : "c");
        strcpy(d_536d_6c03, "");
        if (d_69da_db2c > 0)
            sprintf(d_536d_6c03, "%d", d_69da_db2c);
        else if (d_69da_db2e > 0)
            sprintf(d_536d_6c03, "%d", d_69da_db2e);
        if (d_69da_d9ae == -1)
            strcpy(d_536d_57cb, "");
        else if (f_1a70_5b76(d_69da_d9ae) || f_1a70_5b94(d_69da_d9ae)) {
            strcpy(d_536d_52ad, f_1a70_46c1(d_69da_d9ae));
            if (strlen(d_536d_8319) == 0)
                d_69da_dab4 = 14;
            else
                d_69da_dab4 = 14 - (strlen(d_536d_8319) + 1);
            sprintf(d_536d_57cb, "%.*s", d_69da_dab4, d_536d_52ad);
        } else if (d_69da_d9ae >= 1861) {
            strcpy(d_536d_52ad, d_5dbf_0565[d_69da_d9ae - 1860]);
            if (d_69da_d9a0 > 10)
                sprintf(d_536d_52ad, "Substitute %c", d_69da_d9a0 + 54);
            strcpy(d_536d_57cb, d_536d_52ad);
        }
        sprintf(buf, " %s", f_1a70_2e4a(d_69da_d9a0 + 1, 1));
        if (d_69da_d9c4 == 14)
            fg = 9;
        else
            fg = 2;
        f_1a70_3554(f, d_69da_d9c0 + 6, 1, fg, 24, buf);
        sprintf(buf, " %s", d_536d_57cb);
        if (sub && d_69da_dac0 == -1)
            f_1a70_3554(f + 3.25, d_69da_d9c0 + 6, 0, 1, 92, buf);
        else
            f_1a70_3554(f + 3.25, d_69da_d9c0 + 6, n, d_69da_d9c4, 92, buf);
        f_1a70_344b(x0 + f_2162_13ba(strlen(d_536d_57cb), 11) * 6 + 48, -(y + 48),
                    d_69da_dde8 || flag ? 2 : 6, d_536d_8319);
        if (d_69da_dba4 > 0) {
            sprintf(d_536d_8369, "%2d", d_69da_dba4);
            sprintf(buf, " %s", d_536d_8369);
            f_1a70_3554(f + 15, -(d_69da_d9c0 + 6), 1, 3, 30, buf);
        } else
            f_1a70_3554(f + 15, -(d_69da_d9c0 + 6), 1, 3, 30, "  -");
        f_1a70_344b(x0 + strlen(d_536d_8369) * 6 + 136, -(y + 48),
                    d_69da_db2e > 0 && d_69da_db2c == 0 ? 4 : 6, d_536d_6c03);
        d_69da_d9c0++;
        y += 8;
        f_2162_13fc(&d_69da_d9c4, &d_69da_d9d4, 2);
        d_69da_d9a0++;
    } while (d_69da_d9a0 != 14);
    sprintf(buf, " Defence        -    %d%%", b);
    f_1a70_3554(f, 20.0, 1, 4, 150, buf);
    sprintf(buf, " Midfield       -    %d%%", c);
    f_1a70_3554(f, 21.0, 1, 4, 150, buf);
    sprintf(buf, " Attack         -    %d%%", d);
    f_1a70_3554(f, 22.0, 1, 4, 150, buf);
    sprintf(buf, " Attempts       -    %d", e);
    f_1a70_3554(f, 23.0, 1, 4, 150, buf);
}
