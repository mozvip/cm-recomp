/* @at 8539:0000 */
/* @data 5d51:3222 */

/* Overlay 8539: CM93's overlay 8aa1 (games/cm93/decomp/src/8AA1.C) changed for CM Italia:
 * transfers and contracts: the cup group tables, picking and approaching players, bids,
 * fees, asking prices and tribunals, contract and wage talks, the offer and factfile
 * screens, completing transfers and the shortlist.
 *
 * Not a whole module yet: the overlay's last function, f_8539_5313 (5313-5f56, CM93's
 * f_8aa1_5253, CM1's f_8352_46de, the menu of things to do with one of your own players),
 * is still the original bytes, as in CM1 and CM93. A C draft that matches its first 0x410
 * bytes is in the (git-ignored) work folder decomp/wip/8539/f5313_draft.c. Its string
 * literals follow this file's data. */
#include <stdio.h>
#include <string.h>
#include <mem.h>
#include <math.h>
#include <stdlib.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_8539_0000(void);
void f_8539_0238(void);
unsigned char f_8539_05d0(unsigned char skip);
void f_8539_06be(void);
void f_8539_0738(void);
void f_8539_0966(void);
void f_8539_0de6(int n);
char f_8539_1022(int team);
void f_8539_10a5(int team);
int f_8539_1179(int team);
void f_8539_12d9(void);
void f_8539_1563(int p);
char f_8539_175f(int p, int team);
void f_8539_1978(int p, char all);
void f_8539_1aa0(int team);
int f_8539_1b9e(int team, int p);
void f_8539_1bf1(void);
void f_8539_1e06(int team, int player, char loan);
char f_8539_2868(int p, int team, int n);
int f_8539_2a25(int a, int b);
char f_8539_2b28(int x, int team, int p);
void f_8539_2cf5(int team);
long f_8539_326d(int player, int club, long fee);
long f_8539_3513(int club, int player, long fee);
void f_8539_375d(int player, int club);
int f_8539_3bd1(int player, int team);
int f_8539_3d68(int age);
void f_8539_3db1(int mode, int player);
void f_8539_3f43(int player, char lit);
int f_8539_4022(int mode, int value, int lo, int player);
void f_8539_4340(int n, char draw);
void f_8539_4451(int colour, char far *s);
void f_8539_4508(int player, int to, int from, long fee, unsigned char kind);
void f_8539_4d09(int player, int from, int to, char kind);
void f_8539_4fbd(int player, int a);
char f_8539_51af(int player, char flag);

struct pbits { unsigned b0 : 1; /* ddbf bit 0 */ unsigned b1 : 1; unsigned b2 : 1; unsigned : 1; unsigned b4 : 1; unsigned : 11; unsigned c0 : 1; /* ddc1 bit 0 */ unsigned : 5; unsigned c6 : 1; unsigned : 9; };
extern struct pbits far d_2414_af3d[];
void f_1d5e_13a4(void far *a, void far *b, int n);
void far *f_1d5e_1618(int handle, int page);
long f_1d5e_131d(long a, long b);
long f_1d5e_0d6a(long n);
int f_1646_6aa9(int x);
char f_1646_2cc9(int x);
char f_1646_6971(char x);
char f_1646_6ae2(int player, char c);
int f_1646_6f80(int player, int club);
char f_b0f1_4e9f(int player);
char f_8ba7_0558(int player);
char f_8ba7_087e(int player);
void f_8ba7_0a06(int player, char c, char d);
void f_8ba7_0af2(int player);
void f_8ba7_0000(int player, int club, int v);
long f_1646_0da1(long v, char c);
void f_b0f1_66b9(char stage);
void f_b0f1_6835(char stage, unsigned i, unsigned n);
void f_b0f1_6c58(void);
void f_1646_58a8(int a);
void f_1646_0bf2(char far *s);
extern int d_5d51_da06;
extern int d_5d51_d9d0;
extern int d_5d51_d9fe;
extern int d_5d51_d9b8;
extern int d_5d51_d934;
extern int d_5d51_d7e8;
extern int d_5d51_d7e6;
extern int d_5d51_d7e4;
extern int d_5d51_d7e2;
extern int d_5d51_d8a6;
extern int d_5d51_d8a4;
extern int d_5d51_d7e0;
extern int d_5d51_d7de;
extern int d_5d51_d7dc;
extern int d_5d51_d7da;
extern int d_5d51_d9f0;
extern int d_5d51_da04;
extern int d_5d51_da1a;
extern int d_5d51_dda2;
extern int d_5d51_dd9c;
extern char d_5d51_d5ae;
extern char d_5d51_d5ea;
extern long far *d_5d51_da58;
extern int (far *d_5d51_da4c)[1500];
extern unsigned char far d_2414_d5b4[][2][4];
extern int far d_2414_d5e4[][4];
extern unsigned char far d_2414_d3e0[][6][5];
extern int far d_2414_d578[][5];
extern int far d_3404_09a6[];
extern int far d_3404_0bfe[];
extern int far d_3404_691c[];
extern int far d_3404_4226[];
extern unsigned char far d_44d7_0000[][1500];
extern unsigned char far d_3c0d_0000[][1500];
int f_1d5e_136a(int a, int b);
int f_1646_46e2(int team);
char f_1646_2e15(int x);
long f_1646_0204(int p, int n);
long f_1646_5ac3(int team);
int f_1646_2dce(int x);
float f_1646_2cfd(int x);
char f_1646_66f8(int a, int b);
long f_1646_23f5(int player, int team, unsigned char pos, unsigned char second);
char f_1646_6f38(int player);
void f_b0f1_44cf(unsigned player, unsigned char team);
char f_b0f1_4f0a(int p, unsigned char c);
struct flags_a { unsigned char b0; unsigned f8 : 1; unsigned f9 : 1; unsigned : 6; unsigned : 2; unsigned f18 : 1; unsigned : 5; unsigned : 0; unsigned f24 : 1; unsigned : 3; unsigned f28 : 1; unsigned : 1; unsigned f30 : 1; unsigned : 1; };
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
union flags { struct flags_a a; struct flags_w w; };
extern union flags far d_2414_af3c[];
extern int d_5d51_d996;
extern int d_5d51_d84a;
extern int d_5d51_d9cc;
extern int d_5d51_d9e4;
extern int d_5d51_d9ac;
extern int d_5d51_d8ee;
extern int d_5d51_d7d2;
extern int d_5d51_d7d4;
extern int d_5d51_da18;
extern char d_5d51_d560;
extern char d_5d51_d55b;
extern char d_5d51_d5ac;
extern char d_5d51_d5ad;
extern char d_5d51_d5ca;
extern float d_5d51_d549;
extern float d_5d51_d4f9;
extern float d_5d51_d4fd;
extern unsigned char far d_3404_1334[][3][16];
extern unsigned char far d_3404_225c[];
extern long far d_3404_3e4a[][38];
extern int far d_3404_4272[];
extern unsigned char far d_3404_452a[];
extern unsigned char far d_3404_4552[];
extern unsigned char far d_3404_4782[];
extern unsigned char far d_3404_4e3a[];
extern unsigned char far d_3404_4f52[];
extern int far d_3404_0260[][16];
extern char far d_3404_0000[][16];
extern int far d_44d7_9ddc[][2][13];
extern unsigned char far d_4f37_0960[][10];
void f_1646_2fa4(int n, char far *title, char far *items);
void f_1646_3348(int last);
void f_1646_459b(float x, float y, int team);
void f_1d5e_0dbd(int ticks);
char far *f_1646_470f(int player);
char far *f_1646_48c0(int player);
char f_8ba7_00fa(int player, int team, char loan);
void f_1646_0b2f(int line, char far *s);
void f_1646_0b9f(char far *s);
extern char near *d_5d51_b476[];
extern char d_5d51_d5a6;
extern char d_5d51_d5a7;
extern char d_5d51_d5a8;
extern char d_5d51_d5a9;
extern char d_5d51_d5aa;
extern char d_5d51_d5ab;
extern int d_5d51_da0a;
extern int d_5d51_d606;
extern int d_5d51_d7c4;
extern int d_5d51_d7c6;
extern int d_5d51_d7c8;
extern int d_5d51_d7ca;
extern int d_5d51_d7cc;
extern int d_5d51_d7ce;
extern int d_5d51_d7d0;
extern long d_5d51_d475;
extern long d_5d51_d479;
extern long d_5d51_d47d;
extern long d_5d51_d481;
extern long d_5d51_d495;
int f_1d5e_1308(int a, int b);
extern int d_5d51_d7c2;
void f_1646_4ba0(char far *title);
extern char far d_2414_5426[];
extern char far d_2414_5400[];
extern char far d_2414_53ff[];
extern int far d_2414_d52c[];
extern int far d_2414_d52a[];
extern long far d_2414_d490[];
char far *f_b0f1_63b6(int player);
void f_1646_5bcb(int team, char far *title, char far *text);
float f_1d5e_1342(float a, float b);
long f_1d5e_137f(long a, long b);
void f_a13d_4a1b(int player, int a, char b);
void f_71c8_3038(int team);
extern int d_5d51_d7c0;
extern int d_5d51_d7be;
extern int d_5d51_d7bc;
extern int d_5d51_d7a0;
extern char d_5d51_d5a2;
extern char d_5d51_d5a3;
extern char d_5d51_d5a4;
extern char d_5d51_d5df;
extern long d_5d51_d46d;
extern long d_5d51_d471;
extern char far d_2414_5425[];
extern int d_5d51_d9ea;
extern unsigned char far d_2414_fcb5[][8][5];
extern int far d_2414_ff85[][5];
extern char far d_2414_9f8e[];
extern char far d_2414_c44a[];
extern char far d_2414_ba26[];
extern float far d_240d_0000[];
extern int d_5d51_d7d6;
extern int d_5d51_d7d8;
extern char far d_2414_a634[];
extern char far d_2414_e362[];
extern char far d_2414_ea08[];
void f_a13d_22c6(char far *title);
extern char far d_2414_5584[];
extern char far d_2414_5583[];
extern char far d_2414_5580[];
extern int far d_2414_fee5[];
extern int far d_2414_fee3[];
extern long far d_2414_fda1[];
extern char far d_2414_557f[];
extern char d_5d51_d5a5;
extern char d_5d51_d5a1;
extern int d_5d51_d7aa;
extern int d_5d51_d7ac;
extern int d_5d51_d7ae;
extern int d_5d51_d7b0;
extern int d_5d51_d7b2;
extern int d_5d51_d7b4;
extern int d_5d51_d7b6;
extern int d_5d51_d7b8;
extern int d_5d51_d7ba;
void f_1d5e_08cc(int c);
void f_1d5e_08e2(int x1, int y1, int x2, int y2);
void f_1d5e_08d7(int c);
void f_1d5e_0929(int x1, int y1, int x2, int y2);
int f_1d5e_0c0f(void);
int f_1d5e_0c07(void);
void f_1646_357e(int x, int y, int colour, char far *s);
void f_1646_3686(float x, float y, int bg, int fg, int w, char far *s);
void f_1646_3e54(float x, float y, int bg, int fg, int w, char far *s);
void f_1646_60a7(void);
void f_1646_50c5(int a, float x, float y, int c, int d, int e, char far *s);
int f_1646_5602(int a);
void f_1646_545c(int a, char b);
extern char far d_2414_3e8c[];
extern char far d_2414_3edc[];
extern char far d_2414_3f2c[];
extern char far d_2414_4674[];
extern char far d_2414_36ce[];
void f_1646_5020(void);
extern char far d_2414_362e[];
extern char far d_2414_367e[];
extern char far d_2414_4944[];
extern char far d_2414_0e88[][40];
extern unsigned char far d_44d7_8ccf[];
extern int d_5d51_d7a2;
extern int d_5d51_d7a4;
extern int d_5d51_d7a6;
extern int d_5d51_d7a8;
extern unsigned char far *d_5d51_d9fa;
extern int d_5d51_dd84;
void f_1d5e_114c(unsigned x, int y, unsigned x2, unsigned y2, int dy, int colour);
void f_1d5e_0fe3(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_a7f0_3054(int player);
void f_9182_4ad7(int player, int from, int to, long fee);
void f_9182_4b57(int player, int from, int to, long fee);
void f_1646_0f3a(int p);
int f_1646_1f63(int player);
void f_1646_174b(int p);
void f_1646_13f1(int player);
void f_1646_1a2f(int player);
extern char far *d_5d51_da24;
extern float d_5d51_d541;
extern char far d_2414_4e28[];
extern int d_5d51_d80c;
extern int d_5d51_dd9a;
extern char d_5d51_d5e6;
extern char far d_2414_caf0[];
extern char far d_2414_c0cc[];
extern char far d_2414_dcbc[];
extern char far d_2414_f3c4[];
extern char far d_2414_3e3c[];
extern long (far *d_5d51_da44)[38];
extern char (far *d_5d51_da50)[82][391];
extern int d_5d51_d98e;
extern char far d_2414_58a0[][0x6a6];
extern char far d_2414_98e8[];
extern int d_5d51_d79e;
extern int d_5d51_d956;
extern char d_5d51_d5a0;
struct moves { int in[6]; int out[6]; char infrom[6]; char outto[6]; long infee[6]; long outfee[6]; unsigned char nin; unsigned char nout; };
extern struct moves far d_2414_97a8[];
struct news { int player; char from; char to; long fee; };
extern struct news far d_2414_9618[];
void f_a7f0_42c5(char a, char b, int player, char team, long fee, char c);
void f_a7f0_6442(char team, int player);
void f_b0f1_6c80(char n);
void f_b0f1_3704(int player, char team);
void f_b0f1_36ad(int player, char team);
void f_b0f1_4572(int player, unsigned char n);
extern int d_5d51_dd92;
extern int d_5d51_dd98;
extern unsigned char (far *d_5d51_da38)[1500];
extern int far d_44d7_9624[][26];
extern int far d_3404_0e34[][16];
extern unsigned char far d_3404_45ca[];
extern unsigned char far d_3404_4e12[];
extern long far d_3404_3ee2[];
extern long far d_3404_3f7a[];
char f_1646_0ccd(void);
unsigned f_1d5e_0b1c(char far *s, char far *set);
void f_b0f1_09d1(int player);
void f_8ba7_0b50(int player);
void f_8ba7_0eed(int player);
void f_8ba7_11e1(int player, int c);
long f_8ba7_1401(int player);
extern char d_5d51_d59f;
extern char d_5d51_d59e;
extern char d_5d51_d5e1;
extern int d_5d51_d954;
extern int d_5d51_d79a;
extern int d_5d51_d834;
extern int d_5d51_dd86;
extern int d_5d51_dd88;
extern long d_5d51_d469;
extern char (far *d_5d51_da20)[151];
extern char far d_2414_5164[];
extern char far d_2414_0848[][80];
extern char far d_2414_3950[];
char f_1646_6f56(int player);
unsigned char f_1646_717d(char team);
void f_1d5e_1a24();
extern FILE *d_5d51_0098;
extern char far d_2414_0050[];

/* the steps of the digits a value is set with (+/- on the offer screen) */
static int d_5d51_3222[] = { 1, 10, 100, 1000, 10000 };

void f_8539_0000(void)
{
    for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= 1; d_5d51_d9d0++) {
        for (d_5d51_d9fe = 0; d_5d51_d9fe <= 2; d_5d51_d9fe++) {
            for (d_5d51_d9b8 = d_5d51_d9fe + 1; d_5d51_d9b8 <= 3; d_5d51_d9b8++) {
                d_5d51_d7e8 = d_2414_d5b4[1][d_5d51_d9d0][d_5d51_d9fe] * 2 + d_2414_d5b4[2][d_5d51_d9d0][d_5d51_d9fe];
                d_5d51_d7e6 = d_2414_d5b4[1][d_5d51_d9d0][d_5d51_d9b8] * 2 + d_2414_d5b4[2][d_5d51_d9d0][d_5d51_d9b8];
                d_5d51_d7e4 = d_2414_d5b4[4][d_5d51_d9d0][d_5d51_d9fe];
                d_5d51_d7e2 = d_2414_d5b4[4][d_5d51_d9d0][d_5d51_d9b8];
                d_5d51_d8a6 = d_2414_d5b4[5][d_5d51_d9d0][d_5d51_d9fe];
                d_5d51_d8a4 = d_2414_d5b4[5][d_5d51_d9d0][d_5d51_d9b8];
                if (d_5d51_d7e8 < d_5d51_d7e6 ||
                    (d_5d51_d7e8 == d_5d51_d7e6 && d_5d51_d7e4 - d_5d51_d8a6 < d_5d51_d7e2 - d_5d51_d8a4) ||
                    (d_5d51_d7e8 == d_5d51_d7e6 && d_5d51_d7e4 - d_5d51_d8a6 == d_5d51_d7e2 - d_5d51_d8a4 &&
                     d_5d51_d7e4 < d_5d51_d7e2)) {
                    f_1d5e_13a4(&d_2414_d5e4[d_5d51_d9d0][d_5d51_d9fe], &d_2414_d5e4[d_5d51_d9d0][d_5d51_d9b8], 2);
                    for (d_5d51_d934 = 0; d_5d51_d934 <= 5; d_5d51_d934++)
                        f_1d5e_13a4(&d_2414_d5b4[d_5d51_d934][d_5d51_d9d0][d_5d51_d9fe],
                                    &d_2414_d5b4[d_5d51_d934][d_5d51_d9d0][d_5d51_d9b8], 1);
                }
            }
        }
    }
    if (d_5d51_da06 == 83) {
        d_3404_0bfe[0] = d_2414_d5e4[0][0];
        d_3404_0bfe[1] = d_2414_d5e4[1][0];
    }
}

void f_8539_0238(void)
{
    unsigned char groups, teams, k, g;

    groups = d_5d51_da06 <= 29 ? 6 : 4;
    teams = d_5d51_da06 <= 29 ? 3 : 4;
    for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= groups - 1; d_5d51_d9d0++) {
        for (d_5d51_d9fe = 0; d_5d51_d9fe <= teams - 2; d_5d51_d9fe++) {
            for (d_5d51_d9b8 = d_5d51_d9fe + 1; d_5d51_d9b8 <= teams - 1; d_5d51_d9b8++) {
                if (d_2414_d3e0[0][d_5d51_d9d0][d_5d51_d9fe] > 0)
                    d_5d51_d7e8 = d_2414_d3e0[1][d_5d51_d9d0][d_5d51_d9fe] * 2 + d_2414_d3e0[2][d_5d51_d9d0][d_5d51_d9fe];
                else
                    d_5d51_d7e8 = -1;
                if (d_2414_d3e0[0][d_5d51_d9d0][d_5d51_d9b8] > 0)
                    d_5d51_d7e6 = d_2414_d3e0[1][d_5d51_d9d0][d_5d51_d9b8] * 2 + d_2414_d3e0[2][d_5d51_d9d0][d_5d51_d9b8];
                else
                    d_5d51_d7e6 = -1;
                d_5d51_d7e4 = d_2414_d3e0[4][d_5d51_d9d0][d_5d51_d9fe];
                d_5d51_d7e2 = d_2414_d3e0[4][d_5d51_d9d0][d_5d51_d9b8];
                d_5d51_d8a6 = d_2414_d3e0[5][d_5d51_d9d0][d_5d51_d9fe];
                d_5d51_d8a4 = d_2414_d3e0[5][d_5d51_d9d0][d_5d51_d9b8];
                if (d_5d51_d7e8 < d_5d51_d7e6 ||
                    (d_5d51_d7e8 == d_5d51_d7e6 && d_5d51_d7e4 - d_5d51_d8a6 < d_5d51_d7e2 - d_5d51_d8a4) ||
                    (d_5d51_d7e8 == d_5d51_d7e6 && d_5d51_d7e4 - d_5d51_d8a6 == d_5d51_d7e2 - d_5d51_d8a4 &&
                     d_5d51_d7e4 < d_5d51_d7e2)) {
                    f_1d5e_13a4(&d_2414_d578[d_5d51_d9d0][d_5d51_d9fe], &d_2414_d578[d_5d51_d9d0][d_5d51_d9b8], 2);
                    for (d_5d51_d934 = 0; d_5d51_d934 <= 5; d_5d51_d934++)
                        f_1d5e_13a4(&d_2414_d3e0[d_5d51_d934][d_5d51_d9d0][d_5d51_d9fe],
                                    &d_2414_d3e0[d_5d51_d934][d_5d51_d9d0][d_5d51_d9b8], 1);
                }
            }
        }
    }
    if (d_5d51_da06 == 29) {
        k = 0;
        for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= 5; d_5d51_d9d0++) {
            d_3404_09a6[k] = d_2414_d578[d_5d51_d9d0][0];
            k++;
        }
        g = f_8539_05d0(-1);
        d_3404_09a6[k] = d_2414_d578[g][1];
        k++;
        d_3404_09a6[k] = d_2414_d578[f_8539_05d0(g)][1];
    } else if (d_5d51_da06 == 47) {
        d_3404_09a6[0] = d_2414_d578[0][0];
        d_3404_09a6[1] = d_2414_d578[2][0];
        d_3404_09a6[2] = d_2414_d578[1][0];
        d_3404_09a6[3] = d_2414_d578[3][0];
    }
}

/* the best second-placed team of the six groups, other than group skip's */
unsigned char f_8539_05d0(unsigned char skip)
{
    unsigned char best, pts, a, b, g, f, ag;

    pts = 0;
    a = 0;
    b = 0;
    for (d_5d51_d9d0 = 0; d_5d51_d9d0 <= 5; d_5d51_d9d0++) {
        if (skip == d_5d51_d9d0)
            continue;
        g = d_2414_d3e0[1][d_5d51_d9d0][1] * 2 + d_2414_d3e0[2][d_5d51_d9d0][1];
        f = d_2414_d3e0[4][d_5d51_d9d0][1];
        ag = d_2414_d3e0[5][d_5d51_d9d0][1];
        if (g > pts || (g == pts && f - ag > a - b) || (g == pts && f - ag == a - b && f > a))
            best = d_5d51_d9d0;
    }
    return best;
}

void f_8539_06be(void)
{
    register unsigned char n;

    f_b0f1_6c58();
    d_5d51_d7e0 = f_1646_6aa9(d_5d51_da06);
    d_5d51_d7de = 0;
    f_8539_1bf1();
    f_8539_0738();
    if (d_5d51_da06 <= 38) {
        f_8539_0966();
        f_8539_12d9();
    }
    if (f_1646_6971(0) == 0 || f_1646_6971(1) == 0) {
        if (d_5d51_da06 <= 12)
            n = 30;
        else
            n = 40;
        f_8539_0de6(n);
    }
    if (d_5d51_d7de > 0)
        f_1646_58a8(0);
}

void f_8539_0738(void)
{
    int v;

    d_5d51_d7e0 = f_1646_6aa9(d_5d51_da06);
    for (d_5d51_d9f0 = 0; d_5d51_d9f0 <= d_5d51_da1a - 1; d_5d51_d9f0++) {
        if (d_3c0d_0000[7][d_5d51_d9f0] == 0xff) {
            if (f_1646_2cc9(d_44d7_0000[18][d_5d51_d9f0]) == 0) {
                if (d_3404_691c[d_5d51_d9f0] == 0) {
                    if (!d_2414_af3d[d_5d51_d9f0].b0 && f_1646_6ae2(d_5d51_d9f0, -1) == 0 && f_b0f1_4e9f(d_5d51_d9f0) == 0) {
                        if (f_8539_51af(d_5d51_d9f0, 0) == 0) {
                            f_8539_375d(d_5d51_d9f0, d_44d7_0000[18][d_5d51_d9f0]);
                            if (d_5d51_d5ae) {
                                d_3404_691c[d_5d51_d9f0] = (d_5d51_da04 + d_5d51_d7dc) * 100 + d_5d51_d7e0;
                                d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 1);
                                d_5d51_da4c[4][d_5d51_d9f0] = d_5d51_d7da;
                                f_8539_1978(d_5d51_d9f0, 0);
                            }
                        } else
                            f_8ba7_0a06(d_5d51_d9f0, 0, 0);
                    }
                } else {
                    v = f_1646_6f80(d_5d51_d9f0, d_44d7_0000[18][d_5d51_d9f0]);
                    d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 1);
                    if (d_5d51_da4c[4][d_5d51_d9f0] < v)
                        d_5d51_da4c[4][d_5d51_d9f0] = v;
                }
            } else if (d_3404_691c[d_5d51_d9f0] == 0 && !d_2414_af3d[d_5d51_d9f0].b0 &&
                       f_1646_6ae2(d_5d51_d9f0, -1) == 0 && f_b0f1_4e9f(d_5d51_d9f0) == 0)
                f_8ba7_0000(d_5d51_d9f0, d_44d7_0000[18][d_5d51_d9f0],
                            d_3404_4226[d_44d7_0000[18][d_5d51_d9f0]] - 646);
        }
    }
}

void f_8539_0966(void)
{
    if (d_5d51_d5ea)
        f_b0f1_66b9(9);
    d_5d51_d7e0 = f_1646_6aa9(d_5d51_da06);
    for (d_5d51_d9f0 = 0; d_5d51_d9f0 <= d_5d51_da1a - 1; d_5d51_d9f0++) {
        unsigned char c;
        int n;

        c = d_44d7_0000[18][d_5d51_d9f0];
        if (d_5d51_d5ea)
            f_b0f1_6835(9, d_5d51_d9f0, d_5d51_da1a + 1999);
        if ((d_5d51_d9f0 + 1) % 4 != d_5d51_d7e0 % 4 && d_5d51_d5ea == 0)
            continue;
        if (f_1646_2cc9(c) && d_5d51_d5ea)
            continue;
        if (d_3c0d_0000[7][d_5d51_d9f0] == 0xff) {
            if (!d_2414_af3d[d_5d51_d9f0].b0 && !d_2414_af3d[d_5d51_d9f0].b1 && !d_2414_af3d[d_5d51_d9f0].c6) {
                if (d_3c0d_0000[19][d_5d51_d9f0] < 2) {
                    n = f_1646_2cc9(c) ? 2 : 0;
                    if (d_3c0d_0000[14][d_5d51_d9f0] > n && f_1646_6ae2(d_5d51_d9f0, -1)) {
                        if (f_8ba7_0558(d_5d51_d9f0))
                            f_8ba7_0a06(d_5d51_d9f0, -1, 0);
                        else
                            d_3c0d_0000[14][d_5d51_d9f0] = 0;
                        d_3c0d_0000[19][d_5d51_d9f0]++;
                    }
                }
            } else if (d_2414_af3d[d_5d51_d9f0].b0 && d_2414_af3d[d_5d51_d9f0].b2) {
                n = f_1646_2cc9(c) ? 2 : 0;
                if (d_3c0d_0000[15][d_5d51_d9f0] > n && f_1646_6ae2(d_5d51_d9f0, -1) == 0) {
                    if (f_8ba7_087e(d_5d51_d9f0))
                        f_8ba7_0af2(d_5d51_d9f0);
                    else
                        d_3c0d_0000[15][d_5d51_d9f0] = 0;
                }
            }
            if (!d_2414_af3d[d_5d51_d9f0].b0 && !d_2414_af3d[d_5d51_d9f0].b1 && !d_2414_af3d[d_5d51_d9f0].c6) {
                if (f_1646_2cc9(c))
                    continue;
                if (f_8539_51af(d_5d51_d9f0, 0))
                    f_8ba7_0a06(d_5d51_d9f0, 0, 0);
                else if (f_8539_51af(d_5d51_d9f0, -1))
                    f_8ba7_0a06(d_5d51_d9f0, 0, -1);
            } else if (d_2414_af3d[d_5d51_d9f0].b0 && !d_2414_af3d[d_5d51_d9f0].b2 && f_1646_2cc9(c) == 0) {
                if (!d_2414_af3d[d_5d51_d9f0].b4 && !d_2414_af3d[d_5d51_d9f0].c0 &&
                    (d_3c0d_0000[11][d_5d51_d9f0] == 4 || d_3c0d_0000[11][d_5d51_d9f0] == 8)) {
                    d_5d51_da58 = f_1d5e_1618(d_5d51_dda2, 1);
                    d_5d51_da58[d_5d51_d9f0] = f_1d5e_131d(f_1646_0da1(d_5d51_da58[d_5d51_d9f0] * 0.75, -1), 1000L);
                    if (d_5d51_da58[d_5d51_d9f0] < 10000L) {
                        d_5d51_da58[d_5d51_d9f0] = 0;
                        d_2414_af3d[d_5d51_d9f0].b4 = 1;
                    }
                }
                if (f_8539_51af(d_5d51_d9f0, d_2414_af3d[d_5d51_d9f0].c0) == 0)
                    f_8ba7_0af2(d_5d51_d9f0);
            }
        }
    }
}

void f_8539_0de6(int n)
{
    float best = 0;
    int count = 0;
    int k;

    for (d_5d51_d996 = 0; d_5d51_d996 <= 37; d_5d51_d996++) {
        if (d_3404_4552[d_5d51_d996] < f_1646_46e2(d_5d51_d996) - 1 && f_1646_2cc9(d_5d51_d996) == 0
            && f_8539_1022(d_5d51_d996) && count < n) {
            f_8539_10a5(d_5d51_d996);
            if (d_5d51_d5ad)
                count++;
        }
    }
    for (k = 0; count < n && k < 38; k++) {
        d_5d51_d996 = -1;
        for (d_5d51_d84a = 1; d_5d51_d84a <= 10; d_5d51_d84a++) {
            d_5d51_d9cc = f_1d5e_0d6a(38);
            switch (f_1646_717d(d_5d51_d9cc)) {
            case 0:
                d_5d51_d560 = d_3404_3e4a[0][d_5d51_d9cc] > 5000000L ? -1 : 0;
                break;
            case 1:
                d_5d51_d560 = d_3404_3e4a[0][d_5d51_d9cc] > 1000000L ? -1 : 0;
                break;
            }
            d_5d51_d549 = (d_3404_0260[d_5d51_d9cc][0] * 0.5 + (100 - d_3404_452a[d_5d51_d9cc]) * 0.1
                           + f_1646_46e2(d_5d51_d9cc) - d_3404_4552[d_5d51_d9cc] + f_1d5e_0d6a(5))
                          * (d_5d51_d560 ? 3 : 1);
            if (d_5d51_d549 > best || d_5d51_d996 == -1) {
                best = d_5d51_d549;
                d_5d51_d996 = d_5d51_d9cc;
            }
        }
        if (f_1646_2cc9(d_5d51_d996) == 0 && f_8539_1022(d_5d51_d996)) {
            f_8539_10a5(d_5d51_d996);
            if (d_5d51_d5ad)
                count++;
        }
    }
}

char f_8539_1022(int team)
{
    char r = 0;

    if (d_3404_4782[team] < 3 && d_3404_0260[team][0] > 0
        && (d_3404_4552[team] + d_3404_4e3a[team] < 26 || f_1646_2cc9(team))
        && d_3404_452a[team] >= 30 && d_3404_4272[team] < 0x28a)
        r = -1;
    return r;
}

void f_8539_10a5(int team)
{
    int k;

    k = f_8539_1179(team);
    d_5d51_d5ad = 0;
    if (k > -1) {
        d_5d51_d9f0 = d_3404_0260[team][k];
        if (f_1646_6f38(d_5d51_d9f0) && f_1646_6971(f_1646_6f56(d_5d51_d9f0) == 0 ? 1 : 0) == 0) {
            d_5d51_d55b = 0;
            f_b0f1_44cf(d_5d51_d9f0, team);
            if (d_5d51_d55b)
                d_5d51_d5ac = -1;
        } else if (f_1646_6f38(d_5d51_d9f0) == 0 && f_1646_6971(0) == 0)
            f_8539_1e06(team, d_5d51_d9f0, d_3404_0000[team][k] == 1 ? -1 : 0);
        if (d_5d51_d5ac)
            d_5d51_d5ad = -1;
    }
}

int f_8539_1179(int team)
{
    char k;
    char found;
    char tries;

    found = 0;
    tries = 0;
    do {
        k = f_1d5e_0d6a(d_3404_0260[team][0]) + 1;
        d_5d51_d9f0 = d_3404_0260[team][k];
        if (f_1646_6971(f_1646_6f38(d_5d51_d9f0) && f_1646_6f56(d_5d51_d9f0) == 0 ? 1 : 0) == 0
            && !d_2414_af3c[d_5d51_d9f0].a.f9
            && (f_1646_6f38(d_5d51_d9f0) || !d_2414_af3c[d_5d51_d9f0].a.f30 && d_3c0d_0000[7][d_5d51_d9f0] == 0xff)
            && (f_1646_2e15(d_5d51_d9f0) == 0 || f_1646_6f38(d_5d51_d9f0))
            && (d_3404_0000[team][k] == 1 && d_3404_4f52[team] < 5
                || f_1646_0204(d_5d51_d9f0, -1) <= f_1646_5ac3(team)))
            found = 1;
        tries++;
    } while (found == 0 && tries < 20);
    return found == 1 ? k : -1;
}

void f_8539_12d9(void)
{
    int lim;
    int i;
    int n;

    n = 0;
    for (d_5d51_d9f0 = 0; d_5d51_d9f0 <= d_5d51_da1a - 1; d_5d51_d9f0++)
        if (d_2414_af3c[d_5d51_d9f0].a.f8 && !d_2414_af3c[d_5d51_d9f0].a.f9 && !d_2414_af3c[d_5d51_d9f0].a.f30
            && d_3c0d_0000[23][d_5d51_d9f0] < 3)
            n++;
    if (d_5d51_d5ea)
        lim = 1500;
    else
        lim = d_5d51_da06 <= 12 ? 150 : 20;
    for (i = 1; i <= lim; i++) {
        if (d_5d51_d5ea)
            f_b0f1_6835(9, d_5d51_da1a + i - 1, d_5d51_da1a + 1499);
        if (f_1d5e_0d6a(10) == 0) {
            do
                d_5d51_d9f0 = f_1d5e_0d6a(d_5d51_da18) + 1000;
            while (f_1646_6f56(d_5d51_d9f0));
        } else if (f_1d5e_0d6a(12) == 0) {
            do
                d_5d51_d9f0 = f_1d5e_0d6a(d_5d51_da18) + 1000;
            while (f_1646_6f56(d_5d51_d9f0) == 0);
        } else
            d_5d51_d9f0 = f_1d5e_0d6a(d_5d51_da1a);
        d_5d51_d5ca = 0;
        if (d_3c0d_0000[23][d_5d51_d9f0] < 3 && !d_2414_af3c[d_5d51_d9f0].a.f9 && !d_2414_af3c[d_5d51_d9f0].a.f30) {
            if (f_1646_6f38(d_5d51_d9f0))
                d_5d51_d5ca = -1;
            else if (d_5d51_d5ea == 0) {
                if (f_1d5e_136a(20, n) < i) {
                    if (d_44d7_0000[23][d_5d51_d9f0] > 1)
                        d_5d51_d5ca = -1;
                    else if (d_2414_af3c[d_5d51_d9f0].a.f18)
                        d_5d51_d5ca = -1;
                }
            } else if (d_5d51_d5ea) {
                if (fabs(f_1646_2dce(d_5d51_d9f0) - f_1646_2cfd(d_44d7_0000[18][d_5d51_d9f0])) > 3)
                    d_5d51_d5ca = -1;
            }
            if (d_2414_af3c[d_5d51_d9f0].a.f8)
                d_5d51_d5ca = -1;
        }
        if (d_5d51_d5ca)
            f_8539_1563(d_5d51_d9f0);
    }
}

void f_8539_1563(int p)
{
    char m;
    char used[38];

    memset(used, 0, 38);
    for (d_5d51_d7d4 = 1; d_5d51_d7d4 <= 40; d_5d51_d7d4++) {
        d_5d51_d9cc = f_1d5e_0d6a(38);
        if (used[d_5d51_d9cc] == 0) {
            if (d_44d7_0000[18][p] != d_5d51_d9cc && f_1646_2cc9(d_5d51_d9cc) == 0
                && d_3404_0260[d_5d51_d9cc][0] < 10
                && d_4f37_0960[d_3404_225c[d_3404_4226[d_5d51_d9cc]]][d_3c0d_0000[17][p]] < 8
                && f_8539_1b9e(d_5d51_d9cc, p) == 0 && d_3404_4272[d_5d51_d9cc] < 0x28a) {
                d_5d51_d4fd = f_1646_2dce(p);
                d_5d51_d4f9 = f_1646_2cfd(d_5d51_d9cc);
                if (d_5d51_d4f9 - 4 < d_5d51_d4fd && d_5d51_d4f9 + 8 > d_5d51_d4fd) {
                    m = f_8539_175f(p, d_5d51_d9cc);
                    if (m > 0) {
                        d_3c0d_0000[23][p]++;
                        d_3404_0260[d_5d51_d9cc][0]++;
                        d_3404_0260[d_5d51_d9cc][d_3404_0260[d_5d51_d9cc][0]] = p;
                        d_3404_0000[d_5d51_d9cc][d_3404_0260[d_5d51_d9cc][0]] = m;
                        if (d_3c0d_0000[23][p] == 3)
                            d_5d51_d7d4 = 40;
                    }
                }
            }
            used[d_5d51_d9cc] = -1;
        }
    }
}

char f_8539_175f(int p, int team)
{
    char r = 0;
    char m;
    long a;
    long b;

    for (d_5d51_d8ee = 0; d_5d51_d8ee <= 1; d_5d51_d8ee++) {
        if (f_1646_6f38(p))
            m = f_b0f1_4f0a(p, team) ? 2 : 0;
        else
            m = f_8539_2868(p, team, d_5d51_d8ee + 1);
        if (m > 0) {
            for (d_5d51_d9e4 = 0; d_5d51_d9e4 <= 10; d_5d51_d9e4++) {
                d_5d51_d9ac = d_3404_1334[team][0][d_5d51_d9e4];
                if (f_1646_66f8(p, d_5d51_d9ac)) {
                    a = f_1646_23f5(d_44d7_9ddc[team][d_5d51_d8ee][d_5d51_d9e4], team, d_5d51_d9ac,
                                    d_5d51_d8ee == 1 ? 1 : 0);
                    b = f_1646_23f5(p, team, d_5d51_d9ac, d_5d51_d8ee == 1 ? 1 : 0);
                    if (b > a && m == 2 && (!d_2414_af3c[p].a.f8 || !d_2414_af3c[p].a.f24)) {
                        r = 2;
                        d_5d51_d9e4 = 10;
                        d_5d51_d8ee = 1;
                    } else if (b > a && f_1646_6f38(p) == 0 && d_2414_af3c[p].a.f8 && d_2414_af3c[p].a.f24
                               && d_3404_4f52[team] < 5) {
                        char d;

                        d = abs(f_1646_2cfd(team) - f_1646_2cfd(d_44d7_0000[18][p]));
                        if (d > 2) {
                            r = 1;
                            d_5d51_d9e4 = 10;
                            d_5d51_d8ee = 1;
                        }
                    }
                }
            }
        }
    }
    return r;
}

void f_8539_1978(int p, char all)
{
    if (d_3c0d_0000[23][p] > 0) {
        for (d_5d51_d9cc = 0; d_5d51_d9cc <= 37; d_5d51_d9cc++) {
            if ((f_1646_2cc9(d_5d51_d9cc) == 0 || d_44d7_0000[18][p] == d_5d51_d9cc || all)
                && f_8539_1b9e(d_5d51_d9cc, p) > 0) {
                if (f_1646_2cc9(d_5d51_d9cc) == 0)
                    d_3c0d_0000[23][p] -= 1;
                d_5d51_d7d2 = f_8539_1b9e(d_5d51_d9cc, p);
                d_3404_0260[d_5d51_d9cc][d_5d51_d7d2] = d_3404_0260[d_5d51_d9cc][d_3404_0260[d_5d51_d9cc][0]];
                d_3404_0000[d_5d51_d9cc][d_5d51_d7d2] = d_3404_0000[d_5d51_d9cc][d_3404_0260[d_5d51_d9cc][0]];
                d_3404_0260[d_5d51_d9cc][0]--;
            }
        }
    }
}

void f_8539_1aa0(int team)
{
    int k;

    for (k = 1; k <= d_3404_0260[team][0]; k++) {
        if (f_8539_175f(d_3404_0260[team][k], team) == 0) {
            d_3c0d_0000[23][d_3404_0260[team][k]] -= 1;
            d_3404_0260[team][k] = d_3404_0260[team][d_3404_0260[team][0]];
            d_3404_0000[team][k] = d_3404_0000[team][d_3404_0260[team][0]];
            d_3404_0260[team][0]--;
        }
    }
}

int f_8539_1b9e(int team, int p)
{
    int r = 0;
    int k;

    for (k = 1; k <= d_3404_0260[team][0]; k++)
        if (d_3404_0260[team][k] == p) {
            r = k;
            k = d_3404_0260[team][0];
        }
    return r;
}

/* the loans of the week: Italia's loans last the season (CM93's counted weeks down): in
 * weeks 37 and 38 a club that wants its loaned player back recalls him, and after week 100
 * every loan has expired and the player returns to his club */
void f_8539_1bf1(void)
{
    char kind;
    char buf[320];

    for (d_5d51_d9f0 = 0; d_5d51_d9f0 <= d_5d51_da1a - 1; d_5d51_d9f0++) {
        if (d_3c0d_0000[7][d_5d51_d9f0] < 255) {
            kind = 0;
            if (d_5d51_da06 == 37 || d_5d51_da06 == 38) {
                if (f_1646_2cc9(d_3c0d_0000[7][d_5d51_d9f0]) == 0 &&
                    f_8539_2a25(d_5d51_d9f0, d_44d7_0000[25][d_5d51_d9f0]) == 1)
                    kind = 2;
            } else if (d_5d51_da06 > 100)
                kind = 1;
            if (kind > 0) {
                if (f_1646_2cc9(d_44d7_0000[18][d_5d51_d9f0])) {
                    if (kind == 1)
                        sprintf(buf, "%s's loan period has expired - he returns to %s.%s",
                                f_1646_470f(d_5d51_d9f0), (char far *)d_5d51_b476[d_3c0d_0000[7][d_5d51_d9f0]],
                                f_b0f1_63b6(d_5d51_d9f0));
                    else if (kind == 2)
                        sprintf(buf, "On-loan %s returns to %s at their request.%s",
                                f_1646_470f(d_5d51_d9f0), (char far *)d_5d51_b476[d_3c0d_0000[7][d_5d51_d9f0]],
                                f_b0f1_63b6(d_5d51_d9f0));
                    f_1646_5bcb(d_44d7_0000[18][d_5d51_d9f0], "Squad news", buf);
                } else if (f_1646_2cc9(d_3c0d_0000[7][d_5d51_d9f0]) && kind == 1) {
                    sprintf(buf, "%s returns from his loan spell at %s.%s",
                            f_1646_470f(d_5d51_d9f0), (char far *)d_5d51_b476[d_44d7_0000[18][d_5d51_d9f0]],
                            f_b0f1_63b6(d_5d51_d9f0));
                    f_1646_5bcb(d_3c0d_0000[7][d_5d51_d9f0], "Squad news", buf);
                }
                f_8539_4508(d_5d51_d9f0, d_3c0d_0000[7][d_5d51_d9f0], d_44d7_0000[18][d_5d51_d9f0], 0, 2);
            }
        }
    }
}

/* approaching a player (to buy him, or with loan set, to take him on loan): the human
 * club's menu, the player's answer, the other clubs that also want him, and his choice */
void f_8539_1e06(int team, int player, char loan)
{
    char done;
    char tell;
    unsigned char own;
    int best;
    float bestval;
    char name[80];
    char stays[80];
    char buf[320];
    char but[80];

    bestval = 0;
    memset(d_2414_5426, 0, 38);
    memset(d_2414_5400, 0, 38);
    d_5d51_d5ab = 0;
    done = 0;
    d_5d51_d5ac = 0;
    d_5d51_d5aa = 0;
    best = -1;
    own = d_44d7_0000[18][player];
    d_5d51_d5a9 = f_1646_2cc9(own);
    d_5d51_d5a8 = f_1646_2cc9(team);
    d_5d51_d7d0 = -d_5d51_d5a9 - d_5d51_d5a8;
again:
    d_5d51_d5a7 = 0;
    if (d_5d51_d5a8 != 0) {
        f_1646_4ba0("Approach Player");
        f_1646_459b(1.0, 4.0, team);
        sprintf(buf, "Board limit on spending : %ld", f_1646_5ac3(team));
        f_1646_0b2f(7, buf);
        sprintf(buf, "Approach %s ?", f_1646_470f(player));
        f_1646_0b2f(9, buf);
        f_1646_2fa4(12, "", "*Exit|Approach To Buy|Approach To Loan|");
menu:
        f_1646_3348(2);
        d_5d51_d5a7 = 0;
        if (d_5d51_da0a == 1)
            d_5d51_d5a7 = 1;
        else if (d_5d51_da0a == 2) {
            if (d_3404_4f52[team] < 5)
                d_5d51_d5a7 = 2;
            else {
                f_1646_0b9f("Maximum five loans per season");
                goto menu;
            }
        }
    } else if (loan == 0)
        d_5d51_d5a7 = 1;
    else
        d_5d51_d5a7 = 2;
    if (d_5d51_d5a7 > 0) {
        strcpy(name, f_1646_48c0(player));
        if (f_8ba7_00fa(player, team, d_5d51_d5a7 == 2 ? -1 : 0)) {
            if (d_5d51_d5a9 == 0 && d_5d51_d5a8 != 0) {
                sprintf(buf, "%s allow approach", (char far *)d_5d51_b476[own]);
                f_1646_0b9f(buf);
            }
            if (f_8539_2868(player, team, d_5d51_d7ce = f_8539_2a25(player, team)) >= (d_5d51_d5a7 == 2 ? 1 : 2)) {
                if (d_5d51_d5a8 != 0 || d_5d51_d5a9 != 0) {
                    sprintf(buf, "%s is keen on the %s", (char far *)name, d_5d51_d5a7 == 1 ? "move" : "loan");
                    f_1646_0b9f(buf);
                }
                done = -1;
                goto out;
            }
            if (d_5d51_d5a8 == 0 && d_5d51_d5a9 == 0)
                goto out;
            sprintf(buf, "%s rejects the %s", (char far *)name, d_5d51_d5a7 == 1 ? "move" : "loan");
            if ((d_5d51_d5a8 && d_5d51_d5a9) == 0) {
                sprintf(but, "But %s", (char far *)buf);
                strcpy(buf, but);
            }
            f_1646_0b9f(buf);
            if (d_5d51_d5a8 != 0) {
                if (d_5d51_d5a9 == 0)
                    goto menu;
                goto again;
            }
        } else if (d_5d51_d5a8 != 0) {
            if (d_5d51_d5a9 != 0)
                goto again;
            sprintf(buf, "%s refuse approach", (char far *)d_5d51_b476[own]);
            f_1646_0b9f(buf);
            goto menu;
        }
    }
out:
    if (done == 0) {
        if (d_5d51_d5a8 == 0) {
            d_3c0d_0000[23][player] -= 1;
            d_5d51_d7d2 = f_8539_1b9e(team, player);
            d_3404_0260[team][d_5d51_d7d2] = d_3404_0260[team][d_3404_0260[team][0]];
            d_3404_0000[team][d_5d51_d7d2] = d_3404_0000[team][d_3404_0260[team][0]];
            d_3404_0260[team][0]--;
        }
    } else {
        d_2414_5426[0] = -1;
        d_2414_d52c[0] = team;
        d_5d51_d7cc = 1;
        d_3404_4782[team]++;
        if (d_5d51_d5a7 != 2) {
            for (d_5d51_d7c8 = 0; d_5d51_d7c8 <= 37; d_5d51_d7c8++) {
                if (d_5d51_d7c8 != team && f_8539_1022(d_5d51_d7c8) && f_8539_1b9e(d_5d51_d7c8, player) > 0) {
                    if (f_1646_2cc9(d_5d51_d7c8))
                        d_5d51_d5a6 = f_8539_2b28(d_5d51_d7c8, team, player) ? -1 : 0;
                    else
                        d_5d51_d5a6 = d_44d7_0000[12][player] != 0 || f_1646_5ac3(d_5d51_d7c8) >= f_1646_0204(player, -1) && f_1d5e_0d6a(3) > 0 ? -1 : 0;
                    if (d_5d51_d5a6 != 0) {
                        if (f_8539_2868(player, d_5d51_d7c8, d_5d51_d7ce = f_8539_2a25(player, d_5d51_d7c8)) < 2) {
                            if (f_1646_2cc9(d_5d51_d7c8))
                                f_1646_0b9f("He is not interested");
                            else {
                                d_3c0d_0000[23][player] -= 1;
                                d_5d51_d7d2 = f_8539_1b9e(d_5d51_d7c8, player);
                                d_3404_0260[d_5d51_d7c8][d_5d51_d7d2] = d_3404_0260[d_5d51_d7c8][d_3404_0260[d_5d51_d7c8][0]];
                                d_3404_0000[d_5d51_d7c8][d_5d51_d7d2] = d_3404_0000[d_5d51_d7c8][d_3404_0260[d_5d51_d7c8][0]];
                                d_3404_0260[d_5d51_d7c8][0]--;
                            }
                        } else {
                            if (f_1646_2cc9(d_5d51_d7c8)) {
                                f_1646_0b9f("He is interested");
                                d_5d51_d7d0++;
                            }
                            d_2414_5426[d_5d51_d7cc] = d_5d51_d7ce == 1;
                            d_2414_d52c[d_5d51_d7cc] = d_5d51_d7c8;
                            d_5d51_d7cc++;
                            d_3404_4782[d_5d51_d7c8]++;
                        }
                    }
                }
            }
        }
        if (d_2414_af3c[player].w.f12 == 0 && d_5d51_d5a7 != 2) {
            d_5d51_d481 = 0;
            d_5d51_d47d = 0;
            d_5d51_d479 = f_1646_0da1(f_1646_0204(player, own), -1);
            d_5d51_d475 = d_5d51_d479;
            if (d_5d51_d7d0 > 0) {
                d_5d51_d606 = 0;
                d_5d51_d7c6 = 8;
                f_8539_3db1(0, player);
                if (d_2414_af3c[player].w.f8)
                    sprintf(buf, "%s is valued at %ld", f_1646_48c0(player), d_5d51_d479);
                else
                    sprintf(buf, "%s is not yet valued", f_1646_48c0(player));
                f_8539_4451(1, buf);
            }
            f_8539_2cf5(player);
            tell = 0;
        } else {
            if (d_5d51_d7d0 > 0) {
                for (d_5d51_d7ca = 1; d_5d51_d7ca <= d_5d51_d7cc; d_5d51_d7ca++) {
                    d_5d51_d9cc = d_2414_d52a[d_5d51_d7ca];
                    if (d_5d51_d9cc != team && f_1646_2cc9(d_5d51_d9cc) == 0) {
                        sprintf(buf, "%s also want him", (char far *)d_5d51_b476[d_5d51_d9cc]);
                        f_1646_0b9f(buf);
                    }
                }
            }
            tell = -1;
        }
        d_5d51_d7c4 = 0;
        for (d_5d51_d7ca = 1; d_5d51_d7ca <= d_5d51_d7cc; d_5d51_d7ca++) {
            d_5d51_d9cc = d_2414_d52a[d_5d51_d7ca];
            if (d_2414_53ff[d_5d51_d7ca] != 0 || d_2414_af3c[player].w.f12 || d_5d51_d5a7 == 2) {
                d_5d51_d4f9 = f_1646_2cfd(d_5d51_d9cc) + (d_5d51_d9cc == team ? 0.5 : 0);
                if (d_5d51_d4f9 > bestval || best == -1) {
                    bestval = d_5d51_d4f9;
                    best = d_5d51_d9cc;
                    if (d_2414_af3c[player].w.f12 || d_5d51_d5a7 == 2)
                        d_5d51_d495 = 0;
                    else
                        d_5d51_d495 = d_2414_d490[d_5d51_d7ca];
                }
                d_5d51_d7c4++;
            }
        }
        sprintf(stays, "He stays at %s", (char far *)d_5d51_b476[own]);
        if (best > -1) {
            if (d_5d51_d7d0 > 0) {
                f_1d5e_0dbd(50);
                if (d_5d51_d7c4 > 1) {
                    sprintf(buf, "He decides to join %s", (char far *)d_5d51_b476[best]);
                    if (tell)
                        f_1646_0b9f(buf);
                    else
                        f_8539_4451(6, buf);
                }
            }
            if (d_5d51_d5a7 != 2) {
                f_8539_375d(player, best);
                if (f_1646_2cc9(best))
                    tell = 0;
            }
            if (d_5d51_d5ae || d_5d51_d5a7 == 2) {
                if (d_5d51_d7d0 > 0) {
                    if (d_5d51_d5a7 == 1)
                        sprintf(buf, "He signs for %s", (char far *)d_5d51_b476[best]);
                    else
                        strcpy(buf, "He joins on loan for the season");
                    if (tell)
                        f_1646_0b9f(buf);
                    else
                        f_8539_4451(6, buf);
                }
                f_8539_4508(player, best, own, d_5d51_d495, d_5d51_d5a7 == 2 ? 1 : 0);
                d_5d51_d5ac = -1;
            } else if (tell)
                f_1646_0b9f(stays);
            else
                f_8539_4451(6, stays);
        } else if (d_5d51_d7d0 > 0)
            f_8539_4451(6, stays);
    }
}

/* whether player p would join team, for n (f_8539_2a25's answer): 2 to move, 1 only on
 * loan, 0 not at all */
char f_8539_2868(int p, int team, int n)
{
    char r;
    float a;
    float b;
    int m;
    unsigned char c2;
    unsigned char c1;

    r = 0;
    c1 = d_3c0d_0000[11][p];
    d_5d51_d7c2 = d_4f37_0960[d_3c0d_0000[17][p]][d_3404_225c[d_3404_4226[team]]];
    if (d_5d51_d7c2 < 8 && f_b0f1_4e9f(p) == 0) {
        a = f_1646_2cfd(d_44d7_0000[18][p]);
        b = f_1646_2cfd(team);
        c2 = d_44d7_0000[23][p];
        m = f_1d5e_1308(c2, 1 - (c1 > 8 ? 2 : 1) * (d_2414_af3c[p].w.f8 ? -1 : 0));
        if (n < m && (m - n + (b + 1) >= a || f_1646_2dce(p) < 11))
            r = 2;
        else if (n == m && n < 3 && b > a)
            r = 2;
        else if (n > m && n < 3 && a + 1 <= b)
            r = 2;
        else if (a + 2 <= b)
            r = 2;
        else if (n == 1 && m == 3 && a - 2 <= b)
            r = 1;
    }
    return r;
}

int f_8539_2a25(int a, int b)
{
    long l1;
    long l2;

    d_5d51_d7ce = 3;
    for (d_5d51_d8ee = 0; d_5d51_d8ee <= 1; d_5d51_d8ee++) {
        for (d_5d51_d9e4 = 0; d_5d51_d9e4 <= 10; d_5d51_d9e4++) {
            d_5d51_d9ac = d_3404_1334[b][0][d_5d51_d9e4];
            if (f_1646_66f8(a, d_5d51_d9ac)) {
                l1 = f_1646_23f5(d_44d7_9ddc[b][d_5d51_d8ee][d_5d51_d9e4], b, d_5d51_d9ac,
                                 d_5d51_d8ee == 1 ? 1 : 0);
                l2 = f_1646_23f5(a, b, d_5d51_d9ac, d_5d51_d8ee == 1 ? 1 : 0);
                if (l2 > l1) {
                    d_5d51_d7ce = d_5d51_d8ee + 1;
                    d_5d51_d9e4 = 10;
                    d_5d51_d8ee = 1;
                }
            }
        }
    }
    return d_5d51_d7ce;
}

char f_8539_2b28(int x, int team, int p)
{
    char buf[320];

top:
    d_5d51_d5a6 = 0;
    sprintf(buf, "%s bid", (char far *)d_5d51_b476[team]);
    f_1646_4ba0(buf);
    f_1646_459b(1, 4.0, x);
    sprintf(buf, "%s want %s", (char far *)d_5d51_b476[team], f_1646_470f(p));
    f_1646_0b2f(7, buf);
    f_1646_0b2f(9, "He is on your shortlist");
    sprintf(buf, "Approach %s ?", f_1646_48c0(p));
    f_1646_0b2f(11, buf);
    f_1646_2fa4(14, "", "View Factfile|View Squad|Ignore|Approach|");
menu:
    f_1646_3348(3);
    if (d_5d51_da0a == 0) {
        do
            f_a13d_4a1b(p, -1, 0);
        while (!d_5d51_d5df);
        d_5d51_d5df = 0;
        goto top;
    }
    if (d_5d51_da0a == 1) {
        f_71c8_3038(x);
        goto top;
    }
    if (d_5d51_da0a == 3) {
        if (d_3404_4552[x] + d_3404_4e3a[x] >= 26) {
            f_1646_0b9f("Maximum squad size is 26");
            if (d_3404_4e3a[x] > 0) {
                sprintf(buf, "%d player%s loaned out", d_3404_4e3a[x], d_3404_4e3a[x] > 1 ? "s" : "");
                f_1646_0b9f(buf);
            }
            goto menu;
        }
        d_5d51_d5a6 = -1;
    }
    return d_5d51_d5a6;
}

void f_8539_2cf5(int team)
{
    long v;
    char ok;
    char buf[320];

    for (d_5d51_d7d4 = 1; d_5d51_d7d4 <= 3; d_5d51_d7d4++) {
        for (d_5d51_d7ca = 1; d_5d51_d7ca <= d_5d51_d7cc; d_5d51_d7ca++) {
            if (d_2414_53ff[d_5d51_d7ca] != 0 && d_2414_d490[d_5d51_d7ca] < d_5d51_d481)
                d_2414_53ff[d_5d51_d7ca] = 0;
            if (d_2414_53ff[d_5d51_d7ca] == 0) {
                d_5d51_d9cc = d_2414_d52a[d_5d51_d7ca];
                if (d_5d51_d7d4 == 1) {
                    if (d_5d51_d5a8 != 0 || d_5d51_d5a9 != 0 || d_3404_691c[team] == 0)
                        v = f_1646_0da1(f_1d5e_1342(f_1646_0204(team, d_5d51_d9cc), f_1646_5ac3(d_5d51_d9cc)), 0);
                    else
                        v = f_1d5e_137f(d_5d51_d479, f_1646_5ac3(d_5d51_d9cc));
                    if (v > d_5d51_d479)
                        v = d_5d51_d479;
                } else
                    v = d_2414_d490[d_5d51_d7ca];
                d_5d51_d5a2 = d_5d51_d7d0 > 0 ? -1 : 0;
                d_5d51_d5a3 = d_2414_5425[d_5d51_d7ca];
                d_2414_d490[d_5d51_d7ca] = f_8539_326d(d_5d51_d9cc, team, v);
                if (d_5d51_d7d0 > 0) {
                    if (f_1646_2cc9(d_5d51_d9cc) == 0)
                        f_1d5e_0dbd(25);
                    sprintf(buf, "%s make a bid of %ld", (char far *)d_5d51_b476[d_5d51_d9cc],
                            d_2414_d490[d_5d51_d7ca]);
                    f_8539_4451(1, buf);
                }
                if (d_2414_d490[d_5d51_d7ca] > d_5d51_d481)
                    d_5d51_d481 = d_2414_d490[d_5d51_d7ca];
            }
        }
        if (d_5d51_d7d4 > 1)
            d_5d51_d479 = d_5d51_d47d;
        if (d_5d51_d479 < d_5d51_d481)
            d_5d51_d479 = d_5d51_d481;
        d_5d51_d5a2 = d_5d51_d7d0 > 0 ? -1 : 0;
        d_5d51_d47d = f_8539_3513(d_44d7_0000[18][team], team, d_5d51_d479);
        ok = 0;
        for (d_5d51_d7ca = 1; d_5d51_d7ca <= d_5d51_d7cc; d_5d51_d7ca++) {
            d_5d51_d9cc = d_2414_d52a[d_5d51_d7ca];
            if (d_2414_d490[d_5d51_d7ca] < d_5d51_d47d && d_2414_53ff[d_5d51_d7ca] != 0)
                d_2414_53ff[d_5d51_d7ca] = 0;
            if (d_2414_d490[d_5d51_d7ca] == d_5d51_d47d) {
                if (d_2414_53ff[d_5d51_d7ca] == 0) {
                    d_2414_53ff[d_5d51_d7ca] = -1;
                    d_5d51_d5aa = -1;
                    if (d_5d51_d7d0 > 0) {
                        f_1d5e_0dbd(25);
                        sprintf(buf, "%s offer is accepted", (char far *)d_5d51_b476[d_5d51_d9cc]);
                        f_8539_4451(1, buf);
                    }
                }
            } else {
                ok = -1;
                if (d_5d51_d7d0 > 0) {
                    f_1d5e_0dbd(25);
                    sprintf(buf, "%s offer is refused", (char far *)d_5d51_b476[d_5d51_d9cc]);
                    f_8539_4451(1, buf);
                }
            }
        }
        if (ok == 0)
            d_5d51_d7d4 = 3;
    }
    if (d_3404_691c[team] == 0 && d_5d51_d5aa == 0) {
        d_5d51_d495 = f_1646_0da1(f_1646_0204(team, -1), 0);
        if (d_5d51_d495 > d_5d51_d47d)
            d_5d51_d495 = d_5d51_d47d;
        if (d_5d51_d7d0 > 0) {
            f_1d5e_0dbd(25);
            sprintf(buf, "Tribunal sets fee at %ld", d_5d51_d495);
            f_8539_4451(6, buf);
        }
        d_5d51_d5ab = -1;
        for (d_5d51_d7ca = 1; d_5d51_d7ca <= d_5d51_d7cc; d_5d51_d7ca++) {
            d_5d51_d9cc = d_2414_d52a[d_5d51_d7ca];
            if (f_1646_5ac3(d_5d51_d9cc) >= d_5d51_d495) {
                d_2414_d490[d_5d51_d7ca] = d_5d51_d495;
                d_2414_53ff[d_5d51_d7ca] = -1;
                d_5d51_d5aa = -1;
            } else if (d_5d51_d7d0 > 0) {
                sprintf(buf, "The %s board refuse to spend that much", (char far *)d_5d51_b476[d_5d51_d9cc]);
                f_8539_4451(1, buf);
            }
        }
    } else if (d_5d51_d5aa == 0 && d_5d51_d7d0 > 0)
        f_8539_4451(6, "No agreement is reached");
}

long f_8539_326d(int player, int club, long fee)
{
    d_5d51_d471 = fee;
    if (f_1646_2cc9(player)) {
        do {
            d_5d51_d5ca = -1;
            d_5d51_d7c0 = d_5d51_d471 / 1000;
            d_5d51_d7be = player;
            d_5d51_d7bc = f_8539_4022(0, d_5d51_d7c0, 0, club);
            if (d_5d51_d5a4) {
                do
                    f_a13d_4a1b(club, -1, 0);
                while (!d_5d51_d5df);
                d_5d51_d5df = 0;
                d_5d51_d5ca = 0;
                f_8539_3db1(0, club);
            }
            d_5d51_d471 = (long)d_5d51_d7bc * 1000;
            if (d_5d51_d5ca && f_1646_5ac3(player) < d_5d51_d471) {
                f_8539_4451(1, "The board refuse to spend that much");
                d_5d51_d5ca = 0;
            }
        } while (!d_5d51_d5ca);
    } else {
        d_5d51_d46d = d_5d51_d471;
        if (f_1d5e_0d6a(3) > 0)
            d_5d51_d471 = d_5d51_d471 * (f_1d5e_0d6a(10) / 100.0 + 1.1);
        if (d_5d51_d471 < d_5d51_d481)
            d_5d51_d471 = f_1d5e_137f(d_5d51_d481, d_5d51_d475 * (d_5d51_d5a3 ? 2.5 : 1.5));
        if (d_5d51_d471 > d_5d51_d47d && d_5d51_d7cc == 1)
            d_5d51_d471 = d_5d51_d47d;
        if (d_5d51_d471 > d_5d51_d47d * 0.95)
            d_5d51_d471 = d_5d51_d47d;
        if (f_1646_5ac3(player) < d_5d51_d471)
            d_5d51_d471 = f_1646_5ac3(player);
        if (d_5d51_d471 != d_5d51_d47d)
            d_5d51_d471 = f_1646_0da1(d_5d51_d471, 0);
        if (d_5d51_d471 < d_5d51_d46d)
            d_5d51_d471 = d_5d51_d46d;
    }
    return d_5d51_d471;
}

long f_8539_3513(int club, int player, long fee)
{
    int n;
    long first;
    int saved;

    saved = d_5d51_d7a0;
    d_5d51_d7a0 = club;
    d_5d51_d47d = fee;
    if (f_1646_2cc9(d_5d51_d7a0)) {
        do {
            d_5d51_d5ca = -1;
            d_5d51_d7c0 = d_5d51_d47d / 1000;
            n = d_5d51_d481 / 1000;
            d_5d51_d7bc = f_8539_4022(1, d_5d51_d7c0, n, player);
            if (d_5d51_d5a4) {
                do
                    f_a13d_4a1b(player, -1, 0);
                while (!d_5d51_d5df);
                d_5d51_d5df = 0;
                d_5d51_d5ca = 0;
                f_8539_3db1(0, player);
            }
            d_5d51_d47d = (long)d_5d51_d7bc * 1000;
            if (d_5d51_d5ca && d_5d51_d47d < f_1646_0204(player, -1) * 0.5) {
                f_8539_4451(1, "The board expect more for him");
                d_5d51_d5ca = 0;
            }
        } while (!d_5d51_d5ca);
    } else {
        first = d_5d51_d47d;
        if (f_1d5e_0d6a(2) == 0)
            d_5d51_d47d = d_5d51_d47d * (0.9 - f_1d5e_0d6a(10) / 100);
        if (d_5d51_d47d * 0.95 < d_5d51_d481)
            d_5d51_d47d = d_5d51_d481;
        else if (d_5d51_d47d > d_5d51_d481)
            d_5d51_d47d = f_1646_0da1(d_5d51_d47d, 0);
        if (d_5d51_d47d > first)
            d_5d51_d47d = first;
    }
    d_5d51_d7a0 = saved;
    return d_5d51_d47d;
}

void f_8539_375d(int player, int club)
{
    d_5d51_d7ba = f_8539_3d68(d_44d7_0000[17][player]);
    d_5d51_d7b8 = f_1646_6f80(player, club);
    d_5d51_d7b6 = d_44d7_0000[14][player] / 10 + 2.5;
    d_5d51_d5ae = 0;
    if (f_1646_2cc9(club) && d_5d51_d5a1 == 0) {
        char buf[320];

        d_5d51_d606 = 1;
        d_5d51_d7c6 = 8;
        f_8539_3db1(2, player);
        sprintf(buf, "He wants a %d year contract", d_5d51_d7ba);
        f_8539_4451(1, buf);
        d_5d51_d7b4 = 0;
        d_5d51_d7b2 = 10;
        d_5d51_d7b0 = -1;
        do {
            do {
                d_5d51_d5ca = -1;
                d_5d51_d7c0 = d_5d51_d7b0 == -1 ? d_5d51_d7ba : d_5d51_d7b0;
                d_5d51_d7bc = f_8539_4022(2, d_5d51_d7c0, 1, player);
                if (d_5d51_d5a4) {
                    do
                        f_a13d_4a1b(player, -1, 0);
                    while (!d_5d51_d5df);
                    d_5d51_d5df = 0;
                    d_5d51_d5ca = 0;
                    f_8539_3db1(2, player);
                }
                d_5d51_d7b0 = d_5d51_d7bc;
            } while (!d_5d51_d5ca);
            if (d_5d51_d7b0 != d_5d51_d7ba &&
                (f_1d5e_0d6a(abs(d_5d51_d7ba - d_5d51_d7b0) + 2) > 0 ||
                 abs(d_5d51_d7ba - d_5d51_d7b0) >= d_5d51_d7b2)) {
                sprintf(buf, "He refuses %d year offer", d_5d51_d7b0);
                f_8539_4451(1, buf);
                d_5d51_d7b4++;
                if (d_5d51_d7b4 <= d_5d51_d7b6)
                    d_5d51_d7b2 = abs(d_5d51_d7ba - d_5d51_d7b0);
                d_5d51_d5ca = 0;
            }
        } while (d_5d51_d7b4 <= d_5d51_d7b6 && d_5d51_d5ca == 0);
        if (d_5d51_d5ca) {
            sprintf(buf, "He accepts %d year offer", d_5d51_d7b0);
            f_8539_4451(1, buf);
            sprintf(buf, "He wants %d per week", d_5d51_d7b8);
            f_8539_4451(1, buf);
            d_5d51_d7dc = d_5d51_d7b0;
            d_5d51_d5a2 = -1;
            d_5d51_d7b4 = 0;
            d_5d51_d7ae = -1;
            d_5d51_d7ac = 0;
            d_5d51_d7aa = f_8539_3bd1(player, club);
            do {
                do {
                    d_5d51_d5ca = -1;
                    d_5d51_d7c0 = d_5d51_d7ae == -1 ? d_5d51_d7b8 : d_5d51_d7ae;
                    d_5d51_d7bc = f_8539_4022(3, d_5d51_d7c0, 100, player);
                    if (d_5d51_d5a4) {
                        do
                            f_a13d_4a1b(player, -1, 0);
                        while (!d_5d51_d5df);
                        d_5d51_d5df = 0;
                        d_5d51_d5ca = 0;
                        f_8539_3db1(2, player);
                    }
                    d_5d51_d7ae = d_5d51_d7bc;
                    if (d_5d51_d5ca && d_5d51_d7ae > d_5d51_d7aa) {
                        f_8539_4451(1, "The board refuse to spend that per week");
                        d_5d51_d5ca = 0;
                    }
                } while (!d_5d51_d5ca);
                d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 0);
                if ((d_5d51_d7b8 * (1 - f_1d5e_0d6a(6) * 0.05) > d_5d51_d7ae ||
                     d_5d51_d7ae <= d_5d51_d7ac || d_5d51_da4c[4][player] > d_5d51_d7ae &&
                     d_44d7_0000[17][player] < 30) &&
                    abs(d_5d51_d7ae - d_5d51_d7b8) > f_1d5e_0d6a(20) + 25) {
                    sprintf(buf, "He wants more than %d per week", d_5d51_d7ae);
                    f_8539_4451(1, buf);
                    d_5d51_d7b4++;
                    if (d_5d51_d7b4 <= d_5d51_d7b6)
                        d_5d51_d7ac = d_5d51_d7ae;
                    d_5d51_d5ca = 0;
                }
            } while (d_5d51_d7b4 <= d_5d51_d7b6 && d_5d51_d5ca == 0);
            if (d_5d51_d5ca) {
                sprintf(buf, "He accepts %d per week", d_5d51_d7ae);
                f_8539_4451(1, buf);
                d_5d51_d7da = d_5d51_d7ae;
                d_5d51_d5ae = -1;
            }
        }
        if (d_5d51_d5ae == 0)
            f_8539_4451(6, "No deal");
    } else {
        d_5d51_d7dc = d_5d51_d7ba;
        d_5d51_d7da = d_5d51_d7b8;
        d_5d51_d5ae = -1;
    }
}

int f_8539_3bd1(int player, int team)
{
    unsigned char c;
    unsigned char r;
    unsigned char rep = team < 38 ? f_1646_2cfd(team) : 16.0;
    float w;
    float t[4] = { 1.0, 0.7, 0.4, 0.3 };

    c = d_3c0d_0000[18][player];
    d_5d51_d7a8 = (d_44d7_0000[0][player] * 4 + c) / 5;
    r = f_1d5e_1308(f_1d5e_136a(19, d_5d51_d7a8 / 10), 0);
    w = rep * 0.14 * (d_240d_0000[r] * 400.0) * t[team < 38 ? f_1646_717d(team) : 0];
    w = w * (d_44d7_0000[17][player] / 100.0 + 1);
    if (d_2414_af3c[player].a.f28)
        w = w * 1.3;
    w = w * 1.2;
    d_5d51_d7aa = (int)(w / 10.0) * 10;
    d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 0);
    if (d_5d51_da4c[4][player] > d_5d51_d7aa)
        d_5d51_d7aa = d_5d51_da4c[4][player];
    return d_5d51_d7aa;
}

int f_8539_3d68(int age)
{
    d_5d51_d7ba = f_1d5e_0d6a(5) + 1;
    if (age >= 27 && age <= 31)
        d_5d51_d7ba = f_1d5e_136a(32 - age, d_5d51_d7ba);
    else if (age > 31)
        d_5d51_d7ba = f_1d5e_136a(d_5d51_d7ba, 2);
    return d_5d51_d7ba;
}

void f_8539_3db1(int mode, int player)
{
    char buf[320];

    if (mode == 0) {
        sprintf(buf, "%s - Transfer Fee", f_1646_470f(player));
        strcpy(d_2414_4674, "Fee Negotiations");
    } else if (mode == 1) {
        sprintf(buf, "%s - Asking Price", f_1646_470f(player));
        strcpy(d_2414_4674, "Set Asking Price");
    } else if (mode == 2) {
        sprintf(buf, "%s - Contract", f_1646_470f(player));
        strcpy(d_2414_4674, "Set Contract");
    } else {
        sprintf(buf, "%s - Wage Increase", f_1646_470f(player));
        strcpy(d_2414_4674, "Set Weekly Wage");
    }
    f_1646_4ba0(buf);
    f_1d5e_08cc(16);
    f_1d5e_08e2(14, 36, 314, 127);
    f_1d5e_08cc(31);
    f_1d5e_08e2(10, 32, 310, 123);
    f_1d5e_08d7(19);
    f_1d5e_0929(10, 32, 310, 123);
    sprintf(buf, " %s", d_2414_4674);
    f_1646_3686(1.625, 5.0, 1, 2, 296, buf);
    f_8539_3f43(player, 0);
    d_5d51_d5a2 = -1;
    d_5d51_d606 = 0;
}

void f_8539_3f43(int player, char lit)
{
    f_1d5e_08cc(16);
    f_1d5e_08e2(14, 135, 172, 192);
    f_1d5e_08cc(lit ? 28 : 20);
    f_1d5e_08e2(10, 131, 168, 188);
    f_1d5e_08d7(17);
    f_1d5e_0929(10, 131, 168, 188);
    strcpy(d_2414_36ce, f_1646_48c0(player));
    f_1646_357e(79 - strlen(d_2414_36ce) * 3 + 19, 156, 1, d_2414_36ce);
    f_1646_357e(74, 164, 1, "Factfile");
}

int f_8539_4022(int mode, int value, int lo, int player)
{
    d_5d51_d5a4 = 0;
    d_5d51_d7a4 = value;
    d_5d51_d7a2 = mode == 2 ? 5 : 19999;
    if (d_5d51_d5a2 != 0) {
        f_1646_5020();
        f_1d5e_08cc(16);
        f_1d5e_08e2(180, 135, 314, 192);
        f_1d5e_08cc(24);
        f_1d5e_08e2(176, 131, 310, 188);
        f_1d5e_08d7(22);
        f_1d5e_0929(176, 131, 310, 188);
        if (mode == 0)
            sprintf(d_2414_367e, "%s Offer", (char far *)d_5d51_b476[d_5d51_d7be]);
        else if (mode == 1)
            sprintf(d_2414_367e, "%s Ask", (char far *)d_5d51_b476[d_5d51_d7a0]);
        else if (mode == 2)
            strcpy(d_2414_367e, " Length");
        else
            strcpy(d_2414_367e, " Wages p/w");
        f_1d5e_08cc(30);
        f_1d5e_08e2(180, 135, 306, 150);
        f_1646_357e(251 - strlen(d_2414_367e) * 3, 146, 6, d_2414_367e);
        f_1646_50c5(2, 22.75, 19.625, 1, 14, 26, " - ");
        f_1646_50c5(2, 34.875, 19.625, 1, 14, 26, " + ");
        f_1646_50c5(2, 22.75, 21.75, 1, 14, 123, "      DONE");
        strcpy(d_2414_362e, "    ");
        f_8539_4340(d_5d51_d7a4, -1);
    }
    do {
        d_5d51_da0a = f_1646_5602(-1);
        if (d_5d51_da0a == 1) {
            d_5d51_d7a4 = f_1d5e_1308(d_5d51_d7a4 - d_5d51_3222[8 - d_5d51_d7c6], lo);
            f_8539_4340(d_5d51_d7a4, 0);
        } else if (d_5d51_da0a == 2) {
            d_5d51_d7a4 = f_1d5e_136a(d_5d51_d7a4 + d_5d51_3222[8 - d_5d51_d7c6], d_5d51_d7a2);
            f_8539_4340(d_5d51_d7a4, 0);
        } else if (d_5d51_da0a >= 4) {
            if ((d_5d51_da0a == 8 || mode != 2) && d_5d51_d7c6 != d_5d51_da0a) {
                d_44d7_8ccf[d_5d51_d7c6] = 0xe1;
                f_1646_545c(d_5d51_d7c6, 0);
                d_5d51_d7c6 = d_5d51_da0a;
                d_44d7_8ccf[d_5d51_d7c6] = 1;
                f_1646_545c(d_5d51_d7c6, 0);
            }
        } else if (f_1d5e_0c0f() >= 10 && f_1d5e_0c0f() <= 168 && f_1d5e_0c07() >= 131 && f_1d5e_0c07() <= 188) {
            d_5d51_d5a4 = -1;
            f_8539_3f43(player, -1);
        }
    } while (d_5d51_da0a != 3 && d_5d51_d5a4 == 0);
    d_5d51_d5a2 = 0;
    return d_5d51_d7a4;
}

void f_8539_4340(int n, char draw)
{
    char s[2];

    s[1] = 0;
    sprintf(d_2414_4944, "%05d", n);
    for (d_5d51_d934 = 1; d_5d51_d934 <= 5; d_5d51_d934++) {
        s[0] = d_2414_4944[d_5d51_d934 - 1];
        if (d_2414_362e[d_5d51_d934 - 1] != s[0]) {
            if (draw) {
                d_5d51_d541 = (d_5d51_d934 - 1) * 1.625 + 26.625;
                f_1646_50c5(2, d_5d51_d541, 19.625, d_5d51_d934 + 3 != d_5d51_d7c6 ? 14 : 0, 1, 8, s);
            } else {
                strcpy(d_2414_0e88[d_5d51_d934 + 2], s);
                f_1646_545c(d_5d51_d934 + 3, 0);
            }
        }
    }
    strcpy(d_2414_362e, d_2414_4944);
}

void f_8539_4451(int colour, char far *s)
{
    if (d_5d51_d606 == 9) {
        for (d_5d51_d80c = 1; d_5d51_d80c <= 4; d_5d51_d80c++) {
            f_1d5e_114c(12, 42, 308, 121, 2, 31);
            f_1d5e_08d7(31);
            f_1d5e_0fe3(12, 42, 308, 42);
            f_1d5e_0fe3(12, 43, 308, 43);
        }
        d_5d51_d606 = 8;
    }
    f_1646_357e(23, d_5d51_d606 * 8 + 50, colour, s);
    d_5d51_d606++;
    if (colour == 6)
        f_1d5e_0dbd(50);
}

void f_8539_4508(int player, int to, int from, long fee, unsigned char kind)
{
    int saved;

    saved = from;
    d_5d51_d7a0 = from;
    if (d_5d51_da06 > 12) {
        f_1d5e_1a24(2);
        d_5d51_0098 = fopen(d_2414_0050, "rb+");
        f_a7f0_3054(player);
        fclose(d_5d51_0098);
    }
    if (to < 38 && f_1646_2cc9(to) && kind != 2)
        f_a7f0_42c5(d_3404_4226[to] + 122, 1, player, d_5d51_d7a0, kind ? 1L : fee, d_5d51_d5ab);
    if (d_5d51_d7a0 < 38 && f_1646_2cc9(d_5d51_d7a0) && kind != 2)
        f_a7f0_42c5(d_3404_4226[d_5d51_d7a0] + 122, 2, player, to, kind ? 1L : fee, d_5d51_d5ab);
    if (kind == 1) {
        d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 1);
        d_5d51_da38[4][player] = d_3c0d_0000[12][player];
        d_5d51_da38[5][player] = d_3c0d_0000[13][player];
        d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 1);
        d_5d51_da4c[3][player] = d_5d51_da4c[2][player];
        d_3404_4f52[to]++;
    }
    if (kind == 2) {
        d_5d51_da38 = f_1d5e_1618(d_5d51_dd92, 0);
        d_3c0d_0000[12][player] = d_5d51_da38[4][player];
        d_3c0d_0000[13][player] = d_5d51_da38[5][player];
        d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 1);
        d_5d51_da4c[2][player] = d_5d51_da4c[3][player];
    } else if (kind < 2) {
        d_3c0d_0000[12][player] = 0;
        d_3c0d_0000[13][player] = 0;
        d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 1);
        d_5d51_da4c[2][player] = 0;
    }
    if (kind == 0) {
        d_3404_691c[player] = (d_5d51_da04 + d_5d51_d7dc) * 100 + f_1646_6aa9(d_5d51_da06);
        d_5d51_da4c = f_1d5e_1618(d_5d51_dd9c, 1);
        d_5d51_da4c[4][player] = d_5d51_d7da;
        d_2414_af3c[player].w.f9 = 1;
        d_2414_af3c[player].w.f11 = 1;
        d_2414_af3c[player].w.f12 = 0;
        d_2414_af3c[player].w.f13 = 0;
    }
    d_3c0d_0000[11][player] = 0;
    d_2414_af3c[player].w.f8 = 0;
    d_2414_af3c[player].w.f10 = 0;
    d_2414_af3c[player].w.f20 = kind == 1;
    d_2414_af3c[player].w.f24 = 0;
    d_2414_af3c[player].w.f16 = 0;
    if (d_5d51_d7a0 != to) {
        if (kind < 2) {
            long v;
            unsigned char c;

            if (kind == 0) {
                if (d_44d7_0000[0][player] > d_44d7_0000[15][player])
                    d_44d7_0000[15][player] = d_44d7_0000[0][player];
                if (d_5d51_d7a0 < 38 && !d_5d51_d5ea) {
                    d_5d51_da44 = f_1d5e_1618(d_5d51_dd98, 1);
                    d_5d51_da44[2][d_5d51_d7a0] += fee * 0.9;
                }
                if (to < 38 && !d_5d51_d5ea) {
                    d_5d51_da44 = f_1d5e_1618(d_5d51_dd98, 1);
                    d_5d51_da44[9][to] += fee;
                }
                if (d_5d51_d7a0 < 38 && to < 38 && !d_5d51_d5ea)
                    for (d_5d51_d9cc = 0; d_5d51_d9cc <= 37; d_5d51_d9cc++)
                        if (d_5d51_d9cc != to && d_5d51_d9cc != d_5d51_d7a0) {
                            d_5d51_da44 = f_1d5e_1618(d_5d51_dd98, 1);
                            d_5d51_da44[6][d_5d51_d9cc] += fee * (1.0 / 780);
                        }
                if (to < 38) {
                    f_9182_4ad7(player, d_5d51_d7a0, to, fee);
                    d_3404_3ee2[to] += fee;
                }
                if (d_5d51_d7a0 < 38) {
                    f_9182_4b57(player, d_5d51_d7a0, to, fee);
                    d_3404_3f7a[d_5d51_d7a0] += fee;
                }
                v = fee;
            } else
                v = 1;
            if (d_5d51_d7a0 < 38) {
                c = d_2414_97a8[d_5d51_d7a0].nout % 6;
                d_2414_97a8[d_5d51_d7a0].out[c] = player;
                d_2414_97a8[d_5d51_d7a0].outto[c] = to;
                d_2414_97a8[d_5d51_d7a0].outfee[c] = v;
                d_2414_97a8[d_5d51_d7a0].nout++;
            }
            if (to < 38) {
                c = d_2414_97a8[to].nin % 6;
                d_2414_97a8[to].in[c] = player;
                d_2414_97a8[to].infrom[c] = d_5d51_d7a0;
                d_2414_97a8[to].infee[c] = v;
                d_2414_97a8[to].nin++;
            }
        }
        d_3c0d_0000[10][player] = d_5d51_d7a0;
        f_8539_4d09(player, d_5d51_d7a0, to, kind);
    }
    if (kind == 0)
        f_8539_1978(player, 0);
    if (to < 38 && f_1646_2cc9(to) == 0 && d_5d51_d5e6 == 0 && kind != 2) {
        unsigned char i;

        for (i = 0; d_2414_9618[i].player != -1; i++)
            ;
        d_2414_9618[i].player = player;
        d_2414_9618[i].from = d_5d51_d7a0;
        d_2414_9618[i].to = to;
        if (kind == 0)
            d_2414_9618[i].fee = fee;
        else if (kind == 1)
            d_2414_9618[i].fee = 1;
        f_b0f1_6c80(i);
    }
    if (to < 38 && f_1646_2cc9(to) == 0)
        f_8539_1aa0(to);
    d_5d51_d7a0 = saved;
}

void f_8539_4d09(int player, int from, int to, char kind)
{
    if (from != to) {
        if (from < 38) {
            if (f_1646_6f38(player) == 0)
                for (d_5d51_d98e = 0; d_5d51_d98e <= d_3404_4552[from] - 1; d_5d51_d98e++)
                    if (d_44d7_9624[from][d_5d51_d98e] == player)
                        d_44d7_9624[from][d_5d51_d98e] = d_44d7_9624[from][d_3404_4552[from] - 1];
            d_3404_4552[from]--;
            if (d_2414_af3c[player].w.f0)
                d_3404_45ca[from]--;
            if (f_1646_2cc9(from) && f_1646_6f38(player) == 0)
                f_b0f1_3704(player, from);
        }
        if (to < 38) {
            d_44d7_9624[to][d_3404_4552[to]] = player;
            d_3404_4552[to]++;
            if (d_2414_af3c[player].w.f0)
                d_3404_45ca[to]++;
            if (f_1646_2cc9(to))
                f_b0f1_36ad(player, to);
        }
    }
    if (from < 38 && f_1646_6f38(player) == 0) {
        if (f_1646_2cc9(from) == 0)
            f_1646_0f3a(player);
        else if (d_2414_af3c[player].w.f7) {
            d_3404_0e34[from][f_1646_1f63(player)] = 1499;
            d_2414_af3c[player].w.f7 = 0;
        }
        if (d_44d7_0000[23][player] < 3)
            f_1646_174b(player);
    }
    if (from != to) {
        d_44d7_0000[18][player] = to;
        if (kind == 1) {
            d_3c0d_0000[7][player] = from;
            d_3404_4e3a[from]++;
            d_3404_4e12[to]++;
        } else if (kind == 2) {
            d_3c0d_0000[7][player] = -1;
            d_3404_4e12[from]--;
            d_3404_4e3a[to]--;
        }
        if (to < 38) {
            if (f_1646_2cc9(to) == 0 && d_44d7_0000[20][player] == 0)
                f_1646_13f1(player);
            d_44d7_0000[23][player] = 3;
            f_1646_1a2f(player);
        }
    }
}

void f_8539_4fbd(int player, int a)
{
    unsigned char c;
    char s[80];
    char buf[320];

    if (a > 0) {
        if (f_1646_6f38(player) == 0)
            f_8539_1e06(a - 1, player, 0);
        else
            f_b0f1_4572(player, a - 1);
    } else if (a == -1) {
        d_5d51_d5a0 = 0;
        f_8539_5313(player);
    }
    else if (a < -1) {
        d_5d51_d79e = -a - 2;
        do {
            f_1646_4ba0("Shortlist/Watch Player");
            f_1646_459b(1.0, 4.0, d_5d51_d79e);
            sprintf(buf, "Shortlist %s ?", f_1646_470f(player));
            f_1646_0b2f(7, buf);
            f_1646_2fa4(10, "", "*Exit|Shortlist|Shortlist & Watch|");
            f_1646_3348(2);
            c = d_5d51_da0a;
            if (c > 0) {
                if (f_8539_1b9e(d_5d51_d79e, player) > 0)
                    sprintf(buf, "%s already shortlisted", f_1646_48c0(player));
                else {
                    d_3404_0260[d_5d51_d79e][0]++;
                    d_3404_0260[d_5d51_d79e][d_3404_0260[d_5d51_d79e][0]] = player;
                    sprintf(buf, "Ok - %s shortlisted", f_1646_48c0(player));
                    if (d_5d51_d956 > 1) {
                        sprintf(s, "|for %s", (char far *)d_5d51_b476[d_5d51_d79e]);
                        strcat(buf, s);
                    }
                }
                f_1646_0bf2(buf);
            }
            if (c == 2) {
                if (f_1646_6f38(player) == 0)
                    f_a7f0_6442(d_5d51_d79e, player);
                else
                    f_1646_0bf2("Can't watch foreign|based players");
            }
        } while (c > 0);
    }
}

char f_8539_51af(int player, char flag)
{
    d_5d51_d5a0 = 0;
    if (f_1646_2cc9(d_44d7_0000[18][player]))
        f_8539_5313(player);
    else if (!d_2414_af3c[player].w.f9 && !d_2414_af3c[player].w.f30 && f_1646_2e15(player) == 0
             && d_44d7_0000[23][player] == 3 && d_3404_4272[d_44d7_0000[18][player]] < 650) {
        if (flag == 0 && f_1646_2dce(player) < f_1646_2cfd(d_44d7_0000[18][player]) + 3.0
            || flag != 0 && f_1646_2dce(player) >= f_1646_2cfd(d_44d7_0000[18][player]) + 3.0
               && d_44d7_0000[20][player] == 0 && !d_2414_af3c[player].w.f7)
            d_5d51_d5a0 = -1;
    }
    return d_5d51_d5a0;
}

/* f_8539_5313: not written yet */
