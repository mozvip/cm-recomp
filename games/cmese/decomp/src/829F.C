/* @at 829f:0000 */
/* @data 69da:1f10 */
/* @module */

/* Overlay 829f (CM93's 7C74.C, from CM1's 7555.C): the match: setting it up and restoring
 * the teams afterwards, the ground and the gate, the halves, extra time and penalties, the
 * clock and the score, keys during play, fouls, injuries, bookings and sendings off with
 * their commentary, tactical moves and substitutions. Its data is the formations' shirt
 * numbers and the commentary's fouls, then its literal pool. */
#include <stdio.h>
#include <string.h>
#include <mem.h>
#include <math.h>

/* the functions, in the reverse order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_829f_0000(char far *s);
void f_829f_0099(int team);
void f_829f_00ba(void);
void f_829f_06d0(char flag, char far *s);
void f_829f_07ff(void);
void f_829f_09ac(void);
void f_829f_0ad4(void);
void f_829f_111b(void);
void f_829f_1365(void);
void f_829f_1b68(void);
void f_829f_1c66(int team);
void f_829f_1ef0(void);
char f_829f_221f(int club, int round);
char f_829f_227e(int club, int round);
void f_829f_22b0(int a, int b, int c);
void f_829f_242c(void);
void f_829f_251b(void);
void f_829f_25a9(void);
void f_829f_2637(void);
void f_829f_26a9(void);
void f_829f_271b(void);
void f_829f_28d3(void);
unsigned char f_829f_2a8e(unsigned char a, int b);
unsigned char f_829f_2ac9(unsigned char a, int b);
void f_829f_2b04(void);
void f_829f_2d07(void);
void f_829f_2dcf(int team);
void f_829f_2e96(int team);
void f_829f_2f1f(int team);
int f_829f_2f62(int team, int p);
void f_829f_3120(int team);
void f_829f_3668(int a, int b, int team, int n);
void f_829f_3b05(int team, int p);
void f_829f_3f9c(void);
void f_829f_3ff9(int team, char c);
void f_829f_4146();             /* no prototype: 38b3 passes it two arguments */
void f_829f_45e0(int team);
void f_829f_468e(float x, float y);
void f_829f_46d4(void);

void f_1a70_3d0c(float x, float y, int a, int b, int c, char far *s);
void f_1a70_3554(float x, float y, int bg, int fg, int w, char far *s);
void f_1a70_344b(int x, int y, int colour, char far *s);
void f_2162_0dfb(int ticks);
void f_1a70_525f(int a, char b);
char f_1a70_2bc7(int x);
long f_2162_0da1(long n);
char far *f_2162_0160();
char far *f_2162_0f6e(char far *s, unsigned n);
void f_2162_1196(unsigned x, int y, unsigned x2, unsigned y2, int dy, int colour);
void f_2162_1021(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_2162_0897();
void f_2162_08a6();
void f_2162_08b5(int x1, int y1, int x2, int y2);
void f_1a70_4a41(char far *title);
char far *f_1a70_4983(int division, char full);
int f_1a70_68a4(int x);
char f_1a70_237e(int);
char f_1a70_2490(int);
char f_1a70_24c5(int);
char f_1a70_2855(int, int);
char f_1a70_268e(int, int);
char f_1a70_2737(int, int);
char f_1a70_27c8(int, int);
char f_1a70_2a7d(int);
char f_1a70_29ad(int, int);
char f_1a70_2a20(int a, int b);
void f_1a70_5688(int a);
void f_8773_2d57(void);
void f_8773_3a79(int a, int b, char c);
void f_8773_2bce(int team);
void f_b085_442e(int team);
void f_b8da_5643(int team);
void f_8c32_00b2(void);
void f_8c32_0000(void);
extern int d_69da_d992;
extern int d_69da_da7e;
extern char near *d_69da_b1fc[];
extern char near *d_69da_b2a0[];
extern int d_69da_d9ac;
extern int d_69da_dab6;
extern char d_69da_ddc9;
extern int d_69da_d996;
extern int d_69da_dab8;
extern int d_69da_da52;
extern int d_69da_daba;
extern int d_69da_dabc;
extern int d_69da_dabe;
extern int d_69da_d9bc;
extern int d_69da_da60;
extern int d_69da_da62;
extern int d_69da_daae;
extern int d_69da_dab0;
extern int d_69da_dac0;
extern char d_69da_ddd7;
extern int d_69da_dac2;
extern int d_69da_dac4;
extern int d_69da_d99a;
extern int d_69da_dac6;
extern int d_69da_d9ea;
extern char d_69da_ddd8;
extern int d_69da_dac8;
extern int d_69da_daca;
extern int d_69da_dacc;
extern int d_69da_dace;
extern char d_69da_ddd9;
extern int d_69da_dad0;
extern int d_69da_dad2;
extern int d_69da_dad4;
extern int d_69da_dad6;
extern int d_69da_dad8;
extern int far d_5dbf_1290[][2][98];
struct score { unsigned home1 : 4; unsigned away1 : 4; unsigned home2 : 4; unsigned away2 : 4; };
extern char far d_536d_60bd[];
extern char far d_536d_5f7d[];
extern char far d_536d_610d[];
extern unsigned char far d_4512_0000[][82];
char f_1a70_28f3(int);
char f_1a70_2950(int);
int f_1a70_2b3f(int, int);
int f_1a70_4513(int team);
float f_2162_10cf(void);
int f_2162_134e(int a, int b);
int f_2162_13ba(int a, int b);
float f_2162_1390(float a, float b);
long f_2162_1367(long a, long b);
void f_a83a_0e3f(int t, int k, char c);
void f_7dd6_2dcf(int team);
int f_7dd6_25a6(int week, int n);
void f_8c32_1592(int team, int b, int c);
extern char near *d_69da_b2a4[];
extern char near *d_69da_b29c;
extern char near *d_69da_b29e;
extern int d_69da_d9ba;
extern int d_69da_da4e;
extern int d_69da_d9d2;
extern int d_69da_dada;
extern int d_69da_dadc;
extern int d_69da_dade;
extern int d_69da_daea;
extern int d_69da_daee;
extern long d_69da_df11;
extern float d_69da_de6d;
extern float d_69da_de71;
extern unsigned char d_69da_dda5;
extern int d_69da_d9de;
extern float d_69da_de75;
extern float d_69da_de79;
extern float d_69da_de7d;
extern float d_69da_de81;
extern unsigned char far d_4512_0386[];
extern unsigned char far d_4512_01ec[];
extern unsigned char far d_4512_138a[];
extern unsigned char far d_4512_023e[];
extern int d_69da_dae0;
extern int d_69da_dae2;
extern int d_69da_dae4;
extern int d_69da_dae6;
extern int d_69da_dae8;
extern int d_69da_daec;
extern int d_69da_da7a;
extern int d_69da_da02;
extern int d_69da_daf0;
extern int d_69da_daf2;
extern int d_69da_daf4;
extern int d_69da_daf6;
extern int d_69da_daf8;
extern int d_69da_dafa;
extern int d_69da_dafc;
extern int d_69da_dafe;
extern int d_69da_db06;
extern int d_69da_db08;
extern int d_69da_db00;
extern int d_69da_da98;
extern int d_69da_db02;
extern int d_69da_db04;
extern int d_69da_da68;
extern int d_69da_da6a;
extern int d_69da_da66;
extern char d_69da_ddda;
extern char d_69da_ddc0;
extern char d_69da_dddb;
extern char d_69da_dddc;
extern int d_69da_db0a;
extern int d_69da_db0c;
extern int d_69da_db0e;
extern int d_69da_db10;
extern int d_69da_db12;
extern int d_69da_db14;
char f_1a70_5b94(int player);
void f_b8da_55af(int team);
void f_b085_77f9(int player, char c);
extern unsigned char far d_5dbf_4fd2[][140];
extern unsigned char far d_5dbf_0eaa[];
extern unsigned char far d_5dbf_0946[];
extern unsigned char far d_5dbf_1076[];
extern int far d_4512_1a30[];
extern unsigned char far d_4512_2db8[];
extern long far d_4512_2250[];
extern unsigned char d_69da_ddb1;
extern unsigned char d_69da_ddb2;
extern char d_69da_ddca;
extern int d_69da_d9a0;
extern unsigned char far d_4512_4726[][3][14];
unsigned char f_b8da_2494(int player);
void f_8773_13f4(int team);
void f_8773_190b(int team);
void f_8773_0714(char c);
void f_2162_0c51(void);
void f_8773_0a64(int team, char far *s);
void f_8773_0d32(void);
void f_8c32_353a(void);
char f_1a70_29fa(int);
extern int d_69da_db16;
extern int d_69da_db18;
extern int d_69da_d9ae;
extern int d_69da_db1a;
extern int d_69da_db1c;
extern char d_69da_dde7;
extern int d_69da_db1e;
extern int d_69da_db20;
extern int d_69da_db22;
extern int d_69da_db24;
extern int d_69da_da64;
extern int d_69da_d9da;
extern char d_69da_dddd;
extern unsigned char far d_3668_e912[][14];
extern unsigned char far d_5dbf_0b12[];
extern unsigned char far d_5dbf_0cde[];
char far *f_1a70_2e4a(int x, char c);
char far *f_1a70_4739(int player);
extern int d_69da_d9ee;
void f_8773_0995(void);
void f_8773_01cc(int team);
void f_2162_07f7(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
extern int d_69da_da2a;
extern int d_69da_db28;
extern int d_69da_db26;
extern int d_69da_db2a;
extern char d_69da_dda6;
extern int d_69da_db2c;
extern int d_69da_db30;
extern int d_69da_db32;
extern int d_69da_db34;
extern int d_69da_db36;
extern int d_69da_db38;
extern int d_69da_db3a;
extern int d_69da_db3c;
extern int d_69da_db3e;
extern char d_69da_de36;
extern int d_69da_dd8a;
extern int d_69da_dd8c;
extern int d_69da_d9f0;
extern int d_69da_db40;
extern int d_69da_db42;
extern int d_69da_db44;
extern int d_69da_db46;
extern int d_69da_db48;
extern int d_69da_db4a;
extern char d_69da_ddde;
extern char d_69da_dde0;
extern char d_69da_dddf;
extern char d_69da_ddcb;
void f_b8da_389a(char team);
void f_b8da_33c9(char team);
void f_b8da_3c33(char team);
void f_b8da_3289(char team);
void f_b8da_35cd(char team);
unsigned char f_b8da_3d49(char team);
int f_2162_0c2b(void);
char far *f_2162_0d1a(void);
char f_1a70_6514(int a, int b);
char f_1a70_66a9(int x);
char f_1a70_66cf(int x);
char f_1a70_66f0(int x);
char f_1a70_6711(int x);
char f_1a70_6737(int x);
char f_1a70_675d(int x);
void f_8773_0143(int minute);
unsigned char f_8773_14f6(int p, int team);
extern int d_69da_db4c;
extern int d_69da_db4e;
extern int d_69da_db50;
extern int d_69da_db52;
extern char d_69da_dde1;
extern char d_69da_dde2;
extern char d_69da_dde3;
extern char d_69da_dde4;
extern char d_69da_dde5;
extern char d_69da_dde6;
extern char d_69da_dde8;
extern char d_69da_dda7;
extern int d_69da_da6e;
extern int d_69da_db54;
extern int d_69da_db56;
extern int d_69da_da86;
extern int d_69da_da24;
extern int d_69da_da38;
extern int d_69da_db58;
extern int d_69da_db5a;
extern int d_69da_db5c;
extern int d_69da_db5e;
extern int d_69da_db60;
extern int d_69da_db62;
extern int d_69da_d9e0;
void f_c06b_0000(char team);
void f_1a70_3b47(float x, float y, int colour, char far *s);
void f_1a70_442b(float x, float y, int team);
void f_1a70_2eaa(int n, char far *title, char far *items);
void f_1a70_3226(int last);
extern char d_69da_ddd2;
extern int d_69da_db6a;
extern int d_69da_db68;
extern int d_69da_db66;
extern int d_69da_db64;
extern int d_69da_d9d8;
void f_8773_0000(int a, int b, int c, int d);
char far *f_1a70_46c1(int player);
void f_1a70_379b(float x, float y, int colour, char far *s);
extern int d_69da_db72;
extern int d_69da_db70;
extern int d_69da_db6e;
extern int d_69da_db6c;
char f_1a70_5ea2(char team, char week, char n);
extern unsigned char far d_4512_5e08[][14];
extern int far d_4512_87bc[];
extern int far d_28da_226e[];
extern int far d_28da_2332[];
extern char far d_536d_5fcd[];
extern char far d_536d_601d[];
extern char far d_536d_606d[];
extern struct score far d_536d_3066[];
extern char far d_536d_3101[][155];
extern int far d_4512_1710[][80];
extern char far d_536d_4c3d[][80];
extern char d_69da_df92;
void f_b085_4327(int team);
extern unsigned char far d_5dbf_0996[];
extern unsigned char far d_4512_5dec[][14];
extern unsigned char far d_4512_5d98[][14];
extern int far d_4512_549a[][14];
extern unsigned char far d_28da_2a78[][1860];
extern int far d_4512_5d92[];
extern long far d_4512_740c[][14];
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
extern struct flags_w far d_4512_bdc8[];
extern int far d_28da_10f0[][26];
extern char far d_536d_61ad[];
extern char far d_536d_61fd[];
extern char far d_28da_263c[];
extern unsigned char far d_3668_e886[][3][14];
void f_8773_0283(void);
extern unsigned char far d_4512_0290[];
extern unsigned char far d_4512_02e2[];
extern char far d_536d_624d[];
extern char far d_536d_62ed[];
extern char far d_536d_633d[];
extern unsigned char far d_4512_00a4[];
extern unsigned char far d_4512_00f6[];
void f_8773_02ed(int a, char c, char d, char e, int b, int team);
extern unsigned char far d_3668_e92e[][60];
extern unsigned char far d_3668_e9e2[][60];
extern char far d_536d_6391[];
extern char far d_536d_63e1[];
void f_8773_0ada(void);
extern unsigned char far d_4512_5da3[][14];
extern char far d_536d_6431[];
extern char far d_536d_6481[];
extern char far d_536d_6751[];
extern char far d_536d_6611[];
extern char far d_536d_65c1[];
extern char far d_536d_52fd[];
extern char far d_536d_52ad[];
extern unsigned char far d_28da_2a72[][3];
extern unsigned char far d_3668_e880[][3];


void f_829f_0000(char far *s)
{
    char buf[80];

    sprintf(buf, "%*s", (72 - strlen(s) * 4) / 8 + strlen(s), s);
    f_1a70_3d0c(1.5, 21.875, 1, 2, 0x90, buf);
    f_2162_0dfb(75);
    f_1a70_3d0c(1.5, 21.875, 1, 4, 0x90, "       DONE");
    f_1a70_525f(d_69da_d992, 0);
}

void f_829f_0099(int team)
{
    if (team > 0) {
        f_1a70_525f(team, 0);
        d_69da_da7e = 0;
    }
}

/* the week's matches, played in the background, with the latest results on screen */
void f_829f_00ba(void)
{
    unsigned n;
    char buf[80];

    for (d_69da_d9ac = 0; d_69da_d9ac < 40; d_69da_d9ac++)
        d_4512_87bc[d_69da_d9ac] = 0;
    n = d_69da_d9ac = 0;
    d_69da_dab6 = -1;
    d_69da_ddc9 = -1;
    d_28da_226e[d_69da_d996] = d_69da_dab8;
    d_28da_2332[d_69da_d996] = d_69da_da52;
    f_829f_07ff();
    d_69da_daba = 1;
    d_69da_dabc = ((d_69da_d996 & 1) && d_69da_d996 > 6 ? 910 : 440) + f_2162_0da1(3);
    if (f_1a70_237e(d_69da_d996))
        d_69da_dabc += 5;
    for (d_69da_dabe = 0; d_69da_dabe <= d_69da_da52 - 1; d_69da_dabe++) {
        d_69da_d9bc = d_536d_5f7d[d_69da_dabe] - 32;
        d_69da_da60 = d_5dbf_1290[d_69da_d9bc][0][d_69da_d996] / 32;
        d_69da_da62 = d_5dbf_1290[d_69da_d9bc][1][d_69da_d996] / 32;
        d_69da_daae = d_69da_da60;
        d_69da_dab0 = d_69da_da62;
        f_829f_111b();
        f_829f_1365();
        f_829f_09ac();
        f_829f_0ad4();
        f_829f_1ef0();
        f_829f_1b68();
        d_69da_ddd7 = d_69da_dac0 > 90 ? -1 : 0;
        d_69da_dac0 = -1;
        f_8773_2d57();
        if (d_69da_dac2 + d_69da_dac4 > 0) {
            f_1a70_5688(0);
            f_8773_3a79(d_69da_daae, d_69da_dab0, -1);
        }
        if (d_69da_da60 < 80)
            f_8773_2bce(d_69da_da60);
        if (d_69da_da62 < 80)
            f_8773_2bce(d_69da_da62);
        memcpy(d_536d_3101[d_69da_d9bc], d_536d_3066, 155);
        if (d_69da_da60 < 80) {
            d_4512_1710[0][d_69da_da60] = d_69da_dab8 + d_69da_d9bc;
            d_4512_1710[1][d_69da_da60] = d_69da_d9bc;
            d_4512_1710[2][d_69da_da60] = d_69da_d996 - 1;
            d_536d_4c3d[0][d_69da_da60] = -1;
            f_b085_442e(d_69da_da60);
            f_b8da_5643(d_69da_da60);
        }
        if (d_69da_da62 < 80) {
            d_4512_1710[0][d_69da_da62] = d_69da_dab8 + d_69da_d9bc;
            d_4512_1710[1][d_69da_da62] = d_69da_d9bc;
            d_4512_1710[2][d_69da_da62] = d_69da_d996 - 1;
            d_536d_4c3d[0][d_69da_da62] = -1;
            f_b085_442e(d_69da_da62);
            f_b8da_5643(d_69da_da62);
        }
        f_8c32_00b2();
        if (d_69da_df92 == 1 && d_69da_dac2 + d_69da_dac4 == 0 && d_69da_ddd7 == 0
            && (f_2162_0da1(3) > 0 || d_69da_dabe == 0
                || f_1a70_237e(d_69da_d996) && d_69da_da60 / 20 == 0)
            && d_69da_da52 > 3 && n < 12) {
            if (d_69da_d996 % 2 == 0)
                strcpy(d_536d_5fcd, "Today's");
            else
                strcpy(d_536d_5fcd, "Tonights");
            strcpy(buf, d_536d_601d);
            if (f_1a70_237e(d_69da_d996))
                sprintf(d_536d_601d, "%s  %s", f_1a70_4983(d_69da_da60 / 20 + 1, 2), buf);
            else if (f_1a70_2490(d_69da_d996))
                sprintf(d_536d_601d, "FA  %s", buf);
            else if (f_1a70_24c5(d_69da_d996))
                sprintf(d_536d_601d, "%cC  %s", "Coca-Cola"[0], buf);
            else if (f_1a70_2855(d_69da_d996, d_69da_d9bc + 1))
                sprintf(d_536d_601d, "AI  %s", buf);
            else if (f_1a70_268e(d_69da_d996, d_69da_d9bc + 1))
                sprintf(d_536d_601d, "UE  %s", buf);
            else if (f_1a70_2737(d_69da_d996, d_69da_d9bc + 1))
                sprintf(d_536d_601d, "CW  %s", buf);
            else if (f_1a70_27c8(d_69da_d996, d_69da_d9bc + 1))
                sprintf(d_536d_601d, "EC  %s", buf);
            else if (f_1a70_2a7d(d_69da_d996))
                sprintf(d_536d_601d, "PL  %s", buf);
            else if (d_69da_d996 == 10)
                sprintf(d_536d_601d, "SH  %s", buf);
            else if (d_69da_d996 <= 8)
                sprintf(d_536d_601d, "FR  %s", buf);
            strcat(d_536d_5fcd, " Result");
            if (d_69da_da52 > 1)
                strcat(d_536d_5fcd, "s");
            if (d_69da_daba == 1) {
                f_1a70_4a41("");
                f_2162_0897(16);
                f_2162_08b5(20, 20, 308, 188);
                f_2162_0897(20);
                f_2162_08b5(16, 16, 304, 184);
                f_1a70_3d0c(2.5, 3.0, 1, 8, 0x119, "           Latest Results");
                f_829f_06d0(1, d_536d_5fcd);
                sprintf(buf, "Week %d Season %d", f_1a70_68a4(d_69da_d996), d_69da_d99a);
                f_829f_06d0(0, buf);
            }
            if (d_69da_daba == 3 || f_2162_0da1(3) == 0) {
                if (d_69da_daba > 1)
                    f_829f_06d0(0, "");
                sprintf(d_536d_606d, "%d", d_69da_dabc);
                sprintf(buf, "%c.%s", d_536d_606d[0], f_2162_0f6e(d_536d_606d, 2));
                f_829f_06d0(1, buf);
                d_69da_dabc++;
            }
            f_829f_06d0(0, d_536d_601d);
            n++;
        }
    }
    if (d_69da_daba > 1) {
        f_829f_06d0(0, "");
        f_829f_06d0(0, "");
        f_829f_06d0(0, "Classified Check Follows");
    }
    f_8c32_0000();
    d_69da_dab8 += d_69da_da52;
    d_69da_ddc9 = 0;
}

void f_829f_06d0(char flag, char far *s)
{
    char buf[320];

    if (d_69da_daba == 17) {
        for (d_69da_dac6 = 1; d_69da_dac6 <= 4; d_69da_dac6++) {
            f_2162_1196(16, 38, 304, 183, 2, 20);
            f_2162_08a6(20);
            f_2162_1021(18, 38, 302, 38);
            f_2162_1021(18, 39, 302, 39);
        }
        d_69da_daba = 16;
    }
    if (strlen(s) != 0) {
        if (flag)
            f_1a70_3554(3.0, d_69da_daba + 4.875, 1, 2, 0, s);
        else
            for (d_69da_d9ea = 1; d_69da_d9ea <= strlen(s); d_69da_d9ea++) {
                sprintf(buf, "%c", s[d_69da_d9ea - 1]);
                f_1a70_344b((d_69da_d9ea - 1) * 6 + 32, d_69da_daba * 8 + 39, 1, buf);
                f_2162_0dfb(1);
            }
    }
    d_69da_daba++;
}

void f_829f_07ff(void)
{
    char buf[320];

    strcpy(d_536d_60bd, "");
    strcpy(d_536d_5f7d, "");
    for (d_69da_d9bc = 0; d_69da_d9bc <= d_69da_da52 - 1; d_69da_d9bc++) {
        d_69da_da60 = d_5dbf_1290[d_69da_d9bc][0][d_69da_d996] / 32;
        d_69da_da62 = d_5dbf_1290[d_69da_d9bc][1][d_69da_d996] / 32;
        d_69da_ddd8 = f_1a70_2bc7(d_69da_da60);
        if (d_69da_ddd8 == 0)
            d_69da_ddd8 = f_1a70_2bc7(d_69da_da62);
        if (d_69da_ddd8)
            strcat(d_536d_60bd, f_2162_0160(d_69da_d9bc + 32));
        else
            strcat(d_536d_5f7d, f_2162_0160(d_69da_d9bc + 32));
    }
    for (d_69da_d9bc = 0; d_69da_d9bc <= d_69da_da52 - 1; d_69da_d9bc++) {
        d_69da_dac8 = f_2162_0da1(strlen(d_536d_5f7d));
        d_69da_daca = f_2162_0da1(strlen(d_536d_5f7d));
        d_69da_dacc = d_536d_5f7d[d_69da_dac8];
        d_69da_dace = d_536d_5f7d[d_69da_daca];
        d_536d_5f7d[d_69da_dac8] = d_69da_dace;
        d_536d_5f7d[d_69da_daca] = d_69da_dacc;
    }
    strcpy(buf, d_536d_5f7d);
    sprintf(d_536d_5f7d, "%s%s", d_536d_60bd, buf);
}

void f_829f_09ac(void)
{
    d_69da_ddd9 = 0;
    if (f_1a70_29ad(d_69da_d996, d_69da_d9bc + 1)) {
        strcpy(d_536d_610d, "WEMBLEY STADIUM");
        d_69da_dad0 = 2;
        d_69da_dad2 = 2;
    } else if (d_69da_d996 == 91) {
        strcpy(d_536d_610d, "ROTTERDAM");
        d_69da_dad0 = 2;
        d_69da_dad2 = 2;
    } else if (d_69da_d996 == 97) {
        strcpy(d_536d_610d, "MILAN");
        d_69da_dad0 = 2;
        d_69da_dad2 = 2;
    } else if (f_1a70_2a20(d_69da_d996, d_69da_d9bc + 1)) {
        d_69da_dad6 = 0;
        for (d_69da_dad8 = 0; d_69da_dad8 <= 79; d_69da_dad8++)
            if (d_4512_0000[1][d_69da_dad8] > d_69da_dad6 && d_69da_dad8 != d_69da_da60
                && d_69da_dad8 != d_69da_da62 && d_69da_dad8 != d_69da_dab6) {
                d_69da_dad6 = d_4512_0000[1][d_69da_dad8];
                d_69da_dad4 = d_69da_dad8;
            }
        d_69da_dab6 = d_69da_dad4;
        strcpy(d_536d_610d, d_69da_b2a0[d_69da_dad4]);
        d_69da_dad0 = 2;
        d_69da_dad2 = 2;
    } else {
        d_69da_dad4 = d_69da_da60;
        if (d_69da_dad4 < 80)
            strcpy(d_536d_610d, d_69da_b2a0[d_69da_dad4]);
        else
            strcpy(d_536d_610d, d_69da_b1fc[d_69da_dad4]);
        d_69da_dad0 = 3;
        d_69da_dad2 = 1;
        d_69da_ddd9 = -1;
    }
}

void f_829f_0ad4(void)
{
    d_69da_dada = 0;
    if (strstr(d_536d_610d, "WEMBLEY") || strstr(d_536d_610d, "MILAN")
        || strstr(d_536d_610d, "ROTTERDAM")) {
        d_69da_df11 = ((d_69da_d996 == 10 ? 60 : 80) - f_2162_10cf()) * 1000.0;
        return;
    }
    if (d_69da_d996 == 78 || d_69da_d996 == 79) {
        d_69da_df11 = (d_4512_0000[1][d_69da_dad4] - f_2162_10cf()) * 1000.0;
        return;
    }
    if ((d_69da_daae < 80 || d_69da_daae >= 480) && (d_69da_dab0 < 80 || d_69da_dab0 >= 480)
        && d_69da_d996 > 10) {
        long dx, dy;

        d_69da_da4e = d_69da_daae - (d_69da_daae >= 480 ? 400 : 0);
        d_69da_d9d2 = d_69da_dab0 - (d_69da_dab0 >= 480 ? 400 : 0);
        dx = d_5dbf_4fd2[0][d_69da_da4e] - d_5dbf_4fd2[0][d_69da_d9d2];
        dy = d_5dbf_4fd2[1][d_69da_da4e] - d_5dbf_4fd2[1][d_69da_d9d2];
        d_69da_dada = 30.0 - sqrt(dx * dx + dy * dy) * 0.857;
    }
    d_69da_dadc = d_69da_dada > 0 ? d_69da_dada : 0;
    d_69da_dade = d_69da_dada;
    if (f_1a70_237e(d_69da_d996)) {
        if (d_4512_0386[d_69da_da60] > 1)
            d_69da_dadc += f_1a70_2b3f(d_69da_daea, d_69da_d9ba);
        if (d_4512_0386[d_69da_da62] > 1)
            d_69da_dade += f_1a70_2b3f(d_69da_daee, d_69da_d9ba);
    }
    d_69da_de6d = 0.875;
    d_69da_de71 = 0.125;
    if (f_1a70_237e(d_69da_d996))
        d_69da_dda5 = 70 - d_69da_da60 / 20 * 6;
    else if (f_1a70_2490(d_69da_d996)) {
        if (d_69da_d996 <= 53)
            d_69da_dda5 = 50;
        else if (d_69da_d996 >= 58 && d_69da_d996 <= 71)
            d_69da_dda5 = 65;
        else
            d_69da_dda5 = 100;
        d_69da_dda5;    /* no code: keeps BCC from merging these stores with 24c5's (as the original) */
        d_69da_de6d = 0.75;
        d_69da_de71 = 0.25;
    } else if (f_1a70_24c5(d_69da_d996)) {
        if (d_69da_d996 <= 27)
            d_69da_dda5 = 50;
        else if (d_69da_d996 >= 31 && d_69da_d996 <= 55)
            d_69da_dda5 = 65;
        else
            d_69da_dda5 = 80;
        d_69da_de6d = 0.75;
        d_69da_de71 = 0.25;
    } else if (f_1a70_268e(d_69da_d996, d_69da_d9bc + 1) || f_1a70_2737(d_69da_d996, d_69da_d9bc + 1)
               || f_1a70_27c8(d_69da_d996, d_69da_d9bc + 1)) {
        d_69da_dda5 = 100;
        d_69da_de6d = 0.95;
        d_69da_de71 = 0.05;
    } else if (f_1a70_2a7d(d_69da_d996)) {
        d_69da_dda5 = 100;
        d_69da_de6d = 0.75;
        d_69da_de71 = 0.25;
    } else if (f_1a70_2855(d_69da_d996, d_69da_d9bc + 1))
        d_69da_dda5 = 40;
    else
        d_69da_dda5 = 30;
    if (d_69da_dada > 24)
        d_69da_dda5 = d_69da_dda5 + 50;
    d_69da_dadc = f_2162_13ba(100, f_2162_134e(d_69da_dadc + d_69da_dda5, 10));
    d_69da_dade = f_2162_13ba(100, f_2162_134e(d_69da_dade + d_69da_dda5, 10));
    d_69da_d9de = (f_2162_13ba(d_69da_da60 / 20, 3) + f_2162_13ba(d_69da_da62 / 20, 3)) * 25;
    d_69da_de75 = ((d_4512_01ec[d_69da_da60] + d_4512_0000[0][d_69da_da60] * 2 - 100) / 200.0 + 1)
                  * (d_69da_dadc / (d_69da_d9de + 75.0));
    d_69da_de79 = ((d_4512_01ec[d_69da_da62] + d_4512_0000[0][d_69da_da62] * 2 - 75) / 200.0 + 1)
                  * (d_69da_dade / (d_69da_d9de + 75.0));
    d_69da_de7d = f_2162_1390(d_4512_0000[1][d_69da_da60] * d_69da_de75 * d_69da_de6d,
                              d_4512_0000[1][d_69da_da60] * d_69da_de6d);
    d_69da_de81 = f_2162_1390(d_4512_0000[1][d_69da_da62] * d_69da_de79 * 0.3,
                              d_4512_0000[1][d_69da_da60] * d_69da_de71);
    d_69da_df11 = f_2162_1367(2000.0 - f_2162_10cf() * 1000.0,
                              (f_2162_1390(d_69da_de7d + d_69da_de81 - f_2162_10cf(),
                                           d_4512_0000[1][d_69da_dad4]) - f_2162_10cf()) * 1000.0);
    if (d_69da_da60 < 80 && d_69da_d996 > 10 && d_69da_dad4 == d_69da_da60) {
        d_4512_138a[d_69da_da60]++;
        d_4512_2250[d_69da_da60] += d_69da_df11;
    }
}

void f_829f_111b(void)
{
    if (d_69da_da60 > 79) {
        d_69da_b29c = d_69da_b2a4[d_69da_da60];
        d_69da_dae0 = d_5dbf_0eaa[d_69da_da60];
        f_a83a_0e3f(80, d_69da_dae0, 0);
        d_4512_0000[0][80] = f_2162_0da1(9) + 4;
        d_4512_0000[1][80] = f_2162_134e((d_5dbf_0946[d_69da_da60] * 6 - 50) * (1 - f_2162_0da1(6) / 20.0), 5);
        d_4512_0000[4][80] = d_5dbf_0996[d_69da_da60 - 80];
        d_4512_0000[6][80] = 100;
        d_69da_dae2 = d_5dbf_1076[d_69da_da60];
        if (d_69da_dae2 == 59)
            d_69da_dae2 = 0;
        d_69da_da60 = 80;
    } else {
        d_69da_dae0 = d_4512_2db8[d_4512_1a30[d_69da_da60]] % 16;
        d_69da_dae2 = 0;
    }
    if (d_69da_da62 > 79) {
        d_69da_b29e = d_69da_b2a4[d_69da_da62];
        d_69da_dae4 = d_5dbf_0eaa[d_69da_da62];
        f_a83a_0e3f(81, d_69da_dae4, 0);
        d_4512_0000[0][81] = f_2162_0da1(9) + 4;
        d_4512_0000[1][81] = f_2162_134e((d_5dbf_0946[d_69da_da62] * 6 - 50) * (1 - f_2162_0da1(6) / 5.0), 5);
        d_4512_0000[4][81] = d_5dbf_0996[d_69da_da62 - 80];
        d_4512_0000[6][81] = 100;
        d_69da_dae6 = d_5dbf_1076[d_69da_da62];
        if (d_69da_dae6 == 59)
            d_69da_dae6 = 0;
        d_69da_da62 = 81;
    } else {
        d_69da_dae4 = d_4512_2db8[d_4512_1a30[d_69da_da62]] % 16;
        d_69da_dae6 = 0;
    }
}

void f_829f_1365(void)
{
    unsigned i, j;

    for (d_69da_d9a0 = 0; d_69da_d9a0 <= 13; d_69da_d9a0++) {
        d_4512_5d98[0][d_69da_d9a0] = d_69da_d9a0 > 10 ? 4 : 0;
        d_4512_5d98[1][d_69da_d9a0] = d_69da_d9a0 > 10 ? 4 : 0;
        d_4512_5d98[2][d_69da_d9a0] = 0;
        d_4512_5d98[3][d_69da_d9a0] = 0;
        d_4512_5dec[2][d_69da_d9a0] = 255;
        d_4512_5dec[3][d_69da_d9a0] = 255;
        d_4512_5dec[0][d_69da_d9a0] = 255;
        d_4512_5dec[1][d_69da_d9a0] = 255;
        if (d_69da_da60 < 80) {
            if (!f_1a70_5b94(d_4512_549a[d_69da_da60][d_69da_d9a0]))
                d_4512_5d98[4][d_69da_d9a0] = d_28da_2a78[11][d_4512_549a[d_69da_da60][d_69da_d9a0]];
            else
                d_4512_5d98[4][d_69da_d9a0] = 1;
            d_69da_da7a = d_69da_dab0;
        } else
            d_4512_5d98[4][d_69da_d9a0] = 16;
        if (d_69da_da62 < 80) {
            if (!f_1a70_5b94(d_4512_549a[d_69da_da62][d_69da_d9a0]))
                d_4512_5d98[5][d_69da_d9a0] = d_28da_2a78[11][d_4512_549a[d_69da_da62][d_69da_d9a0]];
            else
                d_4512_5d98[5][d_69da_d9a0] = 1;
            d_69da_da7a = d_69da_daae;
        } else
            d_4512_5d98[5][d_69da_d9a0] = 16;
    }
    d_69da_ddb1 = 0;
    d_69da_ddb2 = 0;
    for (i = 0; i < 3; i++)
        d_4512_5d92[i] = 0;
    for (i = 0; i < 2; i++)
        for (j = 0; j <= 13; j++)
            d_4512_740c[i][j] = 0;

    d_69da_dac2 = 0;
    d_69da_dae8 = 1;
    if (d_69da_da60 < 80) {
        f_b085_4327(d_69da_da60);
        f_b8da_55af(d_69da_da60);
        if (f_1a70_2bc7(d_69da_da60)) {
            d_69da_da7a = d_69da_da62;
            d_69da_ddca = -1;
            f_7dd6_2dcf(d_69da_da60);
            d_69da_ddca = 0;
            d_69da_dac2 = 1;
            d_69da_dae8 = 0;
        }
        d_69da_daea = f_1a70_4513(d_69da_da60);
        for (d_69da_da02 = 0; d_69da_da02 <= d_4512_023e[d_69da_da60] - 1; d_69da_da02++) {
            d_4512_bdc8[d_28da_10f0[d_69da_da60][d_69da_da02]].f15 = 0;
            d_4512_bdc8[d_28da_10f0[d_69da_da60][d_69da_da02]].f23 = 0;
        }
    } else
        d_69da_daea = f_2162_0da1(10);
    f_829f_1c66(d_69da_da60);

    d_69da_dac4 = 0;
    d_69da_daec = 1;
    if (d_69da_da62 < 80) {
        f_b085_4327(d_69da_da62);
        f_b8da_55af(d_69da_da62);
        if (f_1a70_2bc7(d_69da_da62)) {
            d_69da_da7a = d_69da_da60;
            d_69da_ddca = -1;
            f_7dd6_2dcf(d_69da_da62);
            d_69da_ddca = 0;
            d_69da_dac4 = 1;
            d_69da_daec = 0;
        }
        d_69da_daee = f_1a70_4513(d_69da_da62);
        for (d_69da_da02 = 0; d_69da_da02 <= d_4512_023e[d_69da_da62] - 1; d_69da_da02++) {
            d_4512_bdc8[d_28da_10f0[d_69da_da62][d_69da_da02]].f15 = 0;
            d_4512_bdc8[d_28da_10f0[d_69da_da62][d_69da_da02]].f23 = 0;
        }
    } else
        d_69da_daee = f_2162_0da1(10);
    f_829f_1c66(d_69da_da62);

    for (d_69da_d9a0 = 0; d_69da_d9a0 <= 13; d_69da_d9a0++) {
        if (d_69da_da60 < 80) {
            d_69da_da7a = d_69da_dab0;
            f_b085_77f9(d_4512_549a[d_69da_da60][d_69da_d9a0], 0);
        }
        if (d_69da_da62 < 80) {
            d_69da_da7a = d_69da_daae;
            f_b085_77f9(d_4512_549a[d_69da_da62][d_69da_d9a0], 0);
        }
    }

    memset(d_536d_3066, 0, 155);
    d_536d_3066[0].home1 = 15;
    d_536d_3066[0].away1 = 15;
    d_536d_3066[0].home2 = 15;
    d_536d_3066[0].away2 = 15;
    d_536d_3066[1].home1 = 15;
    d_536d_3066[1].away1 = 15;
    d_536d_3066[1].home2 = 15;
    d_536d_3066[1].away2 = 15;
    if (d_69da_dac2 + d_69da_dac4 > 0)
        f_8c32_1592(d_69da_d996, d_69da_d9bc + 1, d_69da_daea);
    d_69da_daf0 = 0;
    d_69da_daf2 = 0;
    d_69da_daf4 = 1;
    d_69da_daf6 = 1;
    d_69da_daf8 = 1;
    d_69da_dafa = 1;
    d_69da_dafc = 1;
    d_69da_dafe = 1;
    d_69da_db06 = 0;
    d_69da_db08 = 0;
    strcpy(d_536d_61ad, "");
    strcpy(d_536d_61fd, "");
    d_69da_db00 = 0;
    d_69da_da98 = 0;
    d_69da_dac0 = 45;
    d_69da_db02 = 0;
    d_69da_db04 = 0;
    d_69da_da68 = 0;
    d_69da_da6a = 0;
    d_69da_ddda = 0;
    d_69da_ddc0 = 0;
    if (f_1a70_28f3(d_69da_d996) || f_1a70_2950(d_69da_d996)) {
        d_69da_dddb = 0;
        if (f_1a70_24c5(d_69da_d996)
            || f_1a70_2855(d_69da_d996, d_69da_d9bc + 1) && (d_69da_d996 == 69 || d_69da_d996 == 73)
            || f_1a70_268e(d_69da_d996, d_69da_d9bc + 1)
            || f_1a70_2737(d_69da_d996, d_69da_d9bc + 1) && d_69da_d996 != 91
            || f_1a70_27c8(d_69da_d996, d_69da_d9bc + 1) && d_69da_d996 < 57
            || f_1a70_2a7d(d_69da_d996))
            d_69da_dddb = -1;
        if (f_1a70_28f3(d_69da_d996))
            d_69da_ddda = d_69da_dddb;
        else if (f_1a70_2950(d_69da_d996))
            d_69da_ddc0 = d_69da_dddb;
    }
    if (d_69da_ddc0) {
        d_69da_da66 = f_7dd6_25a6(d_69da_d996, d_69da_d9bc + 1);
        d_69da_da68 = (unsigned char)d_28da_263c[d_69da_da66 * 80 + d_69da_d9bc * 2 + 1];
        d_69da_da6a = (unsigned char)d_28da_263c[d_69da_da66 * 80 + d_69da_d9bc * 2];
    }
    d_69da_dddc = 0;
    d_69da_db0a = 0;
    d_69da_db0c = 0;
    for (d_69da_d9a0 = 0; d_69da_d9a0 <= 13; d_69da_d9a0++)
        for (d_69da_d9ea = 0; d_69da_d9ea <= 2; d_69da_d9ea++) {
            if (d_69da_da60 < 80)
                d_3668_e886[0][d_69da_d9ea][d_69da_d9a0] = d_4512_4726[d_69da_da60][d_69da_d9ea][d_69da_d9a0];
            if (d_69da_da62 < 80)
                d_3668_e886[1][d_69da_d9ea][d_69da_d9a0] = d_4512_4726[d_69da_da62][d_69da_d9ea][d_69da_d9a0];
        }
    if (d_69da_da60 < 80) {
        d_69da_db0e = d_4512_2db8[d_4512_1a30[d_69da_da60]] / 16;
        d_69da_db10 = d_4512_2db8[d_4512_1a30[d_69da_da60]] % 16;
    }
    if (d_69da_da62 < 80) {
        d_69da_db12 = d_4512_2db8[d_4512_1a30[d_69da_da62]] / 16;
        d_69da_db14 = d_4512_2db8[d_4512_1a30[d_69da_da62]] % 16;
    }
}

void f_829f_1b68(void)
{
    for (d_69da_d9a0 = 0; d_69da_d9a0 <= 13; d_69da_d9a0++)
        for (d_69da_d9ea = 0; d_69da_d9ea <= 2; d_69da_d9ea++) {
            if (d_69da_da60 < 80)
                d_4512_4726[d_69da_da60][d_69da_d9ea][d_69da_d9a0] = d_3668_e886[0][d_69da_d9ea][d_69da_d9a0];
            if (d_69da_da62 < 80)
                d_4512_4726[d_69da_da62][d_69da_d9ea][d_69da_d9a0] = d_3668_e886[1][d_69da_d9ea][d_69da_d9a0];
        }
    if (d_69da_da60 < 80)
        d_4512_2db8[d_4512_1a30[d_69da_da60]] = d_69da_db0e * 16 + d_69da_db10;
    if (d_69da_da62 < 80)
        d_4512_2db8[d_4512_1a30[d_69da_da62]] = d_69da_db12 * 16 + d_69da_db14;
}

void f_829f_1c66(int team)
{
    d_69da_db16 = team == d_69da_da60 ? d_69da_dadc : d_69da_dade;
    for (d_69da_d9a0 = 0; d_69da_d9a0 <= 13; d_69da_d9a0++) {
        if (team < 80) {
            d_69da_d9ae = d_4512_549a[team][d_69da_d9a0];
            if (!f_1a70_5b94(d_69da_d9ae)) {
                d_28da_2a78[16][d_69da_d9ae] = f_2162_0da1(d_28da_2a78[8][d_69da_d9ae]) == 0
                    ? f_2162_134e(d_28da_2a78[15][d_69da_d9ae] * (f_2162_0da1(3) + 4) * 0.1, 10)
                    : d_28da_2a78[15][d_69da_d9ae];
                if (d_69da_db16 > 65) {
                    if (d_69da_d9ae % 8 == 0)
                        d_28da_2a78[16][d_69da_d9ae] = f_2162_13ba(d_28da_2a78[16][d_69da_d9ae] + f_2162_0da1(10) + 15,
                                                                   d_28da_2a78[9][d_69da_d9ae] + 25);
                    else if (d_69da_d9ae % 8 == 1)
                        d_28da_2a78[16][d_69da_d9ae] = f_2162_134e(d_28da_2a78[16][d_69da_d9ae] - 15 - f_2162_0da1(10), 10);
                }
                if (d_4512_0290[team] > 0)
                    d_28da_2a78[16][d_69da_d9ae] = f_2162_13ba(d_28da_2a78[16][d_69da_d9ae] + f_b8da_2494(d_69da_d9ae),
                                                               d_28da_2a78[9][d_69da_d9ae] + 25);
            }
        } else {
            if (team == 80)
                d_69da_db18 = d_5dbf_0946[d_69da_daae];
            else if (team == 81)
                d_69da_db18 = d_5dbf_0946[d_69da_dab0];
            d_3668_e912[team == 81][d_69da_d9a0] = f_2162_134e(d_69da_db18 + f_2162_0da1(5) - f_2162_0da1(5), 1);
        }
    }
    if (team < 80) {
        if (d_4512_0290[team] > 0)
            d_4512_02e2[team]++;
        d_4512_0290[team] = 0;
    }
}

void f_829f_1ef0(void)
{
    f_8773_13f4(d_69da_da60);
    f_8773_13f4(d_69da_da62);
    f_8773_190b(d_69da_da60);
    f_8773_190b(d_69da_da62);
    f_829f_2d07();
    strcpy(d_536d_624d, "1st Half");
    if (d_69da_dac2 + d_69da_dac4 > 0) {
        f_8773_0714(0);
        f_1a70_5688(1);
        f_2162_0c51();
    }
    d_69da_db1a = 7;
    d_69da_dde7 = 0;
    for (;;) {
        d_69da_db1c = 0;
        do
            f_829f_242c();
        while (d_69da_da98 < d_69da_dac0);
        d_69da_dde7 = -1;
        while (d_69da_db1c > 0) {
            f_829f_242c();
            d_69da_db1c--;
        }
        d_69da_dde7 = 0;
        if (d_69da_dac2 + d_69da_dac4 > 0)
            f_2162_0dfb(50);
        if (d_69da_dac0 == 45) {
            d_536d_3066[0].home1 = d_69da_db06;
            d_536d_3066[0].away1 = d_69da_db08;
            strcpy(d_536d_624d, "2nd Half");
            d_69da_dac0 = 90;
            if (d_69da_dac2 + d_69da_dac4 > 0) {
                f_1a70_5688(0);
                f_8773_2d57();
                f_8773_3a79(d_69da_daae, d_69da_dab0, 0);
                f_8773_0714(0);
            }
            continue;
        }
        if (d_69da_dac0 == 90) {
            d_536d_3066[0].home2 = d_69da_db06;
            d_536d_3066[0].away2 = d_69da_db08;
            if (d_69da_db06 + d_69da_da68 == d_69da_db08 + d_69da_da6a
                && f_1a70_237e(d_69da_d996) == 0 && d_69da_d996 > 10) {
                if (d_69da_ddc0 != 0 && d_69da_db08 != d_69da_da68)
                    f_8773_0283();
                else if (f_829f_221f(d_69da_d996, d_69da_d9bc + 1)) {
                    d_69da_dac0 = 105;
                    strcpy(d_536d_624d, "Extra Time");
                    if (d_69da_dac2 + d_69da_dac4 > 0) {
                        f_8773_0a64(d_69da_da60, d_536d_624d);
                        f_1a70_5688(1);
                    }
                    continue;
                } else if (f_1a70_2490(d_69da_d996) || d_69da_d996 == 82)
                    f_8c32_353a();
            }
        }
        if (d_69da_dac0 == 105) {
            d_69da_dac0 = 120;
            if (d_69da_dac2 + d_69da_dac4 > 0)
                f_1a70_5688(1);
            continue;
        }
        if (d_69da_dac0 == 120) {
            d_536d_3066[1].home1 = d_69da_db06;
            d_536d_3066[1].away1 = d_69da_db08;
            if (d_69da_db06 + d_69da_da68 == d_69da_db08 + d_69da_da6a) {
                if (d_69da_ddc0 != 0 && d_69da_db08 != d_69da_da68)
                    f_8773_0283();
                else if (f_829f_227e(d_69da_d996, d_69da_d9bc + 1)) {
                    d_69da_dddc = -1;
                    strcpy(d_536d_624d, "Penalty Shoot-Out !");
                    if (d_69da_dac2 + d_69da_dac4 > 0)
                        f_1a70_5688(1);
                    f_8773_0d32();
                    d_536d_3066[1].home2 = d_69da_db06;
                    d_536d_3066[1].away2 = d_69da_db08;
                } else if (f_1a70_2490(d_69da_d996) || d_69da_d996 == 82)
                    f_8c32_353a();
            }
        }
        break;
    }
}

char f_829f_221f(int club, int round)
{
    if (f_1a70_29fa(club) || club == 78 || club == 92)
        return -1;
    if (d_69da_ddc0 != 0)
        return -1;
    if (club == 31 || club == 43 || club == 55 || club == 82 || club == 86
        || club == 91 || club == 97 || club == 98)
        return -1;
    return 0;
}

char f_829f_227e(int club, int round)
{
    if (f_829f_221f(club, round) && club != 78 && club != 92 && club != 82)
        return -1;
    return 0;
}

/* the formations' shirt numbers that 22b0 looks for */
static char far *d_69da_1f10[] = {
    "04 10 11 12 13", "07 11", "02 09", "06 14", "03 13"
};

void f_829f_22b0(int a, int b, int c)
{
    d_69da_db1e = b < 80 ? d_4512_00a4[b] : d_5dbf_0b12[b];
    if (c < 80) {
        d_69da_db20 = d_4512_00a4[c];
        d_69da_db22 = d_4512_00f6[c];
    } else {
        d_69da_db20 = d_5dbf_0b12[c];
        d_69da_db22 = d_5dbf_0cde[c];
    }
    if (a == b) {
        d_69da_da64 = d_69da_db1e / 16;
        d_69da_d9da = d_69da_db1e % 16;
    } else {
        d_69da_da64 = d_69da_db20 / 16;
        d_69da_d9da = d_69da_db20 % 16;
        d_69da_dddd = d_69da_db1e % 16 == d_69da_db20 % 16;
        if (d_69da_dddd == 0) {
            sprintf(d_536d_62ed, "%02d", d_69da_db1e % 16);
            sprintf(d_536d_633d, "%02d", d_69da_db20 % 16);
            for (d_69da_db24 = 0; d_69da_db24 <= 4; d_69da_db24++)
                if (strstr(d_69da_1f10[d_69da_db24], d_536d_62ed)
                    && strstr(d_69da_1f10[d_69da_db24], d_536d_633d)) {
                    d_69da_dddd = -1;
                    d_69da_db24 = 4;
                }
        }
        if (d_69da_dddd != 0) {
            d_69da_da64 = d_69da_db22 / 16;
            d_69da_d9da = d_69da_db22 % 16;
        }
    }
}

void f_829f_242c(void)
{
    d_69da_db26 = f_2162_0da1(d_69da_da2a - (d_69da_dada > 24
        ? (d_69da_da2a - d_69da_db28) / 3 - f_829f_2a8e(1, d_69da_da98) : 0));
    d_69da_db2a = f_2162_0da1(d_69da_db28 + (d_69da_dada > 24
        ? (d_69da_da2a - d_69da_db28) / 3 - f_829f_2ac9(1, d_69da_da98) : 0));
    if (d_69da_db26 >= d_69da_db2a) {
        d_69da_daf8++;
        d_69da_dda6 = 1;
        if (d_69da_dac2 + d_69da_dac4 > 0)
            f_829f_468e(3.5, 21.5);
        f_829f_2b04();
        f_829f_251b();
    } else {
        d_69da_dafa++;
        d_69da_dda6 = 2;
        if (d_69da_dac2 + d_69da_dac4 > 0)
            f_829f_468e(21.5, 3.5);
        f_829f_2b04();
        f_829f_25a9();
    }
}

void f_829f_251b(void)
{
    do {
        d_69da_db2c = 0;
        d_69da_db30 = f_2162_0da1(d_69da_db32 - f_829f_2a8e(2, d_69da_da98));
        d_69da_db34 = f_2162_0da1(d_69da_db36 - f_829f_2ac9(0, d_69da_da98));
        if (d_69da_db30 >= d_69da_db34) {
            d_69da_dafc++;
            f_829f_2b04();
            f_829f_2637();
        } else {
            d_69da_daf6++;
            f_829f_2b04();
        }
    } while (d_69da_db34 <= d_69da_db30 && d_69da_db2c == 0);
}

void f_829f_25a9(void)
{
    do {
        d_69da_db2c = 0;
        d_69da_db38 = f_2162_0da1(d_69da_db3a - f_829f_2ac9(2, d_69da_da98));
        d_69da_db3c = f_2162_0da1(d_69da_db3e - f_829f_2a8e(0, d_69da_da98));
        if (d_69da_db38 >= d_69da_db3c) {
            d_69da_dafe++;
            f_829f_2b04();
            f_829f_26a9();
        } else {
            d_69da_daf4++;
            f_829f_2b04();
        }
    } while (d_69da_db3c <= d_69da_db38 && d_69da_db2c == 0);
}

void f_829f_2637(void)
{
    d_69da_de36 = f_2162_0da1(d_69da_dd8a) == 0 ? -1 : 0;
    d_69da_d9f0 = d_69da_db06 * 20 + 180;
    d_69da_d9ee = f_2162_0da1(d_69da_db40) + (d_69da_de36 ? 100 : 0);
    if (d_69da_d9ee > d_69da_d9f0) {
        d_69da_daf0++;
        f_829f_2b04();
        f_829f_271b();
    } else
        f_829f_2b04();
}

void f_829f_26a9(void)
{
    d_69da_de36 = f_2162_0da1(d_69da_dd8c) == 0 ? -1 : 0;
    d_69da_d9f0 = d_69da_db08 * 20 + 180;
    d_69da_d9ee = f_2162_0da1(d_69da_db42) + (d_69da_de36 ? 100 : 0);
    if (d_69da_d9ee > d_69da_d9f0) {
        d_69da_daf2++;
        f_829f_2b04();
        f_829f_28d3();
    } else
        f_829f_2b04();
}

void f_829f_271b(void)
{
    char buf[320];

    d_69da_ddde = 0;
    d_69da_dddf = 0;
    d_69da_ddcb = 0;
    if (d_69da_dac2 + d_69da_dac4 > 0) {
        f_2162_07f7(0x57, 0x7e, 0x63, 0x84);
        sprintf(buf, "%d", d_69da_daf0);
        f_1a70_344b(0x60, 0x84, 5, buf);
    }
    d_69da_db44 = f_2162_0da1(d_69da_db46);
    if (d_69da_db44 < 26) {
        if (f_2162_0da1(30) == 0) {
            f_829f_2f1f(d_69da_da60);
            d_69da_dddf = -1;
        } else if (f_2162_0da1(2) == 0) {
            f_b8da_389a(d_69da_da60);
            d_69da_ddcb = -1;
        } else
            f_829f_2e96(d_69da_da60);
        d_69da_db2c = 1;
    } else if (d_69da_db44 < 29) {
        f_b8da_33c9(d_69da_da60);
        if (d_69da_dac2 + d_69da_dac4 > 0)
            f_8773_0995();
        d_69da_db2c = -d_69da_dde0;
        if (d_69da_dde0)
            d_69da_ddde = -1;
    } else if (d_69da_dac2 + d_69da_dac4 > 0 && d_69da_db44 < 50) {
        if (f_2162_0da1(10) == 0) {
            if (f_2162_0da1(2) == 0)
                f_8773_01cc(d_69da_da60);
            else {
                f_b8da_389a(d_69da_da60);
                f_b8da_3c33(d_69da_da60);
                f_8773_0a64(d_69da_da60, d_536d_624d);
            }
        } else if (f_2162_0da1(8) == 0)
            f_b8da_3289(d_69da_da60);
        else
            f_b8da_35cd(d_69da_da60);
    }
    if (d_69da_db2c == 1) {
        d_69da_db06++;
        f_8773_02ed(d_69da_d9ae, d_69da_ddde, d_69da_dddf, d_69da_ddcb, d_69da_db4a, d_69da_da60);
    }
    f_829f_2b04();
}

void f_829f_28d3(void)
{
    char buf[320];

    d_69da_ddde = 0;
    d_69da_dddf = 0;
    d_69da_ddcb = 0;
    if (d_69da_dac2 + d_69da_dac4 > 0) {
        f_2162_07f7(0xe7, 0x7e, 0xf3, 0x84);
        sprintf(buf, "%d", d_69da_daf2);
        f_1a70_344b(0xf0, 0x84, 5, buf);
    }
    d_69da_db44 = f_2162_0da1(d_69da_db48);
    if (d_69da_db44 < 26) {
        if (f_2162_0da1(30) == 0) {
            f_829f_2f1f(d_69da_da62);
            d_69da_dddf = -1;
        } else if (f_2162_0da1(2) == 0) {
            f_b8da_389a(d_69da_da62);
            d_69da_ddcb = -1;
        } else
            f_829f_2e96(d_69da_da62);
        d_69da_db2c = 1;
    } else if (d_69da_db44 < 29) {
        f_b8da_33c9(d_69da_da62);
        if (d_69da_dac2 + d_69da_dac4 > 0)
            f_8773_0995();
        d_69da_db2c = -d_69da_dde0;
        if (d_69da_dde0)
            d_69da_ddde = -1;
    } else if (d_69da_dac2 + d_69da_dac4 > 0 && d_69da_db44 < 50) {
        if (f_2162_0da1(10) == 0) {
            if (f_2162_0da1(2) == 0)
                f_8773_01cc(d_69da_da62);
            else {
                f_b8da_389a(d_69da_da62);
                f_b8da_3c33(d_69da_da62);
                f_8773_0a64(d_69da_da60, d_536d_624d);   /* sic: the home team, as in the original */
            }
        } else if (f_2162_0da1(8) == 0)
            f_b8da_3289(d_69da_da62);
        else
            f_b8da_35cd(d_69da_da62);
    }
    if (d_69da_db2c == 1) {
        d_69da_db08++;
        f_8773_02ed(d_69da_d9ae, d_69da_ddde, d_69da_dddf, d_69da_ddcb, d_69da_db4a, d_69da_da62);
    }
    f_829f_2b04();
}

unsigned char f_829f_2a8e(unsigned char a, int b)
{
    return b < 60 ? 0 : d_3668_e92e[a][f_2162_13ba(b - 60, 59)];
}

unsigned char f_829f_2ac9(unsigned char a, int b)
{
    return b < 60 ? 0 : d_3668_e9e2[a][f_2162_13ba(b - 60, 59)];
}

void f_829f_2b04(void)
{
    char key[4];
    char c;

    d_69da_db00++;
    d_69da_da98 = d_69da_db00 / 2;
    if (d_69da_da98 > d_69da_dac0) {
        d_69da_da98 = d_69da_dac0;
        d_69da_db00 = d_69da_da98 * 2;
    }
    if (d_69da_dac2 + d_69da_dac4 > 0) {
        f_8773_0143(d_69da_da98);
        f_829f_46d4();
        strcpy(key, strupr(f_2162_0d1a()));
        c = f_2162_0c2b();
        if (c != 3 && key[0] != ' ') {
            f_2162_0dfb(9);
            if (d_69da_dae8 == 0 && (c == 1 || c != 0 && d_69da_daec == 1 || key[0] == 'H'))
                f_829f_3ff9(d_69da_da60, 0);
            if (d_69da_daec == 0 && (c == 2 || c != 0 && d_69da_dae8 == 1 || key[0] == 'A'))
                f_829f_3ff9(d_69da_da62, 0);
        }
    }
    if (f_2162_0da1(d_69da_db4c) == 0)
        f_829f_3120(d_69da_da60);
    if (f_2162_0da1(d_69da_db4e) == 0)
        f_829f_3120(d_69da_da62);
    if (d_69da_da98 > 65) {
        if (d_69da_dae8 == 1 && d_69da_da98 > d_69da_db50 && d_4512_5d98[0][11] == 4 && d_69da_dde1 &&
            d_69da_ddb1 < 2)
            f_829f_4146(d_69da_da60, 1);
        if (d_69da_daec == 1 && d_69da_da98 > d_69da_db52 && d_4512_5d98[1][11] == 4 && d_69da_dde2 &&
            d_69da_ddb2 < 2)
            f_829f_4146(d_69da_da62, 1);
        if (d_69da_dae8 == 1 && d_69da_da98 > d_69da_db50 && d_4512_5d98[0][12] == 4 && d_69da_dde3 &&
            d_69da_ddb1 < 2)
            f_829f_4146(d_69da_da60, 1);
        if (d_69da_daec == 1 && d_69da_da98 > d_69da_db52 && d_4512_5d98[1][12] == 4 && d_69da_dde4 &&
            d_69da_ddb2 < 2)
            f_829f_4146(d_69da_da62, 1);
    }
}

void f_829f_2d07(void)
{
    d_69da_db50 = f_2162_0da1(20) + 65;
    d_69da_db52 = f_2162_0da1(20) + 65;
    d_69da_dde1 = 0;
    d_69da_dde3 = 0;
    d_69da_dde2 = 0;
    d_69da_dde4 = 0;
    if (d_69da_db06 + d_69da_da68 < d_69da_db08 + d_69da_da6a ||
        d_69da_db06 + d_69da_da68 == d_69da_db08 + d_69da_da6a && d_69da_db08 >= d_69da_da68) {
        d_69da_dde1 = -1;
        d_69da_dde3 = -1;
    }
    if (d_69da_db08 + d_69da_da6a < d_69da_db06 + d_69da_da68 ||
        d_69da_db08 + d_69da_da6a == d_69da_db06 + d_69da_da68 && d_69da_db06 >= d_69da_da6a) {
        d_69da_dde2 = -1;
        d_69da_dde4 = -1;
    }
    f_829f_2dcf(d_69da_da60);
    f_829f_2dcf(d_69da_da62);
}

void f_829f_2dcf(int team)
{
    if (f_1a70_2bc7(team) == 0) {
        for (d_69da_d9d2 = 11; d_69da_d9d2 <= 12; d_69da_d9d2++) {
            for (d_69da_d9ea = 2; d_69da_d9ea <= 10; d_69da_d9ea++) {
                if (f_1a70_6514(d_4512_549a[team][d_69da_d9d2], d_69da_d9ea)) {
                    d_4512_4726[team][0][d_69da_d9d2] = d_69da_d9ea + (d_69da_d9ea < 5 ? 3 : 0);
                    d_3668_e886[team == d_69da_da62 ? 1 : 0][0][d_69da_d9d2] = d_69da_d9ea + (d_69da_d9ea < 5 ? 3 : 0);
                }
            }
        }
    }
}

void f_829f_2e96(int team)
{
    d_69da_da6e = 0;
    d_69da_db4a = -1;
    for (d_69da_d9a0 = 0; d_69da_d9a0 <= 13; d_69da_d9a0++) {
        if (d_4512_5d98[team == d_69da_da62][d_69da_d9a0] < 2) {
            if ((d_69da_db54 = f_829f_2f62(team, d_69da_d9a0)) > d_69da_da6e) {
                d_69da_da6e = d_69da_db54;
                d_69da_d9ae = d_4512_549a[team][d_69da_d9a0];
                d_69da_db4a = d_69da_d9a0;
            }
        }
    }
}

void f_829f_2f1f(int team)
{
    int other;

    other = team == d_69da_da60 ? d_69da_da62 : d_69da_da60;
    d_69da_db4a = f_b8da_3d49(other);
    d_69da_d9ae = d_4512_549a[other][d_69da_db4a];
}

int f_829f_2f62(int team, int p)
{
    d_69da_da86 = d_4512_4726[team][0][p];
    if (d_69da_da86 > 1) {
        d_69da_dda7 = d_4512_4726[team][2][p];
        if (d_69da_dda7 == 1)
            d_69da_da24 = 1;
        else if (d_69da_dda7 == 2)
            d_69da_da24 = -1;
        else
            d_69da_da24 = 0;
        switch (d_69da_da86 ? d_69da_da86 : d_69da_da86) {   /* the value as a temporary in AX: sub ax,2 / mov bx,ax */
        case 2:
        case 3:
        case 11:
        case 12:
            d_69da_db54 = 5;
            break;
        case 4:
            d_69da_db54 = 10;
            break;
        case 5:
        case 6:
            d_69da_db54 = 15;
            break;
        case 7:
        case 8:
        case 9:
        case 13:
            d_69da_db54 = 20;
            break;
        case 10:
            d_69da_db54 = 35;
            break;
        }
        d_69da_db54 += d_69da_da24 * 5 + f_8773_14f6(p, team) * 2;
        if (team < 80) {
            if (!f_1a70_5b94(d_4512_549a[team][p]))
                d_69da_db54 = d_28da_2a78[7][d_4512_549a[team][p]] * 0.75 +
                              (d_69da_de36 ? d_28da_2a78[5][d_4512_549a[team][p]] * 10 : 0) + d_69da_db54;
        } else
            d_69da_db54 += 10;
        d_69da_db56 = d_69da_db54;
        d_69da_db54 += f_2162_0da1(125);
    } else {
        d_69da_db56 = 0;
        d_69da_db54 = 0;
    }
    return d_69da_db54;
}

void f_829f_3120(int team)
{
    d_69da_dde5 = 0;
    d_69da_da38 = team == d_69da_da60 ? d_69da_da62 : d_69da_da60;
    d_69da_d9ae = -1;
    d_69da_db58 = 0;
    do {
        do {
            d_69da_d9a0 = f_2162_0da1(14);
        } while (d_4512_4726[team][0][d_69da_d9a0] <= 1 ||
                 d_4512_5d98[team == d_69da_da62][d_69da_d9a0] >= 2);
        if ((d_69da_db5a = f_2162_0da1(d_4512_5d98[team == d_69da_da62 ? 5 : 4][d_69da_d9a0] + 10 + f_2162_0da1(4))) > d_69da_d9e0 ||
            d_69da_d9ae == -1) {
            d_69da_d9ae = d_69da_d9a0;
            d_69da_d9e0 = d_69da_db5a;
        }
        d_69da_db58++;
    } while (d_69da_d9ae <= -1 || d_69da_db58 < 5);
    d_69da_db5c = d_4512_4726[team][0][d_69da_d9ae];
    d_69da_db5e = -1;
    d_69da_db58 = 0;
    do {
        do {
            d_69da_d9a0 = f_2162_0da1(14);
            d_69da_db60 = d_4512_4726[d_69da_da38][0][d_69da_d9a0];
        } while (d_4512_5d98[d_69da_da38 == d_69da_da62][d_69da_d9a0] >= 2);
        d_69da_db5a = f_1a70_66a9(d_69da_db5c) && f_1a70_66f0(d_69da_db60) ||
                      f_1a70_66cf(d_69da_db5c) && f_1a70_66cf(d_69da_db60) ||
                      f_1a70_66f0(d_69da_db5c) && (d_69da_db60 == 1 || f_1a70_66a9(d_69da_db60)) ? 11 : 0;
        d_69da_db5a += f_1a70_6711(d_69da_db5c) && f_1a70_6737(d_69da_db60) ||
                       f_1a70_675d(d_69da_db5c) && f_1a70_675d(d_69da_db60) ||
                       f_1a70_6737(d_69da_db5c) && f_1a70_6711(d_69da_db60) ? 10 : 0;
        if (d_69da_db5a > d_69da_d9e0 || d_69da_db5e == -1) {
            d_69da_db5e = d_69da_d9a0;
            d_69da_d9e0 = d_69da_db5a;
        }
        d_69da_db58++;
    } while (d_69da_db5e <= -1 || d_69da_db58 < 5);
    if (d_69da_dac2 + d_69da_dac4 > 0) {
        if (team < 80)
            strcpy(d_536d_6391, f_1a70_4739(d_4512_549a[team][d_69da_d9ae]));
        else
            sprintf(d_536d_6391, "No.%s", f_1a70_2e4a(d_69da_d9ae + 1, 0));
        if (d_69da_da38 < 80) {
            strcpy(d_536d_63e1, f_1a70_4739(d_4512_549a[d_69da_da38][d_69da_db5e]));
            if (!f_1a70_5b94(d_4512_549a[d_69da_da38][d_69da_db5e]))
                d_69da_dde5 = f_2162_0da1(d_28da_2a78[14][d_4512_549a[d_69da_da38][d_69da_db5e]] + 10) < f_2162_0da1(10);
            else
                d_69da_dde5 = f_2162_0da1(5) == 0;
        } else {
            sprintf(d_536d_63e1, "their no.%s", f_1a70_2e4a(d_69da_db5e + 1, 0));
            d_69da_dde5 = f_2162_0da1(2) == 0;
        }
    }
    f_829f_3f9c();
    d_69da_dde6 = 0;
    switch (d_69da_db62 ? d_69da_db62 : d_69da_db62) {
    case 0:
    case 1:
    case 2:
    case 5:
    case 6:
    case 7:
    case 11:
    case 15:
    case 17:
    case 18:
    case 20:
        if (d_69da_da38 < 80) {
            if (!f_1a70_5b94(d_4512_549a[d_69da_da38][d_69da_db5e]))
                d_69da_dde8 = f_2162_0da1(d_28da_2a78[13][d_4512_549a[d_69da_da38][d_69da_db5e]]) > f_2162_0da1(10);
            else
                d_69da_dde8 = f_2162_0da1(10) > f_2162_0da1(10);
        } else
            d_69da_dde8 = f_2162_0da1(12) > f_2162_0da1(10);
        if (d_69da_dde8)
            f_829f_3668(team, d_69da_d9ae, d_69da_da38, d_69da_db5e);
        break;
    }
    f_829f_3b05(team, d_69da_d9ae);
    if (d_69da_dde5)
        d_4512_5d98[d_69da_da38 == d_69da_da62 ? 5 : 4][d_69da_db5e] = 20;
    if (d_69da_dac2 + d_69da_dac4 > 0)
        f_8773_0a64(d_69da_da60, d_536d_624d);
}

void f_829f_3668(int a, int b, int team, int n)
{
    int old = d_69da_d9ae;
    int saved = d_69da_db5e;
    char hurt;
    char r;
    char buf[320];

    hurt = f_2162_0da1(3) == 0 ? -1 : 0;
    d_69da_d9ae = b;
    d_69da_db5e = n;
    if (d_69da_dac2 + d_69da_dac4 > 0) {
        sprintf(buf, "%s injured by %s", d_536d_63e1, d_536d_6391);
        f_8773_0a64(team, buf);
        f_2162_0dfb(100);
        f_8773_0ada();
        sprintf(buf, "He was %s", d_536d_6431);
        f_8773_0a64(a, buf);
        f_2162_0dfb(75);
        f_8773_0ada();
        if (hurt) {
            r = f_2162_0da1(4);
            if (r == 0) {
                sprintf(buf, "He's struggling");
                f_8773_0a64(team, buf);
                d_4512_5d98[team == d_69da_da62 ? 3 : 2][d_69da_db5e] =
                    d_4512_5d98[team == d_69da_da62 ? 3 : 2][d_69da_db5e] * 0.8;
                f_8773_190b(team);
            } else if (r == 1) {
                sprintf(buf, "He looks in trouble");
                f_8773_0a64(team, buf);
                d_4512_5d98[team == d_69da_da62 ? 3 : 2][d_69da_db5e] =
                    d_4512_5d98[team == d_69da_da62 ? 3 : 2][d_69da_db5e] * 0.8;
                f_8773_190b(team);
            } else if (r == 2) {
                sprintf(buf, "He should be ok");
                f_8773_0a64(team, buf);
            } else if (r == 3) {
                sprintf(buf, "He's ok though");
                f_8773_0a64(team, buf);
            }
        } else {
            sprintf(buf, "He'll have to come off");
            f_8773_0a64(team, buf);
        }
        f_2162_0dfb(100);
        f_8773_0ada();
        d_69da_dde6 = -1;
    }
    if (hurt == 0) {
        d_4512_5d98[team == d_69da_da62][d_69da_db5e] = 6;
        if (team < 80) {
            sprintf(buf, "%s%04d", d_536d_6481, d_4512_549a[team][d_69da_db5e]);
            strcpy(d_536d_6481, buf);
            f_b085_77f9(d_4512_549a[team][d_69da_db5e], 4);
        }
        d_69da_db64 = 0;
        d_69da_db66 = 1;
        if (d_4512_4726[team][0][d_69da_db5e] > 7 && d_4512_4726[team][0][d_69da_db5e] < 11) {
            d_69da_db64 = 1;
            d_69da_db66 = 0;
        }
        if (f_1a70_2bc7(team)) {
            d_69da_ddd2 = -1;
            f_c06b_0000(team);
            d_69da_ddd2 = 0;
            for (d_69da_d9a0 = 0; d_69da_d9a0 <= 13; d_69da_d9a0++)
                d_4512_5d98[team == d_69da_da62 ? 3 : 2][d_69da_d9a0] = 0;
            f_8773_190b(team);
            f_8773_0714(d_69da_dda6);
            f_8773_0a64(d_69da_da60, d_536d_624d);
        } else if (d_4512_4726[team][0][d_69da_db5e] == 1 && d_4512_5da3[team == d_69da_da62][2] == 4 &&
                   (team == d_69da_da60 && d_69da_ddb1 < 2 || team == d_69da_da62 && d_69da_ddb2 < 2) &&
                   f_1a70_5ea2(team, d_69da_d996, d_69da_d9bc + 1)) {
            f_829f_4146(team, 2);
        } else if (d_4512_5da3[team == d_69da_da62][d_69da_db64] == 4 &&
                   (team == d_69da_da60 && d_69da_ddb1 < 2 || team == d_69da_da62 && d_69da_ddb2 < 2)) {
            f_829f_4146(team, d_69da_db64);
        } else if (d_4512_5da3[team == d_69da_da62][d_69da_db66] == 4 &&
                   (team == d_69da_da60 && d_69da_ddb1 < 2 || team == d_69da_da62 && d_69da_ddb2 < 2)) {
            f_829f_4146(team, d_69da_db66);
        } else {
            f_8773_190b(team);
            d_69da_db1c += f_2162_0da1(3) * 2;
        }
    } else
        d_69da_db1c += f_2162_0da1(3) * 2;
    d_69da_d9ae = old;
    d_69da_db5e = saved;
}

void f_829f_3b05(int team, int p)
{
    volatile int r;     /* stored, then the switch reads AX: only volatile keeps the dead store */
    char buf[320];

    d_69da_db68 = 0;
    d_69da_da6e = d_69da_db62 >= 15 && f_2162_0da1(3) > 0 ? (int)f_2162_0da1(2) + 1 : (int)f_2162_0da1(2);
    if (d_69da_da6e == 2 || d_69da_da6e == 1 && d_4512_5d98[team == d_69da_da62][p] == 1) {
        if (f_2162_0da1(2) == 0)
            strcpy(d_536d_65c1, "Sent off");
        else
            strcpy(d_536d_65c1, "Shown the red card");
        d_4512_5d98[team == d_69da_da62][p] = 2;
        d_4512_5e08[team == d_69da_da60 ? 0 : 1][p] = d_69da_da98;
        if (team < 80) {
            sprintf(buf, "%s%04d", d_536d_6611, d_4512_549a[team][p]);
            strcpy(d_536d_6611, buf);
            f_b085_77f9(d_4512_549a[team][p], 3);
        }
        d_69da_db68 = 2;
        f_8773_190b(team);
        d_69da_db1c += f_2162_0da1(2) * 2;
    } else if (d_69da_da6e == 1) {
        if (f_2162_0da1(2) == 0)
            strcpy(d_536d_65c1, "Booked");
        else
            strcpy(d_536d_65c1, "Shown the yellow card");
        d_4512_5d98[team == d_69da_da62][p] = 1;
        if (team < 80) {
            sprintf(buf, "%s%04d", d_536d_6751, d_4512_549a[team][p]);
            strcpy(d_536d_6751, buf);
            f_b085_77f9(d_4512_549a[team][p], 2);
        }
        d_69da_db68 = 6;
    } else if (d_69da_da6e == 0) {
        switch (r = f_2162_0da1(4)) {
        case 0: strcpy(d_536d_65c1, "warned"); break;
        case 1: strcpy(d_536d_65c1, "lectured"); break;
        case 2: strcpy(d_536d_65c1, "ticked off"); break;
        case 3: strcpy(d_536d_65c1, "spoken to"); break;
        }
        d_69da_db68 = 1;
    }
    if (d_69da_dac2 + d_69da_dac4 > 0 && d_69da_db68 > 0) {
        f_8773_0ada();
        if (team == d_69da_da60)
            f_829f_22b0(d_69da_daae, d_69da_daae, d_69da_dab0);
        else
            f_829f_22b0(d_69da_dab0, d_69da_daae, d_69da_dab0);
        strcpy(buf, d_536d_6391);
        f_1a70_3d0c(3.0, 8.5, -d_69da_da64, d_69da_d9da, 0, buf);
        f_1a70_3b47(strlen(d_536d_6391) + 5, 8.5, d_69da_db68, d_536d_65c1);
        if (d_69da_dde6 == 0) {
            if (strcmp(f_2162_0f6e(d_536d_6431, 1), "*") == 0) {
                d_536d_6431[strlen(d_536d_6431) - 1] = 0;
            } else {
                strcat(d_536d_6431, " ");
                strcat(d_536d_6431, d_536d_63e1);
            }
            f_2162_0dfb(75);
            f_8773_0ada();
            sprintf(buf, "He %s", d_536d_6431);
            f_8773_0a64(team, buf);
        }
        f_2162_0dfb(75);
        f_8773_0ada();
        if (d_69da_db68 == 2 && f_1a70_2bc7(team)) {
            d_69da_ddd2 = -1;
            f_c06b_0000(team);
            d_69da_ddd2 = 0;
            for (d_69da_d9a0 = 0; d_69da_d9a0 <= 13; d_69da_d9a0++)
                d_4512_5d98[team == d_69da_da62 ? 3 : 2][d_69da_d9a0] = 0;
            f_8773_190b(team);
            f_8773_0714(d_69da_dda6);
            f_8773_0a64(d_69da_da60, d_536d_624d);
        }
    }
}

/* the commentary's fouls */
static char far *d_69da_1f24[] = {
    "brought down", "hacked at", "kicked", "body checked", "obstructed", "up-ended",
    "flattened", "tripped", "pushed", "shoved", "held back", "clattered into",
    "handballed*", "said too much*", "kicked the ball away*", "punched", "headbutted",
    "brought down", "cynically hacked", "spat at", "elbowed"
};

void f_829f_3f9c(void)
{
    d_69da_db6a = f_2162_0da1(100) + 1;
    if (d_69da_db6a <= 85)
        d_69da_db62 = f_2162_0da1(15);
    else
        d_69da_db62 = f_2162_0da1(6) + 15;
    strcpy(d_536d_6431, d_69da_1f24[d_69da_db62]);
}

void f_829f_3ff9(int team, char c)
{
    int saved;
    char buf[320];
    int k;

    saved = d_69da_d9d8;
    d_69da_d9d8 = team;
    for (;;) {
        f_1a70_4a41("Tactical move");
        f_1a70_442b(1.0, 4.0, d_69da_d9d8);
        strcpy(buf, "*Exit|Tactical change|Opponents team|");
        if (c == 0)
            strcat(buf, "Match Stats|");
        f_1a70_2eaa(7, "", buf);
        /* the label makes BCC pop 2eaa's arguments before this call, as the original */
    l:  f_1a70_3226(c + 3);
        k = d_69da_d992;
        if (k == 1) {
            d_69da_ddd2 = -1;
            f_c06b_0000(d_69da_d9d8);
            d_69da_ddd2 = 0;
            for (d_69da_d9a0 = 0; d_69da_d9a0 <= 13; d_69da_d9a0++)
                d_4512_5d98[d_69da_d9d8 == d_69da_da62 ? 3 : 2][d_69da_d9a0] = 0;
            f_8773_190b(d_69da_d9d8);
        } else if (k == 2) {
            if (d_69da_d9d8 == d_69da_da60)
                d_69da_da7a = d_69da_da62;
            else
                d_69da_da7a = d_69da_da60;
            f_c06b_0000(d_69da_da7a);
        } else if (k == 3) {
            f_8773_2d57();
            f_8773_3a79(d_69da_daae, d_69da_dab0, 0);
        } else
            break;
    }
    if (c == 0) {
        f_8773_0714(d_69da_dda6);
        f_8773_0a64(d_69da_da60, d_536d_624d);
    }
    d_69da_d9d8 = saved;
}

void f_829f_4146(int team, int mode)
{
    char buf[320];

    f_829f_45e0(team);
    if (mode == 2)
        d_69da_db6e = 13;
    if (team == d_69da_da60) {
        d_69da_db5e = d_69da_da62;
        d_69da_db6c = d_69da_dae0;
    } else {
        d_69da_db5e = d_69da_da60;
        d_69da_db6c = d_69da_dae4;
    }
    d_69da_da86 = d_4512_4726[team][0][d_69da_db6e];
    if (d_69da_db6c == 0) {
        if (d_69da_da86 > 7) {
            d_69da_d9d2 = 5;
            d_69da_d9a0 = 10;
        } else {
            d_69da_d9d2 = 2;
            d_69da_d9a0 = 7;
        }
    }
    if (d_69da_db6c == 1) {
        d_69da_d9d2 = 8;
        d_69da_d9a0 = 10;
    }
    if (d_69da_db6c == 2) {
        d_69da_d9d2 = 2;
        d_69da_d9a0 = 10;
    }
    d_69da_db70 = 0;
    d_69da_d9ae = -1;
    for (d_69da_d9ea = 0; d_69da_d9ea <= 13; d_69da_d9ea++) {
        if (d_4512_5d98[team == d_69da_da62][d_69da_d9ea] == 6) {
            d_69da_d9ae = d_69da_d9ea;
            d_69da_d9ea = 13;
        } else if (d_4512_4726[team][0][d_69da_d9ea] >= d_69da_d9d2
                   && d_4512_4726[team][0][d_69da_d9ea] <= d_69da_d9a0
                   && d_4512_5d98[team == d_69da_da62][d_69da_d9ea] < 2) {
            d_69da_db18 = f_8773_14f6(d_69da_d9ea, team);
            if (d_69da_db72 - d_69da_db18 > d_69da_db70) {
                d_69da_db70 = d_69da_db72 - d_69da_db18;
                d_69da_d9ae = d_69da_d9ea;
            }
        }
    }
    if (d_69da_d9ae != -1) {
        strcpy(d_536d_52ad, "tactical");
        if (d_4512_5d98[team == d_69da_da62][d_69da_d9ae] == 6) {
            strcpy(d_536d_52ad, "enforced");
            d_4512_4726[team][0][d_69da_db6e] = d_4512_4726[team][0][d_69da_d9ae];
        }
        if (team < 80) {
            strcpy(d_536d_52fd, f_1a70_46c1(d_4512_549a[team][d_69da_db6e]));
            strcat(d_536d_52fd, " on for ");
            strcat(d_536d_52fd, f_1a70_46c1(d_4512_549a[team][d_69da_d9ae]));
        } else {
            sprintf(d_536d_52fd, "Their No.%s on for their No.%s",
                    f_1a70_2e4a(d_69da_db6e + 1, 0), f_1a70_2e4a(d_69da_d9ae + 1, 0));
        }
        d_4512_5d98[team == d_69da_da62][d_69da_db6e] = 0;
        if (d_4512_5d98[team == d_69da_da62][d_69da_d9ae] == 6)
            d_4512_5d98[team == d_69da_da62][d_69da_d9ae] = 3;
        else
            d_4512_5d98[team == d_69da_da62][d_69da_d9ae] = 5;
        d_4512_5e08[team == d_69da_da60 ? 0 : 1][d_69da_d9ae] = d_69da_da98;
        d_4512_5dec[team == d_69da_da60 ? 0 : 1][d_69da_db6e] = d_69da_da98;
        d_28da_2a72[team == d_69da_da62][d_69da_db6e - 11] = d_69da_d9ae;
        d_3668_e880[team == d_69da_da62][d_69da_db6e - 11] = d_69da_da98;
        if (team == d_69da_da60)
            d_69da_ddb1++;
        else
            d_69da_ddb2++;
        f_8773_190b(team);
        if (d_69da_dac2 + d_69da_dac4 > 0) {
            sprintf(buf, "%s %s move", (char far *)d_69da_b1fc[team], d_536d_52ad);
            f_8773_0a64(team, buf);
            f_2162_0dfb(75);
            f_8773_0a64(team, d_536d_52fd);
            f_2162_0dfb(100);
            f_8773_0a64(d_69da_da60, d_536d_624d);
        }
    }
    if (team == d_69da_da60) {
        if (d_69da_dde1)
            d_69da_dde1 = 0;
        else
            d_69da_dde3 = 0;
    } else {
        if (d_69da_dde2)
            d_69da_dde2 = 0;
        else
            d_69da_dde4 = 0;
    }
}

void f_829f_45e0(int team)
{
    int a;
    int b;

    d_69da_db5e = team == d_69da_da60 ? d_69da_da62 : d_69da_da60;
    a = -5000;
    b = -5000;
    if (d_4512_5d98[team == d_69da_da62][11] == 4)
        a = f_8773_14f6(11, team);
    if (d_4512_5d98[team == d_69da_da62][12] == 4)
        b = f_8773_14f6(12, team);
    if (b > a) {
        d_69da_db6e = 12;
        d_69da_db72 = b;
    } else {
        d_69da_db6e = 11;
        d_69da_db72 = a;
    }
}

void f_829f_468e(float x, float y)
{
    f_2162_07f7(18, 112, 261, 120);
    f_1a70_379b(x, 15.0, 6, "Attacking...");
    f_1a70_379b(y, 15.0, 12, "Defending...");
}

void f_829f_46d4(void)
{
    f_8773_0000(d_69da_daf4, d_69da_dafe, 0, 2);
    f_8773_0000(d_69da_daf8, d_69da_dafa, 1, 1);
    f_8773_0000(d_69da_dafc, d_69da_daf6, 2, 0);
}
