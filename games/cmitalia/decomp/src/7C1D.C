/* @at 7c1d:0000 */
/* @data 5d51:264c */
/* @module */

/* Overlay 7c1d: CM93's overlay 817e (games/cm93/decomp/src/817E.C) changed for CM Italia:
 * the match engine's events: goals and their commentary, disallowed goals, penalties and
 * shoot-outs, the score bar and attempts, team strengths and player ratings during the
 * match, the result, and the match statistics screen. */
#include <stdio.h>
#include <string.h>
#include <mem.h>
#include <stdlib.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_7c1d_0000(int a, int b, int c, int d);
void f_7c1d_00ea(void);
void f_7c1d_019a(int minute);
void f_7c1d_0239(int team);
void f_7c1d_030a(void);
void f_7c1d_0371(int a, char c, char d, char e, int b, int team);
void f_7c1d_079e(char c);
void f_7c1d_0b15(void);
void f_7c1d_0c36(int team, char far *s);
void f_7c1d_0cc1(void);
void f_7c1d_0cde(int team);
void f_7c1d_0f30(void);
char f_7c1d_10ce(int a, int b, int na, int nb, int n);
void f_7c1d_1102(int team);
void f_7c1d_1218(int team, int chance, int shootout);
void f_7c1d_1625(int team);
unsigned char f_7c1d_1717(int p, int team);
void f_7c1d_1b40(int team);
void f_7c1d_2aec(int team);
void f_7c1d_2ce5(unsigned char a, unsigned char b, unsigned char c);
void f_7c1d_2d59(unsigned char a, unsigned char b, unsigned char c);
void f_7c1d_2dcd(int team);
void f_7c1d_2f57(void);
void f_7c1d_3259();             /* no prototype: 2b9b passes it words, it reads bytes */
int f_7c1d_3c1c(int i, int team);
void f_7c1d_3ca2(int a, int b, char c);
void f_7c1d_4304(char a, int b, int c, int d, int e, float f);

void f_1d5e_08cc(int c);
void f_1d5e_08e2(int x1, int y1, int x2, int y2);
void f_1d5e_08d7(int c);
void f_1d5e_0929(int x1, int y1, int x2, int y2);
void f_1d5e_0822(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_1d5e_0b11(int on);
void f_1d5e_099e(int a);
void f_1d5e_09ea(int x, int y, char far *s);
char far *f_1d5e_0e5f(char far *s);
void f_1d5e_0dbd(int ticks);
long f_1d5e_0d6a(long n);
void f_1646_357e(int x, int y, int colour, char far *s);
void f_1646_3c89(float x, float y, int colour, char far *s);
void f_1646_3e54(float x, float y, int a, int b, int c, char far *s);
char far *f_1646_4849(int player);
char far *f_1646_2f4b(int x, char c);
char f_1646_5dff(int player);
void f_1646_4ba0(char far *title);
void f_a7f0_8152(int player, char c);
void f_b0f1_41c6(char team);
void f_76ea_2364(int a, int b, int c);
void f_76ea_2fd9(void);
void f_76ea_4c0b(float x, float y);
struct flags { unsigned f0 : 1; unsigned : 15; unsigned char b; unsigned char c; };
extern char near *d_5d51_b476[];
extern char d_5d51_d561;
extern char d_5d51_d562;
extern char d_5d51_d5b2;
extern char d_5d51_d5dd;
extern int d_5d51_d82a;
extern int d_5d51_d89a;
extern int d_5d51_d89c;
extern int d_5d51_d89e;
extern int d_5d51_d8a0;
extern int d_5d51_d8b0;
extern int d_5d51_d8b2;
extern int d_5d51_d8de;
extern int d_5d51_d8e0;
extern int d_5d51_d8f2;
extern int d_5d51_d8f4;
extern int d_5d51_d90a;
extern int d_5d51_d928;
extern int d_5d51_d938;
extern int d_5d51_d93a;
extern int d_5d51_d93e;
extern int d_5d51_d940;
extern int d_5d51_d942;
extern int d_5d51_d9c8;
extern int d_5d51_d9d0;
extern int d_5d51_da06;
extern struct flags far d_2414_af3c[];
extern char far d_2414_3810[];
extern char far d_2414_39a0[];
extern char far d_2414_39f0[];
extern char far d_2414_3a40[];
extern char far d_2414_40d4[];
extern char far d_2414_41c4[];
extern char far d_2414_4214[];
extern unsigned char far d_2414_845c[][16];
extern int far d_3404_0e34[][16];
extern unsigned char far d_3404_4eb2[];
extern unsigned char far d_3c0d_0000[][1500];
extern unsigned char far d_44d7_0000[][1500];
char far *f_1646_470f(int player);
char far *f_1646_48c0(int player);
char f_1646_2646(int);
char f_1646_2674(int);
char f_1646_2833(int, int);
char f_1646_28e4(int, int);
char f_1646_297b(int, int);
char f_1646_2cc9(int x);
char f_1646_5de5(int player);
int f_76ea_324d(int team, int p);
int f_b0f1_3629(int player);
extern char d_5d51_d563;
extern char d_5d51_d5af;
extern char d_5d51_d5b0;
extern char d_5d51_d5bd;
extern char d_5d51_d5c1;
extern char d_5d51_d5ca;
extern unsigned char d_5d51_d5f4;
extern unsigned char d_5d51_d5f5;
extern int d_5d51_d60c;
extern int d_5d51_d60e;
extern int d_5d51_d610;
extern int d_5d51_d820;
extern int d_5d51_d822;
extern int d_5d51_d824;
extern int d_5d51_d826;
extern int d_5d51_d84c;
extern int d_5d51_d858;
extern int d_5d51_d85a;
extern int d_5d51_d85c;
extern int d_5d51_d896;
extern int d_5d51_d898;
extern int d_5d51_d934;
extern int d_5d51_d9b4;
extern int d_5d51_d9ca;
extern int d_5d51_d9e6;
extern int d_5d51_d9f0;
extern int d_5d51_d9fe;
extern char far d_2414_3770[];
extern char far d_2414_37c0[];
extern char far d_2414_4b56[];
extern float far d_2414_fce4[];
extern unsigned char far d_3404_0dce[][16];
float f_1d5e_12e0(float a, float b);
int f_1d5e_1308(int a, int b);
float f_1d5e_1342(float a, float b);
int f_1646_2075(int a, int b, int c);
int f_1646_2551(unsigned char a);
char f_1646_2b65(int a, int b);
unsigned char f_1646_5e4a(int player, unsigned char a);
extern float d_5d51_d505;
extern float d_5d51_d509;
extern float d_5d51_d50d;
extern float d_5d51_d511;
extern char d_5d51_d579;
extern unsigned char d_5d51_d5f2;
extern unsigned char d_5d51_d5f3;
extern int d_5d51_d608;
extern int d_5d51_d60a;
extern int d_5d51_d612;
extern int d_5d51_d614;
extern int d_5d51_d6c2;
extern int d_5d51_d7fe;
extern int d_5d51_d800;
extern int d_5d51_d802;
extern int d_5d51_d804;
extern int d_5d51_d806;
extern int d_5d51_d808;
extern int d_5d51_d80a;
extern int d_5d51_d80c;
extern int d_5d51_d80e;
extern int d_5d51_d810;
extern int d_5d51_d812;
extern int d_5d51_d814;
extern int d_5d51_d816;
extern int d_5d51_d818;
extern int d_5d51_d81a;
extern int d_5d51_d81c;
extern int d_5d51_d81e;
extern int d_5d51_d840;
extern int d_5d51_d854;
extern int d_5d51_d856;
extern int d_5d51_d85e;
extern int d_5d51_d860;
extern int d_5d51_d862;
extern int d_5d51_d864;
extern int d_5d51_d868;
extern int d_5d51_d86c;
extern int d_5d51_d870;
extern int d_5d51_d87a;
extern int d_5d51_d88a;
extern int d_5d51_d8c8;
extern int d_5d51_d8ca;
extern int d_5d51_d91c;
extern int d_5d51_d978;
extern float far d_2414_fcec[][16];
extern unsigned char far d_3404_0dee[][16];
extern unsigned char far d_3404_0e30[];
extern unsigned char far d_3404_1334[][3][16];
extern unsigned char far d_3404_225c[];
extern unsigned char far d_3404_24e6[];
extern unsigned char far d_3404_2770[];
extern unsigned char far d_3404_29fa[];
extern int far d_3404_4226[];
extern int far d_3404_4272[];
extern unsigned char far d_3404_443a[][82];
extern unsigned char far d_3404_4f7a[][60];
extern unsigned char far d_3404_502e[][60];
extern unsigned char far d_3404_50e2[][16];
extern unsigned char far d_3404_5197[][5];
extern unsigned char far d_4f37_0960[][10];
int f_1646_6a5c(int a, int b, int c);
double f_1646_69a0(int x, int y);
float f_1646_6ab8(int x);
long f_1d5e_131d(long a, long b);
void far *f_1d5e_1618(int handle, int page);
extern long d_5d51_d485;
extern float d_5d51_d501;
extern int d_5d51_d7fc;
extern int d_5d51_d8a4;
extern int d_5d51_d8a6;
extern int d_5d51_d8a8;
extern int d_5d51_d8aa;
extern int d_5d51_d8ac;
extern int d_5d51_d8ae;
extern int d_5d51_d922;
extern int d_5d51_d92a;
extern int d_5d51_d9ac;
extern int d_5d51_d9c2;
extern int d_5d51_dd98;
extern long (far *d_5d51_da44)[80];
extern int far d_2412_0010;
extern float far d_2412_0012;
extern int far d_2414_ecec[];
extern unsigned char far d_3404_049a[];
extern unsigned char far d_3404_0e2e[];
extern unsigned char far d_3404_4462[];
extern unsigned char far d_3404_4f3e[][60];
extern unsigned char far d_3404_4ff2[][60];
extern int far d_4f37_1390[][2][100];
void f_a13d_22c6(char far *title);
extern int d_5d51_d828;
extern char far d_2414_4212[];
extern char far d_2414_4262[];
extern char far d_2414_42b2[];
extern char far d_2414_4302[];
extern char far d_2414_41ae[];
extern char far d_2414_4572[];
extern char far d_2414_4662[];
extern char far d_2414_46b2[];
extern char far d_2414_4882[][13];
extern char far d_2414_4172[];
extern char far d_2414_41c2[];
extern char far d_2414_5012[];
extern float d_5d51_da3c[];
extern int d_5d51_da54[];
extern unsigned char d_5d51_d9ea[][2];
extern unsigned char d_5d51_d7f5[];
extern int d_5d51_da50[];
extern int far d_3404_1390[][2][94];
int f_1d5e_136a(int a, int b);
void f_9182_4a40(int team, int a, int player, int b);
extern int d_5d51_d7fa;
extern int d_5d51_d7f8;
extern int d_5d51_d8e2;
extern unsigned char d_5d51_d998[][2];
extern char far d_2414_58a0[][0x6a6];
extern char far d_2414_484e[][13][2];
extern char far d_2414_489c[][13];
extern char far d_2414_48b6[][13];
extern char far d_2414_484a[];
extern char far d_2414_48d0[];
char far *f_1646_3537(int x);
void f_1646_3686(float x, float y, int bg, int fg, int w, char far *s);
void f_1646_38d0(float x, float y, int colour, char far *s);
void f_1646_3a4a(float x, float y, int bg, int fg, int w, char far *s);
void f_76ea_4495(int team, char c);
void f_1646_50c5(int a, float x, float y, int c, int d, int e, char far *s);
void f_1646_5869(int team);
int f_1646_5602(int a);
void f_1646_545c(int a, char b);
void f_1646_58a8(int a);
extern int d_5d51_dd96;
extern char far *d_5d51_da58;
extern int d_5d51_d7f6;
extern int d_5d51_d7f4;
extern int d_5d51_d86a;
extern char d_5d51_d5e7;
extern int d_5d51_d9c6;
extern int d_5d51_da0a;
extern int d_5d51_d8ba;
extern int d_5d51_d8b6;
extern char far d_2414_4842[];
extern char far d_2414_4170[];
extern char far d_2414_5488[];
extern char far d_2414_5462[];
void f_1d5e_13a4(void far *a, void far *b, int n);
extern int d_5d51_d9e2;
extern int d_5d51_d9de;
extern int d_5d51_d9ce;
extern int d_5d51_d876;
extern int d_5d51_d8ee;
extern char d_5d51_d5b1;
extern char d_5d51_d5c8;
extern signed char far d_2414_48d5;
extern signed char far d_2414_48d6;
extern char far d_2414_3f7c[];
struct matchstats { /* the match record's ratings and counts */ unsigned def : 7; /* the three ratings shown on the stats screen */ unsigned mid : 7; unsigned att : 7; unsigned shots_h : 6; /* attempts */ unsigned shots_a : 6; unsigned capt_h : 4; /* the captains' shirt numbers */ unsigned capt_a : 4; unsigned motm : 6; /* the man of the match: 1-14 home, 15-28 away */ };
extern unsigned char far d_3404_0d8e[][16];
extern unsigned char far d_3404_0dae[][16];
extern int far d_3404_5102[][16];
extern int far d_2414_841c[][16];
extern unsigned char far d_2414_847c[][16];
extern unsigned char far d_2414_849c[][16];
extern long far d_2414_8418;
extern struct matchstats far d_2414_84bc;
extern unsigned char far d_44d7_6978[];
extern unsigned char (far *d_5d51_da38)[1500];
extern int (far *d_5d51_da4c)[1500];
extern int d_5d51_dd92;
extern int d_5d51_dd9c;
extern int d_5d51_da1a;
extern int d_5d51_d908;
extern unsigned char far d_2414_af3d[][4];
char f_1646_60fb(char team, char week, char n);
void f_1646_6097(void);
void f_1646_60a7(void);
struct score { unsigned home : 4; unsigned away : 4; };
extern struct score far d_2414_8414[];
extern char far * far d_4f37_0593[];
extern char far d_2414_1fb8[];
extern char far d_2414_2008[];
extern char far d_2414_371e[];
extern char far d_2414_376e[];
extern char far d_2414_5024[];
extern char far d_2414_5074[];
extern int d_5d51_d874;
unsigned char f_1646_717d(char);

/* the goal commentary: how the ball went in, where it went, and the pairs (verb, place)
 * that do not go together, ended by -1. A '*' is replaced by the keeper's name. */
static char far *d_5d51_264c[] = {
    "Tapped", "Volleyed", "Headed", "Guided", "Placed", "Side footed", "Driven", "Curled",
    "Chipped", "Thundered", "Flicked", "Lashed", "Hooked", "Scrambled", "Rifled",
    "Hammered", "Glorious strike", "Smashed", "Powered", "Downward header",
    "Bullet header", "Looping header", "Forced", "Rammed", "Despatched",
    "Hit ferociously", "Thumped", "Slotted", "Buried", "Bundled", "Hit first time",
    "Calmly placed", "Clinical strike", "Crashed"
};
static char far *d_5d51_26d4[] = {
    "past*", "into the net", "into the corner", "into the top corner", "in off a post",
    "in off the bar", "in beyond*", "through a crowd", "under*", "home",
    "into the open net"
};
static char d_5d51_2700[] = {
    0, 3, 0, 5, 0, 7, 3, 7, 4, 7, 4, 9, 7, 7, 7, 8, 7, 9, 8, 7, 8, 8, 8, 9, 10, 7, 13, 3,
    16, 8, 16, 9, 19, 7, 19, 8, 19, 9, 20, 7, 20, 8, 20, 9, 21, 7, 21, 8, 21, 9, 22, 3,
    24, 9, 25, 9, 27, 3, 27, 4, 27, 5, 27, 7, 29, 3, 30, 3, 31, 7, 31, 9, 32, 7, 32, 9,
    33, 8, -1
};

void f_7c1d_0000(int a, int b, int c, int d)
{
    int t1, t2;

    t1 = b * 38 / (a + b);
    t2 = 38 - t1;
    f_1d5e_08cc(16);
    f_1d5e_08e2(c * 36 + 24, 139, c * 36 + 31, 177 - t2);
    f_1d5e_08e2(d * 36 + 168, 139, d * 36 + 175, 177 - t1);
    f_1d5e_08cc(28);
    f_1d5e_08e2(c * 36 + 24, t1 + 139, c * 36 + 31, 177);
    f_1d5e_08e2(d * 36 + 168, t2 + 139, d * 36 + 175, 177);
}

void f_7c1d_00ea(void)
{
    f_1d5e_08cc(28);
    f_1d5e_08e2(224, 14, 306, 42);
    f_1d5e_08cc(16);
    f_1d5e_08e2(226, 16, 304, 40);
    f_1d5e_08d7(22);
    f_1d5e_0929(222, 12, 308, 44);
    f_1d5e_08d7(24);
    f_1d5e_0929(260, 18, 290, 36);
    f_1646_357e(240, 30, 6, "TIME");
    f_7c1d_019a(d_5d51_d90a);
}

void f_7c1d_019a(int minute)
{
    char buf[80];

    if (d_5d51_d5b2)
        sprintf(buf, "Inj");
    else
        sprintf(buf, "%03d", minute);
    f_1d5e_08cc(16);
    f_1d5e_08e2(261, 19, 289, 35);
    f_1d5e_0b11(0);
    if (d_5d51_d82a != 2)
        f_1d5e_099e(2);
    f_1d5e_08d7(18);
    f_1d5e_09ea(264, 34, buf);
    f_1d5e_0b11(1);
}

void f_7c1d_0239(int team)
{
    char buf[320];

    if (d_5d51_d8e0 + d_5d51_d8de > 0) {
        if (team == d_5d51_d942)
            d_5d51_d928 = d_5d51_d940;
        else
            d_5d51_d928 = d_5d51_d942;
        f_7c1d_0cde(d_5d51_d928);
        sprintf(buf, "%s for %s!", d_2414_3a40, (char far *)d_5d51_b476[team]);
        f_7c1d_0c36(team, buf);
        f_1d5e_0dbd(100);
        sprintf(buf, "%s %s", d_2414_39f0, d_2414_39a0);
        f_7c1d_0c36(team, buf);
        f_1d5e_0dbd(100);
        f_b0f1_41c6(team);
        f_7c1d_0c36(d_5d51_d942, d_2414_40d4);
    }
}

void f_7c1d_030a(void)
{
    int team;
    char buf[320];

    if (d_5d51_d89a > d_5d51_d93a) {
        team = d_5d51_d940;
        d_5d51_d89e = 1;
    }
    if (d_5d51_d89a < d_5d51_d93a) {
        team = d_5d51_d942;
        d_5d51_d8a0 = 1;
    }
    if (d_5d51_d8e0 + d_5d51_d8de > 0) {
        sprintf(buf, "%s win on away goals!", (char far *)d_5d51_b476[team]);
        f_7c1d_0c36(team, buf);
    }
}

void f_7c1d_0371(a, c, d, e, b, team)
int a; char c, d, e; int b; register int team;   /* old-style: team in SI, b in DI */
{
    char buf[320];

    if (team < 38 && !f_1646_5dff(a) && d == 0) {
        if (d_5d51_da06 > 12) {
            unsigned char other = team == d_5d51_d942 ? d_5d51_d940 : d_5d51_d942;

            d_3c0d_0000[1][a]++;
            d_3c0d_0000[13][a]++;
            if (other < 38) {
                int keeper = d_3404_0e34[other][0];

                if (!f_1646_5dff(keeper) && d_2414_af3c[keeper].f0)
                    d_44d7_0000[1][keeper]++;
            }
        }
        f_a7f0_8152(a, 1);
    }
    if (team < 38 && d != 0 && d_5d51_da06 > 12)
        d_3404_4eb2[team]++;
    if (d_5d51_d8e0 + d_5d51_d8de > 0) {
        if (d != 0) {
            char k;
            char own = 1;

            d_5d51_d928 = team == d_5d51_d942 ? d_5d51_d940 : d_5d51_d942;
            sprintf(buf, "Goal for %s!", (char far *)d_5d51_b476[team]);
            f_7c1d_0c36(team, buf);
            f_1d5e_0dbd(100);
            k = f_1d5e_0d6a(5);
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
            k = f_1d5e_0d6a(2);
            if (d_5d51_d562 == 0 && team == d_5d51_d940 || d_5d51_d561 == 0 && team == d_5d51_d942)
                own = 0;
            if (k == 0 && own == 1)
                strcat(buf, " past his own 'keeper!");
            else
                strcat(buf, " into his own net!");
            f_7c1d_0c36(d_5d51_d928, buf);
            f_1d5e_0dbd(100);
            if (d_5d51_d928 < 38)
                sprintf(buf, "Own goal by %s", f_1646_4849(a));
            else
                sprintf(buf, "Own goal by their No.%s", f_1646_2f4b(b + 1, 0));
            f_7c1d_0c36(d_5d51_d928, buf);
            0;      /* code-free: keeps the call out of the tail BCC merges with the other branch */
            f_1d5e_0dbd(100);
            f_7c1d_0c36(d_5d51_d942, d_2414_40d4);
        } else if (c == 0 && e == 0) {
            if (team == d_5d51_d942)
                d_5d51_d928 = d_5d51_d940;
            else
                d_5d51_d928 = d_5d51_d942;
            f_7c1d_0cde(d_5d51_d928);
            sprintf(buf, "%s for %s!", d_2414_3a40, (char far *)d_5d51_b476[team]);
            f_7c1d_0c36(team, buf);
            f_1d5e_0dbd(100);
            sprintf(buf, "%s %s", d_2414_39f0, d_2414_39a0);
            f_7c1d_0c36(team, buf);
            f_1d5e_0dbd(100);
            if (team < 38)
                sprintf(buf, "Scored by %s", f_1646_4849(a));
            else
                sprintf(buf, "Scored by their No.%s", f_1646_2f4b(b + 1, 0));
            f_7c1d_0c36(team, buf);
            f_1d5e_0dbd(100);
            f_7c1d_0c36(d_5d51_d942, d_2414_40d4);
        }
        f_7c1d_0b15();
    }
    if (d == 0) {
        if (team == d_5d51_d942) {
            d_2414_845c[0][b] += 16;
            if (d_2414_845c[0][b] / 16 == 3 && team < 38) {
                sprintf(buf, "%04d", a);
                strcat(d_2414_3810, buf);
            }
        } else {
            d_2414_845c[1][b] += 16;
            if (d_2414_845c[1][b] / 16 == 3 && team < 38) {
                sprintf(buf, "%04d", a);
                strcat(d_2414_3810, buf);
            }
        }
    } else if (d != 0) {
        if (team == d_5d51_d942)
            d_2414_845c[1][b]++;
        else
            d_2414_845c[0][b]++;
    }
    f_76ea_2fd9();
}

void f_7c1d_079e(char c)
{
    char buf[320];

    f_76ea_2364(d_5d51_d8f4, d_5d51_d8f4, d_5d51_d8f2);
    f_1646_4ba0("");
    if (strlen(d_2414_41c4) + 9 <= 19)
        sprintf(buf, " %s from the", d_2414_41c4);
    else
        sprintf(buf, " %s", d_2414_41c4);
    f_1646_3e54(3.0, 2.0, -d_5d51_d93e, d_5d51_d9c8, 165, buf);
    sprintf(buf, " %s", d_2414_4214);
    if (buf[strlen(buf) - 1] == '*')
        buf[strlen(buf) - 1] = 0;
    f_1646_3e54(3.0, 4.5, -d_5d51_d93e, d_5d51_d9c8, 165, buf);
    f_7c1d_00ea();
    f_7c1d_0c36(d_5d51_d942, d_2414_40d4);
    sprintf(buf, " %s ", f_1d5e_0e5f(d_5d51_b476[d_5d51_d942]));
    f_1646_3e54(3.0, 12.0, -d_5d51_d93e, d_5d51_d9c8, 0, buf);
    f_76ea_2364(d_5d51_d8f2, d_5d51_d8f4, d_5d51_d8f2);
    sprintf(buf, " %s ", f_1d5e_0e5f(d_5d51_b476[d_5d51_d940]));
    f_1646_3e54(21.0, 12.0, -d_5d51_d93e, d_5d51_d9c8, 0, buf);
    f_7c1d_0b15();
    f_1646_357e(30, 132, 1, "CHANCES :");
    sprintf(buf, "%d", d_5d51_d8b2);
    f_1646_357e(96, 132, 5, buf);
    f_1646_357e(174, 132, 1, "CHANCES :");
    sprintf(buf, "%d", d_5d51_d8b0);
    f_1646_357e(240, 132, 5, buf);
    f_1d5e_08d7(17);
    for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= 2; d_5d51_d9d0++) {
        f_1d5e_0929(d_5d51_d9d0 * 36 + 23, 138, d_5d51_d9d0 * 36 + 32, 178);
        f_1d5e_0929(d_5d51_d9d0 * 36 + 167, 138, d_5d51_d9d0 * 36 + 176, 178);
    }
    f_1646_357e(28, 188, 6, "DEF   MID   ATT         DEF   MID   ATT");
    if (c == 1)
        f_76ea_4c0b(3.5, 21.5);
    else if (c == 2)
        f_76ea_4c0b(21.5, 3.5);
}

void f_7c1d_0b15(void)
{
    char buf[320];

    f_1d5e_0822(134, 91, 153, 106);
    f_1d5e_0822(278, 91, 297, 106);
    sprintf(buf, "%d", d_5d51_d89c);
    f_1646_3c89(18.0, 12.0, 1, buf);
    sprintf(buf, "%d", d_5d51_d89a);
    f_1646_3c89(36.0, 12.0, 1, buf);
    if (d_5d51_d5dd != 0) {
        f_1d5e_0822(223, 46, 277, 52);
        sprintf(buf, "AGG %d-%d", d_5d51_d89c + d_5d51_d93a, d_5d51_d89a + d_5d51_d938);
        f_1646_357e(232, 52, 3, buf);
    }
}

void f_7c1d_0c36(int team, char far *s)
{
    char buf[320];

    if (team == d_5d51_d942)
        f_76ea_2364(d_5d51_d8f4, d_5d51_d8f4, d_5d51_d8f2);
    else
        f_76ea_2364(d_5d51_d8f2, d_5d51_d8f4, d_5d51_d8f2);
    f_7c1d_0cc1();
    sprintf(buf, " %s ", s);
    f_1646_3e54(3.0, 8.5, -d_5d51_d93e, d_5d51_d9c8, 0, buf);
}

void f_7c1d_0cc1(void)
{
    f_1d5e_0822(0x10, 0x38, 0x138, 0x50);
}

void f_7c1d_0cde(int team)
{
    int a;
    int w;
    char buf[40];
    int i;
    int b;
    int v;

    do {
        d_5d51_d5ca = -1;
        a = f_1d5e_0d6a(34);
        if ((d_5d51_d562 == 0 && team == d_5d51_d942) ||
            (d_5d51_d561 == 0 && team == d_5d51_d940))
            b = 10;
        else
            do {
                b = f_1d5e_0d6a(10);
            } while (f_1d5e_0d6a(3) && b >= 3 && b <= 5);
        i = 0;
        do {
            v = d_5d51_2700[i++];
            if (v != -1) {
                w = d_5d51_2700[i++];
                if (a == v && b == w) {
                    d_5d51_d5ca = 0;
                    v = -1;
                }
            }
        } while (v != -1);
        if (d_5d51_d5ca != 0) {
            strcpy(d_2414_39f0, d_5d51_264c[a]);
            strcpy(d_2414_39a0, d_5d51_26d4[b]);
            if (d_2414_39a0[strlen(d_2414_39a0) - 1] == '*') {
                if (team < 38)
                    strcpy(buf, f_1646_48c0(d_3404_0e34[team][0]));
                else
                    strcpy(buf, "their 'keeper");
                d_2414_39a0[strlen(d_2414_39a0) - 1] = ' ';
                strcat(d_2414_39a0, buf);
            }
            if (strlen(d_2414_39f0) + strlen(d_2414_39a0) > 32)
                d_5d51_d5ca = 0;
        }
    } while (!d_5d51_d5ca);
    if (b < 10) {
        d_5d51_d5b0 = -1;
        switch (a) {
        case 0: case 5: case 12: case 13: case 22: case 29:
            d_5d51_d5b0 = 0;
            d_5d51_d563 = 0;
        }
        if (d_5d51_d563)
            strcpy(d_2414_3a40, "Magnificent goal");
        else if (d_5d51_d5b0 && (!f_1d5e_0d6a(4) || a == 16)) {
            if (f_1d5e_0d6a(2) == 0)
                strcpy(d_2414_3a40, "Brilliant goal");
            else
                strcpy(d_2414_3a40, "Superb goal");
        } else
            strcpy(d_2414_3a40, "Goal");
    }
}

void f_7c1d_0f30(void)
{
    if (d_5d51_d8e0 + d_5d51_d8de > 0)
        f_7c1d_0c36(d_5d51_d942, d_2414_40d4);
    d_5d51_d826 = 1;
    d_5d51_d610 = 0;
    d_5d51_d60e = 0;
    d_5d51_d60c = 5;
    while (f_7c1d_10ce(d_5d51_d898, d_5d51_d896, d_5d51_d610, d_5d51_d60e, d_5d51_d60c) == 0) {
        f_7c1d_1218(d_5d51_d942, d_5d51_d85c, 1);
        d_5d51_d610++;
        if (d_5d51_d5bd) {
            d_5d51_d898++;
            d_5d51_d89c++;
            if (d_5d51_d8e0 + d_5d51_d8de > 0)
                f_7c1d_0b15();
        }
        if (f_7c1d_10ce(d_5d51_d898, d_5d51_d896, d_5d51_d610, d_5d51_d60e, d_5d51_d60c) == 0) {
            f_7c1d_1218(d_5d51_d940, d_5d51_d85a, 1);
            d_5d51_d60e++;
            if (d_5d51_d5bd) {
                d_5d51_d896++;
                d_5d51_d89a++;
                if (d_5d51_d8e0 + d_5d51_d8de > 0)
                    f_7c1d_0b15();
            }
        }
        if (d_5d51_d898 == d_5d51_d896 && d_5d51_d610 == d_5d51_d60c)
            d_5d51_d60c++;
    }
    if (d_5d51_d8e0 + d_5d51_d8de > 0) {
        d_5d51_d9ca = d_5d51_d898 > d_5d51_d896 ? d_5d51_d942 : d_5d51_d940;
        sprintf(d_2414_4b56, "%s win the match! ", (char far *)d_5d51_b476[d_5d51_d9ca]);
        f_7c1d_0c36(d_5d51_d9ca, d_2414_4b56);
    }
    for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= 15; d_5d51_d9d0++)
        for (d_5d51_d9fe = 0; d_5d51_d9fe <= 1; d_5d51_d9fe++)
            if (d_3404_0dce[d_5d51_d9fe][d_5d51_d9d0] == 7)
                d_3404_0dce[d_5d51_d9fe][d_5d51_d9d0] = 0;
}

char f_7c1d_10ce(int a, int b, int na, int nb, int n)
{
    if (a != b) {
        if (a + (n - na) < b)
            return -1;
        if (b + (n - nb) < a)
            return -1;
    }
    return 0;
}

void f_7c1d_1102(int team)
{
    for (;;) {
        d_5d51_d934 = 0;
        d_5d51_d858 = -1;
        for (d_5d51_d9fe = 0; d_5d51_d9fe <= 15; d_5d51_d9fe++) {
            if (d_3404_0dce[team == d_5d51_d940][d_5d51_d9fe] < 2) {
                if (f_1646_2cc9(team))
                    f_b0f1_3629(d_3404_0e34[team][d_5d51_d9fe]);
                else
                    f_76ea_324d(team, d_5d51_d9fe);
                if (d_5d51_d84c > d_5d51_d934) {
                    d_5d51_d934 = d_5d51_d84c;
                    d_5d51_d9f0 = d_3404_0e34[team][d_5d51_d9fe];
                    d_5d51_d858 = d_5d51_d9fe;
                }
            }
        }
        if (d_5d51_d858 != -1)
            break;
        for (d_5d51_d9fe = 0; d_5d51_d9fe <= 15; d_5d51_d9fe++)
            if (d_3404_0dce[team == d_5d51_d940][d_5d51_d9fe] == 7)
                d_3404_0dce[team == d_5d51_d940][d_5d51_d9fe] = 0;
    }
}

void f_7c1d_1218(int team, int chance, int shootout)
{
    unsigned char c;

    f_7c1d_1102(team);
    d_5d51_d824 = team == d_5d51_d942 ? d_5d51_d940 : d_5d51_d942;
    d_5d51_d5bd = 0;
    if (d_5d51_d8e0 + d_5d51_d8de > 0) {
        if (shootout) {
            sprintf(d_2414_4b56, "%s's penalty....", (char far *)d_5d51_b476[team]);
            f_7c1d_0c36(team, d_2414_4b56);
            f_1d5e_0dbd(100);
        }
        if (team < 38)
            sprintf(d_2414_4b56, "%s steps up...", f_1646_470f(d_5d51_d9f0));
        else
            sprintf(d_2414_4b56, "Their No.%d steps up...", d_5d51_d858 + 1);
        f_7c1d_0c36(team, d_2414_4b56);
        f_1d5e_0dbd(f_1d5e_0d6a(3) * 30 + 40);
    }
    if (team < 38) {
        if (f_1646_5de5(d_5d51_d9f0))
            c = (d_44d7_0000[7][d_5d51_d9f0] * 30 + d_44d7_0000[15][d_5d51_d9f0]) / 8;
        else
            c = 25;
    } else
        c = 75;
    if ((d_5d51_d9b4 = f_1d5e_0d6a(c + 300)) > f_1d5e_0d6a(chance)) {
        if (d_5d51_d9b4 % 12 > 0) {
            d_5d51_d822 = f_1d5e_0d6a(d_5d51_d5c1 + 5);
            switch (d_5d51_d822) {
            case 0: strcpy(d_2414_37c0, "blasts it home"); break;
            case 1: strcpy(d_2414_37c0, "finds the corner"); break;
            case 2: strcpy(d_2414_37c0, "scores easily"); break;
            case 3: strcpy(d_2414_37c0, "buries it"); break;
            case 4:
                sprintf(d_2414_37c0, "makes it %d-%d", d_5d51_d89c + (team == d_5d51_d942),
                        d_5d51_d89a + (team == d_5d51_d940));
                break;
            }
            if (team < 38)
                sprintf(d_2414_4b56, "And %s %s !", f_1646_48c0(d_5d51_d9f0), d_2414_37c0);
            else
                sprintf(d_2414_4b56, "And he %s !", d_2414_37c0);
            d_5d51_d5bd = -1;
        } else {
            d_5d51_d820 = f_1d5e_0d6a(4);
            switch (d_5d51_d820) {
            case 0: strcpy(d_2414_3770, "blasts it over"); break;
            case 1: strcpy(d_2414_3770, "puts it wide"); break;
            case 2: strcpy(d_2414_3770, "hits the post"); break;
            case 3: strcpy(d_2414_3770, "hits the bar"); break;
            }
            if (team < 38)
                sprintf(d_2414_4b56, "But %s %s !", f_1646_48c0(d_5d51_d9f0), d_2414_3770);
            else
                sprintf(d_2414_4b56, "But he %s !", d_2414_3770);
        }
    } else if (d_5d51_d824 < 38) {
        sprintf(d_2414_4b56, "But %s saves it !", f_1646_48c0(d_3404_0e34[d_5d51_d824][0]));
        if (!f_1646_5dff(d_3404_0e34[d_5d51_d824][0]))
            d_44d7_0000[16][d_3404_0e34[d_5d51_d824][0]] = d_44d7_0000[16][d_3404_0e34[d_5d51_d824][0]] + 10;
    } else
        strcpy(d_2414_4b56, "But the 'keeper saves it !");
    if (d_5d51_d8e0 + d_5d51_d8de > 0) {
        f_7c1d_0c36(team, d_2414_4b56);
        f_1d5e_0dbd(100);
    }
    if (shootout)
        d_3404_0dce[team == d_5d51_d940][d_5d51_d858] = 7;
    else if (d_5d51_d8e0 + d_5d51_d8de > 0)
        f_7c1d_0c36(d_5d51_d942, d_2414_40d4);
}

void f_7c1d_1625(int team)
{
    float f;

    f = 1.0;
    if (f_1646_2674(d_5d51_da06)) {
        d_5d51_d5f5 = f_1646_717d(d_5d51_d942);
        d_5d51_d5f4 = f_1646_717d(d_5d51_d940);
        d_5d51_d5af = (team == d_5d51_d942 && d_5d51_d5f5 > d_5d51_d5f4)
                   || (team == d_5d51_d940 && d_5d51_d5f5 < d_5d51_d5f4);
        f = d_5d51_d5af ? 1.04 : 1.02;
    } else if (f_1646_2833(d_5d51_da06, d_5d51_d9e6 + 1)
            || f_1646_28e4(d_5d51_da06, d_5d51_d9e6 + 1)
            || f_1646_297b(d_5d51_da06, d_5d51_d9e6 + 1)) {
        f = 1.1;
    }
    d_2414_fce4[team == d_5d51_d940] = f;
}

unsigned char f_7c1d_1717(int p, int team)
{
    d_5d51_d5f3 = team == d_5d51_d940 ? 1 : 0;
    if (d_3404_0dee[d_5d51_d5f3][p] == 0) {
        d_5d51_d81e = d_3404_0e30[d_5d51_d5f3];
        if (team < 38) {
            d_5d51_d5f2 = d_3404_1334[team][0][p];
            d_5d51_d81c = d_3404_4226[team];
            d_5d51_d9f0 = d_3404_0e34[team][p];
            if (!f_1646_5dff(d_5d51_d9f0)) {
                d_5d51_d818 = d_44d7_0000[16][d_5d51_d9f0];
                d_5d51_d81a = d_3404_4272[team];
                if (d_5d51_d81a == 650) {
                    d_5d51_d814 = d_5d51_d818 * 0.8;
                } else {
                    d_5d51_d816 = (1 - (d_4f37_0960[d_3404_225c[d_5d51_d81c]][d_3404_225c[d_5d51_d81a]] - 5) * 0.05)
                                * d_3404_29fa[d_5d51_d81a];
                    d_5d51_d814 = (1 - (d_4f37_0960[d_3c0d_0000[17][d_5d51_d9f0]][d_3404_225c[d_5d51_d81a]] - 5) * 0.05)
                                * ((d_5d51_d818 * 2 + d_5d51_d816) / 3.0);
                }
                d_5d51_d814 = (f_1d5e_12e0(f_1d5e_1342(d_5d51_d814, d_5d51_d818 * 1.25), d_5d51_d818 * 0.75) * 0.4
                               + d_5d51_d81e) / 5.0;
                d_5d51_d812 = f_1646_2075(d_5d51_d5f2, d_5d51_d9f0, d_3404_24e6[d_3404_4226[team]] / 16);
                if (f_1646_2551(d_5d51_d5f2) >= d_5d51_d812)
                    d_5d51_d814 = (long)d_5d51_d814 * d_5d51_d812 / f_1646_2551(d_5d51_d5f2);
                else
                    d_5d51_d814 = (d_5d51_d812 / (f_1646_2551(d_5d51_d5f2) * 2.0) + 0.5) * d_5d51_d814;
            } else {
                d_5d51_d814 = f_1646_5e4a(d_5d51_d9f0, d_5d51_d5f2) + (int)f_1d5e_0d6a(3) - (int)f_1d5e_0d6a(3);
            }
        } else {
            d_5d51_d814 = (d_3404_50e2[team == 39][p] * 4 + d_5d51_d81e) / 5;
        }
        d_5d51_d814 = d_5d51_d814 * d_2414_fce4[d_5d51_d5f3];
        d_3404_0dee[d_5d51_d5f3][p] = d_5d51_d814 * 0.6 + 9.0;
        d_2414_fcec[d_5d51_d5f3][p] = f_1d5e_12e0(f_1d5e_1342(d_5d51_d814 * 0.25 + 3.0, 8.0), 3.0);
    }
    return d_3404_0dee[d_5d51_d5f3][p];
}

void f_7c1d_1b40(team)
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

    d_5d51_d8ca = 0;
    d_5d51_d810 = 0;
    n = 0;
    d_5d51_d80e = 0;
    d_5d51_d9b4 = 0;
    d_5d51_d80c = 0;
    d_5d51_d80a = 0;
    d_5d51_d808 = 0;
    d_5d51_d806 = 0;
    d_5d51_d804 = 0;
    d_5d51_d802 = 0;
    d_5d51_d800 = 0;
    d_5d51_d85e = 0;
    d_5d51_d7fe = 0;
    d_5d51_d511 = 0;
    d_5d51_d50d = 0;
    d_5d51_d840 = 400;
    d_5d51_d60a = 750;
    f_7c1d_2aec(team);
    if (team == d_5d51_d942) {
        for (i = 0; i < 3; i++)
            for (j = 0; j < 60; j++)
                d_3404_502e[i][j] = 0;
    } else {
        for (i = 0; i < 3; i++)
            for (j = 0; j < 60; j++)
                d_3404_4f7a[i][j] = 0;
    }
    for (d_5d51_d9fe = 0; d_5d51_d9fe <= 15; d_5d51_d9fe++) {
        if (d_3404_0dce[team == d_5d51_d940][d_5d51_d9fe] < 2) {
            unsigned char k;

            d_5d51_d88a = f_7c1d_1717(d_5d51_d9fe, team);
            d_5d51_d91c = d_3404_1334[team][0][d_5d51_d9fe];
            k = d_3404_1334[team][2][d_5d51_d9fe];
            f8 = (k == 1) * -0.25 + (k == 2) * 0.25;
            fc = 0;
            f10 = 0;
            if (team < 38) {
                d_5d51_d6c2 = d_3404_0e34[team][d_5d51_d9fe];
                if (!f_1646_5dff(d_5d51_d6c2)) {
                    float t;

                    d_5d51_d511 = (x = d_44d7_0000[6][d_5d51_d6c2]) * x / 2000.0;
                    d_5d51_d50d = (x = d_44d7_0000[7][d_5d51_d6c2]) * x / 2000.0;
                    if (d_5d51_d91c == 7) {
                        fc = (x = d_44d7_0000[1][d_5d51_d6c2]) * x / 1000.0;
                        f10 = (x = d_44d7_0000[2][d_5d51_d6c2]) * x / 1000.0;
                    }
                    f14 = (x = d_44d7_0000[12][d_5d51_d6c2]) * x / 2000.0;
                    c4 = f_1d5e_1308((int)(d_44d7_0000[21][d_5d51_d6c2] / 100.0 * d_44d7_0000[22][d_5d51_d6c2]), 1);
                    d_5d51_d840 -= d_44d7_0000[11][d_5d51_d6c2] + 5;
                    x = d_44d7_0000[5][d_5d51_d6c2];
                    t = d_44d7_0000[16][d_5d51_d6c2] / 100.0 * (x * x / 100.0);
                    d_5d51_d608 = t * t * t;
                } else {
                    d_5d51_d511 = 0.095;
                    d_5d51_d50d = 0.095;
                    if (d_5d51_d91c == 7) {
                        fc = 0.095;
                        f10 = 0.095;
                    }
                    f14 = 0.095;
                    c4 = 5;
                    d_5d51_d840 -= 10;
                    d_5d51_d608 = f_1d5e_0d6a(50);
                }
            } else {
                if (team == d_5d51_d942)
                    d_5d51_d579 = d_5d51_d8f4 >= 438 ? -1 : 0;
                else
                    d_5d51_d579 = d_5d51_d8f2 >= 438 ? -1 : 0;
                d_5d51_d511 = d_5d51_d579 ? 0.09 : 0.1;
                d_5d51_d50d = d_5d51_d579 ? 0.09 : 0.1;
                if (d_5d51_d91c == 7) {
                    fc = d_5d51_d579 ? 0.09 : 0.1;
                    f10 = d_5d51_d579 ? 0.09 : 0.1;
                }
                f14 = d_5d51_d579 ? 0.09 : 0.1;
                c4 = d_5d51_d579 ? 5 : 10;
                d_5d51_d840 -= 10;
                d_5d51_d608 = f_1d5e_0d6a(d_5d51_d579 ? 100 : 400);
            }
            if (d_5d51_d9fe > 10)
                c3 = d_3404_5197[team == d_5d51_d940][d_5d51_d9fe];
            else
                c3 = 0;
            if (d_5d51_d91c == 1 && d_5d51_d85e == 0) {
                d_5d51_d8ca = (f14 + 3.95) * d_5d51_d88a + d_5d51_d8ca;
                d_5d51_d85e = 1;
                d_5d51_d608 = 0;
            }
            if (d_5d51_d91c == 11) {
                d_5d51_d8ca = (f14 + 1.45) * d_5d51_d88a + d_5d51_d8ca;
                d_5d51_d810 = (f14 + 2.95) * d_5d51_d88a + d_5d51_d810;
                n = (f14 + 0.45) * d_5d51_d88a + n;
                if (team == d_5d51_d942)
                    f_7c1d_2ce5(c4, c3, 0);
                else
                    f_7c1d_2d59(c4, c3, 0);
                d_5d51_d7fe = 1;
                d_5d51_d608 /= 4;
            }
            if (d_5d51_d91c == 12) {
                d_5d51_d8ca = (f14 + 0.95) * d_5d51_d88a + d_5d51_d8ca;
                d_5d51_d810 = (f14 + 1.95) * d_5d51_d88a + d_5d51_d810;
                n = (f14 + 1.9) * d_5d51_d88a + n;
                if (team == d_5d51_d942)
                    f_7c1d_2ce5(c4, c3, 0);
                else
                    f_7c1d_2d59(c4, c3, 0);
                d_5d51_d7fe = 1;
                d_5d51_d608 /= 4;
            }
            if (d_5d51_d91c == 13) {
                d_5d51_d810 = (f14 + 0.35) * d_5d51_d88a + d_5d51_d810;
                n = (1.75 - f8 + fc + f10 + f14) * d_5d51_d88a + n;
                d_5d51_d80e = (f8 + 1.4 + d_5d51_d511 + f14) * d_5d51_d88a + d_5d51_d80e;
                d_5d51_d9b4 = (d_5d51_d50d + 2.0) * d_5d51_d88a + d_5d51_d9b4;
                if (team == d_5d51_d942)
                    f_7c1d_2ce5(c4, c3, 1);
                else
                    f_7c1d_2d59(c4, c3, 1);
            }
            if (d_5d51_d91c > 1 && d_5d51_d91c < 5) {
                d_5d51_d8ca = (f14 + 0.95) * d_5d51_d88a + d_5d51_d8ca;
                d_5d51_d810 = (1.95 - f8 + f14) * d_5d51_d88a + d_5d51_d810;
                n = (f8 + 0.95 + f14) * d_5d51_d88a + n;
                d_5d51_d9b4 = (d_5d51_d50d + 1.0) * d_5d51_d88a + d_5d51_d9b4;
                if (team == d_5d51_d942)
                    f_7c1d_2ce5(c4, c3, 0);
                else
                    f_7c1d_2d59(c4, c3, 0);
                d_5d51_d608 = d_5d51_d608 / (4.0 - f8 * 2.0);
            }
            if (d_5d51_d91c > 4 && d_5d51_d91c < 8) {
                d_5d51_d810 = (f14 + 0.95) * d_5d51_d88a + d_5d51_d810;
                n = (1.75 - f8 + fc + f10 + f14) * d_5d51_d88a + n;
                d_5d51_d80e = (f8 + 0.8 + d_5d51_d511 + f14) * d_5d51_d88a + d_5d51_d80e;
                d_5d51_d9b4 = (d_5d51_d50d + 2.0) * d_5d51_d88a + d_5d51_d9b4;
                if (team == d_5d51_d942)
                    f_7c1d_2ce5(c4, c3, 1);
                else
                    f_7c1d_2d59(c4, c3, 1);
                d_5d51_d608 = d_5d51_d608 / (2.0 - f8 * 2.0);
            }
            if (d_5d51_d91c > 7 && d_5d51_d91c < 11) {
                n = (0.95 - f8 + f14) * d_5d51_d88a + n;
                d_5d51_d80e = (f8 + 1.8 + d_5d51_d511 + f14) * d_5d51_d88a + d_5d51_d80e;
                d_5d51_d9b4 = (d_5d51_d50d + 4.0) * d_5d51_d88a + d_5d51_d9b4;
                if (team == d_5d51_d942)
                    f_7c1d_2ce5(c4, c3, 2);
                else
                    f_7c1d_2d59(c4, c3, 2);
            }
            d_5d51_d60a = f_1d5e_1308(3, d_5d51_d60a - d_5d51_d608);
            switch (d_5d51_d91c) {
            case 2:
                d_5d51_d80c++;
                break;
            case 3:
                d_5d51_d80a++;
                break;
            case 4:
                d_5d51_d808++;
                break;
            case 5:
            case 8:
                d_5d51_d806++;
                break;
            case 6:
            case 9:
                d_5d51_d804++;
                break;
            case 7:
                d_5d51_d802++;
                break;
            case 10:
                d_5d51_d800++;
            }
        }
    }
    d_5d51_d810 += (d_5d51_d80c != 1) * 15 + (d_5d51_d80a != 1) * 15 + (d_5d51_d808 < 1) * 15;
    n += (d_5d51_d80c != 1) * 15 + (d_5d51_d80a != 1) * 15 + (d_5d51_d808 < 1) * 15
        + (d_5d51_d806 == 0 || d_5d51_d806 > 2) * 15 + (d_5d51_d804 == 0 || d_5d51_d804 > 2) * 15
        + (d_5d51_d802 == 0 || d_5d51_d802 > 3) * 15 + (d_5d51_d800 == 0 || d_5d51_d800 > 3) * 15;
    d_5d51_d80e += (d_5d51_d806 == 0 || d_5d51_d806 > 2) * 15 + (d_5d51_d804 == 0 || d_5d51_d804 > 2) * 15
        + (d_5d51_d802 == 0 || d_5d51_d802 > 3) * 15 + (d_5d51_d800 == 0 || d_5d51_d800 > 3) * 15;
    d_5d51_d9b4 += (d_5d51_d806 == 0 || d_5d51_d806 > 2) * 30 + (d_5d51_d804 == 0 || d_5d51_d804 > 2) * 30
        + (d_5d51_d802 == 0 || d_5d51_d802 > 3) * 30 + (d_5d51_d800 == 0 || d_5d51_d800 > 3) * 30;
    if (d_5d51_d808 > 2 && d_5d51_d7fe == 1 || d_5d51_d808 > 3) {
        d_5d51_d810 -= (d_5d51_d808 + d_5d51_d7fe - 3) * 15;
        n -= (d_5d51_d808 + d_5d51_d7fe - 3) * 15;
    }
    d_5d51_d8ca = d_5d51_d8ca * 1.25;
    if (team < 38) {
        if (f_1646_2cc9(team) == 0) {
            float t;

            t = d_3404_2770[d_3404_4226[team]] / 10.0;
            d_5d51_d509 = t * t / 20000.0;
        } else
            d_5d51_d509 = 0;
    } else
        d_5d51_d509 = 0.01;
    if (team == d_5d51_d942) {
        d_5d51_d856 = d_5d51_d840;
        if (f_1646_2b65(d_5d51_da06, d_5d51_d9e6 + 1) == 0)
            d_5d51_d505 = 1.02
                - (f_1646_2833(d_5d51_da06, d_5d51_d9e6 + 1) || f_1646_28e4(d_5d51_da06, d_5d51_d9e6 + 1)
                   || f_1646_297b(d_5d51_da06, d_5d51_d9e6 + 1)) * 0.02
                + f_1646_2674(d_5d51_da06) * 0.01;
        else
            d_5d51_d505 = 1.0;
        d_5d51_d505 = (d_3404_443a[0][d_5d51_d942] - 8.5) / 500.0 + d_5d51_d509 + d_5d51_d505;
        d_5d51_d562 = d_5d51_d85e == 1 ? -1 : 0;
        d_5d51_d85a = d_5d51_d8ca * d_5d51_d505;
        d_5d51_d864 = d_5d51_d810 * d_5d51_d505;
        d_5d51_d978 = n * d_5d51_d505;
        d_5d51_d870 = d_5d51_d80e * d_5d51_d505;
        d_5d51_d862 = d_5d51_d9b4 * d_5d51_d505;
        d_5d51_d614 = d_5d51_d60a;
    } else {
        d_5d51_d505 = (d_3404_443a[0][d_5d51_d940] - 8.5) / 500.0 + 1.0 + d_5d51_d509;
        d_5d51_d854 = d_5d51_d840;
        d_5d51_d561 = d_5d51_d85e == 1 ? -1 : 0;
        d_5d51_d85c = d_5d51_d8ca * d_5d51_d505;
        d_5d51_d86c = d_5d51_d810 * d_5d51_d505;
        d_5d51_d87a = n * d_5d51_d505;
        d_5d51_d868 = d_5d51_d80e * d_5d51_d505;
        d_5d51_d860 = d_5d51_d9b4 * d_5d51_d505;
        d_5d51_d612 = d_5d51_d60a;
    }
}

void f_7c1d_2aec(int team)
{
    char ok;

    d_5d51_d7fc = f_1646_2cc9(team) ? 14 : 10;
    d_5d51_d9c2 = 0;
    for (d_5d51_d9fe = 0; d_5d51_d9fe <= d_5d51_d7fc; d_5d51_d9fe++) {
        if (d_3404_0dce[team == d_5d51_d940][d_5d51_d9fe] < 2) {
            if (team > 37) {
                d_5d51_d9ac = d_3404_1334[team][0][d_5d51_d9fe];
                d_5d51_d81e = f_1646_6a5c(d_5d51_d9fe, team, d_5d51_d9ac);
                ok = -1;
            } else if (f_1646_2cc9(team) == 0) {
                if (!f_1646_5dff(d_3404_0e34[team][d_5d51_d9fe]))
                    d_5d51_d81e = f_1646_69a0(d_3404_0e34[team][d_5d51_d9fe],
                                              d_3404_1334[team][0][d_5d51_d9fe]);
                else
                    d_5d51_d81e = 1;
                ok = -1;
            } else {
                if (!f_1646_5dff(d_3404_0e34[team][d_5d51_d9fe]))
                    d_5d51_d81e = f_1646_69a0(d_3404_0e34[team][d_5d51_d9fe],
                                              d_3404_1334[team][0][d_5d51_d9fe]);
                else
                    d_5d51_d81e = 1;
                ok = d_3404_049a[d_3404_4226[team]] - 1 == d_5d51_d9fe;
            }
            if (ok && d_5d51_d81e > d_5d51_d9c2) {
                d_5d51_d9c2 = d_5d51_d81e;
                d_3404_0e2e[team == d_5d51_d940] = d_5d51_d9fe + 1;
                d_5d51_d92a = d_5d51_d9fe + 1;
            }
        }
    }
    d_3404_0e2e[team == d_5d51_d940 ? 3 : 2] = d_5d51_d9c2;
}

void f_7c1d_2ce5(unsigned char a, unsigned char b, unsigned char c)
{
    int base;

    base = a * 3 + b + 57;
    for (d_5d51_d9d0 = base; d_5d51_d9d0 <= 119; d_5d51_d9d0++)
        d_3404_4ff2[c][d_5d51_d9d0] = d_3404_4ff2[c][d_5d51_d9d0] + (d_5d51_d9d0 - base) / 4;
}

void f_7c1d_2d59(unsigned char a, unsigned char b, unsigned char c)
{
    int base;

    base = a * 3 + b + 57;
    for (d_5d51_d9d0 = base; d_5d51_d9d0 <= 119; d_5d51_d9d0++)
        d_3404_4f3e[c][d_5d51_d9d0] = d_3404_4f3e[c][d_5d51_d9d0] + (d_5d51_d9d0 - base) / 4;
}

void f_7c1d_2dcd(int team)
{
    float f;
    long v;

    switch (f_1646_717d(d_5d51_d942)) {      /* 1: team d942 is in Serie B (> 17) */
    case 1:
        f = 6.5;
        break;
    default:
        f = 10.0;
    }
    v = f_1d5e_131d((long)(d_5d51_d485 - d_3404_4462[d_5d51_d942] * 1000
                                         / (f_1646_6ab8(d_5d51_d942) * 4.0)), 0L) * f;
    if (f_1646_2b65(d_5d51_da06, d_5d51_d9e6 + 1))
        v = v / 2;
    else if (f_1646_2833(d_5d51_da06, d_5d51_d9e6 + 1) || f_1646_28e4(d_5d51_da06, d_5d51_d9e6 + 1)
             || f_1646_297b(d_5d51_da06, d_5d51_d9e6 + 1))
        v = team == d_5d51_d940 ? 0 : v;
    else
        v = v * (team == d_5d51_d940 ? 0.25 : 0.75);
    d_5d51_da44 = f_1d5e_1618(d_5d51_dd98, 1);
    (*d_5d51_da44)[team] += v;
}

void f_7c1d_2f57(void)
{
    int a, b, c, d, e, g;
    int s, t;
    int u;
    float r;

    d_4f37_1390[d_5d51_d9e6][0][d_5d51_da06] = d_5d51_d8f4 * 32 + d_5d51_d89c - d_5d51_d898;
    d_4f37_1390[d_5d51_d9e6][1][d_5d51_da06] = d_5d51_d8f2 * 32 + d_5d51_d89a - d_5d51_d896;
    if (d_5d51_d5c1 != 0)
        d_2414_ecec[d_5d51_d9e6] = d_5d51_d896 > d_5d51_d898 ? 2 : 1;
    a = (long)d_5d51_d8ae * 100 / (d_5d51_d8ae + d_5d51_d8a4);
    b = (long)d_5d51_d8aa * 100 / (d_5d51_d8aa + d_5d51_d8a8);
    c = (long)d_5d51_d8a6 * 100 / (d_5d51_d8a6 + d_5d51_d8ac);
    d = (long)d_5d51_d8ac * 100 / (d_5d51_d8ac + d_5d51_d8a6);
    e = (long)d_5d51_d8a8 * 100 / (d_5d51_d8aa + d_5d51_d8a8);
    g = (long)d_5d51_d8a4 * 100 / (d_5d51_d8a4 + d_5d51_d8ae);
    s = 0;
    d_5d51_d922 = 0;
    for (d_5d51_d9fe = 0; d_5d51_d9fe <= 10; d_5d51_d9fe++) {
        s = s + d_2414_fcec[0][d_5d51_d9fe];
        d_5d51_d922 = d_5d51_d922 + d_2414_fcec[1][d_5d51_d9fe];
    }
    t = d_5d51_d8b2 * 8 + a + b + c;
    u = d_5d51_d8b0 * 8 + d + e + g;
    t += (d_5d51_d89c - d_5d51_d898) * 20
         + ((d_5d51_d89c - d_5d51_d898) - (d_5d51_d89a - d_5d51_d896)) * 8;
    u += (d_5d51_d89a - d_5d51_d896) * 20
         + ((d_5d51_d89a - d_5d51_d896) - (d_5d51_d89c - d_5d51_d898)) * 8;
    r = (float)s / d_5d51_d922 / ((float)t / u);
    if (r > 1)
        d_5d51_d501 = r * 0.75 - 0.75;
    else
        d_5d51_d501 = r * 4.5 - 3.0;
    d_2412_0012 = 0;
    d_2412_0010 = -1;
    f_7c1d_3259(d_5d51_d942, a, b, c, d_5d51_d8b2);
    f_7c1d_3259(d_5d51_d940, d, e, g, d_5d51_d8b0);
}

void f_7c1d_3259(team, a, b, c, d)
int team, a, b, c;
register int d;
{
    char k;
    float f;
    float g;

    for (d_5d51_d9fe = 0; d_5d51_d9fe <= 15; d_5d51_d9fe++) {
        if (team < 38)
            d_5d51_d9f0 = d_3404_0e34[team][d_5d51_d9fe];
        else
            d_5d51_d9f0 = d_3404_1334[team][0][d_5d51_d9fe] + 1500;
        k = d_3404_0dce[team == d_5d51_d940][d_5d51_d9fe];
        d_5d51_d908 = f_7c1d_3c1c(d_5d51_d9fe, team);
        if (k != 4 && d_5d51_d9f0 >= 0 && d_5d51_da1a - 1 >= d_5d51_d9f0) {
            if (f_1646_2674(d_5d51_da06)) {
                d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 1);
                d_5d51_da38[0][d_5d51_d9f0] = d_44d7_0000[18][d_5d51_d9f0];
            }
        }
        if (k != 4 && d_5d51_d908 >= 5) {
            if (d_3404_5102[team == d_5d51_d940][d_5d51_d9fe] == 0 || k == 0 || k == 1) {
                /* the fwait after this store is the one BCC writes before a label */
                if (1)
                    f = (team == d_5d51_d942 ? d_2414_fcec[0][d_5d51_d9fe] - d_5d51_d501
                         : d_2414_fcec[1][d_5d51_d9fe] + d_5d51_d501) + 0.5;
                d_5d51_d7fa = f;
                d_5d51_d7fa = f_1d5e_136a(f_1d5e_1308(1, d_5d51_d7fa), 10);
                d_3404_5102[team == d_5d51_d940][d_5d51_d9fe] = d_5d51_d7fa;
            } else {
                f = d_3404_5102[team == d_5d51_d940][d_5d51_d9fe];
                d_5d51_d7fa = f;
            }
            d_5d51_d7f8 = team == d_5d51_d942 ? d_2414_845c[0][d_5d51_d9fe] / 16
                          : d_2414_845c[1][d_5d51_d9fe] / 16;
            if (d_5d51_d7f8 > 0) {
                float t[3] = {0.5, 1.0, 2.0};

                f += t[f_1d5e_136a(d_5d51_d7f8, 3) - 1];
                d_5d51_d7fa = f;
                d_5d51_d7fa = f_1d5e_136a(f_1d5e_1308(1, d_5d51_d7fa), 10);
            }
            if ((char)f == (char)d_2412_0012)
                g = f_1d5e_0d6a(5) * 0.1;
            else
                g = 0;
            if (d_5d51_d8e2 == -1 && f + g > d_2412_0012 && d_5d51_d908 >= 20
                && d_3404_0dce[team == d_5d51_d940][d_5d51_d9fe] != 2) {
                d_2414_84bc.motm = team == d_5d51_d942 ? d_5d51_d9fe + 1 : d_5d51_d9fe + 17;
                d_2412_0010 = d_5d51_d9f0;
                d_2412_0012 = f;
            }
            if (d_5d51_d8e2 == -1 && team < 38 && d_5d51_da06 > 12 && !f_1646_5dff(d_5d51_d9f0)) {
                d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 1);
                d_5d51_da4c[0][d_5d51_d9f0] += d_5d51_d7fa;
                d_5d51_da4c[2][d_5d51_d9f0] += d_5d51_d7fa;
                d_3c0d_0000[22][d_5d51_d9f0] += d_5d51_d7fa;
                if (d_3c0d_0000[3][d_5d51_d9f0] > d_5d51_d7fa || d_3c0d_0000[3][d_5d51_d9f0] == 0)
                    d_3c0d_0000[3][d_5d51_d9f0] = d_5d51_d7fa;
                if (d_3c0d_0000[4][d_5d51_d9f0] < d_5d51_d7fa || d_3c0d_0000[4][d_5d51_d9f0] == 0)
                    d_3c0d_0000[4][d_5d51_d9f0] = d_5d51_d7fa;
                d_3c0d_0000[0][d_5d51_d9f0]++;
                d_3c0d_0000[12][d_5d51_d9f0]++;
                d_3c0d_0000[21][d_5d51_d9f0]++;
                if (d_5d51_da06 > 12 && d_44d7_0000[21][d_5d51_d9f0] >= 80 && !d_2414_af3c[d_5d51_d9f0].f0)
                    d_44d7_0000[21][d_5d51_d9f0] = f_1d5e_1308(0, d_44d7_0000[21][d_5d51_d9f0]
                        - f_1d5e_1308(abs(28 - d_44d7_0000[17][d_5d51_d9f0]) / 2, 2) * (d_5d51_d908 / 90));
                if (5 - f_1646_717d(team) > d_5d51_d7fa)
                    d_2414_af3d[d_5d51_d9f0][0] |= 0x80;
                if (team == d_5d51_d942) {
                    d_5d51_d7f8 = d_2414_845c[0][d_5d51_d9fe] / 16;
                    d_5d51_d928 = d_5d51_d8f2;
                } else {
                    d_5d51_d7f8 = d_2414_845c[1][d_5d51_d9fe] / 16;
                    d_5d51_d928 = d_5d51_d8f4;
                }
                f_9182_4a40(team, d_5d51_d928, d_5d51_d9f0, d_5d51_d7f8);
            }
        } else {
            d_5d51_d908 = 0;
            d_5d51_d7fa = 0;
        }
        if (d_5d51_d8e2 == -1)
            f_a7f0_8152(d_5d51_d9f0, 5);
        if (team == d_5d51_d942) {
            if (k == 4)
                d_2414_841c[0][d_5d51_d9fe] = -2;
            else if (d_5d51_d9fe < 15 || f_1646_60fb(team, d_5d51_da06, d_5d51_d9e6 + 1))
                d_2414_841c[0][d_5d51_d9fe] = d_5d51_d9f0;
            else
                d_2414_841c[0][d_5d51_d9fe] = -1;
            d_2414_847c[0][d_5d51_d9fe] = d_5d51_d7fa;
            if (d_3404_0dce[team == d_5d51_d940][d_5d51_d9fe] == 2)
                d_2414_849c[0][d_5d51_d9fe] = 1;
            else if (d_3404_0dce[team == d_5d51_d940][d_5d51_d9fe] == 3 ||
                     d_3404_0dce[team == d_5d51_d940][d_5d51_d9fe] == 6)
                d_2414_849c[0][d_5d51_d9fe] = 2;
            else if (d_3404_0dce[team == d_5d51_d940][d_5d51_d9fe] == 1)
                d_2414_849c[0][d_5d51_d9fe] = 3;
        }
        if (team == d_5d51_d940) {
            if (k == 4)
                d_2414_841c[1][d_5d51_d9fe] = -2;
            else if (d_5d51_d9fe < 15 || f_1646_60fb(team, d_5d51_da06, d_5d51_d9e6 + 1))
                d_2414_841c[1][d_5d51_d9fe] = d_5d51_d9f0;
            else
                d_2414_841c[1][d_5d51_d9fe] = -1;
            d_2414_847c[1][d_5d51_d9fe] = d_5d51_d7fa;
            if (d_3404_0dce[team == d_5d51_d940][d_5d51_d9fe] == 2)
                d_2414_849c[1][d_5d51_d9fe] = 1;
            else if (d_3404_0dce[team == d_5d51_d940][d_5d51_d9fe] == 3 ||
                     d_3404_0dce[team == d_5d51_d940][d_5d51_d9fe] == 6)
                d_2414_849c[1][d_5d51_d9fe] = 2;
            else if (d_3404_0dce[team == d_5d51_d940][d_5d51_d9fe] == 1)
                d_2414_849c[1][d_5d51_d9fe] = 3;
        }
    }
    if (team == d_5d51_d940 && d_5d51_d8e2 == -1 && d_2412_0010 >= 0
        && d_2412_0010 <= d_5d51_da1a - 1 && d_5d51_da06 > 12) {
        d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 1);
        d_5d51_da38[3][d_2412_0010]++;
    }
    d_2414_8418 = d_5d51_d485;
    if (team == d_5d51_d942) {
        d_2414_84bc.def = a;
        d_2414_84bc.mid = b;
        d_2414_84bc.att = c;
        d_2414_84bc.shots_h = d;
        d_2414_84bc.capt_h = d_3404_0e2e[0];
    } else {
        d_2414_84bc.shots_a = d;
        d_2414_84bc.capt_a = d_3404_0e2e[1];
    }
}

int f_7c1d_3c1c(int i, int team)
{
    unsigned char on;
    unsigned char off;
    int r;

    r = 0;
    on = d_3404_0dae[team == d_5d51_d942 ? 0 : 1][i];
    off = d_3404_0d8e[team == d_5d51_d942 ? 0 : 1][i];
    if (i <= 10)
        on = 0;
    if (on < 255) {
        if (off == 255)
            r = d_5d51_d90a - on;
        else
            r = off - on;
    }
    return r;
}

/* the match statistics screen (c: full time, else half time / so far) */
void f_7c1d_3ca2(int a, int b, char c)
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
        f_1646_6097();
        if (c) {
            f_1646_4ba0("Match Statistics");
            if (d_2414_8414[2].home == 15 && d_2414_8414[2].away == 15) {
                d_5d51_d7f6 = d_2414_8414[1].home;
                d_5d51_d7f4 = d_2414_8414[1].away;
            } else {
                d_5d51_d7f6 = d_2414_8414[2].home;
                d_5d51_d7f4 = d_2414_8414[2].away;
            }
        } else {
            if (d_5d51_d90a == 45)
                strcpy(s, "Half-time Stats");
            else
                sprintf(s, "Stats %d mins", d_5d51_d90a);
            f_1646_4ba0(s);
            d_5d51_d7f6 = d_5d51_d89c;
            d_5d51_d7f4 = d_5d51_d89a;
        }
        d_5d51_d485 = d_2414_8418;
        h1 = d_2414_84bc.def;
        h2 = d_2414_84bc.mid;
        d_5d51_d86a = d_2414_84bc.att;
        d_5d51_d8b2 = d_2414_84bc.shots_h;
        d_5d51_d8b0 = d_2414_84bc.shots_a;

        f_76ea_2364(a, a, b);
        strcpy(name1, f_1d5e_0e5f(f_1646_3537(a)));
        sprintf(s, " %s ", name1);
        f_1646_3a4a(1.25, 4.0, d_5d51_d93e, d_5d51_d9c8, 0, s);
        sprintf(s, " %d", d_5d51_d7f6);
        f_1646_38d0(17.5, 4.0, 1, s);

        f_76ea_2364(b, a, b);
        strcpy(name2, f_1d5e_0e5f(f_1646_3537(b)));
        sprintf(s, " %s ", name2);
        f_1646_3a4a(20.5, 4.0, d_5d51_d93e, d_5d51_d9c8, 0, s);
        sprintf(s, " %d", d_5d51_d7f4);
        f_1646_38d0(36.75, 4.0, 1, s);

        if (c) {
            sprintf(d_2414_4b56, "HT %d-%d", d_2414_8414[0].home, d_2414_8414[0].away);
            sprintf(s, " %s ", d_2414_4b56);
            f_1646_3686(1.125, 5.0, 1, 12, 0, s);
            if (d_2414_8414[2].home != 15 || d_2414_8414[2].away != 15) {
                x = d_2414_8414[1].home;
                y = d_2414_8414[1].away;
                sprintf(d_2414_4b56, "FT %d-%d", x, y);
                sprintf(s, " %s ", d_2414_4b56);
                f_1646_3686(7.375, 5.0, 1, 12, 0, s);
                if (d_2414_8414[3].home != 15 || d_2414_8414[3].away != 15) {
                    sprintf(d_2414_4b56, "%d-%d PENS", d_2414_8414[3].home - d_5d51_d7f6,
                            d_2414_8414[3].away - d_5d51_d7f4);
                    sprintf(s, " %s ", d_2414_4b56);
                    f_1646_3686(13.625, 5.0, 1, 12, 0, s);
                }
            }
        }

        f_7c1d_4304(-1, h1, h2, d_5d51_d86a, d_5d51_d8b2, 1.125);
        f_7c1d_4304(0, 100 - d_5d51_d86a, 100 - h2, 100 - h1, d_5d51_d8b0, 20.375);
        strcpy(d_2414_5074, "Attendance");
        sprintf(d_2414_5024, "%7ld", d_5d51_d485);
        sprintf(s, " %s     -%s", d_2414_5074, d_2414_5024);
        f_1646_3686(1.125, 24.0, 1, 12, 150, s);
        f_1646_60a7();

        if (d_5d51_d90a == 45) {
            do {
                ok = -1;
                f_1646_58a8(2);
                if (strcmp(f_1d5e_0e5f(d_2414_376e), "H") == 0 && d_5d51_d8ba == 0) {
                    f_76ea_4495(d_5d51_d942, -1);
                    done = 0;
                } else if (strcmp(f_1d5e_0e5f(d_2414_376e), "A") == 0 && d_5d51_d8b6 == 0) {
                    f_76ea_4495(d_5d51_d940, -1);
                    done = 0;
                } else if (d_2414_376e[0] != 0)
                    ok = 0;
            } while (!ok);
        } else
            f_1646_58a8(0);
    } while (!done);
}

/* one team's column of the statistics screen: its players, their marks, ratings and
 * goals, then its strengths and attempts (a: home team, f: the column's x) */
void f_7c1d_4304(char a, int b, int c, int d, int e, float f)
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
    d_5d51_d9e2 = 0;
    y = 0;
    d_5d51_d9fe = 0;
    d_5d51_d9de = 14;
    d_5d51_d9ce = 8;
    do {
        if (a) {
            d_5d51_d9f0 = d_2414_841c[0][d_5d51_d9fe];
            d_5d51_d7fa = d_2414_847c[0][d_5d51_d9fe];
            flag = d_2414_849c[0][d_5d51_d9fe] == 1;
            d_5d51_d5b1 = d_2414_849c[0][d_5d51_d9fe] == 2;
            booked = d_2414_849c[0][d_5d51_d9fe] == 3;
            d_5d51_d876 = d_2414_845c[0][d_5d51_d9fe] / 16;
            d_5d51_d874 = d_2414_845c[0][d_5d51_d9fe] % 16;
            d_5d51_d5c8 = d_5d51_d9fe + 1 == d_2414_84bc.capt_h;
            sub = d_5d51_d9fe + 1 == d_2414_84bc.motm;
        } else {
            d_5d51_d9f0 = d_2414_841c[1][d_5d51_d9fe];
            d_5d51_d7fa = d_2414_847c[1][d_5d51_d9fe];
            flag = d_2414_849c[1][d_5d51_d9fe] == 1;
            d_5d51_d5b1 = d_2414_849c[1][d_5d51_d9fe] == 2;
            booked = d_2414_849c[1][d_5d51_d9fe] == 3;
            d_5d51_d876 = d_2414_845c[1][d_5d51_d9fe] / 16;
            d_5d51_d874 = d_2414_845c[1][d_5d51_d9fe] % 16;
            d_5d51_d5c8 = d_5d51_d9fe + 1 == d_2414_84bc.capt_a;
            sub = d_5d51_d9fe + 17 == d_2414_84bc.motm;
        }
        if (d_5d51_d9f0 != -2) {
            if (f_1646_5dff(d_5d51_d9f0))
                n = 4;
            else
                n = d_5d51_d9fe > 10 ? 6 : 1;
            strcpy(d_2414_2008, "");
            if (flag)
                strcpy(d_2414_2008, "so");
            else if (d_5d51_d5b1)
                strcpy(d_2414_2008, "ij");
            else if (booked)
                strcpy(d_2414_2008, "bk");
            if (d_5d51_d5c8)
                strcat(d_2414_2008, booked ? " c" : "c");
            strcpy(d_2414_371e, "");
            if (d_5d51_d876 > 0)
                sprintf(d_2414_371e, "%d", d_5d51_d876);
            else if (d_5d51_d874 > 0)
                sprintf(d_2414_371e, "%d", d_5d51_d874);
            if (d_5d51_d9f0 == -1)
                strcpy(d_2414_4b56, "");
            else if (f_1646_5de5(d_5d51_d9f0) || f_1646_5dff(d_5d51_d9f0)) {
                strcpy(d_2414_5074, f_1646_4849(d_5d51_d9f0));
                if (strlen(d_2414_2008) == 0)
                    d_5d51_d8ee = 14;
                else
                    d_5d51_d8ee = 14 - (strlen(d_2414_2008) + 1);
                sprintf(d_2414_4b56, "%.*s", d_5d51_d8ee, d_2414_5074);
            } else if (d_5d51_d9f0 >= 1501) {
                strcpy(d_2414_5074, d_4f37_0593[d_5d51_d9f0 - 1500]);
                if (d_5d51_d9fe > 10)
                    sprintf(d_2414_5074, "Substitute %c", d_5d51_d9fe + 54);
                strcpy(d_2414_4b56, d_2414_5074);
            }
            sprintf(buf, " %s", f_1646_2f4b(d_5d51_d9fe + 1, 1));
            if (d_5d51_d9de == 14)
                fg = 9;
            else
                fg = 2;
            f_1646_3686(f, d_5d51_d9e2 + 6, 1, fg, 24, buf);
            sprintf(buf, " %s", d_2414_4b56);
            if (sub && d_5d51_d8e2 == -1)
                f_1646_3686(f + 3.25, d_5d51_d9e2 + 6, 0, 1, 92, buf);
            else
                f_1646_3686(f + 3.25, d_5d51_d9e2 + 6, n, d_5d51_d9de, 92, buf);
            f_1646_357e(x0 + f_1d5e_136a(strlen(d_2414_4b56), 11) * 6 + 48, -(y + 48),
                        d_5d51_d5b1 || flag ? 2 : 6, d_2414_2008);
            if (d_5d51_d7fa > 0) {
                sprintf(d_2414_1fb8, "%2d", d_5d51_d7fa);
                sprintf(buf, " %s", d_2414_1fb8);
                f_1646_3686(f + 15, -(d_5d51_d9e2 + 6), 1, 3, 30, buf);
            } else
                f_1646_3686(f + 15, -(d_5d51_d9e2 + 6), 1, 3, 30, "  -");
            f_1646_357e(x0 + strlen(d_2414_1fb8) * 6 + 136, -(y + 48),
                        d_5d51_d874 > 0 && d_5d51_d876 == 0 ? 4 : 6, d_2414_371e);
            d_5d51_d9e2++;
            y += 8;
            f_1d5e_13a4(&d_5d51_d9de, &d_5d51_d9ce, 2);
        }
        d_5d51_d9fe++;
    } while (d_5d51_d9fe != 16);
    sprintf(buf, " Defence        -    %d%%", b);
    f_1646_3686(f, 20.0, 1, 4, 150, buf);
    sprintf(buf, " Midfield       -    %d%%", c);
    f_1646_3686(f, 21.0, 1, 4, 150, buf);
    sprintf(buf, " Attack         -    %d%%", d);
    f_1646_3686(f, 22.0, 1, 4, 150, buf);
    sprintf(buf, " Attempts       -    %d", e);
    f_1646_3686(f, 23.0, 1, 4, 150, buf);
}
