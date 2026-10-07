/* @at 9a9e:0000 */
/* @data 61eb:5504 */
/* @module */

/* Overlay 9a9e (CM94's A330.C, CM93's 9E77.C, from parts of CM1's 992A.C): printing a team's
 * fixtures and results; the week's squad news (injuries suffered in matches and training,
 * suspensions, bans, cup-tied players and players returning), the performance of the week and
 * fines for foul play; the medical specialist's offer to operate abroad; takeovers that rescue
 * clubs in financial trouble and the board's warnings; Italy's international squads (senior and
 * under-21); loading and saving the game (saved or quick-start) and the hall of fame; swapping
 * clubs' records and history; and asking a player's names. Its data is the function-local
 * initialisers (0f8a's lo/hi ranges, 2611's nations), then its literal pool. Jump optimisation
 * is off (#pragma option -O-) from 155d on, as in CM94. */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

/* the functions, in the reverse order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_9a9e_0000(int team);
void f_9a9e_0469(char far *s);
void f_9a9e_04d4(void);
void f_9a9e_0a62(void);
void f_9a9e_0b9c(void);
void f_9a9e_0cde(int n);
void f_9a9e_0f8a(int p);
void f_9a9e_125e(int p, int a, int b);
void f_9a9e_155d(int p);
void f_9a9e_1772(int p);
void f_9a9e_1b7d(int p);
void f_9a9e_1c83(void);
void f_9a9e_2611(void);
void f_9a9e_29a4(char quick);
void f_9a9e_3510(void);
void f_9a9e_4084(FILE *fp);
void f_9a9e_40a6(FILE *fp);
void f_9a9e_40c8(void);
void f_9a9e_41bc(void);
void f_9a9e_42c4(char far *s);
void f_9a9e_43ba(int a, int b);
void f_9a9e_45df(int a, int b);
void f_9a9e_46c0(int n);
void f_9a9e_4775(void);
void f_9a9e_477e(void);

struct score { unsigned home1 : 4; unsigned away1 : 4; unsigned home2 : 4; unsigned away2 : 4; };
char far *f_1a83_45b4(int player);
char far *f_1a83_4485(int player);
char f_1a83_2ad4(int x);
char f_1a83_2c8b(int player);
char f_1a83_5a4c(int player);
void f_1a83_3a43(float x, float y, int colour, char far *s);
void f_1a83_48f9(char far *title);
void f_1a83_5844(int team, char far *title, char far *text);
void f_215d_088c();
void f_215d_089b();
void f_215d_08aa(int x1, int y1, int x2, int y2);
void f_215d_0904(int x1, int y1, int x2, int y2);
long f_215d_0d96(long n);
char far *f_215d_0e90(char far *s);
int f_215d_13af(int a, int b);
void f_215d_13f1(void far *a, void far *b, int n);
void f_215d_19eb();
void f_6ffe_4764(int team, char far names[][100][20], unsigned char far *comp, unsigned char far *week);
void f_8e0f_1172(int player, char c);
void f_b26d_0b9a(void);
void f_b26d_0ba3(void);
void f_b26d_0bac(char far *s);
void f_b26d_0bd7(char n);
extern char far d_5313_0de8[];
extern char far d_432e_de4f[];
extern char far d_432e_d37b[];
extern char far d_432e_d0ab[];
extern char far d_432e_cf6b[];
extern char far d_432e_cddb[];
extern char far d_432e_b73b[][38];
extern struct score far d_432e_87c8[];
extern long far d_432e_87cc;
extern int far d_432e_87d0[][16];
extern unsigned char far d_432e_8810[][16];
extern int far d_3334_c8f2[][38];
extern unsigned char far d_3334_0000[][1500];
extern unsigned char far d_28d4_1958[][1500];
extern int far d_28d4_106c[];
extern int far d_53fc_138e[][2][100];
extern char near *d_61eb_b0ec[];
extern int d_61eb_d914;
extern int d_61eb_d8a8;
extern int d_61eb_d7b4;
extern int d_61eb_d7b2;
extern int d_61eb_d732;
extern int d_61eb_d632;
extern int d_61eb_d630;
extern int d_61eb_d62e;
extern int d_61eb_d62a;
extern int d_61eb_d61e;
extern int d_61eb_d61a;
extern int d_61eb_d5de;
extern int d_61eb_d5d8;
extern int d_61eb_d5b8;
extern int d_61eb_d5aa;
extern int d_61eb_d5a4;
extern int d_61eb_d5a2;
extern int d_61eb_d58e;
struct flags_a { unsigned char b0; unsigned f8 : 1; unsigned f9 : 1; unsigned : 6; unsigned : 2; unsigned f18 : 1; unsigned f19 : 1; unsigned : 4; unsigned : 0; unsigned f24 : 1; unsigned : 3; unsigned f28 : 1; unsigned : 1; unsigned f30 : 1; unsigned : 1; };
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
union flags { struct flags_a a; struct flags_w w; };
void f_1a83_0e84(int p);
void f_1a83_12f6(int player);
char far *f_1a83_3300(int x);
void f_1a83_5540(int a);
char f_1a83_5a2e(int player);
int f_1a83_5a62(int player);
unsigned char f_1a83_5a80(int player);
char f_1a83_6b4c(int player);
unsigned char f_1a83_6d8b(unsigned char team);
float f_215d_10c4(void);
char far *f_215d_1043(char far *s);
float f_215d_1319(float a, float b);
int f_215d_1343(int a, int b);
void far *f_215d_1629(int handle, int page);
void f_b26d_0652(char club);
void f_ab30_0bf6(int player);
extern char far d_432e_ec37[];
extern char far d_432e_ec38[];
extern char far d_432e_d73d[];
extern unsigned char far d_432e_39fe[][5][16];
extern unsigned char far d_432e_3a2e[][80];
extern int far d_3334_f26e[];
extern int far d_432e_c9ce[];
extern long d_61eb_db71;
extern char d_61eb_d9bf;
extern unsigned char d_61eb_d9ba;
extern int d_61eb_d922;
extern int d_61eb_d920;
extern int d_61eb_d91e;
extern int d_61eb_d91c;
extern int d_61eb_d918;
extern int d_61eb_d88c;
extern int d_61eb_d760;
extern int d_61eb_d75e;
extern int d_61eb_d68c;
extern int d_61eb_d674;
extern int d_61eb_d5e6;
extern struct flags_w far d_432e_45de[];
extern long (far *d_61eb_dbc0)[38];
extern int d_61eb_dc52;
void f_1a83_0b12(int line, char far *s);
void f_1a83_0b7d(char far *s);
char f_1a83_0c63(void);
void f_1a83_1cf2(int p);
void f_1a83_2da6(int n, char far *title, char far *items);
void f_1a83_3122(int last);
void f_1a83_3c08(float x, float y, int bg, int fg, int w, char far *s);
char far *f_1a83_462c(int player);
long f_1a83_5747(int team);
void f_75a4_002a(int team);
void f_a214_4120(int player, int a, char b);
extern int far d_432e_0000[][100];
extern char far * far d_53fc_0371[];
extern long d_61eb_db3d;
extern char d_61eb_da34;
extern char d_61eb_da33;
extern char d_61eb_da23;
extern char d_61eb_da04;
extern char d_61eb_d9ca;
extern char d_61eb_d9c8;
extern int d_61eb_d9aa;
extern int d_61eb_d9a8;
extern int d_61eb_d928;
extern int d_61eb_d926;
extern int d_61eb_d924;
extern int d_61eb_d78e;
extern int d_61eb_d776;
extern int d_61eb_d59e;
char far *f_1a83_4686(int manager, char full);
float f_1a83_66fa(int x);
long f_8e0f_138d(int player);
void f_8e0f_3e07(int club, int a);
long f_9f8d_1ec1(int x);
extern long d_61eb_db81;
extern long d_61eb_db7d;
extern long d_61eb_db79;
extern long d_61eb_db75;
extern char d_61eb_da37;
extern long far d_3334_cc82[][38];
extern int far d_3334_ca6e[];
void f_1a83_0bb7(char far *s);
char f_1a83_633a(int a, int b);
extern char d_61eb_da38;
extern int d_61eb_d92e;
extern int d_61eb_d92c;
extern int d_61eb_d7ba;
extern int d_61eb_d71e;
extern int d_61eb_d60a;
extern int d_61eb_d606;
extern int d_61eb_d59a;
extern int d_61eb_d590;
extern unsigned char (far *d_61eb_dbcc)[1500];
extern int far *d_61eb_dbc4;
extern int d_61eb_dc4e;
extern int d_61eb_dc54;
extern unsigned char far d_432e_0640[][20];
extern int far d_28c3_0000[];
extern float far d_28c6_0000[];
extern int far d_432e_0410[][80];
extern unsigned char far d_3334_f278[][3][16];
extern int far d_3334_8ca0[][1500];
extern unsigned char far d_53fc_09c0[][460];
extern unsigned char far d_53fc_778e[][140];
extern unsigned long d_61eb_91e3;
extern char near *d_61eb_b13c[];
extern char near *d_61eb_b18c[];
extern char d_61eb_da4f;
extern char d_61eb_d9c4;
extern int d_61eb_d6be;
extern int d_61eb_d652;
extern int d_61eb_d650;
extern int d_61eb_d5bc;
extern int d_61eb_d5be;
extern int d_61eb_d5ba;
extern int d_61eb_d610;
extern int d_61eb_d5b2;
extern int d_61eb_d5b0;
extern int d_61eb_d5ae;
extern int d_61eb_d5a6;
extern char (far *d_61eb_dbe8)[151];
extern char (far *d_61eb_dbe4)[151];
extern char (far *d_61eb_dbe0)[151];
extern char (far *d_61eb_dbd8)[101];
extern int (far *d_61eb_dbd0)[2][16];
extern long (far *d_61eb_dbc8)[140];
extern char far *d_61eb_dbbc;
extern int far *d_61eb_dbb4;
extern long far *d_61eb_dbb0;
extern int d_61eb_dc66;
extern int d_61eb_dc64;
extern int d_61eb_dc62;
extern int d_61eb_dc5e;
extern int d_61eb_dc5a;
extern int d_61eb_dc56;
extern int d_61eb_dc50;
extern int d_61eb_dc4c;
extern int d_61eb_dc4a;
void f_215d_0df0(int ticks);
extern int d_61eb_d5a0;
char far *f_1a83_477e(int player);
void f_1a83_4a35(float x, int w, char far *prompt);
void f_215d_0cb3(FILE *fp, char far *buf);
void f_215d_0cee(FILE *fp, char far *s);
void f_215d_1016(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_215d_19f4(void);
extern int d_61eb_d658;
extern int d_61eb_dc60;
extern char far *d_61eb_dbdc;
extern char far d_432e_c369[];
extern int far d_28d4_081c[][26];
extern char far d_5313_de9f[];
extern char far d_5313_deef[];
extern int (far *d_61eb_dbb8)[1500];
struct transfers { int in[6], out[6]; /* the players */ unsigned char in_club[6], out_club[6]; /* the other club */ long in_fee[6], out_fee[6]; /* the fee, 1 for a loan */ unsigned char n_in, n_out; /* how many so far */ };
struct news { int player; char from, to; long fee; };
extern unsigned char far d_28c1_0000[];
extern int far d_432e_35f6[][22];
extern char far * far d_53fc_bce0[];
extern int d_61eb_dc58;
extern char far d_5313_c28d[];
extern char far d_5313_0da7[];
extern long far *d_61eb_dbac;
extern int d_61eb_dc48;
extern char far d_5313_ed13[][82][5];
extern struct transfers far d_5313_69ae[];
extern char far d_5313_c2c9[][4][20];
extern unsigned char far d_432e_1a96[];
extern char far d_5313_b92f[];
extern unsigned char far d_432e_cee2[];
extern int far d_3334_f9f8[][16];
extern int far d_28d4_bd3c[][2][13];
extern int far d_432e_066e[][16];
extern char far d_432e_0b2e[][16];
extern int far d_432e_8000[][4][2][30];
extern char far d_28d4_1398[];
extern int far d_432e_1f1e[];
extern unsigned char far d_432e_1f9e[][140];
extern int far d_432e_26ba[][140];
extern float far d_432e_33c6[];
extern int far d_432e_364e[][4];
extern float far d_432e_365e[][4];
extern int far d_432e_367e[];
extern long far d_432e_3686[];
extern int far d_432e_3696[][4];
extern unsigned char far d_432e_36a6[][2][4];
extern int far d_432e_36d6[][5];
extern unsigned char far d_432e_37f6[][6][5];
extern unsigned char far d_432e_31aa[];
extern int far d_5313_b2eb[3][16][8];
extern int far d_28d4_bc8c[];
extern char far d_432e_0666;
extern char far d_432e_0667;
extern unsigned char far d_432e_0668[];
extern char far d_432e_0669;
extern unsigned char far d_432e_066a[];
extern char far d_432e_066b;
extern char far d_432e_066c;
extern char far d_432e_066d;
extern char far d_5313_861e[];
extern char far d_5313_b2e7[];
extern char far d_5313_b2e8;
extern char far d_5313_b2e9;
extern char far d_5313_b2ea;
extern int far d_432e_f270;
extern int far d_432e_f272;
extern int far d_432e_f274;
extern char far d_432e_66ae[][4][23];
extern struct news far d_5313_848e[];
extern long far d_432e_0d8e[][2];
extern char far d_5313_0e1f[];
extern char far d_5313_0dcf[];
extern char far d_5313_d37b[];
extern char far d_5313_d0ab[];
extern char far d_5313_cf6b[];
extern char far d_5313_cddb[];
extern char far d_5313_b5eb[][80];
extern struct score far d_5313_9a14[];
extern long far d_5313_9a18;
extern int far d_5313_9a1c[][14];
extern unsigned char far d_5313_9a54[][14];
extern int far d_432e_c91c[][80];
extern char far d_5313_ec37[];
extern char far d_5313_ec38[];
extern char far d_5313_d73d[];
extern int far d_432e_f26e[];
extern unsigned char far d_3334_bdb2[][40];
extern char far d_432e_de9f[];
extern char far d_432e_deef[];
extern char far * far d_53fc_0000[];
extern char far d_432e_c28d[];
extern char far d_5313_0dc0[];
extern char far d_432e_ed13[][40][5];
extern char far d_432e_681e[];
extern char far d_432e_c2c9[][4][20];
extern char far d_432e_b92f[];
extern unsigned char far d_3334_cee2[];
extern int far d_28d4_0064[][2][13];
extern int far d_432e_1b22[][4][2][30];
extern int far d_432e_b43b[3][16][8];
extern char far d_28d4_0000[];
extern int d_61eb_d59c;
extern int d_61eb_d5ac;
extern int d_61eb_d5c0;
extern char far d_432e_7672[];
extern char far d_432e_b437;
extern char far d_432e_b438;
extern char far d_432e_b439;
extern char far d_432e_b43a;
extern int far d_3334_f270;
extern int far d_3334_f272;
extern int far d_3334_f274;
extern char far d_432e_74e2[];
extern char d_61eb_dba3;
extern long d_61eb_dba4;
extern char far d_5313_0e38[];


/* print a team's fixtures and results */
void f_9a9e_0000(int team)
{
    char sep[10];
    char home;
    unsigned col;
    FILE *fp;
    char names[4][100][20];
    char line[320];
    char scorers[80];
    unsigned char comp[100];
    unsigned char week[100];
    char buf[300];

    f_b26d_0b9a();
    f_b26d_0bac("______________________________________________________________________________\n");
    f_b26d_0bd7(2);
    sprintf(line, "%s FIXTURES/RESULTS SEASON %d", f_215d_0e90(d_61eb_b0ec[team]), d_61eb_d5a4);
    f_b26d_0bac(line);
    f_b26d_0bd7(3);
    f_b26d_0bac("COMP  OPPONENTS    VEN SCORE GATE   SCORERS");
    f_b26d_0bd7(2);
    f_6ffe_4764(team, names, comp, week);
    for (d_61eb_d62a = 0; d_61eb_d61e - 1 >= d_61eb_d62a; d_61eb_d62a++) {
        strcpy(line, names[0][d_61eb_d62a] + 2);
        sprintf(buf, " %s   %-13.13s(%s)  ", f_215d_0e90(line), names[1][d_61eb_d62a], names[2][d_61eb_d62a]);
        f_b26d_0bac(buf);
        if (week[d_61eb_d62a] < d_61eb_d5a2) {
            d_61eb_d62e = week[d_61eb_d62a] - 1;
            d_61eb_d630 = comp[d_61eb_d62e];
            d_61eb_d632 = d_28d4_106c[d_61eb_d62e] + d_61eb_d630;
            home = d_53fc_138e[d_61eb_d630][0][d_61eb_d62e] / 32 == team;
            f_215d_19eb(2);
            fp = fopen(d_5313_0de8, "rb");
            fseek(fp, (long)(d_61eb_d632 - 1) * 175, 0);
            fread(d_432e_87c8, 1, 175, fp);
            fclose(fp);
            if (d_432e_87c8[1].home1 == 15 && d_432e_87c8[1].away1 == 15) {
                d_61eb_d7b2 = d_432e_87c8[0].home2;
                d_61eb_d7b4 = d_432e_87c8[0].away2;
            } else {
                d_61eb_d7b2 = d_432e_87c8[1].home1;
                d_61eb_d7b4 = d_432e_87c8[1].away1;
            }
            if (home == 0)
                f_215d_13f1(&d_61eb_d7b2, &d_61eb_d7b4, 2);
            sprintf(line, "%d-%d", d_61eb_d7b2, d_61eb_d7b4);
            sprintf(buf, "%-5.5s%-7ld", line, d_432e_87cc);
            f_b26d_0bac(buf);
            if (d_61eb_d7b2 > 0) {
                d_61eb_d61a = 0;
                col = 38;
                for (d_61eb_d5aa = 0; d_61eb_d5aa <= 15; d_61eb_d5aa++) {
                    if (home) {
                        d_61eb_d5b8 = d_432e_87d0[0][d_61eb_d5aa];
                        d_61eb_d732 = d_432e_8810[0][d_61eb_d5aa] / 16;
                    } else {
                        d_61eb_d5b8 = d_432e_87d0[1][d_61eb_d5aa];
                        d_61eb_d732 = d_432e_8810[1][d_61eb_d5aa] / 16;
                    }
                    if (d_61eb_d732 > 0 && d_61eb_d5b8 != -2) {
                        if (d_61eb_d61a > 0)
                            strcpy(sep, ",");
                        else
                            strcpy(sep, "");
                        strcpy(scorers, sep);
                        strcat(scorers, f_1a83_45b4(d_61eb_d5b8));
                        if (d_61eb_d732 > 1) {
                            sprintf(line, " %d", d_61eb_d732);
                            strcat(scorers, line);
                        }
                        if (strlen(scorers) > col) {
                            if (sep[0]) {
                                f_b26d_0bac(sep);
                                f_b26d_0bd7(1);
                                strcpy(scorers, scorers + 1);
                            } else
                                f_b26d_0bd7(1);
                            f_b26d_0bac("                                    ");
                            col = 38;
                        }
                        f_b26d_0bac(scorers);
                        col = col - strlen(scorers);
                        d_61eb_d61a++;
                    }
                }
            }
        }
        f_b26d_0bd7(1);
    }
    f_b26d_0bd7(2);
    f_b26d_0bac("______________________________________________________________________________\n");
    f_b26d_0bd7(2);
    f_b26d_0ba3();
}

/* a message box */
void f_9a9e_0469(char far *s)
{
    f_1a83_48f9("");
    f_215d_088c(16);
    f_215d_08aa(20, 121, 308, 89);
    f_215d_088c(31);
    f_215d_08aa(16, 117, 304, 85);
    f_215d_089b(19);
    f_215d_0904(16, 117, 304, 85);
    f_1a83_3a43(-1.0, 12.5, 1, s);
}

/* the week's injuries and suspensions */
void f_9a9e_04d4(void)
{
    unsigned char flag[1500];
    char tmp[320];
    char title[80];
    char text[180];

    memset(flag, 0, 1500);
    if (d_432e_cf6b[0] && d_61eb_d5a2 > 12) {
        for (d_61eb_d5d8 = 1; strlen(d_432e_cf6b) >= d_61eb_d5d8; d_61eb_d5d8 += 4) {
            strncpy(tmp, d_432e_cf6b + d_61eb_d5d8 - 1, 4);
            tmp[4] = 0;
            if (!f_1a83_5a4c(d_61eb_d5b8 = atol(tmp))) {
                d_3334_0000[2][d_61eb_d5b8] += 10;
                if (d_3334_0000[2][d_61eb_d5b8] % 5 == 1)
                    d_3334_0000[2][d_61eb_d5b8]--;
                flag[d_61eb_d5b8] = 0xff;
                d_3334_c8f2[4][d_28d4_1958[18][d_61eb_d5b8]] += 10;
            } else if (d_61eb_d5a2 > 12 && f_1a83_2c8b(d_61eb_d5b8) == 0)
                f_9a9e_125e(d_61eb_d5b8, 27, 2);
        }
    }
    if (d_432e_d0ab[0] && d_61eb_d5a2 > 12) {
        for (d_61eb_d5d8 = 1; strlen(d_432e_d0ab) >= d_61eb_d5d8; d_61eb_d5d8 += 4) {
            strncpy(tmp, d_432e_d0ab + d_61eb_d5d8 - 1, 4);
            tmp[4] = 0;
            if (!f_1a83_5a4c(d_61eb_d5b8 = atol(tmp)) && flag[d_61eb_d5b8] == 0) {
                d_3334_0000[2][d_61eb_d5b8] += 5;
                if (d_3334_0000[2][d_61eb_d5b8] % 5 == 1)
                    d_3334_0000[2][d_61eb_d5b8]--;
                d_3334_c8f2[4][d_28d4_1958[18][d_61eb_d5b8]] += 5;
            }
        }
    }
    strcpy(d_432e_de4f, " suffered during the match");
    if (d_432e_cddb[0]) {
        for (d_61eb_d5d8 = 1; strlen(d_432e_cddb) >= d_61eb_d5d8; d_61eb_d5d8 += 4) {
            strncpy(tmp, d_432e_cddb + d_61eb_d5d8 - 1, 4);
            tmp[4] = 0;
            d_61eb_d5b8 = atol(tmp);
            if (f_215d_0d96(3) > 0) {
                if (!f_1a83_5a4c(d_61eb_d5b8)) {
                    f_9a9e_0f8a(d_61eb_d5b8);
                    d_28d4_1958[20][d_61eb_d5b8] -= d_28d4_1958[20][d_61eb_d5b8] > 0;
                } else if (f_1a83_2c8b(d_61eb_d5b8) == 0)
                    f_9a9e_0f8a(d_61eb_d5b8);
            }
        }
    }
    if (d_432e_d37b[0]) {
        for (d_61eb_d5d8 = 1; strlen(d_432e_d37b) >= d_61eb_d5d8; d_61eb_d5d8 += 4) {
            strncpy(tmp, d_432e_d37b + d_61eb_d5d8 - 1, 4);
            tmp[4] = 0;
            d_61eb_d5b8 = atol(tmp);
            if (f_215d_0d96(5) > 0 && !f_1a83_5a4c(d_61eb_d5b8))
                d_28d4_1958[15][d_61eb_d5b8] = f_215d_13af(d_28d4_1958[15][d_61eb_d5b8] + f_215d_0d96(25),
                                                           d_28d4_1958[9][d_61eb_d5b8] + 25);
        }
    }
    for (d_61eb_d5b8 = 0; d_61eb_d58e - 1 >= d_61eb_d5b8; d_61eb_d5b8++) {
        d_61eb_d5de = d_28d4_1958[18][d_61eb_d5b8];
        if (d_28d4_1958[20][d_61eb_d5b8] == 0) {
            d_61eb_d8a8 = d_3334_0000[2][d_61eb_d5b8];
            d_61eb_d914 = (flag[d_61eb_d5b8] ? 1 : 0) + (d_61eb_d8a8 > 0 && d_61eb_d8a8 % 20 == 0 ? 2 : 0);
            if (d_61eb_d914 > 0) {
                if (d_61eb_d5a2 <= 12) {
                    d_28d4_1958[19][d_61eb_d5b8] = d_61eb_d914 + 27;
                    if (f_1a83_2ad4(d_61eb_d5de)) {
                        sprintf(title, "%s squad news", (char far *)d_61eb_b0ec[d_61eb_d5de]);
                        sprintf(text, "%s put under delayed suspension, due to bad discipline.",
                                f_1a83_4485(d_61eb_d5b8));
                        f_1a83_5844(d_61eb_d5de, title, text);
                    }
                } else
                    f_9a9e_125e(d_61eb_d5b8, 27, d_61eb_d914);
                d_432e_45de[d_61eb_d5b8].f15 = 1;
                if (f_1a83_2ad4(d_61eb_d5de) == 0 && f_215d_0d96(8) == 0)
                    f_8e0f_1172(d_61eb_d5b8, -1);
            }
        } else if (d_28d4_1958[19][d_61eb_d5b8] == 27 && d_432e_b73b[0][d_61eb_d5de] && d_61eb_d5a2 > 12) {
            d_28d4_1958[20][d_61eb_d5b8] -= 1;
            if (d_28d4_1958[20][d_61eb_d5b8] == 0)
                f_9a9e_155d(d_61eb_d5b8);
        }
    }
}

void f_9a9e_0a62(void)
{
    char text[320];
    char score[80];

    if (d_3334_f26e[0] > -1) {
        f_1a83_48f9("");
        f_1a83_3a43(-1.0, 10.0, 2, "Performance of the week");
        sprintf(d_432e_d73d, "%d-%d", abs(d_3334_f26e[2]), d_3334_f26e[3]);
        if (d_3334_f26e[2] < 0)
            strcat(d_432e_d73d, " Pens");
        strcpy(score, d_432e_ec37);
        score[1] = 0;
        sprintf(text, "%s : %s v %s (%s)", f_215d_1043(f_1a83_3300(d_3334_f26e[0])), d_432e_d73d,
                f_215d_1043(f_1a83_3300(d_3334_f26e[1])), score);
        f_1a83_3a43(-1.0, 12.0, 6, text);
        strcpy(text, d_432e_ec38);
        f_1a83_3a43(-1.0, 14.0, 9, text);
        f_1a83_5540(0);
    }
}

void f_9a9e_0b9c(void)
{
    char text[320];

    for (d_61eb_d5de = 0; d_61eb_d5de <= 37; d_61eb_d5de++) {
        d_61eb_d8a8 = d_3334_c8f2[4][d_61eb_d5de];
        d_61eb_d9ba = f_1a83_6d8b(d_61eb_d5de) + 1;
        if (d_61eb_d8a8 >= d_61eb_d9ba * 20 + 180 && d_61eb_d8a8 % 5 == 0) {
            switch (d_61eb_d9ba) {
            case 1:
                d_61eb_db71 = f_215d_0d96(6) * 5000 + 50000L;
                break;
            case 2:
                d_61eb_db71 = f_215d_0d96(6) * 1000 + 25000;
                break;
            }
            sprintf(text, "%s have been fined %ld for excessive foul play.",
                    (char far *)d_61eb_b0ec[d_61eb_d5de], d_61eb_db71);
            f_1a83_5844(d_61eb_d5de, "Disciplinary action", text);
            d_61eb_dbc0 = f_215d_1629(d_61eb_dc52, 1);
            d_61eb_dbc0[12][d_61eb_d5de] += d_61eb_db71;
            d_3334_c8f2[4][d_61eb_d5de]++;
        }
        f_b26d_0652(d_61eb_d5de);
    }
}

void f_9a9e_0cde(int n)
{
    strcpy(d_432e_de4f, " suffered during training");
    for (d_61eb_d918 = 1; d_61eb_d918 <= n; d_61eb_d918++) {
        d_61eb_d5d8 = -1;
        d_61eb_d75e = 0;
        do {
            do {
                d_61eb_d68c = f_215d_0d96(d_61eb_d58e);
                d_61eb_d5de = d_28d4_1958[18][d_61eb_d68c];
            } while (d_28d4_1958[20][d_61eb_d68c] > 0);
            d_61eb_d760 = f_215d_0d96(d_28d4_1958[13][d_61eb_d68c] + 10);
            if (d_61eb_d760 > d_61eb_d5e6 || d_61eb_d5d8 == -1) {
                d_61eb_d5d8 = d_61eb_d68c;
                d_61eb_d5e6 = d_61eb_d760;
            }
            d_61eb_d75e++;
        } while (d_61eb_d5d8 <= -1 || d_61eb_d75e < 10);
        f_9a9e_0f8a(d_61eb_d5d8);
        d_61eb_d5d8 = -1;
        d_61eb_d75e = 0;
        do {
            d_61eb_d5de = f_215d_0d96(38);
            d_61eb_d5d8 = d_61eb_d5de * 20 + f_215d_0d96(16) + 3000;
            d_61eb_d75e++;
        } while ((d_432e_3a2e[d_61eb_d5de][f_1a83_5a80(d_61eb_d5d8)] > 0 || f_1a83_2c8b(d_61eb_d5d8))
                 && d_61eb_d75e < 50);
        if (d_432e_3a2e[d_61eb_d5de][f_1a83_5a80(d_61eb_d5d8)] == 0 && f_1a83_2c8b(d_61eb_d5d8) == 0)
            f_9a9e_0f8a(d_61eb_d5d8);
        if (d_61eb_d9bf == 0) {
            for (d_61eb_d62a = 1; d_61eb_d62a <= 7; d_61eb_d62a++) {
                d_61eb_d5d8 = -1;
                d_61eb_d75e = 0;
                do {
                    d_61eb_d68c = f_215d_0d96(d_61eb_d58e);
                    d_61eb_d760 = f_215d_0d96(d_28d4_1958[17][d_61eb_d68c] - 6);
                    if (d_61eb_d760 < d_61eb_d88c || d_61eb_d5d8 == -1) {
                        d_61eb_d5d8 = d_61eb_d68c;
                        d_61eb_d88c = d_61eb_d760;
                    }
                    d_61eb_d75e++;
                } while (d_61eb_d75e < 2 || d_61eb_d5d8 <= -1);
                d_61eb_d91c = d_28d4_1958[15][d_61eb_d5d8];
                f_9a9e_1b7d(d_61eb_d5d8);
                if (d_61eb_d9bf == 0) {
                    if (d_28d4_1958[15][d_61eb_d5d8] < d_61eb_d91c && d_432e_45de[d_61eb_d5d8].f7
                        && f_1a83_2ad4(d_28d4_1958[18][d_61eb_d5d8]) == 0)
                        f_1a83_0e84(d_61eb_d5d8);
                    else if (d_28d4_1958[15][d_61eb_d5d8] > d_61eb_d91c && d_28d4_1958[20][d_61eb_d5d8] == 0
                             && f_1a83_2ad4(d_28d4_1958[18][d_61eb_d5d8]) == 0)
                        f_1a83_12f6(d_61eb_d5d8);
                }
            }
        }
    }
}

void f_9a9e_0f8a(int p)
{
    unsigned char lo[26] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 2, 6, 6, 6, 8, 8, 8, 8, 8, 8, 16, 6, 20};
    unsigned char hi[26] = {1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 3, 3, 4, 10, 8, 8, 12, 12, 12, 12, 12, 12, 16, 60, 16, 60};

    d_61eb_d674 = f_215d_0d96(100) + 1;
    if (d_61eb_d674 <= 43 || f_215d_0d96(2) == 0) {
        char c;

        if (f_1a83_5a2e(p) || f_1a83_6b4c(p))
            c = d_432e_45de[p].f0;
        else if (f_1a83_5a4c(p))
            c = d_432e_39fe[f_1a83_5a62(p)][0][f_1a83_5a80(p)] == 1 ? 1 : 0;
        do
            d_61eb_d91e = f_215d_0d96(8);
        while (d_61eb_d91e == 4 || d_61eb_d91e == 5 || d_61eb_d91e == 6 || (d_61eb_d91e == 3 && c == 0));
    } else if (d_61eb_d674 >= 44 && d_61eb_d674 <= 78)
        d_61eb_d91e = f_215d_0d96(6) + 8;
    else if (d_61eb_d674 >= 79 && d_61eb_d674 <= 92)
        d_61eb_d91e = f_215d_0d96(2) + 14;
    else if (d_61eb_d674 >= 93 && d_61eb_d674 <= 97)
        d_61eb_d91e = f_215d_0d96(6) + 16;
    else if (d_61eb_d674 >= 98)
        d_61eb_d91e = f_215d_0d96(4) + 22;
    d_61eb_d920 = lo[d_61eb_d91e] + f_215d_0d96(hi[d_61eb_d91e] - lo[d_61eb_d91e] + 1);
    f_9a9e_125e(p, d_61eb_d91e, d_61eb_d920);
    if (f_1a83_5a2e(p)) {
        d_61eb_d922 = d_61eb_d920;
        if (d_61eb_d920 >= 12 && f_1a83_2ad4(d_28d4_1958[18][p]) == 0)
            f_ab30_0bf6(p);
        if (d_61eb_d920 >= 16 && f_215d_0d96(15) == 0)
            f_9a9e_1772(p);
        if (d_61eb_d920 >= 16 && f_215d_0d96(4) == 0) {
            d_28d4_1958[0][p] = d_28d4_1958[0][p] * f_215d_1319(f_215d_10c4(), 0.5);
            d_28d4_1958[9][p] = f_215d_1343(d_28d4_1958[9][p] * f_215d_1319(f_215d_10c4(), 0.5), d_28d4_1958[0][p]);
        }
    }
}

void f_9a9e_125e(int p, int a, int b)
{
    char title[120];
    char text[120];

    d_61eb_da33 = a == 27 ? -1 : 0;
    d_61eb_da34 = a == 50 ? -1 : 0;
    if (!f_1a83_5a4c(p)) {
        d_61eb_d5de = d_28d4_1958[0][18 * 1500 + p];
        d_28d4_1958[19][p] = a;
        d_28d4_1958[20][p] = b;
        d_3334_0000[2][p] += d_61eb_da33 ? 1 : 0;
    } else {
        d_61eb_d5de = f_1a83_5a62(p);
        d_432e_3a2e[d_61eb_d5de][f_1a83_5a80(p)] = b;
    }
    if (d_61eb_d9bf == 0 && d_61eb_da23 == 0 && f_1a83_6b4c(p) == 0) {
        if (f_1a83_2ad4(d_61eb_d5de) == 0)
            f_1a83_0e84(p);
        else
            f_1a83_1cf2(p);
        if (f_1a83_2ad4(d_61eb_d5de)) {
            if (d_61eb_da33) {
                sprintf(title, "%s squad news", (char far *)d_61eb_b0ec[d_61eb_d5de]);
                sprintf(text, "%s serves a %d match ban, due to bad discipline.", f_1a83_4485(p), b);
                f_1a83_5844(d_61eb_d5de, title, text);
            } else if (d_61eb_da34) {
                sprintf(title, "%s squad news", (char far *)d_61eb_b0ec[d_61eb_d5de]);
                sprintf(text, "%s is ineligible for today's game - he is cuptied.", f_1a83_4485(p));
                f_1a83_5844(d_61eb_d5de, title, text);
            } else if (a != 51) {
                if (b == 1)
                    strcpy(d_432e_de9f, "a few days");
                else
                    sprintf(d_432e_de9f, "about %d weeks", b);
                sprintf(title, "%s %ssquad news", (char far *)d_61eb_b0ec[d_61eb_d5de],
                        f_1a83_5a4c(p) ? "reserve " : "");
                sprintf(text, "%s out for %s with %s%s.", f_1a83_4485(p), d_432e_de9f, d_53fc_0371[a], d_432e_de4f);
                f_1a83_5844(d_61eb_d5de, title, text);
            }
        }
    }
    if (!f_1a83_5a4c(p) && f_215d_0d96(d_28d4_1958[14][p] + 10) < f_215d_0d96(10)
        && b > f_215d_0d96(3) + 5)
        d_28d4_1958[15][p] = f_215d_1343(d_28d4_1958[15][p] - f_215d_0d96(25), 10);
}

#pragma option -O-
void f_9a9e_155d(int p)
{
    char what[180];
    char title[80];
    char text[180];

    if (!f_1a83_5a4c(p)) {
        d_61eb_d5de = d_28d4_1958[0][18 * 1500 + p];
        d_61eb_da33 = d_28d4_1958[19][p] == 27;
        d_61eb_da34 = d_28d4_1958[19][p] == 50;
        d_28d4_1958[19][p] = 0;
        d_28d4_1958[20][p] = 0;
        d_432e_45de[p].f25 = 0;
        d_432e_45de[p].f26 = 0;
        d_432e_45de[p].f27 = 0;
        d_432e_45de[p].f23 = 1;
    } else {
        d_61eb_d5de = f_1a83_5a62(p);
        d_61eb_da33 = 0;
        d_61eb_da34 = 0;
        d_432e_3a2e[d_61eb_d5de][f_1a83_5a80(p)] = 0;
    }
    if (d_61eb_da23 == 0 && f_1a83_6b4c(p) == 0) {
        if (f_1a83_2ad4(d_61eb_d5de) && !d_61eb_da34) {
            if (d_61eb_da33)
                strcpy(what, "returns from his disciplinary ban.");
            else if (!f_1a83_5a4c(p))
                sprintf(what, "resumes training at %d%% match fitness.", d_28d4_1958[21][p]);
            else
                strcpy(what, "resumes training.");
            sprintf(title, "%s %ssquad news", (char far *)d_61eb_b0ec[d_61eb_d5de],
                    f_1a83_5a4c(p) ? "reserve " : "");
            sprintf(text, "%s %s", f_1a83_4485(p), what);
            f_1a83_5844(d_61eb_d5de, title, text);
        }
        if (!f_1a83_5a4c(p) && f_1a83_2ad4(d_28d4_1958[0][18 * 1500 + p]) == 0)
            f_1a83_12f6(p);
    }
}

void f_9a9e_1772(int p)
{
    char ok;
    char failed;
    char buf[320];

    ok = 0;
    failed = 0;
    d_61eb_d924 = d_28d4_1958[0][18 * 1500 + p];
    d_61eb_db3d = f_215d_0d96(11) * 10000 + 100000L;
    if (f_1a83_2ad4(d_61eb_d924) && d_3334_0000[7][p] == 0xff && d_61eb_d9bf == 0 && d_61eb_da23 == 0) {
        switch (d_61eb_d926 = f_215d_0d96(7)) {
        case 0: strcpy(d_432e_deef, "Norway"); break;
        case 1: strcpy(d_432e_deef, "Germany"); break;
        case 2: strcpy(d_432e_deef, "the USA"); break;
        case 3: strcpy(d_432e_deef, "Italy"); break;
        case 4: strcpy(d_432e_deef, "Sweden"); break;
        case 5: strcpy(d_432e_deef, "Canada"); break;
        case 6: strcpy(d_432e_deef, "Holland"); break;
        }
        do {
            d_61eb_da04 = 0;
            f_1a83_48f9("Medical Specialist");
            sprintf(buf, " %s injury ", f_1a83_462c(p));
            f_1a83_3c08(1.0, 4.0, -(d_3334_bdb2[2][d_61eb_d924] / 16), d_3334_bdb2[2][d_61eb_d924] % 16, 0, buf);
            sprintf(buf, "A top surgeon in %s can operate", d_432e_deef);
            f_1a83_0b12(7, buf);
            if (d_432e_45de[p].f20)
                strcpy(buf, "Cost is covered by insurance");
            else
                sprintf(buf, "It would cost %ld", d_61eb_db3d);
            f_1a83_0b12(9, buf);
            f_1a83_2da6(12, "", "View Factfile|Last Finances|Accept Offer|Refuse Offer|");
            do {
                d_61eb_d9c8 = -1;
                f_1a83_3122(3);
                d_61eb_d928 = d_61eb_d59e;
                if (d_61eb_d928 == 0) {
                    do
                        f_a214_4120(p, -1, 0);
                    while (!d_61eb_d9ca);
                    d_61eb_d9ca = 0;
                    d_61eb_da04 = -1;
                } else if (d_61eb_d928 == 1) {
                    f_75a4_002a(d_61eb_d924);
                    d_61eb_da04 = -1;
                } else if (d_61eb_d928 == 2) {
                    if (f_1a83_0c63()) {
                        if (!d_432e_45de[p].f20 && d_61eb_db3d > f_1a83_5747(d_61eb_d924) * 0.5) {
                            f_1a83_0b7d("The board refuse");
                            d_61eb_d9c8 = 0;
                        } else {
                            sprintf(buf, "%s has the operation", f_1a83_462c(p));
                            f_1a83_0b7d(buf);
                            ok = -1;
                            if (f_215d_0d96(8) == 0) {
                                f_1a83_0b7d("But it is unsuccessful");
                                failed = -1;
                            } else
                                f_1a83_0b7d("It is successful");
                        }
                    } else
                        d_61eb_d9c8 = 0;
                } else if (d_61eb_d928 == 3) {
                    if (f_1a83_0c63()) {
                        f_1a83_0b7d("The offer is refused");
                        0;
                    } else
                        d_61eb_d9c8 = 0;
                }
            } while (!d_61eb_d9c8);
        } while (d_61eb_da04 != 0);
    } else if (d_432e_45de[p].f20
               || d_28d4_1958[23][p] < 3 && f_1a83_5747(d_61eb_d924) >= d_61eb_db3d) {
        ok = -1;
        if (f_215d_0d96(8) == 0)
            failed = -1;
    }
    if (ok && !d_432e_45de[p].f20) {
        d_61eb_dbc0 = f_215d_1629(d_61eb_dc52, 1);
        d_61eb_dbc0[13][d_61eb_d924] += d_61eb_db3d;
    }
    if (ok == 0 && f_215d_0d96(4) == 0 || ok && failed)
        d_432e_45de[p].f17 = 1;
}

void f_9a9e_1b7d(int p)
{
    d_61eb_d78e = 50 - (8.5 - d_3334_bdb2[0][d_28d4_1958[18][p]]) * 5;
    if (d_61eb_d78e > f_215d_0d96(101))
        d_61eb_d776 = f_215d_0d96(10);
    else
        d_61eb_d776 = -f_215d_0d96(10);
    d_61eb_d9a8 = f_215d_1343(d_28d4_1958[0][p] - 25, 10);
    d_61eb_d9aa = f_215d_13af(d_28d4_1958[0][p] + 25, d_28d4_1958[9][p] + 25);
    d_28d4_1958[15][p] = f_215d_1343(f_215d_13af(d_28d4_1958[15][p] + d_61eb_d776, d_61eb_d9aa), d_61eb_d9a8);
}

void f_9a9e_1c83(void)
{
    char title[80];
    char text[180];
    int wage[30];

    for (d_61eb_d5de = 0; d_61eb_d5de <= 37; d_61eb_d5de++) {
        d_61eb_db75 = f_9f8d_1ec1(d_61eb_d5de) - d_3334_cc82[0][d_61eb_d5de];
        if (d_61eb_db75 < 0) {
            d_61eb_dbc0 = f_215d_1629(d_61eb_dc52, 1);
            d_61eb_dbc0[3][d_61eb_d5de] += labs(d_61eb_db75) * 0.0005;
            d_61eb_da37 = 0;
        } else {
            d_61eb_dbc0 = f_215d_1629(d_61eb_dc52, 1);
            d_61eb_dbc0[10][d_61eb_d5de] += d_61eb_db75 * 0.004;
            d_61eb_da37 = -1;
        }
        switch (f_1a83_6d8b(d_61eb_d5de)) {
        case 0:
            d_61eb_db79 = 30000;
            d_61eb_dbc0 = f_215d_1629(d_61eb_dc52, 1);
            d_61eb_dbc0[6][d_61eb_d5de] += f_215d_0d96(5000) + 10000;
            d_61eb_dbc0[13][d_61eb_d5de] += f_215d_0d96(5000) + 20000;
            break;
        case 1:
            d_61eb_db79 = 10000;
            d_61eb_dbc0 = f_215d_1629(d_61eb_dc52, 1);
            d_61eb_dbc0[6][d_61eb_d5de] += f_215d_0d96(2500) + 5000;
            d_61eb_dbc0[13][d_61eb_d5de] += f_215d_0d96(5000) + 5000;
            break;
        }
        d_61eb_dbc0 = f_215d_1629(d_61eb_dc52, 1);
        if (d_61eb_d5a2 < 12)
            d_61eb_dbc0[0][d_61eb_d5de] += d_3334_bdb2[1][d_61eb_d5de] / (f_1a83_66fa(d_61eb_d5de) * 6) * 30000
                + f_215d_0d96(10000) - f_215d_0d96(10000);
        else
            d_61eb_dbc0[4][d_61eb_d5de] += d_61eb_db79;
        d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 0);
        for (d_61eb_d5aa = 0; d_61eb_d5aa <= d_3334_bdb2[7][d_61eb_d5de] - 1; d_61eb_d5aa++)
            wage[d_61eb_d5aa] = d_61eb_dbb8[4][d_28d4_081c[d_61eb_d5de][d_61eb_d5aa]];
        for (d_61eb_d5aa = 0; d_61eb_d5aa <= d_3334_bdb2[7][d_61eb_d5de] - 1; d_61eb_d5aa++) {
            d_61eb_d5b8 = d_28d4_081c[d_61eb_d5de][d_61eb_d5aa];
            d_61eb_dbc0 = f_215d_1629(d_61eb_dc52, 1);
            d_61eb_dbc0[7][d_61eb_d5de] += wage[d_61eb_d5aa];
            if (d_432e_45de[d_61eb_d5b8].f20) {
                d_61eb_db3d = f_8e0f_138d(d_61eb_d5b8);
                d_61eb_dbc0 = f_215d_1629(d_61eb_dc52, 1);
                d_61eb_dbc0[13][d_61eb_d5de] += d_61eb_db3d;
            }
            d_61eb_dbc0 = f_215d_1629(d_61eb_dc52, 1);
            if (d_432e_45de[d_61eb_d5b8].f25)
                d_61eb_dbc0[13][d_61eb_d5de] += 10000;
            if (d_432e_45de[d_61eb_d5b8].f26)
                d_61eb_dbc0[13][d_61eb_d5de] += 5000;
            if (d_432e_45de[d_61eb_d5b8].f27)
                d_61eb_dbc0[13][d_61eb_d5de] += 3000;
        }
        d_61eb_dbc0 = f_215d_1629(d_61eb_dc52, 1);
        d_61eb_dbc0[11][d_61eb_d5de] += d_3334_bdb2[1][d_61eb_d5de] * 200 / (1 << f_1a83_6d8b(d_61eb_d5de));
        d_61eb_db7d = 0;
        d_61eb_dbc0 = f_215d_1629(d_61eb_dc52, 0);
        for (d_61eb_d62a = 0; d_61eb_d62a <= 13; d_61eb_d62a++) {
            if (d_61eb_d62a <= 6)
                d_61eb_db7d += d_61eb_dbc0[d_61eb_d62a][d_61eb_d5de];
            else if (d_61eb_d62a != 8)
                d_61eb_db7d -= d_61eb_dbc0[d_61eb_d62a][d_61eb_d5de];
        }
        d_61eb_dbc0 = f_215d_1629(d_61eb_dc52, 1);
        if (d_61eb_db7d > 0)
            d_61eb_dbc0[8][d_61eb_d5de] += d_61eb_db7d * 0.4;
        d_61eb_dbc0 = f_215d_1629(d_61eb_dc52, 0);
        for (d_61eb_d62a = 0; d_61eb_d62a <= 13; d_61eb_d62a++) {
            if (d_61eb_d62a <= 6)
                d_3334_cc82[0][d_61eb_d5de] += d_61eb_dbc0[d_61eb_d62a][d_61eb_d5de];
            else
                d_3334_cc82[0][d_61eb_d5de] -= d_61eb_dbc0[d_61eb_d62a][d_61eb_d5de];
        }
        if (f_9f8d_1ec1(d_61eb_d5de) + f_215d_0d96(100000) + 250000 < d_61eb_db75) {
            switch (f_1a83_6d8b(d_61eb_d5de)) {
            case 0:
                d_61eb_db81 = f_215d_0d96(6) * 100000 + 500000;
                break;
            case 1:
                d_61eb_db81 = f_215d_0d96(6) * 50000 + 250000;
                break;
            }
            d_61eb_db81 += d_61eb_db75;
            d_61eb_db81 = d_61eb_db81 / 10000 * 10000;
            sprintf(title, "%s takeover!", (char far *)d_61eb_b0ec[d_61eb_d5de]);
            sprintf(text, "%s have been rescued by a %ld takeover deal. ", (char far *)d_61eb_b0ec[d_61eb_d5de], d_61eb_db81);
            f_1a83_5844(d_61eb_d5de, title, text);
            d_61eb_dbc0 = f_215d_1629(d_61eb_dc52, 1);
            d_61eb_dbc0[6][d_61eb_d5de] += d_61eb_db81;
            d_3334_cc82[0][d_61eb_d5de] += d_61eb_db81;
            if (d_3334_bdb2[6][d_61eb_d5de] < f_215d_0d96(31) + 20)
                f_8e0f_3e07(d_61eb_d5de, 0);
        } else if (f_9f8d_1ec1(d_61eb_d5de) < d_61eb_db75) {
            if (f_1a83_2ad4(d_61eb_d5de))
                f_1a83_5844(d_61eb_d5de, f_1a83_4686(d_3334_ca6e[d_61eb_d5de], 0),
                    "The club is in severe financial trouble, and you are urged to sell players.");
        } else if (f_9f8d_1ec1(d_61eb_d5de) / 2 < d_61eb_db75) {
            if (f_1a83_2ad4(d_61eb_d5de))
                f_1a83_5844(d_61eb_d5de, f_1a83_4686(d_3334_ca6e[d_61eb_d5de], 0),
                    "The board is concerned at the club's financial situation.");
        }
        d_61eb_dbc0 = f_215d_1629(d_61eb_dc52, 1);
        for (d_61eb_d62a = 0; d_61eb_d62a <= 13; d_61eb_d62a++)
            (d_61eb_dbc0 + 16)[d_61eb_d62a][d_61eb_d5de] = d_61eb_dbc0[d_61eb_d62a][d_61eb_d5de];
    }
}

/* the international squads: picks the senior and under-21 squads of Italy */
void f_9a9e_2611(void)
{
    unsigned char far *p;
    unsigned i;
    unsigned char nation[5] = { 0, 0, 0, 0, 0 };
    char title[80];
    char text[180];
    char u21[20];

    f_1a83_0bb7("New international squad|has been announced");
    d_61eb_d5b8 = 0;
    do {
        d_432e_45de[d_61eb_d5b8].f18 = 0;
        d_432e_45de[d_61eb_d5b8].f19 = 0;
        if (d_61eb_d58e - 1 == d_61eb_d5b8)
            d_61eb_d5b8 = 1000;
        else
            d_61eb_d5b8++;
    } while (d_61eb_d590 + 999 >= d_61eb_d5b8);
    for (d_61eb_d606 = 0; d_61eb_d606 <= 1; d_61eb_d606++) {
        for (d_61eb_d7ba = 0; d_61eb_d7ba <= 0; d_61eb_d7ba++) {
            p = d_28c1_0000;
            for (i = 0; i <= 21; i++) {
                d_61eb_d60a = *p++;
                d_61eb_d92c = -1;
                d_61eb_da38 = 0;
                do {
                    for (d_61eb_d68c = 1; d_61eb_d68c <= 100; d_61eb_d68c++) {
                        d_61eb_dbc4 = f_215d_1629(d_61eb_dc54, 0);
                        d_61eb_d5b8 = d_61eb_dbc4[d_61eb_d68c - 1];
                        if (d_61eb_d5b8 > -1 && !d_432e_45de[d_61eb_d5b8].f18 && d_28d4_1958[20][d_61eb_d5b8] == 0 &&
                            (d_28d4_1958[21][d_61eb_d5b8] > 90 || d_61eb_da38 != 0 || d_61eb_d5a2 < 12) &&
                            (d_61eb_d606 == 0 || (d_61eb_d606 == 1 && d_28d4_1958[17][d_61eb_d5b8] < 22)) &&
                            (f_1a83_633a(d_61eb_d5b8, d_61eb_d60a) || (d_61eb_da38 != 0 && d_61eb_d60a > 1))) {
                            d_61eb_d71e = (d_28d4_1958[0][d_61eb_d5b8] * 2 + d_28d4_1958[15][d_61eb_d5b8] * 2) / 4;
                            if ((d_3334_0000[0][d_61eb_d5b8] > d_61eb_d59a / 3 || d_61eb_da38 != 0) &&
                                (d_61eb_d92c == -1 || d_61eb_d71e > d_61eb_d92e)) {
                                d_61eb_d92e = d_61eb_d71e;
                                d_61eb_d92c = d_61eb_d5b8;
                            }
                        }
                    }
                    d_61eb_d9c8 = -1;
                    if (d_61eb_d92c == -1 && d_61eb_da38 == 0) {
                        d_61eb_da38 = -1;
                        d_61eb_d9c8 = 0;
                    }
                } while (!d_61eb_d9c8);
                d_432e_35f6[d_61eb_d606][i] = d_61eb_d92c;
                if (d_61eb_d92c > -1) {
                    d_432e_45de[d_61eb_d92c].f18 = 1;
                    d_432e_45de[d_61eb_d92c].f19 = d_61eb_d606 == 1;
                    if (d_61eb_d606 == 0) {
                        d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 1);
                        d_61eb_dbcc[2][d_61eb_d92c]++;
                    }
                    d_61eb_d5de = d_28d4_1958[18][d_61eb_d92c];
                    if (f_1a83_2ad4(d_61eb_d5de)) {
                        sprintf(title, "%s squad news", (char far *)d_61eb_b0ec[d_61eb_d5de]);
                        strcpy(u21, "");
                        if (d_61eb_d606 == 1)
                            strcpy(u21, "under-21 ");
                        sprintf(text, "%s has been called up to the %s %ssquad.", f_1a83_4485(d_61eb_d92c),
                                d_53fc_0000[nation[d_61eb_d7ba]], u21);
                        f_1a83_5844(d_61eb_d5de, title, text);
                    }
                }
            }
        }
    }
}

/* loads the saved game (quick == 0) or the quick-start game (quick == 1) */
void f_9a9e_29a4(char quick)
{
    FILE *fp;

    f_215d_19eb(2);
    d_432e_c28d[0] = 0;
    if (quick == 0)
        f_9a9e_42c4("Ok - Loading Saved Game");
    else
        f_9a9e_42c4("Ok - Loading Quick-Start Game");
    fp = fopen(d_5313_0dc0, "rb");
    d_61eb_dbd8 = f_215d_1629(d_61eb_dc5e, 1);
    fread(d_61eb_dbd8, 4040, 1, fp);
    fread(d_432e_ed13, 400, 1, fp);
    fread(d_432e_681e, 3268, 1, fp);
    d_61eb_dbe0 = f_215d_1629(d_61eb_dc62, 1);
    fread(d_61eb_dbe0, 604, 1, fp);
    d_61eb_dbe4 = f_215d_1629(d_61eb_dc64, 1);
    fread(d_61eb_dbe4, 604, 1, fp);
    d_61eb_dbe8 = f_215d_1629(d_61eb_dc66, 1);
    fread(d_61eb_dbe8, 604, 1, fp);
    fread(d_432e_c2c9, 160, 1, fp);
    fread(d_61eb_b18c, 1004, 1, fp);
    fread(d_61eb_b0ec, 80, 1, fp);
    fread(d_61eb_b13c, 80, 1, fp);
    f_9a9e_477e();
    f_9a9e_4084(fp);
    fread(d_28d4_1958, 36000, 1, fp);
    fread(d_3334_0000, 36000, 1, fp);
    d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 1);
    fread(d_61eb_dbcc, 15000, 1, fp);
    fread(d_3334_8ca0, 12000, 1, fp);
    d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 1);
    fread(d_61eb_dbb8, 15000, 1, fp);
    d_61eb_dbac = f_215d_1629(d_61eb_dc48, 1);
    fread(d_61eb_dbac, 6000, 1, fp);
    fread(d_432e_b73b, 304, 1, fp);
    fread(d_3334_bdb2, 2880, 1, fp);
    fread(d_432e_1a96, 140, 1, fp);
    fread(d_53fc_09c0, 2510, 1, fp);
    fread(d_3334_c8f2, 912, 1, fp);
    fread(d_432e_39fe, 3040, 1, fp);
    fread(d_28d4_081c, 1976, 1, fp);
    d_61eb_dbd0 = f_215d_1629(d_61eb_dc5a, 1);
    fread(d_61eb_dbd0, 2432, 1, fp);
    fread(d_432e_b92f, 208, 1, fp);
    fread(d_3334_cc82, 608, 1, fp);
    fread(d_3334_cee2, 9100, 1, fp);
    d_61eb_dbbc = f_215d_1629(d_61eb_dc50, 1);
    fread(d_61eb_dbbc, 3900, 1, fp);
    d_61eb_dbb0 = f_215d_1629(d_61eb_dc4a, 1);
    fread(d_61eb_dbb0, 2600, 1, fp);
    d_61eb_dbb4 = f_215d_1629(d_61eb_dc4c, 1);
    fread(d_61eb_dbb4, 1300, 1, fp);
    fread(d_3334_f278, 1920, 1, fp);
    fread(d_3334_f9f8, 1280, 1, fp);
    fread(d_28d4_0064, 1976, 1, fp);
    fread(d_432e_0000, 1600, 1, fp);
    fread(d_432e_0640, 38, 1, fp);
    fread(d_53fc_138e, 25600, 1, fp);
    fread(d_28d4_106c, 400, 1, fp);
    d_61eb_dbc0 = f_215d_1629(d_61eb_dc52, 1);
    fread(d_61eb_dbc0, 4864, 1, fp);
    fread(d_432e_066e, 1216, 1, fp);
    fread(d_432e_0b2e, 608, 1, fp);
    fread(d_432e_1b22, 960, 1, fp);
    fread(d_28d4_1398, 1024, 1, fp);
    fread(d_28c3_0000, 40, 1, fp);
    fread(d_28c6_0000, 120, 1, fp);
    fread(d_432e_1f1e, 128, 1, fp);
    fread(d_432e_1f9e, 1820, 1, fp);
    fread(d_432e_26ba, 2800, 1, fp);
    d_61eb_dbc8 = f_215d_1629(d_61eb_dc56, 1);
    fread(d_61eb_dbc8, 2240, 1, fp);
    fread(d_432e_33c6, 560, 1, fp);
    fread(d_432e_364e, 16, 1, fp);
    fread(d_432e_365e, 32, 1, fp);
    fread(d_432e_367e, 8, 1, fp);
    fread(d_432e_3686, 16, 1, fp);
    fread(d_432e_35f6, 88, 1, fp);
    d_61eb_dbc4 = f_215d_1629(d_61eb_dc54, 1);
    fread(d_61eb_dbc4, 200, 1, fp);
    fread(d_432e_3696, 16, 1, fp);
    fread(d_432e_36a6, 48, 1, fp);
    fread(d_432e_36d6, 60, 1, fp);
    fread(d_432e_37f6, 180, 1, fp);
    fread(d_432e_31aa, 540, 1, fp);
    fread(d_53fc_778e, 280, 1, fp);
    fread(d_432e_b43b, 768, 1, fp);
    fread(d_28d4_0000, 24, 1, fp);
    fread(&d_61eb_d5a2, 2, 1, fp);
    fread(&d_61eb_d59a, 2, 1, fp);
    fread(&d_61eb_d59c, 2, 1, fp);
    fread(&d_61eb_d5a4, 2, 1, fp);
    fread(&d_61eb_d6be, 2, 1, fp);
    fread(&d_61eb_d5a6, 2, 1, fp);
    fread(&d_61eb_d5ac, 2, 1, fp);
    fread(&d_61eb_d5ae, 2, 1, fp);
    fread(&d_61eb_d5b0, 2, 1, fp);
    fread(&d_61eb_d5b2, 2, 1, fp);
    fread(&d_61eb_d5ba, 2, 1, fp);
    fread(&d_61eb_d610, 2, 1, fp);
    fread(&d_61eb_d5bc, 2, 1, fp);
    fread(&d_61eb_d5be, 2, 1, fp);
    fread(&d_61eb_d5c0, 2, 1, fp);
    fread(&d_432e_0666, 1, 1, fp);
    fread(&d_432e_0667, 1, 1, fp);
    fread(d_432e_0668, 1, 1, fp);
    fread(&d_432e_0669, 1, 1, fp);
    fread(d_432e_066a, 1, 1, fp);
    fread(&d_432e_066b, 1, 1, fp);
    fread(&d_432e_066c, 1, 1, fp);
    fread(&d_432e_066d, 1, 1, fp);
    fread(&d_61eb_d652, 2, 1, fp);
    fread(&d_61eb_d650, 2, 1, fp);
    fread(d_432e_7672, 3064, 1, fp);
    fread(&d_432e_b437, 1, 1, fp);
    fread(&d_432e_b438, 1, 1, fp);
    fread(&d_432e_b439, 1, 1, fp);
    fread(&d_432e_b43a, 1, 1, fp);
    fread(&d_61eb_d9c4, 1, 1, fp);
    fread(d_3334_f26e, 2, 1, fp);
    fread(&d_3334_f270, 2, 1, fp);
    fread(&d_3334_f272, 2, 1, fp);
    fread(&d_3334_f274, 2, 1, fp);
    fread(d_432e_ec37, 40, 1, fp);
    fread(d_432e_66ae, 368, 1, fp);
    fread(d_432e_74e2, 400, 1, fp);
    fread(&d_61eb_d58e, 2, 1, fp);
    fread(&d_61eb_d590, 2, 1, fp);
    fread(&d_61eb_da4f, 1, 1, fp);
    fread(&d_61eb_dba3, 1, 1, fp);
    fread(&d_61eb_dba4, 4, 1, fp);
    fread(&d_61eb_91e3, 4, 1, fp);
    fclose(fp);
    f_215d_19eb(2);
}

#pragma option -O-
/* saves the game */
void f_9a9e_3510(void)
{
    FILE *fp;

    f_215d_19eb(2);
    d_432e_c28d[0] = 0;
    f_9a9e_42c4("Ok - Saving Data");
    fp = fopen(d_5313_0dc0, "wb");
    if (fp != NULL) {
        d_61eb_dbd8 = f_215d_1629(d_61eb_dc5e, 0);
        fwrite(d_61eb_dbd8, 4040, 1, fp);
        fwrite(d_432e_ed13, 400, 1, fp);
        fwrite(d_432e_681e, 3268, 1, fp);
        d_61eb_dbe0 = f_215d_1629(d_61eb_dc62, 0);
        fwrite(d_61eb_dbe0, 604, 1, fp);
        d_61eb_dbe4 = f_215d_1629(d_61eb_dc64, 0);
        fwrite(d_61eb_dbe4, 604, 1, fp);
        d_61eb_dbe8 = f_215d_1629(d_61eb_dc66, 0);
        fwrite(d_61eb_dbe8, 604, 1, fp);
        fwrite(d_432e_c2c9, 160, 1, fp);
        f_9a9e_4775();
        fwrite(d_61eb_b18c, 1004, 1, fp);
        fwrite(d_61eb_b0ec, 80, 1, fp);
        fwrite(d_61eb_b13c, 80, 1, fp);
        f_9a9e_477e();
        f_9a9e_40a6(fp);
        fwrite(d_28d4_1958, 36000, 1, fp);
        fwrite(d_3334_0000, 36000, 1, fp);
        d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 0);
        fwrite(d_61eb_dbcc, 15000, 1, fp);
        fwrite(d_3334_8ca0, 12000, 1, fp);
        d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 0);
        fwrite(d_61eb_dbb8, 15000, 1, fp);
        d_61eb_dbac = f_215d_1629(d_61eb_dc48, 0);
        fwrite(d_61eb_dbac, 6000, 1, fp);
        fwrite(d_432e_b73b, 304, 1, fp);
        fwrite(d_3334_bdb2, 2880, 1, fp);
        fwrite(d_432e_1a96, 140, 1, fp);
        fwrite(d_53fc_09c0, 2510, 1, fp);
        fwrite(d_3334_c8f2, 912, 1, fp);
        fwrite(d_432e_39fe, 3040, 1, fp);
        fwrite(d_28d4_081c, 1976, 1, fp);
        d_61eb_dbd0 = f_215d_1629(d_61eb_dc5a, 0);
        fwrite(d_61eb_dbd0, 2432, 1, fp);
        fwrite(d_432e_b92f, 208, 1, fp);
        fwrite(d_3334_cc82, 608, 1, fp);
        fwrite(d_3334_cee2, 9100, 1, fp);
        d_61eb_dbbc = f_215d_1629(d_61eb_dc50, 0);
        fwrite(d_61eb_dbbc, 3900, 1, fp);
        d_61eb_dbb0 = f_215d_1629(d_61eb_dc4a, 0);
        fwrite(d_61eb_dbb0, 2600, 1, fp);
        d_61eb_dbb4 = f_215d_1629(d_61eb_dc4c, 0);
        fwrite(d_61eb_dbb4, 1300, 1, fp);
        fwrite(d_3334_f278, 1920, 1, fp);
        fwrite(d_3334_f9f8, 1280, 1, fp);
        fwrite(d_28d4_0064, 1976, 1, fp);
        fwrite(d_432e_0000, 1600, 1, fp);
        fwrite(d_432e_0640, 38, 1, fp);
        fwrite(d_53fc_138e, 25600, 1, fp);
        fwrite(d_28d4_106c, 400, 1, fp);
        d_61eb_dbc0 = f_215d_1629(d_61eb_dc52, 0);
        fwrite(d_61eb_dbc0, 4864, 1, fp);
        fwrite(d_432e_066e, 1216, 1, fp);
        fwrite(d_432e_0b2e, 608, 1, fp);
        fwrite(d_432e_1b22, 960, 1, fp);
        fwrite(d_28d4_1398, 1024, 1, fp);
        fwrite(d_28c3_0000, 40, 1, fp);
        fwrite(d_28c6_0000, 120, 1, fp);
        fwrite(d_432e_1f1e, 128, 1, fp);
        fwrite(d_432e_1f9e, 1820, 1, fp);
        fwrite(d_432e_26ba, 2800, 1, fp);
        d_61eb_dbc8 = f_215d_1629(d_61eb_dc56, 0);
        fwrite(d_61eb_dbc8, 2240, 1, fp);
        fwrite(d_432e_33c6, 560, 1, fp);
        fwrite(d_432e_364e, 16, 1, fp);
        fwrite(d_432e_365e, 32, 1, fp);
        fwrite(d_432e_367e, 8, 1, fp);
        fwrite(d_432e_3686, 16, 1, fp);
        fwrite(d_432e_35f6, 88, 1, fp);
        d_61eb_dbc4 = f_215d_1629(d_61eb_dc54, 0);
        fwrite(d_61eb_dbc4, 200, 1, fp);
        fwrite(d_432e_3696, 16, 1, fp);
        fwrite(d_432e_36a6, 48, 1, fp);
        fwrite(d_432e_36d6, 60, 1, fp);
        fwrite(d_432e_37f6, 180, 1, fp);
        fwrite(d_432e_31aa, 540, 1, fp);
        fwrite(d_53fc_778e, 280, 1, fp);
        fwrite(d_432e_b43b, 768, 1, fp);
        fwrite(d_28d4_0000, 24, 1, fp);
        fwrite(&d_61eb_d5a2, 2, 1, fp);
        fwrite(&d_61eb_d59a, 2, 1, fp);
        fwrite(&d_61eb_d59c, 2, 1, fp);
        fwrite(&d_61eb_d5a4, 2, 1, fp);
        fwrite(&d_61eb_d6be, 2, 1, fp);
        fwrite(&d_61eb_d5a6, 2, 1, fp);
        fwrite(&d_61eb_d5ac, 2, 1, fp);
        fwrite(&d_61eb_d5ae, 2, 1, fp);
        fwrite(&d_61eb_d5b0, 2, 1, fp);
        fwrite(&d_61eb_d5b2, 2, 1, fp);
        fwrite(&d_61eb_d5ba, 2, 1, fp);
        fwrite(&d_61eb_d610, 2, 1, fp);
        fwrite(&d_61eb_d5bc, 2, 1, fp);
        fwrite(&d_61eb_d5be, 2, 1, fp);
        fwrite(&d_61eb_d5c0, 2, 1, fp);
        fwrite(&d_432e_0666, 1, 1, fp);
        fwrite(&d_432e_0667, 1, 1, fp);
        fwrite(d_432e_0668, 1, 1, fp);
        fwrite(&d_432e_0669, 1, 1, fp);
        fwrite(d_432e_066a, 1, 1, fp);
        fwrite(&d_432e_066b, 1, 1, fp);
        fwrite(&d_432e_066c, 1, 1, fp);
        fwrite(&d_432e_066d, 1, 1, fp);
        fwrite(&d_61eb_d652, 2, 1, fp);
        fwrite(&d_61eb_d650, 2, 1, fp);
        fwrite(d_432e_7672, 3064, 1, fp);
        fwrite(&d_432e_b437, 1, 1, fp);
        fwrite(&d_432e_b438, 1, 1, fp);
        fwrite(&d_432e_b439, 1, 1, fp);
        fwrite(&d_432e_b43a, 1, 1, fp);
        fwrite(&d_61eb_d9c4, 1, 1, fp);
        fwrite(d_3334_f26e, 2, 1, fp);
        fwrite(&d_3334_f270, 2, 1, fp);
        fwrite(&d_3334_f272, 2, 1, fp);
        fwrite(&d_3334_f274, 2, 1, fp);
        fwrite(d_432e_ec37, 40, 1, fp);
        fwrite(d_432e_66ae, 368, 1, fp);
        fwrite(d_432e_74e2, 400, 1, fp);
        fwrite(&d_61eb_d58e, 2, 1, fp);
        fwrite(&d_61eb_d590, 2, 1, fp);
        fwrite(&d_61eb_da4f, 1, 1, fp);
        fwrite(&d_61eb_dba3, 1, 1, fp);
        fwrite(&d_61eb_dba4, 4, 1, fp);
        fwrite(&d_61eb_91e3, 4, 1, fp);
        fclose(fp);
        f_215d_0df0(150);
    }
    d_61eb_d5a0 = -1;
}

void f_9a9e_4084(FILE *fp)
{
    fread(d_432e_45de, 0x1770, 1, fp);
}

void f_9a9e_40a6(FILE *fp)
{
    fwrite(d_432e_45de, 0x1770, 1, fp);
}

/* loads the hall of fame */
void f_9a9e_40c8(void)
{
    FILE *fp;
    unsigned char c;

    f_215d_19eb(1);
    d_432e_c28d[0] = 0;
    fp = fopen("hiscores", "rb");
    for (c = 0; c <= 1; c = c + 1)
        for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= 19; d_61eb_d5d8++) {
            d_61eb_dbdc = f_215d_1629(d_61eb_dc60, 1);
            f_215d_0cb3(fp, d_61eb_dbdc + d_61eb_d5d8 * 160 + c * 80);
            f_215d_0cb3(fp, d_61eb_dbdc + d_61eb_d5d8 * 160 + c * 80 + 3200);
        }
    fread(d_432e_0d8e, 160, 1, fp);
    fclose(fp);
}

/* saves the hall of fame */
void f_9a9e_41bc(void)
{
    FILE *fp;
    unsigned char c;

    f_215d_19eb(1);
    d_432e_c28d[0] = 0;
    f_9a9e_42c4("Saving Hall of Fame");
    fp = fopen("hiscores", "wb");
    if (fp != NULL) {
        for (c = 0; c <= 1; c = c + 1)
            for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= 19; d_61eb_d5d8++) {
                d_61eb_dbdc = f_215d_1629(d_61eb_dc60, 0);
                f_215d_0cee(fp, d_61eb_dbdc + d_61eb_d5d8 * 160 + c * 80);
                f_215d_0cee(fp, d_61eb_dbdc + d_61eb_d5d8 * 160 + c * 80 + 3200);
            }
        fwrite(d_432e_0d8e, 160, 1, fp);
        fclose(fp);
    }
}

/* shows a message in a box */
void f_9a9e_42c4(char far *s)
{
    if (!d_432e_c28d[0])
        f_1a83_48f9("");
    f_215d_19f4();
    if (_fstrcmp(d_432e_c28d, s) != 0) {
        f_215d_088c(16);
        f_215d_08aa(20, 0x79, 0x134, 0x59);
        f_215d_088c(20);
        f_215d_08aa(16, 0x75, 0x130, 0x55);
        f_215d_089b(28);
        f_215d_1016(16, 0x75, 16, 0x55);
        f_215d_1016(16, 0x55, 0x130, 0x55);
        f_215d_089b(16);
        f_215d_1016(0x130, 0x55, 0x130, 0x75);
        f_215d_1016(0x130, 0x75, 16, 0x75);
        f_1a83_3a43(-1.0, 12.5, 1, s);
        _fstrcpy(d_432e_c28d, s);
    }
}

/* swaps two clubs' records */
void f_9a9e_43ba(int a, int b)
{
    FILE *fp;
    char x[280];
    char y[280];

    for (d_61eb_d5aa = 0; d_61eb_d5aa <= 12; d_61eb_d5aa++) {
        f_215d_13f1(&d_432e_1f9e[d_61eb_d5aa][a], &d_432e_1f9e[d_61eb_d5aa][b], 1);
        if (d_61eb_d5aa < 10) {
            f_215d_13f1(&d_432e_26ba[d_61eb_d5aa][a], &d_432e_26ba[d_61eb_d5aa][b], 2);
            if (d_61eb_d5aa < 4) {
                d_61eb_dbc8 = f_215d_1629(d_61eb_dc56, 1);
                f_215d_13f1(&d_61eb_dbc8[d_61eb_d5aa][a], &d_61eb_dbc8[d_61eb_d5aa][b], 4);
            }
        }
    }
    f_215d_13f1(&d_432e_33c6[a], &d_432e_33c6[b], 4);
    f_215d_19eb(2);
    fp = fopen(d_5313_0e38, "rb+");
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

/* swaps two clubs in the history table */
void f_9a9e_45df(int a, int b)
{
    unsigned k, i, j;

    for (k = 0; k <= 6; k++)
        for (i = 0; i <= 15; i++)
            if (d_432e_b43b[0][i][k] > 0)
                for (j = 1; j <= 2; j++) {
                    if (d_432e_b43b[j][i][k] == a)
                        d_432e_b43b[j][i][k] = b;
                    else if (d_432e_b43b[j][i][k] == b)
                        d_432e_b43b[j][i][k] = a;
                }
}

/* asks a player's names */
void f_9a9e_46c0(int n)
{
    char buf[60];

    for (d_61eb_d658 = 0; d_61eb_d658 <= 1; d_61eb_d658++) {
        if (d_61eb_d658 == 0)
            strcpy(buf, "First Name ?");
        else
            strcpy(buf, "Surname ?");
        f_1a83_4a35(2.625, d_61eb_d658 * 3 + 7, buf);
        if (d_432e_c369[0] == 0) {
            if (d_61eb_d658 == 0)
                strcpy(d_432e_c369, "Player");
            else
                strcpy(d_432e_c369, f_1a83_477e(n + 1));
        }
        strcpy(d_432e_c2c9[d_61eb_d658][n], d_432e_c369);
    }
}

void f_9a9e_4775(void)
{
}

void f_9a9e_477e(void)
{
}
