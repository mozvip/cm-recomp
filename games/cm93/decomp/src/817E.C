/* @at 817e:0000 */
/* @data 60ae:24be */
/* @module */

/* Overlay 4: the match engine's events: goals and their commentary, disallowed goals,
 * penalties and shoot-outs, the score bar and attempts, team strengths and player
 * ratings during the match, the result, and the match statistics screen. CM93's version
 * of CM1's 7A28.C. */
#include <stdio.h>
#include <string.h>
#include <mem.h>
#include <stdlib.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_817e_0000(int a, int b, int c, int d);
void f_817e_00ea(void);
void f_817e_019a(int minute);
void f_817e_0239(int team);
void f_817e_030a(void);
void f_817e_0371(int a, char c, char d, char e, int b, int team);
void f_817e_0799(char c);
void f_817e_0ada(void);
void f_817e_0bfb(int team, char far *s);
void f_817e_0c86(void);
void f_817e_0ca3(int team);
void f_817e_0ef8(void);
char f_817e_109f(int a, int b, int na, int nb, int n);
void f_817e_10d3(int team);
void f_817e_11f4(int team, int chance, int shootout);
void f_817e_160e(int team);
unsigned char f_817e_1709(int p, int team);
void f_817e_1b3e(int team);
void f_817e_2b51(int team);
void f_817e_2d5c(unsigned char a, unsigned char b, unsigned char c);
void f_817e_2dd0(unsigned char a, unsigned char b, unsigned char c);
void f_817e_2e44(int team);
void f_817e_2fde(void);
void f_817e_32e0();             /* no prototype: 2b9b passes it words, it reads bytes */
int f_817e_3cc9(int i, int team);
void f_817e_3d44(int a, int b, char c);
void f_817e_43a6(char a, int b, int c, int d, int e, float f);

void f_1bd3_08cb(int c);
void f_1bd3_08e1(int x1, int y1, int x2, int y2);
void f_1bd3_08d6(int c);
void f_1bd3_0928(int x1, int y1, int x2, int y2);
void f_1bd3_0821(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_1bd3_0b10(int on);
void f_1bd3_099d(int a);
void f_1bd3_09e9(int x, int y, char far *s);
char far *f_1bd3_0e5e(char far *s);
void f_1bd3_0dbc(int ticks);
long f_1bd3_0d69(long n);
void f_14bc_356a(int x, int y, int colour, char far *s);
void f_14bc_3c75(float x, float y, int colour, char far *s);
void f_14bc_3e40(float x, float y, int a, int b, int c, char far *s);
char far *f_14bc_483d(int player);
char far *f_14bc_2f2c(int x, char c);
char f_14bc_5e32(int player);
void f_14bc_4bd3(char far *title);
void f_ad38_8047(int player, char c);
void f_b628_41ed(char team);
void f_7c74_2408(int a, int b, int c);
void f_7c74_2eb3(void);
void f_7c74_49bd(float x, float y);
struct flags { unsigned f0 : 1; unsigned : 15; unsigned char b; unsigned char c; };
extern char near *d_60ae_b572[];
extern char d_60ae_d8fb;
extern char d_60ae_d8fc;
extern char d_60ae_d94c;
extern char d_60ae_d973;
extern int d_60ae_dbbe;
extern int d_60ae_dc2a;
extern int d_60ae_dc2c;
extern int d_60ae_dc2e;
extern int d_60ae_dc30;
extern int d_60ae_dc40;
extern int d_60ae_dc42;
extern int d_60ae_dc6e;
extern int d_60ae_dc70;
extern int d_60ae_dc82;
extern int d_60ae_dc84;
extern int d_60ae_dc9a;
extern int d_60ae_dcb8;
extern int d_60ae_dcc8;
extern int d_60ae_dcca;
extern int d_60ae_dcce;
extern int d_60ae_dcd0;
extern int d_60ae_dcd2;
extern int d_60ae_dd58;
extern int d_60ae_dd60;
extern int d_60ae_dd9c;
extern struct flags d_60ae_ddbe[];
extern char far d_2289_39b4[];
extern char far d_2289_3b44[];
extern char far d_2289_3b94[];
extern char far d_2289_3be4[];
extern char far d_2289_4278[];
extern char far d_2289_4368[];
extern char far d_2289_43b8[];
extern unsigned char far d_2289_742c[][14];
extern int far d_323f_0592[][14];
extern unsigned char far d_323f_618a[];
extern unsigned char far d_3c35_0000[][1860];
extern unsigned char far d_471b_0000[][1860];
char far *f_14bc_4703(int player);
char far *f_14bc_48b4(int player);
char f_14bc_2594(int);
char f_14bc_25c5(int);
char f_14bc_2784(int, int);
char f_14bc_2835(int, int);
char f_14bc_28cc(int, int);
char f_14bc_2cc0(int x);
char f_14bc_5e18(int player);
int f_7c74_3123(int team, int p);
int f_b628_364f(int player);
extern char d_60ae_d8fd;
extern char d_60ae_d949;
extern char d_60ae_d94a;
extern char d_60ae_d953;
extern char d_60ae_d957;
extern char d_60ae_d960;
extern unsigned char d_60ae_d98a;
extern unsigned char d_60ae_d98b;
extern int d_60ae_d9a0;
extern int d_60ae_d9a2;
extern int d_60ae_d9a4;
extern int d_60ae_dbb4;
extern int d_60ae_dbb6;
extern int d_60ae_dbb8;
extern int d_60ae_dbba;
extern int d_60ae_dbdc;
extern int d_60ae_dbe8;
extern int d_60ae_dbea;
extern int d_60ae_dbec;
extern int d_60ae_dc26;
extern int d_60ae_dc28;
extern int d_60ae_dcc4;
extern int d_60ae_dd44;
extern int d_60ae_dd5a;
extern int d_60ae_dd76;
extern int d_60ae_dd84;
extern int d_60ae_dd92;
extern char far d_2289_3914[];
extern char far d_2289_3964[];
extern char far d_2289_4cfa[];
extern float far d_2289_ea00[];
extern unsigned char far d_323f_0538[][14];
float f_1bd3_12df(float a, float b);
int f_1bd3_1307(int a, int b);
float f_1bd3_1341(float a, float b);
int f_14bc_1fc3(int a, int b, int c);
int f_14bc_2450(unsigned char a);
char f_14bc_2b27(int a, int b);
unsigned char f_14bc_5e7d(int player, unsigned char a);
extern float d_60ae_d89f;
extern float d_60ae_d8a3;
extern float d_60ae_d8a7;
extern float d_60ae_d8ab;
extern char d_60ae_d913;
extern unsigned char d_60ae_d988;
extern unsigned char d_60ae_d989;
extern int d_60ae_d99c;
extern int d_60ae_d99e;
extern int d_60ae_d9a6;
extern int d_60ae_d9a8;
extern int d_60ae_da56;
extern int d_60ae_db92;
extern int d_60ae_db94;
extern int d_60ae_db96;
extern int d_60ae_db98;
extern int d_60ae_db9a;
extern int d_60ae_db9c;
extern int d_60ae_db9e;
extern int d_60ae_dba0;
extern int d_60ae_dba2;
extern int d_60ae_dba4;
extern int d_60ae_dba6;
extern int d_60ae_dba8;
extern int d_60ae_dbaa;
extern int d_60ae_dbac;
extern int d_60ae_dbae;
extern int d_60ae_dbb0;
extern int d_60ae_dbb2;
extern int d_60ae_dbd0;
extern int d_60ae_dbe4;
extern int d_60ae_dbe6;
extern int d_60ae_dbee;
extern int d_60ae_dbf0;
extern int d_60ae_dbf2;
extern int d_60ae_dbf4;
extern int d_60ae_dbf8;
extern int d_60ae_dbfc;
extern int d_60ae_dc00;
extern int d_60ae_dc0a;
extern int d_60ae_dc1a;
extern int d_60ae_dc58;
extern int d_60ae_dc5a;
extern int d_60ae_dcac;
extern int d_60ae_dd08;
extern float far d_2289_ea08[][14];
extern unsigned char far d_323f_0554[][14];
extern unsigned char far d_323f_058e[];
extern unsigned char far d_323f_0e8a[][3][14];
extern unsigned char far d_323f_23a6[];
extern unsigned char far d_323f_2630[];
extern unsigned char far d_323f_28ba[];
extern unsigned char far d_323f_2b44[];
extern int far d_323f_47b4[];
extern int far d_323f_4854[];
extern unsigned char far d_323f_4c14[][82];
extern unsigned char far d_323f_6324[][60];
extern unsigned char far d_323f_63d8[][60];
extern unsigned char far d_323f_648c[][14];
extern unsigned char far d_323f_6529[][3];
extern unsigned char far d_54d9_08a0[][10];
int f_14bc_6ab9(int a, int b, int c);
double f_14bc_69fd(int x, int y);
float f_14bc_6b14(int x);
long f_1bd3_131c(long a, long b);
void far *f_1bd3_1617(int handle, int page);
extern long d_60ae_d81f;
extern float d_60ae_d89b;
extern int d_60ae_db90;
extern int d_60ae_dc34;
extern int d_60ae_dc36;
extern int d_60ae_dc38;
extern int d_60ae_dc3a;
extern int d_60ae_dc3c;
extern int d_60ae_dc3e;
extern int d_60ae_dcb2;
extern int d_60ae_dcba;
extern int d_60ae_dd3c;
extern int d_60ae_dd52;
extern int d_60ae_fde2;
extern long (far *d_60ae_fade)[80];
extern int far d_2287_0010;
extern float far d_2287_0012;
extern int far d_2289_d678[];
extern unsigned char far d_2289_f882[];
extern unsigned char far d_323f_058c[];
extern unsigned char far d_323f_4c66[];
extern unsigned char far d_323f_62e8[][60];
extern unsigned char far d_323f_639c[][60];
extern int far d_54d9_11fe[][2][98];
void f_8683_3924(void);
void f_1bd3_0c31(int a);
void f_a694_22e9(char far *title);
extern int d_60ae_dbbc;
extern char far d_2289_4212[];
extern char far d_2289_4262[];
extern char far d_2289_42b2[];
extern char far d_2289_4302[];
extern char far d_2289_4352[];
extern char far d_2289_4716[];
extern char far d_2289_4806[];
extern char far d_2289_4856[];
extern char far d_2289_4a26[][13];
extern unsigned char huge unmapped_d_3e42_0000[][1702];
extern char far d_2289_4172[];
extern char far d_2289_41c2[];
extern char far d_2289_51b6[];
extern unsigned char far unmapped_d_2f3c_2d0b[][13];
extern int far unmapped_d_2f3c_2d59[][13];
extern unsigned char huge unmapped_d_483b_0000[][1702];
extern float d_60ae_fad6[];
extern int d_60ae_faee[];
extern unsigned char far unmapped_d_2f3c_2d25[][13];
extern unsigned char far unmapped_d_2f3c_35ad[][3][13];
extern int far unmapped_d_2f3c_7f93[];
extern int far unmapped_d_2f3c_8033[];
extern unsigned char far unmapped_d_2f3c_5905[];
extern unsigned char far unmapped_d_2f3c_60a3[];
extern unsigned char far unmapped_d_2f3c_5b8f[];
extern unsigned char far unmapped_d_2f3c_855b[][13];
extern float far unmapped_d_2f3c_1bec[][13];
extern unsigned char far unmapped_d_5471_2c14[][10];
extern unsigned char d_60ae_dd7e[][2];
extern unsigned char far unmapped_d_2f3c_84a7[][60];
extern unsigned char far unmapped_d_2f3c_83f3[][60];
extern unsigned char far unmapped_d_2f3c_5e19[];
extern unsigned char d_60ae_db89[];
extern int d_60ae_faea[];
extern unsigned char far unmapped_d_2f3c_846b[][60];
extern unsigned char far unmapped_d_2f3c_83b7[][60];
extern int far d_323f_11fe[][2][94];
extern int far unmapped_d_2f3c_1534[];
int f_1bd3_1369(int a, int b);
void f_96bb_4b70(int team, int a, int player, int b);
extern int d_60ae_db8e;
extern int d_60ae_db8c;
extern int d_60ae_dc72;
extern unsigned char d_60ae_dd82[][2];
extern int far unmapped_d_2f3c_8575[][13];
extern int far unmapped_d_2f3c_85f7[];
extern char far d_2289_5be8[][0x6a6];
extern char far d_2289_49f2[][13][2];
extern char far d_2289_4a40[][13];
extern char far d_2289_4a5a[][13];
extern char far d_2289_49ee[];
extern char far d_2289_4a74[];
char far *f_14bc_3523(int x);
void f_14bc_3672(float x, float y, int bg, int fg, int w, char far *s);
void f_14bc_38bc(float x, float y, int colour, char far *s);
void f_14bc_3a36(float x, float y, int bg, int fg, int w, char far *s);
void f_7c74_42ef(int team, char c);
void f_14bc_50f8(int a, float x, float y, int c, int d, int e, char far *s);
void f_14bc_589c(int team);
int f_14bc_5635(int a);
void f_14bc_548f(int a, char b);
void f_14bc_58db(int a);
void unmapped_f_992a_0ce6(void);
extern int d_60ae_fde0;
extern char far *d_60ae_faf2;
extern int d_60ae_db8a;
extern int d_60ae_db88;
extern int d_60ae_dbfa;
extern char d_60ae_d97d;
extern int d_60ae_dd56;
extern int d_60ae_dda0;
extern int d_60ae_dc4a;
extern int d_60ae_dc46;
extern char far d_2289_49e6[];
extern char far d_2289_4170[];
extern char far d_2289_56d4[];
extern char far d_2289_5684[];
void f_1bd3_13a3(void far *a, void far *b, int n);
extern int d_60ae_dd72;
extern int d_60ae_dd6e;
extern int d_60ae_dd5e;
extern int d_60ae_dc06;
extern int d_60ae_dc7e;
extern char d_60ae_d94b;
extern char d_60ae_d95e;
extern signed char far d_2289_4a79;
extern signed char far d_2289_4a7a;
extern char far d_2289_4120[];
extern char far * far unmapped_d_5471_17c4[];
struct matchstats { /* the match record's ratings and counts */ unsigned def : 7; /* the three ratings shown on the stats screen */ unsigned mid : 7; unsigned att : 7; unsigned shots_h : 6; /* attempts */ unsigned shots_a : 6; unsigned capt_h : 4; /* the captains' shirt numbers */ unsigned capt_a : 4; unsigned motm : 6; /* the man of the match: 1-14 home, 15-28 away */ };
extern unsigned char far d_323f_0500[][14];
extern unsigned char far d_323f_051c[][14];
extern int far d_323f_64a8[][14];
extern int far d_2289_73f4[][14];
extern unsigned char far d_2289_7448[][14];
extern unsigned char far d_2289_7464[][14];
extern long far d_2289_73f0;
extern struct matchstats far d_2289_7480;
extern unsigned char far d_471b_82c8[];
extern unsigned char (far *d_60ae_fad2)[1860];
extern int (far *d_60ae_fae6)[1860];
extern int d_60ae_fddc;
extern int d_60ae_fde6;
extern int d_60ae_dda4;
extern int d_60ae_dc98;
extern unsigned char d_60ae_ddbf[][4];
char f_14bc_612e(char team, char week, char n);
void f_14bc_60ca(void);
void f_14bc_60da(void);
struct score { unsigned home : 4; unsigned away : 4; };
extern struct score far d_2289_73ec[];
extern char far * far d_54d9_04d2[];
extern char far d_2289_215c[];
extern char far d_2289_21ac[];
extern char far d_2289_38c2[];
extern char far d_2289_3912[];
extern char far d_2289_51c8[];
extern char far d_2289_5218[];
extern int d_60ae_dc04;

/* the goal commentary: how the ball went in, where it went, and the pairs (verb, place)
 * that do not go together, ended by -1. A '*' is replaced by the keeper's name. */
static char far *d_60ae_24be[] = {
    "Tapped", "Volleyed", "Headed", "Guided", "Placed", "Side footed", "Driven", "Curled",
    "Chipped", "Thundered", "Flicked", "Lashed", "Hooked", "Scrambled", "Rifled",
    "Hammered", "Glorious strike", "Smashed", "Powered", "Downward header",
    "Bullet header", "Looping header", "Forced", "Rammed", "Despatched",
    "Hit ferociously", "Thumped", "Slotted", "Buried", "Bundled", "Hit first time",
    "Calmly placed", "Clinical strike", "Crashed"
};
static char far *d_60ae_2546[] = {
    "past*", "into the net", "into the corner", "into the top corner", "in off a post",
    "in off the bar", "in beyond*", "through a crowd", "under*", "home",
    "into the open net"
};
static char d_60ae_2572[] = {
    0, 3, 0, 5, 0, 7, 3, 7, 4, 7, 4, 9, 7, 7, 7, 8, 7, 9, 8, 7, 8, 8, 8, 9, 10, 7, 13, 3,
    16, 8, 16, 9, 19, 7, 19, 8, 19, 9, 20, 7, 20, 8, 20, 9, 21, 7, 21, 8, 21, 9, 22, 3,
    24, 9, 25, 9, 27, 3, 27, 4, 27, 5, 27, 7, 29, 3, 30, 3, 31, 7, 31, 9, 32, 7, 32, 9,
    33, 8, -1
};

void f_817e_0000(int a, int b, int c, int d)
{
    int t1, t2;

    t1 = b * 38 / (a + b);
    t2 = 38 - t1;
    f_1bd3_08cb(16);
    f_1bd3_08e1(c * 36 + 24, 139, c * 36 + 31, 177 - t2);
    f_1bd3_08e1(d * 36 + 168, 139, d * 36 + 175, 177 - t1);
    f_1bd3_08cb(28);
    f_1bd3_08e1(c * 36 + 24, t1 + 139, c * 36 + 31, 177);
    f_1bd3_08e1(d * 36 + 168, t2 + 139, d * 36 + 175, 177);
}

void f_817e_00ea(void)
{
    f_1bd3_08cb(28);
    f_1bd3_08e1(224, 14, 306, 42);
    f_1bd3_08cb(16);
    f_1bd3_08e1(226, 16, 304, 40);
    f_1bd3_08d6(22);
    f_1bd3_0928(222, 12, 308, 44);
    f_1bd3_08d6(24);
    f_1bd3_0928(260, 18, 290, 36);
    f_14bc_356a(240, 30, 6, "TIME");
    f_817e_019a(d_60ae_dc9a);
}

void f_817e_019a(int minute)
{
    char buf[80];

    if (d_60ae_d94c)
        sprintf(buf, "Inj");
    else
        sprintf(buf, "%03d", minute);
    f_1bd3_08cb(16);
    f_1bd3_08e1(261, 19, 289, 35);
    f_1bd3_0b10(0);
    if (d_60ae_dbbe != 2)
        f_1bd3_099d(2);
    f_1bd3_08d6(18);
    f_1bd3_09e9(264, 34, buf);
    f_1bd3_0b10(1);
}

void f_817e_0239(int team)
{
    char buf[320];

    if (d_60ae_dc70 + d_60ae_dc6e > 0) {
        if (team == d_60ae_dcd2)
            d_60ae_dcb8 = d_60ae_dcd0;
        else
            d_60ae_dcb8 = d_60ae_dcd2;
        f_817e_0ca3(d_60ae_dcb8);
        sprintf(buf, "%s for %s!", d_2289_3be4, (char far *)d_60ae_b572[team]);
        f_817e_0bfb(team, buf);
        f_1bd3_0dbc(100);
        sprintf(buf, "%s %s", d_2289_3b94, d_2289_3b44);
        f_817e_0bfb(team, buf);
        f_1bd3_0dbc(100);
        f_b628_41ed(team);
        f_817e_0bfb(d_60ae_dcd2, d_2289_4278);
    }
}

void f_817e_030a(void)
{
    int team;
    char buf[320];

    if (d_60ae_dc2a > d_60ae_dcca) {
        team = d_60ae_dcd0;
        d_60ae_dc2e = 1;
    }
    if (d_60ae_dc2a < d_60ae_dcca) {
        team = d_60ae_dcd2;
        d_60ae_dc30 = 1;
    }
    if (d_60ae_dc70 + d_60ae_dc6e > 0) {
        sprintf(buf, "%s win on away goals!", (char far *)d_60ae_b572[team]);
        f_817e_0bfb(team, buf);
    }
}

void f_817e_0371(a, c, d, e, b, team)
int a; char c, d, e; int b; register int team;   /* old-style: team in SI, b in DI */
{
    char buf[320];

    if (team < 80 && !f_14bc_5e32(a) && d == 0) {
        if (d_60ae_dd9c > 8) {
            unsigned char other = team == d_60ae_dcd2 ? d_60ae_dcd0 : d_60ae_dcd2;

            d_3c35_0000[1][a]++;
            d_3c35_0000[13][a]++;
            if (other < 80) {
                int keeper = d_323f_0592[other][0];

                if (!f_14bc_5e32(keeper) && d_60ae_ddbe[keeper].f0)
                    d_471b_0000[1][keeper]++;
            }
        }
        f_ad38_8047(a, 1);
    }
    if (team < 80 && d != 0 && d_60ae_dd9c >= 10)
        d_323f_618a[team]++;
    if (d_60ae_dc70 + d_60ae_dc6e > 0) {
        if (d != 0) {
            char k;
            char own = 1;

            d_60ae_dcb8 = team == d_60ae_dcd2 ? d_60ae_dcd0 : d_60ae_dcd2;
            sprintf(buf, "Goal for %s!", (char far *)d_60ae_b572[team]);
            f_817e_0bfb(team, buf);
            f_1bd3_0dbc(100);
            k = f_1bd3_0d69(5);
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
            k = f_1bd3_0d69(2);
            if (d_60ae_d8fc == 0 && team == d_60ae_dcd0 || d_60ae_d8fb == 0 && team == d_60ae_dcd2)
                own = 0;
            if (k == 0 && own == 1)
                strcat(buf, " past his own 'keeper!");
            else
                strcat(buf, " into his own net!");
            f_817e_0bfb(d_60ae_dcb8, buf);
            f_1bd3_0dbc(100);
            if (d_60ae_dcb8 < 80)
                sprintf(buf, "Own goal by %s", f_14bc_483d(a));
            else
                sprintf(buf, "Own goal by their No.%s", f_14bc_2f2c(b + 1, 0));
            f_817e_0bfb(d_60ae_dcb8, buf);
            0;      /* code-free: keeps the call out of the tail BCC merges with the other branch */
            f_1bd3_0dbc(100);
            f_817e_0bfb(d_60ae_dcd2, d_2289_4278);
        } else if (c == 0 && e == 0) {
            if (team == d_60ae_dcd2)
                d_60ae_dcb8 = d_60ae_dcd0;
            else
                d_60ae_dcb8 = d_60ae_dcd2;
            f_817e_0ca3(d_60ae_dcb8);
            sprintf(buf, "%s for %s!", d_2289_3be4, (char far *)d_60ae_b572[team]);
            f_817e_0bfb(team, buf);
            f_1bd3_0dbc(100);
            sprintf(buf, "%s %s", d_2289_3b94, d_2289_3b44);
            f_817e_0bfb(team, buf);
            f_1bd3_0dbc(100);
            if (team < 80)
                sprintf(buf, "Scored by %s", f_14bc_483d(a));
            else
                sprintf(buf, "Scored by their No.%s", f_14bc_2f2c(b + 1, 0));
            f_817e_0bfb(team, buf);
            f_1bd3_0dbc(100);
            f_817e_0bfb(d_60ae_dcd2, d_2289_4278);
        }
        f_817e_0ada();
    }
    if (d == 0) {
        if (team == d_60ae_dcd2) {
            d_2289_742c[0][b] += 16;
            if (d_2289_742c[0][b] / 16 == 3 && team < 80) {
                sprintf(buf, "%04d", a);
                strcat(d_2289_39b4, buf);
            }
        } else {
            d_2289_742c[1][b] += 16;
            if (d_2289_742c[1][b] / 16 == 3 && team < 80) {
                sprintf(buf, "%04d", a);
                strcat(d_2289_39b4, buf);
            }
        }
    } else if (d != 0) {
        if (team == d_60ae_dcd2)
            d_2289_742c[1][b]++;
        else
            d_2289_742c[0][b]++;
    }
    f_7c74_2eb3();
}

void f_817e_0799(char c)
{
    char buf[320];

    f_7c74_2408(d_60ae_dc84, d_60ae_dc84, d_60ae_dc82);
    f_14bc_4bd3("");
    if (strlen(d_2289_4368) + 5 <= 19)
        sprintf(buf, " %s from", d_2289_4368);
    else
        sprintf(buf, " %s", d_2289_4368);
    f_14bc_3e40(3.0, 2.0, -d_60ae_dcce, d_60ae_dd58, 165, buf);
    sprintf(buf, " %s", d_2289_43b8);
    f_14bc_3e40(3.0, 4.5, -d_60ae_dcce, d_60ae_dd58, 165, buf);
    f_817e_00ea();
    f_817e_0bfb(d_60ae_dcd2, d_2289_4278);
    sprintf(buf, " %s ", f_1bd3_0e5e(d_60ae_b572[d_60ae_dcd2]));
    f_14bc_3e40(3.0, 12.0, -d_60ae_dcce, d_60ae_dd58, 0, buf);
    f_7c74_2408(d_60ae_dc82, d_60ae_dc84, d_60ae_dc82);
    sprintf(buf, " %s ", f_1bd3_0e5e(d_60ae_b572[d_60ae_dcd0]));
    f_14bc_3e40(21.0, 12.0, -d_60ae_dcce, d_60ae_dd58, 0, buf);
    f_817e_0ada();
    f_14bc_356a(30, 132, 1, "CHANCES :");
    sprintf(buf, "%d", d_60ae_dc42);
    f_14bc_356a(96, 132, 5, buf);
    f_14bc_356a(174, 132, 1, "CHANCES :");
    sprintf(buf, "%d", d_60ae_dc40);
    f_14bc_356a(240, 132, 5, buf);
    f_1bd3_08d6(17);
    for (d_60ae_dd60 = 0; d_60ae_dd60 <= 2; d_60ae_dd60++) {
        f_1bd3_0928(d_60ae_dd60 * 36 + 23, 138, d_60ae_dd60 * 36 + 32, 178);
        f_1bd3_0928(d_60ae_dd60 * 36 + 167, 138, d_60ae_dd60 * 36 + 176, 178);
    }
    f_14bc_356a(28, 188, 6, "DEF   MID   ATT         DEF   MID   ATT");
    if (c == 1)
        f_7c74_49bd(3.5, 21.5);
    else if (c == 2)
        f_7c74_49bd(21.5, 3.5);
}

void f_817e_0ada(void)
{
    char buf[320];

    f_1bd3_0821(134, 91, 153, 106);
    f_1bd3_0821(278, 91, 297, 106);
    sprintf(buf, "%d", d_60ae_dc2c);
    f_14bc_3c75(18.0, 12.0, 1, buf);
    sprintf(buf, "%d", d_60ae_dc2a);
    f_14bc_3c75(36.0, 12.0, 1, buf);
    if (d_60ae_d973 != 0) {
        f_1bd3_0821(223, 46, 277, 52);
        sprintf(buf, "AGG %d-%d", d_60ae_dc2c + d_60ae_dcca, d_60ae_dc2a + d_60ae_dcc8);
        f_14bc_356a(232, 52, 3, buf);
    }
}

void f_817e_0bfb(int team, char far *s)
{
    char buf[320];

    if (team == d_60ae_dcd2)
        f_7c74_2408(d_60ae_dc84, d_60ae_dc84, d_60ae_dc82);
    else
        f_7c74_2408(d_60ae_dc82, d_60ae_dc84, d_60ae_dc82);
    f_817e_0c86();
    sprintf(buf, " %s ", s);
    f_14bc_3e40(3.0, 8.5, -d_60ae_dcce, d_60ae_dd58, 0, buf);
}

void f_817e_0c86(void)
{
    f_1bd3_0821(0x10, 0x38, 0x138, 0x50);
}

void f_817e_0ca3(int team)
{
    int a;
    int w;
    char buf[40];
    int i;
    int b;
    int v;

    do {
        d_60ae_d960 = -1;
        a = f_1bd3_0d69(34);
        if ((d_60ae_d8fc == 0 && team == d_60ae_dcd2) ||
            (d_60ae_d8fb == 0 && team == d_60ae_dcd0))
            b = 10;
        else
            do {
                b = f_1bd3_0d69(10);
            } while (f_1bd3_0d69(3) && b >= 3 && b <= 5);
        i = 0;
        do {
            v = d_60ae_2572[i++];
            if (v != -1) {
                w = d_60ae_2572[i++];
                if (a == v && b == w) {
                    d_60ae_d960 = 0;
                    v = -1;
                }
            }
        } while (v != -1);
        if (d_60ae_d960 != 0) {
            strcpy(d_2289_3b94, d_60ae_24be[a]);
            strcpy(d_2289_3b44, d_60ae_2546[b]);
            if (d_2289_3b44[strlen(d_2289_3b44) - 1] == '*') {
                if (team < 80)
                    strcpy(buf, f_14bc_48b4(d_323f_0592[team][0]));
                else
                    strcpy(buf, "their 'keeper");
                d_2289_3b44[strlen(d_2289_3b44) - 1] = ' ';
                strcat(d_2289_3b44, buf);
            }
            if (strlen(d_2289_3b94) + strlen(d_2289_3b44) > 32)
                d_60ae_d960 = 0;
        }
    } while (!d_60ae_d960);
    if (b < 10) {
        d_60ae_d94a = -1;
        switch (a) {
        case 0: case 5: case 12: case 13: case 22: case 29:
            d_60ae_d94a = 0;
            d_60ae_d8fd = 0;
        }
        if (d_60ae_d8fd)
            strcpy(d_2289_3be4, "Magnificent goal");
        else if (d_60ae_d94a && (!f_1bd3_0d69(5) || a == 16)) {
            if (f_1bd3_0d69(2) == 0)
                strcpy(d_2289_3be4, "Brilliant goal");
            else
                strcpy(d_2289_3be4, "Superb goal");
        } else
            strcpy(d_2289_3be4, "Goal");
    }
}

void f_817e_0ef8(void)
{
    if (d_60ae_dc70 + d_60ae_dc6e > 0)
        f_817e_0bfb(d_60ae_dcd2, d_2289_4278);
    d_60ae_dbba = 1;
    d_60ae_d9a4 = 0;
    d_60ae_d9a2 = 0;
    d_60ae_d9a0 = 5;
    while (f_817e_109f(d_60ae_dc28, d_60ae_dc26, d_60ae_d9a4, d_60ae_d9a2, d_60ae_d9a0) == 0) {
        f_817e_11f4(d_60ae_dcd2, d_60ae_dbec, 1);
        d_60ae_d9a4++;
        if (d_60ae_d953) {
            d_60ae_dc28++;
            d_60ae_dc2c++;
            if (d_60ae_dc70 + d_60ae_dc6e > 0)
                f_817e_0ada();
        }
        if (f_817e_109f(d_60ae_dc28, d_60ae_dc26, d_60ae_d9a4, d_60ae_d9a2, d_60ae_d9a0) == 0) {
            f_817e_11f4(d_60ae_dcd0, d_60ae_dbea, 1);
            d_60ae_d9a2++;
            if (d_60ae_d953) {
                d_60ae_dc26++;
                d_60ae_dc2a++;
                if (d_60ae_dc70 + d_60ae_dc6e > 0)
                    f_817e_0ada();
            }
        }
        if (d_60ae_dc28 == d_60ae_dc26 && d_60ae_d9a4 == d_60ae_d9a0)
            d_60ae_d9a0++;
    }
    if (d_60ae_dc70 + d_60ae_dc6e > 0) {
        d_60ae_dd5a = d_60ae_dc28 > d_60ae_dc26 ? d_60ae_dcd2 : d_60ae_dcd0;
        sprintf(d_2289_4cfa, "%s win the match! ", (char far *)d_60ae_b572[d_60ae_dd5a]);
        f_817e_0bfb(d_60ae_dd5a, d_2289_4cfa);
    }
    for (d_60ae_dd60 = 0; d_60ae_dd60 <= 13; d_60ae_dd60++)
        for (d_60ae_dd92 = 0; d_60ae_dd92 <= 1; d_60ae_dd92++)
            if (d_323f_0538[d_60ae_dd92][d_60ae_dd60] == 7)
                d_323f_0538[d_60ae_dd92][d_60ae_dd60] = 0;
}

char f_817e_109f(int a, int b, int na, int nb, int n)
{
    if (a != b) {
        if (a + (n - na) < b)
            return -1;
        if (b + (n - nb) < a)
            return -1;
    }
    return 0;
}

void f_817e_10d3(int team)
{
    for (;;) {
        d_60ae_dcc4 = 0;
        d_60ae_dbe8 = -1;
        for (d_60ae_dd92 = 0; d_60ae_dd92 <= 13; d_60ae_dd92++) {
            if (d_323f_0538[team == d_60ae_dcd0][d_60ae_dd92] < 2) {
                if (f_14bc_2cc0(team))
                    f_b628_364f(d_323f_0592[team][d_60ae_dd92]);
                else
                    f_7c74_3123(team, d_60ae_dd92);
                if (d_60ae_dbdc > d_60ae_dcc4) {
                    d_60ae_dcc4 = d_60ae_dbdc;
                    d_60ae_dd84 = d_323f_0592[team][d_60ae_dd92];
                    d_60ae_dbe8 = d_60ae_dd92;
                }
            }
        }
        if (d_60ae_dbe8 != -1)
            break;
        for (d_60ae_dd92 = 0; d_60ae_dd92 <= 13; d_60ae_dd92++)
            if (d_323f_0538[team == d_60ae_dcd0][d_60ae_dd92] == 7)
                d_323f_0538[team == d_60ae_dcd0][d_60ae_dd92] = 0;
    }
}

void f_817e_11f4(int team, int chance, int shootout)
{
    unsigned char c;

    f_817e_10d3(team);
    d_60ae_dbb8 = team == d_60ae_dcd2 ? d_60ae_dcd0 : d_60ae_dcd2;
    d_60ae_d953 = 0;
    if (d_60ae_dc70 + d_60ae_dc6e > 0) {
        if (shootout) {
            sprintf(d_2289_4cfa, "%s's penalty....", (char far *)d_60ae_b572[team]);
            f_817e_0bfb(team, d_2289_4cfa);
            f_1bd3_0dbc(100);
        }
        if (team < 80)
            sprintf(d_2289_4cfa, "%s steps up...", f_14bc_4703(d_60ae_dd84));
        else
            sprintf(d_2289_4cfa, "Their No.%d steps up...", d_60ae_dbe8 + 1);
        f_817e_0bfb(team, d_2289_4cfa);
        f_1bd3_0dbc(f_1bd3_0d69(3) * 30 + 40);
    }
    if (team < 80) {
        if (f_14bc_5e18(d_60ae_dd84))
            c = (d_471b_0000[7][d_60ae_dd84] * 30 + d_471b_0000[15][d_60ae_dd84]) / 8;
        else
            c = 25;
    } else
        c = 75;
    if ((d_60ae_dd44 = f_1bd3_0d69(c + 300)) > f_1bd3_0d69(chance)) {
        if (d_60ae_dd44 % 12 > 0) {
            d_60ae_dbb6 = f_1bd3_0d69(d_60ae_d957 + 5);
            switch (d_60ae_dbb6) {
            case 0: strcpy(d_2289_3964, "blasts it home"); break;
            case 1: strcpy(d_2289_3964, "finds the corner"); break;
            case 2: strcpy(d_2289_3964, "scores easily"); break;
            case 3: strcpy(d_2289_3964, "buries it"); break;
            case 4:
                sprintf(d_2289_3964, "makes it %d-%d", d_60ae_dc2c + (team == d_60ae_dcd2),
                        d_60ae_dc2a + (team == d_60ae_dcd0));
                break;
            }
            if (team < 80)
                sprintf(d_2289_4cfa, "And %s %s !", f_14bc_48b4(d_60ae_dd84), d_2289_3964);
            else
                sprintf(d_2289_4cfa, "And he %s !", d_2289_3964);
            d_60ae_d953 = -1;
        } else {
            d_60ae_dbb4 = f_1bd3_0d69(4);
            switch (d_60ae_dbb4) {
            case 0: strcpy(d_2289_3914, "blasts it over"); break;
            case 1: strcpy(d_2289_3914, "puts it wide"); break;
            case 2: strcpy(d_2289_3914, "hits the post"); break;
            case 3: strcpy(d_2289_3914, "hits the bar"); break;
            }
            if (team < 80)
                sprintf(d_2289_4cfa, "But %s %s !", f_14bc_48b4(d_60ae_dd84), d_2289_3914);
            else
                sprintf(d_2289_4cfa, "But he %s !", d_2289_3914);
        }
    } else if (d_60ae_dbb8 < 80) {
        sprintf(d_2289_4cfa, "But %s saves it !", f_14bc_48b4(d_323f_0592[d_60ae_dbb8][0]));
        if (!f_14bc_5e32(d_323f_0592[d_60ae_dbb8][0]))
            d_471b_0000[16][d_323f_0592[d_60ae_dbb8][0]] = d_471b_0000[16][d_323f_0592[d_60ae_dbb8][0]] + 10;
    } else
        strcpy(d_2289_4cfa, "But the 'keeper saves it !");
    if (d_60ae_dc70 + d_60ae_dc6e > 0) {
        f_817e_0bfb(team, d_2289_4cfa);
        f_1bd3_0dbc(100);
    }
    if (shootout)
        d_323f_0538[team == d_60ae_dcd0][d_60ae_dbe8] = 7;
    else if (d_60ae_dc70 + d_60ae_dc6e > 0)
        f_817e_0bfb(d_60ae_dcd2, d_2289_4278);
}

void f_817e_160e(int team)
{
    float f;

    f = 1.0;
    if (f_14bc_2594(d_60ae_dd9c) || f_14bc_25c5(d_60ae_dd9c)) {
        d_60ae_d98b = d_60ae_dcd2 / 20;
        d_60ae_d98a = d_60ae_dcd0 / 20;
        d_60ae_d949 = (team == d_60ae_dcd2 && d_60ae_d98b > d_60ae_d98a)
                   || (team == d_60ae_dcd0 && d_60ae_d98b < d_60ae_d98a);
        f = d_60ae_d949 ? 1.05 : 1.025;
    } else if (f_14bc_2784(d_60ae_dd9c, d_60ae_dd76 + 1)
            || f_14bc_2835(d_60ae_dd9c, d_60ae_dd76 + 1)
            || f_14bc_28cc(d_60ae_dd9c, d_60ae_dd76 + 1)) {
        f = 1.1;
    }
    d_2289_ea00[team == d_60ae_dcd0] = f;
}

unsigned char f_817e_1709(int p, int team)
{
    d_60ae_d989 = team == d_60ae_dcd0 ? 1 : 0;
    if (d_323f_0554[d_60ae_d989][p] == 0) {
        d_60ae_dbb2 = d_323f_058e[d_60ae_d989];
        if (team < 80) {
            d_60ae_d988 = d_323f_0e8a[team][0][p];
            d_60ae_dbb0 = d_323f_47b4[team];
            d_60ae_dd84 = d_323f_0592[team][p];
            if (!f_14bc_5e32(d_60ae_dd84)) {
                d_60ae_dbac = d_471b_0000[16][d_60ae_dd84];
                d_60ae_dbae = d_323f_4854[team];
                if (d_60ae_dbae == 650) {
                    d_60ae_dba8 = d_60ae_dbac * 0.8;
                } else {
                    d_60ae_dbaa = (1 - (d_54d9_08a0[d_323f_23a6[d_60ae_dbb0]][d_323f_23a6[d_60ae_dbae]] - 5) * 0.05)
                                * d_323f_2b44[d_60ae_dbae];
                    d_60ae_dba8 = (1 - (d_54d9_08a0[d_3c35_0000[17][d_60ae_dd84]][d_323f_23a6[d_60ae_dbae]] - 5) * 0.05)
                                * ((d_60ae_dbac * 2 + d_60ae_dbaa) / 3.0);
                }
                d_60ae_dba8 = (f_1bd3_12df(f_1bd3_1341(d_60ae_dba8, d_60ae_dbac * 1.25), d_60ae_dbac * 0.75) * 0.4
                               + d_60ae_dbb2) / 5.0;
                d_60ae_dba6 = f_14bc_1fc3(d_60ae_d988, d_60ae_dd84, d_323f_2630[d_323f_47b4[team]] / 16);
                if (f_14bc_2450(d_60ae_d988) >= d_60ae_dba6)
                    d_60ae_dba8 = (long)d_60ae_dba8 * d_60ae_dba6 / f_14bc_2450(d_60ae_d988);
                else
                    d_60ae_dba8 = (d_60ae_dba6 / (f_14bc_2450(d_60ae_d988) * 2.0) + 0.5) * d_60ae_dba8;
            } else {
                d_60ae_dba8 = f_14bc_5e7d(d_60ae_dd84, d_60ae_d988) + (int)f_1bd3_0d69(3) - (int)f_1bd3_0d69(3);
            }
        } else {
            d_60ae_dba8 = (d_323f_648c[team == 81][p] * 4 + d_60ae_dbb2) / 5;
        }
        d_60ae_dba8 = d_60ae_dba8 * d_2289_ea00[d_60ae_d989];
        d_323f_0554[d_60ae_d989][p] = d_60ae_dba8 * 0.35 + 11.0;
        d_2289_ea08[d_60ae_d989][p] = f_1bd3_12df(f_1bd3_1341(d_60ae_dba8 * 0.25 + 3.0, 8.0), 3.0);
    }
    return d_323f_0554[d_60ae_d989][p];
}

void f_817e_1b3e(team)
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

    d_60ae_dc5a = 0;
    d_60ae_dba4 = 0;
    n = 0;
    d_60ae_dba2 = 0;
    d_60ae_dd44 = 0;
    d_60ae_dba0 = 0;
    d_60ae_db9e = 0;
    d_60ae_db9c = 0;
    d_60ae_db9a = 0;
    d_60ae_db98 = 0;
    d_60ae_db96 = 0;
    d_60ae_db94 = 0;
    d_60ae_dbee = 0;
    d_60ae_db92 = 0;
    d_60ae_d8ab = 0;
    d_60ae_d8a7 = 0;
    d_60ae_dbd0 = 400;
    d_60ae_d99e = 750;
    f_817e_2b51(team);
    if (team == d_60ae_dcd2) {
        for (i = 0; i < 3; i++)
            for (j = 0; j < 60; j++)
                d_323f_63d8[i][j] = 0;
    } else {
        for (i = 0; i < 3; i++)
            for (j = 0; j < 60; j++)
                d_323f_6324[i][j] = 0;
    }
    for (d_60ae_dd92 = 0; d_60ae_dd92 <= 13; d_60ae_dd92++) {
        if (d_323f_0538[team == d_60ae_dcd0][d_60ae_dd92] < 2) {
            unsigned char k;

            d_60ae_dc1a = f_817e_1709(d_60ae_dd92, team);
            d_60ae_dcac = d_323f_0e8a[team][0][d_60ae_dd92];
            k = d_323f_0e8a[team][2][d_60ae_dd92];
            f8 = (k == 1) * -0.25 + (k == 2) * 0.25;
            fc = 0;
            f10 = 0;
            if (team < 80) {
                d_60ae_da56 = d_323f_0592[team][d_60ae_dd92];
                if (!f_14bc_5e32(d_60ae_da56)) {
                    float t;

                    d_60ae_d8ab = (x = d_471b_0000[6][d_60ae_da56]) * x / 2000.0;
                    d_60ae_d8a7 = (x = d_471b_0000[7][d_60ae_da56]) * x / 2000.0;
                    if (d_60ae_dcac == 7) {
                        fc = (x = d_471b_0000[1][d_60ae_da56]) * x / 1000.0;
                        f10 = (x = d_471b_0000[2][d_60ae_da56]) * x / 1000.0;
                    }
                    f14 = (x = d_471b_0000[12][d_60ae_da56]) * x / 2000.0;
                    c4 = f_1bd3_1307((int)(d_471b_0000[21][d_60ae_da56] / 100.0 * d_471b_0000[22][d_60ae_da56]), 1);
                    d_60ae_dbd0 -= d_471b_0000[11][d_60ae_da56];
                    x = d_471b_0000[5][d_60ae_da56];
                    t = d_471b_0000[16][d_60ae_da56] / 100.0 * (x * x / 100.0);
                    d_60ae_d99c = t * t * t;
                } else {
                    d_60ae_d8ab = 0.095;
                    d_60ae_d8a7 = 0.095;
                    if (d_60ae_dcac == 7) {
                        fc = 0.095;
                        f10 = 0.095;
                    }
                    f14 = 0.095;
                    c4 = 5;
                    d_60ae_dbd0 -= 10;
                    d_60ae_d99c = f_1bd3_0d69(50);
                }
            } else {
                if (team == d_60ae_dcd2)
                    d_60ae_d913 = d_60ae_dc84 >= 480 ? -1 : 0;
                else
                    d_60ae_d913 = d_60ae_dc82 >= 480 ? -1 : 0;
                d_60ae_d8ab = d_60ae_d913 ? 0.095 : 0.1;
                d_60ae_d8a7 = d_60ae_d913 ? 0.095 : 0.1;
                if (d_60ae_dcac == 7) {
                    fc = d_60ae_d913 ? 0.095 : 0.1;
                    f10 = d_60ae_d913 ? 0.095 : 0.1;
                }
                f14 = d_60ae_d913 ? 0.095 : 0.1;
                c4 = d_60ae_d913 ? 5 : 10;
                d_60ae_dbd0 -= 16;
                d_60ae_d99c = f_1bd3_0d69(d_60ae_d913 ? 100 : 400);
            }
            if (d_60ae_dd92 > 10)
                c3 = d_323f_6529[team == d_60ae_dcd0][d_60ae_dd92];
            else
                c3 = 0;
            if (d_60ae_dcac == 1 && d_60ae_dbee == 0) {
                d_60ae_dc5a = (f14 + 3.95) * d_60ae_dc1a + d_60ae_dc5a;
                d_60ae_dbee = 1;
                d_60ae_d99c = 0;
            }
            if (d_60ae_dcac == 11) {
                d_60ae_dc5a = (f14 + 1.45) * d_60ae_dc1a + d_60ae_dc5a;
                d_60ae_dba4 = (f14 + 2.95) * d_60ae_dc1a + d_60ae_dba4;
                n = (f14 + 0.45) * d_60ae_dc1a + n;
                if (team == d_60ae_dcd2)
                    f_817e_2d5c(c4, c3, 0);
                else
                    f_817e_2dd0(c4, c3, 0);
                d_60ae_db92 = 1;
                d_60ae_d99c /= 4;
            }
            if (d_60ae_dcac == 12) {
                d_60ae_dc5a = (f14 + 0.95) * d_60ae_dc1a + d_60ae_dc5a;
                d_60ae_dba4 = (f14 + 1.95) * d_60ae_dc1a + d_60ae_dba4;
                n = (f14 + 1.9) * d_60ae_dc1a + n;
                if (team == d_60ae_dcd2)
                    f_817e_2d5c(c4, c3, 0);
                else
                    f_817e_2dd0(c4, c3, 0);
                d_60ae_db92 = 1;
                d_60ae_d99c /= 4;
            }
            if (d_60ae_dcac == 13) {
                d_60ae_dba4 = (f14 + 0.35) * d_60ae_dc1a + d_60ae_dba4;
                n = (1.75 - f8 + fc + f10 + f14) * d_60ae_dc1a + n;
                d_60ae_dba2 = (f8 + 1.4 + d_60ae_d8ab + f14) * d_60ae_dc1a + d_60ae_dba2;
                d_60ae_dd44 = (d_60ae_d8a7 + 1.95) * d_60ae_dc1a + d_60ae_dd44;
                if (team == d_60ae_dcd2)
                    f_817e_2d5c(c4, c3, 1);
                else
                    f_817e_2dd0(c4, c3, 1);
            }
            if (d_60ae_dcac > 1 && d_60ae_dcac < 5) {
                d_60ae_dc5a = (f14 + 0.95) * d_60ae_dc1a + d_60ae_dc5a;
                d_60ae_dba4 = (1.95 - f8 + f14) * d_60ae_dc1a + d_60ae_dba4;
                n = (f8 + 0.95 + f14) * d_60ae_dc1a + n;
                d_60ae_dd44 = (d_60ae_d8a7 + 0.95) * d_60ae_dc1a + d_60ae_dd44;
                if (team == d_60ae_dcd2)
                    f_817e_2d5c(c4, c3, 0);
                else
                    f_817e_2dd0(c4, c3, 0);
                d_60ae_d99c = d_60ae_d99c / (4.0 - f8 * 2.0);
            }
            if (d_60ae_dcac > 4 && d_60ae_dcac < 8) {
                d_60ae_dba4 = (f14 + 0.95) * d_60ae_dc1a + d_60ae_dba4;
                n = (1.75 - f8 + fc + f10 + f14) * d_60ae_dc1a + n;
                d_60ae_dba2 = (f8 + 0.8 + d_60ae_d8ab + f14) * d_60ae_dc1a + d_60ae_dba2;
                d_60ae_dd44 = (d_60ae_d8a7 + 1.95) * d_60ae_dc1a + d_60ae_dd44;
                if (team == d_60ae_dcd2)
                    f_817e_2d5c(c4, c3, 1);
                else
                    f_817e_2dd0(c4, c3, 1);
                d_60ae_d99c = d_60ae_d99c / (2.0 - f8 * 2.0);
            }
            if (d_60ae_dcac > 7 && d_60ae_dcac < 11) {
                n = (0.95 - f8 + f14) * d_60ae_dc1a + n;
                d_60ae_dba2 = (f8 + 1.8 + d_60ae_d8ab + f14) * d_60ae_dc1a + d_60ae_dba2;
                d_60ae_dd44 = (d_60ae_d8a7 + 3.95) * d_60ae_dc1a + d_60ae_dd44;
                if (team == d_60ae_dcd2)
                    f_817e_2d5c(c4, c3, 2);
                else
                    f_817e_2dd0(c4, c3, 2);
            }
            d_60ae_d99e = f_1bd3_1307(3, d_60ae_d99e - d_60ae_d99c);
            switch (d_60ae_dcac) {
            case 2:
                d_60ae_dba0++;
                break;
            case 3:
                d_60ae_db9e++;
                break;
            case 4:
                d_60ae_db9c++;
                break;
            case 5:
            case 8:
                d_60ae_db9a++;
                break;
            case 6:
            case 9:
                d_60ae_db98++;
                break;
            case 7:
                d_60ae_db96++;
                break;
            case 10:
                d_60ae_db94++;
            }
        }
    }
    d_60ae_dba4 += (d_60ae_dba0 != 1) * 15 + (d_60ae_db9e != 1) * 15 + (d_60ae_db9c < 1) * 15;
    n += (d_60ae_dba0 != 1) * 15 + (d_60ae_db9e != 1) * 15 + (d_60ae_db9c < 1) * 15
        + (d_60ae_db9a == 0 || d_60ae_db9a > 2) * 15 + (d_60ae_db98 == 0 || d_60ae_db98 > 2) * 15
        + (d_60ae_db96 == 0 || d_60ae_db96 > 3) * 15 + (d_60ae_db94 == 0 || d_60ae_db94 > 3) * 15;
    d_60ae_dba2 += (d_60ae_db9a == 0 || d_60ae_db9a > 2) * 15 + (d_60ae_db98 == 0 || d_60ae_db98 > 2) * 15
        + (d_60ae_db96 == 0 || d_60ae_db96 > 3) * 15 + (d_60ae_db94 == 0 || d_60ae_db94 > 3) * 15;
    d_60ae_dd44 += (d_60ae_db9a == 0 || d_60ae_db9a > 2) * 30 + (d_60ae_db98 == 0 || d_60ae_db98 > 2) * 30
        + (d_60ae_db96 == 0 || d_60ae_db96 > 3) * 30 + (d_60ae_db94 == 0 || d_60ae_db94 > 3) * 30;
    if (d_60ae_db9c > 2 && d_60ae_db92 == 1 || d_60ae_db9c > 3) {
        d_60ae_dba4 -= (d_60ae_db9c + d_60ae_db92 - 3) * 15;
        n -= (d_60ae_db9c + d_60ae_db92 - 3) * 15;
    }
    d_60ae_dc5a = d_60ae_dc5a * 1.25;
    if (team < 80) {
        if (f_14bc_2cc0(team) == 0) {
            float t;

            t = d_323f_28ba[d_323f_47b4[team]] / 10.0;
            d_60ae_d8a3 = t * t / 25000.0;
        } else
            d_60ae_d8a3 = 0;
    } else
        d_60ae_d8a3 = 0.01;
    if (team == d_60ae_dcd2) {
        d_60ae_dbe6 = d_60ae_dbd0;
        if (f_14bc_2b27(d_60ae_dd9c, d_60ae_dd76 + 1) == 0)
            d_60ae_d89f = f_1bd3_1341(f_1bd3_12df(
                1.07 - d_60ae_dc58 / 1000.0
                - (f_14bc_2784(d_60ae_dd9c, d_60ae_dd76 + 1) || f_14bc_2835(d_60ae_dd9c, d_60ae_dd76 + 1)
                   || f_14bc_28cc(d_60ae_dd9c, d_60ae_dd76 + 1)) * 0.02
                + (f_14bc_2594(d_60ae_dd9c) || f_14bc_25c5(d_60ae_dd9c)) * 0.02,
                1.0), 1.11);
        else
            d_60ae_d89f = 1.0;
        d_60ae_d89f = (d_323f_4c14[0][d_60ae_dcd2] - 8.5) / 500.0 + d_60ae_d8a3 + d_60ae_d89f;
        d_60ae_d8fc = d_60ae_dbee == 1 ? -1 : 0;
        d_60ae_dbea = d_60ae_dc5a * d_60ae_d89f;
        d_60ae_dbf4 = d_60ae_dba4 * d_60ae_d89f;
        d_60ae_dd08 = n * d_60ae_d89f;
        d_60ae_dc00 = d_60ae_dba2 * d_60ae_d89f;
        d_60ae_dbf2 = d_60ae_dd44 * d_60ae_d89f;
        d_60ae_d9a8 = d_60ae_d99e;
    } else {
        d_60ae_d89f = (d_323f_4c14[0][d_60ae_dcd0] - 8.5) / 500.0 + 1.0 + d_60ae_d8a3;
        d_60ae_dbe4 = d_60ae_dbd0;
        d_60ae_d8fb = d_60ae_dbee == 1 ? -1 : 0;
        d_60ae_dbec = d_60ae_dc5a * d_60ae_d89f;
        d_60ae_dbfc = d_60ae_dba4 * d_60ae_d89f;
        d_60ae_dc0a = n * d_60ae_d89f;
        d_60ae_dbf8 = d_60ae_dba2 * d_60ae_d89f;
        d_60ae_dbf0 = d_60ae_dd44 * d_60ae_d89f;
        d_60ae_d9a6 = d_60ae_d99e;
    }
}

void f_817e_2b51(int team)
{
    char ok;

    d_60ae_db90 = f_14bc_2cc0(team) ? 12 : 10;
    d_60ae_dd52 = 0;
    for (d_60ae_dd92 = 0; d_60ae_dd92 <= d_60ae_db90; d_60ae_dd92++) {
        if (d_323f_0538[team == d_60ae_dcd0][d_60ae_dd92] < 2) {
            if (team > 79) {
                d_60ae_dd3c = d_323f_0e8a[team][0][d_60ae_dd92];
                d_60ae_dbb2 = f_14bc_6ab9(d_60ae_dd92, team, d_60ae_dd3c);
                ok = -1;
            } else if (f_14bc_2cc0(team) == 0) {
                if (!f_14bc_5e32(d_323f_0592[team][d_60ae_dd92]))
                    d_60ae_dbb2 = f_14bc_69fd(d_323f_0592[team][d_60ae_dd92],
                                              d_323f_0e8a[team][0][d_60ae_dd92]);
                else
                    d_60ae_dbb2 = 1;
                ok = -1;
            } else {
                if (!f_14bc_5e32(d_323f_0592[team][d_60ae_dd92]))
                    d_60ae_dbb2 = f_14bc_69fd(d_323f_0592[team][d_60ae_dd92],
                                              d_323f_0e8a[team][0][d_60ae_dd92]);
                else
                    d_60ae_dbb2 = 1;
                ok = d_2289_f882[d_323f_47b4[team]] - 1 == d_60ae_dd92;
            }
            if (ok && d_60ae_dbb2 > d_60ae_dd52) {
                d_60ae_dd52 = d_60ae_dbb2;
                d_323f_058c[team == d_60ae_dcd0] = d_60ae_dd92 + 1;
                d_60ae_dcba = d_60ae_dd92 + 1;
            }
        }
    }
    d_323f_058c[team == d_60ae_dcd0 ? 3 : 2] = d_60ae_dd52;
}

void f_817e_2d5c(unsigned char a, unsigned char b, unsigned char c)
{
    int base;

    base = a * 3 + b + 57;
    for (d_60ae_dd60 = base; d_60ae_dd60 <= 119; d_60ae_dd60++)
        d_323f_639c[c][d_60ae_dd60] = d_323f_639c[c][d_60ae_dd60] + (d_60ae_dd60 - base) / 4;
}

void f_817e_2dd0(unsigned char a, unsigned char b, unsigned char c)
{
    int base;

    base = a * 3 + b + 57;
    for (d_60ae_dd60 = base; d_60ae_dd60 <= 119; d_60ae_dd60++)
        d_323f_62e8[c][d_60ae_dd60] = d_323f_62e8[c][d_60ae_dd60] + (d_60ae_dd60 - base) / 4;
}

void f_817e_2e44(int team)
{
    float f;
    long v;

    switch (d_60ae_dcd2 / 20) {
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
    v = f_1bd3_131c((long)(d_60ae_d81f - d_323f_4c66[d_60ae_dcd2] * 1000
                                         / (f_14bc_6b14(d_60ae_dcd2) * 4.0)), 0L) * f;
    if (f_14bc_2b27(d_60ae_dd9c, d_60ae_dd76 + 1))
        v = v / 2;
    else if (f_14bc_2784(d_60ae_dd9c, d_60ae_dd76 + 1) || f_14bc_2835(d_60ae_dd9c, d_60ae_dd76 + 1)
             || f_14bc_28cc(d_60ae_dd9c, d_60ae_dd76 + 1))
        v = team == d_60ae_dcd0 ? 0 : v;
    else
        v = v * (team == d_60ae_dcd0 ? 0.25 : 0.75);
    d_60ae_fade = f_1bd3_1617(d_60ae_fde2, 1);
    (*d_60ae_fade)[team] += v;
}

void f_817e_2fde(void)
{
    int a, b, c, d, e, g;
    int s, t;
    int u;
    float r;

    d_54d9_11fe[d_60ae_dd76][0][d_60ae_dd9c] = d_60ae_dc84 * 32 + d_60ae_dc2c - d_60ae_dc28;
    d_54d9_11fe[d_60ae_dd76][1][d_60ae_dd9c] = d_60ae_dc82 * 32 + d_60ae_dc2a - d_60ae_dc26;
    if (d_60ae_d957 != 0)
        d_2289_d678[d_60ae_dd76] = d_60ae_dc26 > d_60ae_dc28 ? 2 : 1;
    a = (long)d_60ae_dc3e * 100 / (d_60ae_dc3e + d_60ae_dc34);
    b = (long)d_60ae_dc3a * 100 / (d_60ae_dc3a + d_60ae_dc38);
    c = (long)d_60ae_dc36 * 100 / (d_60ae_dc36 + d_60ae_dc3c);
    d = (long)d_60ae_dc3c * 100 / (d_60ae_dc3c + d_60ae_dc36);
    e = (long)d_60ae_dc38 * 100 / (d_60ae_dc3a + d_60ae_dc38);
    g = (long)d_60ae_dc34 * 100 / (d_60ae_dc34 + d_60ae_dc3e);
    s = 0;
    d_60ae_dcb2 = 0;
    for (d_60ae_dd92 = 0; d_60ae_dd92 <= 10; d_60ae_dd92++) {
        s = s + d_2289_ea08[0][d_60ae_dd92];
        d_60ae_dcb2 = d_60ae_dcb2 + d_2289_ea08[1][d_60ae_dd92];
    }
    t = d_60ae_dc42 * 8 + a + b + c;
    u = d_60ae_dc40 * 8 + d + e + g;
    t += (d_60ae_dc2c - d_60ae_dc28) * 20
         + ((d_60ae_dc2c - d_60ae_dc28) - (d_60ae_dc2a - d_60ae_dc26)) * 8;
    u += (d_60ae_dc2a - d_60ae_dc26) * 20
         + ((d_60ae_dc2a - d_60ae_dc26) - (d_60ae_dc2c - d_60ae_dc28)) * 8;
    r = (float)s / d_60ae_dcb2 / ((float)t / u);
    if (r > 1)
        d_60ae_d89b = r * 0.75 - 0.75;
    else
        d_60ae_d89b = r * 4.5 - 3.0;
    d_2287_0012 = 0;
    d_2287_0010 = -1;
    f_817e_32e0(d_60ae_dcd2, a, b, c, d_60ae_dc42);
    f_817e_32e0(d_60ae_dcd0, d, e, g, d_60ae_dc40);
}

void f_817e_32e0(team, a, b, c, d)
int team, a, b, c;
register int d;
{
    char k;
    float f;
    float g;

    for (d_60ae_dd92 = 0; d_60ae_dd92 <= 13; d_60ae_dd92++) {
        if (team < 80)
            d_60ae_dd84 = d_323f_0592[team][d_60ae_dd92];
        else
            d_60ae_dd84 = d_323f_0e8a[team][0][d_60ae_dd92] + 1860;
        k = d_323f_0538[team == d_60ae_dcd0][d_60ae_dd92];
        d_60ae_dc98 = f_817e_3cc9(d_60ae_dd92, team);
        if (k != 4 && d_60ae_dd84 >= 0 && d_60ae_dda4 - 1 >= d_60ae_dd84) {
            if (f_14bc_2594(d_60ae_dd9c)) {
                d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 1);
                d_60ae_fad2[0][d_60ae_dd84] = d_471b_82c8[d_60ae_dd84];
            } else if (f_14bc_25c5(d_60ae_dd9c)) {
                d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 1);
                d_60ae_fad2[1][d_60ae_dd84] = d_471b_82c8[d_60ae_dd84];
            }
        }
        if (k != 4 && d_60ae_dc98 >= 5) {
            if (d_323f_64a8[team == d_60ae_dcd0][d_60ae_dd92] == 0 || k == 0 || k == 1) {
                /* the fwait after this store is the one BCC writes before a label */
                if (1)
                    f = (team == d_60ae_dcd2 ? d_2289_ea08[0][d_60ae_dd92] - d_60ae_d89b
                         : d_2289_ea08[1][d_60ae_dd92] + d_60ae_d89b) + 0.5;
                d_60ae_db8e = f;
                d_60ae_db8e = f_1bd3_1369(f_1bd3_1307(1, d_60ae_db8e), 10);
                d_323f_64a8[team == d_60ae_dcd0][d_60ae_dd92] = d_60ae_db8e;
            } else {
                f = d_323f_64a8[team == d_60ae_dcd0][d_60ae_dd92];
                d_60ae_db8e = f;
            }
            d_60ae_db8c = team == d_60ae_dcd2 ? d_2289_742c[0][d_60ae_dd92] / 16
                          : d_2289_742c[1][d_60ae_dd92] / 16;
            if (d_60ae_db8c > 0) {
                float t[3] = {0.5, 1.0, 2.0};

                f += t[f_1bd3_1369(d_60ae_db8c, 3) - 1];
                d_60ae_db8e = f;
                d_60ae_db8e = f_1bd3_1369(f_1bd3_1307(1, d_60ae_db8e), 10);
            }
            if ((char)f == (char)d_2287_0012)
                g = f_1bd3_0d69(5) * 0.1;
            else
                g = 0;
            if (d_60ae_dc72 == -1 && f + g > d_2287_0012 && d_60ae_dc98 >= 20
                && d_323f_0538[team == d_60ae_dcd0][d_60ae_dd92] != 2) {
                d_2289_7480.motm = team == d_60ae_dcd2 ? d_60ae_dd92 + 1 : d_60ae_dd92 + 15;
                d_2287_0010 = d_60ae_dd84;
                d_2287_0012 = f;
            }
            if (d_60ae_dc72 == -1 && team < 80 && d_60ae_dd9c > 8 && !f_14bc_5e32(d_60ae_dd84)) {
                d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 1);
                d_60ae_fae6[0][d_60ae_dd84] += d_60ae_db8e;
                d_60ae_fae6[2][d_60ae_dd84] += d_60ae_db8e;
                d_3c35_0000[22][d_60ae_dd84] += d_60ae_db8e;
                if (d_3c35_0000[3][d_60ae_dd84] > d_60ae_db8e || d_3c35_0000[3][d_60ae_dd84] == 0)
                    d_3c35_0000[3][d_60ae_dd84] = d_60ae_db8e;
                if (d_3c35_0000[4][d_60ae_dd84] < d_60ae_db8e || d_3c35_0000[4][d_60ae_dd84] == 0)
                    d_3c35_0000[4][d_60ae_dd84] = d_60ae_db8e;
                d_3c35_0000[0][d_60ae_dd84]++;
                d_3c35_0000[12][d_60ae_dd84]++;
                d_3c35_0000[21][d_60ae_dd84]++;
                if (d_60ae_dd9c > 8 && d_471b_0000[21][d_60ae_dd84] >= 80 && !d_60ae_ddbe[d_60ae_dd84].f0)
                    d_471b_0000[21][d_60ae_dd84] = f_1bd3_1307(0, d_471b_0000[21][d_60ae_dd84]
                        - f_1bd3_1307(abs(28 - d_471b_0000[17][d_60ae_dd84]) / 2, 2) * (d_60ae_dc98 / 90));
                if (5 - team / 20 + (team > 59) > d_60ae_db8e)
                    d_60ae_ddbf[d_60ae_dd84][0] |= 0x80;
                if (team == d_60ae_dcd2) {
                    d_60ae_db8c = d_2289_742c[0][d_60ae_dd92] / 16;
                    d_60ae_dcb8 = d_60ae_dc82;
                } else {
                    d_60ae_db8c = d_2289_742c[1][d_60ae_dd92] / 16;
                    d_60ae_dcb8 = d_60ae_dc84;
                }
                f_96bb_4b70(team, d_60ae_dcb8, d_60ae_dd84, d_60ae_db8c);
            }
        } else {
            d_60ae_dc98 = 0;
            d_60ae_db8e = 0;
        }
        if (d_60ae_dc72 == -1)
            f_ad38_8047(d_60ae_dd84, 5);
        if (team == d_60ae_dcd2) {
            if (d_60ae_dd92 < 13 || f_14bc_612e(team, d_60ae_dd9c, d_60ae_dd76 + 1))
                d_2289_73f4[0][d_60ae_dd92] = d_60ae_dd84;
            else
                d_2289_73f4[0][d_60ae_dd92] = -1;
            d_2289_7448[0][d_60ae_dd92] = d_60ae_db8e;
            if (d_323f_0538[team == d_60ae_dcd0][d_60ae_dd92] == 2)
                d_2289_7464[0][d_60ae_dd92] = 1;
            else if (d_323f_0538[team == d_60ae_dcd0][d_60ae_dd92] == 3 ||
                     d_323f_0538[team == d_60ae_dcd0][d_60ae_dd92] == 6)
                d_2289_7464[0][d_60ae_dd92] = 2;
            else if (d_323f_0538[team == d_60ae_dcd0][d_60ae_dd92] == 1)
                d_2289_7464[0][d_60ae_dd92] = 3;
        }
        if (team == d_60ae_dcd0) {
            if (d_60ae_dd92 < 13 || f_14bc_612e(team, d_60ae_dd9c, d_60ae_dd76 + 1))
                d_2289_73f4[1][d_60ae_dd92] = d_60ae_dd84;
            else
                d_2289_73f4[1][d_60ae_dd92] = -1;
            d_2289_7448[1][d_60ae_dd92] = d_60ae_db8e;
            if (d_323f_0538[team == d_60ae_dcd0][d_60ae_dd92] == 2)
                d_2289_7464[1][d_60ae_dd92] = 1;
            else if (d_323f_0538[team == d_60ae_dcd0][d_60ae_dd92] == 3 ||
                     d_323f_0538[team == d_60ae_dcd0][d_60ae_dd92] == 6)
                d_2289_7464[1][d_60ae_dd92] = 2;
            else if (d_323f_0538[team == d_60ae_dcd0][d_60ae_dd92] == 1)
                d_2289_7464[1][d_60ae_dd92] = 3;
        }
    }
    if (team == d_60ae_dcd0 && d_60ae_dc72 == -1 && d_2287_0010 >= 0
        && d_2287_0010 <= d_60ae_dda4 - 1 && d_60ae_dd9c >= 10) {
        d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 1);
        d_60ae_fad2[3][d_2287_0010]++;
    }
    d_2289_73f0 = d_60ae_d81f;
    if (team == d_60ae_dcd2) {
        d_2289_7480.def = a;
        d_2289_7480.mid = b;
        d_2289_7480.att = c;
        d_2289_7480.shots_h = d;
        d_2289_7480.capt_h = d_323f_058c[0];
    } else {
        d_2289_7480.shots_a = d;
        d_2289_7480.capt_a = d_323f_058c[1];
    }
}

int f_817e_3cc9(int i, int team)
{
    unsigned char on;
    unsigned char off;
    int r;

    r = 0;
    on = d_323f_051c[team == d_60ae_dcd2 ? 0 : 1][i];
    off = d_323f_0500[team == d_60ae_dcd2 ? 0 : 1][i];
    if (i <= 10)
        on = 0;
    if (on < 255) {
        if (off == 255)
            r = d_60ae_dc9a - on;
        else
            r = off - on;
    }
    return r;
}

/* the match statistics screen (c: full time, else half time / so far) */
void f_817e_3d44(int a, int b, char c)
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
        f_14bc_60ca();
        if (c) {
            f_14bc_4bd3("Match Statistics");
            if (d_2289_73ec[2].home == 15 && d_2289_73ec[2].away == 15) {
                d_60ae_db8a = d_2289_73ec[1].home;
                d_60ae_db88 = d_2289_73ec[1].away;
            } else {
                d_60ae_db8a = d_2289_73ec[2].home;
                d_60ae_db88 = d_2289_73ec[2].away;
            }
        } else {
            if (d_60ae_dc9a == 45)
                strcpy(s, "Half-time Stats");
            else
                sprintf(s, "Stats %d mins", d_60ae_dc9a);
            f_14bc_4bd3(s);
            d_60ae_db8a = d_60ae_dc2c;
            d_60ae_db88 = d_60ae_dc2a;
        }
        d_60ae_d81f = d_2289_73f0;
        h1 = d_2289_7480.def;
        h2 = d_2289_7480.mid;
        d_60ae_dbfa = d_2289_7480.att;
        d_60ae_dc42 = d_2289_7480.shots_h;
        d_60ae_dc40 = d_2289_7480.shots_a;

        f_7c74_2408(a, a, b);
        strcpy(name1, f_1bd3_0e5e(f_14bc_3523(a)));
        sprintf(s, " %s ", name1);
        f_14bc_3a36(1.25, 4.0, d_60ae_dcce, d_60ae_dd58, 0, s);
        sprintf(s, " %d", d_60ae_db8a);
        f_14bc_38bc(17.5, 4.0, 1, s);

        f_7c74_2408(b, a, b);
        strcpy(name2, f_1bd3_0e5e(f_14bc_3523(b)));
        sprintf(s, " %s ", name2);
        f_14bc_3a36(20.5, 4.0, d_60ae_dcce, d_60ae_dd58, 0, s);
        sprintf(s, " %d", d_60ae_db88);
        f_14bc_38bc(36.75, 4.0, 1, s);

        if (c) {
            sprintf(d_2289_4cfa, "HT %d-%d", d_2289_73ec[0].home, d_2289_73ec[0].away);
            sprintf(s, " %s ", d_2289_4cfa);
            f_14bc_3672(1.125, 5.0, 1, 12, 0, s);
            if (d_2289_73ec[2].home != 15 || d_2289_73ec[2].away != 15) {
                x = d_2289_73ec[1].home;
                y = d_2289_73ec[1].away;
                sprintf(d_2289_4cfa, "FT %d-%d", x, y);
                sprintf(s, " %s ", d_2289_4cfa);
                f_14bc_3672(7.375, 5.0, 1, 12, 0, s);
                if (d_2289_73ec[3].home != 15 || d_2289_73ec[3].away != 15) {
                    sprintf(d_2289_4cfa, "%d-%d PENS", d_2289_73ec[3].home - d_60ae_db8a,
                            d_2289_73ec[3].away - d_60ae_db88);
                    sprintf(s, " %s ", d_2289_4cfa);
                    f_14bc_3672(13.625, 5.0, 1, 12, 0, s);
                }
            }
        }

        f_817e_43a6(-1, h1, h2, d_60ae_dbfa, d_60ae_dc42, 1.125);
        f_817e_43a6(0, 100 - d_60ae_dbfa, 100 - h2, 100 - h1, d_60ae_dc40, 20.375);
        strcpy(d_2289_5218, "Attendance");
        sprintf(d_2289_51c8, "%7ld", d_60ae_d81f);
        sprintf(s, " %s     -%s", d_2289_5218, d_2289_51c8);
        f_14bc_3672(1.125, 24.0, 1, 12, 150, s);
        f_14bc_60da();

        if (d_60ae_dc9a == 45) {
            do {
                ok = -1;
                f_14bc_58db(2);
                if (strcmp(f_1bd3_0e5e(d_2289_3912), "H") == 0 && d_60ae_dc4a == 0) {
                    f_7c74_42ef(d_60ae_dcd2, -1);
                    done = 0;
                } else if (strcmp(f_1bd3_0e5e(d_2289_3912), "A") == 0 && d_60ae_dc46 == 0) {
                    f_7c74_42ef(d_60ae_dcd0, -1);
                    done = 0;
                } else if (d_2289_3912[0] != 0)
                    ok = 0;
            } while (!ok);
        } else
            f_14bc_58db(0);
    } while (!done);
}

/* one team's column of the statistics screen: its players, their marks, ratings and
 * goals, then its strengths and attempts (a: home team, f: the column's x) */
void f_817e_43a6(char a, int b, int c, int d, int e, float f)
{
    int n;
    char flag;
    char booked;
    char sub;
    register int x0;
    register int y;
    int fg;
    char buf[320];

    x0 = f * 8;
    d_60ae_dd72 = 0;
    y = 0;
    d_60ae_dd92 = 0;
    d_60ae_dd6e = 14;
    d_60ae_dd5e = 8;
    do {
        if (a) {
            d_60ae_dd84 = d_2289_73f4[0][d_60ae_dd92];
            d_60ae_db8e = d_2289_7448[0][d_60ae_dd92];
            flag = d_2289_7464[0][d_60ae_dd92] == 1;
            d_60ae_d94b = d_2289_7464[0][d_60ae_dd92] == 2;
            booked = d_2289_7464[0][d_60ae_dd92] == 3;
            d_60ae_dc06 = d_2289_742c[0][d_60ae_dd92] / 16;
            d_60ae_dc04 = d_2289_742c[0][d_60ae_dd92] % 16;
            d_60ae_d95e = d_60ae_dd92 + 1 == d_2289_7480.capt_h;
            sub = d_60ae_dd92 + 1 == d_2289_7480.motm;
        } else {
            d_60ae_dd84 = d_2289_73f4[1][d_60ae_dd92];
            d_60ae_db8e = d_2289_7448[1][d_60ae_dd92];
            flag = d_2289_7464[1][d_60ae_dd92] == 1;
            d_60ae_d94b = d_2289_7464[1][d_60ae_dd92] == 2;
            booked = d_2289_7464[1][d_60ae_dd92] == 3;
            d_60ae_dc06 = d_2289_742c[1][d_60ae_dd92] / 16;
            d_60ae_dc04 = d_2289_742c[1][d_60ae_dd92] % 16;
            d_60ae_d95e = d_60ae_dd92 + 1 == d_2289_7480.capt_a;
            sub = d_60ae_dd92 + 15 == d_2289_7480.motm;
        }
        if (f_14bc_5e32(d_60ae_dd84))
            n = 4;
        else
            n = d_60ae_dd92 > 10 ? 6 : 1;
        strcpy(d_2289_21ac, "");
        if (flag)
            strcpy(d_2289_21ac, "so");
        else if (d_60ae_d94b)
            strcpy(d_2289_21ac, "ij");
        else if (booked)
            strcpy(d_2289_21ac, "bk");
        if (d_60ae_d95e)
            strcat(d_2289_21ac, booked ? " c" : "c");
        strcpy(d_2289_38c2, "");
        if (d_60ae_dc06 > 0)
            sprintf(d_2289_38c2, "%d", d_60ae_dc06);
        else if (d_60ae_dc04 > 0)
            sprintf(d_2289_38c2, "%d", d_60ae_dc04);
        if (d_60ae_dd84 == -1)
            strcpy(d_2289_4cfa, "");
        else if (f_14bc_5e18(d_60ae_dd84) || f_14bc_5e32(d_60ae_dd84)) {
            strcpy(d_2289_5218, f_14bc_483d(d_60ae_dd84));
            if (strlen(d_2289_21ac) == 0)
                d_60ae_dc7e = 14;
            else
                d_60ae_dc7e = 14 - (strlen(d_2289_21ac) + 1);
            sprintf(d_2289_4cfa, "%.*s", d_60ae_dc7e, d_2289_5218);
        } else if (d_60ae_dd84 >= 1861) {
            strcpy(d_2289_5218, d_54d9_04d2[d_60ae_dd84 - 1860]);
            if (d_60ae_dd92 > 10)
                sprintf(d_2289_5218, "Substitute %c", d_60ae_dd92 + 54);
            strcpy(d_2289_4cfa, d_2289_5218);
        }
        sprintf(buf, " %s", f_14bc_2f2c(d_60ae_dd92 + 1, 1));
        if (d_60ae_dd6e == 14)
            fg = 9;
        else
            fg = 2;
        f_14bc_3672(f, d_60ae_dd72 + 6, 1, fg, 24, buf);
        sprintf(buf, " %s", d_2289_4cfa);
        if (sub && d_60ae_dc72 == -1)
            f_14bc_3672(f + 3.25, d_60ae_dd72 + 6, 0, 1, 92, buf);
        else
            f_14bc_3672(f + 3.25, d_60ae_dd72 + 6, n, d_60ae_dd6e, 92, buf);
        f_14bc_356a(x0 + f_1bd3_1369(strlen(d_2289_4cfa), 11) * 6 + 48, -(y + 48),
                    d_60ae_d94b || flag ? 2 : 6, d_2289_21ac);
        if (d_60ae_db8e > 0) {
            sprintf(d_2289_215c, "%2d", d_60ae_db8e);
            sprintf(buf, " %s", d_2289_215c);
            f_14bc_3672(f + 15, -(d_60ae_dd72 + 6), 1, 3, 30, buf);
        } else
            f_14bc_3672(f + 15, -(d_60ae_dd72 + 6), 1, 3, 30, "  -");
        f_14bc_356a(x0 + strlen(d_2289_215c) * 6 + 136, -(y + 48),
                    d_60ae_dc04 > 0 && d_60ae_dc06 == 0 ? 4 : 6, d_2289_38c2);
        d_60ae_dd72++;
        y += 8;
        f_1bd3_13a3(&d_60ae_dd6e, &d_60ae_dd5e, 2);
        d_60ae_dd92++;
    } while (d_60ae_dd92 != 14);
    sprintf(buf, " Defence        -    %d%%", b);
    f_14bc_3672(f, 20.0, 1, 4, 150, buf);
    sprintf(buf, " Midfield       -    %d%%", c);
    f_14bc_3672(f, 21.0, 1, 4, 150, buf);
    sprintf(buf, " Attack         -    %d%%", d);
    f_14bc_3672(f, 22.0, 1, 4, 150, buf);
    sprintf(buf, " Attempts       -    %d", e);
    f_14bc_3672(f, 23.0, 1, 4, 150, buf);
}
