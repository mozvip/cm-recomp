/* @at 6e68:0000 */
/* @data 5d9c:3a74 */
/* @module */

/* Overlay 2: club information: the accounts, board confidence, resignation and manager
 * jobs, match reports, background picture, save game, quitting, the week's fixture and
 * result titles and lists, cup rounds, the squad screen, the tactics editor, formations,
 * tactics and playing style. */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <mem.h>
#include <ctype.h>

/* the functions, in address order: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_6e68_0000(void);
void f_6e68_0027(int team);
void f_6e68_060e(void);
void f_6e68_07e9(int team);
void f_6e68_084d(int team);
void f_6e68_0985(int team);
void f_6e68_0d3a(void);
void f_6e68_0d80(void);
void f_6e68_0f31(void);
void f_6e68_10a1(int comp, int week);
void f_6e68_1176(void);
void f_6e68_129c(void);
void f_6e68_12fd(int week, int mode, int x);
void f_6e68_2221(int week, int mode, int from, int to, int kind);
char f_6e68_2899(int kind, int week, int n);
int f_6e68_299e(int week, int n);
void f_6e68_2a15(int club, int week, int n);
void f_6e68_2be4(int a, int b, int c, int d);
void f_6e68_2e4d(int comp, int mode);
void f_6e68_2efb(int n, int b, int c, int d);
void f_6e68_3366(void);
void f_6e68_33d9(int team);
void f_6e68_428e(int mode, int team);
void f_6e68_4943(int a, int team);
void f_6e68_4b39(int team);
void f_6e68_5541(int slot);
char f_6e68_570e(int slot, int pos);
void f_6e68_57b5(char far *s);
void f_6e68_5848(int team);
void f_6e68_5b66(char far *s);
char far *f_6e68_60ef(char far *s);
void f_6e68_62d8(int team);
void f_6e68_6488(int team);

void f_88c9_2837(void);
void f_1680_1ad8(int);
void f_88c9_2db1(int team);
void f_67ee_5ab6(float x, int team, char far *title);
void f_1680_2867(float x, float y, int bg, int fg, int w, char far *s);
void f_1680_2ea0(float x, float y, int bg, int fg, int w, char far *s);
void far *f_14d2_16bc(int handle, int page);
long f_1680_2782(int x);
long f_14d2_1400(long a, long b);
void f_a1c3_3505(int a);
void f_88c9_24f1(char far *);
void f_1680_1f06(char all);
char far *f_a1c3_229c(int manager, char full);
void f_1680_150c(int n, char far *title, char far *items);
void f_88c9_76df(int club);
void f_88c9_4cf8(int club, int a);
unsigned f_14d2_09ce(char far *s, char far *set);
void f_a1c3_27e4(char far *title);
void f_a1c3_2d08(int a, float x, float y, int c, int d, int e, char far *s);
int f_a1c3_3298(int a);
void f_67ee_1a68(int mode);
extern char d_5d9c_9b8d;
extern char d_5d9c_9b84;
extern int d_5d9c_9f67;
extern int d_5d9c_9fab;
extern int d_5d9c_9f19;
extern int d_5d9c_9f6d;
extern int d_5d9c_9f63;
extern int d_5d9c_9faf;
extern int d_5d9c_a35c;
extern int d_5d9c_9ef1;
extern int d_5d9c_9ef3;
extern int d_5d9c_9efb;
extern int d_5d9c_9bcb;
extern int d_5d9c_9bc9;
extern int d_5d9c_9bc7;
extern int d_5d9c_9bc5;
extern int d_5d9c_9bc3;
extern long d_5d9c_9a48;
extern long d_5d9c_9a44;
extern long d_5d9c_9a40;
extern float d_5d9c_9b00;
extern float d_5d9c_9b08;
extern char near *d_5d9c_08bc[];
extern long (far *d_5d9c_a01a)[80];
extern char far d_1f3e_56d4[];
extern char far d_1f3e_5684[];
extern char far d_1f3e_5116[];
extern char far d_1f3e_50c6[];
extern char far d_1f3e_300e[];
extern char far d_1f3e_0ab4[][101];
extern long far d_2f3c_74f3[][80];
extern unsigned char far d_2f3c_5167[];
extern unsigned char far d_5739_01ec[];
extern unsigned char far d_5739_00a4[];
int f_1680_0577(int x);
char f_a1c3_506f(int);
void f_992a_7e35(int);
void f_1680_0b5b(int t);
void f_7eeb_3d47(void);
void f_1680_18b2(int last);
char f_992a_700a(int);
char f_992a_70a8(int);
char f_992a_70d2(int);
char f_992a_7129(int);
char f_992a_7170(int);
char f_992a_71db(int);
char f_992a_723a(int);
char f_992a_728d(int);
char f_992a_78ca(int);
void f_7a28_360e(int a, int b, char c);
void f_992a_6f26(char far *s);
void f_992a_6c72(char c);
void f_992a_6da2(void);
void f_992a_5e7e(void);
void f_14d2_12ea(void);
extern int d_5d9c_9eef;
extern int d_5d9c_9eed;
extern int d_5d9c_9f37;
extern int d_5d9c_9ef9;
extern int d_5d9c_9ef5;
extern int d_5d9c_9ef7;
extern char d_5d9c_9b82;
extern char d_5d9c_9b83;
extern char d_5d9c_9b8a;
extern char d_5d9c_a31e;
extern int far d_2f3c_7f93[];
extern unsigned char far d_2f3c_567b[];
extern unsigned char far d_2f3c_53f1[];
extern unsigned char far d_2f3c_7269[];
extern unsigned char far d_2f3c_5e19[];
extern unsigned char far d_2f3c_5905[];
extern int far d_2f3c_1d94[][16];
extern unsigned char far d_5739_0000[][82];
extern int far d_5739_1d2a[][2][94];
extern unsigned char huge d_3e42_0000[][1702];
extern int far d_483b_a174[];
extern int far d_483b_a0ba[];
extern char far d_1f3e_49e6[];
extern char far d_1f3e_509e[];
extern char far d_1f3e_50b2[];
int f_14d2_144d(int a, int b);
char f_992a_76bc(int);
char f_992a_7713(int);
extern char far d_1f3e_4f7c[];
extern char far d_1f3e_4f2c[];
extern char far d_1f3e_4edc[];
extern char far d_1f3e_4e8c[];
extern char far d_1f3e_4e3c[];
extern char far d_1f3e_4dec[];
extern int d_5d9c_a062[];
extern int d_5d9c_9eeb;
extern int d_5d9c_9ee3;
extern int d_5d9c_9ee9;
extern int d_5d9c_9ee7;
extern int d_5d9c_9ee5;
extern int d_5d9c_9f53;
void f_14d2_09c3(int on);
void f_1680_27aa(int x, int y, int colour, char far *s);
void f_1680_2a61(float x, float y, int colour, char far *s);
void f_1680_2d78(float x, float y, int colour, char far *s);
char f_1680_0003(int x);
char f_992a_74c1(int, int);
char f_992a_72e8(int, int);
char f_992a_7399(int, int);
char f_992a_7430(int, int);
char f_992a_752d(int, int);
char f_992a_75bc(int, int);
int f_992a_78e7(int, int);
extern char near *d_5d9c_0484[];
extern float d_5d9c_9af4;
extern char d_5d9c_9b80;
extern char d_5d9c_9b81;
extern int d_5d9c_9ed3;
extern int d_5d9c_9ed5;
extern int d_5d9c_9ed7;
extern int d_5d9c_9ed9;
extern int d_5d9c_9edb;
extern int d_5d9c_9edd;
extern int d_5d9c_9edf;
extern int d_5d9c_9ee1;
extern int d_5d9c_9f7f;
extern int d_5d9c_a33a;
extern char far *d_5d9c_a050;
extern char far d_1f3e_4d4c[];
extern char far d_1f3e_4d9c[];
extern char far d_1f3e_51b6[];
extern char far d_1f3e_5634[];
extern int far d_2f3c_1534[];
extern char far * far d_5471_16f0[];
extern unsigned char far d_5739_1b0e[];
char f_992a_7831(int);
char far *f_1680_1a91(int x);
void f_14d2_148f(void far *a, void far *b, int n);
void f_14d2_0722(int c);
void f_14d2_073e(int c);
void f_14d2_075a(int x1, int y1, int x2, int y2);
void f_14d2_07af(int x1, int y1, int x2, int y2);
void f_14d2_0e27(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
extern int d_5d9c_9ed1;
extern int d_5d9c_9fa1;
extern int d_5d9c_9f55;
extern int d_5d9c_9ecf;
extern int d_5d9c_9ecd;
extern char d_5d9c_9b7f;
extern char far d_1f3e_4cfc[];
extern char far d_1f3e_4cac[];
extern char far d_1f3e_4c5c[];
extern int far d_5739_1d28[][2][94];
void f_67ee_0e4c(int mode, int team);
void f_67ee_5641(int team);
void f_67ee_5c0f(int team);
void f_67ee_5f96(int team);
void f_67ee_4e10(int team);
void f_88c9_68aa(int team);
void f_a1c3_093a(int team);
void f_a1c3_34c6(int team);
void f_a1c3_34db(void);
void f_a1c3_30b1(int a, char b);
void f_a1c3_5e7a(int player, int a, char b);
void f_8352_4556(int player, int a);
void f_7555_0000(char far *msg);
void f_7555_00cc(int slot);
void f_7555_00e9(int team);
char far *f_1680_03f3(int x);
void f_1680_20c2(int t);
void f_1680_270b(int line);
char far *f_14d2_0e72(char far *s);
int f_992a_1d7c(int player);
extern char d_5d9c_9b7d;
extern char d_5d9c_9b7e;
extern char d_5d9c_9b88;
extern int d_5d9c_9ebf;
extern int d_5d9c_9ec1;
extern int d_5d9c_9ec3;
extern int d_5d9c_9ec5;
extern int d_5d9c_9ec7;
extern int d_5d9c_9ec9;
extern int d_5d9c_9ecb;
extern int d_5d9c_9f3d;
extern int d_5d9c_9f57;
extern int d_5d9c_9f59;
extern int d_5d9c_9f91;
extern int d_5d9c_a350;
extern char far *d_5d9c_9fce;
extern float d_5d9c_9af0;
extern int far d_2f3c_1584[];
extern int far d_2f3c_2d59[][13];
extern int far d_2f3c_7c73[][80];
extern char far d_1f3e_4bbc[];
extern char far d_1f3e_4c0c[];
extern char far d_1f3e_8a72[];
extern unsigned char huge d_483b_0000[][1702];
char far *f_a1c3_21cc(int player);
struct col { float x; char far *title; };
extern int d_5d9c_9ebd;
extern int d_5d9c_9ebb;
extern int d_5d9c_9eb9;
extern int d_5d9c_9eb7;
extern int d_5d9c_9f71;
extern int d_5d9c_9f65;
extern int d_5d9c_9f51;
extern float d_5d9c_9aec;
extern float d_5d9c_9ae8;
extern char d_5d9c_9b7c;
extern int far d_2f3c_1582[];
extern int far d_2f3c_85f7[];
extern int far d_2f3c_9343[];
extern char far d_1f3e_4b6c[];
extern char far d_1f3e_4b1c[];
extern char far d_1f3e_7680[][0x6a6];
extern char far d_1f3e_628e[][0x6a6];
extern unsigned char far d_5739_023e[];
extern int far d_483b_a372[][26];
void f_1680_33a0(float x, float y, int team);
void f_7555_0390(int team, int a);
char far *f_14d2_0d75(char far *s, unsigned n);
void f_14d2_0c66(int ticks);
extern char d_5d9c_9b75;
extern char d_5d9c_9b76;
extern char d_5d9c_9b77;
extern char d_5d9c_9b78;
extern char d_5d9c_9b79;
extern char d_5d9c_9b7a;
extern char d_5d9c_9b7b;
extern int d_5d9c_9bb9;
extern int d_5d9c_9e9b;
extern int d_5d9c_9e9d;
extern int d_5d9c_9e9f;
extern int d_5d9c_9ea1;
extern int d_5d9c_9ea3;
extern int d_5d9c_9ea5;
extern int d_5d9c_9ea7;
extern int d_5d9c_9ea9;
extern int d_5d9c_9eab;
extern int d_5d9c_9ead;
extern int d_5d9c_9eaf;
extern int d_5d9c_9eb1;
extern int d_5d9c_9eb3;
extern int d_5d9c_9eb5;
extern int d_5d9c_9f49;
extern unsigned char d_5d9c_9d98[];
extern char d_5d9c_a03c[][2];
extern char d_5d9c_a040[][2];
extern int d_5d9c_a026[];
extern struct pos { unsigned char c, d; char far *s; } d_5d9c_3afe[];
extern unsigned char far d_2f3c_2ce4[][13];
extern unsigned char far d_2f3c_2d0b[][13];
extern unsigned char far d_2f3c_35ad[][3][13];
extern unsigned char far d_2f3c_5b8f[];
extern char far d_1f3e_4acc[];
char far *f_14d2_0d40(void);
char far *f_14d2_0dc8(char far *s, unsigned i, unsigned n);
void f_1680_183d(int a, int b, int line);
void f_1680_135e(int t, int k, char c);
extern char d_5d9c_9b72;
extern char d_5d9c_9b73;
extern char d_5d9c_9b74;
extern unsigned char d_5d9c_9b9e;
extern int d_5d9c_9e8f;
extern int d_5d9c_9e91;
extern int d_5d9c_9e95;
extern int d_5d9c_9e97;
extern int d_5d9c_9e99;
extern int d_5d9c_9f29;
extern int d_5d9c_9f4f;
extern int d_5d9c_9f81;
extern float d_5d9c_9ae4;
extern unsigned char d_5d9c_a035[][2];
extern float far d_2f3c_1cf8[];
extern char far * far d_5471_181c[];
extern char far d_1f3e_57c4[];

/* the accounts' items */
static char far *d_5d9c_3a74[] = {
    "GATE RECEIPTS", "SPONSOR PAYMENT", "PLAYERS SOLD", "INTEREST", "TELEVISION NETS",
    "CASH PRIZES", "OTHER GAINS", "STAFF WAGES", "RATES AND TAXES", "PLAYERS BOUGHT",
    "INTEREST ON OVERDRAFT", "GROUND IMPROVEMENTS", "LEAGUE FINES", "GENERAL EXPENSES"
};

void f_6e68_0000(void)
{
    if (d_5d9c_9b8d == 0)
        f_88c9_2837();
    else {
        f_1680_1ad8(-1);
        f_88c9_2db1(d_5d9c_9f67);
    }
}

void f_6e68_0027(int team)
{
    char buf[320];

    if (d_5d9c_9fab > 1) {
        f_67ee_5ab6(-1, team, "Accounts");
        f_1680_2867(1, 5.25, 6, 2, 0, " ITEM                   ");
        f_1680_2867(20, 5.25, 3, 6, 0, " INCOME     ");
        f_1680_2867(30, 5.25, 3, 6, 0, " SPENDING   ");
        d_5d9c_9a48 = 0;
        d_5d9c_9a44 = 0;
        for (d_5d9c_9f19 = 0; d_5d9c_9f19 <= 13; d_5d9c_9f19++) {
            strcpy(buf, d_5d9c_3a74[d_5d9c_9f19]);
            if (d_5d9c_9f19 == 0 && d_5d9c_9fab < 8)
                strcpy(buf, "GATE + SEASON TICKETS");
            sprintf(d_1f3e_56d4, " %-23s", buf);
            d_5d9c_a01a = f_14d2_16bc(d_5d9c_a35c, 0);
            sprintf(d_1f3e_5684, "%-10ld", (d_5d9c_a01a + 16)[d_5d9c_9f19][team]);
            if (d_5d9c_9f19 < 7) {
                f_1680_2867(1, d_5d9c_9f19 + 6.5, 1, 4, 0, d_1f3e_56d4);
                sprintf(buf, " +%s", d_1f3e_5684);
                f_1680_2867(20, d_5d9c_9f19 + 6.5, 1, 12, 0, buf);
                d_5d9c_a01a = f_14d2_16bc(d_5d9c_a35c, 0);
                d_5d9c_9a48 += (d_5d9c_a01a + 16)[d_5d9c_9f19][team];
            } else {
                f_1680_2867(1, d_5d9c_9f19 + 6.75, 1, 4, 0, d_1f3e_56d4);
                sprintf(buf, " -%s", d_1f3e_5684);
                f_1680_2867(30, d_5d9c_9f19 + 6.75, 1, 2, 0, buf);
                d_5d9c_a01a = f_14d2_16bc(d_5d9c_a35c, 0);
                d_5d9c_9a44 += (d_5d9c_a01a + 16)[d_5d9c_9f19][team];
            }
        }
        f_1680_2867(1, 21, 6, 3, 0, " TOTALS                 ");
        sprintf(buf, " +%-10ld", d_5d9c_9a48);
        f_1680_2867(20, 21, 4, 1, 0, buf);
        sprintf(buf, " -%-10ld", d_5d9c_9a44);
        f_1680_2867(30, 21, 2, 1, 0, buf);
        strcpy(d_1f3e_5116, "");
        if (d_5d9c_9a48 - d_5d9c_9a44 > 0)
            sprintf(d_1f3e_5116, "(+%ld) ", d_5d9c_9a48 - d_5d9c_9a44);
        else if (d_5d9c_9a44 - d_5d9c_9a48 > 0)
            sprintf(d_1f3e_5116, "(-%ld) ", d_5d9c_9a44 - d_5d9c_9a48);
        sprintf(buf, " %ld AVAILABLE %s",
                f_14d2_1400(d_2f3c_74f3[0][team] - f_1680_2782(team), 0L), d_1f3e_5116);
        f_1680_2867(1, 24, 1, 12, 0, buf);
        d_5d9c_9a40 = f_1680_2782(team) - d_2f3c_74f3[0][team];
        sprintf(buf, " OVERDRAFT %ld (MAX %ld) ", d_5d9c_9a40 > 0 ? d_5d9c_9a40 : 0L,
                f_1680_2782(team));
        f_1680_2867(1, 22.5, 1, 8, 0, buf);
        f_a1c3_3505(0);
    } else
        f_88c9_24f1("No summary for last week");
}

void f_6e68_060e(void)
{
    char buf[320];

    if (d_5d9c_9ef1 > 0) {
        f_1680_1f06(0);
        if (d_5d9c_9bcb > -1) {
            do {
                f_1680_150c(0, f_a1c3_229c(d_5d9c_9bcb, 0), "*Exit|Board Confidence|Resign|");
                d_5d9c_9bc9 = d_5d9c_9faf;
                if (d_5d9c_9bc9 == 1) {
                    if (d_2f3c_74f3[0][d_2f3c_5167[d_5d9c_9bcb]] < 0)
                        f_88c9_24f1("We are in financial trouble");
                    else {
                        if (d_5739_01ec[d_2f3c_5167[d_5d9c_9bcb]] <= 24)
                            strcpy(d_1f3e_50c6, "are considering your future");
                        else if (d_5739_01ec[d_2f3c_5167[d_5d9c_9bcb]] <= 39)
                            strcpy(d_1f3e_50c6, "are concerned");
                        else if (d_5739_01ec[d_2f3c_5167[d_5d9c_9bcb]] <= 59)
                            strcpy(d_1f3e_50c6, "are not concerned");
                        else if (d_5739_01ec[d_2f3c_5167[d_5d9c_9bcb]] <= 79)
                            strcpy(d_1f3e_50c6, "are pleased");
                        else if (d_5739_01ec[d_2f3c_5167[d_5d9c_9bcb]] <= 94)
                            strcpy(d_1f3e_50c6, "are very pleased");
                        else
                            strcpy(d_1f3e_50c6, "are delighted");
                        sprintf(buf, "%d%% : We %s", d_5739_01ec[d_2f3c_5167[d_5d9c_9bcb]], d_1f3e_50c6);
                        f_88c9_24f1(buf);
                    }
                } else if (d_5d9c_9bc9 == 2) {
                    f_6e68_07e9(d_5d9c_9bcb);
                    if (d_5d9c_9b84)
                        d_5d9c_9bc9 = 0;
                }
            } while (d_5d9c_9bc9 != 0);
        }
    } else
        f_88c9_24f1("Not available on demo");
}

void f_6e68_07e9(int team)
{
    d_5d9c_9b84 = 0;
    f_1680_150c(0, "Resignation", "*Exit|Resign|");
    d_5d9c_9efb = d_5d9c_9faf;
    if (d_5d9c_9efb > 0) {
        f_88c9_76df(d_2f3c_5167[d_5d9c_9bcb]);
        f_88c9_4cf8(d_2f3c_5167[d_5d9c_9bcb], 1);
        d_5d9c_9b84 = -1;
    }
}

void f_6e68_084d(int team)
{
    char num[4];
    char buf[320];

    if (d_5d9c_9ef3 > 0) {
        do {
            sprintf(buf, "The %s job", (char far *)d_5d9c_08bc[team]);
            f_1680_150c(0, buf, "Exit|Applicants|Apply For It|");
            d_5d9c_9bc7 = d_5d9c_9faf;
            if (d_5d9c_9bc7 == 1)
                f_6e68_0985(team);
            else if (d_5d9c_9bc7 == 2) {
                f_1680_1f06(-1);
                if (d_5d9c_9bcb > -1) {
                    sprintf(num, "%03d", d_5d9c_9bcb);
                    if (f_14d2_09ce(d_1f3e_0ab4[team], num) == 0) {
                        sprintf(buf, "%s receive your application", (char far *)d_5d9c_08bc[team]);
                        f_88c9_24f1(buf);
                        strcat(d_1f3e_0ab4[team], num);
                        strcat(d_1f3e_0ab4[team], " ");
                    } else
                        f_88c9_24f1("You have already applied");
                }
            }
        } while (d_5d9c_9bc7 != 0);
    } else
        f_6e68_0985(team);
}

void f_6e68_0985(int team)
{
    char buf[320];

    sprintf(buf, "The %s job", (char far *)d_5d9c_08bc[team]);
    f_a1c3_27e4(buf);
    f_1680_2ea0(1.25, 4.0, d_5739_00a4[team] / 16, d_5739_00a4[team] % 16, 0, " Applicants ");
    f_1680_2867(1.125, 7.0, 2, 1, 0x4c, " NAME");
    f_1680_2867(10.875, 7.0, 2, 1, 0x49, " CLUB");
    f_1680_2867(20.25, 7.0, 2, 1, 0x4c, " NAME");
    f_1680_2867(30, 7.0, 2, 1, 0x49, " CLUB");
    strcpy(d_1f3e_300e, d_1f3e_0ab4[team]);
    for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= 21; d_5d9c_9f6d++) {
        d_5d9c_9b00 = d_5d9c_9f6d > 10 ? 20.25 : 1.125;
        d_5d9c_9b08 = d_5d9c_9f6d + 9 - (d_5d9c_9f6d > 10 ? 11 : 0);
        if ((d_5d9c_9f6d + 1) * 4 <= strlen(d_1f3e_300e)) {
            strncpy(buf, &d_1f3e_300e[d_5d9c_9f6d * 4], 3);
            buf[3] = 0;
            d_5d9c_9bc5 = atol(buf);
            sprintf(buf, " %s", f_a1c3_229c(d_5d9c_9bc5, -1));
            f_1680_2867(d_5d9c_9b00, d_5d9c_9b08, d_5d9c_9bc5 > 645 ? 6 : 1,
                        d_5d9c_9f6d & 1 ? 15 : 3, 0x4c, buf);
            if (d_2f3c_5167[d_5d9c_9bc5] < 255)
                sprintf(buf, " %.11s", (char far *)d_5d9c_08bc[d_2f3c_5167[d_5d9c_9bc5]]);
            else
                strcpy(buf, " None");
            f_1680_2867(d_5d9c_9b00 + 9.75, d_5d9c_9b08, 1, 4, 0x49, buf);
        } else {
            f_1680_2867(d_5d9c_9b00, d_5d9c_9b08, 1, d_5d9c_9f6d & 1 ? 15 : 3, 0x4c, "");
            f_1680_2867(d_5d9c_9b00 + 9.75, d_5d9c_9b08, 1, 4, 0x49, "");
        }
    }
    f_a1c3_2d08(2, 1.25, 22.5, 1, 4, 0x12d, "                 EXIT");
    do
        d_5d9c_9faf = f_a1c3_3298(d_5d9c_9f63);
    while (d_5d9c_9faf == 0);
}

void f_6e68_0d3a(void)
{
    do {
        f_1680_150c(0, "Manager jobs", "*Exit|Add player|Job News|");
        d_5d9c_9bc3 = d_5d9c_9faf;
        if (d_5d9c_9bc3 == 1)
            f_6e68_0d80();
        else if (d_5d9c_9bc3 == 2)
            f_67ee_1a68(2);
    } while (d_5d9c_9bc3 != 0);
}

void f_6e68_0d80(void)
{
    int i;

    if (d_5d9c_9ef3 == 4)
        f_88c9_24f1("Maximum four players");
    else if (f_1680_0577(d_5d9c_9fab) > 15)
        f_88c9_24f1("Only allowed before week 16");
    else {
        d_5d9c_9ef1++;
        d_5d9c_9ef3++;
        f_1680_1ad8(d_5d9c_9ef3 - 1);
        d_2f3c_5167[d_2f3c_7f93[d_5d9c_9f67]] = 255;
        d_2f3c_567b[d_2f3c_7f93[d_5d9c_9f67]] = 0;
        d_5d9c_9eef = d_5d9c_9ef3 + 645;
        d_2f3c_7f93[d_5d9c_9f67] = d_5d9c_9eef;
        d_5739_0000[0][d_5d9c_9f67] = 8;
        d_5739_01ec[d_5d9c_9f67] = 50;
        for (i = 1; i <= d_2f3c_1d94[d_5d9c_9f67][0]; i++) {
            d_5d9c_9eed = d_2f3c_1d94[d_5d9c_9f67][i];
            d_3e42_0000[23][d_5d9c_9eed] -= 1;
        }
        d_2f3c_1d94[d_5d9c_9f67][0] = 0;
        d_2f3c_5167[d_5d9c_9eef] = d_5d9c_9f67;
        d_2f3c_53f1[d_5d9c_9eef] = 35;
        d_2f3c_567b[d_5d9c_9eef] = 30;
        d_2f3c_7269[d_5d9c_9eef] = 0;
        d_2f3c_5e19[d_5d9c_9eef] = 80;
        d_2f3c_5905[d_5d9c_9eef] = f_a1c3_506f(d_5d9c_9eef);
        f_992a_7e35(d_5d9c_9ef3 - 1);
        d_5d9c_9b8d = 0;
        f_1680_0b5b(d_5d9c_9f67);
        f_7eeb_3d47();
    }
}

void f_6e68_0f31(void)
{
    do {
        f_a1c3_27e4("Match reports");
        f_1680_150c(0, "", "*Exit|First Division|Second Division|Third Division|Fourth Division|FA Cup|Rumbelows Cup|Zenith Cup|Domark Trophy|UEFA Cup|Cup Winners Cup|European Cup|Playoffs|Charity Shield|");
        f_1680_18b2(13);
        d_5d9c_9b83 = 0;
        if (d_5d9c_9faf > 0) {
            for (d_5d9c_9f37 = d_5d9c_9fab - 1; d_5d9c_9f37 >= 1; d_5d9c_9f37--) {
                d_5d9c_9b82 = 0;
                switch (d_5d9c_9faf) {
                case 1:
                case 2:
                case 3:
                case 4:
                    d_5d9c_9b82 = f_992a_700a(d_5d9c_9f37);
                    break;
                case 5:
                    d_5d9c_9b82 = f_992a_70a8(d_5d9c_9f37);
                    break;
                case 6:
                    d_5d9c_9b82 = f_992a_70d2(d_5d9c_9f37);
                    break;
                case 7:
                    d_5d9c_9b82 = f_992a_7129(d_5d9c_9f37);
                    break;
                case 8:
                    d_5d9c_9b82 = f_992a_7170(d_5d9c_9f37);
                    break;
                case 9:
                    d_5d9c_9b82 = f_992a_71db(d_5d9c_9f37);
                    break;
                case 10:
                    d_5d9c_9b82 = f_992a_723a(d_5d9c_9f37);
                    break;
                case 11:
                    d_5d9c_9b82 = f_992a_728d(d_5d9c_9f37);
                    break;
                case 12:
                    d_5d9c_9b82 = f_992a_78ca(d_5d9c_9f37);
                    break;
                case 13:
                    d_5d9c_9b82 = d_5d9c_9f37 == 5;
                    break;
                }
                if (d_5d9c_9b82 && d_483b_a174[d_5d9c_9f37] > 0) {
                    if (d_5d9c_9faf > 4)
                        d_5d9c_9ef9 = d_5d9c_9faf - 4;
                    else
                        d_5d9c_9ef9 = d_5d9c_9faf + 10;
                    f_6e68_12fd(d_5d9c_9f37, 3, d_5d9c_9ef9);
                    d_5d9c_9b83 = -1;
                    d_5d9c_9f37 = 1;
                }
            }
            if (d_5d9c_9b83 == 0)
                f_88c9_24f1("No matches played yet");
        }
    } while (d_5d9c_9faf != 0);
}

void f_6e68_10a1(int comp, int week)
{
    FILE *fp;

    fp = fopen("matchfax", "rb");
    fseek(fp, (long)(d_483b_a0ba[week - 1] + comp - 1) * 149, 0);
    fread(d_1f3e_49e6, 1, 149, fp);
    fclose(fp);
    f_7a28_360e(d_5739_1d2a[comp][0][week - 1] / 32,
                d_5739_1d2a[comp][1][week - 1] / 32, -1);
}

void f_6e68_1176(void)
{
    do {
        f_a1c3_27e4("Background Picture");
        if (d_5d9c_a31e == 2)
            f_1680_150c(5, "", "*Exit|Picture 1|Picture 2|Picture 3|Change Colour|Change Brightness|");
        else
            f_1680_150c(5, "", "*Exit|Picture 1|");
        strcpy(d_1f3e_50b2, d_1f3e_509e);
        d_5d9c_9b8a = 0;
        do {
            f_1680_18b2(5);
            switch (d_5d9c_9faf) {
            case 0:
                d_5d9c_9b8a = -1;
                break;
            case 1:
            case 2:
            case 3:
                sprintf(d_1f3e_509e, d_5d9c_a31e == 2 ? "picture%d.lbm" : "picega.lbm", d_5d9c_9faf);
                if (strcmp(d_1f3e_509e, d_1f3e_50b2) != 0) {
                    f_992a_6f26("Loading picture");
                    f_992a_6c72(-1);
                }
                d_5d9c_9b8a = -1;
                break;
            case 4:
                d_5d9c_9ef7 += d_5d9c_9ef7 == 5 ? -5 : 1;
                f_992a_6da2();
                break;
            case 5:
                d_5d9c_9ef5 += d_5d9c_9ef5 == 4 ? -4 : 1;
                f_992a_6da2();
                break;
            }
        } while (!d_5d9c_9b8a);
    } while (d_5d9c_9faf != 0);
}

void f_6e68_129c(void)
{
    f_1680_150c(0, "Save game", "*Exit|Save Game|");
    if (d_5d9c_9faf == 1) {
        d_5d9c_9b8d = d_5d9c_9ef1 == 0;
        f_992a_5e7e();
        f_1680_150c(0, "System", "*Continue|Quit|");
        if (d_5d9c_9faf == 1) {
            f_14d2_12ea();
            exit(0);
        }
    }
}

void f_6e68_12fd(int week, int mode, int x)
{
    if (week < 5) {
        strcpy(d_1f3e_4f7c, "Preseason");
        d_5d9c_9eeb = d_5d9c_a062[week];
        strcpy(d_1f3e_4f2c, "Friendly Match");
        if (d_5d9c_9eeb > 1)
            strcat(d_1f3e_4f2c, "es");
        f_6e68_2be4(week, 1, d_5d9c_9eeb, x);
        f_6e68_2221(week, mode, 1, d_5d9c_9eeb, x);
    } else if (week == 5) {
        strcpy(d_1f3e_4f7c, "Charity shield");
        d_5d9c_9eeb = 1;
        strcpy(d_1f3e_4f2c, "Friendly Match");
        f_6e68_2221(week, mode, 1, 1, x);
    } else if (f_992a_700a(week)) {
        strcpy(d_1f3e_4f7c, "League");
        d_5d9c_9eeb = 40;
        strcpy(d_1f3e_4f2c, "First Division");
        f_6e68_2be4(week, 1, 10, x);
        f_6e68_2221(week, mode, 1, 10, x);
        strcpy(d_1f3e_4f2c, "Second Division");
        f_6e68_2be4(week, 11, 20, x);
        f_6e68_2221(week, mode, 11, 20, x);
        strcpy(d_1f3e_4f2c, "Third Division");
        f_6e68_2be4(week, 21, 30, x);
        f_6e68_2221(week, mode, 21, 30, x);
        strcpy(d_1f3e_4f2c, "Fourth Division");
        f_6e68_2be4(week, 31, 40, x);
        f_6e68_2221(week, mode, 31, 40, x);
    } else if (f_992a_70a8(week) || f_992a_70d2(week)) {
        if (f_992a_70a8(week))
            strcpy(d_1f3e_4f7c, "FA Cup");
        else
            strcpy(d_1f3e_4f7c, "Rumbelows Cup");
        switch (week) {
        case 9: case 13: case 38: case 39:
            d_5d9c_9eeb = f_992a_70d2(week) * 12 + 28;
            strcpy(d_1f3e_4f2c, "1st Round");
            if (week == 9)
                strcat(d_1f3e_4f2c, ",1st Legs");
            else if (week == 13)
                strcat(d_1f3e_4f2c, ",2nd Legs");
            f_6e68_2e4d(week, mode);
            break;
        case 19: case 44: case 45:
            d_5d9c_9eeb = 24 - f_992a_70d2(week) * 8;
            strcpy(d_1f3e_4f2c, "2nd Round");
            f_6e68_2e4d(week, mode);
            break;
        case 27: case 50: case 51:
            d_5d9c_9eeb = f_992a_70d2(week) * 16 + 32;
            strcpy(d_1f3e_4f2c, "3rd Round");
            f_6e68_2e4d(week, mode);
            break;
        case 33: case 56: case 57:
            d_5d9c_9eeb = f_992a_70d2(week) * 8 + 16;
            strcpy(d_1f3e_4f2c, "4th Round");
            f_6e68_2e4d(week, mode);
            break;
        case 62: case 63:
            d_5d9c_9eeb = 8;
            strcpy(d_1f3e_4f2c, "5th Round");
            f_6e68_2e4d(week, mode);
            break;
        case 43: case 68: case 69:
            d_5d9c_9eeb = 4;
            strcpy(d_1f3e_4f2c, "Quarter Finals");
            f_6e68_2e4d(week, mode);
            break;
        case 61: case 65: case 76: case 77:
            d_5d9c_9eeb = 2;
            strcpy(d_1f3e_4f2c, "Semi Finals");
            /* the code-free 0;s keep BCC from merging these strcats into the 1st Round ones */
            if (week == 61) {
                strcat(d_1f3e_4f2c, ",1st Legs");
                0;
            } else if (week == 65) {
                strcat(d_1f3e_4f2c, ",2nd Legs");
                0;
            }
            f_6e68_2e4d(week, mode);
            break;
        case 82: case 83: case 88: case 89:
            d_5d9c_9eeb = 1;
            strcpy(d_1f3e_4f2c, "Final");
            f_6e68_2e4d(week, mode);
            break;
        }
        f_6e68_2be4(week, 1, d_5d9c_9eeb, x);
        d_5d9c_9ee9 = 8;
        d_5d9c_9ee7 = -7;
        d_5d9c_9f53 = 0;
        do {
            d_5d9c_9ee7 += d_5d9c_9ee9;
            d_5d9c_9ee5 = f_14d2_144d(d_5d9c_9eeb, d_5d9c_9ee9 + d_5d9c_9f53 * d_5d9c_9ee9);
            d_5d9c_9f53++;
            f_6e68_2221(week, mode, d_5d9c_9ee7, d_5d9c_9ee5, x);
        } while (d_5d9c_9ee5 != d_5d9c_9eeb);
    } else if (f_992a_78ca(week)) {
        strcpy(d_1f3e_4f7c, "League playoff");
        switch (week) {
        case 90: case 92:
            strcpy(d_1f3e_4f2c, "Semi Finals");
            d_5d9c_9eeb = 6;
            if (f_992a_7713(week))
                strcat(d_1f3e_4f2c, ",2nd Legs");
            else
                strcat(d_1f3e_4f2c, ",1st Legs");
            break;
        case 94:
            strcpy(d_1f3e_4f2c, "Finals");
            d_5d9c_9eeb = 3;
            break;
        }
        f_6e68_2221(week, mode, 1, d_5d9c_9eeb, x);
    } else if (f_992a_71db(week) || f_992a_723a(week) || f_992a_728d(week)) {
        strcpy(d_1f3e_4edc, "Cup Winners Cup");
        strcpy(d_1f3e_4e8c, "UEFA Cup");
        strcpy(d_1f3e_4e3c, "European Cup");
        strcpy(d_1f3e_4dec, "");
        if (f_992a_76bc(week))
            strcpy(d_1f3e_4dec, ",1st Leg");
        else if (f_992a_7713(week))
            strcpy(d_1f3e_4dec, ",2nd Leg");
        switch (week) {
        case 11: case 15:
            strcpy(d_1f3e_4f7c, d_1f3e_4e8c);
            sprintf(d_1f3e_4f2c, "Preliminaries%ss", d_1f3e_4dec);
            d_5d9c_9eeb = 32;
            f_6e68_2be4(week, 1, 32, x);
            f_6e68_2221(week, mode, 1, 8, x);
            f_6e68_2221(week, mode, 9, 16, x);
            f_6e68_2221(week, mode, 17, 24, x);
            f_6e68_2221(week, mode, 25, 32, x);
            break;
        case 17: case 21:
            strcpy(d_1f3e_4f7c, d_1f3e_4edc);
            sprintf(d_1f3e_4f2c, "1st Round%ss", d_1f3e_4dec);
            d_5d9c_9eeb = 32;
            f_6e68_2be4(week, 1, 16, x);
            f_6e68_2221(week, mode, 1, 8, x);
            f_6e68_2221(week, mode, 9, 16, x);
            strcpy(d_1f3e_4f7c, d_1f3e_4e3c);
            f_6e68_2be4(week, 17, 32, x);
            f_6e68_2221(week, mode, 17, 24, x);
            f_6e68_2221(week, mode, 25, 32, x);
            break;
        case 23: case 25:
            strcpy(d_1f3e_4f7c, d_1f3e_4e8c);
            sprintf(d_1f3e_4f2c, "1st Round%ss", d_1f3e_4dec);
            d_5d9c_9eeb = 16;
            f_6e68_2be4(week, 1, 16, x);
            f_6e68_2221(week, mode, 1, 8, x);
            f_6e68_2221(week, mode, 9, 16, x);
            break;
        case 31: case 35:
            strcpy(d_1f3e_4f7c, d_1f3e_4e8c);
            sprintf(d_1f3e_4f2c, "2nd Round%ss", d_1f3e_4dec);
            d_5d9c_9eeb = 24;
            f_6e68_2be4(week, 1, 8, x);
            f_6e68_2221(week, mode, 1, 8, x);
            strcpy(d_1f3e_4f7c, d_1f3e_4edc);
            f_6e68_2be4(week, 9, 16, x);
            f_6e68_2221(week, mode, 9, 16, x);
            strcpy(d_1f3e_4f7c, d_1f3e_4e3c);
            f_6e68_2be4(week, 17, 24, x);
            f_6e68_2221(week, mode, 17, 24, x);
            break;
        case 53: case 59:
            strcpy(d_1f3e_4f7c, d_1f3e_4e3c);
            strcpy(d_1f3e_4f2c, "Group Matches");
            d_5d9c_9eeb = 4;
            f_6e68_2221(week, mode, 1, 4, x);
            break;
        case 67: case 71:
            strcpy(d_1f3e_4f7c, d_1f3e_4e3c);
            strcpy(d_1f3e_4f2c, "Group Matches");
            d_5d9c_9eeb = 12;
            f_6e68_2221(week, mode, 1, 4, x);
            strcpy(d_1f3e_4f7c, d_1f3e_4e8c);
            sprintf(d_1f3e_4f2c, "3rd Round%ss", d_1f3e_4dec);
            f_6e68_2be4(week, 5, 8, x);
            f_6e68_2221(week, mode, 5, 8, x);
            strcpy(d_1f3e_4f7c, d_1f3e_4edc);
            f_6e68_2be4(week, 9, 12, x);
            f_6e68_2221(week, mode, 9, 12, x);
            break;
        case 75: case 79:
            strcpy(d_1f3e_4f7c, d_1f3e_4e3c);
            strcpy(d_1f3e_4f2c, "Group Matches");
            d_5d9c_9eeb = 8;
            f_6e68_2221(week, mode, 1, 4, x);
            strcpy(d_1f3e_4f7c, d_1f3e_4e8c);
            sprintf(d_1f3e_4f2c, "Semi Finals%ss", d_1f3e_4dec);
            f_6e68_2be4(week, 5, 6, x);
            f_6e68_2221(week, mode, 5, 6, x);
            strcpy(d_1f3e_4f7c, d_1f3e_4edc);
            f_6e68_2be4(week, 7, 8, x);
            f_6e68_2221(week, mode, 7, 8, x);
            break;
        case 87:
            strcpy(d_1f3e_4f7c, d_1f3e_4e8c);
            sprintf(d_1f3e_4f2c, "Final%s", d_1f3e_4dec);
            d_5d9c_9eeb = 1;
            f_6e68_2221(week, mode, 1, 1, x);
            break;
        case 91:
            strcpy(d_1f3e_4f7c, d_1f3e_4e8c);
            strcpy(d_1f3e_4f2c, "Final,2nd Leg");
            d_5d9c_9eeb = 3;
            f_6e68_2221(week, mode, 1, 1, x);
            strcpy(d_1f3e_4f7c, d_1f3e_4edc);
            strcpy(d_1f3e_4f2c, "Final");
            f_6e68_2221(week, mode, 2, 2, x);
            strcpy(d_1f3e_4f7c, d_1f3e_4e3c);
            f_6e68_2221(week, mode, 3, 3, x);
            break;
        }
    }
    if (f_992a_7129(week)) {
        strcpy(d_1f3e_4f7c, "Zenith Cup");
        switch (week) {
        case 7:
            if (d_5d9c_9ee3 == 0)
                return;
            strcpy(d_1f3e_4f2c, "Qualifier");
            if (d_5d9c_9ee3 > 1)
                strcat(d_1f3e_4f2c, "s");
            d_5d9c_9eeb = d_5d9c_9ee3;
            f_6e68_2be4(week, 1, d_5d9c_9eeb, x);
            f_6e68_2221(week, mode, 1, d_5d9c_9eeb, x);
            break;
        case 9:
            strcpy(d_1f3e_4f2c, "First Round");
            d_5d9c_9eeb = 32;
            f_6e68_2be4(week, 17, 32, x);
            f_6e68_2221(week, mode, 17, 24, x);
            f_6e68_2221(week, mode, 25, 32, x);
            break;
        case 11:
            strcpy(d_1f3e_4f2c, "Second Round");
            d_5d9c_9eeb = 40;
            f_6e68_2be4(week, 33, 40, x);
            f_6e68_2221(week, mode, 33, 40, x);
            break;
        case 23:
            strcpy(d_1f3e_4f2c, "Quarter Finals");
            d_5d9c_9eeb = 20;
            f_6e68_2be4(week, 17, 20, x);
            f_6e68_2221(week, mode, 17, 20, x);
            break;
        case 41:
            strcpy(d_1f3e_4f2c, "Semi Finals");
            d_5d9c_9eeb = 2;
            f_6e68_2be4(week, 1, 2, x);
            f_6e68_2221(week, mode, 1, 2, x);
            break;
        case 53:
            strcpy(d_1f3e_4f2c, "Final");
            d_5d9c_9eeb = 5;
            f_6e68_2221(week, mode, 5, 5, x);
            break;
        }
    }
    if (f_992a_7170(week)) {
        strcpy(d_1f3e_4f7c, "Domark Trophy");
        strcpy(d_1f3e_4f2c, "Group Matches");
        switch (week) {
        case 15: case 17: case 21:
            d_5d9c_9eeb = 40;
            f_6e68_2221(week, mode, 33, 40, x);
            break;
        case 23:
            d_5d9c_9eeb = 36;
            f_6e68_2221(week, mode, 21, 28, x);
            f_6e68_2221(week, mode, 29, 36, x);
            break;
        case 25:
            d_5d9c_9eeb = 32;
            f_6e68_2221(week, mode, 17, 24, x);
            f_6e68_2221(week, mode, 25, 32, x);
            break;
        case 31: case 35:
            d_5d9c_9eeb = 40;
            f_6e68_2221(week, mode, 25, 32, x);
            f_6e68_2221(week, mode, 33, 40, x);
            break;
        case 41:
            d_5d9c_9eeb = 18;
            f_6e68_2221(week, mode, 3, 10, x);
            f_6e68_2221(week, mode, 11, 18, x);
            break;
        case 47:
            d_5d9c_9eeb = 16;
            f_6e68_2221(week, mode, 1, 8, x);
            f_6e68_2221(week, mode, 9, 16, x);
            break;
        case 53:
            d_5d9c_9eeb = 21;
            f_6e68_2221(week, mode, 6, 13, x);
            f_6e68_2221(week, mode, 14, 21, x);
            break;
        case 59:
            d_5d9c_9eeb = 20;
            f_6e68_2221(week, mode, 5, 12, x);
            f_6e68_2221(week, mode, 13, 20, x);
            break;
        case 67:
            d_5d9c_9eeb = 20;
            f_6e68_2221(week, mode, 13, 20, x);
            break;
        case 71:
            strcpy(d_1f3e_4f2c, "Quarter Finals");
            d_5d9c_9eeb = 16;
            f_6e68_2be4(week, 13, 16, x);
            f_6e68_2221(week, mode, 13, 16, x);
            break;
        case 73:
            strcpy(d_1f3e_4f2c, "Semi Finals");
            d_5d9c_9eeb = 2;
            f_6e68_2be4(week, 1, 2, x);
            f_6e68_2221(week, mode, 1, 2, x);
            break;
        case 87:
            strcpy(d_1f3e_4f2c, "Final");
            d_5d9c_9eeb = 2;
            f_6e68_2221(week, mode, 2, 2, x);
            break;
        }
    }
}

void f_6e68_2221(int week, int mode, int from, int to, int kind)
{
    char buf[320];

    if (f_6e68_2899(kind, week, from) == 0)
        return;
    if (mode < 3) {
        if (week <= 5) {
            d_5d9c_9ee1 = 1;
            d_5d9c_9edf = 12;
        } else if (f_992a_70a8(week) || f_992a_74c1(week, from) || f_992a_72e8(week, from)
                   || f_992a_7399(week, from) || f_992a_7430(week, from) || f_992a_78ca(week)) {
            d_5d9c_9ee1 = 4;
            d_5d9c_9edf = 8;
        } else if (f_992a_752d(week, from) || f_992a_75bc(week, from)) {
            d_5d9c_9ee1 = 1;
            d_5d9c_9edf = 14;
        } else {
            d_5d9c_9ee1 = 1;
            d_5d9c_9edf = 3;
        }
        if (mode == 2)
            sprintf(d_1f3e_4d9c, "%s draw", d_1f3e_4f7c);
        else {
            if (mode != 1) {
                if (week > d_5d9c_9fab)
                    sprintf(d_1f3e_4d9c, "Next %s fixture", d_1f3e_4f7c);
                else
                    sprintf(d_1f3e_4d9c, "%s fixture", d_1f3e_4f7c);
            } else
                sprintf(d_1f3e_4d9c, "%s result", d_1f3e_4f7c);
            if (to - from + 1 > 1)
                strcat(d_1f3e_4d9c, "s");
        }
        f_6e68_2efb(to - from + 1, week, from, mode);
        d_5d9c_9f7f = 8;
    }
    for (d_5d9c_9f6d = from - 1; to - 1 >= d_5d9c_9f6d; d_5d9c_9f6d++) {
        if (mode < 3) {
            d_5d9c_9edd = d_5739_1d2a[d_5d9c_9f6d][0][week - 1] / 32;
            d_5d9c_9edb = d_5739_1d2a[d_5d9c_9f6d][1][week - 1] / 32;
            f_6e68_2a15(d_5d9c_9edd, week, d_5d9c_9f6d);
            f_14d2_09c3(0);
            f_1680_27aa(40, 1 - (d_5d9c_9f7f + d_5d9c_9af4) * 8, d_5d9c_9ed9, d_1f3e_5634);
            f_1680_27aa(124, 1 - (d_5d9c_9f7f + d_5d9c_9af4) * 8, 6, d_1f3e_4d4c);
            if (mode == 1) {
                sprintf(d_1f3e_51b6, "%d-%d", d_5739_1d2a[d_5d9c_9f6d][0][week - 1] % 32,
                        d_5739_1d2a[d_5d9c_9f6d][1][week - 1] % 32);
                if (d_2f3c_1534[d_5d9c_9f6d] == 1)
                    f_1680_27aa(155, 1 - (d_5d9c_9f7f + d_5d9c_9af4) * 8, 1, "P");
                else if (d_2f3c_1534[d_5d9c_9f6d] == 2)
                    f_1680_27aa(184, 1 - (d_5d9c_9f7f + d_5d9c_9af4) * 8, 1, "P");
            } else
                strcpy(d_1f3e_51b6, " v");
            f_1680_2a61(20, -(d_5d9c_9f7f + d_5d9c_9af4), 1, d_1f3e_51b6);
            f_6e68_2a15(d_5d9c_9edb, week, d_5d9c_9f6d);
            f_1680_27aa(200, 1 - (d_5d9c_9f7f + d_5d9c_9af4) * 8, d_5d9c_9ed9, d_1f3e_5634);
            f_1680_27aa(278, 1 - (d_5d9c_9f7f + d_5d9c_9af4) * 8, 6, d_1f3e_4d4c);
            if (strstr(d_1f3e_4f2c, "2ndLeg")) {
                d_5d9c_9ed7 = f_6e68_299e(week, d_5d9c_9f6d + 1);
                d_5d9c_a050 = f_14d2_16bc(d_5d9c_a33a, 0);
                d_5d9c_9ed5 = *(unsigned char far *)(d_5d9c_a050 + d_5d9c_9ed7 * 80 + d_5d9c_9f6d * 2 + 1);
                d_5d9c_9ed3 = *(unsigned char far *)(d_5d9c_a050 + d_5d9c_9ed7 * 80 + d_5d9c_9f6d * 2);
                if (mode == 1) {
                    d_5d9c_9ed5 += d_5739_1d2a[d_5d9c_9f6d][0][week - 1] % 32;
                    d_5d9c_9ed3 += d_5739_1d2a[d_5d9c_9f6d][1][week - 1] % 32;
                }
                sprintf(buf, "%d", d_5d9c_9ed5);
                f_1680_2d78(2, d_5d9c_9f7f - 0.75 + d_5d9c_9af4, 1, buf);
                sprintf(buf, "%d", d_5d9c_9ed3);
                f_1680_2d78(39, d_5d9c_9f7f - 0.75 + d_5d9c_9af4, 1, buf);
            } else if (f_992a_7430(week, d_5d9c_9f6d + 1) && strstr(d_1f3e_4f2c, "Group")) {
                sprintf(buf, "%c", d_5d9c_9f6d + 1 > 2 ? 'B' : 'A');
                f_1680_2d78(2, d_5d9c_9f7f - 0.75 + d_5d9c_9af4, 1, buf);
            } else if (f_992a_75bc(week, d_5d9c_9f6d + 1) && strstr(d_1f3e_4f2c, "Group")) {
                sprintf(buf, "%c", f_992a_78e7(week, d_5d9c_9f6d + 1) + 'A');
                f_1680_2d78(2, d_5d9c_9f7f - 0.75 + d_5d9c_9af4, 1, buf);
            }
            d_5d9c_9f7f += 2;
        } else
            f_6e68_10a1(d_5d9c_9f6d, week);
    }
    if (mode < 3)
        f_a1c3_3505(0);
}

char f_6e68_2899(int kind, int week, int n)
{
    d_5d9c_9b81 = 0;
    if (kind == -1)
        d_5d9c_9b81 = -1;
    else if (kind == 1 && f_992a_70a8(week))
        d_5d9c_9b81 = -1;
    else if (kind == 2 && f_992a_74c1(week, n))
        d_5d9c_9b81 = -1;
    else if (kind == 3 && f_992a_752d(week, n))
        d_5d9c_9b81 = -1;
    else if (kind == 4 && f_992a_75bc(week, n))
        d_5d9c_9b81 = -1;
    else if (kind == 5 && f_992a_72e8(week, n))
        d_5d9c_9b81 = -1;
    else if (kind == 6 && f_992a_7399(week, n))
        d_5d9c_9b81 = -1;
    else if (kind == 7 && f_992a_7430(week, n))
        d_5d9c_9b81 = -1;
    else if (kind == 8 && f_992a_78ca(week))
        d_5d9c_9b81 = -1;
    else if (kind == 9 && week == 5)
        d_5d9c_9b81 = -1;
    else if (kind == 10 && week < 5)
        d_5d9c_9b81 = -1;
    else if (kind >= 11 && f_992a_700a(week))
        d_5d9c_9b81 = (kind - 11) * 10 + 1 == n ? -1 : 0;
    return d_5d9c_9b81;
}

int f_6e68_299e(int week, int n)
{
    if (f_992a_74c1(week, n))
        d_5d9c_9ed7 = 0;
    else if (f_992a_72e8(week, n))
        d_5d9c_9ed7 = 1;
    else if (f_992a_7399(week, n))
        d_5d9c_9ed7 = 2;
    else if (f_992a_7430(week, n))
        d_5d9c_9ed7 = 3;
    else if (f_992a_78ca(week))
        d_5d9c_9ed7 = 4;
    return d_5d9c_9ed7;
}

void f_6e68_2a15(int club, int week, int n)
{
    d_5d9c_9b80 = 0;
    if (club <= 79) {
        strcpy(d_1f3e_5634, d_5d9c_08bc[club]);
        if (f_992a_70a8(week) || f_992a_78ca(week) || f_992a_74c1(week, n + 1)
            || f_992a_752d(week, n + 1) || f_992a_75bc(week, n + 1) || week < 5) {
            sprintf(d_1f3e_4d4c, "DIV%d", club / 20 + 1);
            if (f_1680_0003(club))
                d_5d9c_9b80 = -1;
        } else if (f_992a_72e8(week, n + 1) || f_992a_7399(week, n + 1) || f_992a_7430(week, n + 1)) {
            strcpy(d_1f3e_4d4c, "ENG");
            d_5d9c_9b80 = -1;
        } else {
            strcpy(d_1f3e_4d4c, "");
            if (f_1680_0003(club))
                d_5d9c_9b80 = -1;
        }
    } else if (club <= 479) {
        strcpy(d_1f3e_5634, d_5d9c_0484[club]);
        sprintf(d_1f3e_4d4c, "%.3s", d_5471_16f0[d_5739_1b0e[club]]);
    } else {
        strcpy(d_1f3e_5634, d_5d9c_0484[club]);
        strcpy(d_1f3e_4d4c, "NLGE");
    }
    d_5d9c_9ed9 = d_5d9c_9ee1 - d_5d9c_9b80 * (d_5d9c_9ee1 == 4 ? 8 : 5);
}

void f_6e68_2be4(int a, int b, int c, int d)
{
    if (f_6e68_2899(d, a, b) == 0)
        return;
    if (strstr(d_1f3e_4f2c, "1st Leg")) {
        if (a == 23)
            d_5d9c_9ed1 = 25;
        else
            d_5d9c_9ed1 = a + 4;
    }
    for (d_5d9c_9fa1 = b - 1; d_5d9c_9fa1 <= c - 2; d_5d9c_9fa1++) {
        for (d_5d9c_9f55 = d_5d9c_9fa1 + 1; d_5d9c_9f55 <= c - 1; d_5d9c_9f55++) {
            strcpy(d_1f3e_4cfc, f_1680_1a91(d_5739_1d28[d_5d9c_9fa1][0][a] / 32));
            strcpy(d_1f3e_4cac, f_1680_1a91(d_5739_1d28[d_5d9c_9f55][0][a] / 32));
            if (strcmp(d_1f3e_4cfc, d_1f3e_4cac) > 0) {
                for (d_5d9c_9ecf = 0; d_5d9c_9ecf <= 1; d_5d9c_9ecf++) {
                    f_14d2_148f(&d_5739_1d28[d_5d9c_9fa1][d_5d9c_9ecf][a],
                                &d_5739_1d28[d_5d9c_9f55][d_5d9c_9ecf][a], 2);
                    if (strstr(d_1f3e_4f2c, "1st Leg")) {
                        f_14d2_148f(&d_5739_1d28[d_5d9c_9fa1][d_5d9c_9ecf][d_5d9c_9ed1],
                                    &d_5739_1d28[d_5d9c_9f55][d_5d9c_9ecf][d_5d9c_9ed1], 2);
                    } else if (strstr(d_1f3e_4f2c, "2nd Leg")) {
                        d_5d9c_9ed7 = f_6e68_299e(a, b);
                        d_5d9c_a050 = f_14d2_16bc(d_5d9c_a33a, 1);
                        f_14d2_148f(d_5d9c_a050 + d_5d9c_9ed7 * 80 + d_5d9c_9fa1 * 2 + d_5d9c_9ecf,
                                    d_5d9c_a050 + d_5d9c_9ed7 * 80 + d_5d9c_9f55 * 2 + d_5d9c_9ecf, 1);
                    }
                }
            }
        }
    }
}

void f_6e68_2e4d(int comp, int mode)
{
    if (f_992a_7831(comp) == 0)
        return;
    if (strcmp(d_1f3e_4f2c, "QuarterFinals") == 0 || strcmp(d_1f3e_4f2c, "SemiFinals") == 0)
        d_1f3e_4f2c[strlen(d_1f3e_4f2c) - 1] = 0;
    strcat(d_1f3e_4f2c, " Replay");
    d_5d9c_9eeb = d_483b_a174[comp];
    if (d_5d9c_9eeb > 1)
        strcat(d_1f3e_4f2c, "s");
    d_5d9c_9b7f = 0;
}

void f_6e68_2efb(int n, int b, int c, int d)
{
    char buf[320];

    if (n > 8) {
        f_a1c3_27e4("");
        f_14d2_0722(16);
        sprintf(buf, " %s ", d_1f3e_4f2c);
        if (d == 1)
            strcat(buf, "Results ");
        else
            strcat(buf, "Fixtures ");
        f_14d2_075a(28, 9, (strlen(buf) + 3.25) * 8 + 3, 22);
        f_1680_2ea0(3.25, 1.25, 0, 1, 0, buf);
        d_5d9c_9af4 = -3.125;
    } else {
        f_a1c3_27e4(d_1f3e_4d9c);
        sprintf(buf, " %s ", d_1f3e_4f2c);
        f_14d2_0722(16);
        f_14d2_075a(28, 31, (strlen(buf) + 3.25) * 8 + 3, 44);
        f_1680_2ea0(3.25, 4.0, 0, 1, 0, buf);
        d_5d9c_9af4 = 0;
    }
    f_14d2_0722(16);
    f_14d2_075a(28, 8 * d_5d9c_9af4 + 54, 299, n * 16 + (8 * d_5d9c_9af4 + 54));
    f_14d2_0722(d_5d9c_9edf + 16);
    f_14d2_075a(24, 8 * d_5d9c_9af4 + 51, 296, n * 16 + (8 * d_5d9c_9af4 + 51));
    f_14d2_073e(17);
    f_14d2_07af(24, 8 * d_5d9c_9af4 + 51, 296, n * 16 + (8 * d_5d9c_9af4 + 51));
    if (n > 1) {
        for (d_5d9c_9ecd = 1; d_5d9c_9ecd <= n - 1; d_5d9c_9ecd++)
            f_14d2_0e27(24, d_5d9c_9ecd * 16 + 52 + 8 * d_5d9c_9af4,
                        296, d_5d9c_9ecd * 16 + 52 + 8 * d_5d9c_9af4);
    }
    f_14d2_0e27(144, 8 * d_5d9c_9af4 + 51, 144, n * 16 + 51 + 8 * d_5d9c_9af4);
    f_14d2_0e27(184, 8 * d_5d9c_9af4 + 51, 184, n * 16 + 51 + 8 * d_5d9c_9af4);
    if (strstr(d_1f3e_4f2c, "2ndLeg")) {
        f_1680_2867(0.875, d_5d9c_9af4 + 5.25, 1, 2, 0, "Ag");
        f_1680_2867(37.875, d_5d9c_9af4 + 5.25, 1, 2, 0, "Ag");
    } else if (strstr(d_1f3e_4f2c, "Group")) {
        f_1680_2867(0.875, d_5d9c_9af4 + 5.25, 1, 2, 0, "Gr");
    }
}

void f_6e68_3366(void)
{
    char buf[320];

    switch (d_5d9c_9fab) {
    case 1: strcpy(d_1f3e_4c5c, "in a month"); break;
    case 2: strcpy(d_1f3e_4c5c, "in three weeks"); break;
    case 3: strcpy(d_1f3e_4c5c, "in two weeks"); break;
    case 4: strcpy(d_1f3e_4c5c, "next week"); break;
    }
    sprintf(buf, "Season starts %s", d_1f3e_4c5c);
    f_88c9_24f1(buf);
}

void f_6e68_33d9(int team)
{
    char buf[80];
    int i;

    d_5d9c_9ecb = 0;
    for (;;) {
        for (i = 0; i < 30; i++)
            d_2f3c_1584[i] = -1;
        if (d_5d9c_9ecb > 0)
            f_6e68_4943(d_5d9c_9ecb - 1, team);
        f_67ee_5ab6(1.5, team, "Squad");
        for (d_5d9c_9f6d = 1; d_5d9c_9f6d <= 15; d_5d9c_9f6d++) {
            switch (d_5d9c_9f6d) {
            case 1: case 2: case 3: case 4: case 5: case 6: case 7:
            case 8: case 9: case 10: case 11: case 12: case 13:
                d_5d9c_9f59 = 1;
                strcpy(d_1f3e_4c0c, f_1680_03f3(d_5d9c_9f6d));
                break;
            case 14:
                strcpy(d_1f3e_4c0c, "CLR");
                d_5d9c_9f59 = 99;
                break;
            case 15:
                strcpy(d_1f3e_4c0c, "SWP");
                d_5d9c_9f59 = 99;
                break;
            }
            f_a1c3_2d08(0, (d_5d9c_9f6d - 1) * 2.5 + 1.375 + (d_5d9c_9f6d > 11 ? 0.125 : 0)
                        + (d_5d9c_9f6d > 13 ? 0.125 : 0), 19.75,
                        d_5d9c_9f59 / 16, d_5d9c_9f59 % 16, 0x12, d_1f3e_4c0c);
        }
        f_a1c3_2d08(0, 1.375, 20.75, 1, 12, 0x2f, "  GOAL");
        f_a1c3_2d08(0, 7.5, 20.75, 1, 12, 0x30, "  DISP");
        f_a1c3_2d08(0, 13.75, 20.75, 1, 12, 0x30, "  AV R");
        f_a1c3_2d08(0, 20.0, 20.75, 1, 3, 0x31, "  PREV");
        f_a1c3_2d08(0, 26.375, 20.75, 1, 3, 0x31, "  TACT");
        f_a1c3_2d08(0, 32.75, 20.75, 1, 3, 0x31, "  OPPS");
        f_a1c3_2d08(2, 1.5, 21.875, 1, 4, 0x90, "       DONE");
        f_a1c3_2d08(2, 1.5, 4.0, 1, 14, 0x2e, " Trns");
        f_a1c3_2d08(2, 7.875, 4.0, 1, 14, 0x2d, " Staf");
        f_a1c3_2d08(2, 14.125, 4.0, 1, 14, 0x2d, " Leag");
        f_a1c3_2d08(2, 20.375, 4.0, 1, 14, 0x2d, " Fixt");
        f_a1c3_2d08(2, 26.625, 4.0, 1, 14, 0x2d, " Accs");
        f_a1c3_2d08(2, 32.875, 4.0, 1, 14, 0x2e, " Info");
        f_a1c3_2d08(2, 20.125, 21.875, 1, 4, 0x2e, d_5d9c_9ecb == 1 ? " SQDL" : " DEFS");
        f_a1c3_2d08(2, 26.5, 21.875, 1, 4, 0x2e, d_5d9c_9ecb == 2 ? " SQDL" : " MIDS");
        f_a1c3_2d08(2, 32.875, 21.875, 1, 4, 0x2e, d_5d9c_9ecb == 3 ? " SQDL" : " ATTS");
        if (d_5d9c_9ecb == 0)
            f_1680_20c2(team);
        else
            f_6e68_428e(d_5d9c_9ecb - 1, team);
        d_5d9c_9ebf = 0;
        d_5d9c_9b7e = 0;
        for (;;) {
            if (d_5d9c_9ebf == 0) {
                f_a1c3_34c6(15);
                f_a1c3_34c6(14);
            } else
                f_a1c3_34db();
            d_5d9c_9faf = f_a1c3_3298(0);
            if (d_5d9c_9faf == 0) {
                f_7555_00cc(d_5d9c_9ebf);
                if (d_5d9c_9b7e) {
                    d_5d9c_9b7e = 0;
                    f_a1c3_30b1(15, 0);
                }
                continue;
            } else if (d_5d9c_9faf >= 1 && d_5d9c_9faf <= 13) {
                d_5d9c_9ec9 = d_5d9c_9ebf;
                if ((d_5d9c_9ebf = d_5d9c_9faf) == d_5d9c_9ec9)
                    continue;
                if (d_5d9c_9ec9 > 0)
                    f_a1c3_30b1(d_5d9c_9ec9, 0);
                if (d_5d9c_9b7e == 0)
                    continue;
                for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= d_5d9c_9ec7 - 1; d_5d9c_9f6d++) {
                    if (d_2f3c_2d59[team][d_5d9c_9ebf - 1] == d_2f3c_1584[d_5d9c_9f6d]) {
                        strcpy(d_1f3e_4c0c, f_1680_03f3(d_5d9c_9ec9));
                        if (d_5d9c_9ecb == 0) {
                            f_1680_270b(d_5d9c_9f6d);
                            f_1680_2867(d_5d9c_9af0, d_5d9c_9b08, 2, 1, 0, d_1f3e_4c0c);
                        } else
                            f_1680_2867(1.375, d_5d9c_9f6d + 7.5, 2, 1, 0, d_1f3e_4c0c);
                    } else if (d_2f3c_2d59[team][d_5d9c_9ec9 - 1] == d_2f3c_1584[d_5d9c_9f6d]) {
                        strcpy(d_1f3e_4c0c, f_1680_03f3(d_5d9c_9ebf));
                        if (d_5d9c_9ecb == 0) {
                            f_1680_270b(d_5d9c_9f6d);
                            f_1680_2867(d_5d9c_9af0, d_5d9c_9b08, 2, 1, 0, d_1f3e_4c0c);
                        } else
                            f_1680_2867(1.375, d_5d9c_9f6d + 7.5, 2, 1, 0, d_1f3e_4c0c);
                    }
                }
                f_14d2_148f(&d_2f3c_2d59[team][d_5d9c_9ebf - 1], &d_2f3c_2d59[team][d_5d9c_9ec9 - 1], 2);
                f_7555_00cc(d_5d9c_9ebf);
                f_a1c3_30b1(15, 0);
                d_5d9c_9b7e = 0;
                continue;
            } else if (d_5d9c_9faf == 14) {
                if (d_5d9c_9ebf > 0) {
                    d_5d9c_9f91 = d_2f3c_2d59[team][d_5d9c_9ebf - 1];
                    if (d_5d9c_9f91 < 1700) {
                        for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= d_5d9c_9ec7 - 1; d_5d9c_9f6d++) {
                            if (d_2f3c_1584[d_5d9c_9f6d] == d_5d9c_9f91) {
                                if (d_5d9c_9ecb == 0) {
                                    f_1680_270b(d_5d9c_9f6d);
                                    f_1680_2867(d_5d9c_9af0, d_5d9c_9b08, 1, 2, 0, "  ");
                                } else
                                    f_1680_2867(1.375, d_5d9c_9f6d + 7.5, 1, 2, 0, "  ");
                            }
                        }
                        d_1f3e_8a72[d_5d9c_9f91] = 0;
                        d_2f3c_2d59[team][d_5d9c_9ebf - 1] = 1700;
                    }
                    f_7555_00cc(d_5d9c_9ebf);
                }
                if (d_5d9c_9b7e) {
                    d_5d9c_9b7e = 0;
                    f_a1c3_30b1(15, 0);
                }
                f_a1c3_30b1(14, 0);
                continue;
            } else if (d_5d9c_9faf == 15) {
                d_5d9c_9b7e = !d_5d9c_9b7e;
                if (d_5d9c_9b7e == 0)
                    f_a1c3_30b1(15, 0);
                continue;
            } else if (d_5d9c_9faf == 16 || d_5d9c_9faf == 17 || d_5d9c_9faf == 18) {
                f_67ee_0e4c(d_5d9c_9faf - 16, team);
                break;
            } else if (d_5d9c_9faf == 19) {
                if (d_2f3c_7c73[0][team] == 0) {
                    f_7555_0000("No matches played");
                    f_a1c3_30b1(19, 0);
                } else {
                    FILE *fp;

                    fp = fopen("matchfax", "rb");
                    fseek(fp, (long)(d_2f3c_7c73[0][team] - 1) * 149, 0);
                    fread(d_1f3e_49e6, 1, 149, fp);
                    fclose(fp);
                    f_7a28_360e(d_5739_1d2a[d_2f3c_7c73[1][team]][0][d_2f3c_7c73[2][team]] / 32,
                                d_5739_1d2a[d_2f3c_7c73[1][team]][1][d_2f3c_7c73[2][team]] / 32, -1);
                    break;
                }
            } else if (d_5d9c_9faf == 20) {
                f_6e68_4b39(team);
                break;
            } else if (d_5d9c_9faf == 21) {
                if (d_5d9c_9b7d) {
                    d_5d9c_9ec5 = 0;
                    if (d_5d9c_9ec3 < 80)
                        f_67ee_5641(d_5d9c_9ec3);
                    else
                        f_7555_00e9(d_5d9c_9ec3);
                    break;
                }
                f_7555_0000("No details yet");
                continue;
            } else if (d_5d9c_9faf == 22) {
                if (d_5d9c_9b7d == 0)
                    return;
                d_5d9c_9ec1 = 0;
                for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= 12; d_5d9c_9f6d++)
                    if (d_2f3c_2d59[team][d_5d9c_9f6d] < 1700)
                        d_5d9c_9ec1++;
                if (d_5d9c_9ec1 >= 13)
                    return;
                if (d_5d9c_9ec1 == 0)
                    f_7555_0000("Nobody picked");
                else {
                    sprintf(buf, "Only %d picked", d_5d9c_9ec1);
                    f_7555_0000(buf);
                }
            } else if (d_5d9c_9faf == 23) {
                f_67ee_5c0f(team);
                break;
            } else if (d_5d9c_9faf == 24) {
                f_88c9_68aa(team);
                break;
            } else if (d_5d9c_9faf == 25) {
                f_67ee_5f96(team);
                break;
            } else if (d_5d9c_9faf == 26) {
                f_67ee_4e10(team);
                break;
            } else if (d_5d9c_9faf == 27) {
                f_6e68_0027(team);
                break;
            } else if (d_5d9c_9faf == 28) {
                f_a1c3_093a(team);
                break;
            } else if (d_5d9c_9faf == 29 || d_5d9c_9faf == 30 || d_5d9c_9faf == 31) {
                d_5d9c_9fce = f_14d2_16bc(d_5d9c_a350, 0);
                strcpy(d_1f3e_4bbc, f_14d2_0e72(d_5d9c_9fce + (d_5d9c_9faf - 1) * 40));
                if (strcmp(d_1f3e_4bbc, "SQDL") == 0)
                    d_5d9c_9ecb = 0;
                else if (strcmp(d_1f3e_4bbc, "DEFS") == 0)
                    d_5d9c_9ecb = 1;
                else if (strcmp(d_1f3e_4bbc, "MIDS") == 0)
                    d_5d9c_9ecb = 2;
                else
                    d_5d9c_9ecb = 3;
                break;
            } else if (d_5d9c_9faf >= 32) {
                d_5d9c_9f3d = d_5d9c_9faf - 32;
                d_5d9c_9f91 = d_2f3c_1584[d_5d9c_9f3d];
                if (d_5d9c_9ebf == 0) {
                    do {
                        f_a1c3_5e7a(d_5d9c_9f91, -1, -1);
                        f_8352_4556(d_5d9c_9f91, d_5d9c_9f57);
                    } while (!d_5d9c_9b88);
                    break;
                }
                if (d_483b_0000[20][d_5d9c_9f91] > 0)
                    f_7555_0000("Not available");
                else {
                    if (d_2f3c_2d59[team][d_5d9c_9ebf - 1] != d_5d9c_9f91) {
                        if (d_2f3c_2d59[team][d_5d9c_9ebf - 1] < 1700) {
                            for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= d_5d9c_9ec7 - 1; d_5d9c_9f6d++) {
                                if (d_2f3c_2d59[team][d_5d9c_9ebf - 1] == d_2f3c_1584[d_5d9c_9f6d]) {
                                    if (d_5d9c_9ecb == 0) {
                                        f_1680_270b(d_5d9c_9f6d);
                                        f_1680_2867(d_5d9c_9af0, d_5d9c_9b08, 1, 2, 0, "  ");
                                    } else
                                        f_1680_2867(1.375, d_5d9c_9f6d + 7.5, 1, 2, 0, "  ");
                                }
                            }
                            d_1f3e_8a72[d_2f3c_2d59[team][d_5d9c_9ebf - 1]] = 0;
                        }
                        if (d_1f3e_8a72[d_5d9c_9f91])
                            d_2f3c_2d59[team][f_992a_1d7c(d_5d9c_9f91)] = 1700;
                        d_2f3c_2d59[team][d_5d9c_9ebf - 1] = d_5d9c_9f91;
                        d_1f3e_8a72[d_5d9c_9f91] = -1;
                        strcpy(d_1f3e_4c0c, f_1680_03f3(d_5d9c_9ebf));
                        if (d_5d9c_9ecb == 0) {
                            f_1680_270b(d_5d9c_9f3d);
                            f_1680_2867(d_5d9c_9af0, d_5d9c_9b08, 2, 1, 0, d_1f3e_4c0c);
                        } else
                            f_1680_2867(1.375, d_5d9c_9f3d + 7.5, 2, 1, 0, d_1f3e_4c0c);
                    }
                    f_a1c3_30b1(d_5d9c_9faf, 0);
                }
                0;
            } else
                return;
            f_7555_00cc(d_5d9c_9ebf);
        }
    }
}

/* the squad screen's attribute columns: x position and heading */
static struct col d_5d9c_3aac[] = {
    {14.875, "PS"}, {17.0, "TK"}, {19.125, "PA"}, {21.25, "HD"}, {23.375, "FL"},
    {25.5, "CR"}, {27.625, "AG"}, {29.75, "IF"}, {31.875, "SDE"}, {34.375, "FIT"},
    {36.875, "AVR"}
};

void f_6e68_428e(int mode, int team)
{
    char buf[320];

    if (mode == 0)
        strcpy(buf, " DEFENDERS");
    else if (mode == 1)
        strcpy(buf, " MIDFIELDERS");
    else
        strcpy(buf, " ATTACKERS");
    f_1680_2867(1.375, 6.5, 0, 1, 0x68, buf);
    for (d_5d9c_9ebd = 0; d_5d9c_9ebd <= 10; d_5d9c_9ebd++)
        f_1680_2867(d_5d9c_3aac[d_5d9c_9ebd].x - 0.125, 6.5, 0, 6, d_5d9c_9ebd > 7 ? 0x12 : 0xf,
                    d_5d9c_3aac[d_5d9c_9ebd].title);
    for (d_5d9c_9f71 = 1; d_5d9c_9f71 <= 12; d_5d9c_9f71++) {
        if (d_5d9c_9f71 & 1) {
            d_5d9c_9ebb = 14;
            d_5d9c_9eb9 = 4;
        } else {
            d_5d9c_9ebb = 8;
            d_5d9c_9eb9 = 12;
        }
        d_5d9c_9f91 = d_2f3c_1582[d_5d9c_9f71];
        strcpy(d_1f3e_4b6c, "");
        d_5d9c_9f65 = 0x12;
        if (d_5d9c_9f91 > -1) {
            if (d_483b_0000[20][d_5d9c_9f91] > 0) {
                if (d_483b_0000[19][d_5d9c_9f91] == 20)
                    strcpy(d_1f3e_4b6c, "su");
                else
                    strcpy(d_1f3e_4b6c, "ij");
            } else if (d_1f3e_8a72[d_5d9c_9f91]) {
                strcpy(d_1f3e_4b6c, f_1680_03f3(f_992a_1d7c(d_5d9c_9f91) + 1));
                d_5d9c_9f65 = 0x21;
            }
            f_1680_2867(1.375, d_5d9c_9f71 + 6.5, d_5d9c_9f65 / 16, d_5d9c_9f65 % 16, 12, d_1f3e_4b6c);
            sprintf(buf, " %.14s", f_a1c3_21cc(d_5d9c_9f91));
            f_a1c3_2d08(0, 3.125, d_5d9c_9f71 + 6.5, 1, d_5d9c_9ebb, 0x5a, buf);
        } else {
            f_1680_2867(1.375, d_5d9c_9f71 + 6.5, d_5d9c_9f65 / 16, d_5d9c_9f65 % 16, 12, "");
            f_1680_2867(3.125, d_5d9c_9f71 + 6.5, 1, d_5d9c_9ebb, 0x5a, "");
        }
        for (d_5d9c_9ebd = 0; d_5d9c_9ebd <= 10; d_5d9c_9ebd++) {
            if (d_5d9c_9f91 > -1) {
                switch (d_5d9c_9ebd) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                    sprintf(d_1f3e_4b1c, "%02d", d_483b_0000[d_5d9c_9ebd + 1][d_5d9c_9f91]);
                    d_5d9c_9f59 = 1;
                    break;
                case 6:
                    sprintf(d_1f3e_4b1c, "%02d", d_483b_0000[10][d_5d9c_9f91]);
                    d_5d9c_9f59 = 6;
                    break;
                case 7:
                    sprintf(d_1f3e_4b1c, "%02d", d_483b_0000[12][d_5d9c_9f91]);
                    d_5d9c_9f59 = 6;
                    break;
                case 8:
                    strcpy(d_1f3e_4b1c, "");
                    if (d_1f3e_7680[0][d_5d9c_9f91])
                        strcat(d_1f3e_4b1c, "R");
                    if (d_1f3e_7680[1][d_5d9c_9f91])
                        strcat(d_1f3e_4b1c, "L");
                    if (d_1f3e_7680[2][d_5d9c_9f91])
                        strcat(d_1f3e_4b1c, "C");
                    if (strlen(d_1f3e_4b1c) == 1) {
                        d_1f3e_4b1c[1] = d_1f3e_4b1c[0];
                        d_1f3e_4b1c[0] = d_1f3e_4b1c[2] = ' ';
                        d_1f3e_4b1c[3] = 0;
                    } else if (strlen(d_1f3e_4b1c) == 2)
                        strcat(d_1f3e_4b1c, " ");
                    d_5d9c_9f59 = 6;
                    break;
                case 9:
                    if (d_483b_0000[20][d_5d9c_9f91] == 0)
                        sprintf(d_1f3e_4b1c, "%03d", d_483b_0000[21][d_5d9c_9f91]);
                    else
                        strcpy(d_1f3e_4b1c, "");
                    0;
                    d_5d9c_9f59 = 6;
                    break;
                case 10:
                    if (d_3e42_0000[0][d_5d9c_9f91] > 0) {
                        sprintf(d_1f3e_4b1c, "%d", d_2f3c_85f7[d_5d9c_9f91] / d_3e42_0000[0][d_5d9c_9f91] * 10 / 10);
                        if (strlen(d_1f3e_4b1c) == 1)
                            strcat(d_1f3e_4b1c, ".0");
                    } else
                        strcpy(d_1f3e_4b1c, "");
                    d_5d9c_9f59 = 9;
                    break;
                }
            } else
                strcpy(d_1f3e_4b1c, "");
            f_1680_2867(d_5d9c_3aac[d_5d9c_9ebd].x, d_5d9c_9f71 + 6.5, d_5d9c_9f59, d_5d9c_9eb9,
                        d_5d9c_9ebd > 7 ? 0x12 : 0xf, d_1f3e_4b1c);
        }
    }
}

void f_6e68_4943(int a, int team)
{
    char sel[30];

    memset(sel, 0, 30);
    d_5d9c_9b7c = 0;
    d_5d9c_9ec7 = 0;
    for (d_5d9c_9f71 = 1; d_5d9c_9f71 <= 12; d_5d9c_9f71++) {
        if (d_5d9c_9b7c == 0) {
            d_5d9c_9f91 = -1;
            for (d_5d9c_9f51 = 0; d_5d9c_9f51 <= d_5739_023e[team] - 1; d_5d9c_9f51++) {
                d_5d9c_9eb7 = d_483b_a372[team][d_5d9c_9f51];
                if (d_1f3e_628e[a][d_5d9c_9eb7] && sel[d_5d9c_9f51] == 0) {
                    if (d_3e42_0000[5][d_5d9c_9eb7] + d_3e42_0000[0][d_5d9c_9eb7] > 0)
                        d_5d9c_9aec = (d_2f3c_9343[d_5d9c_9eb7] + d_2f3c_85f7[d_5d9c_9eb7])
                                      / ((float)d_3e42_0000[5][d_5d9c_9eb7] + d_3e42_0000[0][d_5d9c_9eb7]);
                    else
                        d_5d9c_9aec = 0;
                    if (d_5d9c_9aec > d_5d9c_9ae8 || d_5d9c_9f91 == -1) {
                        d_5d9c_9ae8 = d_5d9c_9aec;
                        d_5d9c_9f91 = d_5d9c_9eb7;
                        d_5d9c_9f3d = d_5d9c_9f51;
                    }
                }
            }
        }
        if (d_5d9c_9f91 > -1) {
            sel[d_5d9c_9f3d] = -1;
            d_2f3c_1582[d_5d9c_9f71] = d_5d9c_9f91;
            d_5d9c_9ec7++;
        } else
            d_5d9c_9b7c = -1;
    }
}

/* the tactics editor's buttons: colours and label. The code reads entry i (from 1) as
 * d_5d9c_3afe[i], one entry before the table: BCC folds that base into the displacements
 * as the original does, where indexing this table with [i - 1] does not (it computes the
 * -5 of the second byte at run time). */
static struct pos d_5d9c_3b04[] = {
    {1, 12, " GK"}, {1, 12, " SWP"}, {1, 12, " DEF"}, {1, 12, " MID"}, {1, 12, " ATT"},
    {6, 4, " RIGHT"}, {6, 4, " LEFT"}, {6, 4, " CENTRE"}, {1, 12, " NORM"},
    {1, 12, " FORW"}, {1, 12, " BACK"}, {1, 4, " CAPT"}, {1, 2, " STYLE"},
    {1, 2, " TACTIC"}
};

void f_6e68_4b39(int team)
{
    for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= 12; d_5d9c_9f6d++)
        for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 2; d_5d9c_9fa1++)
            d_2f3c_2ce4[d_5d9c_9fa1][d_5d9c_9f6d] = d_2f3c_35ad[team][d_5d9c_9fa1][d_5d9c_9f6d];
    d_5d9c_9bb9 = d_2f3c_5b8f[d_2f3c_7f93[team]];
    d_5d9c_9ec5 = d_5d9c_9d98[d_2f3c_7f93[team]];
    do {
        f_a1c3_27e4("Tactics editor");
        f_1680_33a0(1.0, 4.5, team);
        f_7555_0390(team, 0);
        f_a1c3_2d08(0, 21.25, 21.0, 6, 3, 0, "RE");
        f_a1c3_2d08(0, 23.0, 21.0, 12, 6, 0x4e, " SWAP WITH");
        for (d_5d9c_9f6d = 1; d_5d9c_9f6d <= 14; d_5d9c_9f6d++)
            f_a1c3_2d08(0, 33.0, d_5d9c_9f6d + 7, d_5d9c_3afe[d_5d9c_9f6d].c,
                        d_5d9c_3afe[d_5d9c_9f6d].d, 0x33, d_5d9c_3afe[d_5d9c_9f6d].s);
        d_5d9c_9ebf = 0;
        d_5d9c_9b7b = 0;
        do
            d_5d9c_9ebf++;
        while (d_2f3c_2d0b[team == d_5d9c_9edb][d_5d9c_9ebf - 1] >= 2);
        d_5d9c_9f49 = -1;
        d_5d9c_9eb5 = -1;
        d_5d9c_9eb3 = -1;
        f_a1c3_30b1(d_5d9c_9ebf + 1, -1);
        f_6e68_5541(d_5d9c_9ebf);
        f_6e68_5848(team);
        do {
            d_5d9c_9b8a = 0;
            d_5d9c_9eb1 = f_a1c3_3298(-1);
            switch (d_5d9c_9eb1) {
            case 1:
                if (d_5d9c_9b7a == 0) {
                    f_6e68_57b5("No Captain selected");
                    break;
                }
                d_5d9c_9b8a = -1;
                break;
            case 2: case 3: case 4: case 5: case 6: case 7: case 8:
            case 9: case 10: case 11: case 12: case 13: case 14:
                d_5d9c_9b79 = 0;
                d_5d9c_9b78 = 0;
                d_5d9c_9b77 = 0;
                d_5d9c_9eaf = d_2f3c_2d0b[team == d_5d9c_9edb][d_5d9c_9eb1 - 2];
                d_5d9c_9ead = d_2f3c_2d0b[team == d_5d9c_9edb][d_5d9c_9ebf - 1];
                if (d_5d9c_9b7b == 0 && (d_5d9c_9eaf < 2 || d_5d9c_9b76 && d_5d9c_9eaf == 6))
                    d_5d9c_9b79 = -1;
                else if (d_5d9c_9b7b && d_5d9c_9eaf < 2 && d_5d9c_9ead < 2)
                    d_5d9c_9b78 = -1;
                else if (d_5d9c_9b76 && d_5d9c_9b7b && d_5d9c_9eaf == 4 &&
                         (d_5d9c_9ead < 2 || d_5d9c_9ead == 6))
                    d_5d9c_9b77 = -1;
                if (d_5d9c_9b79 == 0 && d_5d9c_9b78 == 0 && d_5d9c_9b77 == 0)
                    break;
                d_5d9c_9eab = d_5d9c_9ebf;
                if ((d_5d9c_9ebf = d_5d9c_9eb1 - 1) != d_5d9c_9eab) {
                    f_a1c3_30b1(d_5d9c_9eab + 1, 0);
                    f_a1c3_30b1(d_5d9c_9ebf + 1, -1);
                    if (d_5d9c_9b7b) {
                        if (d_5d9c_9b77) {
                            d_5d9c_9ea9 = d_5d9c_9eab - 1;
                            d_5d9c_9ea7 = d_5d9c_9ebf - 1;
                            for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 2; d_5d9c_9fa1++) {
                                d_2f3c_2ce4[d_5d9c_9fa1][d_5d9c_9ea7] = d_2f3c_2ce4[d_5d9c_9fa1][d_5d9c_9ea9];
                                d_2f3c_35ad[team][d_5d9c_9fa1][d_5d9c_9ea7] = d_2f3c_35ad[team][d_5d9c_9fa1][d_5d9c_9ea9];
                            }
                            d_2f3c_2d0b[team == d_5d9c_9edb][d_5d9c_9ea7] = 0;
                            if (d_2f3c_2d0b[team == d_5d9c_9edb][d_5d9c_9ea9] == 6)
                                d_2f3c_2d0b[team == d_5d9c_9edb][d_5d9c_9ea9] = 3;
                            else
                                d_2f3c_2d0b[team == d_5d9c_9edb][d_5d9c_9ea9] = 5;
                            d_5d9c_a040[team == d_5d9c_9edb][d_5d9c_9ea7 == 12] = d_5d9c_9ea9;
                            d_5d9c_a03c[team == d_5d9c_9edb][d_5d9c_9ea7 == 12] = d_5d9c_9ea5;
                        } else if (d_5d9c_9b78) {
                            for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 2; d_5d9c_9fa1++)
                                f_14d2_148f(&d_2f3c_2ce4[d_5d9c_9fa1][d_5d9c_9eab - 1],
                                            &d_2f3c_2ce4[d_5d9c_9fa1][d_5d9c_9ebf - 1], 1);
                        }
                        f_6e68_5848(team);
                        d_5d9c_9b7b = 0;
                        f_a1c3_30b1(29, 0);
                    }
                }
                f_6e68_5541(d_5d9c_9ebf);
                break;
            case 15: case 16: case 17: case 18: case 19: case 20: case 21:
            case 22: case 23: case 24: case 25: case 26: case 27:
                d_5d9c_9f91 = d_2f3c_2d59[team][d_5d9c_9eb1 - 15];
                if (d_5d9c_9f91 >= 1700)
                    break;
                do {
                    f_a1c3_5e7a(d_2f3c_2d59[team][d_5d9c_9eb1 - 15], -1, -1);
                    f_8352_4556(d_5d9c_9f91, d_5d9c_9f57);
                } while (!d_5d9c_9b88);
                d_5d9c_9b8a = -1;
                break;
            case 28:
                f_a1c3_30b1(28, -1);
                for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= 12; d_5d9c_9f6d++)
                    for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 2; d_5d9c_9fa1++)
                        d_2f3c_2ce4[d_5d9c_9fa1][d_5d9c_9f6d] = d_2f3c_35ad[team][d_5d9c_9fa1][d_5d9c_9f6d];
                d_5d9c_9bb9 = d_2f3c_5b8f[d_2f3c_7f93[team]];
                d_5d9c_9ec5 = d_5d9c_9d98[d_2f3c_7f93[team]];
                f_6e68_5541(d_5d9c_9ebf);
                f_6e68_5848(team);
                f_a1c3_30b1(28, 0);
                break;
            case 29:
                f_a1c3_30b1(29, !d_5d9c_9b7b);
                d_5d9c_9b7b = !d_5d9c_9b7b;
                break;
            case 30: case 31:
                d_5d9c_9b75 = f_6e68_570e(d_5d9c_9ebf, d_5d9c_9eb1 == 31 ? 11 : 1);
                if (d_5d9c_9b75) {
                    f_6e68_5541(d_5d9c_9ebf);
                    f_6e68_5848(team);
                } else
                    f_6e68_57b5("Position occupied");
                break;
            case 32: case 33: case 34:
                sprintf(d_1f3e_4acc, "%d", d_5d9c_9eb5 > 0 ? d_5d9c_9eb5 : 0);
                do {
                    d_5d9c_9b75 = f_6e68_570e(d_5d9c_9ebf,
                        (d_5d9c_9eb1 - 32) * 3 + (int)atol(f_14d2_0d75(d_1f3e_4acc, 1)) + 2);
                    if (d_5d9c_9b75) {
                        f_6e68_5541(d_5d9c_9ebf);
                        f_6e68_5848(team);
                    } else if (strlen(d_1f3e_4acc) < 3) {
                        if (strstr(d_1f3e_4acc, "0") == 0)
                            strcat(d_1f3e_4acc, "0");
                        else if (strstr(d_1f3e_4acc, "1") == 0)
                            strcat(d_1f3e_4acc, "1");
                        else if (strstr(d_1f3e_4acc, "2") == 0)
                            strcat(d_1f3e_4acc, "2");
                    } else
                        strcpy(d_1f3e_4acc, "Fuck");
                } while (d_5d9c_9b75 == 0 && strlen(d_1f3e_4acc) != 4);
                if (d_5d9c_9b75)
                    break;
                f_6e68_57b5("Position occupied");
                break;
            case 35: case 36: case 37:
                d_5d9c_9b75 = f_6e68_570e(d_5d9c_9ebf, (d_5d9c_9f49 - 2) * 3 + d_5d9c_9eb1 - 33);
                if (d_5d9c_9b75) {
                    f_6e68_5541(d_5d9c_9ebf);
                    f_6e68_5848(team);
                } else
                    f_6e68_57b5("Position occupied");
                break;
            case 38: case 39: case 40:
                if (d_2f3c_2ce4[0][d_5d9c_9ebf - 1] != 1 && d_2f3c_2ce4[0][d_5d9c_9ebf - 1] != 11 &&
                    d_2f3c_2ce4[1][d_5d9c_9ebf - 1] != d_5d9c_9eb1 - 38) {
                    d_2f3c_2ce4[1][d_5d9c_9ebf - 1] = d_5d9c_9eb1 - 38;
                    f_6e68_5541(d_5d9c_9ebf);
                    f_6e68_5848(team);
                }
                break;
            case 41:
                if (d_5d9c_9ec5 == d_5d9c_9ebf)
                    d_5d9c_9ec5 = 0;
                else
                    d_5d9c_9ec5 = d_5d9c_9ebf;
                f_6e68_5541(d_5d9c_9ebf);
                f_6e68_5848(team);
                break;
            case 42:
                f_6e68_6488(team);
                d_5d9c_9b8a = -1;
                break;
            case 43:
                f_6e68_62d8(team);
                d_5d9c_9b8a = -1;
                break;
            }
        } while (!d_5d9c_9b8a);
    } while (d_5d9c_9eb1 > 1);
    for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= 12; d_5d9c_9f6d++)
        for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 2; d_5d9c_9fa1++)
            d_2f3c_35ad[team][d_5d9c_9fa1][d_5d9c_9f6d] = d_2f3c_2ce4[d_5d9c_9fa1][d_5d9c_9f6d];
    d_5d9c_9d98[d_2f3c_7f93[team]] = d_5d9c_9ec5;
    d_2f3c_5b8f[d_2f3c_7f93[team]] = d_5d9c_9bb9;
    d_5d9c_a026[team == d_5d9c_9edb] = 0;
}

void f_6e68_5541(int slot)
{
    if (d_2f3c_2d0b[d_5d9c_9f67 == d_5d9c_9edb][slot - 1] >= 2)
        return;
    d_5d9c_9ea3 = d_5d9c_9f49;
    d_5d9c_9ea1 = d_5d9c_9eb5;
    d_5d9c_9e9f = d_5d9c_9eb3;
    d_5d9c_9eb3 = d_2f3c_2ce4[1][slot - 1];
    f_a1c3_34db();
    d_5d9c_9eb7 = d_2f3c_2ce4[0][slot - 1];
    if (d_5d9c_9eb7 == 1 || d_5d9c_9eb7 == 11) {
        d_5d9c_9f49 = d_5d9c_9eb7 == 11;
        d_5d9c_9eb5 = -1;
        d_5d9c_9eb3 = -1;
        for (d_5d9c_9e9d = 35; d_5d9c_9e9d <= 40; d_5d9c_9e9d++)
            f_a1c3_34c6(d_5d9c_9e9d);
    } else if (d_5d9c_9eb7 >= 2 && d_5d9c_9eb7 <= 4) {
        d_5d9c_9f49 = 2;
        d_5d9c_9eb5 = d_5d9c_9eb7 - 2;
    } else if (d_5d9c_9eb7 >= 5 && d_5d9c_9eb7 <= 7) {
        d_5d9c_9f49 = 3;
        d_5d9c_9eb5 = d_5d9c_9eb7 - 5;
    } else if (d_5d9c_9eb7 >= 8 && d_5d9c_9eb7 <= 10) {
        d_5d9c_9f49 = 4;
        d_5d9c_9eb5 = d_5d9c_9eb7 - 8;
    }
    if (d_5d9c_9f49 != d_5d9c_9ea3) {
        if (d_5d9c_9ea3 > -1)
            f_a1c3_30b1(d_5d9c_9ea3 + 30, 0);
        if (d_5d9c_9f49 > -1)
            f_a1c3_30b1(d_5d9c_9f49 + 30, -1);
    }
    if (d_5d9c_9eb5 != d_5d9c_9ea1) {
        if (d_5d9c_9ea1 > -1)
            f_a1c3_30b1(d_5d9c_9ea1 + 35, 0);
        if (d_5d9c_9eb5 > -1)
            f_a1c3_30b1(d_5d9c_9eb5 + 35, -1);
    }
    if (d_5d9c_9eb3 != d_5d9c_9e9f) {
        if (d_5d9c_9e9f > -1)
            f_a1c3_30b1(d_5d9c_9e9f + 38, 0);
        if (d_5d9c_9eb3 > -1)
            f_a1c3_30b1(d_5d9c_9eb3 + 38, -1);
    }
    f_a1c3_30b1(41, d_5d9c_9ebf == d_5d9c_9ec5 ? -1 : 0);
}

char f_6e68_570e(int slot, int pos)
{
    d_5d9c_9e9b = 0;
    for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= 12; d_5d9c_9f6d++)
        if (d_2f3c_2d0b[d_5d9c_9f67 == d_5d9c_9edb][d_5d9c_9f6d] < 2)
            d_5d9c_9e9b += d_2f3c_2ce4[0][d_5d9c_9f6d] == pos;
    d_5d9c_9b75 = (pos == 4 || pos == 7 || pos == 10 ? 3 : 1) > d_5d9c_9e9b ? -1 : 0;
    if (d_5d9c_9b75)
        d_2f3c_2ce4[0][slot - 1] = pos;
    return d_5d9c_9b75;
}

void f_6e68_57b5(char far *s)
{
    char buf[80];

    sprintf(buf, "%*s", 19 - strlen(s) / 2 + strlen(s), s);
    f_1680_2ea0(1.0, 22.125, 1, 2, 0x131, buf);
    f_14d2_0c66(75);
    f_a1c3_30b1(1, 0);
}

void f_6e68_5848(int team)
{
    char lines[15][80];

    d_5d9c_9b7a = 0;
    f_14d2_0722(0x13);
    f_14d2_075a(8, 60, 164, 156);
    if (team < 80)
        sprintf(d_1f3e_4acc, "%s style", d_5471_181c[d_5d9c_9bb9 / 16]);
    else if ((team == d_5d9c_9edd && d_5d9c_9e91 < 400) ||
             (team == d_5d9c_9edb && d_5d9c_9e8f < 400))
        strcpy(d_1f3e_4acc, "Continental style");
    else
        strcpy(d_1f3e_4acc, "Up and Under style");
    d_5d9c_9ae4 = (strlen(d_1f3e_4acc) + 2) * 6 / 8.0;
    sprintf(lines[11], " %s ", d_1f3e_4acc);
    f_1680_2867(11.0 - d_5d9c_9ae4 / 2.0, 8.5, 2, 6, 0, lines[11]);
    for (d_5d9c_9f6d = 1; d_5d9c_9f6d <= 3; d_5d9c_9f6d++)
        for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 12; d_5d9c_9fa1++) {
            if (d_5d9c_9f6d == 1 && d_5d9c_9fa1 < 11)
                strcpy(lines[d_5d9c_9fa1], "");
            else if (d_5d9c_9f6d == 2 && d_2f3c_2d0b[team == d_5d9c_9edb][d_5d9c_9fa1] < 2) {
                d_5d9c_9b9e = d_2f3c_2ce4[0][d_5d9c_9fa1] - 1;
                sprintf(lines[11], "%02d", d_5d9c_9fa1);
                strcat(lines[d_5d9c_9b9e], lines[11]);
            } else if (d_5d9c_9f6d == 3 && d_5d9c_9fa1 < 11 && strlen(lines[d_5d9c_9fa1]) == 0)
                strcpy(lines[d_5d9c_9fa1], "  ");
        }
    d_5d9c_9f81 = 5 - (strcmp(lines[10], "  ") ? 2 : 0);
    f_6e68_5b66(lines[0]);
    f_6e68_5b66(lines[10]);
    sprintf(lines[11], "%s%s%s", lines[2], f_6e68_60ef(lines[3]), lines[1]);
    f_6e68_5b66(lines[11]);
    sprintf(lines[11], "%s%s%s", lines[5], f_6e68_60ef(lines[6]), lines[4]);
    f_6e68_5b66(lines[11]);
    sprintf(lines[11], "%s%s%s", lines[8], f_6e68_60ef(lines[9]), lines[7]);
    f_6e68_5b66(lines[11]);
}

void f_6e68_5b66(char far *s)
{
    char pat[20];
    char num[20];

    if (strlen(s) == 0)
        return;
    d_5d9c_9f29 = strlen(s) / 2;
    if (d_5d9c_9f29 == 1)
        strcpy(pat, "07");
    else if (d_5d9c_9f29 == 2)
        strcpy(pat, "0509");
    else if (d_5d9c_9f29 == 3)
        strcpy(pat, "040710");
    else if (d_5d9c_9f29 == 4)
        strcpy(pat, "03060811");
    else
        strcpy(pat, "0305070911");
    d_5d9c_9b74 = 0;
    for (d_5d9c_9f6d = 1; d_5d9c_9f6d <= d_5d9c_9f29 * 2; d_5d9c_9f6d += 2) {
        strcpy(num, f_14d2_0dc8(s, d_5d9c_9f6d, 2));
        if (strcmp(num, "  ") == 0)
            continue;
        d_5d9c_9f51 = atoi(num);
        d_5d9c_9eb7 = d_2f3c_2ce4[0][d_5d9c_9f51];
        d_5d9c_9b08 = (atoi(f_14d2_0dc8(pat, d_5d9c_9f6d, 2)) - 1) * 1.125 + 8.0;
        strcpy(d_1f3e_4c0c, f_1680_03f3(d_5d9c_9f51 + 1));
        d_5d9c_9b73 = d_5d9c_9f51 + 1 == d_5d9c_9ec5;
        f_1680_27aa((d_5d9c_9f81 + 1) * 8, d_5d9c_9b08 * 8.0, d_5d9c_9b73 ? 6 : 1, d_1f3e_4c0c);
        if (d_5d9c_9b73)
            d_5d9c_9b7a = -1;
        d_5d9c_9e99 = d_2f3c_2ce4[1][d_5d9c_9f51];
        f_14d2_073e(0x16);
        if (d_5d9c_9eb7 == 11) {
            f_14d2_0e27(d_5d9c_9f81 * 8 + 5, d_5d9c_9b08 * 8.0 - 8.0, d_5d9c_9f81 * 8 + 5, d_5d9c_9b08 * 8.0 - 16.0);
            f_14d2_0e27(d_5d9c_9f81 * 8 + 5, d_5d9c_9b08 * 8.0 - 16.0, d_5d9c_9f81 * 8 + 3, d_5d9c_9b08 * 8.0 - 14.0);
            f_14d2_0e27(d_5d9c_9f81 * 8 + 5, d_5d9c_9b08 * 8.0 - 16.0, d_5d9c_9f81 * 8 + 7, d_5d9c_9b08 * 8.0 - 14.0);
            f_14d2_0e27(d_5d9c_9f81 * 8 + 5, d_5d9c_9b08 * 8.0 + 2.0, d_5d9c_9f81 * 8 + 5, d_5d9c_9b08 * 8.0 + 10.0);
            f_14d2_0e27(d_5d9c_9f81 * 8 + 5, d_5d9c_9b08 * 8.0 + 10.0, d_5d9c_9f81 * 8 + 3, d_5d9c_9b08 * 8.0 + 8.0);
            f_14d2_0e27(d_5d9c_9f81 * 8 + 5, d_5d9c_9b08 * 8.0 + 10.0, d_5d9c_9f81 * 8 + 7, d_5d9c_9b08 * 8.0 + 8.0);
        } else if (d_5d9c_9e99 == 1) {
            f_14d2_0e27(d_5d9c_9f81 * 8 + 13, d_5d9c_9b08 * 8.0 - 3.0, d_5d9c_9f81 * 8 + 20, d_5d9c_9b08 * 8.0 - 3.0);
            f_14d2_0e27(d_5d9c_9f81 * 8 + 20, d_5d9c_9b08 * 8.0 - 3.0, d_5d9c_9f81 * 8 + 18, d_5d9c_9b08 * 8.0 - 5.0);
            f_14d2_0e27(d_5d9c_9f81 * 8 + 20, d_5d9c_9b08 * 8.0 - 3.0, d_5d9c_9f81 * 8 + 18, d_5d9c_9b08 * 8.0 - 1.0);
        } else if (d_5d9c_9e99 == 2) {
            f_14d2_0e27(d_5d9c_9f81 * 8 - 2, d_5d9c_9b08 * 8.0 - 3.0, d_5d9c_9f81 * 8 - 9, d_5d9c_9b08 * 8.0 - 3.0);
            f_14d2_0e27(d_5d9c_9f81 * 8 - 9, d_5d9c_9b08 * 8.0 - 3.0, d_5d9c_9f81 * 8 - 7, d_5d9c_9b08 * 8.0 - 5.0);
            f_14d2_0e27(d_5d9c_9f81 * 8 - 9, d_5d9c_9b08 * 8.0 - 3.0, d_5d9c_9f81 * 8 - 7, d_5d9c_9b08 * 8.0 - 1.0);
        }
        d_5d9c_9b74 = -1;
    }
    d_5d9c_9f81 = d_5d9c_9f81 + -d_5d9c_9b74 * (d_5d9c_9eb7 == 1 || d_5d9c_9eb7 == 11 ? 3.25 : 4.25);
}

char far *f_6e68_60ef(char far *s)
{
    char t[10];
    char far *p;
    char a[20];
    char b[20];
    char c[20];
    char big[320];

    p = f_14d2_0d40();
    strcpy(a, "");
    strcpy(b, "");
    strcpy(c, "");
    for (d_5d9c_9f6d = 1; strlen(s) >= d_5d9c_9f6d; d_5d9c_9f6d += 2) {
        strcpy(t, f_14d2_0dc8(s, d_5d9c_9f6d, 2));
        if (strcmp(t, "  ")) {
            switch (d_2f3c_2ce4[2][atoi(t)]) {
            case 0:
                strcat(b, t);
                break;
            case 1:
                strcat(c, t);
                break;
            case 2:
                strcat(a, t);
                break;
            }
        }
    }
    sprintf(p, "%s%s%s", a, b, c);
    switch (strlen(p)) {
    case 2:
        d_2f3c_2ce4[2][atoi(p)] = 0;
        break;
    case 4:
    case 6:
        sprintf(big, "%.2s", p);
        d_2f3c_2ce4[2][atoi(big)] = 2;
        d_2f3c_2ce4[2][atoi(f_14d2_0d75(p, 2))] = 1;
        if (strlen(p) == 6)
            d_2f3c_2ce4[2][atoi(f_14d2_0dc8(p, 3, 2))] = 0;
        break;
    }
    return p;
}

void f_6e68_62d8(int team)
{
    f_a1c3_27e4("Tactics");
    f_1680_150c(0, "", "*Exit|4-4-2|4-2-4|Sweeper|5-3-2|4-3-3|5-2-3|4-5-1|Anchor|");
    d_5d9c_9faf = d_5d9c_9bb9 % 16 + 1;
    d_5d9c_9b72 = -1;
    do {
        if (d_5d9c_9faf > 0) {
            d_5d9c_9e97 = d_5d9c_9bb9 / 16;
            d_5d9c_9e95 = d_5d9c_9bb9 % 16;
            if (d_5d9c_9e95 + 1 != d_5d9c_9faf || d_5d9c_9b72 != 0) {
                f_1680_183d(1, 12, d_5d9c_9faf);
                d_5d9c_9bb9 = d_5d9c_9faf + d_5d9c_9e97 * 16 - 1;
                f_1680_135e(team, d_5d9c_9faf - 1, -1);
                for (d_5d9c_9fa1 = 11; d_5d9c_9fa1 <= 12; d_5d9c_9fa1++)
                    if (d_2f3c_2d0b[team == d_5d9c_9edb][d_5d9c_9fa1] < 2)
                        for (d_5d9c_9f55 = 0; d_5d9c_9f55 <= 2; d_5d9c_9f55++)
                            d_2f3c_2ce4[d_5d9c_9f55][d_5d9c_9fa1] =
                                d_2f3c_2ce4[d_5d9c_9f55][d_5d9c_a035[team == d_5d9c_9edb][d_5d9c_9fa1]];
                if (d_5d9c_9b72 == 0)
                    f_1680_183d((int)d_2f3c_1cf8[d_5d9c_9e95] / 16, (int)d_2f3c_1cf8[d_5d9c_9e95] % 16,
                                d_5d9c_9e95 + 1);
                d_5d9c_9b72 = 0;
            }
        }
        f_1680_18b2(-8);
    } while (d_5d9c_9faf != 0);
}

void f_6e68_6488(int team)
{
    char s[320];

    strcpy(d_1f3e_57c4, "");
    for (d_5d9c_9f4f = 0; d_5d9c_9f4f <= 4; d_5d9c_9f4f++) {
        strcpy(s, d_5471_181c[d_5d9c_9f4f]);
        s[0] = toupper(s[0]);
        strcat(d_1f3e_57c4, s);
        strcat(d_1f3e_57c4, "|");
    }
    f_a1c3_27e4("Playing style");
    sprintf(s, "*Exit|%s", d_1f3e_57c4);
    f_1680_150c(0, "", s);
    d_5d9c_9faf = d_5d9c_9bb9 / 16 + 1;
    d_5d9c_9b72 = -1;
    do {
        if (d_5d9c_9faf > 0) {
            d_5d9c_9e97 = d_5d9c_9bb9 / 16;
            d_5d9c_9e95 = d_5d9c_9bb9 % 16;
            if (d_5d9c_9e97 + 1 != d_5d9c_9faf || d_5d9c_9b72 != 0) {
                f_1680_183d(1, 12, d_5d9c_9faf);
                d_5d9c_9bb9 = (d_5d9c_9faf - 1) * 16 + d_5d9c_9e95;
                if (d_5d9c_9b72 == 0)
                    f_1680_183d((int)d_2f3c_1cf8[d_5d9c_9e97] / 16, (int)d_2f3c_1cf8[d_5d9c_9e97] % 16,
                                d_5d9c_9e97 + 1);
                d_5d9c_9b72 = 0;
            }
        }
        f_1680_18b2(-5);
    } while (d_5d9c_9faf != 0);
}
