/* @at 9e77:0000 */
/* @data 60ae:56cc */
/* @module */

/* Overlay 8: the game's services: printed league tables and reports, player ratings and
 * form, the weekly update, fines and bans, the title picture, loading and saving the game
 * and the hall of fame, records. CM93's version of parts of CM1's 992A.C, with much new
 * code. */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_9e77_0000(int team);
void f_9e77_049b(char far *s);
void f_9e77_053e(void);
void f_9e77_0aed(void);
void f_9e77_0c7b(void);
void f_9e77_0df3(int n);
void f_9e77_10aa(int p);
void f_9e77_139d(int p, int a, int b);
void f_9e77_1699(int p);
void f_9e77_188c(int p);
void f_9e77_1cd0(int p);
void f_9e77_1dce(void);
void f_9e77_28e8(void);
void f_9e77_2c88(char quick);
void f_9e77_3a0d(void);
void f_9e77_478b(FILE *fp);
void f_9e77_47ab(FILE *fp);
void f_9e77_47cb(void);
void f_9e77_48d3(void);
void f_9e77_49ee(char far *s);
void f_9e77_4b29(int a, int b);
void f_9e77_4d7d(int a, int b);
void f_9e77_4e5e(int n);
void f_9e77_4f2c(void);
void f_9e77_4f31(void);

struct score { unsigned home : 4; unsigned away : 4; };
char far *f_14bc_483d(int player);
char far *f_14bc_4703(int player);
char f_14bc_2cc0(int x);
char f_14bc_2e5e(int player);
char f_14bc_5e32(int player);
void f_14bc_3c75(float x, float y, int colour, char far *s);
void f_14bc_4bd3(char far *title);
void f_14bc_5bfe(int team, char far *title, char far *text);
void f_1bd3_08cb(int c);
void f_1bd3_08d6(int c);
void f_1bd3_08e1(int x1, int y1, int x2, int y2);
void f_1bd3_0928(int x1, int y1, int x2, int y2);
long f_1bd3_0d69(long n);
char far *f_1bd3_0e5e(char far *s);
int f_1bd3_1369(int a, int b);
void f_1bd3_13a3(void far *a, void far *b, int n);
void f_1bd3_1a23();
void f_70a9_530e(int team, char far names[][98][20], unsigned char far *comp, unsigned char far *week);
void f_9107_117d(int player, char c);
void f_ad38_3fe8(void);
void f_ad38_3fed(void);
void f_ad38_3ff2(char far *s);
void f_ad38_4019(char n);
extern char far d_2289_0078[];
extern char far d_2289_2fd0[];
extern char far d_2289_39b4[];
extern char far d_2289_3c84[];
extern char far d_2289_3dc4[];
extern char far d_2289_3f54[];
extern char far d_2289_5658[][80];
extern struct score far d_2289_73ec[];
extern long far d_2289_73f0;
extern int far d_2289_73f4[][14];
extern unsigned char far d_2289_742c[][14];
extern int far d_323f_4494[][80];
extern unsigned char far d_3c35_0000[][1860];
extern unsigned char far d_471b_0000[][1860];
extern int far d_471b_b4e0[];
extern int far d_54d9_1200[][2][98];
extern char near *d_60ae_b572[];
extern int d_60ae_da28;
extern int d_60ae_da94;
extern int d_60ae_db88;
extern int d_60ae_db8a;
extern int d_60ae_dc06;
extern int d_60ae_dd06;
extern int d_60ae_dd08;
extern int d_60ae_dd0a;
extern int d_60ae_dd0e;
extern int d_60ae_dd1a;
extern int d_60ae_dd1e;
extern int d_60ae_dd5a;
extern int d_60ae_dd60;
extern int d_60ae_dd84;
extern int d_60ae_dd92;
extern int d_60ae_dd98;
extern int d_60ae_dd9c;
extern int d_60ae_dda4;
extern unsigned char d_60ae_ddbf[][4];
struct flags_a { unsigned char b0; unsigned f8 : 1; unsigned f9 : 1; unsigned : 6; unsigned : 2; unsigned f18 : 1; unsigned f19 : 1; unsigned : 4; unsigned : 0; unsigned f24 : 1; unsigned : 3; unsigned f28 : 1; unsigned : 1; unsigned f30 : 1; unsigned : 1; };
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
union flags { struct flags_a a; struct flags_w w; };
void f_14bc_0ecb(int p);
void f_14bc_1365(int player);
char far *f_14bc_3523(int x);
void f_14bc_58db(int a);
char f_14bc_5e18(int player);
int f_14bc_5e44(int player);
unsigned char f_14bc_5e60(int player);
char f_14bc_6f7c(int player);
float f_1bd3_1088(void);
char far *f_1bd3_100b(char far *s);
float f_1bd3_12df(float a, float b);
int f_1bd3_1307(int a, int b);
void far *f_1bd3_1617(int handle, int page);
void f_ad38_3a4b(char club);
void f_b628_0c80(int player);
extern char far d_2289_2210[];
extern char far d_2289_2211[];
extern char far d_2289_36e2[];
extern unsigned char far d_2289_a0c6[][5][16];
extern unsigned char far d_2289_a0f6[][80];
extern int far d_323f_1bfe[];
extern int far d_323f_4714[];
extern long d_60ae_d7cf;
extern char d_60ae_d980;
extern unsigned char d_60ae_d985;
extern int d_60ae_da1a;
extern int d_60ae_da1c;
extern int d_60ae_da1e;
extern int d_60ae_da20;
extern int d_60ae_da24;
extern int d_60ae_dab0;
extern int d_60ae_dbd8;
extern int d_60ae_dbda;
extern int d_60ae_dcac;
extern int d_60ae_dcc4;
extern int d_60ae_dd52;
extern union flags d_60ae_ddbe[];
extern long (far *d_60ae_fade)[80];
extern int d_60ae_fde2;
void f_14bc_0ac0(int line, char far *s);
void f_14bc_0b30(char far *s);
char f_14bc_0c5e(void);
void f_14bc_1dd7(int p);
void f_14bc_2f90(int n, char far *title, char far *items);
void f_14bc_3334(int last);
void f_14bc_3e40(float x, float y, int bg, int fg, int w, char far *s);
char far *f_14bc_48b4(int player);
long f_14bc_5af6(int team);
void f_7732_0027(int team);
void f_a694_49c9(int player, int a, char b);
extern char far d_2289_2f30[];
extern char far d_2289_2f80[];
extern unsigned char far d_323f_4c14[][82];
extern char far * far d_54d9_02c6[];
extern long d_60ae_d803;
extern char d_60ae_d90f;
extern char d_60ae_d910;
extern char d_60ae_d920;
extern char d_60ae_d93f;
extern char d_60ae_d975;
extern char d_60ae_d977;
extern int d_60ae_d992;
extern int d_60ae_d994;
extern int d_60ae_da14;
extern int d_60ae_da16;
extern int d_60ae_da18;
extern int d_60ae_dbae;
extern int d_60ae_dbc6;
extern int d_60ae_dda0;
char far *f_14bc_490d(int manager, char full);
float f_14bc_6b14(int x);
long f_9107_1391(int player);
void f_9107_3ff7(int club, int a);
long f_a3de_21b9(int x);
extern long d_60ae_d7bf;
extern long d_60ae_d7c3;
extern long d_60ae_d7c7;
extern long d_60ae_d7cb;
extern char d_60ae_d90c;
extern int (far *d_60ae_fae6)[1860];
extern int d_60ae_fde6;
extern long far d_323f_3f94[][80];
extern int far d_323f_47b4[];
extern int far d_471b_b7a8[][26];
void f_14bc_0b83(char far *s);
char f_14bc_679d(int a, int b);
extern unsigned char far d_2276_0000[];
extern int far d_2289_be68[][2][22];
extern char far * far d_54d9_0000[];
extern char d_60ae_d90b;
extern int d_60ae_da0e;
extern int d_60ae_da10;
extern int d_60ae_db82;
extern int d_60ae_dc1a;
extern int d_60ae_dd2e;
extern int d_60ae_dd32;
extern int d_60ae_dd78;
extern int d_60ae_dda2;
extern unsigned char (far *d_60ae_fad2)[1860];
extern int (far *d_60ae_fada)[100];
extern int d_60ae_fddc;
extern int d_60ae_fde0;
extern char far d_2289_00a0[];
extern char far d_2289_1e28[][82][5];
extern char far d_2289_4b06[][4][20];
extern char far d_2289_4ba6[];
extern char far d_2289_5470[];
extern int far d_2289_58d8[3][16][8];
extern char far d_2289_5bd8;
extern char far d_2289_5bd9;
extern char far d_2289_5bda;
extern char far d_2289_5bdb;
extern char far d_2289_7986[];
extern char far d_2289_7b16[];
extern char far d_2289_95f6[];
extern unsigned char far d_2289_bb10[][6][5];
extern int far d_2289_bda4[][5];
extern unsigned char far d_2289_bde0[][2][4];
extern int far d_2289_be10[][4];
extern long far d_2289_be20[];
extern int far d_2289_be30[];
extern float far d_2289_be38[][4];
extern int far d_2289_be58[][4];
extern float far d_2289_c020[];
extern unsigned char far d_2289_c250[];
extern int far d_2289_c46c[][140];
extern unsigned char far d_2289_cf5c[][140];
extern int far d_2289_d678[];
extern int far d_2289_d704[][4][2][30];
extern unsigned char far d_2289_de84[];
extern char far d_2289_ec08[][16];
extern int far d_2289_f108[][16];
extern char far d_2289_fb08[];
extern char far d_2289_fb09;
extern char far d_2289_fb0a;
extern char far d_2289_fb0b;
extern unsigned char far d_2289_fb0c[];
extern char far d_2289_fb0d;
extern char far d_2289_fb0e;
extern char far d_2289_fb0f;
extern unsigned char far d_2289_fb10[][20];
extern char far d_2278_0000[];
extern char far d_227b_0000[];
extern int far d_323f_0000[][80];
extern int far d_323f_0592[][14];
extern unsigned char far d_323f_0e8a[][3][14];
extern int far d_323f_1c00;
extern int far d_323f_1c02;
extern int far d_323f_1c04;
extern unsigned char far d_323f_1c08[];
extern char far d_323f_653a[];
extern char far d_471b_b01c[];
extern int far d_471b_c7e8[][2][13];
extern unsigned char far d_471b_d8c8[];
extern unsigned char far d_54d9_0904[][460];
extern unsigned char far d_54d9_4f40[][140];
extern unsigned long d_60ae_966b;
extern char near *d_60ae_b616[];
extern char near *d_60ae_b6ba[];
extern char d_60ae_d8f4;
extern char d_60ae_d97b;
extern int d_60ae_dc7a;
extern int d_60ae_dce6;
extern int d_60ae_dce8;
extern int d_60ae_dd28;
extern int d_60ae_dd7a;
extern int d_60ae_dd7c;
extern int d_60ae_dd7e;
extern int d_60ae_dd80;
extern int d_60ae_dd82;
extern int d_60ae_dd8a;
extern int d_60ae_dd8c;
extern int d_60ae_dd8e;
extern int d_60ae_dd90;
extern int d_60ae_dd94;
extern int d_60ae_dd96;
extern char (far *d_60ae_dda6)[151];
extern char (far *d_60ae_ddaa)[151];
extern char far *d_60ae_ddae;
extern char (far *d_60ae_ddb6)[101];
extern int (far *d_60ae_face)[2][22];
extern long (far *d_60ae_fad6)[140];
extern char far *d_60ae_fae2;
extern int far *d_60ae_faea;
extern long far *d_60ae_faee;
extern long far *d_60ae_faf2;
extern int d_60ae_fdce;
extern int d_60ae_fdd0;
extern int d_60ae_fdd2;
extern int d_60ae_fdd6;
extern int d_60ae_fdda;
extern int d_60ae_fdde;
extern int d_60ae_fde4;
extern int d_60ae_fde8;
extern int d_60ae_fdea;
extern int d_60ae_fdec;
void f_1bd3_0dbc(int ticks);
extern int d_60ae_dd9e;
char far *f_14bc_4a14(int player);
void f_14bc_4d4c(float x, int w, char far *prompt);
void f_1bd3_0c9a(FILE *fp, char far *buf);
void f_1bd3_0cce(FILE *fp, char far *s);
void f_1bd3_0fe2(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_1bd3_1a28(void);
extern int d_60ae_dce0;
extern int d_60ae_fdd4;
extern char far *d_60ae_ddb2;
extern char far d_2289_0028[];
extern char far d_2289_4ae8[];
extern long far d_2289_eb68[][2];


/* print a team's fixtures and results */
void f_9e77_0000(int team)
{
    char sep[10];
    char home;
    FILE *fp;
    char names[4][98][20];
    char line[320];
    char scorers[80];
    unsigned char comp[98];
    unsigned char week[98];
    char buf[300];
    unsigned col;

    f_ad38_3fe8();
    f_ad38_3ff2("______________________________________________________________________________\n");
    f_ad38_4019(2);
    sprintf(line, "%s FIXTURES/RESULTS SEASON %d", f_1bd3_0e5e(d_60ae_b572[team]), d_60ae_dd98);
    f_ad38_3ff2(line);
    f_ad38_4019(3);
    f_ad38_3ff2("COMP  OPPONENTS    VEN SCORE GATE   SCORERS");
    f_ad38_4019(2);
    f_70a9_530e(team, names, comp, week);
    for (d_60ae_dd0e = 0; d_60ae_dd1a - 1 >= d_60ae_dd0e; d_60ae_dd0e++) {
        strcpy(line, names[0][d_60ae_dd0e] + 2);
        sprintf(buf, " %s   %-13.13s(%s)  ", f_1bd3_0e5e(line), names[1][d_60ae_dd0e], names[2][d_60ae_dd0e]);
        f_ad38_3ff2(buf);
        if (week[d_60ae_dd0e] < d_60ae_dd9c) {
            d_60ae_dd0a = week[d_60ae_dd0e] - 1;
            d_60ae_dd08 = comp[d_60ae_dd0a];
            d_60ae_dd06 = d_471b_b4e0[d_60ae_dd0a] + d_60ae_dd08;
            home = d_54d9_1200[d_60ae_dd08][0][d_60ae_dd0a] / 32 == team;
            f_1bd3_1a23(2);
            fp = fopen(d_2289_0078, "rb");
            fseek(fp, (long)(d_60ae_dd06 - 1) * 154, 0);
            fread(d_2289_73ec, 1, 154, fp);
            fclose(fp);
            if (d_2289_73ec[2].home == 15 && d_2289_73ec[2].away == 15) {
                d_60ae_db8a = d_2289_73ec[1].home;
                d_60ae_db88 = d_2289_73ec[1].away;
            } else {
                d_60ae_db8a = d_2289_73ec[2].home;
                d_60ae_db88 = d_2289_73ec[2].away;
            }
            if (home == 0)
                f_1bd3_13a3(&d_60ae_db8a, &d_60ae_db88, 2);
            sprintf(line, "%d-%d", d_60ae_db8a, d_60ae_db88);
            sprintf(buf, "%-5.5s%-7ld", line, d_2289_73f0);
            f_ad38_3ff2(buf);
            if (d_60ae_db8a > 0) {
                d_60ae_dd1e = 0;
                col = 38;
                for (d_60ae_dd92 = 0; d_60ae_dd92 <= 13; d_60ae_dd92++) {
                    if (home) {
                        d_60ae_dd84 = d_2289_73f4[0][d_60ae_dd92];
                        d_60ae_dc06 = d_2289_742c[0][d_60ae_dd92] / 16;
                    } else {
                        d_60ae_dd84 = d_2289_73f4[1][d_60ae_dd92];
                        d_60ae_dc06 = d_2289_742c[1][d_60ae_dd92] / 16;
                    }
                    if (d_60ae_dc06 > 0) {
                        if (d_60ae_dd1e > 0)
                            strcpy(sep, ",");
                        else
                            strcpy(sep, "");
                        strcpy(scorers, sep);
                        strcat(scorers, f_14bc_483d(d_60ae_dd84));
                        if (d_60ae_dc06 > 1) {
                            sprintf(line, " %d", d_60ae_dc06);
                            strcat(scorers, line);
                        }
                        if (strlen(scorers) > col) {
                            if (sep[0]) {
                                f_ad38_3ff2(sep);
                                f_ad38_4019(1);
                                strcpy(scorers, scorers + 1);
                            } else
                                f_ad38_4019(1);
                            f_ad38_3ff2("                                    ");
                            col = 38;
                        }
                        f_ad38_3ff2(scorers);
                        col = col - strlen(scorers);
                        d_60ae_dd1e++;
                    }
                }
            }
        }
        f_ad38_4019(1);
    }
    f_ad38_4019(2);
    f_ad38_3ff2("______________________________________________________________________________\n");
    f_ad38_4019(2);
    f_ad38_3fed();
}

/* a message box */
void f_9e77_049b(char far *s)
{
    f_14bc_4bd3("");
    f_1bd3_08cb(16);
    f_1bd3_08e1(20, 121, 308, 89);
    f_1bd3_08cb(31);
    f_1bd3_08e1(16, 117, 304, 85);
    f_1bd3_08d6(19);
    f_1bd3_0928(16, 117, 304, 85);
    f_14bc_3c75(-1.0, 12.5, 1, s);
}

/* the week's injuries and suspensions */
void f_9e77_053e(void)
{
    unsigned char flag[1860];
    char tmp[320];
    char title[80];
    char text[180];

    memset(flag, 0, 1860);
    if (d_2289_3dc4[0] && d_60ae_dd9c > 8) {
        for (d_60ae_dd60 = 1; strlen(d_2289_3dc4) >= d_60ae_dd60; d_60ae_dd60 += 4) {
            strncpy(tmp, d_2289_3dc4 + d_60ae_dd60 - 1, 4);
            tmp[4] = 0;
            if (!f_14bc_5e32(d_60ae_dd84 = atol(tmp))) {
                d_3c35_0000[2][d_60ae_dd84] += 10;
                if (d_3c35_0000[2][d_60ae_dd84] % 5 == 1)
                    d_3c35_0000[2][d_60ae_dd84]--;
                flag[d_60ae_dd84] = 0xff;
                d_323f_4494[4][d_471b_0000[18][d_60ae_dd84]] += 10;
            } else if (d_60ae_dd9c > 10 && f_14bc_2e5e(d_60ae_dd84) == 0)
                f_9e77_139d(d_60ae_dd84, 26, 2);
        }
    }
    if (d_2289_3c84[0] && d_60ae_dd9c > 8) {
        for (d_60ae_dd60 = 1; strlen(d_2289_3c84) >= d_60ae_dd60; d_60ae_dd60 += 4) {
            strncpy(tmp, d_2289_3c84 + d_60ae_dd60 - 1, 4);
            tmp[4] = 0;
            if (!f_14bc_5e32(d_60ae_dd84 = atol(tmp)) && flag[d_60ae_dd84] == 0) {
                d_3c35_0000[2][d_60ae_dd84] += 5;
                if (d_3c35_0000[2][d_60ae_dd84] % 5 == 1)
                    d_3c35_0000[2][d_60ae_dd84]--;
                d_323f_4494[4][d_471b_0000[18][d_60ae_dd84]] += 5;
            }
        }
    }
    strcpy(d_2289_2fd0, " suffered during the match");
    if (d_2289_3f54[0]) {
        for (d_60ae_dd60 = 1; strlen(d_2289_3f54) >= d_60ae_dd60; d_60ae_dd60 += 4) {
            strncpy(tmp, d_2289_3f54 + d_60ae_dd60 - 1, 4);
            tmp[4] = 0;
            d_60ae_dd84 = atol(tmp);
            if (f_1bd3_0d69(3) > 0) {
                if (!f_14bc_5e32(d_60ae_dd84)) {
                    f_9e77_10aa(d_60ae_dd84);
                    d_471b_0000[20][d_60ae_dd84] -= d_471b_0000[20][d_60ae_dd84] > 0;
                } else if (f_14bc_2e5e(d_60ae_dd84) == 0)
                    f_9e77_10aa(d_60ae_dd84);
            }
        }
    }
    if (d_2289_39b4[0]) {
        for (d_60ae_dd60 = 1; strlen(d_2289_39b4) >= d_60ae_dd60; d_60ae_dd60 += 4) {
            strncpy(tmp, d_2289_39b4 + d_60ae_dd60 - 1, 4);
            tmp[4] = 0;
            d_60ae_dd84 = atol(tmp);
            if (f_1bd3_0d69(5) > 0 && !f_14bc_5e32(d_60ae_dd84))
                d_471b_0000[15][d_60ae_dd84] = f_1bd3_1369(d_471b_0000[15][d_60ae_dd84] + f_1bd3_0d69(25),
                                                           d_471b_0000[9][d_60ae_dd84] + 25);
        }
    }
    for (d_60ae_dd84 = 0; d_60ae_dda4 - 1 >= d_60ae_dd84; d_60ae_dd84++) {
        d_60ae_dd5a = d_471b_0000[18][d_60ae_dd84];
        if (d_471b_0000[20][d_60ae_dd84] == 0) {
            d_60ae_da94 = d_3c35_0000[2][d_60ae_dd84];
            d_60ae_da28 = (flag[d_60ae_dd84] != 0) + (d_60ae_da94 > 0 && d_60ae_da94 % 20 == 0 ? 2 : 0);
            if (d_60ae_da28 > 0) {
                if (d_60ae_dd9c < 10) {
                    d_471b_0000[19][d_60ae_dd84] = d_60ae_da28 + 26;
                    if (f_14bc_2cc0(d_60ae_dd5a)) {
                        sprintf(title, "%s squad news", (char far *)d_60ae_b572[d_60ae_dd5a]);
                        sprintf(text, "%s put under delayed suspension, due to bad discipline.",
                                f_14bc_4703(d_60ae_dd84));
                        f_14bc_5bfe(d_60ae_dd5a, title, text);
                    }
                } else
                    f_9e77_139d(d_60ae_dd84, 26, d_60ae_da28);
                d_60ae_ddbf[d_60ae_dd84][0] |= 0x80;
                if (f_14bc_2cc0(d_60ae_dd5a) == 0 && f_1bd3_0d69(8) == 0)
                    f_9107_117d(d_60ae_dd84, -1);
            }
        } else if (d_471b_0000[19][d_60ae_dd84] == 26 && d_2289_5658[0][d_60ae_dd5a] && d_60ae_dd9c > 5) {
            d_471b_0000[20][d_60ae_dd84] -= 1;
            if (d_471b_0000[20][d_60ae_dd84] == 0)
                f_9e77_1699(d_60ae_dd84);
        }
    }
}

void f_9e77_0aed(void)
{
    char text[320];
    char score[80];

    if (d_323f_1bfe[0] > -1) {
        f_14bc_4bd3("");
        f_14bc_3c75(-1.0, 10.0, 2, "Performance of the week");
        sprintf(d_2289_36e2, "%d-%d", abs(d_323f_1bfe[2]), d_323f_1bfe[3]);
        if (d_323f_1bfe[2] < 0)
            strcat(d_2289_36e2, " Pens");
        strcpy(score, d_2289_2210);
        score[1] = 0;
        sprintf(text, "%s : %s v %s (%s)", f_1bd3_100b(f_14bc_3523(d_323f_1bfe[0])), d_2289_36e2,
                f_1bd3_100b(f_14bc_3523(d_323f_1bfe[1])), score);
        f_14bc_3c75(-1.0, 12.0, 6, text);
        strcpy(text, d_2289_2211);
        f_14bc_3c75(-1.0, 14.0, 9, text);
        f_14bc_58db(0);
    }
}

void f_9e77_0c7b(void)
{
    char text[320];

    for (d_60ae_dd5a = 0; d_60ae_dd5a <= 79; d_60ae_dd5a++) {
        d_60ae_da94 = d_323f_4714[d_60ae_dd5a];
        d_60ae_d985 = d_60ae_dd5a / 20 + 1;
        if (d_60ae_da94 >= d_60ae_d985 * 10 + 120 && d_60ae_da94 % 5 == 0) {
            switch (d_60ae_d985) {
            case 1:
                d_60ae_d7cf = f_1bd3_0d69(6) * 5000 + 50000L;
                break;
            case 2:
                d_60ae_d7cf = f_1bd3_0d69(6) * 1000 + 25000;
                break;
            case 3:
            case 4:
                d_60ae_d7cf = f_1bd3_0d69(11) * 500 + 5000;
                break;
            }
            sprintf(text, "%s have been fined %ld for excessive foul play.",
                    (char far *)d_60ae_b572[d_60ae_dd5a], d_60ae_d7cf);
            f_14bc_5bfe(d_60ae_dd5a, "FA Disciplinary action", text);
            d_60ae_fade = f_1bd3_1617(d_60ae_fde2, 1);
            d_60ae_fade[12][d_60ae_dd5a] += d_60ae_d7cf;
            d_323f_4714[d_60ae_dd5a]++;
        }
        f_ad38_3a4b(d_60ae_dd5a);
    }
}

void f_9e77_0df3(int n)
{
    strcpy(d_2289_2fd0, " suffered during training");
    for (d_60ae_da24 = 1; d_60ae_da24 <= n; d_60ae_da24++) {
        d_60ae_dd60 = -1;
        d_60ae_dbda = 0;
        do {
            do {
                d_60ae_dcac = f_1bd3_0d69(d_60ae_dda4);
                d_60ae_dd5a = d_471b_0000[18][d_60ae_dcac];
            } while (d_471b_0000[20][d_60ae_dcac] > 0);
            d_60ae_dbd8 = f_1bd3_0d69(d_471b_0000[13][d_60ae_dcac] + 10);
            if (d_60ae_dbd8 > d_60ae_dd52 || d_60ae_dd60 == -1) {
                d_60ae_dd60 = d_60ae_dcac;
                d_60ae_dd52 = d_60ae_dbd8;
            }
            d_60ae_dbda++;
        } while (d_60ae_dd60 <= -1 || d_60ae_dbda < 10);
        f_9e77_10aa(d_60ae_dd60);
        d_60ae_dd60 = -1;
        d_60ae_dbda = 0;
        do {
            d_60ae_dd5a = f_1bd3_0d69(80);
            d_60ae_dd60 = d_60ae_dd5a * 20 + f_1bd3_0d69(16) + 3000;
            d_60ae_dbda++;
        } while ((d_2289_a0f6[d_60ae_dd5a][f_14bc_5e60(d_60ae_dd60)] > 0 || f_14bc_2e5e(d_60ae_dd60))
                 && d_60ae_dbda < 50);
        if (d_2289_a0f6[d_60ae_dd5a][f_14bc_5e60(d_60ae_dd60)] == 0 && f_14bc_2e5e(d_60ae_dd60) == 0)
            f_9e77_10aa(d_60ae_dd60);
        if (d_60ae_d980 == 0) {
            for (d_60ae_dd0e = 1; d_60ae_dd0e <= 7; d_60ae_dd0e++) {
                d_60ae_dd60 = -1;
                d_60ae_dbda = 0;
                do {
                    d_60ae_dcac = f_1bd3_0d69(d_60ae_dda4);
                    d_60ae_dbd8 = f_1bd3_0d69(d_471b_0000[17][d_60ae_dcac] - 6);
                    if (d_60ae_dbd8 < d_60ae_dab0 || d_60ae_dd60 == -1) {
                        d_60ae_dd60 = d_60ae_dcac;
                        d_60ae_dab0 = d_60ae_dbd8;
                    }
                    d_60ae_dbda++;
                } while (d_60ae_dbda < 2 || d_60ae_dd60 <= -1);
                d_60ae_da20 = d_471b_0000[15][d_60ae_dd60];
                f_9e77_1cd0(d_60ae_dd60);
                if (d_60ae_d980 == 0) {
                    if (d_471b_0000[15][d_60ae_dd60] < d_60ae_da20 && d_60ae_ddbe[d_60ae_dd60].w.f7
                        && f_14bc_2cc0(d_471b_0000[18][d_60ae_dd60]) == 0)
                        f_14bc_0ecb(d_60ae_dd60);
                    else if (d_471b_0000[15][d_60ae_dd60] > d_60ae_da20 && d_471b_0000[20][d_60ae_dd60] == 0
                             && f_14bc_2cc0(d_471b_0000[18][d_60ae_dd60]) == 0)
                        f_14bc_1365(d_60ae_dd60);
                }
            }
        }
    }
}

void f_9e77_10aa(int p)
{
    unsigned char lo[26] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 2, 6, 6, 6, 8, 8, 8, 8, 8, 8, 16, 6, 20};
    unsigned char hi[26] = {1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 3, 3, 4, 10, 8, 8, 12, 12, 12, 12, 12, 12, 16, 60, 16, 60};

    d_60ae_dcc4 = f_1bd3_0d69(100) + 1;
    if (d_60ae_dcc4 <= 43 || f_1bd3_0d69(2) == 0) {
        char c;

        if (f_14bc_5e18(p) || f_14bc_6f7c(p))
            c = d_60ae_ddbe[p].w.f0;
        else if (f_14bc_5e32(p))
            c = d_2289_a0c6[f_14bc_5e44(p)][0][f_14bc_5e60(p)] == 1 ? 1 : 0;
        do
            d_60ae_da1e = f_1bd3_0d69(8);
        while (d_60ae_da1e == 4 || d_60ae_da1e == 5 || d_60ae_da1e == 6 || (d_60ae_da1e == 3 && c == 0));
    } else if (d_60ae_dcc4 >= 44 && d_60ae_dcc4 <= 78)
        d_60ae_da1e = f_1bd3_0d69(6) + 8;
    else if (d_60ae_dcc4 >= 79 && d_60ae_dcc4 <= 92)
        d_60ae_da1e = f_1bd3_0d69(2) + 14;
    else if (d_60ae_dcc4 >= 93 && d_60ae_dcc4 <= 97)
        d_60ae_da1e = f_1bd3_0d69(6) + 16;
    else if (d_60ae_dcc4 >= 98)
        d_60ae_da1e = f_1bd3_0d69(4) + 22;
    d_60ae_da1c = lo[d_60ae_da1e] + f_1bd3_0d69(hi[d_60ae_da1e] - lo[d_60ae_da1e] + 1);
    f_9e77_139d(p, d_60ae_da1e, d_60ae_da1c);
    if (f_14bc_5e18(p)) {
        d_60ae_da1a = d_60ae_da1c;
        if (d_60ae_da1c >= 12 && f_14bc_2cc0(d_471b_0000[18][p]) == 0)
            f_b628_0c80(p);
        if (d_60ae_da1c >= 16 && f_1bd3_0d69(15) == 0)
            f_9e77_188c(p);
        if (d_60ae_da1c >= 16 && f_1bd3_0d69(4) == 0) {
            d_471b_0000[0][p] = d_471b_0000[0][p] * f_1bd3_12df(f_1bd3_1088(), 0.5);
            d_471b_0000[9][p] = f_1bd3_1307(d_471b_0000[9][p] * f_1bd3_12df(f_1bd3_1088(), 0.5), d_471b_0000[0][p]);
        }
    }
}

void f_9e77_139d(int p, int a, int b)
{
    char title[120];
    char text[120];

    d_60ae_d910 = a == 26 ? -1 : 0;
    d_60ae_d90f = a == 50 ? -1 : 0;
    if (!f_14bc_5e32(p)) {
        d_60ae_dd5a = d_471b_0000[18][p];
        d_471b_0000[19][p] = a;
        d_471b_0000[20][p] = b;
        d_3c35_0000[2][p] += d_60ae_d910 ? 1 : 0;
    } else {
        d_60ae_dd5a = f_14bc_5e44(p);
        d_2289_a0f6[d_60ae_dd5a][f_14bc_5e60(p)] = b;
    }
    if (d_60ae_d980 == 0 && d_60ae_d920 == 0 && f_14bc_6f7c(p) == 0) {
        if (f_14bc_2cc0(d_60ae_dd5a) == 0)
            f_14bc_0ecb(p);
        else
            f_14bc_1dd7(p);
        if (f_14bc_2cc0(d_60ae_dd5a)) {
            if (d_60ae_d910) {
                sprintf(title, "%s squad news", (char far *)d_60ae_b572[d_60ae_dd5a]);
                sprintf(text, "%s serves a %d match ban, due to bad discipline.", f_14bc_4703(p), b);
                f_14bc_5bfe(d_60ae_dd5a, title, text);
            } else if (d_60ae_d90f) {
                sprintf(title, "%s squad news", (char far *)d_60ae_b572[d_60ae_dd5a]);
                sprintf(text, "%s is ineligible for today's game - he is cuptied.", f_14bc_4703(p));
                f_14bc_5bfe(d_60ae_dd5a, title, text);
            } else if (a != 51) {
                if (b == 1)
                    strcpy(d_2289_2f80, "a few days");
                else
                    sprintf(d_2289_2f80, "about %d weeks", b);
                sprintf(title, "%s %ssquad news", (char far *)d_60ae_b572[d_60ae_dd5a],
                        f_14bc_5e32(p) ? "reserve " : "");
                sprintf(text, "%s out for %s with %s%s.", f_14bc_4703(p), d_2289_2f80, d_54d9_02c6[a], d_2289_2fd0);
                f_14bc_5bfe(d_60ae_dd5a, title, text);
            }
        }
    }
    if (!f_14bc_5e32(p) && f_1bd3_0d69(d_471b_0000[14][p] + 10) < f_1bd3_0d69(10)
        && b > f_1bd3_0d69(3) + 5)
        d_471b_0000[15][p] = f_1bd3_1307(d_471b_0000[15][p] - f_1bd3_0d69(25), 10);
}

void f_9e77_1699(int p)
{
    char what[180];
    char title[80];
    char text[180];

    if (!f_14bc_5e32(p)) {
        d_60ae_dd5a = d_471b_0000[18][p];
        d_60ae_d910 = d_471b_0000[19][p] == 26;
        d_60ae_d90f = d_471b_0000[19][p] == 50;
        d_471b_0000[19][p] = 0;
        d_471b_0000[20][p] = 0;
        d_60ae_ddbe[p].w.f25 = 0;
        d_60ae_ddbe[p].w.f26 = 0;
        d_60ae_ddbe[p].w.f27 = 0;
        d_60ae_ddbe[p].w.f23 = 1;
    } else {
        d_60ae_dd5a = f_14bc_5e44(p);
        d_60ae_d910 = 0;
        d_60ae_d90f = 0;
        d_2289_a0f6[d_60ae_dd5a][f_14bc_5e60(p)] = 0;
    }
    if (d_60ae_d920 == 0 && f_14bc_6f7c(p) == 0) {
        if (f_14bc_2cc0(d_60ae_dd5a) && !d_60ae_d90f) {
            if (d_60ae_d910)
                strcpy(what, "returns from his disciplinary ban.");
            else if (!f_14bc_5e32(p))
                sprintf(what, "resumes training at %d%% match fitness.", d_471b_0000[21][p]);
            else
                strcpy(what, "resumes training.");
            sprintf(title, "%s %ssquad news", (char far *)d_60ae_b572[d_60ae_dd5a],
                    f_14bc_5e32(p) ? "reserve " : "");
            sprintf(text, "%s %s", f_14bc_4703(p), what);
            f_14bc_5bfe(d_60ae_dd5a, title, text);
        }
        if (!f_14bc_5e32(p) && f_14bc_2cc0(d_471b_0000[18][p]) == 0)
            f_14bc_1365(p);
    }
}

void f_9e77_188c(int p)
{
    char ok;
    char failed;
    char buf[320];

    ok = 0;
    failed = 0;
    d_60ae_da18 = d_471b_0000[18][p];
    d_60ae_d803 = f_1bd3_0d69(11) * 10000 + 100000L;
    if (f_14bc_2cc0(d_60ae_da18) && d_3c35_0000[7][p] == 0xff && d_60ae_d980 == 0 && d_60ae_d920 == 0) {
        d_60ae_da16 = f_1bd3_0d69(7);
        switch (d_60ae_da16) {
        case 0: strcpy(d_2289_2f30, "Norway"); break;
        case 1: strcpy(d_2289_2f30, "Germany"); break;
        case 2: strcpy(d_2289_2f30, "the USA"); break;
        case 3: strcpy(d_2289_2f30, "Italy"); break;
        case 4: strcpy(d_2289_2f30, "Sweden"); break;
        case 5: strcpy(d_2289_2f30, "Canada"); break;
        case 6: strcpy(d_2289_2f30, "Holland"); break;
        }
        do {
            d_60ae_d93f = 0;
            f_14bc_4bd3("Medical Specialist");
            sprintf(buf, " %s injury ", f_14bc_48b4(p));
            f_14bc_3e40(1.0, 4.0, -(d_323f_4c14[2][d_60ae_da18] / 16), d_323f_4c14[2][d_60ae_da18] % 16, 0, buf);
            sprintf(buf, "A top surgeon in %s can operate", d_2289_2f30);
            f_14bc_0ac0(7, buf);
            if (d_60ae_ddbe[p].w.f20)
                strcpy(buf, "Cost is covered by insurance");
            else
                sprintf(buf, "It would cost %ld", d_60ae_d803);
            f_14bc_0ac0(9, buf);
            f_14bc_2f90(12, "", "View Factfile|Last Finances|Accept Offer|Refuse Offer|");
            do {
                d_60ae_d977 = -1;
                f_14bc_3334(3);
                d_60ae_da14 = d_60ae_dda0;
                if (d_60ae_da14 == 0) {
                    do
                        f_a694_49c9(p, -1, 0);
                    while (!d_60ae_d975);
                    d_60ae_d975 = 0;
                    d_60ae_d93f = -1;
                } else if (d_60ae_da14 == 1) {
                    f_7732_0027(d_60ae_da18);
                    d_60ae_d93f = -1;
                } else if (d_60ae_da14 == 2) {
                    if (f_14bc_0c5e()) {
                        if (!d_60ae_ddbe[p].w.f20 && d_60ae_d803 > f_14bc_5af6(d_60ae_da18) * 0.5) {
                            f_14bc_0b30("The board refuse");
                            d_60ae_d977 = 0;
                        } else {
                            sprintf(buf, "%s has the operation", f_14bc_48b4(p));
                            f_14bc_0b30(buf);
                            ok = -1;
                            if (f_1bd3_0d69(8) == 0) {
                                f_14bc_0b30("But it is unsuccessful");
                                failed = -1;
                            } else
                                f_14bc_0b30("It is successful");
                        }
                    } else
                        d_60ae_d977 = 0;
                } else if (d_60ae_da14 == 3) {
                    if (f_14bc_0c5e())
                        f_14bc_0b30("The offer is refused");
                    else
                        d_60ae_d977 = 0;
                }
            } while (!d_60ae_d977);
        } while (d_60ae_d93f != 0);
    } else if (d_60ae_ddbe[p].w.f20
               || d_471b_0000[23][p] < 3 && f_14bc_5af6(d_60ae_da18) >= d_60ae_d803) {
        ok = -1;
        if (f_1bd3_0d69(8) == 0)
            failed = -1;
    }
    if (ok && !d_60ae_ddbe[p].w.f20) {
        d_60ae_fade = f_1bd3_1617(d_60ae_fde2, 1);
        d_60ae_fade[13][d_60ae_da18] += d_60ae_d803;
    }
    if (ok == 0 && f_1bd3_0d69(4) == 0 || ok && failed)
        d_60ae_ddbe[p].w.f17 = 1;
}

void f_9e77_1cd0(int p)
{
    d_60ae_dbae = 50 - (8.5 - d_323f_4c14[0][d_471b_0000[18][p]]) * 5;
    if (d_60ae_dbae > f_1bd3_0d69(101))
        d_60ae_dbc6 = f_1bd3_0d69(20);
    else
        d_60ae_dbc6 = -f_1bd3_0d69(20);
    d_60ae_d994 = f_1bd3_1307(d_471b_0000[0][p] - 25, 10);
    d_60ae_d992 = f_1bd3_1369(d_471b_0000[0][p] + 25, d_471b_0000[9][p] + 25);
    d_471b_0000[15][p] = f_1bd3_1307(f_1bd3_1369(d_471b_0000[15][p] + d_60ae_dbc6, d_60ae_d992), d_60ae_d994);
}

void f_9e77_1dce(void)
{
    char title[80];
    char text[180];
    int wage[30];

    for (d_60ae_dd5a = 0; d_60ae_dd5a <= 79; d_60ae_dd5a++) {
        d_60ae_d7cb = f_a3de_21b9(d_60ae_dd5a) - d_323f_3f94[0][d_60ae_dd5a];
        if (d_60ae_d7cb < 0) {
            d_60ae_fade = f_1bd3_1617(d_60ae_fde2, 1);
            d_60ae_fade[3][d_60ae_dd5a] += labs(d_60ae_d7cb) * 0.0005;
            d_60ae_d90c = 0;
        } else {
            d_60ae_fade = f_1bd3_1617(d_60ae_fde2, 1);
            d_60ae_fade[10][d_60ae_dd5a] += d_60ae_d7cb * 0.004;
            d_60ae_d90c = -1;
        }
        switch (d_60ae_dd5a / 20) {
        case 0:
            d_60ae_d7c7 = 30000;
            d_60ae_fade = f_1bd3_1617(d_60ae_fde2, 1);
            d_60ae_fade[6][d_60ae_dd5a] += f_1bd3_0d69(5000) + 10000;
            d_60ae_fade[13][d_60ae_dd5a] += f_1bd3_0d69(5000) + 20000;
            break;
        case 1:
            d_60ae_d7c7 = 10000;
            d_60ae_fade = f_1bd3_1617(d_60ae_fde2, 1);
            d_60ae_fade[6][d_60ae_dd5a] += f_1bd3_0d69(2500) + 5000;
            d_60ae_fade[13][d_60ae_dd5a] += f_1bd3_0d69(5000) + 5000;
            break;
        case 2:
            d_60ae_d7c7 = 5000;
            d_60ae_fade = f_1bd3_1617(d_60ae_fde2, 1);
            d_60ae_fade[6][d_60ae_dd5a] += f_1bd3_0d69(2500) + 2500;
            d_60ae_fade[13][d_60ae_dd5a] += f_1bd3_0d69(2000) + 2000;
            break;
        case 3:
            d_60ae_d7c7 = 2500;
            d_60ae_fade = f_1bd3_1617(d_60ae_fde2, 1);
            d_60ae_fade[6][d_60ae_dd5a] += f_1bd3_0d69(1250) + 1250;
            d_60ae_fade[13][d_60ae_dd5a] += f_1bd3_0d69(1000) + 2000;
            break;
        }
        d_60ae_fade = f_1bd3_1617(d_60ae_fde2, 1);
        if (d_60ae_dd9c < 6)
            d_60ae_fade[0][d_60ae_dd5a] += d_323f_4c14[1][d_60ae_dd5a] / (f_14bc_6b14(d_60ae_dd5a) * 4) * 30000
                + f_1bd3_0d69(10000) - f_1bd3_0d69(10000);
        else
            d_60ae_fade[4][d_60ae_dd5a] += d_60ae_d7c7;
        d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 0);
        for (d_60ae_dd92 = 0; d_60ae_dd92 <= d_323f_4c14[7][d_60ae_dd5a] - 1; d_60ae_dd92++)
            wage[d_60ae_dd92] = d_60ae_fae6[4][d_471b_b7a8[d_60ae_dd5a][d_60ae_dd92]];
        for (d_60ae_dd92 = 0; d_60ae_dd92 <= d_323f_4c14[7][d_60ae_dd5a] - 1; d_60ae_dd92++) {
            d_60ae_dd84 = d_471b_b7a8[d_60ae_dd5a][d_60ae_dd92];
            d_60ae_fade = f_1bd3_1617(d_60ae_fde2, 1);
            d_60ae_fade[7][d_60ae_dd5a] += wage[d_60ae_dd92];
            if (d_60ae_ddbe[d_60ae_dd84].w.f20) {
                d_60ae_d803 = f_9107_1391(d_60ae_dd84);
                d_60ae_fade = f_1bd3_1617(d_60ae_fde2, 1);
                d_60ae_fade[13][d_60ae_dd5a] += d_60ae_d803;
            }
            d_60ae_fade = f_1bd3_1617(d_60ae_fde2, 1);
            if (d_60ae_ddbe[d_60ae_dd84].w.f25)
                d_60ae_fade[13][d_60ae_dd5a] += 10000;
            if (d_60ae_ddbe[d_60ae_dd84].w.f26)
                d_60ae_fade[13][d_60ae_dd5a] += 5000;
            if (d_60ae_ddbe[d_60ae_dd84].w.f27)
                d_60ae_fade[13][d_60ae_dd5a] += 3000;
        }
        d_60ae_fade = f_1bd3_1617(d_60ae_fde2, 1);
        d_60ae_fade[11][d_60ae_dd5a] += d_323f_4c14[1][d_60ae_dd5a] * 200 / (1 << d_60ae_dd5a / 20);
        d_60ae_d7c3 = 0;
        d_60ae_fade = f_1bd3_1617(d_60ae_fde2, 0);
        for (d_60ae_dd0e = 0; d_60ae_dd0e <= 13; d_60ae_dd0e++) {
            if (d_60ae_dd0e <= 6)
                d_60ae_d7c3 += d_60ae_fade[d_60ae_dd0e][d_60ae_dd5a];
            else if (d_60ae_dd0e != 8)
                d_60ae_d7c3 -= d_60ae_fade[d_60ae_dd0e][d_60ae_dd5a];
        }
        d_60ae_fade = f_1bd3_1617(d_60ae_fde2, 1);
        if (d_60ae_d7c3 > 0)
            d_60ae_fade[8][d_60ae_dd5a] += d_60ae_d7c3 * 0.4;
        d_60ae_fade = f_1bd3_1617(d_60ae_fde2, 0);
        for (d_60ae_dd0e = 0; d_60ae_dd0e <= 13; d_60ae_dd0e++) {
            if (d_60ae_dd0e <= 6)
                d_323f_3f94[0][d_60ae_dd5a] += d_60ae_fade[d_60ae_dd0e][d_60ae_dd5a];
            else
                d_323f_3f94[0][d_60ae_dd5a] -= d_60ae_fade[d_60ae_dd0e][d_60ae_dd5a];
        }
        if (f_a3de_21b9(d_60ae_dd5a) + f_1bd3_0d69(100000) + 250000 < d_60ae_d7cb) {
            switch (d_60ae_dd5a / 20) {
            case 0:
                d_60ae_d7bf = f_1bd3_0d69(6) * 100000 + 500000;
                break;
            case 1:
                d_60ae_d7bf = f_1bd3_0d69(6) * 50000 + 250000;
                break;
            case 2:
                d_60ae_d7bf = f_1bd3_0d69(6) * 25000 + 125000;
                break;
            case 3:
                d_60ae_d7bf = f_1bd3_0d69(6) * 12500 + 62500;
                break;
            }
            d_60ae_d7bf += d_60ae_d7cb;
            d_60ae_d7bf = d_60ae_d7bf / 10000 * 10000;
            sprintf(title, "%s takeover!", (char far *)d_60ae_b572[d_60ae_dd5a]);
            sprintf(text, "%s have been rescued by a %ld takeover deal. ", (char far *)d_60ae_b572[d_60ae_dd5a], d_60ae_d7bf);
            f_14bc_5bfe(d_60ae_dd5a, title, text);
            d_60ae_fade = f_1bd3_1617(d_60ae_fde2, 1);
            d_60ae_fade[6][d_60ae_dd5a] += d_60ae_d7bf;
            d_323f_3f94[0][d_60ae_dd5a] += d_60ae_d7bf;
            if (d_323f_4c14[6][d_60ae_dd5a] < f_1bd3_0d69(31) + 20)
                f_9107_3ff7(d_60ae_dd5a, 0);
        } else if (f_a3de_21b9(d_60ae_dd5a) < d_60ae_d7cb) {
            if (f_14bc_2cc0(d_60ae_dd5a))
                f_14bc_5bfe(d_60ae_dd5a, f_14bc_490d(d_323f_47b4[d_60ae_dd5a], 0),
                    "The club is in severe financial trouble, and you are urged to sell players.");
        } else if (f_a3de_21b9(d_60ae_dd5a) / 2 < d_60ae_d7cb) {
            if (f_14bc_2cc0(d_60ae_dd5a))
                f_14bc_5bfe(d_60ae_dd5a, f_14bc_490d(d_323f_47b4[d_60ae_dd5a], 0),
                    "The board is concerned at the club's financial situation.");
        }
        d_60ae_fade = f_1bd3_1617(d_60ae_fde2, 1);
        for (d_60ae_dd0e = 0; d_60ae_dd0e <= 13; d_60ae_dd0e++)
            (d_60ae_fade + 16)[d_60ae_dd0e][d_60ae_dd5a] = d_60ae_fade[d_60ae_dd0e][d_60ae_dd5a];
    }
}

/* the international squads: picks the senior and under-21 squads of the five home nations */
void f_9e77_28e8(void)
{
    unsigned char far *p;
    unsigned char nation[5] = { 0, 25, 9, 10, 32 };
    char title[80];
    char text[180];
    char u21[20];
    unsigned i;

    f_14bc_0b83("New international squads|have been announced");
    d_60ae_dd84 = 0;
    do {
        d_60ae_ddbe[d_60ae_dd84].a.f18 = 0;
        d_60ae_ddbe[d_60ae_dd84].a.f19 = 0;
        if (d_60ae_dda4 - 1 == d_60ae_dd84)
            d_60ae_dd84 = 1700;
        else
            d_60ae_dd84++;
    } while (d_60ae_dda2 + 1699 >= d_60ae_dd84);
    for (d_60ae_dd32 = 0; d_60ae_dd32 <= 1; d_60ae_dd32++) {
        for (d_60ae_db82 = 0; d_60ae_db82 <= 4; d_60ae_db82++) {
            p = d_2276_0000;
            for (i = 0; i <= 21; i++) {
                d_60ae_dd2e = *p++;
                d_60ae_da10 = -1;
                d_60ae_d90b = 0;
                do {
                    for (d_60ae_dcac = 1; d_60ae_dcac <= 100; d_60ae_dcac++) {
                        d_60ae_fada = f_1bd3_1617(d_60ae_fde0, 0);
                        d_60ae_dd84 = d_60ae_fada[d_60ae_db82][d_60ae_dcac - 1];
                        if (d_60ae_dd84 > -1 && !d_60ae_ddbe[d_60ae_dd84].a.f18 && d_471b_0000[20][d_60ae_dd84] == 0 &&
                            (d_471b_0000[21][d_60ae_dd84] > 90 || d_60ae_d90b != 0 || d_60ae_dd9c < 8) &&
                            (d_60ae_dd32 == 0 || (d_60ae_dd32 == 1 && d_471b_0000[17][d_60ae_dd84] < 22)) &&
                            (f_14bc_679d(d_60ae_dd84, d_60ae_dd2e) || (d_60ae_d90b != 0 && d_60ae_dd2e > 1))) {
                            d_60ae_dc1a = (d_471b_0000[0][d_60ae_dd84] * 2 + d_471b_0000[15][d_60ae_dd84] * 2) / 4;
                            if ((d_3c35_0000[0][d_60ae_dd84] > d_60ae_dd78 / 3 || d_60ae_d90b != 0) &&
                                (d_60ae_da10 == -1 || d_60ae_dc1a > d_60ae_da0e)) {
                                d_60ae_da0e = d_60ae_dc1a;
                                d_60ae_da10 = d_60ae_dd84;
                            }
                        }
                    }
                    d_60ae_d977 = -1;
                    if (d_60ae_da10 == -1 && d_60ae_d90b == 0) {
                        d_60ae_d90b = -1;
                        d_60ae_d977 = 0;
                    }
                } while (!d_60ae_d977);
                d_2289_be68[d_60ae_db82][d_60ae_dd32][i] = d_60ae_da10;
                if (d_60ae_da10 > -1) {
                    d_60ae_ddbe[d_60ae_da10].a.f18 = 1;
                    d_60ae_ddbe[d_60ae_da10].a.f19 = d_60ae_dd32 == 1;
                    if (d_60ae_dd32 == 0) {
                        d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 1);
                        d_60ae_fad2[2][d_60ae_da10]++;
                    }
                    d_60ae_dd5a = d_471b_0000[18][d_60ae_da10];
                    if (f_14bc_2cc0(d_60ae_dd5a)) {
                        sprintf(title, "%s squad news", (char far *)d_60ae_b572[d_60ae_dd5a]);
                        strcpy(u21, "");
                        if (d_60ae_dd32 == 1)
                            strcpy(u21, "under-21 ");
                        sprintf(text, "%s has been called up to the %s %ssquad.", f_14bc_4703(d_60ae_da10),
                                d_54d9_0000[nation[d_60ae_db82]], u21);
                        f_14bc_5bfe(d_60ae_dd5a, title, text);
                    }
                }
            }
        }
    }
}

/* loads the saved game (quick == 0) or the quick-start game (quick == 1) */
void f_9e77_2c88(char quick)
{
    FILE *fp;

    f_1bd3_1a23(3);
    d_2289_4ba6[0] = 0;
    if (quick == 0)
        f_9e77_49ee("Ok - Loading Saved Game");
    else
        f_9e77_49ee("Ok - Loading Quick-Start Game");
    fp = fopen(d_2289_00a0, "rb");
    d_60ae_ddb6 = f_1bd3_1617(d_60ae_fdd6, 1);
    fread(d_60ae_ddb6, 8282, 1, fp);
    fread(d_2289_1e28, 820, 1, fp);
    fread(d_2289_7b16, 6880, 1, fp);
    d_60ae_ddae = f_1bd3_1617(d_60ae_fdd2, 1);
    fread(d_60ae_ddae, 604, 1, fp);
    d_60ae_ddaa = f_1bd3_1617(d_60ae_fdd0, 1);
    fread(d_60ae_ddaa, 604, 1, fp);
    d_60ae_dda6 = f_1bd3_1617(d_60ae_fdce, 1);
    fread(d_60ae_dda6, 604, 1, fp);
    fread(d_2289_4b06, 160, 1, fp);
    fread(d_60ae_b6ba, 920, 1, fp);
    fread(d_60ae_b572, 164, 1, fp);
    fread(d_60ae_b616, 164, 1, fp);
    f_9e77_4f31();
    f_9e77_478b(fp);
    fread(d_471b_0000, 44640, 1, fp);
    fread(d_3c35_0000, 44640, 1, fp);
    d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 1);
    fread(d_60ae_fad2, 18600, 1, fp);
    fread(d_323f_653a, 14880, 1, fp);
    d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 1);
    fread(d_60ae_fae6, 18600, 1, fp);
    d_60ae_faf2 = f_1bd3_1617(d_60ae_fdec, 1);
    fread(d_60ae_faf2, 7440, 1, fp);
    fread(d_2289_5658, 640, 1, fp);
    fread(d_323f_4c14, 5904, 1, fp);
    fread(d_2289_de84, 140, 1, fp);
    fread(d_54d9_0904, 2300, 1, fp);
    fread(d_323f_4494, 1920, 1, fp);
    fread(d_2289_a0c6, 6400, 1, fp);
    fread(d_471b_b7a8, 4160, 1, fp);
    d_60ae_face = f_1bd3_1617(d_60ae_fdda, 1);
    fread(d_60ae_face, 5120, 1, fp);
    fread(d_2289_5470, 208, 1, fp);
    fread(d_323f_3f94, 1280, 1, fp);
    fread(d_323f_1c08, 9100, 1, fp);
    d_60ae_fae2 = f_1bd3_1617(d_60ae_fde4, 1);
    fread(d_60ae_fae2, 3900, 1, fp);
    d_60ae_faee = f_1bd3_1617(d_60ae_fdea, 1);
    fread(d_60ae_faee, 2600, 1, fp);
    d_60ae_faea = f_1bd3_1617(d_60ae_fde8, 1);
    fread(d_60ae_faea, 1300, 1, fp);
    fread(d_323f_0e8a, 3444, 1, fp);
    fread(d_323f_0592, 2296, 1, fp);
    fread(d_471b_c7e8, 4160, 1, fp);
    fread(d_323f_0000, 1280, 1, fp);
    fread(d_2289_fb10, 80, 1, fp);
    fread(d_54d9_1200, 15680, 1, fp);
    fread(d_471b_b4e0, 392, 1, fp);
    d_60ae_fade = f_1bd3_1617(d_60ae_fde2, 1);
    fread(d_60ae_fade, 10240, 1, fp);
    fread(d_2289_f108, 2560, 1, fp);
    fread(d_2289_ec08, 1280, 1, fp);
    fread(d_2289_d704, 1920, 1, fp);
    fread(d_471b_b01c, 640, 1, fp);
    fread(d_2278_0000, 40, 1, fp);
    fread(d_227b_0000, 120, 1, fp);
    fread(d_2289_d678, 80, 1, fp);
    fread(d_2289_cf5c, 1820, 1, fp);
    fread(d_2289_c46c, 2800, 1, fp);
    d_60ae_fad6 = f_1bd3_1617(d_60ae_fdde, 1);
    fread(d_60ae_fad6, 2240, 1, fp);
    fread(d_2289_c020, 560, 1, fp);
    fread(d_2289_be58, 16, 1, fp);
    fread(d_2289_be38, 32, 1, fp);
    fread(d_2289_be30, 8, 1, fp);
    fread(d_2289_be20, 16, 1, fp);
    fread(d_2289_be68, 440, 1, fp);
    d_60ae_fada = f_1bd3_1617(d_60ae_fde0, 1);
    fread(d_60ae_fada, 1000, 1, fp);
    fread(d_2289_be10, 16, 1, fp);
    fread(d_2289_bde0, 48, 1, fp);
    fread(d_2289_bda4, 60, 1, fp);
    fread(d_2289_bb10, 180, 1, fp);
    fread(d_2289_c250, 540, 1, fp);
    fread(d_54d9_4f40, 280, 1, fp);
    fread(d_2289_58d8, 768, 1, fp);
    fread(d_471b_d8c8, 16, 1, fp);
    fread(&d_60ae_dd9c, 2, 1, fp);
    fread(&d_60ae_dd78, 2, 1, fp);
    fread(&d_60ae_dd98, 2, 1, fp);
    fread(&d_60ae_dc7a, 2, 1, fp);
    fread(&d_60ae_dd96, 2, 1, fp);
    fread(&d_60ae_dd94, 2, 1, fp);
    fread(&d_60ae_dd90, 2, 1, fp);
    fread(&d_60ae_dd8e, 2, 1, fp);
    fread(&d_60ae_dd8c, 2, 1, fp);
    fread(&d_60ae_dd8a, 2, 1, fp);
    fread(&d_60ae_dd80, 2, 1, fp);
    fread(&d_60ae_dd82, 2, 1, fp);
    fread(&d_60ae_dd28, 2, 1, fp);
    fread(&d_60ae_dd7e, 2, 1, fp);
    fread(&d_60ae_dd7c, 2, 1, fp);
    fread(&d_60ae_dd7a, 2, 1, fp);
    fread(&d_2289_fb0e, 1, 1, fp);
    fread(&d_2289_fb0f, 1, 1, fp);
    fread(d_2289_fb0c, 1, 1, fp);
    fread(&d_2289_fb0d, 1, 1, fp);
    fread(d_2289_fb08, 1, 1, fp);
    fread(&d_2289_fb09, 1, 1, fp);
    fread(&d_2289_fb0a, 1, 1, fp);
    fread(&d_2289_fb0b, 1, 1, fp);
    fread(&d_60ae_dce6, 2, 1, fp);
    fread(&d_60ae_dce8, 2, 1, fp);
    fread(&d_2289_5bd8, 1, 1, fp);
    fread(&d_2289_5bd9, 1, 1, fp);
    fread(&d_2289_5bda, 1, 1, fp);
    fread(&d_2289_5bdb, 1, 1, fp);
    fread(&d_60ae_d97b, 1, 1, fp);
    fread(&d_323f_1bfe, 2, 1, fp);
    fread(&d_323f_1c00, 2, 1, fp);
    fread(&d_323f_1c02, 2, 1, fp);
    fread(&d_323f_1c04, 2, 1, fp);
    fread(d_2289_2210, 40, 1, fp);
    fread(d_2289_95f6, 368, 1, fp);
    fread(d_2289_7986, 400, 1, fp);
    fread(&d_60ae_dda4, 2, 1, fp);
    fread(&d_60ae_dda2, 2, 1, fp);
    fread(&d_60ae_d8f4, 1, 1, fp);
    fread(&d_60ae_966b, 4, 1, fp);
    fclose(fp);
    f_1bd3_1a23(2);
}

/* saves the game */
void f_9e77_3a0d(void)
{
    FILE *fp;

    f_1bd3_1a23(3);
    d_2289_4ba6[0] = 0;
    f_9e77_49ee("Ok - Saving Data");
    fp = fopen(d_2289_00a0, "wb");
    if (fp != NULL) {
        d_60ae_ddb6 = f_1bd3_1617(d_60ae_fdd6, 0);
        fwrite(d_60ae_ddb6, 8282, 1, fp);
        fwrite(d_2289_1e28, 820, 1, fp);
        fwrite(d_2289_7b16, 6880, 1, fp);
        d_60ae_ddae = f_1bd3_1617(d_60ae_fdd2, 0);
        fwrite(d_60ae_ddae, 604, 1, fp);
        d_60ae_ddaa = f_1bd3_1617(d_60ae_fdd0, 0);
        fwrite(d_60ae_ddaa, 604, 1, fp);
        d_60ae_dda6 = f_1bd3_1617(d_60ae_fdce, 0);
        fwrite(d_60ae_dda6, 604, 1, fp);
        fwrite(d_2289_4b06, 160, 1, fp);
        f_9e77_4f2c();
        fwrite(d_60ae_b6ba, 920, 1, fp);
        fwrite(d_60ae_b572, 164, 1, fp);
        fwrite(d_60ae_b616, 164, 1, fp);
        f_9e77_4f31();
        f_9e77_47ab(fp);
        fwrite(d_471b_0000, 44640, 1, fp);
        fwrite(d_3c35_0000, 44640, 1, fp);
        d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 0);
        fwrite(d_60ae_fad2, 18600, 1, fp);
        fwrite(d_323f_653a, 14880, 1, fp);
        d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 0);
        fwrite(d_60ae_fae6, 18600, 1, fp);
        d_60ae_faf2 = f_1bd3_1617(d_60ae_fdec, 0);
        fwrite(d_60ae_faf2, 7440, 1, fp);
        fwrite(d_2289_5658, 640, 1, fp);
        fwrite(d_323f_4c14, 5904, 1, fp);
        fwrite(d_2289_de84, 140, 1, fp);
        fwrite(d_54d9_0904, 2300, 1, fp);
        fwrite(d_323f_4494, 1920, 1, fp);
        fwrite(d_2289_a0c6, 6400, 1, fp);
        fwrite(d_471b_b7a8, 4160, 1, fp);
        d_60ae_face = f_1bd3_1617(d_60ae_fdda, 0);
        fwrite(d_60ae_face, 5120, 1, fp);
        fwrite(d_2289_5470, 208, 1, fp);
        fwrite(d_323f_3f94, 1280, 1, fp);
        fwrite(d_323f_1c08, 9100, 1, fp);
        d_60ae_fae2 = f_1bd3_1617(d_60ae_fde4, 0);
        fwrite(d_60ae_fae2, 3900, 1, fp);
        d_60ae_faee = f_1bd3_1617(d_60ae_fdea, 0);
        fwrite(d_60ae_faee, 2600, 1, fp);
        d_60ae_faea = f_1bd3_1617(d_60ae_fde8, 0);
        fwrite(d_60ae_faea, 1300, 1, fp);
        fwrite(d_323f_0e8a, 3444, 1, fp);
        fwrite(d_323f_0592, 2296, 1, fp);
        fwrite(d_471b_c7e8, 4160, 1, fp);
        fwrite(d_323f_0000, 1280, 1, fp);
        fwrite(d_2289_fb10, 80, 1, fp);
        fwrite(d_54d9_1200, 15680, 1, fp);
        fwrite(d_471b_b4e0, 392, 1, fp);
        d_60ae_fade = f_1bd3_1617(d_60ae_fde2, 0);
        fwrite(d_60ae_fade, 10240, 1, fp);
        fwrite(d_2289_f108, 2560, 1, fp);
        fwrite(d_2289_ec08, 1280, 1, fp);
        fwrite(d_2289_d704, 1920, 1, fp);
        fwrite(d_471b_b01c, 640, 1, fp);
        fwrite(d_2278_0000, 40, 1, fp);
        fwrite(d_227b_0000, 120, 1, fp);
        fwrite(d_2289_d678, 80, 1, fp);
        fwrite(d_2289_cf5c, 1820, 1, fp);
        fwrite(d_2289_c46c, 2800, 1, fp);
        d_60ae_fad6 = f_1bd3_1617(d_60ae_fdde, 0);
        fwrite(d_60ae_fad6, 2240, 1, fp);
        fwrite(d_2289_c020, 560, 1, fp);
        fwrite(d_2289_be58, 16, 1, fp);
        fwrite(d_2289_be38, 32, 1, fp);
        fwrite(d_2289_be30, 8, 1, fp);
        fwrite(d_2289_be20, 16, 1, fp);
        fwrite(d_2289_be68, 440, 1, fp);
        d_60ae_fada = f_1bd3_1617(d_60ae_fde0, 0);
        fwrite(d_60ae_fada, 1000, 1, fp);
        fwrite(d_2289_be10, 16, 1, fp);
        fwrite(d_2289_bde0, 48, 1, fp);
        fwrite(d_2289_bda4, 60, 1, fp);
        fwrite(d_2289_bb10, 180, 1, fp);
        fwrite(d_2289_c250, 540, 1, fp);
        fwrite(d_54d9_4f40, 280, 1, fp);
        fwrite(d_2289_58d8, 768, 1, fp);
        fwrite(d_471b_d8c8, 16, 1, fp);
        fwrite(&d_60ae_dd9c, 2, 1, fp);
        fwrite(&d_60ae_dd78, 2, 1, fp);
        fwrite(&d_60ae_dd98, 2, 1, fp);
        fwrite(&d_60ae_dc7a, 2, 1, fp);
        fwrite(&d_60ae_dd96, 2, 1, fp);
        fwrite(&d_60ae_dd94, 2, 1, fp);
        fwrite(&d_60ae_dd90, 2, 1, fp);
        fwrite(&d_60ae_dd8e, 2, 1, fp);
        fwrite(&d_60ae_dd8c, 2, 1, fp);
        fwrite(&d_60ae_dd8a, 2, 1, fp);
        fwrite(&d_60ae_dd80, 2, 1, fp);
        fwrite(&d_60ae_dd82, 2, 1, fp);
        fwrite(&d_60ae_dd28, 2, 1, fp);
        fwrite(&d_60ae_dd7e, 2, 1, fp);
        fwrite(&d_60ae_dd7c, 2, 1, fp);
        fwrite(&d_60ae_dd7a, 2, 1, fp);
        fwrite(&d_2289_fb0e, 1, 1, fp);
        fwrite(&d_2289_fb0f, 1, 1, fp);
        fwrite(d_2289_fb0c, 1, 1, fp);
        fwrite(&d_2289_fb0d, 1, 1, fp);
        fwrite(d_2289_fb08, 1, 1, fp);
        fwrite(&d_2289_fb09, 1, 1, fp);
        fwrite(&d_2289_fb0a, 1, 1, fp);
        fwrite(&d_2289_fb0b, 1, 1, fp);
        fwrite(&d_60ae_dce6, 2, 1, fp);
        fwrite(&d_60ae_dce8, 2, 1, fp);
        fwrite(&d_2289_5bd8, 1, 1, fp);
        fwrite(&d_2289_5bd9, 1, 1, fp);
        fwrite(&d_2289_5bda, 1, 1, fp);
        fwrite(&d_2289_5bdb, 1, 1, fp);
        fwrite(&d_60ae_d97b, 1, 1, fp);
        fwrite(&d_323f_1bfe, 2, 1, fp);
        fwrite(&d_323f_1c00, 2, 1, fp);
        fwrite(&d_323f_1c02, 2, 1, fp);
        fwrite(&d_323f_1c04, 2, 1, fp);
        fwrite(d_2289_2210, 40, 1, fp);
        fwrite(d_2289_95f6, 368, 1, fp);
        fwrite(d_2289_7986, 400, 1, fp);
        fwrite(&d_60ae_dda4, 2, 1, fp);
        fwrite(&d_60ae_dda2, 2, 1, fp);
        fwrite(&d_60ae_d8f4, 1, 1, fp);
        fwrite(&d_60ae_966b, 4, 1, fp);
        fclose(fp);
        f_1bd3_0dbc(150);
    }
    d_60ae_dd9e = -1;
}

void f_9e77_478b(FILE *fp)
{
    fread(d_60ae_ddbe, 0x1d10, 1, fp);
}

void f_9e77_47ab(FILE *fp)
{
    fwrite(d_60ae_ddbe, 0x1d10, 1, fp);
}

void f_9e77_47cb(void)
{
    FILE *fp;
    unsigned char c;

    f_1bd3_1a23(1);
    d_2289_4ba6[0] = 0;
    fp = fopen("hiscores", "rb");
    for (c = 0; c <= 1; c = c + 1)
        for (d_60ae_dd60 = 0; d_60ae_dd60 <= 19; d_60ae_dd60++) {
            d_60ae_ddb2 = f_1bd3_1617(d_60ae_fdd4, 1);
            f_1bd3_0c9a(fp, d_60ae_ddb2 + d_60ae_dd60 * 160 + c * 80);
            f_1bd3_0c9a(fp, d_60ae_ddb2 + d_60ae_dd60 * 160 + c * 80 + 3200);
        }
    fread(d_2289_eb68, 160, 1, fp);
    fclose(fp);
}

void f_9e77_48d3(void)
{
    FILE *fp;
    unsigned char c;

    f_1bd3_1a23(1);
    d_2289_4ba6[0] = 0;
    f_9e77_49ee("Saving Hall of Fame");
    fp = fopen("hiscores", "wb");
    if (fp != NULL) {
        for (c = 0; c <= 1; c = c + 1)
            for (d_60ae_dd60 = 0; d_60ae_dd60 <= 19; d_60ae_dd60++) {
                d_60ae_ddb2 = f_1bd3_1617(d_60ae_fdd4, 0);
                f_1bd3_0cce(fp, d_60ae_ddb2 + d_60ae_dd60 * 160 + c * 80);
                f_1bd3_0cce(fp, d_60ae_ddb2 + d_60ae_dd60 * 160 + c * 80 + 3200);
            }
        fwrite(d_2289_eb68, 160, 1, fp);
        fclose(fp);
    }
}

void f_9e77_49ee(char far *s)
{
    if (!d_2289_4ba6[0])
        f_14bc_4bd3("");
    f_1bd3_1a28();
    if (_fstrcmp(d_2289_4ba6, s) != 0) {
        f_1bd3_08cb(16);
        f_1bd3_08e1(20, 0x79, 0x134, 0x59);
        f_1bd3_08cb(20);
        f_1bd3_08e1(16, 0x75, 0x130, 0x55);
        f_1bd3_08d6(28);
        f_1bd3_0fe2(16, 0x75, 16, 0x55);
        f_1bd3_0fe2(16, 0x55, 0x130, 0x55);
        f_1bd3_08d6(16);
        f_1bd3_0fe2(0x130, 0x55, 0x130, 0x75);
        f_1bd3_0fe2(0x130, 0x75, 16, 0x75);
        f_14bc_3c75(-1.0, 12.5, 1, s);
        _fstrcpy(d_2289_4ba6, s);
    }
}

void f_9e77_4b29(int a, int b)
{
    FILE *fp;
    char x[280];
    char y[280];

    for (d_60ae_dd92 = 0; d_60ae_dd92 <= 12; d_60ae_dd92++) {
        f_1bd3_13a3(&d_2289_cf5c[d_60ae_dd92][a], &d_2289_cf5c[d_60ae_dd92][b], 1);
        if (d_60ae_dd92 < 10) {
            f_1bd3_13a3(&d_2289_c46c[d_60ae_dd92][a], &d_2289_c46c[d_60ae_dd92][b], 2);
            if (d_60ae_dd92 < 4) {
                d_60ae_fad6 = f_1bd3_1617(d_60ae_fdde, 1);
                f_1bd3_13a3(&d_60ae_fad6[d_60ae_dd92][a], &d_60ae_fad6[d_60ae_dd92][b], 4);
            }
        }
    }
    f_1bd3_13a3(&d_2289_c020[a], &d_2289_c020[b], 4);
    f_1bd3_1a23(2);
    fp = fopen(d_2289_0028, "rb+");
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

void f_9e77_4d7d(int a, int b)
{
    unsigned k, j, i;

    for (k = 0; k <= 6; k++)
        for (i = 0; i <= 15; i++)
            if (d_2289_58d8[0][i][k] > 0)
                for (j = 1; j <= 2; j++) {
                    if (d_2289_58d8[j][i][k] == a)
                        d_2289_58d8[j][i][k] = b;
                    else if (d_2289_58d8[j][i][k] == b)
                        d_2289_58d8[j][i][k] = a;
                }
}

void f_9e77_4e5e(int n)
{
    char buf[60];

    for (d_60ae_dce0 = 0; d_60ae_dce0 <= 1; d_60ae_dce0++) {
        if (d_60ae_dce0 == 0)
            strcpy(buf, "First Name ?");
        else
            strcpy(buf, "Surname ?");
        f_14bc_4d4c(2.625, d_60ae_dce0 * 3 + 7, buf);
        if (d_2289_4ae8[0] == 0) {
            if (d_60ae_dce0 == 0)
                strcpy(d_2289_4ae8, "Player");
            else
                strcpy(d_2289_4ae8, f_14bc_4a14(n + 1));
        }
        strcpy(d_2289_4b06[d_60ae_dce0][n], d_2289_4ae8);
    }
}

void f_9e77_4f2c(void)
{
}

void f_9e77_4f31(void)
{
}
