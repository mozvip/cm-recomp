/* @at aac9:0000 */
/* @data 69da:5e52 */
/* @module */

/* Overlay aac9 (CM93's A694.C, from CM1's A1C3.C): the player's career and information
 * pages, the club Info screen (records, attendances, top scorers), the title picture and the
 * palette, the new game's setup (starting division, nations, each human player choosing a
 * team), future targets, and the player details screen used for transfers, with buying and
 * the shortlist. It is compiled with jump optimisation off (`#pragma option -O-`) throughout.
 * Its data is the career screen's buttons, the club screen's page names, the palette's
 * colours 16-31 and the setup's nations, then its literal pool. */
#include <stdio.h>
#include <string.h>
#include <mem.h>
#include <stdlib.h>
#include <dos.h>
#include <ctype.h>
#pragma option -O-

/* the functions, in the reverse order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_aac9_0000(int player, int mode);
void f_aac9_07c3(int team);
void f_aac9_1732(char a);
char far *f_aac9_1a9e(int a, int b);
int f_aac9_1b3a(void);
void f_aac9_1b9b(void);
void f_aac9_1ca7(void);
void f_aac9_1ccf(void);
void f_aac9_1d33(int p);
void f_aac9_2ece(void);
void f_aac9_2f6d(void);
void f_aac9_2fbe(void);
int f_aac9_33fe(int p);
int f_aac9_3615(int p);
void f_aac9_36e7(void);
void f_aac9_3eb2(void);
void f_aac9_3fde(void);
void f_aac9_421c(void);
void f_aac9_42ed(int player, int team, char buy);
void f_aac9_5291(int p);

void f_1a70_5e32(void);
void f_1a70_5e46(void);
void f_1a70_4a41(char far *title);
char far *f_1a70_4592(int player);
char f_1a70_6d23(int player);
void f_1a70_3554(float x, float y, int bg, int fg, int w, char far *s);
void f_1a70_3d0c(float x, float y, int bg, int fg, int w, char far *s);
void f_1a70_344b(int x, int y, int colour, char far *s);
void f_1a70_000a(float x, int team, char far *title);
void f_1a70_4ede(int a, float x, float y, int c, int d, int e, char far *s);
void f_1a70_525f(int a, char b);
int f_1a70_53de(int a);
void f_1a70_5641(int team);
char f_1a70_2bc7(int x);
int f_1a70_4513(int team);
char far *f_1a70_46c1(int player);
char far *f_1a70_4793(int manager, char full);
char far *f_1a70_48f5(int n);
char far *f_1a70_4983(int division, char full);
void f_2162_0897();
void f_2162_08b5(int x1, int y1, int x2, int y2);
void f_2162_13fc(void far *a, void far *b, int n);
void f_2162_0b0c();
long f_2162_1367(long a, long b);
void far *f_2162_1634(int handle, int page);
long f_a83a_1ea1(int team);
int f_a83a_0000(int x);
char far *f_9c01_6630(int round);
char far *f_9c01_6728(int round);
char far *f_9c01_6806(int round, int cup);
void f_a330_0000(int team);
void f_9c01_59a6(int team);
void f_9c01_4a17(int team);
struct label { int x, y; char far *s; };
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
extern unsigned char far d_28da_2a78[][1860];
extern unsigned char far d_28da_ad40[];
extern unsigned char far d_3668_0000[][1860];
extern int far d_28da_10f0[][26];
extern struct flags_w far d_4512_bdc8[];
extern unsigned char far d_4512_00a4[];
extern unsigned char far d_4512_7f74[];
extern int far d_4512_1a30[];
extern long far d_4512_1e90[][80];
extern long far d_4512_2250[];
extern unsigned char far d_4512_0052[];
extern unsigned char far d_4512_1524[];
extern unsigned char far d_4512_01ec[];
extern unsigned char far d_4512_023e[];
extern unsigned char far d_4512_0334[][82];
extern unsigned char far d_4512_03d8[];
extern unsigned char far d_4512_042a[];
extern unsigned char far d_4512_138a[];
extern unsigned char far d_4512_880c[][140];
extern unsigned char far d_4512_8b54[];
extern unsigned char far d_4512_8be0[];
extern unsigned char far d_4512_8c6c[];
extern unsigned char far d_4512_8cf8[];
extern unsigned char far d_4512_8d84[];
extern unsigned char far d_4512_8e10[];
extern char far d_536d_703b[][6];
extern char far d_536d_703c[][6];
extern char far d_536d_72bb[];
extern char far d_536d_8139[];
extern char far d_536d_8189[];
extern char far d_536d_7405[];
extern char far d_536d_7455[];
extern char far d_536d_57cb[];
extern char far d_536d_55eb[];
extern char far * far d_5dbf_0000[];
extern char near *d_69da_b1fc[];
extern char near *d_69da_b5c4[];
extern int (far *d_69da_dfa6)[1860];
extern char d_69da_ddbc;
extern char d_69da_ddb8;
extern char d_69da_ddb6;
extern int d_69da_dfec;
extern int d_69da_d9c0;
extern int d_69da_d9ea;
extern int d_69da_d9c4;
extern int d_69da_dd54;
extern int d_69da_dd56;
extern int d_69da_dd58;
extern int d_69da_dd5a;
extern int d_69da_dd5c;
extern int d_69da_dd5e;
extern int d_69da_dd60;
extern int d_69da_dd62;
extern int d_69da_dd64;
extern int d_69da_dd66;
extern int d_69da_dd68;
extern int d_69da_dc9a;
extern int d_69da_db70;
extern int d_69da_dccc;
extern int d_69da_d9a0;
extern int d_69da_dc4e;
extern int d_69da_dc36;
extern int d_69da_dba6;
extern int d_69da_dc90;
extern int d_69da_dc9e;
extern float d_69da_de61;
extern int d_69da_da66;
extern int d_69da_d9f6;
extern int d_69da_d9d2;
extern float d_69da_de4d;
extern int d_69da_da14;
extern int d_69da_d9ba;
extern int d_69da_d9dc;
extern int d_69da_d992;
extern int d_69da_d9ae;
extern unsigned char far d_4512_2390[];
char far *f_1a70_448e(int n, char far *s);
char far *f_1a70_4739(int player);
char far *f_1a70_488b(int player);
extern long d_69da_def9;
extern int d_69da_dd6c;
extern int d_69da_dd6a;
extern int d_69da_db54;
extern int d_69da_da4a;
extern int d_69da_d9fc;
extern int d_69da_d9f0;
extern int d_69da_d9de;
extern long far *d_69da_df9e;
extern int d_69da_dfe8;
void f_2162_01cd(void);
void f_2162_0470(void);
void f_2162_0983(void);
char far *f_2162_0f38(void);
void f_2162_19f6();
extern int d_69da_dffc;
extern long (far *d_69da_dfae)[80];
extern float d_69da_de45;
extern char d_69da_de31;
int f_1a70_1dc1(int player);
long f_1a70_01d9(int p, int n);
long f_1a70_0d58(long v);
char far *f_1a70_0dfe(long amount);
long f_9661_13f2(int player);
char f_1a70_68f0(int player, char c);
char far *f_1a70_2e4a(int x, char c);
extern long d_69da_def5;
extern char d_69da_ddfa;
extern int d_69da_dd50;
extern int d_69da_dd4e;
extern int d_69da_dd4c;
extern int d_69da_db76;
extern unsigned char far d_4512_4492[];
void f_1a70_2eaa(int n, char far *title, char far *items);
void f_1a70_3226(int last);
char far *f_1a70_3404(int x);
float f_1a70_2bff(int x);
void f_a83a_004b(int a, int b);
void f_a330_4876(int n);
extern char d_69da_de30;
extern char d_69da_de2f;
extern char d_69da_de2a;
extern int d_69da_dd2e;
extern int d_69da_dd2c;
extern int d_69da_dd2a;
extern int d_69da_dd28;
extern int d_69da_dbb4;
extern int d_69da_da6e;
extern int d_69da_da4e;
extern int d_69da_da4c;
extern int d_69da_d9ec;
extern int d_69da_d9d8;
extern int d_69da_d9d6;
extern char near *d_69da_b2a4[];
extern unsigned char far d_4512_0000[][82];
void f_a83a_036f(int a, int b, int c);
void f_a83a_0630(int t);
void f_a83a_0852(int a, int b);
int f_2162_13ba(int a, int b);
char f_1a70_237e(int);
void f_b8da_61ff(char a);
void f_b8da_6369(char a, int i, int n);
extern int d_69da_d99a;
extern int d_69da_dc52;
extern int d_69da_dbb0;
extern int d_69da_da86;
extern int d_69da_dd22;
extern int d_69da_dd24;
extern int d_69da_dd34;
extern int d_69da_dd36;
extern int d_69da_d996;
extern int d_69da_dab8;
extern int d_69da_d9b2;
extern int d_69da_d9b0;
extern int d_69da_da0a;
extern int d_69da_d9b4;
extern int d_69da_d9b6;
extern int d_69da_d9b8;
extern int d_69da_dfea;
extern int d_69da_dff2;
extern long d_69da_df85;
extern char d_69da_de2d;
extern int far *d_69da_dfa2;
extern int (far *d_69da_dfb2)[100];
extern unsigned char far d_4512_0386[];
char far *f_2162_0e9b(char far *s);
char far *f_2162_0f6e(char far *s, unsigned n);
char f_1a70_6783(int x);
char f_1a70_2d0e(int x);
void f_a83a_1344(char all);
void f_a83a_146b(char redraw);
void f_1a70_0b80(char far *s);
extern unsigned char far d_4512_06ba[];
extern char d_69da_ddc9;
extern char d_69da_ddbe;
extern int d_69da_dda2;
extern int d_69da_dd76;
extern int d_69da_dd4a;
extern int d_69da_dac4;
extern int d_69da_dac2;
extern int d_69da_d9e8;
extern int d_69da_dd52;
extern float far d_4512_a02c[][4];
extern int far d_4512_a01c[][4];
extern long far d_4512_a054[];
extern int far d_4512_a04c[];
extern int d_69da_d98e;
extern int d_69da_dfee;
extern char far *d_69da_dfaa;
void f_2162_05a0(char reset);
void f_2162_03a0(int i, char r, char g, char b);
extern char far d_536d_8229[];
extern char far d_536d_591f[];
extern unsigned char far d_5dbf_0996[][460];
char f_b8da_4a37(int player);
extern int far d_3668_cb70[];
extern char far * far d_5dbf_0359[];
extern char far * far d_5dbf_0626[];
extern int d_69da_dff6;
extern unsigned char (far *d_69da_dfba)[1860];
extern char far d_536d_7fa9[];
long f_2162_0da1(long n);
extern unsigned char far d_4512_2b2e[];
extern unsigned char far d_4512_3042[];
extern unsigned char far d_5dbf_0b12[];
extern unsigned char far d_5dbf_0cde[];
extern unsigned char far d_5dbf_4fd2[][140];
extern char near *d_69da_b2a0[];
extern char d_69da_de3d;
void f_1a70_598c(int team, char far *title, char far *text);
int f_b8da_0000(int a, char team);
void f_b8da_609f(void);
extern int far d_4512_1710[][80];
extern long far d_4512_1fd0[];
extern long far d_4512_2110[];
extern unsigned char far d_4512_6324[][20];
extern int far d_5dbf_1292[][2][98];
extern char d_69da_df91;
extern char d_69da_de3f;
extern int d_69da_d990;
extern int d_69da_da24;
extern int d_69da_dff0;
extern char (far *d_69da_dfc6)[101];
int f_9007_1a61(int team, int p);
extern char far d_536d_75e5[];
extern char far d_536d_56db[];
extern char far d_536d_7725[];
extern char far d_536d_7775[];
extern char far d_536d_77c5[];
extern char far d_536d_7815[];
extern char far d_536d_7865[];
extern char far d_536d_6efb[];
extern char far d_536d_76d5[];
extern char far d_536d_7c25[];
extern char far d_536d_6c03[];
extern char far d_536d_65c1[];
extern char far d_536d_7c75[];
extern char far d_536d_7cc5[];
extern char far d_536d_7d15[];
extern char far d_536d_7d65[];
extern char far d_536d_7db5[];
extern char far d_536d_7e19[];
extern char far d_536d_7e69[];
extern char far d_536d_7eb9[];
extern char far d_536d_7f09[];
extern char far d_536d_7f59[];
extern char far d_536d_7ff9[];
extern char far d_536d_7b85[];
extern char far d_536d_8099[];
extern char far d_536d_7bd5[];
extern char far d_536d_78b5[];
extern char far d_536d_7905[];
extern char far d_536d_7955[];
extern char far d_536d_79a5[];
extern char far d_536d_79f5[];
extern char far d_536d_7a45[];
extern char far d_536d_7a95[];
extern char far d_536d_7ae5[];
extern char far d_536d_7b35[];
extern char far d_536d_69d1[];
extern char far d_536d_80e9[];
extern int far d_4512_a374[];
extern unsigned char far d_4512_261a[];
extern unsigned char far d_4512_28a4[];
struct transfers { int in[6], out[6]; /* the players */ unsigned char in_club[6], out_club[6]; /* the other club */ long in_fee[6], out_fee[6]; /* the fee, 1 for a loan */ unsigned char n_in, n_out; /* how many so far */ };
extern int far d_28da_0000[];
extern int far d_28da_2270[];
extern int far d_28da_2334[];
extern unsigned char far d_4512_1576[];
extern unsigned char far d_4512_16be[];
extern unsigned char far d_4512_6376[];
extern int far d_4512_637c[][16];
extern unsigned char far d_4512_8f28[];
extern int far d_4512_9e64[];
extern struct transfers far d_536d_0000[];
extern unsigned char far d_536d_1c70[][766];
extern unsigned char far d_536d_4c3d[][80];
extern char far d_536d_83b9[][82][5];
extern unsigned char far d_4512_1480[];
extern char far d_536d_7685[];
extern char far d_536d_a49d[];


/* the career screen's buttons */
static struct label d_69da_5e52[] = {
    {263, 50, "Seasons"}, {272, 84, "Apps"}, {269, 118, "Goals"}, {272, 152, "Av R"}
};

void f_aac9_0000(int player, int mode)
{
    struct label far *q;
    char buf[320];

    f_1a70_5e32();
    f_1a70_4a41("");
    sprintf(buf, " %s - aged %d", f_1a70_4592(player), d_28da_2a78[17][player]);
    if (f_1a70_6d23(player) == 0) {
        if (d_3668_0000[7][player] < 255)
            f_1a70_3d0c(1.25, 1.25, d_4512_00a4[d_3668_0000[7][player]] / 16,
                        d_4512_00a4[d_3668_0000[7][player]] % 16, 0, buf);
        else
            f_1a70_3d0c(1.25, 1.25, d_4512_00a4[d_28da_ad40[player]] / 16,
                        d_4512_00a4[d_28da_ad40[player]] % 16, 0, buf);
    } else
        f_1a70_3d0c(1.25, 1.25, 1, 4, 0, buf);
    f_1a70_3554(1.125, 5.25, 1, 8, 0, " YEAR ");
    f_1a70_3554(5.875, 5.25, 1, 8, 100, " CLUB");
    f_1a70_3554(18.625, 5.25, 1, 8, 0, " AP ");
    f_1a70_3554(21.875, 5.25, 1, 8, 0, " GL ");
    f_1a70_3554(25.125, 5.25, 1, 8, 0, " AV R ");
    d_69da_d9c0 = 6;
    d_69da_d9ea = 4;
    d_69da_d9c4 = 12;
    d_69da_dd54 = 0;
    d_69da_dd56 = 0;
    d_69da_dd58 = 0;
    d_69da_dd5a = 0;
    if (d_69da_dc9a == 0) {
        f_1a70_3554(1.125, 4.0, 0, 6, 0x130, " NO LEAGUE CAREER TO DATE");
    } else {
        d_69da_dd5c = -1;
        d_69da_dd5e = -1;
        if (d_69da_dc9a > 22) {
            d_69da_db70 = d_69da_dc9a - 21;
            d_69da_dd64 = d_69da_db70 - 1;
        } else {
            d_69da_db70 = 1;
            d_69da_dd64 = d_69da_dc9a;
        }
        d_69da_dccc = d_536d_703c[d_69da_db70 - 1][0] + 1900;
        sprintf(buf, " FOOTBALL LEAGUE CAREER SINCE %d", d_69da_dccc);
        f_1a70_3554(1.125, 4.0, 0, 6, 0x130, buf);
        d_69da_d9a0 = d_69da_db70;
        d_69da_dd66 = 1;
        do {
            unsigned char far *p;

            p = (unsigned char far *)d_536d_72bb;
            memcpy(d_536d_72bb, &d_536d_703b[d_69da_d9a0 - 1][1], 6);
            d_536d_72bb[6] = 0;
            d_69da_dccc = d_536d_72bb[0] + 1900;
            if (d_69da_dccc != d_69da_dd5c) {
                d_69da_dd54++;
                d_69da_dd5c = d_69da_dccc;
            }
            d_69da_dc4e = (unsigned char)d_536d_72bb[1] < 140
                ? d_4512_7f74[(unsigned char)d_536d_72bb[1]] : (unsigned char)d_536d_72bb[1];
            d_69da_dc36 = d_536d_72bb[2];
            d_69da_dd56 += d_69da_dc36;
            d_69da_dba6 = d_536d_72bb[3];
            d_69da_dd58 += d_69da_dba6;
            d_69da_dc90 = (p[4] << 8) | p[5];
            d_69da_dd5a += d_69da_dc90;
            if ((mode == 0 && d_69da_dd66 < 17) || (mode == 1 && d_69da_dd66 > 16)) {
                sprintf(buf, " %d ", d_69da_dccc);
                f_1a70_3554(1.125, d_69da_d9c0 + 0.25, 6, 3, 0, buf);
                if (d_69da_dc4e != d_69da_dd5e) {
                    if (d_69da_dc4e <= 79)
                        sprintf(buf, " %.15s", (char far *)d_69da_b1fc[d_69da_dc4e]);
                    else if (d_69da_dc4e <= 139)
                        sprintf(buf, " %.15s", (char far *)d_69da_b5c4[d_69da_dc4e]);
                    else
                        sprintf(buf, " <%.13s>", d_5dbf_0000[d_69da_dc4e - 140]);
                    d_69da_dd5e = d_69da_dc4e;
                } else
                    strcpy(buf, "");
                f_1a70_3554(5.875, d_69da_d9c0 + 0.25, 1, d_69da_d9ea, 100, buf);
                sprintf(buf, " %02d ", d_69da_dc36);
                f_1a70_3554(18.625, d_69da_d9c0 + 0.25, 1, 2, 0, buf);
                sprintf(buf, " %02d ", d_69da_dba6);
                f_1a70_3554(21.875, d_69da_d9c0 + 0.25, 1, 2, 0, buf);
                sprintf(buf, " %s ", f_aac9_1a9e(d_69da_dc36, d_69da_dc90));
                f_1a70_3554(25.125, d_69da_d9c0 + 0.25, 1, 9, 0, buf);
                f_2162_13fc(&d_69da_d9ea, &d_69da_d9c4, 2);
                d_69da_d9c0++;
            }
            d_69da_dd66++;
            d_69da_ddbc = d_69da_d9a0 == d_69da_dd64;
            if (d_69da_d9a0 == 22)
                d_69da_d9a0 = 1;
            else
                d_69da_d9a0++;
        } while (!d_69da_ddbc);
    }
    while (d_69da_d9c0 < 22) {
        f_1a70_3554(1.125, d_69da_d9c0 + 0.25, 6, 3, 0, "      ");
        f_1a70_3554(5.875, d_69da_d9c0 + 0.25, 1, d_69da_d9ea, 100, "");
        f_1a70_3554(18.625, d_69da_d9c0 + 0.25, 1, 2, 0, "    ");
        f_1a70_3554(21.875, d_69da_d9c0 + 0.25, 1, 2, 0, "    ");
        f_1a70_3554(25.125, d_69da_d9c0 + 0.25, 1, 9, 0, "      ");
        f_2162_13fc(&d_69da_d9ea, &d_69da_d9c4, 2);
        d_69da_d9c0++;
    }
    f_1a70_5e46();
    for (d_69da_d9c0 = 36, q = d_69da_5e52; d_69da_d9c0 <= 138; d_69da_d9c0 += 34, q++) {
        f_2162_0897(24);
        f_2162_08b5(238, d_69da_d9c0, 312, d_69da_d9c0 + 15);
        f_1a70_344b(266, d_69da_d9c0 + 7, 1, "Career");
        f_1a70_344b(q->x, q->y, 1, q->s);
    }
    sprintf(buf, "   %03d", d_69da_dd54);
    f_1a70_3d0c(30.0, 7.25, 0, 1, 71, buf);
    sprintf(buf, "   %03d", d_69da_dd56);
    f_1a70_3d0c(30.0, 11.5, 0, 1, 71, buf);
    sprintf(buf, "   %03d", d_69da_dd58);
    f_1a70_3d0c(30.0, 15.75, 0, 1, 71, buf);
    sprintf(buf, "   %.3s", f_aac9_1a9e(-d_69da_dd56, d_69da_dd5a));
    f_1a70_3d0c(30.0, 20.0, 0, 1, 71, buf);
}

void f_aac9_07c3(int team)
{
    int who[3];
    char buf[320];
    char far *names[7] = { "PLD", "WON", "DRN", "LST", "FOR", "AGG", "PTS" };
    float best[3];
    unsigned i;
    int j;

    do {
        f_1a70_5e32();
        f_1a70_000a(1.25, team, "Info");
        f_2162_0b0c(1);
        f_2162_0897(16);
        f_2162_08b5(12, 28, 160, 86);
        f_2162_08b5(12, 128, 316, 170);
        f_2162_08b5(168, 28, 316, 86);
        f_2162_08b5(12, 94, 316, 120);
        f_2162_0897(20);
        f_2162_08b5(8, 24, 156, 82);
        f_2162_0897(19);
        f_2162_08b5(8, 124, 312, 166);
        f_2162_0897(20);
        f_2162_08b5(164, 24, 312, 82);
        f_2162_0897(30);
        f_2162_08b5(8, 90, 312, 116);
        f_1a70_3554(1.375, 4.0, 0, 1, 144, "        General");
        f_1a70_3554(1.375, 5.0, 1, 12, 71, " Manager");
        sprintf(buf, " %.10s", f_1a70_4793(d_4512_1a30[team], -1));
        f_1a70_3554(10.5, 5.0, 1, 12, 71, buf);
        f_1a70_3554(1.375, 6.0, 1, 12, 71, " Board");
        sprintf(buf, " %d%%", d_4512_01ec[team]);
        f_1a70_3554(10.5, 6.0, 1, 12, 71, buf);
        f_1a70_3554(1.375, 7.0, 1, 12, 71, " Capacity");
        sprintf(buf, " %ld (%d)", d_4512_0052[team] * 1000L, d_4512_1524[team]);
        f_1a70_3554(10.5, 7.0, 1, 12, 71, buf);
        f_1a70_3554(1.375, 8.0, 1, 12, 71, " Cash");
        if (d_69da_ddb8 != 0 || f_1a70_2bc7(team))
            sprintf(buf, " %ld", f_2162_1367(d_4512_1e90[0][team] - f_a83a_1ea1(team), 0L));
        else
            strcpy(buf, " Unknown");
        f_1a70_3554(10.5, 8.0, 1, 12, 71, buf);
        f_1a70_3554(1.375, 9.0, 1, 12, 71, " Ints");
        d_69da_dd60 = 0;
        d_69da_dd62 = 0;
        for (i = 0; i < 3; i++)
            best[i] = -1;
        for (j = 0; j <= d_4512_023e[team] - 1; j++) {
            d_69da_d9ae = d_28da_10f0[team][j];
            if (d_4512_bdc8[d_69da_d9ae].f18) {
                if (d_4512_bdc8[d_69da_d9ae].f19)
                    d_69da_dd62++;
                else
                    d_69da_dd60++;
            }
            d_69da_dc36 = d_3668_0000[12][d_69da_d9ae];
            if (d_69da_dc36 > 0) {
                d_69da_dba6 = d_3668_0000[13][d_69da_d9ae];
                d_69da_dfa6 = f_2162_1634(d_69da_dfec, 0);
                d_69da_de61 = (float)d_69da_dfa6[2][d_69da_d9ae] / d_69da_dc36;
                d_69da_dc9e = d_3668_0000[2][d_69da_d9ae] - d_3668_0000[2][d_69da_d9ae] % 5;
                if (d_69da_dba6 > best[0] || best[0] == -1) {
                    best[0] = d_69da_dba6;
                    who[0] = d_69da_d9ae;
                }
                if (d_69da_de61 > best[1] || best[1] == -1) {
                    best[1] = d_69da_de61;
                    who[1] = d_69da_d9ae;
                }
                if (d_69da_dc9e > best[2] || best[2] == -1) {
                    best[2] = d_69da_dc9e;
                    who[2] = d_69da_d9ae;
                }
            }
        }
        sprintf(buf, " %d", d_69da_dd60);
        f_1a70_3554(10.5, 9.0, 1, 12, 71, buf);
        f_1a70_3554(1.375, 10.0, 1, 12, 71, " U-21s");
        sprintf(buf, " %d", d_69da_dd62);
        f_1a70_3554(10.5, 10.0, 1, 12, 71, buf);
        f_1a70_3554(20.875, 4.0, 0, 1, 144, "       CUP ROUNDS");
        f_1a70_3554(20.875, 5.0, 1, 12, 144, "       THE FA CUP");
        strcpy(d_536d_8139, "Draw Not Made");
        if (d_4512_8b54[team] > 0) {
            strcpy(d_536d_8189, f_9c01_6630(d_4512_8b54[team]));
            strcpy(d_536d_8139, d_536d_7405);
        }
        sprintf(buf, "%*s", (72 - strlen(d_536d_8139) * 3) / 6 + strlen(d_536d_8139), d_536d_8139);
        f_1a70_3554(20.875, 6.0, 6, 12, 144, buf);
        strcpy(d_536d_57cb, "THE Coca-Cola CUP");
        sprintf(buf, "%*s", (72 - strlen(d_536d_57cb) * 3) / 6 + strlen(d_536d_57cb), d_536d_57cb);
        f_1a70_3554(20.875, 7.0, 1, 12, 144, buf);
        strcpy(d_536d_8139, "Draw Not Made");
        if (d_4512_8be0[team] > 0) {
            strcpy(d_536d_8189, f_9c01_6728(d_4512_8be0[team]));
            strcpy(d_536d_8139, d_536d_7405);
        }
        sprintf(buf, "%*s", (72 - strlen(d_536d_8139) * 3) / 6 + strlen(d_536d_8139), d_536d_8139);
        f_1a70_3554(20.875, 8.0, 6, 12, 144, buf);
        d_69da_da66 = 0;
        if (d_4512_8c6c[team] > 0)
            d_69da_da66 = 8;
        else if (d_4512_8cf8[team] > 0)
            d_69da_da66 = 9;
        else if (d_4512_8d84[team] > 0)
            d_69da_da66 = 10;
        else if (d_4512_8e10[team] > 0)
            d_69da_da66 = 11;
        if (d_69da_da66 > 0) {
            strcpy(d_536d_8189, f_9c01_6806(d_4512_880c[d_69da_da66][team], d_69da_da66 - 5));
            sprintf(d_536d_57cb, "THE %s", d_536d_7455);
            sprintf(buf, "%*s", (72 - strlen(d_536d_57cb) * 3) / 6 + strlen(d_536d_57cb), d_536d_57cb);
            f_1a70_3554(20.875, 9.0, 1, 12, 144, buf);
            strcpy(d_536d_8139, "Draw Not Made");
            if (d_4512_880c[d_69da_da66][team] > 0)
                strcpy(d_536d_8139, d_536d_7405);
            sprintf(buf, "%*s", (72 - strlen(d_536d_8139) * 3) / 6 + strlen(d_536d_8139), d_536d_8139);
            f_1a70_3554(20.875, 10.0, 6, 12, 144, buf);
        } else {
            f_1a70_3554(20.875, 9.0, 1, 12, 144, "");
            f_1a70_3554(20.875, 10.0, 6, 12, 144, "");
        }
        f_1a70_3554(1.375, 12.25, 1, 2, 300, "                  League Record");
        d_69da_d9f6 = f_1a70_4513(team);
        f_1a70_3554(1.375, 13.25, 0, 1, 34, " DIV");
        sprintf(buf, " %s", f_1a70_4983(d_69da_d9f6 / 20 + 1, 3));
        f_1a70_3554(1.375, 14.25, 1, 4, 34, buf);
        f_1a70_3554(5.875, 13.25, 0, 1, 33, " POS");
        sprintf(buf, " %s", f_1a70_48f5(d_69da_d9f6 % 20 + 1));
        f_1a70_3554(5.875, 14.25, 1, 4, 33, buf);
        for (d_69da_d9d2 = 0; d_69da_d9d2 <= 6; d_69da_d9d2++) {
            d_69da_de4d = d_69da_d9d2 * 4.125 + 10.25;
            sprintf(buf, " %s", names[d_69da_d9d2]);
            f_1a70_3554(d_69da_de4d, 13.25, 0, 6, 31, buf);
            if (d_69da_d9d2 == 0)
                d_69da_da14 = d_69da_d9ba - 1;
            else if (d_69da_d9d2 == 1)
                d_69da_da14 = d_4512_03d8[team];
            else if (d_69da_d9d2 == 2)
                d_69da_da14 = d_69da_d9ba - 1 - d_4512_03d8[team] - d_4512_042a[team];
            else if (d_69da_d9d2 == 6)
                d_69da_da14 = f_a83a_0000(d_69da_d9f6);
            else
                d_69da_da14 = d_4512_0334[d_69da_d9d2][team];
            sprintf(buf, "%3d", d_69da_da14);
            f_1a70_3554(d_69da_de4d, 14.25, 1, 4, 31, buf);
        }
        f_1a70_3554(1.375, 16.5, 0, 1, 300, "                   This season");
        f_1a70_3554(1.375, 17.5, 0, 6, 149, " Average attendance");
        strcpy(d_536d_57cb, "");
        if (d_4512_138a[team] > 0)
            sprintf(d_536d_57cb, " %ld", d_4512_2250[team] / d_4512_138a[team]);
        f_1a70_3554(20.25, 17.5, 0, 6, 149, d_536d_57cb);
        f_1a70_3554(1.375, 18.5, 0, 6, 149, " Top Goalscorer");
        strcpy(d_536d_57cb, "");
        if (best[0] > 0) {
            strcpy(buf, f_1a70_46c1(who[0]));
            buf[18] = 0;
            sprintf(d_536d_57cb, " %s - %d", buf, (int)best[0]);
        }
        f_1a70_3554(20.25, 18.5, 0, 6, 149, d_536d_57cb);
        f_1a70_3554(1.375, 19.5, 0, 6, 149, " Best Average Rating");
        strcpy(d_536d_57cb, "");
        if (best[1] > 0) {
            sprintf(d_536d_55eb, "%4.2f", best[1]);
            strcpy(buf, f_1a70_46c1(who[1]));
            buf[16] = 0;
            sprintf(d_536d_57cb, " %s - %s", buf, d_536d_55eb);
        }
        f_1a70_3554(20.25, 19.5, 0, 6, 149, d_536d_57cb);
        f_1a70_3554(1.375, 20.5, 0, 6, 149, " Worst Discipline");
        strcpy(d_536d_57cb, "");
        if (best[2] > 0) {
            strcpy(buf, f_1a70_46c1(who[2]));
            buf[18] = 0;
            sprintf(d_536d_57cb, " %s - %d", buf, (int)best[2]);
        }
        f_1a70_3554(20.25, 20.5, 0, 6, 149, d_536d_57cb);
        f_1a70_5e46();
        f_1a70_4ede(2, 25.75, 1.125, 1, 2, 31, "PRNT");
        f_1a70_4ede(2, 30.25, 1.125, 1, 2, 31, "HIST");
        f_1a70_4ede(2, 34.75, 1.125, 1, 2, 31, "RECS");
        f_1a70_4ede(2, 1.25, 22.5, 1, 4, 301, "                 DONE");
        if (d_69da_ddb6 == 0)
            f_1a70_5641(1);
        do {
            d_69da_dd68 = d_69da_d992 = f_1a70_53de(d_69da_d9dc);
            if (d_69da_dd68 == 1) {
                f_a330_0000(team);
                f_1a70_525f(1, 0);
            }
        } while (d_69da_dd68 <= 0);
        if (d_69da_dd68 == 2)
            f_9c01_59a6(team);
        else if (d_69da_dd68 == 3)
            f_9c01_4a17(team);
    } while (d_69da_dd68 != 4);
}

void f_aac9_1732(char a)
{
    unsigned i, j;
    register unsigned char c;
    unsigned char k, n;
    unsigned char used[2][4];

    for (i = 0; i < 2; i++)
        for (j = 0; j < 4; j++)
            d_4512_a02c[i][j] = 0;
    memset(d_4512_a01c, -1, 16);
    memset(d_4512_a054, 0, 16);
    memset(d_4512_a04c, -1, 8);
    memset(used, 0, 8);
    d_69da_dd6a = 3 - a * 17;
    do {
        for (d_69da_d9ae = 0; d_69da_d9ae <= d_69da_d98e - 1; d_69da_d9ae++) {
            d_69da_dc36 = d_3668_0000[a ? 0 : 21][d_69da_d9ae];
            d_69da_d9de = d_28da_2a78[0][18 * 1860 + d_69da_d9ae] / 20;
            d_69da_d9fc = d_28da_2a78[17][d_69da_d9ae] < 22;
            if (used[d_69da_d9fc][d_69da_d9de] == 0 && d_69da_dc36 >= d_69da_dd6a) {
                if (a) {
                    d_69da_dfa6 = f_2162_1634(d_69da_dfec, 0);
                    d_69da_dd6c = (*d_69da_dfa6)[d_69da_d9ae];
                } else
                    d_69da_dd6c = d_3668_0000[0][22 * 1860 + d_69da_d9ae];
                d_69da_de61 = (float)d_69da_dd6c / d_69da_dc36;
                if (d_4512_a02c[d_69da_d9fc][d_69da_d9de] < d_69da_de61) {
                    d_4512_a01c[d_69da_d9fc][d_69da_d9de] = d_69da_d9ae;
                    d_4512_a02c[d_69da_d9fc][d_69da_d9de] = d_69da_de61;
                }
            }
        }
        n = 0;
        for (c = 0; c <= 1; c++)
            for (k = 0; k <= 3; ++k)
                if (d_4512_a01c[c][k] > -1) {
                    used[c][k] = 1;
                    n++;
                }
        d_69da_dd6a--;
    } while (n < 8 && d_69da_dd6a > 1);
    for (d_69da_d9f0 = 0; d_69da_d9f0 <= d_69da_da4a + 645; d_69da_d9f0++) {
        if (d_4512_2390[d_69da_d9f0] < 0xff) {
            if (a) {
                d_69da_df9e = f_2162_1634(d_69da_dfe8, 0);
                d_69da_def9 = d_69da_df9e[d_69da_d9f0];
            } else {
                d_69da_dfaa = f_2162_1634(d_69da_dfee, 0);
                d_69da_def9 = ((int far *)(d_69da_dfaa + 2600))[d_69da_d9f0];
            }
            d_69da_d9de = d_4512_2390[d_69da_d9f0] / 20;
            if (d_4512_a054[d_69da_d9de] < d_69da_def9) {
                d_4512_a04c[d_69da_d9de] = d_69da_d9f0;
                d_4512_a054[d_69da_d9de] = d_69da_def9;
            }
        }
    }
}

char far *f_aac9_1a9e(int a, int b)
{
    char far *buf;

    buf = f_2162_0f38();
    if (a == 0)
        strcpy(buf, "----");
    else if (a > 0)
        sprintf(buf, "%4.2f", (float)b / a);
    else if (a < 0)
        sprintf(buf, "%3.1f", (float)b / abs(a));
    return buf;
}

int f_aac9_1b3a(void)
{
    int m;

    m = 4;
    if (d_69da_ddb8 == 0) {
        for (d_69da_d9d2 = 646; d_69da_d9d2 <= d_69da_da4a + 645; d_69da_d9d2++) {
            if (d_4512_2390[d_69da_d9d2] < 0xff) {
                d_69da_d9de = d_4512_2390[d_69da_d9d2] / 20;
                if (d_69da_d9de < m)
                    m = d_69da_d9de;
            }
        }
    }
    if (m == 4)
        m = 0;
    return m;
}

void f_aac9_1b9b(void)
{
    f_aac9_1ca7();
    f_2162_0983();
    f_2162_0470();
    strcpy(d_536d_8229, "");
    strcpy(d_536d_591f, "picture8.lbm");
    f_2162_05a0(-1);
    f_aac9_1ccf();
    d_5dbf_0996[1][318] = 0x60;
    d_5dbf_0996[2][318] = 0x01;
    d_5dbf_0996[1][319] = 0x13;
    d_5dbf_0996[2][319] = 0x12;
    d_5dbf_0996[1][320] = 0x54;
    d_5dbf_0996[2][320] = 0x46;
    d_5dbf_0996[1][321] = 0x03;
    d_5dbf_0996[2][321] = 0x31;
    d_5dbf_0996[1][322] = 0x14;
    d_5dbf_0996[2][322] = 0x12;
    d_5dbf_0996[1][323] = 0x14;
    d_5dbf_0996[2][323] = 0x46;
    d_5dbf_0996[1][324] = 0x31;
    d_5dbf_0996[2][324] = 0x06;
    d_5dbf_0996[1][325] = 0x1c;
    d_5dbf_0996[2][325] = 0x12;
    d_5dbf_0996[1][326] = 0x41;
    d_5dbf_0996[2][326] = 0x12;
    d_5dbf_0996[1][327] = 0x01;
    d_5dbf_0996[2][327] = 0x12;
    d_5dbf_0996[1][328] = 0x42;
    d_5dbf_0996[2][328] = 0x21;
    d_5dbf_0996[1][329] = 0x12;
    d_5dbf_0996[2][329] = 0x41;
}

void f_aac9_1ca7(void)
{
    f_2162_01cd();
    f_2162_0897(0);
    f_2162_08b5(0, 0, 0x13f, 0xc7);
}

/* colours 16-31 of the palette, as RGB triples */
static unsigned char d_69da_5e8e[] = {
    0, 0, 0, 15, 15, 15, 14, 2, 0, 0, 10, 4, 0, 4, 10, 0, 14, 14, 14, 14, 6, 12, 0, 14,
    10, 10, 10, 14, 8, 0, 2, 2, 8, 6, 0, 6, 2, 8, 12, 0, 10, 10, 7, 7, 7, 0, 8, 2
};

void f_aac9_1ccf(void)
{
    int r, g, b;
    unsigned char far *p;

    p = d_69da_5e8e;
    for (d_69da_db54 = 16; d_69da_db54 <= 31; d_69da_db54++) {
        r = *p++;
        g = *p++;
        b = *p++;
        f_2162_03a0(d_69da_db54, r, g, b);
    }
}

void f_aac9_1d33(int p)
{
    char buf[320];
    int m;

    sprintf(buf, "%d years", d_28da_2a78[17][p]);
    strcpy(d_536d_75e5, f_1a70_448e(12, buf));
    if (f_1a70_6d23(p) == 0) {
        if (d_3668_0000[7][p] < 255)
            strcpy(buf, d_69da_b1fc[d_3668_0000[7][p]]);
        else
            strcpy(buf, d_69da_b1fc[d_28da_ad40[p]]);
    } else
        sprintf(buf, "<%s>", d_5dbf_0000[d_28da_2a78[18][p] - 140]);
    strcpy(d_536d_56db, f_1a70_448e(12, buf));
    d_69da_dfba = f_2162_1634(d_69da_dff6, 0);
    strcpy(buf, d_5dbf_0000[d_69da_dfba[9][p]]);
    if (d_4512_bdc8[p].f18) {
        if (d_4512_bdc8[p].f19 == 0)
            strcat(buf, " I");
        else
            strcat(buf, " U");
    }
    strcpy(d_536d_7725, f_1a70_448e(12, buf));
    if (f_1a70_6d23(p) == 0) {
        if (d_3668_cb70[p] > 0)
            sprintf(buf, "EXP %d/%d", d_69da_dd4c % 100, (d_69da_dd4c = d_3668_cb70[p]) / 100);
        else
            strcpy(buf, "Free agent");
    } else
        strcpy(buf, "Unknown");
    strcpy(d_536d_7775, f_1a70_448e(12, buf));
    if (f_1a70_6d23(p) == 0) {
        d_69da_dfa6 = f_2162_1634(d_69da_dfec, 0);
        sprintf(buf, "%d p/w", d_69da_dfa6[4][p]);
    } else
        strcpy(buf, "Unknown");
    strcpy(d_536d_77c5, f_1a70_448e(12, buf));
    if (d_3668_0000[7][p] < 255)
        sprintf(buf, "On Loan (%d)", d_3668_0000[8][p]);
    else {
        if (d_4512_bdc8[p].f8)
            strcpy(buf, d_4512_bdc8[p].f10 ? "R/" : "L/");
        else
            strcpy(buf, "");
        if (d_4512_bdc8[p].f24)
            strcat(buf, "For Loan");
        else {
            d_69da_def5 = f_1a70_01d9(p, d_28da_2a78[0][18 * 1860 + p]);
            if (d_4512_bdc8[p].f8 == 0 && f_1a70_2bc7(d_28da_2a78[0][18 * 1860 + p]) == 0)
                d_69da_def5 = f_1a70_0d58(d_69da_def5);
            strcat(buf, f_1a70_0dfe(d_69da_def5));
        }
    }
    strcpy(d_536d_7815, f_1a70_448e(12, buf));
    if (d_4512_bdc8[p].f20)
        sprintf(buf, "%ld p/w", f_9661_13f2(p));
    else
        strcpy(buf, "NONE");
    strcpy(d_536d_7865, f_1a70_448e(12, buf));

    strcpy(d_536d_6efb, "");
    if (d_4512_bdc8[p].f0)
        strcat(d_536d_6efb, " GK");
    if (d_4512_bdc8[p].f1)
        strcat(d_536d_6efb, " DEF");
    if (d_4512_bdc8[p].f2)
        strcat(d_536d_6efb, " MID");
    if (d_4512_bdc8[p].f3)
        strcat(d_536d_6efb, " ATT");
    strcpy(buf, &d_536d_6efb[1]);
    strcpy(d_536d_6efb, f_1a70_448e(12, buf));
    if (d_4512_bdc8[p].f0 == 0) {
        strcpy(d_536d_76d5, "");
        if (d_4512_bdc8[p].f4)
            strcat(d_536d_76d5, " R");
        if (d_4512_bdc8[p].f5)
            strcat(d_536d_76d5, " L");
        if (d_4512_bdc8[p].f6)
            strcat(d_536d_76d5, " C");
    } else if (f_1a70_6d23(p) == 0)
        sprintf(d_536d_76d5, " %d", d_28da_2a78[1][p]);
    else
        strcpy(d_536d_76d5, " Unknown");
    strcpy(d_536d_76d5, &d_536d_76d5[1]);
    strcpy(d_536d_76d5, f_1a70_448e(12, d_536d_76d5));

    sprintf(buf, "%d", d_3668_0000[12][p]);
    strcpy(d_536d_7c25, f_1a70_448e(8, buf));
    sprintf(buf, "%d", d_3668_0000[13][p]);
    strcpy(d_536d_6c03, f_1a70_448e(8, buf));
    sprintf(buf, "%d", d_3668_0000[2][p] / 5 * 5);
    strcpy(d_536d_65c1, f_1a70_448e(8, buf));
    if (d_3668_0000[12][p] > 0) {
        d_69da_dfa6 = f_2162_1634(d_69da_dfec, 0);
        sprintf(buf, "%4.2f", (float)d_69da_dfa6[2][p] / d_3668_0000[12][p]);
    } else
        strcpy(buf, "----");
    strcpy(d_536d_55eb, f_1a70_448e(8, buf));
    if (d_3668_0000[0][p] > 0) {
        sprintf(buf, "%d", d_3668_0000[3][p]);
        strcpy(d_536d_7c75, f_1a70_448e(8, buf));
        sprintf(buf, "%d", d_3668_0000[4][p]);
        strcpy(d_536d_7cc5, f_1a70_448e(8, buf));
    } else {
        strcpy(d_536d_7c75, " -      ");
        strcpy(d_536d_7cc5, d_536d_7c75);
    }
    d_69da_dfba = f_2162_1634(d_69da_dff6, 0);
    sprintf(buf, "%d", d_69da_dfba[3][p]);
    strcpy(d_536d_7d15, f_1a70_448e(8, buf));
    d_69da_dfba = f_2162_1634(d_69da_dff6, 0);
    sprintf(buf, "%d", d_69da_dfba[2][p]);
    strcpy(d_536d_7d65, f_1a70_448e(8, buf));
    sprintf(buf, "%d", d_3668_0000[5][p]);
    strcpy(d_536d_7db5, f_1a70_448e(7, buf));
    sprintf(buf, "%d", d_3668_0000[6][p]);
    strcpy(d_536d_7e19, f_1a70_448e(7, buf));
    d_69da_dfba = f_2162_1634(d_69da_dff6, 0);
    sprintf(buf, "%d", d_69da_dfba[6][p]);
    strcpy(d_536d_7e69, f_1a70_448e(7, buf));
    d_69da_dfa6 = f_2162_1634(d_69da_dfec, 0);
    if (d_3668_0000[5][p] > 0)
        sprintf(buf, "%4.2f", (float)d_69da_dfa6[1][p] / d_3668_0000[5][p]);
    else
        strcpy(buf, "----");
    strcpy(d_536d_7eb9, f_1a70_448e(7, buf));
    if (d_3668_0000[5][p] > 0) {
        d_69da_dfba = f_2162_1634(d_69da_dff6, 0);
        sprintf(buf, "%d", d_69da_dfba[7][p]);
        strcpy(d_536d_7f09, f_1a70_448e(7, buf));
        d_69da_dfba = f_2162_1634(d_69da_dff6, 0);
        sprintf(buf, "%d", d_69da_dfba[8][p]);
        strcpy(d_536d_7ff9, f_1a70_448e(7, buf));
    } else {
        strcpy(d_536d_7f09, " -     ");
        strcpy(d_536d_7ff9, d_536d_7f09);
    }

    strcpy(d_536d_7b85, "                  AVAILABILITY");
    if (d_28da_2a78[20][p] > 0 && d_28da_2a78[19][p] != 51) {
        if (d_28da_2a78[19][p] < 26) {
            if (d_28da_2a78[20][p] < 3)
                strcpy(d_536d_8099, "soon");
            else
                sprintf(d_536d_8099, "in about %d weeks", d_28da_2a78[20][p]);
            sprintf(d_536d_7bd5, "Has %s - back %s", d_5dbf_0359[d_28da_2a78[19][p]], d_536d_8099);
        } else if (d_28da_2a78[19][p] == 26) {
            if (d_28da_2a78[20][p] == 1)
                strcpy(d_536d_8099, "match");
            else
                sprintf(d_536d_8099, "%d matches", d_28da_2a78[20][p]);
            sprintf(d_536d_7bd5, "Suspended for next %s", d_536d_8099);
        } else if (d_28da_2a78[19][p] == 50)
            strcpy(d_536d_7bd5, "Cup-tied for this match");
    } else {
        sprintf(d_536d_7bd5, "%d%% match fit", d_28da_2a78[21][p]);
        if (d_4512_bdc8[p].f7) {
            unsigned char n;

            n = f_1a70_1dc1(p) + 1;
            sprintf(buf, " - Shirt No.%s", f_1a70_2e4a(n, 0));
            strcat(d_536d_7bd5, buf);
        }
    }
    strcpy(d_536d_78b5, d_5dbf_0626[d_3668_0000[17][p]]);
    if (d_4512_bdc8[p].f0 == 0) {
        sprintf(d_536d_7905, "%d", d_28da_2a78[1][p]);
        sprintf(d_536d_7955, "%d", d_28da_2a78[2][p]);
        sprintf(d_536d_79a5, "%d", d_28da_2a78[3][p]);
        sprintf(d_536d_79f5, "%d", d_28da_2a78[4][p]);
        sprintf(d_536d_7a45, "%d", d_28da_2a78[5][p]);
        sprintf(d_536d_7a95, "%d", d_28da_2a78[6][p]);
        sprintf(d_536d_7ae5, "%d", d_28da_2a78[22][p]);
    } else {
        strcpy(d_536d_7905, "");
        strcpy(d_536d_7955, "");
        strcpy(d_536d_79a5, "");
        strcpy(d_536d_79f5, "");
        strcpy(d_536d_7a45, "");
        strcpy(d_536d_7a95, "");
        strcpy(d_536d_7ae5, "");
    }
    sprintf(d_536d_7b35, "%d", d_28da_2a78[12][p]);
    m = d_28da_2a78[15][p] - d_28da_2a78[0][p];
    if (m <= -24)
        strcpy(d_536d_7f59, "Very low");
    else if (m <= -16)
        strcpy(d_536d_7f59, "Low");
    else if (m <= 8)
        strcpy(d_536d_7f59, "Ok");
    else if (m <= 24)
        strcpy(d_536d_7f59, "Good");
    else
        strcpy(d_536d_7f59, "Superb");

    d_69da_ddfa = f_1a70_68f0(p, 0);
    if (d_69da_ddfa && (d_69da_db76 == 1 || d_69da_db76 == 2) && d_3668_0000[14][p] == 0)
        d_69da_ddfa = 0;
    if (d_4512_bdc8[p].f8 && d_4512_bdc8[p].f10) {
        if (d_69da_ddfa == 0)
            strcpy(d_536d_69d1, "But having second thoughts");
        sprintf(d_536d_80e9, "Requested move - %s", d_536d_69d1);
    } else if (d_69da_ddfa) {
        if (d_3668_0000[14][p] > 0)
            sprintf(d_536d_80e9, "%s to leave - %s", d_4512_bdc8[p].f8 ? "Wants" : "May ask", d_536d_69d1);
        else
            sprintf(d_536d_80e9, "Unhappy - %s", d_536d_69d1);
    } else if (f_b8da_4a37(p))
        strcpy(d_536d_80e9, "Expected to move abroad at end of season");
    else
        sprintf(d_536d_80e9, "%s happy to stay at the club", d_4512_bdc8[p].f8 ? "He would be" : "He is");

    strcpy(d_536d_7fa9, "");
    if (*(d_3668_0000[23] + p) > 0 && !d_4512_bdc8[p].f9 && !d_4512_bdc8[p].f30) {
        d_69da_dd4e = 0;
        for (d_69da_dd50 = 0; d_69da_dd50 <= 79; d_69da_dd50++) {
            if (f_1a70_2bc7(d_69da_dd50) == 0 && f_9007_1a61(d_69da_dd50, p) > 0) {
                d_69da_dd4e++;
                if (d_69da_dd4e > 1) {
                    if (d_3668_0000[23][p] == d_69da_dd4e)
                        strcat(d_536d_7fa9, " and ");
                    else if (d_3668_0000[23][p] > d_69da_dd4e)
                        strcat(d_536d_7fa9, ", ");
                }
                strcat(d_536d_7fa9, d_69da_b1fc[d_69da_dd50]);
            }
        }
    }
}

void f_aac9_2ece(void)
{
    f_1a70_3554(1.375, 24.375, 6, 4, 0x12a, "");
    if (d_69da_de2f == 0) {
        f_1a70_3554(1.375, 23.5, 0, 1, 0x12a, "                     FUTURE");
        f_1a70_3554(-1.0, 24.375, 6, 4, 0, d_536d_80e9);
    } else {
        f_1a70_3554(1.375, 23.5, 0, 6, 0x12a, "                   TARGETED BY");
        f_1a70_3554(-1.0, 24.375, 1, 4, 0, d_536d_7fa9);
    }
    d_69da_de2f = !d_69da_de2f;
}

void f_aac9_2f6d(void)
{
    f_1a70_3554(37.375, 23.5, 2, d_69da_de2f ? 1 : 6, 0, d_69da_de30 ? ">" : " ");
    d_69da_de30 = !d_69da_de30;
}

void f_aac9_2fbe(void)
{
    for (d_69da_d9d6 = 0; d_69da_d9d6 <= 139; d_69da_d9d6++)
        d_4512_a374[d_69da_d9d6] = (d_69da_d9d6 >= 80 ? 400 : 0) + d_69da_d9d6;
    for (d_69da_d9d2 = 0; d_69da_d9d2 <= 138; d_69da_d9d2++)
        for (d_69da_d9a0 = d_69da_d9d2 + 1; d_69da_d9a0 <= 139; d_69da_d9a0++)
            if (strcmp(f_1a70_3404(d_4512_a374[d_69da_d9d2]), f_1a70_3404(d_4512_a374[d_69da_d9a0])) > 0)
                f_2162_13fc(&d_4512_a374[d_69da_d9d2], &d_4512_a374[d_69da_d9a0], 2);
    d_69da_de2a = -1;
    for (d_69da_da4e = 0x286; d_69da_da4e < 0x28a; d_69da_da4e++)
        d_4512_2390[d_69da_da4e] = 255;
    f_1a70_2eaa(0, "New game", "Demo Game|One Player|Two Players|Three Players|Four Players|");
    d_69da_da4a = d_69da_da4c = d_69da_d992;
    d_69da_ddb8 = d_69da_da4c == 0 ? -1 : 0;
    if (d_69da_da4c > 0) {
        for (d_69da_d9ae = 1; d_69da_d9ae <= d_69da_da4a; d_69da_d9ae++) {
            d_69da_d9d8 = f_aac9_33fe(d_69da_da4e = d_69da_d9ae + 0x285);
            if (d_69da_d9d8 >= 400) {
                d_69da_dd2a = -1;
                for (d_69da_d9d6 = 60; d_69da_d9d6 <= 79; d_69da_d9d6++) {
                    if (f_1a70_2bc7(d_69da_d9d6) == 0) {
                        if ((d_69da_dbb4 = f_1a70_2bff(d_69da_d9d6) + f_2162_0da1(2) - f_2162_0da1(2)) < d_69da_dd2c
                            || d_69da_dd2a == -1) {
                            d_69da_dd2c = d_69da_dbb4;
                            d_69da_dd2a = d_69da_d9d6;
                        }
                    }
                }
                d_69da_b2a0[d_69da_dd2a] = d_69da_b2a4[d_69da_d9d8];
                f_2162_13fc((void *)&d_69da_b1fc[d_69da_dd2a], (void *)&d_69da_b2a4[d_69da_d9d8], 2);
                d_4512_0000[0][d_69da_dd2a] = 10;
                d_4512_0000[1][d_69da_dd2a] = f_2162_0da1(10) + 10;
                f_2162_13fc(&d_4512_0000[2][d_69da_dd2a], &d_5dbf_0b12[d_69da_d9d8], 1);
                f_2162_13fc(&d_4512_0000[3][d_69da_dd2a], &d_5dbf_0cde[d_69da_d9d8], 1);
                d_4512_0000[4][d_69da_dd2a] = 13;
                d_5dbf_0996[0][d_69da_d9d8 - 80] = 10;
                f_2162_13fc(&d_5dbf_4fd2[0][d_69da_dd2a], d_5dbf_4fd2[0] - 400 + d_69da_d9d8, 1);
                f_2162_13fc(&d_5dbf_4fd2[1][d_69da_dd2a], d_5dbf_4fd2[1] - 400 + d_69da_d9d8, 1);
                d_69da_d9d8 = d_69da_dd2a;
            }
            d_69da_da4e = d_69da_d9ae + 0x285;
            d_4512_1a30[d_69da_d9d8] = d_69da_da4e;
            d_4512_2390[d_69da_da4e] = d_69da_d9d8;
            d_4512_261a[d_69da_da4e] = 35;
            d_4512_28a4[d_69da_da4e] = 25;
            d_4512_4492[d_69da_da4e] = 0;
            d_4512_3042[d_69da_da4e] = 80;
            d_4512_2b2e[d_69da_da4e] = f_aac9_3615(d_69da_da4e);
            f_a330_4876(d_69da_d9ae - 1);
        }
        if (d_69da_de3d == 0) {
            f_1a70_2eaa(0, "Starting Division", "FA Premier|Division One|Division Two|Division Three|");
            d_69da_dd28 = d_69da_d992 + 1;
            for (d_69da_d9f0 = 0x286; d_69da_d9f0 <= d_69da_da4a + 0x285; d_69da_d9f0++) {
                d_69da_d9d8 = d_4512_2390[d_69da_d9f0];
                if (d_69da_d9d8 < 255) {
                    if ((d_69da_d9de = d_69da_d9d8 / 20 + 1) < d_69da_dd28) {
                        for (d_69da_da6e = d_69da_d9de; d_69da_da6e <= d_69da_dd28 - 1; d_69da_da6e++) {
                            f_a83a_004b(d_69da_d9d8, d_69da_da6e + 1);
                            d_69da_d9d8 = d_69da_dd2a;
                        }
                    } else if (d_69da_d9de > d_69da_dd28) {
                        for (d_69da_da6e = d_69da_d9de; d_69da_da6e >= d_69da_dd28 + 1; d_69da_da6e--) {
                            f_a83a_004b(d_69da_d9d8, d_69da_da6e - 1);
                            d_69da_d9d8 = d_69da_dd2a;
                        }
                    }
                }
            }
        }
    }
    d_69da_de2a = 0;
}

int f_aac9_33fe(int p)
{
    char buf[320];
    int list[48];

    d_69da_d9d8 = -1;
    d_69da_d9ec = 1;
    do {
        f_1a70_4a41("Team Choice");
        sprintf(buf, " Player %s choose team ", f_1a70_488b(p - 645));
        f_1a70_3554(1.125, 4.0, 1, 2, 0x130, buf);
        f_1a70_4ede(2, 1.25, 22.5, 1, 4, 0x12d, "                 MORE");
        for (d_69da_d9d6 = 0; d_69da_d9d6 <= (d_69da_d9ec == 3 ? 43 : 47); d_69da_d9d6++) {
            list[d_69da_d9d6] = d_4512_a374[(d_69da_d9ec - 1) * 48 + d_69da_d9d6];
            d_69da_de4d = d_69da_d9d6 / 16 * 12.75 + 1.125;
            d_69da_de45 = d_69da_d9d6 + 6 - d_69da_d9d6 / 16 * 16;
            sprintf(buf, " %.15s", f_1a70_3404(list[d_69da_d9d6]));
            f_1a70_4ede(0, d_69da_de4d, d_69da_de45, f_1a70_2bc7(list[d_69da_d9d6]) ? 6 : 1,
                        d_69da_d9d6 & 1 ? 15 : 3, 100, buf);
            if (f_1a70_2bc7(list[d_69da_d9d6]) || (list[d_69da_d9d6] >= 80 && d_69da_de3d))
                f_1a70_5641(d_69da_d9d6 + 2);
        }
        do {
            d_69da_d992 = f_1a70_53de(d_69da_d9dc);
        } while (d_69da_d992 == 0);
        if (d_69da_d992 == 1) {
            d_69da_d9ec++;
            if (d_69da_d9ec == 4)
                d_69da_d9ec = 1;
        } else
            d_69da_d9d8 = list[d_69da_d992 - 2];
    } while (d_69da_d9d8 == -1);
    return d_69da_d9d8;
}

int f_aac9_3615(int p)
{
    char buf[320];

    sprintf(buf, "Player %s", f_1a70_488b(p - 645));
    f_1a70_4a41(buf);
    f_1a70_3d0c(1.0, 4.0, 1, 2, 0, " Select Personality ");
    strcpy(buf, "");
    for (d_69da_dd2e = 0; d_69da_dd2e <= 9; d_69da_dd2e++) {
        strcat(buf, d_5dbf_0626[d_69da_dd2e]);
        strcat(buf, "|");
    }
    f_1a70_2eaa(7, "", buf);
    f_1a70_3226(9);
    return d_69da_d992;
}

void f_aac9_36e7(void)
{
    int salary;
    char title[320];
    char text[320];

    for (d_69da_d9d2 = 0; d_69da_d9d2 <= 79; d_69da_d9d2++) {
        for (d_69da_d9a0 = 0; d_69da_d9a0 <= 21; d_69da_d9a0++) {
            switch (d_69da_d9a0) {
            case 8: case 9: case 12: case 13: case 14: case 15: case 16: case 17: case 18:
            case 19: case 20:
                d_4512_0000[d_69da_d9a0][d_69da_d9d2] = 0;
                break;
            case 0: case 1: case 2: case 4:
                d_4512_1710[d_69da_d9a0][d_69da_d9d2] = 0;
                break;
            }
        }
        d_4512_0386[d_69da_d9d2] = 2;
        d_4512_1fd0[d_69da_d9d2] = 0;
        d_4512_2110[d_69da_d9d2] = 0;
        d_4512_2250[d_69da_d9d2] = 0;
        d_4512_138a[d_69da_d9d2] = 0;
        d_4512_1576[d_69da_d9d2] = 0;
        d_4512_16be[d_69da_d9d2] = 0;
        d_69da_df85 = (f_1a70_2bff(d_69da_d9d2) + f_2162_0da1(2) - f_2162_0da1(2))
            * (4 - d_69da_d9d2 / 20) * 500.0f;
        d_69da_dfae = f_2162_1634(d_69da_dff0, 1);
        d_69da_dfae[1][d_69da_d9d2] = d_69da_df85 / 2500 * 2500;
        d_69da_dfc6 = f_2162_1634(d_69da_dffc, 1);
        strcpy(d_69da_dfc6[d_69da_d9d2], "");
        for (d_69da_d9a0 = 0; d_69da_d9a0 <= 1; d_69da_d9a0++)
            strcpy(d_536d_83b9[d_69da_d9a0][d_69da_d9d2], "");
        d_536d_0000[d_69da_d9d2].n_in = 0;
        d_536d_0000[d_69da_d9d2].n_out = 0;
        for (d_69da_d9a0 = 1; d_69da_d9a0 <= 6; d_69da_d9a0++)
            d_536d_4c3d[d_69da_d9a0][d_69da_d9d2] = 0;
        salary = f_b8da_0000(d_4512_1a30[d_69da_d9d2], d_69da_d9d2);
        d_69da_dfa2 = f_2162_1634(d_69da_dfea, 0);
        if (d_69da_dfa2[d_4512_1a30[d_69da_d9d2]] < salary) {
            d_69da_dfa2 = f_2162_1634(d_69da_dfea, 1);
            d_69da_dfa2[d_4512_1a30[d_69da_d9d2]] = salary;
            if (f_1a70_2bc7(d_69da_d9d2) && d_69da_d99a > 1) {
                sprintf(title, "%s board message", (char far *)d_69da_b1fc[d_69da_d9d2]);
                sprintf(text, "We have increased your salary to %ld per year.", salary * 1000L);
                f_1a70_598c(d_69da_d9d2, title, text);
                f_b8da_609f();
            }
        }
    }
    d_69da_df9e = f_2162_1634(d_69da_dfe8, 1);
    _fmemset(d_69da_df9e, 0, 2600);
    for (d_69da_d9d2 = 0; d_69da_d9d2 <= d_69da_d98e - 1; d_69da_d9d2++) {
        if (f_1a70_2bc7(d_69da_d9d8 = d_28da_2a78[18][d_69da_d9d2]) == 0 && (d_69da_de3d == 0 || d_69da_d99a != 1))
            d_4512_bdc8[d_69da_d9d2].f9 = 0;
        d_4512_bdc8[d_69da_d9d2].f11 = 0;
        d_4512_bdc8[d_69da_d9d2].f12 = 0;
        d_4512_bdc8[d_69da_d9d2].f13 = 0;
        d_4512_bdc8[d_69da_d9d2].f15 = 0;
        d_4512_bdc8[d_69da_d9d2].f16 = 0;
        d_4512_bdc8[d_69da_d9d2].f17 = 0;
        d_4512_bdc8[d_69da_d9d2].f18 = 0;
        d_4512_bdc8[d_69da_d9d2].f19 = 0;
        d_4512_bdc8[d_69da_d9d2].f23 = 0;
        if (d_4512_bdc8[d_69da_d9d2].f0)
            d_28da_2a78[1][d_69da_d9d2] = 0;
        for (d_69da_d9a0 = 0; d_69da_d9a0 <= 51; d_69da_d9a0++) {
            switch (d_69da_d9a0) {
            case 24: case 25: case 26: case 27: case 28: case 33: case 36: case 37: case 43: case 47:
                d_3668_0000[d_69da_d9a0 - 24][d_69da_d9d2] = 0;
                break;
            case 0: case 2:
                d_69da_dfa6 = f_2162_1634(d_69da_dfec, 1);
                d_69da_dfa6[d_69da_d9a0][d_69da_d9d2] = 0;
                break;
            }
        }
        d_28da_2a78[21][d_69da_d9d2] = 70;
        if (d_28da_2a78[19][d_69da_d9d2] == 26) {
            if (d_28da_2a78[20][d_69da_d9d2] > 0) {
                d_28da_2a78[19][d_69da_d9d2] = d_28da_2a78[20][d_69da_d9d2] + 26;
                d_28da_2a78[20][d_69da_d9d2] = 0;
            }
        }
        d_69da_dfba = f_2162_1634(d_69da_dff6, 1);
        d_69da_dfba[3][d_69da_d9d2] = 0;
    }
    for (d_69da_d9d2 = 0; d_69da_d9d2 <= 139; d_69da_d9d2++)
        for (d_69da_d9a0 = 6; d_69da_d9a0 <= 11; d_69da_d9a0++)
            d_4512_880c[d_69da_d9a0][d_69da_d9d2] = 0;
    _fmemset(d_4512_8f28, -1, 2800);
    for (d_69da_d9d6 = 0; d_69da_d9d6 <= 79; d_69da_d9d6++)
        if (f_1a70_2bc7(d_69da_d9d6) == 0 || d_69da_d99a == 1)
            d_4512_637c[d_69da_d9d6][0] = 0;
    _fmemset(d_4512_9e64, -1, 440);
    d_69da_d996 = 1;
    d_69da_d9ba = 1;
    d_69da_dab8 = 1;
    d_69da_d9b2 = 0;
    d_69da_d9b0 = 0;
    d_69da_da0a = 0;
    d_69da_d9b4 = 0;
    d_69da_d9b6 = 0;
    d_69da_d9b8 = 0;
    for (d_69da_da24 = 0; d_69da_da24 <= 97; d_69da_da24++) {
        d_28da_2270[d_69da_da24] = 0;
        d_28da_2334[d_69da_da24] = 0;
    }
    _fmemset(d_28da_0000, 0, 16);
    for (d_69da_dc52 = 1; d_69da_dc52 <= 98; d_69da_dc52++)
        if (f_1a70_237e(d_69da_dc52) == 0)
            f_a83a_036f(1, 40, d_69da_dc52);
    d_5dbf_1292[0][0][9] = d_4512_6376[0] * 32;
    d_5dbf_1292[0][1][9] = d_4512_6376[1] * 32;
    d_69da_df91 = f_2162_0da1(200) + 1;
    d_69da_de3f = 0;
    d_536d_1c70[0][0x23] = 0;
    d_536d_1c70[1][0x23] = 0;
    d_536d_1c70[2][0x23] = 0;
    d_536d_1c70[3][0x23] = 0;
    d_536d_1c70[0][0x24] = 0;
    d_536d_1c70[1][0x24] = 0;
    d_536d_1c70[2][0x24] = 0;
    d_536d_1c70[3][0x24] = 0;
}

void f_aac9_3eb2(void)
{
    f_b8da_61ff(7);
    for (d_69da_d9ae = 0; d_69da_d9ae <= d_69da_d98e - 1; d_69da_d9ae++) {
        f_b8da_6369(7, d_69da_d9ae, d_69da_d98e - 1);
        if (d_4512_bdc8[d_69da_d9ae].f13)
            d_28da_2a78[15][d_69da_d9ae] = f_2162_13ba(d_28da_2a78[0][d_69da_d9ae] + f_2162_0da1(10),
                d_28da_2a78[9][d_69da_d9ae] + 25);
        else if (d_69da_de3d && d_69da_d99a == 1 && d_4512_bdc8[d_69da_d9ae].f28)
            d_28da_2a78[15][d_69da_d9ae] = d_28da_2a78[0][d_69da_d9ae] + f_2162_0da1(15) + 10;
        else
            d_28da_2a78[15][d_69da_d9ae] = d_28da_2a78[0][d_69da_d9ae] + f_2162_0da1(10);
    }
    f_b8da_61ff(8);
    for (d_69da_d9d8 = 0; d_69da_d9d8 <= 79; d_69da_d9d8++) {
        f_b8da_6369(8, d_69da_d9d8, 84);
        f_a83a_0630(d_69da_d9d8);
    }
}

void f_aac9_3fde(void)
{
    int cnt[3];
    int skip;
    unsigned char nation[5] = {0, 25, 9, 10, 32};
    unsigned char tries;
    char used[1860];

    memset(used, 0, 1860);
    memset(cnt, 0, 6);
    d_69da_d9ae = 0;
    do {
        if (strstr(f_1a70_4592(d_69da_d9ae), "Gary Lineker")) {
            skip = d_69da_d9ae;
            d_69da_d9ae = d_69da_d990 + 1679;
        }
        if (d_69da_d98e - 1 == d_69da_d9ae)
            d_69da_d9ae = 1680;
        else
            d_69da_d9ae++;
    } while (d_69da_d990 + 1679 >= d_69da_d9ae);
    for (d_69da_dbb0 = 0; d_69da_dbb0 <= 4; d_69da_dbb0++) {
        f_b8da_6369(8, d_69da_dbb0 + 80, 84);
        d_69da_de2d = 0;
        for (d_69da_da86 = 1; d_69da_da86 <= 100; d_69da_da86++) {
            tries = 1;
            d_69da_dd22 = -1;
            do {
                d_69da_d9ae = 0;
                do {
                    if (d_69da_d9ae != skip) {
                        d_69da_dfba = f_2162_1634(d_69da_dff6, 0);
                        if (d_69da_dfba[9][d_69da_d9ae] == nation[d_69da_dbb0] && used[d_69da_d9ae] == 0
                            && (d_69da_da86 <= 50 && d_28da_2a78[17][d_69da_d9ae] < 22
                                || d_69da_da86 > 50 || tries == 2)
                            && d_4512_bdc8[d_69da_d9ae].f0 == ((d_69da_da86 - 1) % 50 > 4 ? 0 : 1)
                            && (d_69da_dd22 == -1 || d_28da_2a78[0][d_69da_d9ae] > d_69da_dd24)) {
                            d_69da_dd22 = d_69da_d9ae;
                            d_69da_dd24 = d_28da_2a78[0][d_69da_d9ae];
                        }
                    }
                    if (d_69da_d98e - 1 == d_69da_d9ae)
                        d_69da_d9ae = 1680;
                    else
                        d_69da_d9ae++;
                } while (d_69da_d990 + 1679 >= d_69da_d9ae);
                tries++;
            } while (d_69da_dd22 == -1 && tries < 3);
            d_69da_dfb2 = f_2162_1634(d_69da_dff2, 1);
            d_69da_dfb2[d_69da_dbb0][d_69da_da86 - 1] = d_69da_dd22;
            if (d_69da_dd22 > -1)
                used[d_69da_dd22] = -1;
        }
    }
}

void f_aac9_421c(void)
{
    f_b8da_61ff(5);
    for (d_69da_d9d2 = 0; d_69da_d9d2 <= 79; d_69da_d9d2++)
        d_4512_6324[0][d_69da_d9d2] = d_69da_d9d2;
    for (d_69da_d9d2 = 1; d_69da_d9d2 <= 20; d_69da_d9d2++)
        for (d_69da_d9de = 0; d_69da_d9de <= 3; d_69da_d9de++) {
            f_b8da_6369(5, (d_69da_d9d2 - 1) * 4 + d_69da_d9de, 79);
            d_69da_dd34 = d_4512_6324[0][f_2162_0da1(20) + d_69da_d9de * 20];
            d_69da_dd36 = d_4512_6324[0][f_2162_0da1(20) + d_69da_d9de * 20];
            f_a83a_0852(d_69da_dd34, d_69da_dd36);
        }
}

void f_aac9_42ed(int player, int team, char buy)
{
    int club;
    char buf[320];
    char more[80];

    club = d_3668_0000[7][player] < 255 ? d_3668_0000[7][player] : d_28da_2a78[0][18 * 1860 + player];
    d_69da_de2f = 0;
    d_69da_de30 = -1;
    f_aac9_1d33(player);
    f_1a70_5e32();
    f_1a70_4a41("");
    sprintf(buf, " %s ", f_2162_0e9b(f_1a70_4592(player)));
    if (f_1a70_6d23(player) == 0)
        f_1a70_3d0c(1.25, 1.125, d_4512_00a4[club] / 16, d_4512_00a4[club] % 16, 0, buf);
    else
        f_1a70_3d0c(1.25, 1.125, 1, 4, 0, buf);
    f_2162_0b0c(1);
    f_2162_0897(16);
    f_2162_08b5(12, 26, 160, 98);
    f_2162_08b5(166, 26, 312, 98);
    f_2162_08b5(12, 104, 312, 116);
    f_2162_08b5(12, 122, 212, 162);
    f_2162_08b5(218, 122, 312, 178);
    f_2162_08b5(12, 171, 212, 178);
    f_2162_08b5(12, 184, 312, 197);
    f_2162_0897(19);
    f_2162_08b5(8, 100, 310, 114);
    f_2162_08b5(8, 118, 210, 160);
    f_2162_08b5(214, 118, 310, 176);
    f_2162_0897(20);
    f_2162_08b5(8, 22, 158, 96);
    f_2162_08b5(162, 22, 310, 96);
    f_2162_0897(30);
    f_2162_08b5(8, 165, 210, 176);
    f_2162_0897(20);
    f_2162_08b5(8, 180, 310, 195);
    f_1a70_3554(1.375, 3.75, 1, 12, 0, " AGE        ");
    f_1a70_3554(10.625, 3.75, 1, 12, 0, d_536d_75e5);
    f_1a70_3554(1.375, 4.75, 1, 12, 0, " CLUB       ");
    f_1a70_3554(10.625, 4.75, 1, 12, 0, d_536d_56db);
    f_1a70_3554(1.375, 5.75, 1, 12, 0, " COUNTRY    ");
    f_1a70_3554(10.625, 5.75, 1, 12, 0, d_536d_7725);
    f_1a70_3554(1.375, 6.75, 1, 12, 0, " CONTRACT   ");
    f_1a70_3554(10.625, 6.75, 1, 12, 0, d_536d_7775);
    f_1a70_3554(1.375, 7.75, 1, 12, 0, " WAGES      ");
    f_1a70_3554(10.625, 7.75, 1, 12, 0, d_536d_77c5);
    f_1a70_3554(1.375, 8.75, 1, 12, 0, " STATUS/VAL ");
    f_1a70_3554(10.625, 8.75, 1, 12, 0, d_536d_7815);
    f_1a70_3554(1.375, 9.75, 1, 12, 0, " INSURANCE  ");
    f_1a70_3554(10.625, 9.75, 1, 12, 0, d_536d_7865);
    f_1a70_3554(1.375, 10.75, 1, 12, 0, " POSITION   ");
    f_1a70_3554(10.625, 10.75, 1, 12, 0, d_536d_6efb);
    if (d_4512_bdc8[player].f0 == 0)
        f_1a70_3554(1.375, 11.75, 1, 12, 0, " SIDE       ");
    else
        f_1a70_3554(1.375, 11.75, 1, 12, 0, " CONCEDED   ");
    f_1a70_3554(10.625, 11.75, 1, 12, 0, d_536d_76d5);
    f_1a70_3554(20.625, 3.75, 1, 12, 71, " CHARACTER");
    sprintf(buf, " %s", d_536d_78b5);
    f_1a70_3554(29.75, 3.75, 1, 12, 71, buf);
    f_1a70_3554(20.625, 4.75, 1, 12, 71, " PASSING");
    sprintf(buf, " %s", d_536d_7905);
    f_1a70_3554(29.75, 4.75, 1, 12, 71, buf);
    f_1a70_3554(20.625, 5.75, 1, 12, 71, " TACKLING");
    sprintf(buf, " %s", d_536d_7955);
    f_1a70_3554(29.75, 5.75, 1, 12, 71, buf);
    f_1a70_3554(20.625, 6.75, 1, 12, 71, " PACE");
    sprintf(buf, " %s", d_536d_79a5);
    f_1a70_3554(29.75, 6.75, 1, 12, 71, buf);
    f_1a70_3554(20.625, 7.75, 1, 12, 71, " HEADING");
    sprintf(buf, " %s", d_536d_79f5);
    f_1a70_3554(29.75, 7.75, 1, 12, 71, buf);
    f_1a70_3554(20.625, 8.75, 1, 12, 71, " FLAIR    ");
    sprintf(buf, " %s", d_536d_7a45);
    f_1a70_3554(29.75, 8.75, 1, 12, 71, buf);
    f_1a70_3554(20.625, 9.75, 1, 12, 71, " CREATIVITY");
    sprintf(buf, " %s", d_536d_7a95);
    f_1a70_3554(29.75, 9.75, 1, 12, 71, buf);
    f_1a70_3554(20.625, 10.75, 1, 12, 71, " STAMINA   ");
    sprintf(buf, " %s", d_536d_7ae5);
    f_1a70_3554(29.75, 10.75, 1, 12, 71, buf);
    f_1a70_3554(20.625, 11.75, 1, 12, 71, " INFLUENCE");
    sprintf(buf, " %s", d_536d_7b35);
    f_1a70_3554(29.75, 11.75, 1, 12, 71, buf);
    f_1a70_3554(1.375, 13.375, 0, 6, 298, d_536d_7b85);
    f_1a70_3554(-1.0, 14.25, 1, 3, 0, d_536d_7bd5);
    f_1a70_3554(1.375, 15.75, 0, 1, 198, "           THIS SEASON");
    f_1a70_3554(1.375, 16.75, 0, 6, 0, " APPS   ");
    f_1a70_3554(7.625, 16.75, 0, 6, 0, d_536d_7c25);
    f_1a70_3554(1.375, 17.75, 0, 6, 0, " GOALS  ");
    f_1a70_3554(7.625, 17.75, 0, 6, 0, d_536d_6c03);
    f_1a70_3554(1.375, 18.75, 0, 6, 0, " DISP   ");
    f_1a70_3554(7.625, 18.75, 0, 6, 0, d_536d_65c1);
    f_1a70_3554(13.875, 16.75, 0, 6, 0, " AV R   ");
    f_1a70_3554(20.125, 16.75, 0, 6, 0, d_536d_55eb);
    f_1a70_3554(13.875, 17.75, 0, 6, 0, " MIN R  ");
    f_1a70_3554(20.125, 17.75, 0, 6, 0, d_536d_7c75);
    f_1a70_3554(13.875, 18.75, 0, 6, 0, " MAX R  ");
    f_1a70_3554(20.125, 18.75, 0, 6, 0, d_536d_7cc5);
    f_1a70_3554(1.375, 19.75, 0, 6, 0, " M/O/M  ");
    f_1a70_3554(7.625, 19.75, 0, 6, 0, d_536d_7d15);
    f_1a70_3554(13.875, 19.75, 0, 6, 0, " INTS   ");
    f_1a70_3554(20.125, 19.75, 0, 6, 0, d_536d_7d65);
    f_1a70_3554(27.125, 15.75, 0, 1, 90, "  LAST SEASON");
    f_1a70_3554(37.875, 15.75, 0, 1, 0, " ");
    f_1a70_3554(27.125, 16.75, 0, 6, 0, " APPS   ");
    f_1a70_3554(33.375, 16.75, 0, 6, 0, d_536d_7db5);
    f_1a70_3554(27.125, 17.75, 0, 6, 0, " GOALS  ");
    f_1a70_3554(33.375, 17.75, 0, 6, 0, d_536d_7e19);
    f_1a70_3554(27.125, 18.75, 0, 6, 0, " DISP   ");
    f_1a70_3554(33.375, 18.75, 0, 6, 0, d_536d_7e69);
    f_1a70_3554(27.125, 19.75, 0, 6, 0, " AV R   ");
    f_1a70_3554(33.375, 19.75, 0, 6, 0, d_536d_7eb9);
    f_1a70_3554(27.125, 20.75, 0, 6, 0, " MIN R  ");
    f_1a70_3554(33.375, 20.75, 0, 6, 0, d_536d_7f09);
    f_1a70_3554(27.125, 21.75, 0, 6, 0, " MAX R  ");
    f_1a70_3554(33.375, 21.75, 0, 6, 0, d_536d_7ff9);
    f_1a70_3554(1.375, 21.625, 1, 8, 98, " MORALE");
    sprintf(buf, " %s", d_536d_7f59);
    f_1a70_3554(13.875, 21.625, 1, 8, 98, buf);
    f_aac9_2ece();
    f_1a70_5e46();
    if (d_536d_7fa9[0] != 0)
        f_aac9_2f6d();
    f_1a70_4ede(2, 35.5, 1.125, 1, 2, 24, "HST");
    if (buy != 0 && d_69da_ddb8 == 0) {
        f_1a70_4ede(2, 24.625, 1.125, 1, 3, 24, "STA");
        f_1a70_4ede(2, 28.25, 1.125, 1, 3, 24, "BUY");
        f_1a70_4ede(2, 31.875, 1.125, 1, 3, 24, "ADD");
        if (f_1a70_2bc7(d_28da_2a78[0][18 * 1860 + player]) == 0 && d_28da_ad40[player] != team && f_1a70_2bc7(d_3668_0000[7][player]) == 0)
            f_1a70_5641(2);
        if (d_69da_ddc9 != 0) {
            f_1a70_5641(2);
            f_1a70_5641(3);
        }
        if (f_1a70_6d23(player))
            f_1a70_5641(2);
    }
    d_69da_ddbe = 0;
    d_69da_d9e8 = 0;
    d_69da_de31 = -1;
    d_69da_dd4a = f_1a70_53de(0);
    d_69da_de31 = 0;
    if (d_69da_dd4a == 0)
        d_69da_ddbe = -1;
    else if (d_69da_dd4a == 1)
        f_aac9_5291(player);
    else if (d_69da_dd4a == 2)
        d_69da_d9e8 = -1;
    else if (d_69da_dd4a == 3 || d_69da_dd4a == 4) {
        d_69da_dda2 = -1;
        if (team > -1)
            d_69da_dda2 = team;
        else if (d_69da_da4c == 2) {
            f_a83a_146b(0);
            sprintf(buf, "%.3s", d_536d_7685);
            d_69da_dac2 = atoi(buf);
            d_69da_dac4 = atoi(f_2162_0f6e(d_536d_7685, 3));
            if (d_4512_2390[d_69da_dac2] == club)
                d_69da_dda2 = d_4512_2390[d_69da_dac4];
            else if (d_4512_2390[d_69da_dac4] == club)
                d_69da_dda2 = d_4512_2390[d_69da_dac2];
        }
        if (d_69da_dda2 == -1) {
            f_a83a_1344(0);
            if (d_69da_dd76 > -1)
                d_69da_dda2 = d_4512_2390[d_69da_dd76];
        }
        if (d_69da_dda2 > -1) {
            if (d_69da_dda2 == club) {
                sprintf(buf, "You already own %s", f_1a70_4739(player));
                f_1a70_0b80(buf);
            } else if (d_69da_dd4a == 3 && d_3668_0000[7][player] < 255)
                f_1a70_0b80("His loan must be terminated first");
            else if (d_69da_dd4a == 3 && d_4512_01ec[d_69da_dda2] < 30)
                f_1a70_0b80("The board refuse any transfers");
            else if (d_69da_dd4a == 3 && f_1a70_6783(d_69da_d996))
                f_1a70_0b80("Transfer deadline has passed");
            else if (d_69da_dd4a == 3 && d_4512_06ba[d_69da_dda2] > 3)
                f_1a70_0b80("Not enough time");
            else if (d_69da_dd4a == 3 && (d_4512_bdc8[player].f9 || d_4512_bdc8[player].f30)) {
                sprintf(buf, "%s not for sale", f_1a70_4739(player));
                f_1a70_0b80(buf);
            } else if (d_69da_dd4a == 3 && d_4512_023e[d_69da_dda2] + d_4512_1480[d_69da_dda2] >= 26) {
                strcpy(buf, "Maximum squad size is 26");
                if (d_4512_1480[d_69da_dda2] > 0) {
                    sprintf(more, "|(%d player%s loaned out)", d_4512_1480[d_69da_dda2], d_4512_1480[d_69da_dda2] > 1 ? "s" : "");
                    strcat(buf, more);
                }
                f_1a70_0b80(buf);
            } else if (f_1a70_6d23(player) == 0 && d_69da_dd4a == 3 && f_1a70_2d0e(player)) {
                sprintf(buf, "%s have too few players", (char far *)d_69da_b1fc[*(d_28da_2a78[18] + player)]);
                f_1a70_0b80(buf);
            } else if (d_69da_dd4a == 4 && d_4512_637c[d_69da_dda2][0] == 15)
                f_1a70_0b80("shortlist is full");
            else if (d_69da_dd4a == 3)
                d_69da_d9e8 = d_69da_dda2 + 1;
            else if (d_69da_dd4a == 4)
                d_69da_d9e8 = -d_69da_dda2 - 2;
        }
    }
}

void f_aac9_5291(int p)
{
    FILE *fp;

    f_2162_19f6(2);
    fp = fopen(d_536d_a49d, "rb+");
    fseek(fp, (long)p * 133, 0);
    fread(d_536d_703b, 1, 133, fp);
    fclose(fp);
    d_69da_dc9a = d_3668_0000[0][20 * 1860 + p];
    if (d_69da_dc9a < 17) {
        f_aac9_0000(p, 0);
        f_1a70_4ede(2, 1.25, 22.5, 1, 4, 0x12d, "                 EXIT");
        do
            d_69da_d992 = f_1a70_53de(d_69da_d9dc);
        while (d_69da_d992 <= 0);
    } else {
        d_69da_dd52 = 0;
        do {
            f_aac9_0000(p, d_69da_dd52);
            f_1a70_4ede(2, 1.25, 22.5, 1, 12, 0x49, "   MORE");
            f_1a70_4ede(2, 11.0, 22.5, 1, 4, 0xdf, "            EXIT");
            do
                d_69da_d992 = f_1a70_53de(d_69da_d9dc);
            while (d_69da_d992 <= 0);
            if (d_69da_d992 == 1)
                d_69da_dd52 = 1 - d_69da_dd52;
        } while (d_69da_d992 != 2);
    }
}
