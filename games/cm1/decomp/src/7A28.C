/* @at 7a28:0000 */
/* @data 5d9c:4d80 */
/* @module */

/* Overlay 4: the match engine's events: goals and their commentary, disallowed goals,
 * penalties and shoot-outs, the score bar and attempts, team strengths and player
 * ratings during the match, the result, and the match statistics screen. */
#include <stdio.h>
#include <string.h>
#include <mem.h>
#include <stdlib.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_7a28_05c2(char c);
void f_7a28_08e7(void);
void f_7a28_00ea(void);
void f_7a28_019a(int minute);
void f_7a28_0a08(int team, char far *s);
void f_7a28_0a9c(void);
void f_7a28_0000(int a, int b, int c, int d);
void f_7a28_0356(void);
void f_7a28_0206(int team);
void f_7a28_03bd(int a, char c, int b, int team);
void f_7a28_0ab9(int team);
void f_7a28_0d24(void);
char f_7a28_0ecb(int a, int b, int na, int nb, int n);
void f_7a28_0eff(int team);
void f_7a28_0ff4(int team, int chance, int shootout);
void f_7a28_13ca(int team);
unsigned char f_7a28_14c4(int p, int team);
void f_7a28_18b2(int team);
void f_7a28_2771(int team);
void f_7a28_2909(unsigned char a, unsigned char b, unsigned char c);
void f_7a28_297d(unsigned char a, unsigned char b, unsigned char c);
void f_7a28_29f1(int team);
void f_7a28_2b9b(void);
void f_7a28_2e73();             /* no prototype: 2b9b passes it words, it reads bytes */
int f_7a28_3518(int i, int team);
void f_7a28_360e(int a, int b, char c);
void f_7a28_3e39(char a, int b, int c, int d, int e, float f);

void f_14d2_0722(int c);
void f_14d2_075a(int x1, int y1, int x2, int y2);
void f_14d2_073e(int c);
void f_14d2_07af(int x1, int y1, int x2, int y2);
void f_14d2_0609(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_14d2_09c3(int on);
void f_14d2_0824(int a);
void f_14d2_0870(int x, int y, char far *s);
char far *f_14d2_0d08(char far *s);
void f_14d2_0c66(int ticks);
int f_14d2_0c2a(int n);
void f_14d2_0aef(void);
void f_14d2_0af4(int a);
void f_1680_27aa(int x, int y, int colour, char far *s);
void f_1680_2d78(float x, float y, int colour, char far *s);
void f_1680_2ea0(float x, float y, int bg, int fg, int w, char far *s);
char far *f_a1c3_21cc(int player);
void f_a1c3_27e4(char far *title);
void f_7555_277b(int a, int b, int c);
void f_7555_3023(void);
void f_7555_4662(float x, float y);
extern char near *d_5d9c_08bc[];
extern char d_5d9c_9b86;
extern int d_5d9c_9dcb;
extern int d_5d9c_9dcd;
extern int d_5d9c_9e37;
extern int d_5d9c_9e39;
extern int d_5d9c_9e3b;
extern int d_5d9c_9e3d;
extern int d_5d9c_9e4d;
extern int d_5d9c_9e4f;
extern int d_5d9c_9e7b;
extern int d_5d9c_9e7d;
extern int d_5d9c_9e8f;
extern int d_5d9c_9e91;
extern int d_5d9c_9ea5;
extern int d_5d9c_9ec3;
extern int d_5d9c_9ed3;
extern int d_5d9c_9ed5;
extern int d_5d9c_9ed9;
extern int d_5d9c_9edb;
extern int d_5d9c_9edd;
extern int d_5d9c_9f65;
extern int d_5d9c_9f6d;
extern int d_5d9c_9fab;
extern char far d_1f3e_4212[];
extern char far d_1f3e_4262[];
extern char far d_1f3e_42b2[];
extern char far d_1f3e_4302[];
extern char far d_1f3e_4352[];
extern char far d_1f3e_4716[];
extern char far d_1f3e_4806[];
extern char far d_1f3e_4856[];
extern char far d_1f3e_4a26[][13];
extern unsigned char huge d_3e42_0000[][1702];
int f_7555_3245(int team, int p);
char far *f_a1c3_213c(int player);
char far *f_a1c3_2243(int player);
extern char d_5d9c_9b14;
extern char d_5d9c_9b15;
extern char d_5d9c_9b16;
extern char d_5d9c_9b61;
extern char d_5d9c_9b69;
extern char d_5d9c_9b6c;
extern char d_5d9c_9b75;
extern int d_5d9c_9baf;
extern int d_5d9c_9bb1;
extern int d_5d9c_9bb3;
extern int d_5d9c_9dc3;
extern int d_5d9c_9dc5;
extern int d_5d9c_9dc7;
extern int d_5d9c_9dc9;
extern int d_5d9c_9deb;
extern int d_5d9c_9df7;
extern int d_5d9c_9df9;
extern int d_5d9c_9dfb;
extern int d_5d9c_9e33;
extern int d_5d9c_9e35;
extern int d_5d9c_9ecf;
extern int d_5d9c_9f51;
extern int d_5d9c_9f67;
extern int d_5d9c_9f91;
extern int d_5d9c_9fa1;
extern char far d_1f3e_4172[];
extern char far d_1f3e_41c2[];
extern char far d_1f3e_51b6[];
extern unsigned char far d_2f3c_2d0b[][13];
extern int far d_2f3c_2d59[][13];
extern unsigned char huge d_483b_0000[][1702];
char f_992a_70a8(int);
char f_992a_74c1(int, int);
char f_992a_72e8(int, int);
char f_992a_7399(int, int);
char f_992a_7430(int, int);
int f_992a_1fd1(int a, int b, int c);
int f_992a_2729(unsigned char a);
float f_14d2_13c3(float a, float b);
float f_14d2_1425(float a, float b);
extern int d_5d9c_9f83;
extern unsigned char d_5d9c_9b9a;
extern unsigned char d_5d9c_9b99;
extern char d_5d9c_9b60;
extern float d_5d9c_a012[];
extern unsigned char d_5d9c_9b98;
extern unsigned char d_5d9c_9b97;
extern int d_5d9c_a02a[];
extern int d_5d9c_9dc1;
extern int d_5d9c_9dbf;
extern int d_5d9c_9dbb;
extern int d_5d9c_9dbd;
extern int d_5d9c_9db9;
extern int d_5d9c_9db7;
extern int d_5d9c_9db5;
extern unsigned char far d_2f3c_2d25[][13];
extern unsigned char far d_2f3c_35ad[][3][13];
extern int far d_2f3c_7f93[];
extern int far d_2f3c_8033[];
extern unsigned char far d_2f3c_5905[];
extern unsigned char far d_2f3c_60a3[];
extern unsigned char far d_2f3c_5b8f[];
extern unsigned char far d_2f3c_855b[][13];
extern float far d_2f3c_1bec[][13];
extern unsigned char far d_5471_2c14[][10];
char f_1680_0003(int x);
int f_14d2_13eb(int a, int b);
char f_992a_7853(int a, int b);
extern int d_5d9c_9e67;
extern int d_5d9c_9db3;
extern int d_5d9c_9db1;
extern int d_5d9c_9daf;
extern int d_5d9c_9dad;
extern int d_5d9c_9dab;
extern int d_5d9c_9da9;
extern int d_5d9c_9da7;
extern int d_5d9c_9da5;
extern int d_5d9c_9da3;
extern int d_5d9c_9dfd;
extern int d_5d9c_9da1;
extern float d_5d9c_9ac8;
extern float d_5d9c_9ac4;
extern float d_5d9c_9ac0;
extern float d_5d9c_9abc;
extern int d_5d9c_9ddf;
extern int d_5d9c_9bad;
extern int d_5d9c_9bab;
extern int d_5d9c_9e27;
extern int d_5d9c_9eb7;
extern int d_5d9c_9c65;
extern char d_5d9c_9b2b;
extern unsigned char d_5d9c_a03c[][2];
extern int d_5d9c_9e65;
extern int d_5d9c_9df5;
extern int d_5d9c_9df3;
extern int d_5d9c_9e03;
extern int d_5d9c_9f13;
extern int d_5d9c_9e0f;
extern int d_5d9c_9e01;
extern int d_5d9c_9bb7;
extern int d_5d9c_9e0b;
extern int d_5d9c_9e17;
extern int d_5d9c_9e07;
extern int d_5d9c_9dff;
extern int d_5d9c_9bb5;
extern unsigned char far d_2f3c_84a7[][60];
extern unsigned char far d_2f3c_83f3[][60];
extern unsigned char far d_2f3c_5e19[];
extern unsigned char far d_5739_0000[][82];
int f_1680_052b(int a, int b, int c);
double f_1680_0433(int x, int y);
float f_1680_0795(int x);
long f_14d2_1400(long a, long b);
void far *f_14d2_16bc(int handle, int page);
extern int d_5d9c_9d9f;
extern int d_5d9c_9f5f;
extern int d_5d9c_9f49;
extern unsigned char d_5d9c_9d98[];
extern int d_5d9c_a026[];
extern long d_5d9c_9a3c;
extern int d_5d9c_a35c;
extern long (far *d_5d9c_a01a)[80];
extern int d_5d9c_9e41;
extern int d_5d9c_9e43;
extern int d_5d9c_9e45;
extern int d_5d9c_9e47;
extern int d_5d9c_9e49;
extern int d_5d9c_9e4b;
extern int d_5d9c_9ebd;
extern float d_5d9c_9ab8;
extern unsigned char far d_2f3c_846b[][60];
extern unsigned char far d_2f3c_83b7[][60];
extern unsigned char far d_5739_0052[];
extern int far d_5739_1d28[][2][94];
extern int far d_2f3c_1534[];
int f_14d2_144d(int a, int b);
void f_9100_5076(int team, int a, int player, int b);
extern int d_5d9c_9d9d;
extern int d_5d9c_9d9b;
extern int d_5d9c_9e7f;
extern unsigned char d_5d9c_a040[][2];
extern int far d_2f3c_8575[][13];
extern int far d_2f3c_85f7[];
extern char far d_1f3e_5be8[][0x6a6];
extern char far d_1f3e_49f2[][13][2];
extern char far d_1f3e_4a40[][13];
extern char far d_1f3e_4a5a[][13];
extern char far d_1f3e_49ee[];
extern char far d_1f3e_4a74[];
char far *f_1680_1a91(int x);
void f_1680_2867(float x, float y, int bg, int fg, int w, char far *s);
void f_1680_2a61(float x, float y, int colour, char far *s);
void f_1680_2b8b(float x, float y, int bg, int fg, int w, char far *s);
void f_7555_3ff8(int team, char c);
void f_a1c3_2d08(int a, float x, float y, int c, int d, int e, char far *s);
void f_a1c3_34c6(int team);
int f_a1c3_3298(int a);
void f_a1c3_30b1(int a, char b);
void f_a1c3_3505(int a);
void f_992a_0ce6(void);
extern int d_5d9c_a356;
extern char far *d_5d9c_9fca;
extern int d_5d9c_9d99;
extern int d_5d9c_9d97;
extern int d_5d9c_9e09;
extern char d_5d9c_9b8f;
extern int d_5d9c_9f63;
extern int d_5d9c_9faf;
extern int d_5d9c_9e57;
extern int d_5d9c_9e53;
extern char far d_1f3e_49e6[];
extern char far d_1f3e_4170[];
extern char far d_1f3e_56d4[];
extern char far d_1f3e_5684[];
char far *f_1680_03f3(int x);
void f_14d2_148f(void far *a, void far *b, int n);
extern int d_5d9c_9f7f;
extern int d_5d9c_9f7b;
extern int d_5d9c_9f6b;
extern int d_5d9c_9e13;
extern int d_5d9c_9e8b;
extern char d_5d9c_9b62;
extern char d_5d9c_9b73;
extern signed char far d_1f3e_4a79;
extern signed char far d_1f3e_4a7a;
extern char far d_1f3e_4120[];
extern char far * far d_5471_17c4[];

/* the goal commentary: how the ball went in, where it went, and the pairs (verb, place)
 * that do not go together, ended by -1. A '*' is replaced by the keeper's name. */
static char far *d_5d9c_4d80[] = {
    "Tapped", "Volleyed", "Headed", "Guided", "Placed", "Side footed", "Driven", "Curled",
    "Chipped", "Thundered", "Flicked", "Lashed", "Hooked", "Scrambled", "Rifled",
    "Hammered", "Glorious strike", "Smashed", "Powered", "Downward header",
    "Bullet header", "Looping header", "Forced", "Rammed", "Despatched",
    "Hit ferociously", "Thumped", "Slotted", "Buried", "Bundled", "Hit first time",
    "Calmly placed", "Clinical strike", "Crashed"
};
static char far *d_5d9c_4e08[] = {
    "past*", "into the net", "into the corner", "into the top corner", "in off a post",
    "in off the bar", "in beyond*", "through a crowd", "under*", "home",
    "into the open net"
};
static char d_5d9c_4e34[] = {
    0, 3, 0, 5, 0, 7, 3, 7, 4, 7, 4, 9, 7, 7, 7, 8, 7, 9, 8, 7, 8, 8, 8, 9, 10, 7, 13, 3,
    16, 8, 16, 9, 19, 7, 19, 8, 19, 9, 20, 7, 20, 8, 20, 9, 21, 7, 21, 8, 21, 9, 22, 3,
    24, 9, 25, 9, 27, 3, 27, 4, 27, 5, 27, 7, 29, 3, 30, 3, 31, 7, 31, 9, 32, 7, 32, 9,
    33, 8, -1
};

void f_7a28_0000(int a, int b, int c, int d)
{
    int t1, t2;

    t1 = b * 38 / (a + b);
    t2 = 38 - t1;
    f_14d2_0722(16);
    f_14d2_075a(c * 36 + 24, 139, c * 36 + 31, 177 - t2);
    f_14d2_075a(d * 36 + 168, 139, d * 36 + 175, 177 - t1);
    f_14d2_0722(28);
    f_14d2_075a(c * 36 + 24, t1 + 139, c * 36 + 31, 177);
    f_14d2_075a(d * 36 + 168, t2 + 139, d * 36 + 175, 177);
}

void f_7a28_00ea(void)
{
    f_14d2_0722(28);
    f_14d2_075a(224, 14, 306, 42);
    f_14d2_0722(16);
    f_14d2_075a(226, 16, 304, 40);
    f_14d2_073e(22);
    f_14d2_07af(222, 12, 308, 44);
    f_14d2_073e(24);
    f_14d2_07af(260, 18, 290, 36);
    f_1680_27aa(240, 30, 6, "TIME");
    f_7a28_019a(d_5d9c_9ea5);
}

void f_7a28_019a(int minute)
{
    char buf[80];

    sprintf(buf, "%03d", minute);
    if (d_5d9c_9dcd != 2)
        f_14d2_0824(2);
    f_14d2_073e(18);
    f_14d2_0722(16);
    f_14d2_09c3(1);
    f_14d2_0870(264, 34, buf);
    f_14d2_09c3(0);
}

void f_7a28_0206(int team)
{
    char buf[320];

    if (d_5d9c_9e7d + d_5d9c_9e7b > 0) {
        if (team == d_5d9c_9edd)
            d_5d9c_9ec3 = d_5d9c_9edb;
        else
            d_5d9c_9ec3 = d_5d9c_9edd;
        f_7a28_0ab9(d_5d9c_9ec3);
        sprintf(buf, "%s FOR %s!", d_1f3e_4352, f_14d2_0d08(d_5d9c_08bc[team]));
        f_7a28_0a08(team, buf);
        f_14d2_0c66(125);
        sprintf(buf, "%s %s", d_1f3e_4302, d_1f3e_42b2);
        f_7a28_0a08(team, f_14d2_0d08(buf));
        f_14d2_0c66(125);
        f_7a28_0a08(team, "BUT IT'S DISALLOWED !");
        f_14d2_0c66(75);
        switch (d_5d9c_9dcb = f_14d2_0c2a(3)) {
        case 0:
            strcpy(d_1f3e_4262, "The ref saw an infringement");
            break;
        case 1:
            strcpy(d_1f3e_4262, "The linesman flagged for offside");
            break;
        case 2:
            strcpy(d_1f3e_4262, "The linesman saw an infringement");
            break;
        }
        f_7a28_0a08(team, f_14d2_0d08(d_1f3e_4262));
        f_14d2_0c66(75);
        f_7a28_0a08(d_5d9c_9edd, d_1f3e_4716);
    }
}

void f_7a28_0356(void)
{
    int team;
    char buf[320];

    if (d_5d9c_9e37 > d_5d9c_9ed5) {
        team = d_5d9c_9edb;
        d_5d9c_9e3b = 1;
    }
    if (d_5d9c_9e37 < d_5d9c_9ed5) {
        team = d_5d9c_9edd;
        d_5d9c_9e3d = 1;
    }
    if (d_5d9c_9e7d + d_5d9c_9e7b > 0) {
        sprintf(buf, "%s win on away goals!", (char far *)d_5d9c_08bc[team]);
        f_7a28_0a08(team, buf);
    }
}

void f_7a28_03bd(a, c, b, team)
int a; char c; int b; register int team;   /* old-style: team in SI, b in DI */
{
    char buf[320];

    if (team < 80 && d_5d9c_9fab > 4)
        d_3e42_0000[1][a]++;
    if (d_5d9c_9e7d + d_5d9c_9e7b > 0) {
        if (c == 0) {
            f_14d2_0af4(0);
            if (team == d_5d9c_9edd)
                d_5d9c_9ec3 = d_5d9c_9edb;
            else
                d_5d9c_9ec3 = d_5d9c_9edd;
            f_7a28_0ab9(d_5d9c_9ec3);
            sprintf(buf, "%s FOR %s!", d_1f3e_4352, f_14d2_0d08(d_5d9c_08bc[team]));
            f_7a28_0a08(team, buf);
            f_14d2_0c66(125);
            sprintf(buf, "%s %s", d_1f3e_4302, d_1f3e_42b2);
            f_7a28_0a08(team, f_14d2_0d08(buf));
            f_14d2_0c66(125);
            if (team < 80)
                sprintf(buf, "SCORED BY %s", f_14d2_0d08(f_a1c3_21cc(a)));
            else
                sprintf(buf, "SCORED BY THEIR NO.%d", b + (b == 12) + 1);
            f_7a28_0a08(team, buf);
            f_14d2_0c66(125);
            f_7a28_0a08(d_5d9c_9edd, d_1f3e_4716);
        }
        f_7a28_08e7();
        f_14d2_0aef();
        f_14d2_0af4(2);
    }
    if (team == d_5d9c_9edd) {
        d_1f3e_4a26[0][b]++;
        if (d_1f3e_4a26[0][b] == 3 && team < 80) {
            sprintf(buf, "%04d", a);
            strcat(d_1f3e_4212, buf);
        }
    } else {
        d_1f3e_4a26[1][b]++;
        if (d_1f3e_4a26[1][b] == 3 && team < 80) {
            sprintf(buf, "%04d", a);
            strcat(d_1f3e_4212, buf);
        }
    }
    f_7555_3023();
}

void f_7a28_05c2(char c)
{
    char buf[320];

    f_7555_277b(d_5d9c_9e91, d_5d9c_9e91, d_5d9c_9e8f);
    f_a1c3_27e4("");
    sprintf(buf, " %s", d_1f3e_4806);
    f_1680_2ea0(3.0, 2.0, -d_5d9c_9ed9, d_5d9c_9f65, 165, buf);
    sprintf(buf, " FROM %s", f_14d2_0d08(d_1f3e_4856));
    f_1680_2ea0(3.0, 4.5, -d_5d9c_9ed9, d_5d9c_9f65, 165, buf);
    f_7a28_00ea();
    f_7a28_0a08(d_5d9c_9edd, d_1f3e_4716);
    sprintf(buf, " %s ", f_14d2_0d08(d_5d9c_08bc[d_5d9c_9edd]));
    f_1680_2ea0(3.0, 12.0, -d_5d9c_9ed9, d_5d9c_9f65, 0, buf);
    f_7555_277b(d_5d9c_9e8f, d_5d9c_9e91, d_5d9c_9e8f);
    sprintf(buf, " %s ", f_14d2_0d08(d_5d9c_08bc[d_5d9c_9edb]));
    f_1680_2ea0(21.0, 12.0, -d_5d9c_9ed9, d_5d9c_9f65, 0, buf);
    f_7a28_08e7();
    f_1680_27aa(30, 132, 1, "ATTEMPTS:");
    sprintf(buf, "%d", d_5d9c_9e4f);
    f_1680_27aa(96, 132, 5, buf);
    f_1680_27aa(174, 132, 1, "ATTEMPTS:");
    sprintf(buf, "%d", d_5d9c_9e4d);
    f_1680_27aa(240, 132, 5, buf);
    f_14d2_073e(17);
    for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= 2; d_5d9c_9f6d++) {
        f_14d2_07af(d_5d9c_9f6d * 36 + 23, 138, d_5d9c_9f6d * 36 + 32, 178);
        f_14d2_07af(d_5d9c_9f6d * 36 + 167, 138, d_5d9c_9f6d * 36 + 176, 178);
    }
    f_1680_27aa(28, 188, 6, "DEF   MID   ATT         DEF   MID   ATT");
    if (c == 1)
        f_7555_4662(3.5, 21.5);
    else if (c == 2)
        f_7555_4662(21.5, 3.5);
}

void f_7a28_08e7(void)
{
    char buf[320];

    f_14d2_0609(134, 91, 153, 106);
    f_14d2_0609(278, 91, 297, 106);
    sprintf(buf, "%d", d_5d9c_9e39);
    f_1680_2d78(18.0, 12.0, 1, buf);
    sprintf(buf, "%d", d_5d9c_9e37);
    f_1680_2d78(36.0, 12.0, 1, buf);
    if (d_5d9c_9b86 != 0) {
        f_14d2_0609(223, 46, 277, 52);
        sprintf(buf, "AGG %d-%d", d_5d9c_9e39 + d_5d9c_9ed5, d_5d9c_9e37 + d_5d9c_9ed3);
        f_1680_27aa(232, 52, 3, buf);
    }
}

void f_7a28_0a08(int team, char far *s)
{
    char buf[320];

    if (team == d_5d9c_9edd)
        f_7555_277b(d_5d9c_9e91, d_5d9c_9e91, d_5d9c_9e8f);
    else
        f_7555_277b(d_5d9c_9e8f, d_5d9c_9e91, d_5d9c_9e8f);
    f_7a28_0a9c();
    sprintf(buf, " %s ", f_14d2_0d08(s));
    f_1680_2ea0(3.0, 8.5, -d_5d9c_9ed9, d_5d9c_9f65, 0, buf);
}

void f_7a28_0a9c(void)
{
    f_14d2_0609(0x10, 0x38, 0x138, 0x50);
}

void f_7a28_0ab9(int team)
{
    int a;
    int w;
    char buf[40];
    int i;
    int b;
    int v;

    do {
        d_5d9c_9b75 = -1;
        a = f_14d2_0c2a(34);
        if ((d_5d9c_9b15 == 0 && team == d_5d9c_9edd) ||
            (d_5d9c_9b14 == 0 && team == d_5d9c_9edb))
            b = 10;
        else
            do {
                b = f_14d2_0c2a(10);
            } while (f_14d2_0c2a(3) && b >= 3 && b <= 5);
        i = 0;
        do {
            v = d_5d9c_4e34[i++];
            if (v != -1) {
                w = d_5d9c_4e34[i++];
                if (a == v && b == w) {
                    d_5d9c_9b75 = 0;
                    v = -1;
                }
            }
        } while (v != -1);
        if (d_5d9c_9b75 != 0) {
            strcpy(d_1f3e_4302, d_5d9c_4d80[a]);
            strcpy(d_1f3e_42b2, d_5d9c_4e08[b]);
            if (d_1f3e_42b2[strlen(d_1f3e_42b2) - 1] == '*') {
                if (team < 80)
                    strcpy(buf, f_a1c3_2243(d_2f3c_2d59[team][0]));
                else
                    strcpy(buf, "their 'keeper");
                d_1f3e_42b2[strlen(d_1f3e_42b2) - 1] = ' ';
                strcat(d_1f3e_42b2, buf);
            }
            if (strlen(d_1f3e_4302) + strlen(d_1f3e_42b2) > 32)
                d_5d9c_9b75 = 0;
        }
    } while (!d_5d9c_9b75);
    if (b < 10) {
        d_5d9c_9b61 = -1;
        switch (a) {
        case 0: case 5: case 10: case 12: case 13: case 22: case 29:
            d_5d9c_9b61 = 0;
        }
        if (d_5d9c_9b61) {
            switch (b) {
            case 1: case 4: case 5: case 7: case 8:
                d_5d9c_9b61 = 0;
            }
        }
        if (d_5d9c_9b16)
            strcpy(d_1f3e_4352, "MAGNIFICENT GOAL");
        else if (d_5d9c_9b61 && (!f_14d2_0c2a(5) || a == 16)) {
            if (f_14d2_0c2a(2) == 0)
                strcpy(d_1f3e_4352, "BRILLIANT GOAL");
            else
                strcpy(d_1f3e_4352, "SUPERB GOAL");
        } else
            strcpy(d_1f3e_4352, "GOAL");
    }
}

void f_7a28_0d24(void)
{
    if (d_5d9c_9e7d + d_5d9c_9e7b > 0)
        f_7a28_0a08(d_5d9c_9edd, d_1f3e_4716);
    d_5d9c_9dc9 = 1;
    d_5d9c_9bb3 = 0;
    d_5d9c_9bb1 = 0;
    d_5d9c_9baf = 5;
    while (f_7a28_0ecb(d_5d9c_9e35, d_5d9c_9e33, d_5d9c_9bb3, d_5d9c_9bb1, d_5d9c_9baf) == 0) {
        f_7a28_0ff4(d_5d9c_9edd, d_5d9c_9dfb, 1);
        d_5d9c_9bb3++;
        if (d_5d9c_9b69) {
            d_5d9c_9e35++;
            d_5d9c_9e39++;
            if (d_5d9c_9e7d + d_5d9c_9e7b > 0)
                f_7a28_08e7();
        }
        if (f_7a28_0ecb(d_5d9c_9e35, d_5d9c_9e33, d_5d9c_9bb3, d_5d9c_9bb1, d_5d9c_9baf) == 0) {
            f_7a28_0ff4(d_5d9c_9edb, d_5d9c_9df9, 1);
            d_5d9c_9bb1++;
            if (d_5d9c_9b69) {
                d_5d9c_9e33++;
                d_5d9c_9e37++;
                if (d_5d9c_9e7d + d_5d9c_9e7b > 0)
                    f_7a28_08e7();
            }
        }
        if (d_5d9c_9e35 == d_5d9c_9e33 && d_5d9c_9bb3 == d_5d9c_9baf)
            d_5d9c_9baf++;
    }
    if (d_5d9c_9e7d + d_5d9c_9e7b > 0) {
        d_5d9c_9f67 = d_5d9c_9e35 > d_5d9c_9e33 ? d_5d9c_9edd : d_5d9c_9edb;
        sprintf(d_1f3e_51b6, "%s win the match! ", (char far *)d_5d9c_08bc[d_5d9c_9f67]);
        f_7a28_0a08(d_5d9c_9f67, d_1f3e_51b6);
    }
    for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= 12; d_5d9c_9f6d++)
        for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 1; d_5d9c_9fa1++)
            if (d_2f3c_2d0b[d_5d9c_9fa1][d_5d9c_9f6d] == 7)
                d_2f3c_2d0b[d_5d9c_9fa1][d_5d9c_9f6d] = 0;
}

char f_7a28_0ecb(int a, int b, int na, int nb, int n)
{
    if (a != b) {
        if (a + (n - na) < b)
            return -1;
        if (b + (n - nb) < a)
            return -1;
    }
    return 0;
}

void f_7a28_0eff(int team)
{
    for (;;) {
        d_5d9c_9ecf = 0;
        d_5d9c_9f91 = 1700;
        d_5d9c_9df7 = -1;
        for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 12; d_5d9c_9fa1++) {
            if (d_2f3c_2d0b[team == d_5d9c_9edb][d_5d9c_9fa1] < 2) {
                f_7555_3245(team, d_5d9c_9fa1);
                if (d_5d9c_9deb > d_5d9c_9ecf) {
                    d_5d9c_9ecf = d_5d9c_9deb;
                    d_5d9c_9f91 = d_2f3c_2d59[team][d_5d9c_9fa1];
                    d_5d9c_9df7 = d_5d9c_9fa1;
                }
            }
        }
        if (d_5d9c_9df7 != -1)
            break;
        for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 12; d_5d9c_9fa1++)
            if (d_2f3c_2d0b[team == d_5d9c_9edb][d_5d9c_9fa1] == 7)
                d_2f3c_2d0b[team == d_5d9c_9edb][d_5d9c_9fa1] = 0;
    }
}

void f_7a28_0ff4(int team, int chance, int shootout)
{
    char buf[320];

    f_7a28_0eff(team);
    d_5d9c_9dc7 = team == d_5d9c_9edd ? d_5d9c_9edb : d_5d9c_9edd;
    d_5d9c_9b69 = 0;
    if (d_5d9c_9e7d + d_5d9c_9e7b > 0) {
        if (shootout) {
            sprintf(d_1f3e_51b6, "%s's penalty....", (char far *)d_5d9c_08bc[team]);
            f_7a28_0a08(team, d_1f3e_51b6);
        } else {
            sprintf(buf, "%s PENALTY!", (char far *)d_5d9c_08bc[team]);
            f_7a28_0a08(team, f_14d2_0d08(buf));
        }
        f_14d2_0c66(125);
        if (team < 80)
            sprintf(d_1f3e_51b6, "%s steps up...", f_a1c3_213c(d_5d9c_9f91));
        else
            sprintf(d_1f3e_51b6, "Their No.%d steps up...", d_5d9c_9df7 + 1);
        f_7a28_0a08(team, d_1f3e_51b6);
        f_14d2_0c66(f_14d2_0c2a(3) * 30 + 40);
    }
    d_5d9c_9f51 = f_14d2_0c2a(450);
    if (f_14d2_0c2a(chance) < d_5d9c_9f51) {
        if (d_5d9c_9f51 % 12 > 0) {
            d_5d9c_9dc5 = f_14d2_0c2a(d_5d9c_9b6c + 5);
            switch (d_5d9c_9dc5) {
            case 0: strcpy(d_1f3e_41c2, "blasts it home"); break;
            case 1: strcpy(d_1f3e_41c2, "finds the corner"); break;
            case 2: strcpy(d_1f3e_41c2, "scores easily"); break;
            case 3: strcpy(d_1f3e_41c2, "buries it"); break;
            case 4:
                sprintf(d_1f3e_41c2, "makes it %d-%d", d_5d9c_9e39 + (team == d_5d9c_9edd),
                        d_5d9c_9e37 + (team == d_5d9c_9edb));
                break;
            }
            if (team < 80)
                sprintf(d_1f3e_51b6, "And %s %s !", f_a1c3_2243(d_5d9c_9f91), d_1f3e_41c2);
            else
                sprintf(d_1f3e_51b6, "And he %s !", d_1f3e_41c2);
            d_5d9c_9b69 = -1;
        } else {
            d_5d9c_9dc3 = f_14d2_0c2a(4);
            switch (d_5d9c_9dc3) {
            case 0: strcpy(d_1f3e_4172, "blasts it over"); break;
            case 1: strcpy(d_1f3e_4172, "puts it wide"); break;
            case 2: strcpy(d_1f3e_4172, "hits the post"); break;
            case 3: strcpy(d_1f3e_4172, "hits the bar"); break;
            }
            if (team < 80)
                sprintf(d_1f3e_51b6, "But %s %s !", f_a1c3_2243(d_5d9c_9f91), d_1f3e_4172);
            else
                sprintf(d_1f3e_51b6, "But he %s !", d_1f3e_4172);
        }
    } else if (d_5d9c_9dc7 < 80) {
        sprintf(d_1f3e_51b6, "But %s saves it !", f_a1c3_2243(d_2f3c_2d59[d_5d9c_9dc7][0]));
        d_483b_0000[16][d_2f3c_2d59[d_5d9c_9dc7][0]] = d_483b_0000[16][d_2f3c_2d59[d_5d9c_9dc7][0]] + 10;
    } else
        strcpy(d_1f3e_51b6, "But the 'keeper saves it !");
    if (d_5d9c_9e7d + d_5d9c_9e7b > 0) {
        f_7a28_0a08(team, d_1f3e_51b6);
        f_14d2_0c66(100);
    }
    if (shootout)
        d_2f3c_2d0b[team == d_5d9c_9edb][d_5d9c_9df7] = 7;
    else if (d_5d9c_9e7d + d_5d9c_9e7b > 0)
        f_7a28_0a08(d_5d9c_9edd, d_1f3e_4716);
}

void f_7a28_13ca(int team)
{
    float f;

    f = 1.0;
    if (f_992a_70a8(d_5d9c_9fab) || f_992a_74c1(d_5d9c_9fab, d_5d9c_9f83 + 1)) {
        d_5d9c_9b9a = d_5d9c_9edd / 20;
        d_5d9c_9b99 = d_5d9c_9edb / 20;
        d_5d9c_9b60 = (team == d_5d9c_9edd && d_5d9c_9b9a > d_5d9c_9b99)
                   || (team == d_5d9c_9edb && d_5d9c_9b9a < d_5d9c_9b99);
        f = d_5d9c_9b60 ? 1.1 : 1.05;
    } else if (f_992a_72e8(d_5d9c_9fab, d_5d9c_9f83 + 1)
            || f_992a_7399(d_5d9c_9fab, d_5d9c_9f83 + 1)
            || f_992a_7430(d_5d9c_9fab, d_5d9c_9f83 + 1)) {
        f = 1.1;
    }
    d_5d9c_a012[team == d_5d9c_9edb] = f;
}

unsigned char f_7a28_14c4(int p, int team)
{
    d_5d9c_9b98 = team == d_5d9c_9edb ? 1 : 0;
    if (d_2f3c_2d25[d_5d9c_9b98][p] == 0) {
        d_5d9c_9dc1 = d_5d9c_a02a[d_5d9c_9b98];
        if (team < 80) {
            d_5d9c_9b97 = d_2f3c_35ad[team][0][p];
            d_5d9c_9dbf = d_2f3c_7f93[team];
            d_5d9c_9f91 = d_2f3c_2d59[team][p];
            d_5d9c_9dbb = d_483b_0000[16][d_5d9c_9f91];
            d_5d9c_9dbd = d_2f3c_8033[team];
            if (d_5d9c_9dbd == 650) {
                d_5d9c_9db7 = d_5d9c_9dbb * 0.8;
            } else {
                d_5d9c_9db9 = (1 - (d_5471_2c14[d_2f3c_5905[d_5d9c_9dbf]][d_2f3c_5905[d_5d9c_9dbd]] - 5) * 0.05)
                            * d_2f3c_60a3[d_5d9c_9dbd];
                d_5d9c_9db7 = (1 - (d_5471_2c14[d_3e42_0000[17][d_5d9c_9f91]][d_2f3c_5905[d_5d9c_9dbd]] - 5) * 0.05)
                            * ((d_5d9c_9dbb * 2 + d_5d9c_9db9) / 3.0);
            }
            d_5d9c_9db7 = (f_14d2_13c3(f_14d2_1425(d_5d9c_9db7, d_5d9c_9dbb * 1.25), d_5d9c_9dbb * 0.75) * 0.4
                           + d_5d9c_9dc1) / 5.0;
            d_5d9c_9db5 = f_992a_1fd1(d_5d9c_9b97, d_5d9c_9f91, d_2f3c_5b8f[d_2f3c_7f93[team]] / 16);
            if (f_992a_2729(d_5d9c_9b97) >= d_5d9c_9db5)
                d_5d9c_9db7 = d_5d9c_9db7 * d_5d9c_9db5 / f_992a_2729(d_5d9c_9b97);
            else
                d_5d9c_9db7 = (d_5d9c_9db5 / (f_992a_2729(d_5d9c_9b97) * 2.0) + 0.5) * d_5d9c_9db7;
        } else {
            d_5d9c_9db7 = (d_2f3c_855b[team == 81][p] * 4 + d_5d9c_9dc1) / 5;
        }
        d_5d9c_9db7 = d_5d9c_9db7 * d_5d9c_a012[d_5d9c_9b98];
        d_2f3c_2d25[d_5d9c_9b98][p] = d_5d9c_9db7 * 0.35 + 11.0;
        d_2f3c_1bec[d_5d9c_9b98][p] = f_14d2_13c3(f_14d2_1425(d_5d9c_9db7 * 0.25 + 3.0, 8.0), 3.0);
    }
    return d_2f3c_2d25[d_5d9c_9b98][p];
}

void f_7a28_18b2(team)
register int team;
{
    int n;
    unsigned char c3;
    unsigned char c4;
    float f8;
    float fc;
    float f10;
    float f14;
    int j, i;

    d_5d9c_9e67 = 0;
    d_5d9c_9db3 = 0;
    n = 0;
    d_5d9c_9db1 = 0;
    d_5d9c_9f51 = 0;
    d_5d9c_9daf = 0;
    d_5d9c_9dad = 0;
    d_5d9c_9dab = 0;
    d_5d9c_9da9 = 0;
    d_5d9c_9da7 = 0;
    d_5d9c_9da5 = 0;
    d_5d9c_9da3 = 0;
    d_5d9c_9dfd = 0;
    d_5d9c_9da1 = 0;
    d_5d9c_9ac8 = 0;
    d_5d9c_9ac4 = 0;
    d_5d9c_9ddf = 400;
    d_5d9c_9bad = 750;
    f_7a28_2771(team);
    if (team == d_5d9c_9edd) {
        for (i = 0; i < 3; i++)
            for (j = 0; j < 60; j++)
                d_2f3c_84a7[i][j] = 0;
    } else {
        for (i = 0; i < 3; i++)
            for (j = 0; j < 60; j++)
                d_2f3c_83f3[i][j] = 0;
    }
    for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 12; d_5d9c_9fa1++) {
        if (d_2f3c_2d0b[team == d_5d9c_9edb][d_5d9c_9fa1] < 2) {
            unsigned char k;

            d_5d9c_9e27 = f_7a28_14c4(d_5d9c_9fa1, team);
            d_5d9c_9eb7 = d_2f3c_35ad[team][0][d_5d9c_9fa1];
            k = d_2f3c_35ad[team][2][d_5d9c_9fa1];
            f8 = (k == 1) * -0.25 + (k == 2) * 0.25;
            fc = 0;
            f10 = 0;
            if (team < 80) {
                float t;

                d_5d9c_9c65 = d_2f3c_2d59[team][d_5d9c_9fa1];
                d_5d9c_9ac8 = (j = d_483b_0000[6][d_5d9c_9c65]) * j / 2000.0;
                d_5d9c_9ac4 = (j = d_483b_0000[7][d_5d9c_9c65]) * j / 2000.0;
                if (d_5d9c_9eb7 == 7) {
                    fc = (j = d_483b_0000[1][d_5d9c_9c65]) * j / 1000.0;
                    f10 = (j = d_483b_0000[2][d_5d9c_9c65]) * j / 1000.0;
                }
                f14 = (j = d_483b_0000[12][d_5d9c_9c65]) * j / 2000.0;
                c4 = f_14d2_13eb((int)(d_483b_0000[21][d_5d9c_9c65] / 100.0 * d_483b_0000[22][d_5d9c_9c65]), 1);
                d_5d9c_9ddf -= d_483b_0000[11][d_5d9c_9c65];
                j = d_483b_0000[5][d_5d9c_9c65];
                t = d_483b_0000[16][d_5d9c_9c65] / 100.0 * (j * j / 100.0);
                d_5d9c_9bab = t * t * t;
            } else {
                if (team == d_5d9c_9edd)
                    d_5d9c_9b2b = d_5d9c_9e91 >= 480 ? -1 : 0;
                else
                    d_5d9c_9b2b = d_5d9c_9e8f >= 480 ? -1 : 0;
                d_5d9c_9ac8 = d_5d9c_9b2b ? 0.095 : 0.1;
                d_5d9c_9ac4 = d_5d9c_9b2b ? 0.095 : 0.1;
                if (d_5d9c_9eb7 == 7) {
                    fc = d_5d9c_9b2b ? 0.095 : 0.1;
                    f10 = d_5d9c_9b2b ? 0.095 : 0.1;
                }
                f14 = d_5d9c_9b2b ? 0.095 : 0.1;
                c4 = d_5d9c_9b2b ? 5 : 10;
                d_5d9c_9ddf -= 16;
                d_5d9c_9bab = f_14d2_0c2a(d_5d9c_9b2b ? 100 : 400);
            }
            if (d_5d9c_9fa1 > 10)
                c3 = d_5d9c_a03c[team == d_5d9c_9edb][d_5d9c_9fa1 == 12];
            else
                c3 = 0;
            if (d_5d9c_9eb7 == 1 && d_5d9c_9dfd == 0) {
                d_5d9c_9e67 = (f14 + 3.95) * d_5d9c_9e27 + d_5d9c_9e67;
                d_5d9c_9dfd = 1;
                d_5d9c_9bab = 0;
            }
            if (d_5d9c_9eb7 == 11 && d_5d9c_9da1 == 0) {
                d_5d9c_9e67 = (f14 + 1.45) * d_5d9c_9e27 + d_5d9c_9e67;
                d_5d9c_9db3 = (f14 + 2.95) * d_5d9c_9e27 + d_5d9c_9db3;
                n = (f14 + 0.45) * d_5d9c_9e27 + n;
                if (team == d_5d9c_9edd)
                    f_7a28_2909(c4, c3, 0);
                else
                    f_7a28_297d(c4, c3, 0);
                d_5d9c_9da1 = 1;
                d_5d9c_9bab /= 4;
            }
            if (d_5d9c_9eb7 > 1 && d_5d9c_9eb7 < 5) {
                d_5d9c_9e67 = (f14 + 0.95) * d_5d9c_9e27 + d_5d9c_9e67;
                d_5d9c_9db3 = (1.95 - f8 + f14) * d_5d9c_9e27 + d_5d9c_9db3;
                n = (f8 + 0.95 + f14) * d_5d9c_9e27 + n;
                d_5d9c_9f51 = (d_5d9c_9ac4 + 0.95) * d_5d9c_9e27 + d_5d9c_9f51;
                if (team == d_5d9c_9edd)
                    f_7a28_2909(c4, c3, 0);
                else
                    f_7a28_297d(c4, c3, 0);
                d_5d9c_9bab = d_5d9c_9bab / (4.0 - f8 * 2.0);
            }
            if (d_5d9c_9eb7 > 4 && d_5d9c_9eb7 < 8) {
                d_5d9c_9db3 = (f14 + 0.95) * d_5d9c_9e27 + d_5d9c_9db3;
                n = (1.75 - f8 + fc + f10 + f14) * d_5d9c_9e27 + n;
                d_5d9c_9db1 = (f8 + 0.8 + d_5d9c_9ac8 + f14) * d_5d9c_9e27 + d_5d9c_9db1;
                d_5d9c_9f51 = (d_5d9c_9ac4 + 1.95) * d_5d9c_9e27 + d_5d9c_9f51;
                if (team == d_5d9c_9edd)
                    f_7a28_2909(c4, c3, 1);
                else
                    f_7a28_297d(c4, c3, 1);
                d_5d9c_9bab = d_5d9c_9bab / (2.0 - f8 * 2.0);
            }
            if (d_5d9c_9eb7 > 7 && d_5d9c_9eb7 < 11) {
                n = (0.95 - f8 + f14) * d_5d9c_9e27 + n;
                d_5d9c_9db1 = (f8 + 1.8 + d_5d9c_9ac8 + f14) * d_5d9c_9e27 + d_5d9c_9db1;
                d_5d9c_9f51 = (d_5d9c_9ac4 + 3.95) * d_5d9c_9e27 + d_5d9c_9f51;
                if (team == d_5d9c_9edd)
                    f_7a28_2909(c4, c3, 2);
                else
                    f_7a28_297d(c4, c3, 2);
            }
            d_5d9c_9bad = f_14d2_13eb(3, d_5d9c_9bad - d_5d9c_9bab);
            switch (d_5d9c_9eb7) {
            case 2:
                d_5d9c_9daf++;
                break;
            case 3:
                d_5d9c_9dad++;
                break;
            case 4:
                d_5d9c_9dab++;
                break;
            case 5:
            case 8:
                d_5d9c_9da9++;
                break;
            case 6:
            case 9:
                d_5d9c_9da7++;
                break;
            case 7:
                d_5d9c_9da5++;
                break;
            case 10:
                d_5d9c_9da3++;
            }
        }
    }
    d_5d9c_9db3 += (d_5d9c_9daf != 1) * 15 + (d_5d9c_9dad != 1) * 15 + (d_5d9c_9dab < 1) * 15;
    n += (d_5d9c_9daf != 1) * 15 + (d_5d9c_9dad != 1) * 15 + (d_5d9c_9dab < 1) * 15
        + (d_5d9c_9da9 == 0 || d_5d9c_9da9 > 2) * 15 + (d_5d9c_9da7 == 0 || d_5d9c_9da7 > 2) * 15
        + (d_5d9c_9da5 == 0 || d_5d9c_9da5 > 3) * 15 + (d_5d9c_9da3 == 0 || d_5d9c_9da3 > 3) * 15;
    d_5d9c_9db1 += (d_5d9c_9da9 == 0 || d_5d9c_9da9 > 2) * 15 + (d_5d9c_9da7 == 0 || d_5d9c_9da7 > 2) * 15
        + (d_5d9c_9da5 == 0 || d_5d9c_9da5 > 3) * 15 + (d_5d9c_9da3 == 0 || d_5d9c_9da3 > 3) * 15;
    d_5d9c_9f51 += (d_5d9c_9da9 == 0 || d_5d9c_9da9 > 2) * 30 + (d_5d9c_9da7 == 0 || d_5d9c_9da7 > 2) * 30
        + (d_5d9c_9da5 == 0 || d_5d9c_9da5 > 3) * 30 + (d_5d9c_9da3 == 0 || d_5d9c_9da3 > 3) * 30;
    if (d_5d9c_9dab > 2 && d_5d9c_9da1 == 1 || d_5d9c_9dab > 3) {
        d_5d9c_9db3 -= (d_5d9c_9dab + d_5d9c_9da1 - 3) * 15;
        n -= (d_5d9c_9dab + d_5d9c_9da1 - 3) * 15;
    }
    d_5d9c_9e67 = d_5d9c_9e67 * 1.25;
    if (team < 80) {
        if (f_1680_0003(team) == 0) {
            float t;

            t = d_2f3c_5e19[d_2f3c_7f93[team]] / 10.0;
            d_5d9c_9ac0 = t * t / 25000.0;
        } else
            d_5d9c_9ac0 = 0;
    } else
        d_5d9c_9ac0 = 0.01;
    if (team == d_5d9c_9edd) {
        d_5d9c_9df5 = d_5d9c_9ddf;
        if (f_992a_7853(d_5d9c_9fab, d_5d9c_9f83 + 1) == 0)
            d_5d9c_9abc = f_14d2_1425(f_14d2_13c3(
                1.07 - d_5d9c_9e65 / 1000.0
                - (f_992a_72e8(d_5d9c_9fab, d_5d9c_9f83 + 1) || f_992a_7399(d_5d9c_9fab, d_5d9c_9f83 + 1)
                   || f_992a_7430(d_5d9c_9fab, d_5d9c_9f83 + 1)) * 0.02
                + (f_992a_70a8(d_5d9c_9fab) || f_992a_74c1(d_5d9c_9fab, d_5d9c_9f83 + 1)) * 0.02,
                1.0), 1.11);
        else
            d_5d9c_9abc = 1.0;
        d_5d9c_9abc = (d_5739_0000[0][d_5d9c_9edd] - 8.5) / 300.0 + d_5d9c_9ac0 + d_5d9c_9abc;
        d_5d9c_9b15 = d_5d9c_9dfd == 1 ? -1 : 0;
        d_5d9c_9df9 = d_5d9c_9e67 * d_5d9c_9abc;
        d_5d9c_9e03 = d_5d9c_9db3 * d_5d9c_9abc;
        d_5d9c_9f13 = n * d_5d9c_9abc;
        d_5d9c_9e0f = d_5d9c_9db1 * d_5d9c_9abc;
        d_5d9c_9e01 = d_5d9c_9f51 * d_5d9c_9abc;
        d_5d9c_9bb7 = d_5d9c_9bad;
    } else {
        d_5d9c_9abc = (d_5739_0000[0][d_5d9c_9edb] - 8.5) / 300.0 + 1.0 + d_5d9c_9ac0;
        d_5d9c_9df3 = d_5d9c_9ddf;
        d_5d9c_9b14 = d_5d9c_9dfd == 1 ? -1 : 0;
        d_5d9c_9dfb = d_5d9c_9e67 * d_5d9c_9abc;
        d_5d9c_9e0b = d_5d9c_9db3 * d_5d9c_9abc;
        d_5d9c_9e17 = n * d_5d9c_9abc;
        d_5d9c_9e07 = d_5d9c_9db1 * d_5d9c_9abc;
        d_5d9c_9dff = d_5d9c_9f51 * d_5d9c_9abc;
        d_5d9c_9bb5 = d_5d9c_9bad;
    }
}

void f_7a28_2771(int team)
{
    char ok;

    d_5d9c_9d9f = f_1680_0003(team) ? 12 : 10;
    d_5d9c_9f5f = 0;
    for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= d_5d9c_9d9f; d_5d9c_9fa1++) {
        if (d_2f3c_2d0b[team == d_5d9c_9edb][d_5d9c_9fa1] < 2) {
            if (team > 79) {
                d_5d9c_9f49 = d_2f3c_35ad[team][0][d_5d9c_9fa1];
                d_5d9c_9dc1 = f_1680_052b(d_5d9c_9fa1, team, d_5d9c_9f49);
                ok = -1;
            } else if (f_1680_0003(team) == 0) {
                d_5d9c_9dc1 = f_1680_0433(d_2f3c_2d59[team][d_5d9c_9fa1],
                                          d_2f3c_35ad[team][0][d_5d9c_9fa1]);
                ok = -1;
            } else {
                d_5d9c_9dc1 = f_1680_0433(d_2f3c_2d59[team][d_5d9c_9fa1],
                                          d_2f3c_35ad[team][0][d_5d9c_9fa1]);
                ok = d_5d9c_9d98[d_2f3c_7f93[team]] - 1 == d_5d9c_9fa1;
            }
            if (ok && d_5d9c_9dc1 > d_5d9c_9f5f) {
                d_5d9c_9f5f = d_5d9c_9dc1;
                d_5d9c_a026[team == d_5d9c_9edb] = d_5d9c_9fa1 + 1;
            }
        }
    }
    d_5d9c_a026[team == d_5d9c_9edb ? 3 : 2] = d_5d9c_9f5f;
}

void f_7a28_2909(unsigned char a, unsigned char b, unsigned char c)
{
    int base;

    base = a * 3 + b + 57;
    for (d_5d9c_9f6d = base; d_5d9c_9f6d <= 119; d_5d9c_9f6d++)
        d_2f3c_846b[c][d_5d9c_9f6d] = d_2f3c_846b[c][d_5d9c_9f6d] + (d_5d9c_9f6d - base) / 4;
}

void f_7a28_297d(unsigned char a, unsigned char b, unsigned char c)
{
    int base;

    base = a * 3 + b + 57;
    for (d_5d9c_9f6d = base; d_5d9c_9f6d <= 119; d_5d9c_9f6d++)
        d_2f3c_83b7[c][d_5d9c_9f6d] = d_2f3c_83b7[c][d_5d9c_9f6d] + (d_5d9c_9f6d - base) / 4;
}

void f_7a28_29f1(int team)
{
    float f;
    long v;

    switch (d_5d9c_9edd / 20) {
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
    v = f_14d2_1400((long)(d_5d9c_9a3c - d_5739_0052[d_5d9c_9edd] * 1000
                                         / (f_1680_0795(d_5d9c_9edd) * 4.0)), 0L) * f;
    if (f_992a_7853(d_5d9c_9fab, d_5d9c_9f83 + 1) || (d_5d9c_9fab == 91 && d_5d9c_9f83 > 0))
        v = v / 2;
    else if (f_992a_72e8(d_5d9c_9fab, d_5d9c_9f83 + 1) || f_992a_7399(d_5d9c_9fab, d_5d9c_9f83 + 1)
             || f_992a_7430(d_5d9c_9fab, d_5d9c_9f83 + 1))
        v = team == d_5d9c_9edb ? 0 : v;
    else
        v = v * (team == d_5d9c_9edb ? 0.25 : 0.75);
    d_5d9c_a01a = f_14d2_16bc(d_5d9c_a35c, 1);
    (*d_5d9c_a01a)[team] += v;
}

void f_7a28_2b9b(void)
{
    int a, b, c, d, e, g;
    int s, t;
    int u;
    float r;

    d_5739_1d28[d_5d9c_9f83][0][d_5d9c_9fab] = d_5d9c_9e91 * 32 + d_5d9c_9e39 - d_5d9c_9e35;
    d_5739_1d28[d_5d9c_9f83][1][d_5d9c_9fab] = d_5d9c_9e8f * 32 + d_5d9c_9e37 - d_5d9c_9e33;
    if (d_5d9c_9b6c != 0)
        d_2f3c_1534[d_5d9c_9f83] = d_5d9c_9e33 > d_5d9c_9e35 ? 2 : 1;
    a = (long)d_5d9c_9e4b * 100 / (d_5d9c_9e4b + d_5d9c_9e41);
    b = (long)d_5d9c_9e47 * 100 / (d_5d9c_9e47 + d_5d9c_9e45);
    c = (long)d_5d9c_9e43 * 100 / (d_5d9c_9e43 + d_5d9c_9e49);
    d = (long)d_5d9c_9e49 * 100 / (d_5d9c_9e49 + d_5d9c_9e43);
    e = (long)d_5d9c_9e45 * 100 / (d_5d9c_9e47 + d_5d9c_9e45);
    g = (long)d_5d9c_9e41 * 100 / (d_5d9c_9e41 + d_5d9c_9e4b);
    s = 0;
    d_5d9c_9ebd = 0;
    for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 10; d_5d9c_9fa1++) {
        s = s + d_2f3c_1bec[0][d_5d9c_9fa1];
        d_5d9c_9ebd = d_5d9c_9ebd + d_2f3c_1bec[1][d_5d9c_9fa1];
    }
    t = d_5d9c_9e4f * 8 + a + b + c;
    u = d_5d9c_9e4d * 8 + d + e + g;
    t += (d_5d9c_9e39 - d_5d9c_9e35) * 20
         + ((d_5d9c_9e39 - d_5d9c_9e35) - (d_5d9c_9e37 - d_5d9c_9e33)) * 8;
    u += (d_5d9c_9e37 - d_5d9c_9e33) * 20
         + ((d_5d9c_9e37 - d_5d9c_9e33) - (d_5d9c_9e39 - d_5d9c_9e35)) * 8;
    r = (float)s / d_5d9c_9ebd / ((float)t / u);
    d_5d9c_9ab8 = r > 1 ? r * 0.75 - 0.75 : r * 4.5 - 3.0;
    f_7a28_2e73(d_5d9c_9edd, a, b, c, d_5d9c_9e4f);
    f_7a28_2e73(d_5d9c_9edb, d, e, g, d_5d9c_9e4d);
}

void f_7a28_2e73(int team, char a, char b, char c, char d)
{
    int r;
    char k;
    long far *p;

    for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 12; d_5d9c_9fa1++) {
        if (team < 80)
            d_5d9c_9f91 = d_2f3c_2d59[team][d_5d9c_9fa1];
        else
            d_5d9c_9f91 = d_2f3c_35ad[team][0][d_5d9c_9fa1] + 1700;
        k = d_2f3c_2d0b[team == d_5d9c_9edb][d_5d9c_9fa1];
        if (k != 4 && f_7a28_3518(d_5d9c_9fa1, team) > 4) {
            if (d_2f3c_8575[team == d_5d9c_9edb][d_5d9c_9fa1] == 0 || k == 0 || k == 1) {
                d_5d9c_9d9d = (team == d_5d9c_9edd ? d_2f3c_1bec[0][d_5d9c_9fa1] - d_5d9c_9ab8
                               : d_2f3c_1bec[1][d_5d9c_9fa1] + d_5d9c_9ab8) + 0.5;
                d_5d9c_9d9d = f_14d2_144d(f_14d2_13eb(1, d_5d9c_9d9d), 10);
                d_2f3c_8575[team == d_5d9c_9edb][d_5d9c_9fa1] = d_5d9c_9d9d;
            } else
                d_5d9c_9d9d = d_2f3c_8575[team == d_5d9c_9edb][d_5d9c_9fa1];
            if (d_5d9c_9e7f == -1 && team < 80 && d_5d9c_9fab > 4) {
                d_2f3c_85f7[d_5d9c_9f91] += d_5d9c_9d9d;
                d_3e42_0000[22][d_5d9c_9f91] += d_5d9c_9d9d;
                if (d_3e42_0000[3][d_5d9c_9f91] > d_5d9c_9d9d || d_3e42_0000[3][d_5d9c_9f91] == 0)
                    d_3e42_0000[3][d_5d9c_9f91] = d_5d9c_9d9d;
                if (d_3e42_0000[4][d_5d9c_9f91] < d_5d9c_9d9d || d_3e42_0000[4][d_5d9c_9f91] == 0)
                    d_3e42_0000[4][d_5d9c_9f91] = d_5d9c_9d9d;
                d_3e42_0000[0][d_5d9c_9f91]++;
                d_3e42_0000[21][d_5d9c_9f91]++;
                if (d_5d9c_9fab > 4 && d_483b_0000[21][d_5d9c_9f91] >= 80) {
                    r = f_7a28_3518(d_5d9c_9fa1, team);
                    if (d_1f3e_5be8[0][d_5d9c_9f91] == 0)
                        d_483b_0000[21][d_5d9c_9f91] = f_14d2_13eb(0, d_483b_0000[21][d_5d9c_9f91]
                            - f_14d2_13eb(abs(28 - d_483b_0000[17][d_5d9c_9f91]) / 2, 2) * (r / 90));
                }
                if (5 - team / 20 + (team > 59) > d_5d9c_9d9d)
                    d_1f3e_5be8[15][d_5d9c_9f91] = -1;
                if (team == d_5d9c_9edd) {
                    d_5d9c_9d9b = d_1f3e_4a26[0][d_5d9c_9fa1];
                    d_5d9c_9ec3 = d_5d9c_9e8f;
                } else {
                    d_5d9c_9d9b = d_1f3e_4a26[1][d_5d9c_9fa1];
                    d_5d9c_9ec3 = d_5d9c_9e91;
                }
                f_9100_5076(team, d_5d9c_9ec3, d_5d9c_9f91, d_5d9c_9d9b);
            }
        } else
            d_5d9c_9d9d = 0;
        if (team == d_5d9c_9edd) {
            d_1f3e_49f2[0][d_5d9c_9fa1][0] = d_5d9c_9f91 >> 8;
            d_1f3e_49f2[0][d_5d9c_9fa1][1] = d_5d9c_9f91;
            d_1f3e_4a40[0][d_5d9c_9fa1] = d_5d9c_9d9d;
            if (d_2f3c_2d0b[team == d_5d9c_9edb][d_5d9c_9fa1] == 2)
                d_1f3e_4a5a[0][d_5d9c_9fa1] = 1;
            else if (d_2f3c_2d0b[team == d_5d9c_9edb][d_5d9c_9fa1] == 3 ||
                     d_2f3c_2d0b[team == d_5d9c_9edb][d_5d9c_9fa1] == 6)
                d_1f3e_4a5a[0][d_5d9c_9fa1] = 2;
        }
        if (team == d_5d9c_9edb) {
            d_1f3e_49f2[1][d_5d9c_9fa1][0] = d_5d9c_9f91 >> 8;
            d_1f3e_49f2[1][d_5d9c_9fa1][1] = d_5d9c_9f91;
            d_1f3e_4a40[1][d_5d9c_9fa1] = d_5d9c_9d9d;
            if (d_2f3c_2d0b[team == d_5d9c_9edb][d_5d9c_9fa1] == 2)
                d_1f3e_4a5a[1][d_5d9c_9fa1] = 1;
            else if (d_2f3c_2d0b[team == d_5d9c_9edb][d_5d9c_9fa1] == 3 ||
                     d_2f3c_2d0b[team == d_5d9c_9edb][d_5d9c_9fa1] == 6)
                d_1f3e_4a5a[1][d_5d9c_9fa1] = 2;
        }
    }
    p = (long far *)d_1f3e_49ee;
    *p = d_5d9c_9a3c;
    if (team == d_5d9c_9edd) {
        d_1f3e_4a74[0] = a;
        d_1f3e_4a74[1] = b;
        d_1f3e_4a74[2] = c;
        d_1f3e_4a74[3] = d;
        d_1f3e_4a74[5] = d_5d9c_a026[0];
    } else {
        d_1f3e_4a74[4] = d;
        d_1f3e_4a74[6] = d_5d9c_a026[1];
    }
}

int f_7a28_3518(int i, int team)
{
    int r;

    if (i > 10)
        r = d_5d9c_9ea5 - d_5d9c_a03c[team == d_5d9c_9edb][i == 12];
    else if (d_2f3c_2d0b[team == d_5d9c_9edb][i] == 3 || d_2f3c_2d0b[team == d_5d9c_9edb][i] == 5) {
        if (d_5d9c_a040[team == d_5d9c_9edb][0] == i)
            r = d_5d9c_a03c[team == d_5d9c_9edb][0];
        else if (d_5d9c_a040[team == d_5d9c_9edb][1] == i)
            r = d_5d9c_a03c[team == d_5d9c_9edb][1];
    } else
        r = d_5d9c_9ea5;
    return r;
}

/* the match statistics screen (c: full time, else half time / so far) */
void f_7a28_360e(int a, int b, char c)
{
    unsigned i;
    unsigned j;
    long far *p;
    int h1;
    int h2;
    int x;
    int y;
    int key;
    char done;
    char ok;
    char name2[80];
    char name1[80];
    char s[320];

    do {
        d_5d9c_9fca = f_14d2_16bc(d_5d9c_a356, 1);
        for (i = 0; i < 2; i++)
            for (j = 0; j < 20; j++)
                strcpy(d_5d9c_9fca + i * 1600 + j * 80, "");
        done = -1;
        if (c) {
            f_a1c3_27e4("Match Statistics");
            if (d_1f3e_49e6[4] == 'Z' && d_1f3e_49e6[5] == 'Z') {
                d_5d9c_9d99 = d_1f3e_49e6[2];
                d_5d9c_9d97 = d_1f3e_49e6[3];
            } else {
                d_5d9c_9d99 = d_1f3e_49e6[4];
                d_5d9c_9d97 = d_1f3e_49e6[5];
            }
        } else {
            if (d_5d9c_9ea5 == 45)
                strcpy(s, "Half-time Stats");
            else
                sprintf(s, "Stats %d mins", d_5d9c_9ea5);
            f_a1c3_27e4(s);
            d_5d9c_9d99 = d_5d9c_9e39;
            d_5d9c_9d97 = d_5d9c_9e37;
        }
        p = (long far *)&d_1f3e_49e6[8];
        d_5d9c_9a3c = *p;
        h1 = d_1f3e_49e6[0x8e];
        h2 = d_1f3e_49e6[0x8f];
        d_5d9c_9e09 = d_1f3e_49e6[0x90];
        d_5d9c_9e4f = d_1f3e_49e6[0x91];
        d_5d9c_9e4d = d_1f3e_49e6[0x92];

        f_7555_277b(a, a, b);
        strcpy(name1, f_14d2_0d08(f_1680_1a91(a)));
        sprintf(s, " %s ", name1);
        f_1680_2b8b(1.25, 4.0, d_5d9c_9ed9, d_5d9c_9f65, 0, s);
        sprintf(s, " %d", d_5d9c_9d99);
        f_1680_2a61(17.5, 4.0, 1, s);
        d_5d9c_9fca = f_14d2_16bc(d_5d9c_a356, 1);
        sprintf(d_5d9c_9fca, "%-26s%d", name1, d_5d9c_9d99);

        f_7555_277b(b, a, b);
        strcpy(name2, f_14d2_0d08(f_1680_1a91(b)));
        sprintf(s, " %s ", name2);
        f_1680_2b8b(20.5, 4.0, d_5d9c_9ed9, d_5d9c_9f65, 0, s);
        sprintf(s, " %d", d_5d9c_9d97);
        f_1680_2a61(36.75, 4.0, 1, s);
        d_5d9c_9fca = f_14d2_16bc(d_5d9c_a356, 1);
        sprintf(d_5d9c_9fca + 1600, "%-26s%d", name2, d_5d9c_9d97);

        if (c) {
            sprintf(d_1f3e_51b6, "HT %d-%d", d_1f3e_49e6[0], d_1f3e_49e6[1]);
            sprintf(s, " %s ", d_1f3e_51b6);
            f_1680_2867(1.125, 5.0, 1, 12, 0, s);
            d_5d9c_9fca = f_14d2_16bc(d_5d9c_a356, 1);
            strcpy(d_5d9c_9fca + 80, d_1f3e_51b6);
            if (d_1f3e_49e6[4] != 'Z' || d_1f3e_49e6[5] != 'Z') {
                x = d_1f3e_49e6[2];
                y = d_1f3e_49e6[3];
                sprintf(d_1f3e_51b6, "FT %d-%d", x, y);
                sprintf(s, " %s ", d_1f3e_51b6);
                f_1680_2867(7.375, 5.0, 1, 12, 0, s);
                d_5d9c_9fca = f_14d2_16bc(d_5d9c_a356, 1);
                strcat(d_5d9c_9fca + 80, " ");
                strcat(d_5d9c_9fca + 80, d_1f3e_51b6);
                if (d_1f3e_49e6[6] != 'Z' || d_1f3e_49e6[7] != 'Z') {
                    sprintf(d_1f3e_51b6, "%d-%d PENS", d_1f3e_49e6[6] - d_5d9c_9d99,
                            d_1f3e_49e6[7] - d_5d9c_9d97);
                    sprintf(s, " %s ", d_1f3e_51b6);
                    f_1680_2867(13.625, 5.0, 1, 12, 0, s);
                    d_5d9c_9fca = f_14d2_16bc(d_5d9c_a356, 1);
                    strcat(d_5d9c_9fca + 80, " ");
                    strcat(d_5d9c_9fca + 80, d_1f3e_51b6);
                }
            }
        }

        f_7a28_3e39(-1, h1, h2, d_5d9c_9e09, d_5d9c_9e4f, 1.125);
        f_7a28_3e39(0, 100 - d_5d9c_9e09, 100 - h2, 100 - h1, d_5d9c_9e4d, 20.375);
        strcpy(d_1f3e_56d4, "Attendance");
        sprintf(d_1f3e_5684, "%7ld", d_5d9c_9a3c);
        sprintf(s, " %s     -%s", d_1f3e_56d4, d_1f3e_5684);
        f_1680_2867(1.125, 23.0, 1, 12, 150, s);
        d_5d9c_9fca = f_14d2_16bc(d_5d9c_a356, 1);
        sprintf(d_5d9c_9fca + 1520, "%s         -%s", d_1f3e_56d4, d_1f3e_5684);

        if (c) {
            f_a1c3_2d08(2, 1.25, 1.125, 1, 2, 31, "PRNT");
            if (d_5d9c_9b8f == 0)
                f_a1c3_34c6(1);
            do {
                key = d_5d9c_9faf = f_a1c3_3298(d_5d9c_9f63);
                if (key == 1) {
                    f_992a_0ce6();
                    f_a1c3_30b1(1, 0);
                }
            } while (key != 0);
        } else if (d_5d9c_9ea5 == 45) {
            do {
                ok = -1;
                f_a1c3_3505(2);
                if (strcmp(f_14d2_0d08(d_1f3e_4170), "H") == 0 && d_5d9c_9e57 == 0) {
                    f_7555_3ff8(d_5d9c_9edd, -1);
                    done = 0;
                } else if (strcmp(f_14d2_0d08(d_1f3e_4170), "A") == 0 && d_5d9c_9e53 == 0) {
                    f_7555_3ff8(d_5d9c_9edb, -1);
                    done = 0;
                } else if (d_1f3e_4170[0] != 0)
                    ok = 0;
            } while (!ok);
        } else
            f_a1c3_3505(0);
    } while (!done);
}

void f_7a28_3e39(char a, int b, int c, int d, int e, float f)
{
    int x0;
    int n;
    char flag;
    unsigned char far *p;
    int y;
    int fg;
    char mark[80];
    char line[160];
    char num[80];
    char buf[320];

    x0 = f * 8;
    d_5d9c_9f7f = 0;
    y = 0;
    d_5d9c_9fa1 = 0;
    d_5d9c_9f7b = 14;
    d_5d9c_9f6b = 8;
    do {
        if (a) {
            p = (unsigned char far *)d_1f3e_49f2[0][d_5d9c_9fa1];
            d_5d9c_9f91 = p[0] << 8 | p[1];
            d_5d9c_9d9d = d_1f3e_4a40[0][d_5d9c_9fa1];
            flag = d_1f3e_4a5a[0][d_5d9c_9fa1] == 1;
            d_5d9c_9b62 = d_1f3e_4a5a[0][d_5d9c_9fa1] == 2;
            d_5d9c_9e13 = d_1f3e_4a26[0][d_5d9c_9fa1];
            d_5d9c_9b73 = d_1f3e_4a79 == d_5d9c_9fa1 + 1;
        } else {
            p = (unsigned char far *)d_1f3e_49f2[1][d_5d9c_9fa1];
            d_5d9c_9f91 = p[0] << 8 | p[1];
            d_5d9c_9d9d = d_1f3e_4a40[1][d_5d9c_9fa1];
            flag = d_1f3e_4a5a[1][d_5d9c_9fa1] == 1;
            d_5d9c_9b62 = d_1f3e_4a5a[1][d_5d9c_9fa1] == 2;
            d_5d9c_9e13 = d_1f3e_4a26[1][d_5d9c_9fa1];
            d_5d9c_9b73 = d_1f3e_4a7a == d_5d9c_9fa1 + 1;
        }
        n = d_5d9c_9fa1 > 10 ? 6 : 1;
        strcpy(mark, "");
        if (flag)
            strcpy(mark, "so");
        else if (d_5d9c_9b62)
            strcpy(mark, "ij");
        else if (d_5d9c_9b73)
            strcpy(mark, "c");
        strcpy(d_1f3e_4120, "");
        if (d_5d9c_9e13 > 0)
            sprintf(d_1f3e_4120, "%d", d_5d9c_9e13);
        if (d_5d9c_9f91 >= 1701) {
            strcpy(d_1f3e_56d4, d_5471_17c4[d_5d9c_9f91 - 1700]);
            if (d_5d9c_9fa1 > 10)
                sprintf(d_1f3e_56d4, "Substitute %c", d_5d9c_9fa1 + 54);
            strcpy(d_1f3e_51b6, d_1f3e_56d4);
        } else {
            strcpy(d_1f3e_56d4, f_a1c3_21cc(d_5d9c_9f91));
            if (strlen(mark) == 0)
                d_5d9c_9e8b = 14;
            else
                d_5d9c_9e8b = 14 - (strlen(mark) + 1);
            sprintf(d_1f3e_51b6, "%.*s", d_5d9c_9e8b, d_1f3e_56d4);
        }
        sprintf(buf, " %s", f_1680_03f3(d_5d9c_9fa1 + 1));
        if (d_5d9c_9f7b == 14)
            fg = 9;
        else
            fg = 2;
        f_1680_2867(f, d_5d9c_9f7f + 6, 1, fg, 24, buf);
        sprintf(line, "%2d", d_5d9c_9fa1 + (d_5d9c_9fa1 == 12 ? 2 : 1));
        sprintf(buf, " %s", d_1f3e_51b6);
        f_1680_2867(f + 3.25, d_5d9c_9f7f + 6, n, d_5d9c_9f7b, 92, buf);
        strcat(line, "  ");
        strcat(line, d_1f3e_56d4);
        if (d_5d9c_9d9d > 0) {
            f_1680_27aa(x0 + f_14d2_144d(strlen(d_1f3e_51b6), 11) * 6 + 48, -(y + 48),
                        strcmp(mark, "c") == 0 ? 6 : 2, mark);
            strcat(line, "  ");
            strcat(line, mark);
            sprintf(num, "%2d", d_5d9c_9d9d);
            sprintf(buf, " %s", num);
            f_1680_2867(f + 15, -(d_5d9c_9f7f + 6), 1, 3, 30, buf);
            sprintf(buf, "%*s", 25 - strlen(line), "");
            strcat(line, buf);
            strcat(line, num);
            f_1680_27aa(x0 + strlen(num) * 6 + 136, -(y + 48), 6, d_1f3e_4120);
            strcat(line, " ");
            strcat(line, d_1f3e_4120);
        } else {
            f_1680_2867(f + 15, -(d_5d9c_9f7f + 6), 1, 3, 30, "  -");
            sprintf(buf, "%*s", 26 - strlen(line), "");
            strcat(line, buf);
            strcat(line, "-");
        }
        d_5d9c_9fca = f_14d2_16bc(d_5d9c_a356, 1);
        strcpy(d_5d9c_9fca + (a + 1) * 1600 + (d_5d9c_9fa1 + 2) * 80, line);
        d_5d9c_9f7f++;
        y += 8;
        f_14d2_148f(&d_5d9c_9f7b, &d_5d9c_9f6b, 2);
        d_5d9c_9fa1++;
    } while (d_5d9c_9fa1 != 13);
    sprintf(buf, " Defence        -    %d%%", b);
    f_1680_2867(f, 19, 1, 4, 150, buf);
    d_5d9c_9fca = f_14d2_16bc(d_5d9c_a356, 1);
    sprintf(d_5d9c_9fca + (a + 1) * 1600 + 1200, "Defence            -%6d%%", b);
    sprintf(buf, " Midfield       -    %d%%", c);
    f_1680_2867(f, 20, 1, 4, 150, buf);
    d_5d9c_9fca = f_14d2_16bc(d_5d9c_a356, 1);
    sprintf(d_5d9c_9fca + (a + 1) * 1600 + 1280, "Midfield           -%6d%%", c);
    sprintf(buf, " Attack         -    %d%%", d);
    f_1680_2867(f, 21, 1, 4, 150, buf);
    d_5d9c_9fca = f_14d2_16bc(d_5d9c_a356, 1);
    sprintf(d_5d9c_9fca + (a + 1) * 1600 + 1360, "Attack             -%6d%%", d);
    sprintf(buf, " Attempts       -    %d", e);
    f_1680_2867(f, 22, 1, 4, 150, buf);
    d_5d9c_9fca = f_14d2_16bc(d_5d9c_a356, 1);
    sprintf(d_5d9c_9fca + (a + 1) * 1600 + 1440, "Attempts           -%6d", e);
}
