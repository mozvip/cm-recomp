/* @at 992a:0000 */
/* @data 5d9c:7c6a */
/* @module */

/* Overlay 8: the game's services: printed league tables, club reports and match stats,
 * player ratings, form and the weekly update, performances of the week, fines, bans,
 * injuries, the medical specialist and rehabilitation, takeovers and the board's
 * warnings, international squads, loading and saving the game and the hall of fame, the
 * title picture and palette, the competition tests the other overlays call
 * (f_992a_70a8...), records and new players. */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <mem.h>
#include <bios.h>
#include <fcntl.h>
#include <io.h>
#include <dos.h>
#include <math.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_992a_0000(int div);
void f_992a_0e0e(int n);
void f_992a_0e6d(char far *s);
void f_992a_0f10(int p);
void f_992a_124c(int player);
void f_992a_14f4(int p);
void f_992a_187c(int p);
int f_992a_1d7c(int player);
int f_992a_1de4(int player);
float f_992a_1ea0(int player, int team);
int f_992a_1fd1(int a, int player, int c);
int f_992a_251d(int player, int team, unsigned char pos, char second);
int f_992a_2729(unsigned char pos);
void f_992a_2771(void);
void f_992a_2e73(void);
void f_992a_2fe0(void);
void f_992a_3129(int n);
void f_992a_33ea(int p);
void f_992a_35f9(int p, int a, int b);
void f_992a_38d7(int p);
void f_992a_3a66(int p);
void f_992a_3ef0(int p);
void f_992a_424a(int p);
void f_992a_438f(void);
void f_992a_4ce3(void);
char far *f_992a_5114(int n);
void f_992a_5151(unsigned char far *src, unsigned char far *dst, unsigned n);
void f_992a_518a(unsigned char far *dst, unsigned char far *src, unsigned n);
void f_992a_51d4(void);
void f_992a_5e7e(void);
void f_992a_6ae4(void);
void f_992a_6bab(void);
void f_992a_6c72(char c);
void f_992a_6da2(void);
void f_992a_6f26(char far *s);
char f_992a_700a(int w);
char f_992a_7059(int w);
char f_992a_70a8(int w);
char f_992a_70d2(int w);
char f_992a_7129(int w);
char f_992a_7170(int w);
char f_992a_71db(int w);
char f_992a_723a(int w);
char f_992a_728d(int w);
char f_992a_72e8(int w, int n);
char f_992a_7399(int w, int n);
char f_992a_7430(int w, int n);
char f_992a_74c1(int w, int n);
char f_992a_752d(int w, int n);
char f_992a_75bc(int w, int n);
char f_992a_76bc(int w);
char f_992a_7713(int w);
char f_992a_776a(int w);
char f_992a_77cd(int w, int n);
char f_992a_7831(int x);
char f_992a_7853(int a, int b);
char f_992a_78ca(int x);
int f_992a_78e7(int a, int b);
unsigned char f_992a_79b8(int x);
int f_992a_7a65(int a, int b);
void f_992a_7aeb(int a, int b);
void f_992a_7d4d(int a, int b);
void f_992a_7e35(int n);
void f_992a_0e2c(char far *s);
void f_992a_0e53(char far *s);
void f_992a_0ce6(void);
void f_992a_01cb(int team);
void f_992a_7f03(void);
void f_992a_7f08(void);

int f_1680_0577(int x);
char f_1680_0003(int x);
char far *f_14d2_0d08(char far *s);
char far *f_14d2_0d75(char far *s, unsigned n);
char far *f_14d2_0dc8(char far *s, unsigned i, unsigned n);
void f_14d2_148f(void far *a, void far *b, int n);
void far *f_14d2_16bc(int handle, int page);
char f_67ee_0e0a(int pos, int div);
void f_67ee_52ba(int team, char far names[][94][20], unsigned char far *comp, unsigned char far *week);
long f_88c9_12b3(int p, int n);
long f_88c9_2744(long v);
char far *f_88c9_27e8(long amount);
char far *f_a1c3_213c(int player);
char far *f_a1c3_21cc(int player);
char far *f_a1c3_2243(int player);
char far *f_a1c3_25b0(int player);
extern char near *d_5d9c_08bc[];
extern long d_5d9c_9a4c;
extern long d_5d9c_9a58;
extern int d_5d9c_9bd5;
extern int d_5d9c_9d0b;
extern int d_5d9c_9d97;
extern int d_5d9c_9d99;
extern int d_5d9c_9d9b;
extern int d_5d9c_9e13;
extern int d_5d9c_9f05;
extern int d_5d9c_9f11;
extern int d_5d9c_9f13;
extern int d_5d9c_9f15;
extern int d_5d9c_9f19;
extern int d_5d9c_9f25;
extern int d_5d9c_9f29;
extern int d_5d9c_9f69;
extern int d_5d9c_9f6d;
extern int d_5d9c_9f91;
extern int d_5d9c_9fa1;
extern int d_5d9c_9fa7;
extern int d_5d9c_9fab;
extern char (far *d_5d9c_9fc2)[82][391];
extern char far *d_5d9c_a044;
extern int d_5d9c_a336;
extern int d_5d9c_a352;
extern char far d_1f3e_350e[];
extern char far d_1f3e_3fe0[];
extern char far d_1f3e_49e6[];
extern char far d_1f3e_49ee[];
extern unsigned char far d_1f3e_49f2[][13][2];
extern char far d_1f3e_4a26[][13];
extern char far d_1f3e_5166[];
extern char far d_1f3e_5396[];
extern char far d_1f3e_5544[];
extern char far d_1f3e_5634[];
extern char far d_1f3e_9118[];
extern char far d_1f3e_a50a[];
extern int far d_2f3c_85f7[];
extern int far d_2f3c_bb27[];
extern int far d_2f3c_d5bf[];
extern int far d_2f3c_e30b[];
extern unsigned char huge d_3e42_0000[][1702];
extern unsigned char huge d_483b_0000[][1702];
extern int far d_483b_a0ba[];
extern unsigned char far d_483b_9fb6[][20];
extern char far * far d_5471_0000[];
extern char far * far d_5471_0a70[];
extern int far d_5739_1d2a[][2][94];
void f_a1c3_27e4(char far *title);
void f_14d2_0722(int c);
void f_14d2_075a(int x1, int y1, int x2, int y2);
void f_14d2_073e(int c);
void f_14d2_07af(int x1, int y1, int x2, int y2);
void f_1680_2d78(float x, float y, int colour, char far *s);
char f_1680_014a(int a, int b);
extern int d_5d9c_a356;
extern char far *d_5d9c_9fca;
extern int d_5d9c_9f67;
extern int d_5d9c_9f3d;
extern int d_5d9c_9eb7;
extern int d_5d9c_9e27;
extern int d_5d9c_9ee5;
extern int d_5d9c_9ee7;
extern int d_5d9c_9d71;
extern int d_5d9c_9d79;
extern int d_5d9c_9d7b;
extern int d_5d9c_9c43;
extern int d_5d9c_9c45;
extern int d_5d9c_9c47;
extern int d_5d9c_9c49;
extern int d_5d9c_9c4b;
extern int d_5d9c_9c4d;
extern int d_5d9c_9c4f;
extern int d_5d9c_9c51;
extern int d_5d9c_9c53;
extern int d_5d9c_9c55;
extern int d_5d9c_9c57;
extern int d_5d9c_9c59;
extern int d_5d9c_9c5b;
extern int d_5d9c_9c5d;
extern int d_5d9c_9c5f;
extern int d_5d9c_9c61;
extern int d_5d9c_9c63;
extern int d_5d9c_9c65;
extern int d_5d9c_9c67;
extern int d_5d9c_9c69;
extern int far d_483b_a372[][26];
extern int far d_483b_b3b2[][2][12];
extern char far d_1f3e_8a72[];
extern char far d_1f3e_5be8[][0x6a6];
extern int far d_2f3c_2d59[][13];
extern unsigned char far d_2f3c_35ad[][3][13];
extern int far d_2f3c_7f93[];
extern unsigned char far d_2f3c_5b8f[];
extern unsigned char far d_5739_023e[];
int f_14d2_0c2a(int n);
float f_14d2_0eef(void);
int f_14d2_13eb(int a, int b);
int f_14d2_144d(int a, int b);
int f_1680_02ed(int x);
void f_88c9_1edc(int player, char flag);
void f_a1c3_5c9f(int team, char far *title, char far *text);
extern int far d_2f3c_7ef3[];
extern int far d_2f3c_c873[];
extern unsigned char far d_2f3c_5905[];
extern unsigned char far d_2f3c_5e19[];
extern unsigned char far d_5471_2c14[][10];
extern int far d_5471_252c[][11][14];
extern char far d_1f3e_4442[];
extern char far d_1f3e_43f2[];
extern char far d_1f3e_44e2[];
extern char far d_1f3e_4212[];
extern char far d_1f3e_382e[];
extern char far d_1f3e_bfa2[];
extern char far d_1f3e_5918[][80];
extern int d_5d9c_9c41;
extern float d_5d9c_9a74;
extern int d_5d9c_9c3f;
extern int d_5d9c_9c3d;
extern int d_5d9c_9c3b;
extern int d_5d9c_9c39;
extern int d_5d9c_9c37;
extern int d_5d9c_9ca3;
extern int d_5d9c_9db5;
extern int d_5d9c_9d07;
extern int d_5d9c_9d4b;
char far *f_14d2_0e72(char far *s);
float f_14d2_13c3(float a, float b);
void f_1680_150c(int n, char far *title, char far *items);
void f_1680_18b2(int last);
char far *f_1680_1a91(int x);
void f_1680_2ea0(float x, float y, int bg, int fg, int w, char far *s);
void f_6e68_0027(int team);
void f_88c9_243e(int line, char far *s);
void f_88c9_249e(char far *s);
char f_88c9_25cc(void);
void f_a1c3_3505(int a);
long f_a1c3_36c4(int team);
void f_a1c3_5e7a(int player, int a, char b);
extern long d_5d9c_99ec;
extern long d_5d9c_9a20;
extern char d_5d9c_9b27;
extern char d_5d9c_9b28;
extern char d_5d9c_9b38;
extern char d_5d9c_9b56;
extern char d_5d9c_9b88;
extern char d_5d9c_9b8a;
extern char d_5d9c_9b92;
extern unsigned char d_5d9c_9b94;
extern int d_5d9c_9c23;
extern int d_5d9c_9c25;
extern int d_5d9c_9c27;
extern int d_5d9c_9c29;
extern int d_5d9c_9c2b;
extern int d_5d9c_9c2d;
extern int d_5d9c_9c2f;
extern int d_5d9c_9c33;
extern int d_5d9c_9cbf;
extern int d_5d9c_9de7;
extern int d_5d9c_9de9;
extern int d_5d9c_9ecf;
extern int d_5d9c_9f5f;
extern int d_5d9c_9faf;
extern long (far *d_5d9c_a01a)[80];
extern int d_5d9c_a032;
extern int d_5d9c_a034;
extern int d_5d9c_a036;
extern int d_5d9c_a038;
extern int d_5d9c_a35c;
extern char far d_1f3e_2b22[];
extern char far d_1f3e_2b23[];
extern char far d_1f3e_378e[];
extern char far d_1f3e_37de[];
extern char far d_1f3e_3f40[];
extern int far d_2f3c_7c73[][80];
extern char far * far d_5471_1770[];
extern unsigned char far d_5739_0000[][82];
float f_1680_0795(int team);
long f_1680_2782(int team);
long f_88c9_2177(int player);
void f_88c9_4cf8(int club, int a);
char far *f_a1c3_229c(int manager, char full);
extern char d_5d9c_9b25;
extern char d_5d9c_9b26;
extern long d_5d9c_99dc;
extern long d_5d9c_99e0;
extern long d_5d9c_99e4;
extern long d_5d9c_99e8;
extern int d_5d9c_9ba1;
extern int d_5d9c_9ba3;
extern int d_5d9c_9dbd;
extern int d_5d9c_9dd5;
extern char far d_1f3e_e0e0[];
extern char far d_1f3e_b8fc[];
extern long far d_2f3c_74f3[][80];
extern int far d_2f3c_addb[];
void f_88c9_24f1(char far *s);
extern int d_5d9c_9f3f;
extern int d_5d9c_9d91;
extern int d_5d9c_9c21;
extern int d_5d9c_9f3b;
extern int d_5d9c_9c1f;
extern int d_5d9c_9c1d;
extern int d_5d9c_a342;
extern int d_5d9c_a340;
extern int d_5d9c_a344;
extern char d_5d9c_9b24;
extern unsigned char d_5d9c_0094[];
extern int (far *d_5d9c_a006)[250];
extern int (far *d_5d9c_a002)[170];
extern int (far *d_5d9c_9ff6)[2][22];
extern char far d_1f3e_d394[];
extern char far d_1f3e_508a[];
extern char far d_1f3e_0ab4[][101];
extern char far d_1f3e_da3a[];
extern int far d_1f33_0000[];
extern float far d_1f36_0000[];
extern char far d_1f3e_0780[][82][5];
extern char far d_1f3e_4fea[][4][20];
extern char far d_1f3e_509e[];
extern unsigned char far d_1f3e_fcb5[][8][5];
extern int far d_1f3e_ff85[][5];
extern unsigned char far d_2f3c_0000[][2][4];
extern int far d_2f3c_0030[][4];
extern long far d_2f3c_0040[];
extern float far d_2f3c_0050[][4];
extern int far d_2f3c_0070[][4];
extern unsigned char far d_2f3c_0080[];
extern int far d_2f3c_029c[][140];
extern unsigned char far d_2f3c_0d8c[][140];
extern int far d_2f3c_1534[];
extern int far d_2f3c_15c0[4][3][2][30];
extern unsigned char far d_2f3c_1b60[];
extern int far d_2f3c_1d94[][16];
extern unsigned char far d_2f3c_2794[][20];
extern int far d_2f3c_27e4[][80];
extern int far d_2f3c_422b[];
extern unsigned char far d_2f3c_5167[];
extern unsigned char far d_5739_142e[];
extern unsigned char far d_5739_57ea[][140];
extern char near *d_5d9c_0524[];
extern unsigned long d_5d9c_1d4e;
extern char d_5d9c_9b8d;
extern int d_5d9c_9e87;
extern int d_5d9c_9ee3;
extern int d_5d9c_9ef1;
extern int d_5d9c_9ef3;
extern int d_5d9c_9ef5;
extern int d_5d9c_9ef7;
extern int d_5d9c_9f33;
extern int d_5d9c_9f35;
extern int d_5d9c_9f85;
extern int d_5d9c_9f87;
extern int d_5d9c_9f89;
extern int d_5d9c_9f8b;
extern int d_5d9c_9f8d;
extern int d_5d9c_9f8f;
extern int d_5d9c_9f97;
extern int d_5d9c_9f99;
extern int d_5d9c_9f9b;
extern int d_5d9c_9f9d;
extern int d_5d9c_9f9f;
extern int d_5d9c_9fa3;
extern int d_5d9c_9fa5;
extern char (far *d_5d9c_9fb2)[151];
extern char (far *d_5d9c_9fb6)[151];
extern char (far *d_5d9c_9fba)[151];
extern int (far *d_5d9c_9fea)[16][8];
extern int d_5d9c_9fee[];
extern float far *d_5d9c_9ffa;
extern long (far *d_5d9c_9ffe)[140];
extern char d_5d9c_a01e[];
extern char d_5d9c_a01f;
extern char d_5d9c_a020;
extern char d_5d9c_a021;
extern unsigned char d_5d9c_a022[];
extern char d_5d9c_a023;
extern char d_5d9c_a024;
extern char d_5d9c_a025;
extern char far *d_5d9c_a050;
extern long far *d_5d9c_a054;
extern long far *d_5d9c_a058;
extern int d_5d9c_a064;
extern int d_5d9c_a066;
extern int d_5d9c_a068;
extern int d_5d9c_a06a;
extern int d_5d9c_a330;
extern int d_5d9c_a332;
extern int d_5d9c_a334;
extern int d_5d9c_a346;
extern int d_5d9c_a348;
extern int d_5d9c_a34a;
extern int d_5d9c_a35e;
extern int d_5d9c_a360;
void f_14d2_0b5d(FILE *fp, char far *buf);
extern char far *d_5d9c_9fd2;
extern int d_5d9c_9fad;
extern long far d_2f3c_1d44[];
extern int d_5d9c_a34e;
void f_14d2_0b91(FILE *fp, char far *s);
void f_14d2_0059(char far *src);
void f_1b05_0002(char far *src, char far *dst);
void f_1b05_014e(char far *buf, unsigned size);
extern char far d_1f3e_2bea[];
extern char d_5d9c_a31e;
extern int d_5d9c_a364;
extern char far *d_5d9c_a366;
extern char d_5d9c_9b1a;
extern char d_5d9c_9b23;
extern int far d_5d9c_2c94[];
extern int d_5d9c_9e67;
extern int d_5d9c_9dd7;
void f_a1c3_290e(float x, int w, char far *prompt);
extern int d_5d9c_9c1b;
extern unsigned char d_5d9c_9b9d;
extern int d_5d9c_9eeb;
extern char far d_1f3e_4fcc[];


void f_992a_0000(int div)
{
    char num[20];
    char line[320];

    f_992a_0e2c("______________________________________________________________________________\r\n");
    f_992a_0e0e(2);
    sprintf(line, "    WEEK %d/SEASON %d\r\n", f_1680_0577(d_5d9c_9fab), d_5d9c_9fa7);
    f_992a_0e2c(line);
    f_992a_0e0e(2);
    sprintf(line, "                                  DIVISION %s\r", f_14d2_0d08(f_a1c3_25b0(div + 1)));
    f_992a_0e2c(line);
    f_992a_0e0e(2);
    f_992a_0e2c("                         PL   W   D   L   F   A   W   D   L   F   A  PT\r\n");
    f_992a_0e0e(2);
    for (d_5d9c_9f69 = 0; d_5d9c_9f69 <= 19; d_5d9c_9f69++) {
        strcpy(d_1f3e_5634, d_5d9c_08bc[d_483b_9fb6[0][d_5d9c_9f69]]);
        d_1f3e_5634[14] = 0;
        d_5d9c_a044 = f_14d2_16bc(d_5d9c_a336, 0);
        sprintf(line, "       %s %-14.14s", d_5d9c_a044 + d_5d9c_9f69 * 2, d_1f3e_5634);
        for (d_5d9c_9fa1 = 1; d_5d9c_9fa1 <= 12; d_5d9c_9fa1++) {
            sprintf(num, "%4d", d_483b_9fb6[d_5d9c_9fa1][d_5d9c_9f69]);
            strcat(line, num);
        }
        f_992a_0e53(line);
        if (f_67ee_0e0a(d_5d9c_9f69, div))
            f_992a_0e2c("         --------------------------------------------------------------\r\n");
    }
    _bios_printer(0, 0, 12);
}

void f_992a_01cb(int team)
{
    int n;
    int i;
    int col;
    char sep[10];
    unsigned char far *p;
    char home;
    int k;
    FILE *fp;
    long gate;
    char names[4][94][20];
    char line[320];
    char scorers[80];
    unsigned char comp[94];
    unsigned char week[94];
    int list[100];
    char buf[300];

    n = 0;
    for (d_5d9c_9f91 = 0; d_5d9c_9f91 <= 1699; d_5d9c_9f91++)
        if (d_483b_0000[18][d_5d9c_9f91] == team
            || d_1f3e_a50a[d_5d9c_9f91] && d_3e42_0000[10][d_5d9c_9f91] == team)
            list[n++] = d_5d9c_9f91;
    for (d_5d9c_9f6d = 0; n - 2 >= d_5d9c_9f6d; d_5d9c_9f6d++)
        for (d_5d9c_9fa1 = d_5d9c_9f6d + 1; n - 1 >= d_5d9c_9fa1; d_5d9c_9fa1++)
            if (strcmp(f_a1c3_2243(list[d_5d9c_9f6d]), f_a1c3_2243(list[d_5d9c_9fa1])) > 0)
                f_14d2_148f((void *)&list[d_5d9c_9f6d], (void *)&list[d_5d9c_9fa1], 2);
    f_992a_0e53("______________________________________________________________________________");
    f_992a_0e0e(2);
    sprintf(line, "    %s PLAYERS SEASON %d", f_14d2_0d08(d_5d9c_08bc[team]), d_5d9c_9fa7);
    f_992a_0e53(line);
    f_992a_0e0e(2);
    f_992a_0e53("         PLAYER                  APPS   GLS    AV R     VALUE");
    f_992a_0e0e(2);
    for (d_5d9c_9f6d = 0; n - 1 >= d_5d9c_9f6d; d_5d9c_9f6d++) {
        d_5d9c_9f91 = list[d_5d9c_9f6d];
        sprintf(buf, "%s, %s", d_5471_0a70[d_2f3c_e30b[d_5d9c_9f91]], d_5471_0000[d_2f3c_d5bf[d_5d9c_9f91]]);
        if (d_483b_0000[18][d_5d9c_9f91] == team) {
            d_5d9c_9d0b = d_3e42_0000[0][d_5d9c_9f91] - d_3e42_0000[12][d_5d9c_9f91];
            d_5d9c_9d9b = d_3e42_0000[1][d_5d9c_9f91] - d_3e42_0000[13][d_5d9c_9f91];
            d_5d9c_9bd5 = d_2f3c_85f7[d_5d9c_9f91] - d_2f3c_bb27[d_5d9c_9f91];
        } else {
            d_5d9c_9d0b = d_3e42_0000[12][d_5d9c_9f91];
            d_5d9c_9d9b = d_3e42_0000[13][d_5d9c_9f91];
            d_5d9c_9bd5 = d_2f3c_bb27[d_5d9c_9f91];
        }
        sprintf(line, "%-26.26s%-6d%-6d", buf, d_5d9c_9d0b, d_5d9c_9d9b);
        sprintf(buf, "%s%6d", line, d_5d9c_9d9b);
        if (d_5d9c_9d0b > 0)
            sprintf(d_1f3e_5396, "%3.2f", (float)d_5d9c_9bd5 / d_5d9c_9d0b * 100 / 100);
        else
            strcpy(d_1f3e_5396, "----");
        sprintf(buf, "%s%-9.9s", line, d_1f3e_5396);
        d_5d9c_9a58 = f_88c9_12b3(d_5d9c_9f91, d_483b_0000[18][d_5d9c_9f91]);
        if (d_1f3e_9118[d_5d9c_9f91] == 0 && f_1680_0003(d_483b_0000[18][d_5d9c_9f91]) == 0)
            d_5d9c_9a58 = f_88c9_2744(d_5d9c_9a58);
        strcpy(d_1f3e_350e, f_88c9_27e8(d_5d9c_9a58));
        strcat(buf, d_1f3e_350e);
        f_992a_0e2c("         ");
        f_992a_0e53(buf);
    }
    f_992a_0e0e(2);
    f_992a_0e53("         TRANSFERS");
    f_992a_0e0e(1);
    d_5d9c_9fc2 = f_14d2_16bc(d_5d9c_a352, 0);
    for (i = 5; i >= 4; i--) {
        if (i == 5)
            f_992a_0e53("         INCOMING                FROM                   FEE");
        else
            f_992a_0e53("         OUTGOING                TO                     FEE");
        f_992a_0e0e(1);
        strcpy(d_1f3e_5544, d_5d9c_9fc2[i - 4][team]);
        if (strlen(d_1f3e_5544) > 0) {
            for (k = 1; k <= strlen(d_1f3e_5544); k += 13) {
                strcpy(d_1f3e_5166, f_14d2_0dc8(d_1f3e_5544, k, 13));
                strcpy(line, d_1f3e_5166);
                line[4] = 0;
                d_5d9c_9f91 = atol(line);
                d_5d9c_9a4c = atol(f_14d2_0dc8(d_1f3e_5166, 5, 7));
                if (d_5d9c_9a4c > 0)
                    sprintf(d_1f3e_3fe0, "%ld", d_5d9c_9a4c);
                else
                    strcpy(d_1f3e_3fe0, "FREE");
                d_5d9c_9f05 = atol(f_14d2_0d75(d_1f3e_5166, 2));
                sprintf(buf, "         %-24.24s%-23.23s%s", f_a1c3_213c(d_5d9c_9f91),
                        (char far *)d_5d9c_08bc[d_5d9c_9f05], d_1f3e_3fe0);
                f_992a_0e53(buf);
            }
        } else
            f_992a_0e53("         None");
        f_992a_0e0e(1);
    }
    _bios_printer(0, 0, 12);
    f_992a_0e53("______________________________________________________________________________");
    f_992a_0e0e(2);
    sprintf("%s FIXTURES/RESULTS SEASON &d", f_14d2_0d08(d_5d9c_08bc[team]), d_5d9c_9fa7);
    f_992a_0e0e(2);
    f_992a_0e53("COMP  OPPONENTS    VEN SCORE GATE   SCORERS");
    f_992a_0e0e(2);
    f_67ee_52ba(team, names, comp, week);
    for (d_5d9c_9f19 = 0; d_5d9c_9f25 - 1 >= d_5d9c_9f19; d_5d9c_9f19++) {
        strcpy(line, names[0][d_5d9c_9f19] + 2);
        sprintf(buf, " %s   %-13.13s(%s)  ", f_14d2_0d08(line), names[1][d_5d9c_9f19], names[2][d_5d9c_9f19]);
        f_992a_0e2c(buf);
        if (week[d_5d9c_9f19] < d_5d9c_9fab) {
            d_5d9c_9f15 = week[d_5d9c_9f19] - 1;
            d_5d9c_9f13 = comp[d_5d9c_9f15];
            d_5d9c_9f11 = d_483b_a0ba[d_5d9c_9f15] + d_5d9c_9f13;
            home = d_5739_1d2a[d_5d9c_9f13][0][d_5d9c_9f15] / 32 == team;
            fp = fopen("matchfax", "rb");
            fseek(fp, (long)(d_5d9c_9f11 - 1) * 149, 0);
            fread(d_1f3e_49e6, 1, 149, fp);
            fclose(fp);
            if (d_1f3e_49e6[4] == 'Z' && d_1f3e_49e6[5] == 'Z') {
                d_5d9c_9d99 = d_1f3e_49e6[2];
                d_5d9c_9d97 = d_1f3e_49e6[3];
            } else {
                d_5d9c_9d99 = d_1f3e_49e6[4];
                d_5d9c_9d97 = d_1f3e_49e6[5];
            }
            if (home == 0)
                f_14d2_148f(&d_5d9c_9d99, &d_5d9c_9d97, 2);
            sprintf(line, "%d-%d", d_5d9c_9d99, d_5d9c_9d97);
            memcpy(&gate, d_1f3e_49ee, 4);
            sprintf(buf, "%-5.5s%-7ld", line, gate);
            f_992a_0e2c(buf);
            if (d_5d9c_9d99 > 0) {
                d_5d9c_9f29 = 0;
                col = 38;
                for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 12; d_5d9c_9fa1++) {
                    if (home) {
                        p = d_1f3e_49f2[0][d_5d9c_9fa1];
                        d_5d9c_9f91 = p[0] << 8 | p[1];
                        d_5d9c_9e13 = d_1f3e_4a26[0][d_5d9c_9fa1];
                    } else {
                        p = d_1f3e_49f2[1][d_5d9c_9fa1];
                        d_5d9c_9f91 = p[0] << 8 | p[1];
                        d_5d9c_9e13 = d_1f3e_4a26[1][d_5d9c_9fa1];
                    }
                    if (d_5d9c_9e13 > 0) {
                        if (d_5d9c_9f29 > 0)
                            strcpy(sep, ",");
                        else
                            strcpy(sep, "");
                        strcpy(scorers, sep);
                        strcat(scorers, f_a1c3_21cc(d_5d9c_9f91));
                        if (d_5d9c_9e13 > 1) {
                            sprintf(line, " %d", d_5d9c_9e13);
                            strcat(scorers, line);
                        }
                        if (strlen(scorers) > col) {
                            if (sep[0]) {
                                f_992a_0e53(sep);
                                strcpy(scorers, scorers + 1);
                            } else
                                f_992a_0e0e(1);
                            f_992a_0e2c("                                    ");
                            col = 38;
                        }
                        f_992a_0e2c(scorers);
                        col = col - strlen(scorers);
                        d_5d9c_9f29++;
                    }
                }
            }
        }
        f_992a_0e0e(1);
    }
    _bios_printer(0, 0, 12);
}

/* print the match stats to the printer */
void f_992a_0ce6(void)
{
    char buf[320];
    unsigned i;

    f_992a_0e2c("______________________________________________________________________________\r\n");
    f_992a_0e0e(2);
    sprintf(buf, "MATCH STATS SEASON %d", d_5d9c_9fa7);
    f_992a_0e2c(buf);
    f_992a_0e0e(2);
    d_5d9c_9fca = f_14d2_16bc(d_5d9c_a356, 0);
    for (i = 0; i <= 19; i++) {
        sprintf(buf, "         %-31.31s%s", d_5d9c_9fca + i * 80, d_5d9c_9fca + i * 80 + 1600);
        f_992a_0e53(buf);
        switch (i) {
        case 0:
        case 1:
        case 14:
        case 18:
            f_992a_0e0e(1);
            break;
        case 12:
            sprintf(buf, "         ---------------------------    ---------------------------");
            f_992a_0e53(buf);
            break;
        }
    }
    _bios_printer(0, 0, 12);
}

/* print n new lines */
void f_992a_0e0e(int n)
{
    int i;

    for (i = 1; i <= n; i++)
        f_992a_0e2c("\r\n");
}

/* print a string */
void f_992a_0e2c(char far *s)
{
    while (*s != 0)
        _bios_printer(0, 0, *s++);
}

/* print a line */
void f_992a_0e53(char far *s)
{
    f_992a_0e2c(s);
    f_992a_0e0e(1);
}

/* a message box */
void f_992a_0e6d(char far *s)
{
    f_a1c3_27e4("");
    f_14d2_0722(16);
    f_14d2_075a(20, 121, 308, 89);
    f_14d2_0722(31);
    f_14d2_075a(16, 117, 304, 85);
    f_14d2_073e(19);
    f_14d2_07af(16, 117, 304, 85);
    f_1680_2d78(-1.0, 12.5, 1, s);
}

void f_992a_0f10(int p)
{
    d_5d9c_9c65 = p;
    if (d_1f3e_8a72[d_5d9c_9c65] != 0) {
        d_5d9c_9f67 = d_483b_0000[18][d_5d9c_9c65];
        d_5d9c_9c61 = d_5d9c_9c63 = f_992a_1d7c(d_5d9c_9c65);
        d_1f3e_8a72[d_5d9c_9c65] = 0;
    again:
        d_2f3c_2d59[d_5d9c_9f67][d_5d9c_9c61] = 1700;
        d_5d9c_9c5f = -5000;
        d_5d9c_9c5d = -1;
        d_5d9c_9c5b = -1;
        for (d_5d9c_9f3d = 0; d_5d9c_9f3d <= d_5739_023e[d_5d9c_9f67] - 1; d_5d9c_9f3d++) {
            d_5d9c_9c59 = d_483b_a372[d_5d9c_9f67][d_5d9c_9f3d];
            if (d_483b_0000[20][d_5d9c_9c59] == 0) {
                d_5d9c_9eb7 = d_2f3c_35ad[d_5d9c_9f67][0][d_5d9c_9c61];
                d_5d9c_9c57 = f_992a_1fd1(d_5d9c_9eb7, d_5d9c_9c59, d_2f3c_5b8f[d_2f3c_7f93[d_5d9c_9f67]] / 16);
                d_5d9c_9c57 = (long)d_5d9c_9c57 * d_483b_0000[15][d_5d9c_9c59]
                              * f_992a_1ea0(d_5d9c_9c59, d_5d9c_9f67) / 17000.0;
                if (d_5d9c_9c57 > d_5d9c_9c5f) {
                    if (d_1f3e_8a72[d_5d9c_9c59] != 0) {
                        d_5d9c_9c63 = f_992a_1d7c(d_5d9c_9c59);
                        if ((d_5d9c_9c61 < 11 && d_5d9c_9c63 < 11) || (d_5d9c_9c61 > 10 && d_5d9c_9c63 > 10)
                            || (d_5d9c_9c63 > 10 && d_5d9c_9c61 < 11)) {
                            d_5d9c_9e27 = f_992a_1fd1(d_2f3c_35ad[d_5d9c_9f67][0][d_5d9c_9c63], d_5d9c_9c59,
                                                      d_2f3c_5b8f[d_2f3c_7f93[d_5d9c_9f67]] / 16);
                            d_5d9c_9e27 = (long)d_5d9c_9e27 * d_483b_0000[15][d_5d9c_9c59]
                                          * f_992a_1ea0(d_5d9c_9c59, d_5d9c_9f67) / 17000.0;
                            if (d_5d9c_9c57 > d_5d9c_9e27 || (d_5d9c_9c63 > 10 && d_5d9c_9c61 < 11)) {
                                d_5d9c_9c5f = d_5d9c_9c57;
                                d_5d9c_9c5d = d_5d9c_9c59;
                                d_5d9c_9c5b = d_5d9c_9c63;
                            }
                        }
                    }
                    if (d_1f3e_8a72[d_5d9c_9c59] == 0) {
                        d_5d9c_9c5f = d_5d9c_9c57;
                        d_5d9c_9c5d = d_5d9c_9c59;
                        d_5d9c_9c5b = -1;
                    }
                }
            }
        }
        d_5d9c_9c65 = d_5d9c_9c5d;
        d_2f3c_2d59[d_5d9c_9f67][d_5d9c_9c61] = d_5d9c_9c65;
        d_1f3e_8a72[d_5d9c_9c65] = -1;
        if (d_5d9c_9c5b > -1) {
            d_5d9c_9c61 = d_5d9c_9c5b;
            goto again;
        }
    }
}

void f_992a_124c(int player)
{
    if (d_1f3e_8a72[player] == 0) {
        d_5d9c_9f67 = d_483b_0000[18][player];
    again:
        d_5d9c_9c55 = -1;
        d_5d9c_9c53 = -5000;
        if (d_1f3e_5be8[0][player] != 0) {
            d_5d9c_9ee7 = 0;
            d_5d9c_9ee5 = 0;
        } else {
            d_5d9c_9ee7 = 1;
            d_5d9c_9ee5 = 12;
        }
        for (d_5d9c_9fa1 = d_5d9c_9ee7; d_5d9c_9fa1 <= d_5d9c_9ee5; d_5d9c_9fa1++) {
            d_5d9c_9c69 = d_2f3c_2d59[d_5d9c_9f67][d_5d9c_9fa1];
            d_5d9c_9d7b = f_992a_1fd1(d_2f3c_35ad[d_5d9c_9f67][0][d_5d9c_9fa1], d_5d9c_9c69,
                                      d_2f3c_5b8f[d_2f3c_7f93[d_5d9c_9f67]] / 16);
            d_5d9c_9d7b = (long)d_5d9c_9d7b * d_483b_0000[15][d_5d9c_9c69]
                          * f_992a_1ea0(d_5d9c_9c69, d_5d9c_9f67) / 17000.0;
            d_5d9c_9d79 = f_992a_1fd1(d_2f3c_35ad[d_5d9c_9f67][0][d_5d9c_9fa1], player,
                                      d_2f3c_5b8f[d_2f3c_7f93[d_5d9c_9f67]] / 16);
            d_5d9c_9d79 = (long)d_5d9c_9d79 * d_483b_0000[15][player]
                          * f_992a_1ea0(player, d_5d9c_9f67) / 17000.0;
            if (d_5d9c_9d79 > d_5d9c_9d7b && d_5d9c_9d79 - d_5d9c_9d7b > d_5d9c_9c53
                && (d_5d9c_9fa1 < 11 || (d_5d9c_9fa1 > 10 && d_5d9c_9c55 == -1))) {
                d_5d9c_9c53 = d_5d9c_9d79 - d_5d9c_9d7b;
                d_5d9c_9c55 = d_5d9c_9fa1;
            }
        }
        if (d_5d9c_9c55 != -1) {
            d_1f3e_8a72[player] = -1;
            d_1f3e_8a72[d_2f3c_2d59[d_5d9c_9f67][d_5d9c_9c55]] = 0;
            d_5d9c_9c51 = d_2f3c_2d59[d_5d9c_9f67][d_5d9c_9c55];
            d_2f3c_2d59[d_5d9c_9f67][d_5d9c_9c55] = player;
            player = d_5d9c_9c51;
            if (d_5d9c_9c55 < 12)
                goto again;
        }
    }
}

void f_992a_14f4(int p)
{
    d_5d9c_9c65 = p;
    if (d_483b_0000[23][d_5d9c_9c65] != 3) {
        d_5d9c_9f67 = d_483b_0000[18][d_5d9c_9c65];
        d_5d9c_9c61 = d_5d9c_9c63 = f_992a_1de4(d_5d9c_9c65);
        d_5d9c_9c4f = d_5d9c_9c4d;
        d_483b_0000[23][d_5d9c_9c65] = 3;
    again:
        d_5d9c_9c67 = 1700;
        d_483b_b3b2[d_5d9c_9f67][d_5d9c_9c4f][d_5d9c_9c61] = d_5d9c_9c67;
        d_5d9c_9c5f = -5000;
        d_5d9c_9c5d = -1;
        for (d_5d9c_9f3d = 0; d_5d9c_9f3d <= d_5739_023e[d_5d9c_9f67] - 1; d_5d9c_9f3d++) {
            d_5d9c_9c59 = d_483b_a372[d_5d9c_9f67][d_5d9c_9f3d];
            d_5d9c_9eb7 = d_2f3c_35ad[d_5d9c_9f67][0][d_5d9c_9c61];
            if (f_1680_014a(d_5d9c_9c59, d_5d9c_9eb7)) {
                d_5d9c_9c57 = f_992a_251d(d_5d9c_9c59, d_5d9c_9f67, d_5d9c_9eb7, d_5d9c_9c4f == 1 ? 1 : 0)
                              * f_992a_1ea0(d_5d9c_9c59, d_5d9c_9f67);
                if (d_5d9c_9c57 > d_5d9c_9c5f) {
                    if ((d_5d9c_9c4f == 0 && d_483b_0000[23][d_5d9c_9c59] < 3)
                        || (d_5d9c_9c4f == 1 && d_483b_0000[23][d_5d9c_9c59] == 2)) {
                        d_5d9c_9c63 = f_992a_1de4(d_5d9c_9c59);
                        d_5d9c_9e27 = f_992a_251d(d_5d9c_9c59, d_5d9c_9f67, d_2f3c_35ad[d_5d9c_9f67][0][d_5d9c_9c63],
                                                  d_5d9c_9c4f == 1 ? 1 : 0)
                                      * f_992a_1ea0(d_5d9c_9c59, d_5d9c_9f67);
                        if (d_5d9c_9c57 > d_5d9c_9e27 || (d_5d9c_9c4f == 0 && d_5d9c_9c4d == 1)) {
                            d_5d9c_9c5f = d_5d9c_9c57;
                            d_5d9c_9c5d = d_5d9c_9c59;
                            d_5d9c_9c4b = d_5d9c_9c63;
                            d_5d9c_9c49 = d_5d9c_9c4d;
                        }
                    }
                }
                if (d_5d9c_9c57 > d_5d9c_9c5f && d_483b_0000[23][d_5d9c_9c59] == 3) {
                    d_5d9c_9c5f = d_5d9c_9c57;
                    d_5d9c_9c5d = d_5d9c_9c59;
                    d_5d9c_9c4b = -1;
                    d_5d9c_9c49 = -1;
                }
            }
        }
        if (d_5d9c_9c5d > -1 && d_5d9c_9c5d < 1700) {
            d_5d9c_9c59 = d_5d9c_9c5d;
            d_483b_b3b2[d_5d9c_9f67][d_5d9c_9c4f][d_5d9c_9c61] = d_5d9c_9c59;
            d_483b_0000[23][d_5d9c_9c59] = d_5d9c_9c4f + 1;
            if (d_5d9c_9c4b > -1) {
                d_5d9c_9c61 = d_5d9c_9c4b;
                d_5d9c_9c4f = d_5d9c_9c49;
                goto again;
            }
        } else {
            d_5d9c_9c67 = 1700;
            d_483b_b3b2[d_5d9c_9f67][d_5d9c_9c4f][d_5d9c_9c61] = d_5d9c_9c67;
        }
    }
}

void f_992a_187c(int p)
{
    d_5d9c_9c65 = p;
    if (d_483b_0000[23][d_5d9c_9c65] != 1) {
        d_5d9c_9d71 = 0;
        d_5d9c_9f67 = d_483b_0000[18][d_5d9c_9c65];
    again:
        d_5d9c_9c63 = f_992a_1de4(d_5d9c_9c65);
        if (d_5d9c_9c4d > -1) {
            d_5d9c_9c67 = 1700;
            d_483b_b3b2[d_5d9c_9f67][d_5d9c_9c4d][d_5d9c_9c63] = d_5d9c_9c67;
        }
        d_483b_0000[23][d_5d9c_9c65] = 3;
        d_5d9c_9c47 = -1;
        d_5d9c_9c5f = -5000;
        if (d_1f3e_5be8[0][d_5d9c_9c65] != 0) {
            d_5d9c_9ee7 = 0;
            d_5d9c_9ee5 = 0;
        } else {
            d_5d9c_9ee7 = 1;
            d_5d9c_9ee5 = 10;
        }
        for (d_5d9c_9fa1 = d_5d9c_9ee7; d_5d9c_9fa1 <= d_5d9c_9ee5; d_5d9c_9fa1++) {
            if (f_1680_014a(d_5d9c_9c65, d_2f3c_35ad[d_5d9c_9f67][0][d_5d9c_9fa1])) {
                d_5d9c_9c69 = d_483b_b3b2[d_5d9c_9f67][d_5d9c_9d71][d_5d9c_9fa1];
                d_5d9c_9d7b = f_992a_251d(d_5d9c_9c69, d_5d9c_9f67, d_2f3c_35ad[d_5d9c_9f67][0][d_5d9c_9fa1],
                                          d_5d9c_9d71 == 1 ? 1 : 0)
                              * f_992a_1ea0(d_5d9c_9c69, d_5d9c_9f67);
                d_5d9c_9d79 = f_992a_251d(d_5d9c_9c65, d_5d9c_9f67, d_2f3c_35ad[d_5d9c_9f67][0][d_5d9c_9fa1],
                                          d_5d9c_9d71 == 1 ? 1 : 0)
                              * f_992a_1ea0(d_5d9c_9c65, d_5d9c_9f67);
                if (d_5d9c_9d79 > d_5d9c_9d7b && d_5d9c_9d79 > d_5d9c_9c5f) {
                    d_5d9c_9c5f = d_5d9c_9d79;
                    d_5d9c_9c47 = d_5d9c_9fa1;
                }
            }
        }
        if (d_5d9c_9c47 == -1) {
            if (d_5d9c_9d71 == 0) {
                d_5d9c_9d71 = 1;
                goto again;
            }
        } else {
            d_483b_0000[23][d_5d9c_9c65] = d_5d9c_9d71 + 1;
            d_483b_0000[23][d_483b_b3b2[d_5d9c_9f67][d_5d9c_9d71][d_5d9c_9c47]] = 3;
            d_5d9c_9c51 = d_483b_b3b2[d_5d9c_9f67][d_5d9c_9d71][d_5d9c_9c47];
            d_483b_b3b2[d_5d9c_9f67][d_5d9c_9d71][d_5d9c_9c47] = d_5d9c_9c65;
            d_5d9c_9c65 = d_5d9c_9c51;
            if (d_5d9c_9c65 > -1 && d_5d9c_9c65 < 1700) {
                d_5d9c_9d71 = 0;
                goto again;
            }
        }
        for (d_5d9c_9d71 = 0; d_5d9c_9d71 <= 1; d_5d9c_9d71++) {
            for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 10; d_5d9c_9fa1++) {
                if (d_483b_b3b2[d_5d9c_9f67][d_5d9c_9d71][d_5d9c_9fa1] == 1700) {
                    d_5d9c_9c5f = -5000;
                    d_5d9c_9c45 = 1700;
                    for (d_5d9c_9f3d = 0; d_5d9c_9f3d <= d_5739_023e[d_5d9c_9f67] - 1; d_5d9c_9f3d++) {
                        d_5d9c_9c43 = d_483b_a372[d_5d9c_9f67][d_5d9c_9f3d];
                        if (f_1680_014a(d_5d9c_9c43, d_2f3c_35ad[d_5d9c_9f67][0][d_5d9c_9fa1])
                            && d_483b_0000[23][d_5d9c_9c43] == 3) {
                            d_5d9c_9e27 = f_992a_251d(d_5d9c_9c43, d_5d9c_9f67,
                                                      d_2f3c_35ad[d_5d9c_9f67][0][d_5d9c_9fa1], d_5d9c_9d71 == 1 ? 1 : 0)
                                          * f_992a_1ea0(d_5d9c_9c43, d_5d9c_9f67);
                            if (d_5d9c_9e27 > d_5d9c_9c5f) {
                                d_5d9c_9c5f = d_5d9c_9e27;
                                d_5d9c_9c45 = d_5d9c_9c43;
                            }
                        }
                    }
                    if (d_5d9c_9c45 < 1700) {
                        d_483b_b3b2[d_5d9c_9f67][d_5d9c_9d71][d_5d9c_9fa1] = d_5d9c_9c45;
                        d_483b_0000[23][d_5d9c_9c45] = d_5d9c_9d71 + 1;
                    }
                }
            }
        }
    }
}

int f_992a_1d7c(int player)
{
    d_5d9c_9c63 = -1;
    for (d_5d9c_9c41 = 0; d_5d9c_9c41 <= 12; d_5d9c_9c41++) {
        if (d_2f3c_2d59[d_483b_0000[18][player]][d_5d9c_9c41] == player) {
            d_5d9c_9c63 = d_5d9c_9c41;
            d_5d9c_9c41 = 12;
        }
    }
    return d_5d9c_9c63;
}

int f_992a_1de4(int player)
{
    d_5d9c_9c63 = -1;
    d_5d9c_9c4d = -1;
    for (d_5d9c_9c41 = 0; d_5d9c_9c41 <= 10; d_5d9c_9c41++) {
        if (d_483b_b3b2[d_483b_0000[18][player]][0][d_5d9c_9c41] == player) {
            d_5d9c_9c63 = d_5d9c_9c41;
            d_5d9c_9c4d = 0;
            d_5d9c_9c41 = 10;
        } else if (d_483b_b3b2[d_483b_0000[18][player]][1][d_5d9c_9c41] == player) {
            d_5d9c_9c63 = d_5d9c_9c41;
            d_5d9c_9c4d = 1;
            d_5d9c_9c41 = 10;
        }
    }
    return d_5d9c_9c63;
}

float f_992a_1ea0(int player, int team)
{
    d_5d9c_9a74 = 1 - (d_5471_2c14[d_2f3c_5905[d_2f3c_7f93[team]]][d_3e42_0000[17][player]] - 5) * 0.05;
    if (f_14d2_0c2a(200) > d_2f3c_5e19[d_2f3c_7f93[team]])
        d_5d9c_9a74 += f_14d2_0eef() * 0.25 - f_14d2_0eef() * 0.25;
    if (f_14d2_0c2a(200) < d_2f3c_5e19[d_2f3c_7f93[team]])
        d_5d9c_9a74 += d_483b_0000[12][player] / 100.0;
    return d_5d9c_9a74;
}

int f_992a_1fd1(int a, int player, int c)
{
    d_5d9c_9c3f = d_3e42_0000[16][player] / 16;
    d_5d9c_9c3d = d_3e42_0000[16][player] % 16;
    if (a != d_5d9c_9c3f || c != d_5d9c_9c3d) {
        d_5d9c_9c3b = d_1f3e_5be8[1][player] ? d_5471_252c[c][a][0] * 2 : 0;
        d_5d9c_9c3b += d_1f3e_5be8[2][player] ? d_5471_252c[c][a][1] * 2 : 0;
        d_5d9c_9c3b += d_1f3e_5be8[3][player] ? d_5471_252c[c][a][2] * 2 : 0;
        d_5d9c_9c3b = d_483b_0000[3][player] / 10.0 * d_5471_252c[c][a][4] + d_5d9c_9c3b;
        d_5d9c_9c3b = d_483b_0000[1][player] / 10.0 * d_5471_252c[c][a][6] + d_5d9c_9c3b;
        d_5d9c_9c3b = d_483b_0000[7][player] / 10.0 * d_5471_252c[c][a][8] + d_5d9c_9c3b;
        d_5d9c_9c3b += d_1f3e_5be8[4][player] ? d_5471_252c[c][a][10] * 2 : 0;
        d_5d9c_9c3b += d_1f3e_5be8[6][player] ? d_5471_252c[c][a][12] * 2 : 0;
        d_5d9c_9c3b = d_483b_0000[4][player] / 10.0 * d_5471_252c[c][a][3] + d_5d9c_9c3b;
        d_5d9c_9c3b = d_483b_0000[2][player] / 10.0 * d_5471_252c[c][a][5] + d_5d9c_9c3b;
        d_5d9c_9c3b = d_483b_0000[6][player] / 10.0 * d_5471_252c[c][a][7] + d_5d9c_9c3b;
        d_5d9c_9c3b = d_483b_0000[5][player] / 10.0 * d_5471_252c[c][a][9] + d_5d9c_9c3b;
        d_5d9c_9c3b += d_1f3e_5be8[5][player] ? d_5471_252c[c][a][11] * 2 : 0;
        d_5d9c_9c3b = d_5d9c_9c3b + (d_1f3e_5be8[0][player] ? d_5471_252c[c][a][13] * 1.8 : 0);
        d_3e42_0000[16][player] = a * 16 + c;
        d_2f3c_c873[player] = d_5d9c_9c3b;
    } else {
        d_5d9c_9c3b = d_2f3c_c873[player];
    }
    return d_5d9c_9c3b = (int)d_483b_0000[21][player] / 100.0 * d_5d9c_9c3b;
}

int f_992a_251d(int player, int team, unsigned char pos, char second)
{
    d_5d9c_9db5 = f_992a_1fd1(pos, player, d_2f3c_5b8f[d_2f3c_7f93[team]] / 16);
    d_5d9c_9d07 = (d_3e42_0000[18][player] * (200 - d_2f3c_5e19[d_2f3c_7f93[team]])
                   + d_483b_0000[9][player] * d_2f3c_5e19[d_2f3c_7f93[team]]) / 200;
    if (second == 0)
        d_5d9c_9d4b = f_14d2_13eb(d_483b_0000[15][player], d_483b_0000[0][player]) * 0.075 + d_5d9c_9d07 * 0.025;
    else
        d_5d9c_9d4b = f_14d2_13eb(d_483b_0000[15][player], d_483b_0000[0][player]) * 0.05 + d_5d9c_9d07 * 0.05;
    if (f_992a_2729(pos) >= d_5d9c_9db5)
        d_5d9c_9d4b = (long)d_5d9c_9d4b * d_5d9c_9db5 / f_992a_2729(pos);
    else
        d_5d9c_9d4b = (d_5d9c_9db5 / (f_992a_2729(pos) * 2.0) + 0.5) * d_5d9c_9d4b;
    return d_5d9c_9d4b;
}

int f_992a_2729(unsigned char pos)
{
    switch (pos) {
    case 1:
        d_5d9c_9c39 = 1700;
        break;
    case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10:
        d_5d9c_9c39 = 1400;
        break;
    case 11:
        d_5d9c_9c39 = 1000;
        break;
    }
    return d_5d9c_9c39;
}

void f_992a_2771(void)
{
    char flags[1700];
    char num[320];
    char title[80];
    char text[180];

    memset(flags, 0, 1700);
    if (d_1f3e_4442[0] != 0 && d_5d9c_9fab > 5) {
        for (d_5d9c_9f6d = 1; d_5d9c_9f6d <= strlen(d_1f3e_4442); d_5d9c_9f6d += 4) {
            strncpy(num, &d_1f3e_4442[d_5d9c_9f6d - 1], 4);
            num[4] = 0;
            d_5d9c_9f91 = atol(num);
            d_3e42_0000[2][d_5d9c_9f91] = d_3e42_0000[2][d_5d9c_9f91] + 10;
            if (d_3e42_0000[2][d_5d9c_9f91] % 5 == 1)
                d_3e42_0000[2][d_5d9c_9f91]--;
            d_2f3c_7ef3[d_483b_0000[18][d_5d9c_9f91]] += 10;
            flags[d_5d9c_9f91] = -1;
        }
    }
    if (d_1f3e_43f2[0] != 0 && d_5d9c_9fab > 5) {
        for (d_5d9c_9f6d = 1; d_5d9c_9f6d <= strlen(d_1f3e_43f2); d_5d9c_9f6d += 4) {
            strncpy(num, &d_1f3e_43f2[d_5d9c_9f6d - 1], 4);
            num[4] = 0;
            d_5d9c_9f91 = atol(num);
            if (flags[d_5d9c_9f91] == 0) {
                d_3e42_0000[2][d_5d9c_9f91] = d_3e42_0000[2][d_5d9c_9f91] + 5;
                if (d_3e42_0000[2][d_5d9c_9f91] % 5 == 1)
                    d_3e42_0000[2][d_5d9c_9f91]--;
                d_2f3c_7ef3[d_483b_0000[18][d_5d9c_9f91]] += 5;
            }
        }
    }
    strcpy(d_1f3e_382e, "suffered during the match");
    if (d_1f3e_44e2[0] != 0) {
        for (d_5d9c_9f6d = 1; d_5d9c_9f6d <= strlen(d_1f3e_44e2); d_5d9c_9f6d += 4) {
            strncpy(num, &d_1f3e_44e2[d_5d9c_9f6d - 1], 4);
            num[4] = 0;
            d_5d9c_9f91 = atol(num);
            if (f_1680_02ed(d_483b_0000[18][d_5d9c_9f91]) > 13 && f_14d2_0c2a(3) > 0) {
                f_992a_33ea(d_5d9c_9f91);
                d_483b_0000[20][d_5d9c_9f91] = (int)d_483b_0000[20][d_5d9c_9f91] - (d_483b_0000[20][d_5d9c_9f91] > 0);
            }
        }
    }
    if (d_1f3e_4212[0] != 0) {
        for (d_5d9c_9f6d = 1; d_5d9c_9f6d <= strlen(d_1f3e_4212); d_5d9c_9f6d += 4) {
            strncpy(num, &d_1f3e_4212[d_5d9c_9f6d - 1], 4);
            num[4] = 0;
            d_5d9c_9f91 = atol(num);
            if (f_14d2_0c2a(5) > 0)
                d_483b_0000[15][d_5d9c_9f91] = f_14d2_144d(d_483b_0000[15][d_5d9c_9f91] + f_14d2_0c2a(25),
                                                           d_483b_0000[9][d_5d9c_9f91] + 25);
        }
    }
    for (d_5d9c_9f91 = 0; d_5d9c_9f91 <= 1699; d_5d9c_9f91++) {
        d_5d9c_9f67 = d_483b_0000[18][d_5d9c_9f91];
        if (d_483b_0000[20][d_5d9c_9f91] == 0) {
            d_5d9c_9ca3 = d_3e42_0000[2][d_5d9c_9f91];
            d_5d9c_9c37 = (flags[d_5d9c_9f91] != 0) + (d_5d9c_9ca3 > 0 && d_5d9c_9ca3 % 20 == 0 ? 2 : 0);
            if (d_5d9c_9c37 > 0) {
                if (f_1680_02ed(d_5d9c_9f67) < 14 || d_5d9c_9fab < 5) {
                    d_483b_0000[19][d_5d9c_9f91] = d_5d9c_9c37 + 20;
                    if (f_1680_0003(d_5d9c_9f67)) {
                        sprintf(title, "%s squad news", (char far *)d_5d9c_08bc[d_5d9c_9f67]);
                        sprintf(text, "%s put under delayed suspension, due to bad discipline.",
                                f_a1c3_213c(d_5d9c_9f91));
                        f_a1c3_5c9f(d_5d9c_9f67, title, text);
                    }
                } else {
                    f_992a_35f9(d_5d9c_9f91, 20, d_5d9c_9c37);
                }
                d_1f3e_bfa2[d_5d9c_9f91] = -1;
                if (f_1680_0003(d_5d9c_9f67) == 0 && f_14d2_0c2a(8) == 0)
                    f_88c9_1edc(d_5d9c_9f91, -1);
            }
        } else if (d_483b_0000[19][d_5d9c_9f91] == 20 && d_1f3e_5918[0][d_5d9c_9f67] != 0 && d_5d9c_9fab > 5) {
            d_483b_0000[20][d_5d9c_9f91] = (int)d_483b_0000[20][d_5d9c_9f91] - 1;
            if (d_483b_0000[20][d_5d9c_9f91] == 0)
                f_992a_38d7(d_5d9c_9f91);
        }
    }
}

void f_992a_2e73(void)
{
    char text[320];
    char score[80];

    if (d_5d9c_a032 > -1) {
        f_a1c3_27e4("");
        f_1680_2d78(-1.0, 10.0, 2, "Performance of the week");
        sprintf(d_1f3e_3f40, "%d-%d", abs(d_5d9c_a036), d_5d9c_a038);
        if (d_5d9c_a036 < 0)
            strcat(d_1f3e_3f40, " Pens");
        strcpy(score, d_1f3e_2b22);
        score[1] = 0;
        sprintf(text, "%s : %s v %s (%s)", f_14d2_0e72(f_1680_1a91(d_5d9c_a032)), d_1f3e_3f40,
                f_14d2_0e72(f_1680_1a91(d_5d9c_a034)), score);
        f_1680_2d78(-1.0, 12.0, 6, text);
        strcpy(text, d_1f3e_2b23);
        f_1680_2d78(-1.0, 14.0, 9, text);
        f_a1c3_3505(0);
    }
}

void f_992a_2fe0(void)
{
    char buf[320];

    for (d_5d9c_9f67 = 0; d_5d9c_9f67 <= 79; d_5d9c_9f67++) {
        d_5d9c_9ca3 = d_2f3c_7c73[4][d_5d9c_9f67];
        d_5d9c_9b94 = d_5d9c_9f67 / 20 + 1;
        if (d_5d9c_9b94 * 10 + 120 <= d_5d9c_9ca3 && d_5d9c_9ca3 % 5 == 0) {
            switch (d_5d9c_9b94) {
            case 1: d_5d9c_99ec = f_14d2_0c2a(6) * 5000 + 50000L; break;
            case 2: d_5d9c_99ec = f_14d2_0c2a(6) * 1000 + 25000; break;
            case 3:
            case 4: d_5d9c_99ec = f_14d2_0c2a(11) * 500 + 5000; break;
            }
            sprintf(buf, "%s have been fined %ld for excessive foul play.",
                    (char far *)d_5d9c_08bc[d_5d9c_9f67], d_5d9c_99ec);
            f_a1c3_5c9f(d_5d9c_9f67, "Disciplinary action", buf);
            d_5d9c_a01a = f_14d2_16bc(d_5d9c_a35c, 1);
            d_5d9c_a01a[12][d_5d9c_9f67] += d_5d9c_99ec;
            d_2f3c_7c73[4][d_5d9c_9f67]++;
        }
    }
}

void f_992a_3129(int n)
{
    strcpy(d_1f3e_382e, "suffered during training");
    for (d_5d9c_9c33 = 1; d_5d9c_9c33 <= n; d_5d9c_9c33++) {
        d_5d9c_9f6d = -1;
        d_5d9c_9de9 = 0;
        do {
            do {
                d_5d9c_9eb7 = f_14d2_0c2a(1700);
                d_5d9c_9f67 = d_483b_0000[18][d_5d9c_9eb7];
            } while (d_483b_0000[20][d_5d9c_9eb7] != 0
                     || d_1f3e_5be8[0][d_5d9c_9eb7] != 0 && d_5739_0000[9][d_5d9c_9f67] <= 1
                     || f_1680_02ed(d_5d9c_9f67) <= 14);
            if ((d_5d9c_9de7 = f_14d2_0c2a(d_483b_0000[13][d_5d9c_9eb7] + 10)) > d_5d9c_9f5f
                || d_5d9c_9f6d == -1) {
                d_5d9c_9f6d = d_5d9c_9eb7;
                d_5d9c_9f5f = d_5d9c_9de7;
            }
            d_5d9c_9de9++;
        } while (d_5d9c_9f6d <= -1 || d_5d9c_9de9 < 10);
        f_992a_33ea(d_5d9c_9f6d);
        if (d_5d9c_9b92 == 0) {
            for (d_5d9c_9f19 = 1; d_5d9c_9f19 <= 15; d_5d9c_9f19++) {
                d_5d9c_9f6d = -1;
                d_5d9c_9de9 = 0;
                do {
                    d_5d9c_9eb7 = f_14d2_0c2a(1700);
                    if ((d_5d9c_9de7 = f_14d2_0c2a(d_483b_0000[17][d_5d9c_9eb7] - 6)) < d_5d9c_9cbf
                        || d_5d9c_9f6d == -1) {
                        d_5d9c_9f6d = d_5d9c_9eb7;
                        d_5d9c_9cbf = d_5d9c_9de7;
                    }
                    d_5d9c_9de9++;
                } while (d_5d9c_9de9 < 2 || d_5d9c_9f6d <= -1);
                d_5d9c_9c2f = d_483b_0000[15][d_5d9c_9f6d];
                f_992a_424a(d_5d9c_9f6d);
                if (d_5d9c_9b92 == 0) {
                    if (d_483b_0000[15][d_5d9c_9f6d] < d_5d9c_9c2f && d_1f3e_5be8[7][d_5d9c_9f6d] != 0
                        && f_1680_0003(d_483b_0000[18][d_5d9c_9f6d]) == 0)
                        f_992a_0f10(d_5d9c_9f6d);
                    else if (d_483b_0000[15][d_5d9c_9f6d] > d_5d9c_9c2f && d_483b_0000[20][d_5d9c_9f6d] == 0
                             && f_1680_0003(d_483b_0000[18][d_5d9c_9f6d]) == 0)
                        f_992a_124c(d_5d9c_9f6d);
                }
            }
        }
    }
}

void f_992a_33ea(int p)
{
    d_5d9c_9ecf = f_14d2_0c2a(100) + 1;
    if (d_5d9c_9ecf <= 2) {
        d_5d9c_9c2d = f_14d2_0c2a(4) + 16;
        d_5d9c_9c2b = f_14d2_0c2a(30) + 21;
    } else if (d_5d9c_9ecf <= 10) {
        d_5d9c_9c2d = f_14d2_0c2a(5) + 11;
        d_5d9c_9c2b = f_14d2_0c2a(16) + 5;
    } else if (d_5d9c_9ecf <= 35) {
        d_5d9c_9c2d = f_14d2_0c2a(5) + 6;
        d_5d9c_9c2b = f_14d2_0c2a(2) + 3;
    } else {
        d_5d9c_9c2d = f_14d2_0c2a(6);
        d_5d9c_9c2b = f_14d2_0c2a(2) + 1;
    }
    f_992a_35f9(p, d_5d9c_9c2d, d_5d9c_9c2b);
    d_5d9c_9c29 = d_5d9c_9c2b;
    if (d_5d9c_9c2b >= 10)
        f_992a_3a66(p);
    if (d_5d9c_9c29 >= 8)
        f_992a_3ef0(p);
    if (d_5d9c_9c2b >= 13 && f_14d2_0c2a(3) == 0) {
        d_483b_0000[0][p] = d_483b_0000[0][p] * f_14d2_13c3(f_14d2_0eef(), 0.5);
        if (f_14d2_0c2a(3) == 0)
            d_483b_0000[9][p] = f_14d2_13eb(d_483b_0000[9][p] * f_14d2_13c3(f_14d2_0eef(), 0.5),
                                            d_483b_0000[0][p]);
    }
}

void f_992a_35f9(int p, int a, int b)
{
    char title[120];
    char text[120];

    d_5d9c_9f67 = d_483b_0000[18][p];
    d_5d9c_9b28 = a == 20 ? -1 : 0;
    d_483b_0000[19][p] = a;
    d_483b_0000[20][p] = b;
    d_3e42_0000[2][p] += d_5d9c_9b28 ? 1 : 0;
    d_5739_0000[8][d_5d9c_9f67]++;
    d_5739_0000[9][d_5d9c_9f67] += d_1f3e_5be8[0][p];
    if (d_5d9c_9b92 == 0 && d_5d9c_9b38 == 0) {
        if (f_1680_0003(d_5d9c_9f67) == 0)
            f_992a_0f10(p);
        else if (d_1f3e_5be8[7][p] != 0) {
            d_2f3c_2d59[d_5d9c_9f67][f_992a_1d7c(p)] = 1700;
            d_1f3e_5be8[7][p] = 0;
        }
        if (f_1680_0003(d_5d9c_9f67) != 0) {
            if (d_5d9c_9b28) {
                sprintf(title, "%s squad news", (char far *)d_5d9c_08bc[d_5d9c_9f67]);
                sprintf(text, "%s serves a %d match ban, due to bad discipline.", f_a1c3_213c(p), b);
            } else {
                if (b == 1)
                    strcpy(d_1f3e_37de, "a few days");
                else
                    sprintf(d_1f3e_37de, "about %d weeks", b);
                sprintf(title, "%s squad news", (char far *)d_5d9c_08bc[d_5d9c_9f67]);
                sprintf(text, "%s out for %s with %s %s.", f_a1c3_213c(p), d_1f3e_37de, d_5471_1770[a],
                        d_1f3e_382e);
            }
            f_a1c3_5c9f(d_5d9c_9f67, title, text);
        }
    }
    if (f_14d2_0c2a(d_483b_0000[14][p] + 10) < f_14d2_0c2a(10) && f_14d2_0c2a(3) + 5 < b)
        d_483b_0000[15][p] = f_14d2_13eb(d_483b_0000[15][p] - f_14d2_0c2a(25), 10);
}

void f_992a_38d7(int p)
{
    char msg[180];
    char title[80];
    char text[180];

    d_5d9c_9f67 = d_483b_0000[18][p];
    d_5d9c_9b28 = d_483b_0000[19][p] == 20;
    d_483b_0000[19][p] = 0;
    d_483b_0000[20][p] = 0;
    d_1f3e_5be8[14][p] = 0;
    d_1f3e_5be8[23][p] = -1;
    d_5739_0000[8][d_5d9c_9f67]--;
    d_5739_0000[9][d_5d9c_9f67] -= d_1f3e_5be8[0][p];
    if (d_5d9c_9b38 == 0 && f_1680_0003(d_5d9c_9f67) != 0) {
        if (d_5d9c_9b28)
            strcpy(msg, "returns from his disciplinary ban.");
        else
            sprintf(msg, "resumes training at %d%% match fitness.", d_483b_0000[21][p]);
        sprintf(title, "%s squad news", (char far *)d_5d9c_08bc[d_5d9c_9f67]);
        sprintf(text, "%s %s", f_a1c3_213c(p), msg);
        f_a1c3_5c9f(d_5d9c_9f67, title, text);
    }
}

void f_992a_3a66(int p)
{
    char buf[320];

    d_5d9c_9b27 = 0;
    d_5d9c_9c27 = d_483b_0000[18][p];
    d_5d9c_9a20 = f_14d2_0c2a(11) * 10000 + 100000L;
    if (f_1680_0003(d_5d9c_9c27) != 0 && d_5d9c_9b92 == 0 && d_5d9c_9b38 == 0) {
        d_5d9c_9c25 = f_14d2_0c2a(7);
        switch (d_5d9c_9c25) {
        case 0: strcpy(d_1f3e_378e, "Norway"); break;
        case 1: strcpy(d_1f3e_378e, "Germany"); break;
        case 2: strcpy(d_1f3e_378e, "the USA"); break;
        case 3: strcpy(d_1f3e_378e, "Italy"); break;
        case 4: strcpy(d_1f3e_378e, "Sweden"); break;
        case 5: strcpy(d_1f3e_378e, "Canada"); break;
        case 6: strcpy(d_1f3e_378e, "Holland"); break;
        }
        do {
            d_5d9c_9b56 = 0;
            f_a1c3_27e4("Medical Specialist");
            sprintf(buf, " %s injury ", f_a1c3_2243(p));
            f_1680_2ea0(1.0, 4.0, -(d_5739_0000[2][d_5d9c_9c27] / 16), d_5739_0000[2][d_5d9c_9c27] % 16, 0, buf);
            sprintf(buf, "A top surgeon in %s can operate", d_1f3e_378e);
            f_88c9_243e(7, buf);
            if (d_1f3e_5be8[20][p])
                strcpy(buf, "Cost is covered by insurance");
            else
                sprintf(buf, "It would cost %ld", d_5d9c_9a20);
            f_88c9_243e(9, buf);
            f_1680_150c(12, "", "View Factfile|Last Finances|Accept Offer|Refuse Offer|");
            do {
                d_5d9c_9b8a = -1;
                f_1680_18b2(3);
                d_5d9c_9c23 = d_5d9c_9faf;
                if (d_5d9c_9c23 == 0) {
                    do
                        f_a1c3_5e7a(p, -1, 0);
                    while (!d_5d9c_9b88);
                    d_5d9c_9b88 = 0;
                    d_5d9c_9b56 = -1;
                } else if (d_5d9c_9c23 == 1) {
                    f_6e68_0027(d_5d9c_9c27);
                    d_5d9c_9b56 = -1;
                } else if (d_5d9c_9c23 == 2) {
                    if (f_88c9_25cc()) {
                        if (d_1f3e_5be8[20][p] == 0 && d_5d9c_9a20 > f_a1c3_36c4(d_5d9c_9c27) * 0.5) {
                            f_88c9_249e("The board refuse");
                            d_5d9c_9b8a = 0;
                        } else {
                            sprintf(buf, "%s has the operation", f_a1c3_2243(p));
                            f_88c9_249e(buf);
                            if (f_14d2_0c2a(5) == 0)
                                f_88c9_249e("But it is unsuccessful");
                            else {
                                f_88c9_249e("It is successful");
                                d_5d9c_9b27 = -1;
                            }
                        }
                    } else
                        d_5d9c_9b8a = 0;
                } else if (d_5d9c_9c23 == 3) {
                    if (f_88c9_25cc())
                        f_88c9_249e("The offer is refused");
                    else
                        d_5d9c_9b8a = 0;
                }
            } while (!d_5d9c_9b8a);
        } while (d_5d9c_9b56 != 0);
    } else if (d_1f3e_5be8[20][p] != 0
               || d_483b_0000[23][p] == 1 && f_a1c3_36c4(d_5d9c_9c27) >= d_5d9c_9a20)
        d_5d9c_9b27 = f_14d2_0c2a(5) > 0;
    if (d_5d9c_9b27 != 0) {
        d_483b_0000[20][p] = d_483b_0000[20][p] * ((f_14d2_0c2a(10) + 80) / 100.0);
        if (d_1f3e_5be8[20][p] == 0) {
            d_5d9c_a01a = f_14d2_16bc(d_5d9c_a35c, 1);
            d_5d9c_a01a[13][d_5d9c_9c27] += d_5d9c_9a20;
        }
    } else if (f_14d2_0c2a(4) == 0)
        d_1f3e_5be8[17][p] = -1;
}

void f_992a_3ef0(int p)
{
    char buf[320];

    d_5d9c_9b26 = 0;
    d_5d9c_9c27 = d_483b_0000[18][p];
    d_5d9c_9a20 = (long)(d_5d9c_9c2b + f_14d2_0c2a(3)) * 5000;
    if (f_1680_0003(d_5d9c_9c27) && d_5d9c_9b92 == 0 && d_5d9c_9b38 == 0) {
        do {
            d_5d9c_9b56 = 0;
            f_a1c3_27e4("Rehabilitation");
            sprintf(buf, " %s injury ", f_a1c3_2243(p));
            f_1680_2ea0(1, 4, -(d_5739_0000[2][d_5d9c_9c27] / 16), d_5739_0000[2][d_5d9c_9c27] % 16, 0, buf);
            f_88c9_243e(7, "He could go to Lilleshall to recover");
            if (d_1f3e_e0e0[p])
                strcpy(buf, "Cost is covered by insurance");
            else
                sprintf(buf, "It would cost %ld", d_5d9c_9a20);
            f_88c9_243e(9, buf);
            f_1680_150c(12, "", "View Factfile|Last Finances|Accept Offer|Refuse Offer|");
            do {
                d_5d9c_9b8a = -1;
                f_1680_18b2(3);
                d_5d9c_9c23 = d_5d9c_9faf;
                if (d_5d9c_9c23 == 0) {
                    do
                        f_a1c3_5e7a(p, -1, 0);
                    while (!d_5d9c_9b88);
                    d_5d9c_9b88 = 0;
                    d_5d9c_9b56 = -1;
                } else if (d_5d9c_9c23 == 1) {
                    f_6e68_0027(d_5d9c_9c27);
                    d_5d9c_9b56 = -1;
                } else if (d_5d9c_9c23 == 2) {
                    if (f_88c9_25cc()) {
                        if (d_1f3e_e0e0[p] == 0 && d_5d9c_9a20 > f_a1c3_36c4(d_5d9c_9c27) * 0.5)
                            f_88c9_249e("The board refuse");
                        else {
                            sprintf(buf, "%s sent to Lilleshall", f_a1c3_2243(p));
                            f_88c9_249e(buf);
                            d_5d9c_9b26 = -1;
                            continue;
                        }
                    }
                    d_5d9c_9b8a = 0;
                } else if (d_5d9c_9c23 == 3) {
                    if (f_88c9_25cc())
                        f_88c9_249e("The offer is refused");
                    else
                        d_5d9c_9b8a = 0;
                }
            } while (!d_5d9c_9b8a);
        } while (d_5d9c_9b56);
    } else
        d_5d9c_9b26 = d_1f3e_e0e0[p] || d_483b_0000[23][p] == 1 && f_a1c3_36c4(d_5d9c_9c27) >= d_5d9c_9a20;
    if (d_5d9c_9b26) {
        if (d_1f3e_e0e0[p] == 0) {
            d_5d9c_a01a = f_14d2_16bc(d_5d9c_a35c, 1);
            d_5d9c_a01a[13][d_5d9c_9c27] += d_5d9c_9a20;
        }
        d_1f3e_b8fc[p] = -1;
    }
}

void f_992a_424a(int p)
{
    d_5d9c_9dbd = 50 - (8.5 - d_5739_0000[0][d_483b_0000[18][p]]) * 5;
    if (f_14d2_0c2a(101) < d_5d9c_9dbd)
        d_5d9c_9dd5 = f_14d2_0c2a(25);
    else
        d_5d9c_9dd5 = -f_14d2_0c2a(25);
    d_5d9c_9ba3 = f_14d2_13eb(d_483b_0000[0][p] - 50, 10);
    d_5d9c_9ba1 = f_14d2_144d(d_483b_0000[0][p] + 50, d_483b_0000[9][p] + 25);
    d_483b_0000[15][p] = f_14d2_13eb(f_14d2_144d(d_483b_0000[15][p] + d_5d9c_9dd5, d_5d9c_9ba1), d_5d9c_9ba3);
}

void f_992a_438f(void)
{
    char title[80];
    char text[180];

    for (d_5d9c_9f67 = 0; d_5d9c_9f67 <= 79; d_5d9c_9f67++) {
        d_5d9c_99e8 = f_1680_2782(d_5d9c_9f67) - d_2f3c_74f3[0][d_5d9c_9f67];
        if (d_5d9c_99e8 < 0) {
            d_5d9c_a01a = f_14d2_16bc(d_5d9c_a35c, 1);
            d_5d9c_a01a[3][d_5d9c_9f67] += labs(d_5d9c_99e8) * 0.0005;
            d_5d9c_9b25 = 0;
        } else {
            d_5d9c_a01a = f_14d2_16bc(d_5d9c_a35c, 1);
            d_5d9c_a01a[10][d_5d9c_9f67] += d_5d9c_99e8 * 0.004;
            d_5d9c_9b25 = -1;
        }
        d_5d9c_a01a = f_14d2_16bc(d_5d9c_a35c, 1);
        switch (d_5d9c_9f67 / 20) {
        case 0:
            d_5d9c_99e4 = 15000;
            d_5d9c_a01a[6][d_5d9c_9f67] += f_14d2_0c2a(5000) + 5000;
            d_5d9c_a01a[13][d_5d9c_9f67] += f_14d2_0c2a(5000) + 30000;
            break;
        case 1:
            d_5d9c_99e4 = 5000;
            d_5d9c_a01a[6][d_5d9c_9f67] += f_14d2_0c2a(2500) + 2500;
            d_5d9c_a01a[13][d_5d9c_9f67] += f_14d2_0c2a(5000) + 25000;
            break;
        case 2:
            d_5d9c_99e4 = 2500;
            d_5d9c_a01a[6][d_5d9c_9f67] += f_14d2_0c2a(1250) + 1250;
            d_5d9c_a01a[13][d_5d9c_9f67] += f_14d2_0c2a(5000) + 10000;
            break;
        case 3:
            d_5d9c_99e4 = 1000;
            d_5d9c_a01a[6][d_5d9c_9f67] += f_14d2_0c2a(1250) + 1250;
            d_5d9c_a01a[13][d_5d9c_9f67] += f_14d2_0c2a(5000) + 7500;
            break;
        }
        if (d_5d9c_9fab < 6)
            d_5d9c_a01a[0][d_5d9c_9f67] += d_5739_0000[1][d_5d9c_9f67] / (f_1680_0795(d_5d9c_9f67) * 4) * 30000
                + f_14d2_0c2a(10000) - f_14d2_0c2a(10000);
        else
            d_5d9c_a01a[4][d_5d9c_9f67] += d_5d9c_99e4;
        for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= d_5739_0000[7][d_5d9c_9f67] - 1; d_5d9c_9fa1++) {
            d_5d9c_9f91 = d_483b_a372[d_5d9c_9f67][d_5d9c_9fa1];
            d_5d9c_a01a = f_14d2_16bc(d_5d9c_a35c, 1);
            d_5d9c_a01a[7][d_5d9c_9f67] += d_2f3c_addb[d_5d9c_9f91];
            if (d_1f3e_e0e0[d_5d9c_9f91]) {
                d_5d9c_9a20 = f_88c9_2177(d_5d9c_9f91);
                d_5d9c_a01a = f_14d2_16bc(d_5d9c_a35c, 1);
                d_5d9c_a01a[13][d_5d9c_9f67] += d_5d9c_9a20;
            }
        }
        d_5d9c_a01a = f_14d2_16bc(d_5d9c_a35c, 1);
        d_5d9c_a01a[11][d_5d9c_9f67] += d_5739_0000[1][d_5d9c_9f67] * 200 / (1 << d_5d9c_9f67 / 20);
        d_5d9c_99e0 = 0;
        for (d_5d9c_9f19 = 0; d_5d9c_9f19 <= 13; d_5d9c_9f19++) {
            if (d_5d9c_9f19 <= 6) {
                d_5d9c_a01a = f_14d2_16bc(d_5d9c_a35c, 0);
                d_5d9c_99e0 += d_5d9c_a01a[d_5d9c_9f19][d_5d9c_9f67];
            } else if (d_5d9c_9f19 != 8) {
                d_5d9c_a01a = f_14d2_16bc(d_5d9c_a35c, 0);
                d_5d9c_99e0 -= d_5d9c_a01a[d_5d9c_9f19][d_5d9c_9f67];
            }
        }
        if (d_5d9c_99e0 > 0) {
            d_5d9c_a01a = f_14d2_16bc(d_5d9c_a35c, 1);
            d_5d9c_a01a[8][d_5d9c_9f67] += d_5d9c_99e0 * 0.4;
        }
        for (d_5d9c_9f19 = 0; d_5d9c_9f19 <= 13; d_5d9c_9f19++) {
            d_5d9c_a01a = f_14d2_16bc(d_5d9c_a35c, 0);
            if (d_5d9c_9f19 <= 6)
                d_2f3c_74f3[0][d_5d9c_9f67] += d_5d9c_a01a[d_5d9c_9f19][d_5d9c_9f67];
            else
                d_2f3c_74f3[0][d_5d9c_9f67] -= d_5d9c_a01a[d_5d9c_9f19][d_5d9c_9f67];
        }
        if (f_1680_2782(d_5d9c_9f67) + f_14d2_0c2a(100000) + 250000 < d_5d9c_99e8) {
            switch (d_5d9c_9f67 / 20) {
            case 0:
                d_5d9c_99dc = f_14d2_0c2a(6) * 100000 + 500000;
                break;
            case 1:
                d_5d9c_99dc = f_14d2_0c2a(6) * 50000 + 250000;
                break;
            case 2:
                d_5d9c_99dc = f_14d2_0c2a(6) * 25000 + 125000;
                break;
            case 3:
                d_5d9c_99dc = f_14d2_0c2a(6) * 12500 + 62500;
                break;
            }
            d_5d9c_99dc += d_5d9c_99e8;
            d_5d9c_99dc = d_5d9c_99dc / 10000 * 10000;
            sprintf(title, "%s takeover!", (char far *)d_5d9c_08bc[d_5d9c_9f67]);
            sprintf(text, "%s have been rescued by a %ld takeover deal. ", (char far *)d_5d9c_08bc[d_5d9c_9f67], d_5d9c_99dc);
            f_a1c3_5c9f(d_5d9c_9f67, title, text);
            d_5d9c_a01a = f_14d2_16bc(d_5d9c_a35c, 1);
            d_5d9c_a01a[6][d_5d9c_9f67] += d_5d9c_99dc;
            d_2f3c_74f3[0][d_5d9c_9f67] += d_5d9c_99dc;
            if (d_5739_0000[6][d_5d9c_9f67] < f_14d2_0c2a(31) + 20)
                f_88c9_4cf8(d_5d9c_9f67, 0);
        } else if (f_1680_2782(d_5d9c_9f67) < d_5d9c_99e8) {
            if (f_1680_0003(d_5d9c_9f67))
                f_a1c3_5c9f(d_5d9c_9f67, f_a1c3_229c(d_2f3c_7f93[d_5d9c_9f67], 0),
                    "The club is in severe financial trouble, and you are urged to sell players.");
        } else if (f_1680_2782(d_5d9c_9f67) / 2 < d_5d9c_99e8) {
            if (f_1680_0003(d_5d9c_9f67))
                f_a1c3_5c9f(d_5d9c_9f67, f_a1c3_229c(d_2f3c_7f93[d_5d9c_9f67], 0),
                    "The board is concerned at the club's financial situation.");
        }
        d_5d9c_a01a = f_14d2_16bc(d_5d9c_a35c, 1);
        for (d_5d9c_9f19 = 0; d_5d9c_9f19 <= 13; d_5d9c_9f19++)
            (d_5d9c_a01a + 16)[d_5d9c_9f19][d_5d9c_9f67] = d_5d9c_a01a[d_5d9c_9f19][d_5d9c_9f67];
    }
}

/* the international squads: picks each country's senior and under-21 players */
void f_992a_4ce3(void)
{
    unsigned char far *p;
    char title[80];
    char text[180];
    char u21[20];
    unsigned i;

    f_88c9_24f1("New international squads|have been announced");
    for (d_5d9c_9f91 = 0; d_5d9c_9f91 <= 1699; d_5d9c_9f91++) {
        d_1f3e_d394[d_5d9c_9f91] = 0;
        d_1f3e_da3a[d_5d9c_9f91] = 0;
    }
    for (d_5d9c_9f3f = 0; d_5d9c_9f3f <= 1; d_5d9c_9f3f++) {
        for (d_5d9c_9d91 = 0; d_5d9c_9d91 <= 4; d_5d9c_9d91++) {
            d_5d9c_9c21 = d_5d9c_9d91 > 1 ? 170 : 250;
            p = d_5d9c_0094;
            for (i = 0; i <= 21; i++) {
                d_5d9c_9f3b = *p++;
                d_5d9c_9c1f = -1;
                d_5d9c_9b24 = 0;
                do {
                    for (d_5d9c_9eb7 = 1; d_5d9c_9eb7 <= d_5d9c_9c21; d_5d9c_9eb7++) {
                        if (d_5d9c_9d91 == 0 || d_5d9c_9d91 == 1) {
                            d_5d9c_a006 = f_14d2_16bc(d_5d9c_a342, 0);
                            d_5d9c_9f91 = d_5d9c_a006[d_5d9c_9d91][d_5d9c_9eb7 - 1];
                        } else {
                            d_5d9c_a002 = f_14d2_16bc(d_5d9c_a340, 0);
                            d_5d9c_9f91 = d_5d9c_a002[d_5d9c_9d91 - 2][d_5d9c_9eb7 - 1];
                        }
                        if (d_1f3e_d394[d_5d9c_9f91] == 0 && d_483b_0000[20][d_5d9c_9f91] == 0 &&
                            (d_483b_0000[21][d_5d9c_9f91] > 90 || d_5d9c_9b24 != 0 || d_5d9c_9fab < 8) &&
                            (d_5d9c_9f3f == 0 || (d_5d9c_9f3f == 1 && d_483b_0000[17][d_5d9c_9f91] < 22)) &&
                            (f_1680_014a(d_5d9c_9f91, d_5d9c_9f3b) || (d_5d9c_9b24 != 0 && d_5d9c_9f3b > 1))) {
                            d_5d9c_9e27 = d_483b_0000[0][d_5d9c_9f91] + d_483b_0000[15][d_5d9c_9f91] / 2;
                            if (d_3e42_0000[0][d_5d9c_9f91] > 0)
                                d_5d9c_9e27 += (float)d_2f3c_85f7[d_5d9c_9f91] / d_3e42_0000[0][d_5d9c_9f91] * 40 - 120;
                            if (d_5d9c_9c1f == -1 || d_5d9c_9e27 > d_5d9c_9c1d) {
                                d_5d9c_9c1d = d_5d9c_9e27;
                                d_5d9c_9c1f = d_5d9c_9f91;
                            }
                        }
                    }
                    d_5d9c_9b8a = -1;
                    if (d_5d9c_9c1f == -1 && d_5d9c_9b24 == 0) {
                        d_5d9c_9b24 = -1;
                        d_5d9c_9b8a = 0;
                    }
                } while (!d_5d9c_9b8a);
                d_5d9c_9ff6 = f_14d2_16bc(d_5d9c_a344, 1);
                d_5d9c_9ff6[d_5d9c_9d91][d_5d9c_9f3f][i] = d_5d9c_9c1f;
                if (d_5d9c_9c1f > -1) {
                    d_1f3e_d394[d_5d9c_9c1f] = -1;
                    d_1f3e_da3a[d_5d9c_9c1f] = d_5d9c_9f3f == 1 ? -1 : 0;
                    d_5d9c_9f67 = d_483b_0000[18][d_5d9c_9c1f];
                    if (f_1680_0003(d_5d9c_9f67)) {
                        sprintf(title, "%s squad news", (char far *)d_5d9c_08bc[d_5d9c_9f67]);
                        strcpy(u21, "");
                        if (d_5d9c_9f3f == 1)
                            strcpy(u21, "under-21 ");
                        sprintf(text, "%s has been called up to the %s %ssquad.", f_a1c3_213c(d_5d9c_9c1f),
                                f_992a_5114(d_5d9c_9d91), u21);
                        f_a1c3_5c9f(d_5d9c_9f67, title, text);
                    }
                }
            }
        }
    }
}

/* the name of home country n */
char far *f_992a_5114(int n)
{
    switch (n) {
    case 0: return "England";
    case 1: return "Scotland";
    case 2: return "Ireland";
    case 3: return "N.Ireland";
    default: return "Wales";
    }
}

/* packs n flag bytes into bits, eight to a byte, high bit first */
void f_992a_5151(unsigned char far *src, unsigned char far *dst, unsigned n)
{
    unsigned i, j;
    unsigned char c;

    for (i = 0; i < n; i += 8) {
        for (j = 0; j < 8; j++) {
            c <<= 1;
            if (*src++)
                c |= 1;
        }
        *dst++ = c;
    }
}

/* unpacks n bits into flag bytes (0xff or 0) */
void f_992a_518a(unsigned char far *dst, unsigned char far *src, unsigned n)
{
    unsigned i, j;
    unsigned char c;

    for (i = 0; i < n; i += 8) {
        c = *src++;
        for (j = 0; j < 8; j++) {
            if (c & 0x80)
                *dst = 0xff;
            else
                *dst = 0;
            dst++;
            c <<= 1;
        }
    }
}

/* loads the saved game */
void f_992a_51d4(void)
{
    FILE *fp;
    char buf[5106];

    d_1f3e_508a[0] = 0;
    f_992a_6f26("Ok - Loading Saved Game");
    fp = fopen("savegame", "rb");
    fread(d_1f3e_0ab4, 0x205a, 1, fp);
    fread(d_1f3e_0780, 820, 1, fp);
    d_5d9c_9fc2 = f_14d2_16bc(d_5d9c_a352, 1);
    fread(d_5d9c_9fc2, 0xfa7c, 1, fp);
    d_5d9c_9fba = f_14d2_16bc(d_5d9c_a334, 1);
    fread(d_5d9c_9fba, 4, 1, fp);
    d_5d9c_9fb6 = f_14d2_16bc(d_5d9c_a332, 1);
    fread(d_5d9c_9fb6, 4, 1, fp);
    d_5d9c_9fb2 = f_14d2_16bc(d_5d9c_a330, 1);
    fread(d_5d9c_9fb2, 4, 1, fp);
    fread(d_1f3e_4fea, 160, 1, fp);
    fread(&d_5d9c_0524, 920, 1, fp);
    fread(&d_5d9c_08bc, 164, 1, fp);
    f_992a_7f08();
    fread(buf, 5106, 1, fp);
    f_992a_518a(d_1f3e_5be8, buf, 0x9f90);
    fread(d_483b_0000, 0x9f90, 1, fp);
    fread(d_3e42_0000, 0x9f90, 1, fp);
    fread(d_2f3c_85f7, 27232, 1, fp);
    d_5d9c_a058 = f_14d2_16bc(d_5d9c_a360, 1);
    fread(d_5d9c_a058, 6804, 1, fp);
    fread(buf, 90, 1, fp);
    f_992a_518a(d_1f3e_5918, buf, 720);
    fread(d_5739_0000, 5166, 1, fp);
    fread(d_2f3c_1b60, 140, 1, fp);
    fread(d_5739_142e, 2300, 1, fp);
    fread(d_2f3c_7c73, 1920, 1, fp);
    fread(d_483b_a372, 4160, 1, fp);
    fread(d_2f3c_74f3, 1920, 1, fp);
    fread(d_2f3c_5167, 9100, 1, fp);
    fread(d_2f3c_422b, 3900, 1, fp);
    d_5d9c_a054 = f_14d2_16bc(d_5d9c_a35e, 1);
    fread(d_5d9c_a054, 2600, 1, fp);
    fread(d_2f3c_35ad, 3198, 1, fp);
    fread(d_2f3c_2d59, 2132, 1, fp);
    fread(d_483b_b3b2, 3840, 1, fp);
    fread(d_2f3c_27e4, 1280, 1, fp);
    fread(d_2f3c_2794, 80, 1, fp);
    fread(d_5739_1d2a, 15040, 1, fp);
    fread(d_483b_a0ba, 376, 1, fp);
    d_5d9c_a01a = f_14d2_16bc(d_5d9c_a35c, 1);
    fread(d_5d9c_a01a, 2560, 4, fp);
    fread(d_2f3c_1d94, 2560, 1, fp);
    fread(d_2f3c_15c0, 1440, 1, fp);
    fread(d_5d9c_a050, 4, 1, fp);
    fread(d_1f33_0000, 40, 1, fp);
    fread(d_1f36_0000, 120, 1, fp);
    fread(d_2f3c_1534, 80, 1, fp);
    fread(d_2f3c_0d8c, 1960, 1, fp);
    fread(d_2f3c_029c, 2800, 1, fp);
    d_5d9c_9ffe = f_14d2_16bc(d_5d9c_a34a, 1);
    fread(d_5d9c_9ffe, 560, 4, fp);
    d_5d9c_9ffa = f_14d2_16bc(d_5d9c_a348, 1);
    fread(d_5d9c_9ffa, 140, 4, fp);
    fread(d_2f3c_0070, 16, 1, fp);
    fread(d_2f3c_0050, 32, 1, fp);
    fread(&d_5d9c_9fee, 8, 1, fp);
    fread(d_2f3c_0040, 16, 1, fp);
    d_5d9c_9ff6 = f_14d2_16bc(d_5d9c_a344, 1);
    fread(d_5d9c_9ff6, 220, 2, fp);
    d_5d9c_a006 = f_14d2_16bc(d_5d9c_a342, 1);
    fread(d_5d9c_a006, 500, 2, fp);
    d_5d9c_a002 = f_14d2_16bc(d_5d9c_a340, 1);
    fread(d_5d9c_a002, 510, 2, fp);
    fread(d_2f3c_0030, 16, 1, fp);
    fread(d_2f3c_0000, 48, 1, fp);
    fread(d_1f3e_ff85, 80, 1, fp);
    fread(d_1f3e_fcb5, 240, 1, fp);
    fread(d_2f3c_0080, 540, 1, fp);
    fread(d_5739_57ea, 280, 1, fp);
    d_5d9c_9fea = f_14d2_16bc(d_5d9c_a346, 1);
    fread(d_5d9c_9fea, 384, 2, fp);
    fread(&d_5d9c_9fab, 2, 1, fp);
    fread(&d_5d9c_9f85, 2, 1, fp);
    fread(&d_5d9c_9fa7, 2, 1, fp);
    fread(&d_5d9c_9e87, 2, 1, fp);
    fread(&d_5d9c_9fa5, 2, 1, fp);
    fread(&d_5d9c_9fa3, 2, 1, fp);
    fread(&d_5d9c_9f9f, 2, 1, fp);
    fread(&d_5d9c_9f9d, 2, 1, fp);
    fread(&d_5d9c_9f9b, 2, 1, fp);
    fread(&d_5d9c_9f99, 2, 1, fp);
    fread(&d_5d9c_9f97, 2, 1, fp);
    fread(&d_5d9c_9f8d, 2, 1, fp);
    fread(&d_5d9c_9f8f, 2, 1, fp);
    fread(&d_5d9c_9f35, 2, 1, fp);
    fread(&d_5d9c_9f33, 2, 1, fp);
    fread(&d_5d9c_9f8b, 2, 1, fp);
    fread(&d_5d9c_9f89, 2, 1, fp);
    fread(&d_5d9c_9f87, 2, 1, fp);
    fread(&d_5d9c_a024, 1, 1, fp);
    fread(&d_5d9c_a025, 1, 1, fp);
    fread(&d_5d9c_a022, 1, 1, fp);
    fread(&d_5d9c_a023, 1, 1, fp);
    fread(&d_5d9c_9ee3, 2, 1, fp);
    fread(&d_5d9c_a064, 2, 1, fp);
    fread(&d_5d9c_a066, 2, 1, fp);
    fread(&d_5d9c_a068, 2, 1, fp);
    fread(&d_5d9c_a06a, 2, 1, fp);
    fread(&d_5d9c_a01e, 1, 1, fp);
    fread(&d_5d9c_a01f, 1, 1, fp);
    fread(&d_5d9c_a020, 1, 1, fp);
    fread(&d_5d9c_a021, 1, 1, fp);
    fread(&d_5d9c_9ef1, 2, 1, fp);
    fread(&d_5d9c_9ef3, 2, 1, fp);
    fread(&d_5d9c_9b8d, 1, 1, fp);
    fread(&d_5d9c_a032, 2, 1, fp);
    fread(&d_5d9c_a034, 2, 1, fp);
    fread(&d_5d9c_a036, 2, 1, fp);
    fread(&d_5d9c_a038, 2, 1, fp);
    fread(d_1f3e_2b22, 40, 1, fp);
    fread(&d_5d9c_9ef7, 2, 1, fp);
    fread(&d_5d9c_9ef5, 2, 1, fp);
    fread(d_1f3e_509e, 20, 1, fp);
    fread(&d_5d9c_1d4e, 4, 1, fp);
    fclose(fp);
    if (strcmp(d_1f3e_509e, "picture1.lbm")) {
        f_992a_6c72(0);
        d_1f3e_508a[0] = 0;
    } else if (!(d_5d9c_9ef7 == 5 && d_5d9c_9ef5 == 3))
        f_992a_6da2();
}

void f_992a_5e7e(void)
{
    FILE *fp;
    char buf[5106];

    d_1f3e_508a[0] = 0;
    f_992a_6f26("Ok - Saving Data");
    fp = fopen("savegame", "wb");
    fwrite(d_1f3e_0ab4, 8282, 1, fp);
    fwrite(d_1f3e_0780, 820, 1, fp);
    d_5d9c_9fc2 = f_14d2_16bc(d_5d9c_a352, 0);
    fwrite(d_5d9c_9fc2, 64124, 1, fp);
    d_5d9c_9fba = f_14d2_16bc(d_5d9c_a334, 0);
    fwrite(d_5d9c_9fba, 4, 1, fp);
    d_5d9c_9fb6 = f_14d2_16bc(d_5d9c_a332, 0);
    fwrite(d_5d9c_9fb6, 4, 1, fp);
    d_5d9c_9fb2 = f_14d2_16bc(d_5d9c_a330, 0);
    fwrite(d_5d9c_9fb2, 4, 1, fp);
    fwrite(d_1f3e_4fea, 160, 1, fp);
    f_992a_7f03();
    fwrite(d_5d9c_0524, 920, 1, fp);
    fwrite(d_5d9c_08bc, 164, 1, fp);
    f_992a_7f08();
    f_992a_5151(d_1f3e_5be8, buf, 40848);
    fwrite(buf, 5106, 1, fp);
    fwrite(d_483b_0000, 40848, 1, fp);
    fwrite(d_3e42_0000, 40848, 1, fp);
    fwrite(d_2f3c_85f7, 27232, 1, fp);
    d_5d9c_a058 = f_14d2_16bc(d_5d9c_a360, 0);
    fwrite(d_5d9c_a058, 6804, 1, fp);
    f_992a_5151(d_1f3e_5918, buf, 720);
    fwrite(buf, 90, 1, fp);
    fwrite(d_5739_0000, 5166, 1, fp);
    fwrite(d_2f3c_1b60, 140, 1, fp);
    fwrite(d_5739_142e, 2300, 1, fp);
    fwrite(d_2f3c_7c73, 1920, 1, fp);
    fwrite(d_483b_a372, 4160, 1, fp);
    fwrite(d_2f3c_74f3, 1920, 1, fp);
    fwrite(d_2f3c_5167, 9100, 1, fp);
    fwrite(d_2f3c_422b, 3900, 1, fp);
    d_5d9c_a054 = f_14d2_16bc(d_5d9c_a35e, 0);
    fwrite(d_5d9c_a054, 2600, 1, fp);
    fwrite(d_2f3c_35ad, 3198, 1, fp);
    fwrite(d_2f3c_2d59, 2132, 1, fp);
    fwrite(d_483b_b3b2, 3840, 1, fp);
    fwrite(d_2f3c_27e4, 1280, 1, fp);
    fwrite(d_2f3c_2794, 80, 1, fp);
    fwrite(d_5739_1d2a, 15040, 1, fp);
    fwrite(d_483b_a0ba, 376, 1, fp);
    d_5d9c_a01a = f_14d2_16bc(d_5d9c_a35c, 0);
    fwrite(d_5d9c_a01a, 2560, 4, fp);
    fwrite(d_2f3c_1d94, 2560, 1, fp);
    fwrite(d_2f3c_15c0, 1440, 1, fp);
    fwrite(d_5d9c_a050, 4, 1, fp);
    fwrite(d_1f33_0000, 40, 1, fp);
    fwrite(d_1f36_0000, 120, 1, fp);
    fwrite(d_2f3c_1534, 80, 1, fp);
    fwrite(d_2f3c_0d8c, 1960, 1, fp);
    fwrite(d_2f3c_029c, 2800, 1, fp);
    d_5d9c_9ffe = f_14d2_16bc(d_5d9c_a34a, 0);
    fwrite(d_5d9c_9ffe, 560, 4, fp);
    d_5d9c_9ffa = f_14d2_16bc(d_5d9c_a348, 0);
    fwrite(d_5d9c_9ffa, 140, 4, fp);
    fwrite(d_2f3c_0070, 16, 1, fp);
    fwrite(d_2f3c_0050, 32, 1, fp);
    fwrite(d_5d9c_9fee, 8, 1, fp);
    fwrite(d_2f3c_0040, 16, 1, fp);
    d_5d9c_9ff6 = f_14d2_16bc(d_5d9c_a344, 0);
    fwrite(d_5d9c_9ff6, 220, 2, fp);
    d_5d9c_a006 = f_14d2_16bc(d_5d9c_a342, 0);
    fwrite(d_5d9c_a006, 500, 2, fp);
    d_5d9c_a002 = f_14d2_16bc(d_5d9c_a340, 0);
    fwrite(d_5d9c_a002, 510, 2, fp);
    fwrite(d_2f3c_0030, 16, 1, fp);
    fwrite(d_2f3c_0000, 48, 1, fp);
    fwrite(d_1f3e_ff85, 80, 1, fp);
    fwrite(d_1f3e_fcb5, 240, 1, fp);
    fwrite(d_2f3c_0080, 540, 1, fp);
    fwrite(d_5739_57ea, 280, 1, fp);
    d_5d9c_9fea = f_14d2_16bc(d_5d9c_a346, 0);
    fwrite(d_5d9c_9fea, 384, 2, fp);
    fwrite(&d_5d9c_9fab, 2, 1, fp);
    fwrite(&d_5d9c_9f85, 2, 1, fp);
    fwrite(&d_5d9c_9fa7, 2, 1, fp);
    fwrite(&d_5d9c_9e87, 2, 1, fp);
    fwrite(&d_5d9c_9fa5, 2, 1, fp);
    fwrite(&d_5d9c_9fa3, 2, 1, fp);
    fwrite(&d_5d9c_9f9f, 2, 1, fp);
    fwrite(&d_5d9c_9f9d, 2, 1, fp);
    fwrite(&d_5d9c_9f9b, 2, 1, fp);
    fwrite(&d_5d9c_9f99, 2, 1, fp);
    fwrite(&d_5d9c_9f97, 2, 1, fp);
    fwrite(&d_5d9c_9f8d, 2, 1, fp);
    fwrite(&d_5d9c_9f8f, 2, 1, fp);
    fwrite(&d_5d9c_9f35, 2, 1, fp);
    fwrite(&d_5d9c_9f33, 2, 1, fp);
    fwrite(&d_5d9c_9f8b, 2, 1, fp);
    fwrite(&d_5d9c_9f89, 2, 1, fp);
    fwrite(&d_5d9c_9f87, 2, 1, fp);
    fwrite(&d_5d9c_a024, 1, 1, fp);
    fwrite(&d_5d9c_a025, 1, 1, fp);
    fwrite(d_5d9c_a022, 1, 1, fp);
    fwrite(&d_5d9c_a023, 1, 1, fp);
    fwrite(&d_5d9c_9ee3, 2, 1, fp);
    fwrite(&d_5d9c_a064, 2, 1, fp);
    fwrite(&d_5d9c_a066, 2, 1, fp);
    fwrite(&d_5d9c_a068, 2, 1, fp);
    fwrite(&d_5d9c_a06a, 2, 1, fp);
    fwrite(d_5d9c_a01e, 1, 1, fp);
    fwrite(&d_5d9c_a01f, 1, 1, fp);
    fwrite(&d_5d9c_a020, 1, 1, fp);
    fwrite(&d_5d9c_a021, 1, 1, fp);
    fwrite(&d_5d9c_9ef1, 2, 1, fp);
    fwrite(&d_5d9c_9ef3, 2, 1, fp);
    fwrite(&d_5d9c_9b8d, 1, 1, fp);
    fwrite(&d_5d9c_a032, 2, 1, fp);
    fwrite(&d_5d9c_a034, 2, 1, fp);
    fwrite(&d_5d9c_a036, 2, 1, fp);
    fwrite(&d_5d9c_a038, 2, 1, fp);
    fwrite(d_1f3e_2b22, 40, 1, fp);
    fwrite(&d_5d9c_9ef7, 2, 1, fp);
    fwrite(&d_5d9c_9ef5, 2, 1, fp);
    fwrite(d_1f3e_509e, 20, 1, fp);
    fwrite(&d_5d9c_1d4e, 4, 1, fp);
    fclose(fp);
    d_5d9c_9fad = -1;
}

void f_992a_6ae4(void)
{
    FILE *fp;

    d_1f3e_508a[0] = 0;
    fp = fopen("hiscores", "rb");
    d_5d9c_9fd2 = f_14d2_16bc(d_5d9c_a34e, 1);
    for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= 19; d_5d9c_9f6d++) {
        f_14d2_0b5d(fp, d_5d9c_9fd2 + d_5d9c_9f6d * 80);
        f_14d2_0b5d(fp, d_5d9c_9fd2 + d_5d9c_9f6d * 80 + 1600);
    }
    fread(d_2f3c_1d44, 80, 1, fp);
    fclose(fp);
}

void f_992a_6bab(void)
{
    FILE *fp;

    f_992a_6f26("Saving Hall of Fame");
    fp = fopen("hiscores", "wb");
    d_5d9c_9fd2 = f_14d2_16bc(d_5d9c_a34e, 0);
    for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= 19; d_5d9c_9f6d++) {
        f_14d2_0b91(fp, d_5d9c_9fd2 + d_5d9c_9f6d * 80);
        f_14d2_0b91(fp, d_5d9c_9fd2 + d_5d9c_9f6d * 80 + 1600);
    }
    fwrite(d_2f3c_1d44, 80, 1, fp);
    fclose(fp);
}

void f_992a_6c72(char c)
{
    int h;

    if (_fstrcmp(d_1f3e_509e, d_1f3e_2bea) != 0) {
        if (d_5d9c_a31e == 2) {
            if ((h = open(d_1f3e_509e, O_RDONLY)) >= 0) {
                d_5d9c_a366 = f_14d2_16bc(d_5d9c_a364, 1);
                read(h, d_5d9c_a366 + 0x7d00, 32000);
                close(h);
                f_1b05_0002(d_5d9c_a366 + 0x7d00, d_5d9c_a366);
                f_14d2_0059(d_5d9c_a366);
            }
        } else {
            if ((h = open("picega.lbm", O_RDONLY)) != 0) {
                d_5d9c_a366 = f_14d2_16bc(d_5d9c_a364, 0);
                read(h, d_5d9c_a366, 32000);
                close(h);
                f_1b05_014e(d_5d9c_a366, 0xa400);
            }
        }
        if (c) {
            d_5d9c_9ef7 = 5;
            d_5d9c_9ef5 = 4;
        }
        d_5d9c_9b1a = -1;
        _fstrcpy(d_1f3e_2bea, d_1f3e_509e);
    }
}

void f_992a_6da2(void)
{
    float k;
    char far *p;
    register int avg;
    char pal[48];

    if (d_5d9c_a31e == 2) {
        p = pal;
        k = d_5d9c_9ef5 * 0.15 + 0.4;
        for (d_5d9c_9f6d = 0; d_5d9c_9f6d <= 15; d_5d9c_9f6d++) {
            d_5d9c_9fa1 = d_5d9c_2c94[d_5d9c_9f6d] & 0xf;
            d_5d9c_9e67 = (d_5d9c_2c94[d_5d9c_9f6d] >> 4) & 0xf;
            d_5d9c_9dd7 = (d_5d9c_2c94[d_5d9c_9f6d] >> 8) & 0xf;
            avg = (d_5d9c_9dd7 + d_5d9c_9e67 + d_5d9c_9fa1) / 3;
            if (d_5d9c_9ef7 < 5) {
                if (d_5d9c_9ef7 == 1) {
                    d_5d9c_9dd7 = avg / 2;
                    d_5d9c_9e67 = avg / 2;
                    d_5d9c_9fa1 = avg;
                } else if (d_5d9c_9ef7 == 2) {
                    d_5d9c_9dd7 = avg;
                    d_5d9c_9e67 = avg;
                    d_5d9c_9fa1 = avg;
                } else if (d_5d9c_9ef7 == 3) {
                    d_5d9c_9dd7 = avg;
                    d_5d9c_9e67 = avg / 2;
                    d_5d9c_9fa1 = avg / 2;
                } else {
                    d_5d9c_9dd7 = avg / 2;
                    d_5d9c_9e67 = avg;
                    d_5d9c_9fa1 = avg / 2;
                }
            }
            *p++ = (char)(d_5d9c_9dd7 * k) << 2;
            *p++ = (char)(d_5d9c_9e67 * k) << 2;
            *p++ = (char)(d_5d9c_9fa1 * k) << 2;
        }
        _ES = _SS;
        _DX = (unsigned)pal;
        asm mov bx, 0;
        _CX = 16;
        _AX = 0x1012;
        geninterrupt(0x10);
    }
}

void f_992a_6f26(char far *s)
{
    if (!d_1f3e_508a[0])
        f_a1c3_27e4("");
    if (_fstrcmp(d_1f3e_508a, s) != 0) {
        f_14d2_0722(16);
        f_14d2_075a(20, 0x79, 0x134, 0x59);
        f_14d2_0722(20);
        f_14d2_075a(16, 0x75, 0x130, 0x55);
        f_14d2_073e(28);
        f_14d2_07af(16, 0x75, 0x130, 0x55);
        f_1680_2d78(-1.0, 12.5, 1, s);
        _fstrcpy(d_1f3e_508a, s);
    }
}

char f_992a_700a(int w)
{
    d_5d9c_9b23 = 0;
    if ((w & 1) == 0) {
        if (w > 5 && w < 87 && w != 82 && f_992a_70a8(w) == 0)
            d_5d9c_9b23 = -1;
    } else if (w == 29 || w == 37 || w == 49 || w == 55 || w == 85)
        d_5d9c_9b23 = -1;
    return d_5d9c_9b23;
}

char f_992a_7059(int w)
{
    switch (w) {
    case 38: case 44: case 50: case 56: case 62: case 68: case 76: case 88:
        return -1;
    }
    return 0;
}

char f_992a_70a8(int w)
{
    if (f_992a_7059(w))
        return -1;
    if (f_992a_7831(w) && w != 83)
        return -1;
    return 0;
}

char f_992a_70d2(int w)
{
    switch (w) {
    case 9: case 13: case 19: case 27: case 33: case 43: case 61: case 65: case 82: case 83:
        return -1;
    }
    return 0;
}

char f_992a_7129(int w)
{
    switch (w) {
    case 7: case 9: case 11: case 23: case 41: case 53:
        return -1;
    }
    return 0;
}

char f_992a_7170(int w)
{
    switch (w) {
    case 15: case 17: case 21: case 23: case 25: case 31: case 35: case 41: case 47: case 53:
    case 59: case 67: case 71: case 73: case 87:
        return -1;
    }
    return 0;
}

char f_992a_71db(int w)
{
    switch (w) {
    case 11: case 15: case 23: case 25: case 31: case 35: case 67: case 71: case 75: case 79:
    case 87: case 91:
        return -1;
    }
    return 0;
}

char f_992a_723a(int w)
{
    switch (w) {
    case 17: case 21: case 31: case 35: case 67: case 71: case 75: case 79: case 91:
        return -1;
    }
    return 0;
}

char f_992a_728d(int w)
{
    switch (w) {
    case 17: case 21: case 31: case 35: case 53: case 59: case 67: case 71: case 75: case 79:
    case 91:
        return -1;
    }
    return 0;
}

char f_992a_72e8(int w, int n)
{
    switch (w) {
    case 11: case 15:
        return n >= 1 && n <= 32 ? -1 : 0;
    case 23: case 25:
        return n >= 1 && n <= 16 ? -1 : 0;
    case 31: case 35:
        return n >= 1 && n <= 8 ? -1 : 0;
    case 67: case 71:
        return n >= 5 && n <= 8 ? -1 : 0;
    case 75: case 79:
        return n == 5 || n == 6 ? -1 : 0;
    case 87: case 91:
        return n == 1 ? -1 : 0;
    }
    return 0;
}

char f_992a_7399(int w, int n)
{
    switch (w) {
    case 17: case 21:
        return n >= 1 && n <= 16 ? -1 : 0;
    case 31: case 35:
        return n >= 9 && n <= 16 ? -1 : 0;
    case 67: case 71:
        return n >= 9 && n <= 12 ? -1 : 0;
    case 75: case 79:
        return n == 7 || n == 8 ? -1 : 0;
    case 91:
        return n == 2 ? -1 : 0;
    }
    return 0;
}

char f_992a_7430(int w, int n)
{
    switch (w) {
    case 17: case 21:
        return n >= 17 && n <= 32 ? -1 : 0;
    case 31: case 35:
        return n >= 17 && n <= 24 ? -1 : 0;
    case 53: case 59: case 67: case 71: case 75: case 79:
        return n >= 1 && n <= 4 ? -1 : 0;
    case 91:
        return n == 3 ? -1 : 0;
    }
    return 0;
}

char f_992a_74c1(int w, int n)
{
    switch (w) {
    case 9:
        return n >= 1 && n <= 16 ? -1 : 0;
    case 13: case 19: case 27: case 33: case 43: case 61: case 65: case 82: case 83:
        return -1;
    }
    return 0;
}

char f_992a_752d(int w, int n)
{
    switch (w) {
    case 7:
        return -1;
    case 9:
        return n >= 17 && n <= 32 ? -1 : 0;
    case 11:
        return n >= 33 && n <= 40 ? -1 : 0;
    case 23:
        return n >= 17 && n <= 20 ? -1 : 0;
    case 41:
        return n == 1 || n == 2 ? -1 : 0;
    case 53:
        return n == 5 ? -1 : 0;
    }
    return 0;
}

char f_992a_75bc(int w, int n)
{
    switch (w) {
    case 15: case 17: case 21:
        return n >= 33 && n <= 40 ? -1 : 0;
    case 23:
        return n >= 21 && n <= 36 ? -1 : 0;
    case 25:
        return n >= 17 && n <= 32 ? -1 : 0;
    case 31: case 35:
        return n >= 25 && n <= 40 ? -1 : 0;
    case 41:
        return n >= 3 && n <= 18 ? -1 : 0;
    case 47:
        return -1;
    case 53:
        return n >= 6 && n <= 21 ? -1 : 0;
    case 59:
        return n >= 5 && n <= 20 ? -1 : 0;
    case 67:
        return n >= 13 && n <= 20 ? -1 : 0;
    case 71:
        return n >= 13 && n <= 16 ? -1 : 0;
    case 73:
        return -1;
    case 87:
        return n == 2 ? -1 : 0;
    }
    return 0;
}

char f_992a_76bc(int w)
{
    switch (w) {
    case 9: case 11: case 17: case 23: case 31: case 61: case 67: case 75: case 87: case 90:
        return -1;
    }
    return 0;
}

char f_992a_7713(int w)
{
    switch (w) {
    case 13: case 15: case 21: case 25: case 35: case 65: case 71: case 79: case 91: case 92:
        return -1;
    }
    return 0;
}

char f_992a_776a(int w)
{
    if (f_992a_7129(w))
        return -1;
    if (f_992a_7170(w))
        return -1;
    switch (w) {
    case 9: case 13: case 38: case 39: case 44: case 45:
        return -1;
    }
    return 0;
}

char f_992a_77cd(int w, int n)
{
    if (w == 53 && n == 5)
        return -1;
    if (w == 87 && n == 2)
        return -1;
    switch (w) {
    case 5: case 82: case 83: case 88: case 89: case 94:
        return -1;
    }
    return 0;
}

char f_992a_7831(int x)
{
    if (f_992a_7059(x - 1))
        return -1;
    if (x == 83)
        return -1;
    return 0;
}

char f_992a_7853(int a, int b)
{
    if (a == 53 && b == 5)
        return -1;
    switch (a) {
    case 5: case 76: case 77: case 82: case 83: case 88: case 89: case 94:
        return -1;
    case 87: case 91:
        return b > 1 ? -1 : 0;
    }
    return 0;
}

char f_992a_78ca(int x)
{
    if (x == 90 || x == 92 || x == 94)
        return -1;
    return 0;
}

int f_992a_78e7(int a, int b)
{
    d_5d9c_9c1b = -1;
    switch (a) {
    case 15: case 21:
        d_5d9c_9c1b = (b - 32) / 2.0 - 0.5;
        break;
    case 17:
        d_5d9c_9c1b = (b - 32) / 2.0 + 3.5;
        break;
    case 23:
        d_5d9c_9c1b = (b - 20) / 2.0 - 0.5;
        break;
    case 25:
        d_5d9c_9c1b = (b - 16) / 2.0 - 0.5;
        break;
    case 31: case 35:
        d_5d9c_9c1b = (b - 24) / 2.0 - 0.5;
        break;
    case 41:
        d_5d9c_9c1b = (b - 2) / 2.0 - 0.5;
        break;
    case 47:
        d_5d9c_9c1b = b / 2.0 - 0.5;
        break;
    case 53:
        d_5d9c_9c1b = (b - 5) / 2.0 - 0.5;
        break;
    case 59:
        d_5d9c_9c1b = (b - 4) / 2.0 - 0.5;
        break;
    case 67:
        d_5d9c_9c1b = (b - 12) / 2.0 + 3.5;
        break;
    }
    return d_5d9c_9c1b;
}

unsigned char f_992a_79b8(int x)
{
    switch (x) {
    case 13: case 19: case 27:
        d_5d9c_9b9d = 50;
        break;
    case 33: case 38: case 39: case 44: case 45:
        d_5d9c_9b9d = 60;
        break;
    case 43: case 50: case 51: case 56: case 57:
        d_5d9c_9b9d = 70;
        break;
    case 61: case 62: case 63: case 65:
        d_5d9c_9b9d = 75;
        break;
    case 68: case 69:
        d_5d9c_9b9d = 80;
        break;
    }
    return d_5d9c_9b9d;
}

int f_992a_7a65(int a, int b)
{
    return exp(fabs(10.5 - (a % 20 + 1)) / 2.0) / 10.0 * 0.005 * exp(b / 10.0) * 35.0;
}

void f_992a_7aeb(int a, int b)
{
    FILE *fp;
    char x[280];
    char y[280];

    d_5d9c_9ffe = f_14d2_16bc(d_5d9c_a34a, 1);
    for (d_5d9c_9fa1 = 0; d_5d9c_9fa1 <= 13; d_5d9c_9fa1++) {
        f_14d2_148f(&d_2f3c_0d8c[d_5d9c_9fa1][a], &d_2f3c_0d8c[d_5d9c_9fa1][b], 1);
        if (d_5d9c_9fa1 < 10) {
            f_14d2_148f(&d_2f3c_029c[d_5d9c_9fa1][a], &d_2f3c_029c[d_5d9c_9fa1][b], 2);
            if (d_5d9c_9fa1 < 4)
                f_14d2_148f(&d_5d9c_9ffe[d_5d9c_9fa1][a], &d_5d9c_9ffe[d_5d9c_9fa1][b], 4);
        }
    }
    d_5d9c_9ffa = f_14d2_16bc(d_5d9c_a348, 1);
    f_14d2_148f(&d_5d9c_9ffa[a], &d_5d9c_9ffa[b], 4);
    fp = fopen("records", "rb+");
    fseek(fp, a * 279L, 0);
    fread(x, 1, 279, fp);
    fseek(fp, b * 279L, 0);
    fread(y, 1, 279, fp);
    fseek(fp, a * 279L, 0);
    fwrite(y, 1, 279, fp);
    fseek(fp, b * 279L, 0);
    fwrite(x, 1, 279, fp);
    fclose(fp);
}

void f_992a_7d4d(int a, int b)
{
    unsigned k, j, i;

    d_5d9c_9fea = f_14d2_16bc(d_5d9c_a346, 1);
    for (k = 0; k <= 7; k++)
        for (i = 0; i <= 15; i++)
            if (d_5d9c_9fea[0][i][k] > 0)
                for (j = 1; j <= 2; j++) {
                    if (d_5d9c_9fea[j][i][k] == a)
                        d_5d9c_9fea[j][i][k] = b;
                    else if (d_5d9c_9fea[j][i][k] == b)
                        d_5d9c_9fea[j][i][k] = a;
                }
}

void f_992a_7e35(int n)
{
    char buf[60];

    for (d_5d9c_9eeb = 0; d_5d9c_9eeb <= 1; d_5d9c_9eeb++) {
        if (d_5d9c_9eeb == 0)
            strcpy(buf, "First Name ?");
        else
            strcpy(buf, "Surname ?");
        f_a1c3_290e(2.625, d_5d9c_9eeb * 3 + 7, buf);
        if (d_1f3e_4fcc[0] == 0) {
            if (d_5d9c_9eeb == 0)
                strcpy(d_1f3e_4fcc, "Player");
            else
                strcpy(d_1f3e_4fcc, f_a1c3_25b0(n + 1));
        }
        strcpy(d_1f3e_4fea[d_5d9c_9eeb][n], d_1f3e_4fcc);
    }
}

void f_992a_7f03(void)
{
}

void f_992a_7f08(void)
{
}
