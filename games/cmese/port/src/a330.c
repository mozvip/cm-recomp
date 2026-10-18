/* Native port of decomp/src/A330.C (see ../README.md). */
/* @at a330:0000 */
/* @data 69da:54f4 */
/* @module */

/* Overlay a330 (CM93's 9E77.C, from parts of CM1's 992A.C): printing a team's fixtures and
 * results; the week's squad news (injuries suffered in matches and training, suspensions,
 * bans, cup-tied players and players returning), the performance of the week and fines for
 * foul play; the medical specialist's offer to operate abroad; takeovers that rescue clubs
 * in financial trouble and the board's warnings; the international squads (senior and
 * under-21) of the home nations; loading and saving the game (saved or quick-start) and the
 * hall of fame; swapping clubs' records and history; and asking a player's names. Its data
 * is the function-local initialisers (1014's lo/hi ranges, 27ce's nations), then its
 * literal pool. */
#include "port.h"

/* the functions, in the reverse order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_a330_0000(int16_t team);
void f_a330_045f(char *s);
void f_a330_04ca(void);
void f_a330_0a97(void);
void f_a330_0bd1(void);
void f_a330_0d3c(int16_t n);
void f_a330_1014(int16_t p);
void f_a330_12ed(int16_t p, int16_t a, int16_t b);
void f_a330_15f1(int16_t p);
void f_a330_181a(int16_t p);
void f_a330_1c2a(int16_t p);
void f_a330_1d35(void);
void f_a330_27ce(void);
void f_a330_2b82(char quick);
void f_a330_36da(void);
void f_a330_423a(FILE *fp);
void f_a330_425c(FILE *fp);
void f_a330_427e(void);
void f_a330_4372(void);
void f_a330_447a(char *s);
void f_a330_4570(int16_t a, int16_t b);
void f_a330_4795(int16_t a, int16_t b);
void f_a330_4876(int16_t n);
void f_a330_492b(void);
void f_a330_4934(void);

struct score { uint16_t home1 : 4; uint16_t away1 : 4; uint16_t home2 : 4; uint16_t away2 : 4; };
char *f_1a70_46c1(int16_t player);
char *f_1a70_4592(int16_t player);
char f_1a70_2bc7(int16_t x);
char f_1a70_2d83(int16_t player);
char f_1a70_5b94(int16_t player);
void f_1a70_3b47(float x, float y, int16_t colour, char *s);
void f_1a70_4a41(char *title);
void f_1a70_598c(int16_t team, char *title, char *text);
void f_2162_0897();
void f_2162_08a6();
void f_2162_08b5(int16_t x1, int16_t y1, int16_t x2, int16_t y2);
void f_2162_090f(int16_t x1, int16_t y1, int16_t x2, int16_t y2);
int32_t f_2162_0da1(int32_t n);
char *f_2162_0e9b(char *s);
int16_t f_2162_13ba(int16_t a, int16_t b);
void f_2162_13fc(void *a, void *b, int16_t n);
void f_2162_19f6();
void f_7827_4802(int16_t team, char names[][98][20], unsigned char *comp, unsigned char *week);
void f_9661_11c2(int16_t player, char c);
void f_b085_42bd(void);
void f_b085_42c6(void);
void f_b085_42cf(char *s);
void f_b085_42fa(char n);
extern char d_536d_a475[];
extern char d_536d_74f5[];
extern char d_536d_6a21[];
extern char d_536d_6751[];
extern char d_536d_6611[];
extern char d_536d_6481[];
extern char d_536d_4c3d[][80];
extern struct score d_536d_3066[];
extern int32_t d_536d_306a;
extern int16_t d_536d_306e[][14];
extern unsigned char d_536d_30a6[][14];
extern int16_t d_4512_1710[][80];
extern unsigned char d_3668_0000[][1860];
extern unsigned char d_28da_2a78[][1860];
extern int16_t d_28da_2270[];
extern int16_t d_5dbf_1292[][2][98];
extern nearptr d_69da_b1fc[];
extern int16_t d_69da_dd0a;
extern int16_t d_69da_dc9e;
extern int16_t d_69da_dbaa;
extern int16_t d_69da_dba8;
extern int16_t d_69da_db2c;
extern int16_t d_69da_da2c;
extern int16_t d_69da_da2a;
extern int16_t d_69da_da28;
extern int16_t d_69da_da24;
extern int16_t d_69da_da18;
extern int16_t d_69da_da14;
extern int16_t d_69da_d9d8;
extern int16_t d_69da_d9d2;
extern int16_t d_69da_d9ae;
extern int16_t d_69da_d9a0;
extern int16_t d_69da_d99a;
extern int16_t d_69da_d996;
extern int16_t d_69da_d98e;
struct flags_a { unsigned char b0; uint16_t f8 : 1; uint16_t f9 : 1; uint16_t : 6; uint16_t : 2; uint16_t f18 : 1; uint16_t f19 : 1; uint16_t : 4; uint16_t f24 : 1; uint16_t : 3; uint16_t f28 : 1; uint16_t : 1; uint16_t f30 : 1; uint16_t : 1; };   /* port: without BCC's ": 0" (GCC would start f24 at byte 4, not 3) */
struct flags_w { uint16_t f0 : 1; uint16_t f1 : 1; uint16_t f2 : 1; uint16_t f3 : 1; uint16_t f4 : 1; uint16_t f5 : 1; uint16_t f6 : 1; uint16_t f7 : 1; uint16_t f8 : 1; uint16_t f9 : 1; uint16_t f10 : 1; uint16_t f11 : 1; uint16_t f12 : 1; uint16_t f13 : 1; uint16_t f14 : 1; uint16_t f15 : 1; uint16_t f16 : 1; uint16_t f17 : 1; uint16_t f18 : 1; uint16_t f19 : 1; uint16_t f20 : 1; uint16_t f21 : 1; uint16_t f22 : 1; uint16_t f23 : 1; uint16_t f24 : 1; uint16_t f25 : 1; uint16_t f26 : 1; uint16_t f27 : 1; uint16_t f28 : 1; uint16_t f29 : 1; uint16_t f30 : 1; uint16_t f31 : 1; };
union flags { struct flags_a a; struct flags_w w; };
void f_1a70_0e4d(int16_t p);
void f_1a70_12cd(int16_t player);
char *f_1a70_3404(int16_t x);
void f_1a70_5688(int16_t a);
char f_1a70_5b76(int16_t player);
int16_t f_1a70_5baa(int16_t player);
unsigned char f_1a70_5bc8(int16_t player);
char f_1a70_6d23(int16_t player);
float f_2162_10cf(void);
char *f_2162_104e(char *s);
float f_2162_1324(float a, float b);
int16_t f_2162_134e(int16_t a, int16_t b);
void *f_2162_1634(int16_t handle, int16_t page);
void f_b085_3d39(char club);
void f_b8da_0c4c(int16_t player);
extern char d_536d_82dd[];
extern char d_536d_82de[];
extern char d_536d_6de3[];
extern unsigned char d_4512_a4c8[][5][16];
extern unsigned char d_4512_a4f8[][80];
extern int16_t d_4512_471c[];
extern int16_t d_4512_1990[];
extern int32_t d_69da_df61;
extern char d_69da_ddb3;
extern unsigned char d_69da_ddae;
extern int16_t d_69da_dd18;
extern int16_t d_69da_dd16;
extern int16_t d_69da_dd14;
extern int16_t d_69da_dd12;
extern int16_t d_69da_dd0e;
extern int16_t d_69da_dc82;
extern int16_t d_69da_db5a;
extern int16_t d_69da_db58;
extern int16_t d_69da_da86;
extern int16_t d_69da_da6e;
extern int16_t d_69da_d9e0;
extern struct flags_w d_4512_bdc8[];
extern int32_t (*d_69da_dfae)[80];
extern int16_t d_69da_dff0;
void f_1a70_0adb(int16_t line, char *s);
void f_1a70_0b46(char *s);
char f_1a70_0c2c(void);
void f_1a70_1cda(int16_t p);
void f_1a70_2eaa(int16_t n, char *title, char *items);
void f_1a70_3226(int16_t last);
void f_1a70_3d0c(float x, float y, int16_t bg, int16_t fg, int16_t w, char *s);
char *f_1a70_4739(int16_t player);
int32_t f_1a70_588f(int16_t team);
void f_7dd6_002a(int16_t team);
void f_aac9_42ed(int16_t player, int16_t a, char b);
extern unsigned char d_4512_0000[][82];
extern farptr d_5dbf_0359[];
extern int32_t d_69da_df2d;
extern char d_69da_de24;
extern char d_69da_de23;
extern char d_69da_de13;
extern char d_69da_ddf4;
extern char d_69da_ddbe;
extern char d_69da_ddbc;
extern int16_t d_69da_dda0;
extern int16_t d_69da_dd9e;
extern int16_t d_69da_dd1e;
extern int16_t d_69da_dd1c;
extern int16_t d_69da_dd1a;
extern int16_t d_69da_db84;
extern int16_t d_69da_db6c;
extern int16_t d_69da_d992;
char *f_1a70_4793(int16_t manager, char full);
float f_1a70_68b6(int16_t x);
int32_t f_9661_13f2(int16_t player);
void f_9661_3ef4(int16_t club, int16_t a);
int32_t f_a83a_1ea1(int16_t x);
extern int32_t d_69da_df71;
extern int32_t d_69da_df6d;
extern int32_t d_69da_df69;
extern int32_t d_69da_df65;
extern char d_69da_de27;
extern int32_t d_4512_1e90[][80];
extern int16_t d_4512_1a30[];
void f_1a70_0b80(char *s);
char f_1a70_6514(int16_t a, int16_t b);
extern char d_69da_de28;
extern int16_t d_69da_dd24;
extern int16_t d_69da_dd22;
extern int16_t d_69da_dbb0;
extern int16_t d_69da_db18;
extern int16_t d_69da_da04;
extern int16_t d_69da_da00;
extern int16_t d_69da_d9ba;
extern int16_t d_69da_d990;
extern unsigned char (*d_69da_dfba)[1860];
extern int16_t (*d_69da_dfb2)[100];
extern int16_t d_69da_dfec;
extern int16_t d_69da_dff2;
extern unsigned char d_4512_6324[][20];
extern int16_t d_28c9_0000[];
extern float d_28cc_0000[];
extern int16_t d_4512_5e24[][80];
extern unsigned char d_4512_4726[][3][14];
extern int16_t d_3668_ae60[][1860];
extern unsigned char d_5dbf_0996[][460];
extern unsigned char d_5dbf_4fd2[][140];
extern uint32_t d_69da_92f5;
extern nearptr d_69da_b2a0[];
extern nearptr d_69da_b344[];
extern char d_69da_de3f;
extern char d_69da_ddb8;
extern int16_t d_69da_dab8;
extern int16_t d_69da_da4c;
extern int16_t d_69da_da4a;
extern int16_t d_69da_da0a;
extern int16_t d_69da_d9b8;
extern int16_t d_69da_d9b6;
extern int16_t d_69da_d9b4;
extern int16_t d_69da_d9b2;
extern int16_t d_69da_d9b0;
extern int16_t d_69da_d9a8;
extern int16_t d_69da_d9a6;
extern int16_t d_69da_d9a4;
extern int16_t d_69da_d9a2;
extern int16_t d_69da_d99e;
extern int16_t d_69da_d99c;
extern char (*d_69da_dfd6)[151];
extern char (*d_69da_dfd2)[151];
extern char (*d_69da_dfce)[151];
extern char (*d_69da_dfc6)[101];
extern int16_t (*d_69da_dfbe)[2][16];
extern int32_t (*d_69da_dfb6)[140];
extern char *d_69da_dfaa;
extern int16_t *d_69da_dfa2;
extern int32_t *d_69da_df9e;
extern int16_t d_69da_e004;
extern int16_t d_69da_e002;
extern int16_t d_69da_e000;
extern int16_t d_69da_dffc;
extern int16_t d_69da_dff8;
extern int16_t d_69da_dff4;
extern int16_t d_69da_dfee;
extern int16_t d_69da_dfea;
extern int16_t d_69da_dfe8;
void f_2162_0dfb(int16_t ticks);
extern int16_t d_69da_d994;
char *f_1a70_488b(int16_t player);
void f_1a70_4b7d(float x, int16_t w, char *prompt);
void f_2162_0cbe(FILE *fp, char *buf);
void f_2162_0cf9(FILE *fp, char *s);
void f_2162_1021(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2);
void f_2162_19ff(void);
extern int16_t d_69da_da52;
extern int16_t d_69da_dffe;
extern char *d_69da_dfca;
extern char d_536d_5a0f[];
extern int16_t d_28da_10f0[][26];
extern char d_536d_7545[];
extern char d_536d_7595[];
extern int16_t (*d_69da_dfa6)[1860];
struct transfers { int16_t in[6], out[6]; /* the players */ unsigned char in_club[6], out_club[6]; /* the other club */ int32_t in_fee[6], out_fee[6]; /* the fee, 1 for a loan */ unsigned char n_in, n_out; /* how many so far */ };
struct news { int16_t player; char from, to; int32_t fee; };
extern unsigned char d_28c7_0000[];
extern int16_t d_4512_9e64[][2][22];
extern farptr d_5dbf_0000[];
extern int16_t d_69da_dff6;
extern char d_536d_5933[];
extern char d_536d_a44d[];
extern int32_t *d_69da_df9a;
extern int16_t d_69da_dfe6;
extern char d_536d_83b9[][82][5];
extern struct transfers d_536d_0000[];
extern char d_536d_596f[][4][20];
extern unsigned char d_4512_7f74[];
extern char d_536d_4fd5[];
extern unsigned char d_4512_2390[];
extern int16_t d_4512_549a[][14];
extern int16_t d_28da_00b0[][2][13];
extern int16_t d_4512_637c[][16];
extern char d_4512_6d7c[][16];
extern int16_t d_4512_8000[][4][2][30];
extern char d_28da_263c[];
extern int16_t d_4512_87bc[];
extern unsigned char d_4512_880c[][140];
extern int16_t d_4512_8f28[][140];
extern float d_4512_9c34[];
extern int16_t d_4512_a01c[][4];
extern float d_4512_a02c[][4];
extern int16_t d_4512_a04c[];
extern int32_t d_4512_a054[];
extern int16_t d_4512_a064[][4];
extern unsigned char d_4512_a074[][2][4];
extern int16_t d_4512_a0a4[][5];
extern unsigned char d_4512_a2c0[][6][5];
extern unsigned char d_4512_9a18[];
extern int16_t d_536d_493d[3][16][8];
extern int16_t d_28da_0000[];
extern char d_4512_6374;
extern char d_4512_6375;
extern unsigned char d_4512_6376[];
extern char d_4512_6377;
extern unsigned char d_4512_6378[];
extern char d_4512_6379;
extern char d_4512_637a;
extern char d_4512_637b;
extern char d_536d_1c70[];
extern char d_536d_4939[];
extern char d_536d_493a;
extern char d_536d_493b;
extern char d_536d_493c;
extern int16_t d_4512_471e;
extern int16_t d_4512_4720;
extern int16_t d_4512_4722;
extern char d_4512_e438[][4][23];
extern struct news d_536d_1ae0[];
extern int32_t d_4512_727c[][2];
extern char d_536d_a4c5[];


/* print a team's fixtures and results */
void f_a330_0000(int16_t team)
{
    char sep[10];
    char home;
    uint16_t col;
    FILE *fp;
    char names[4][98][20];
    char line[320];
    char scorers[80];
    unsigned char comp[98];
    unsigned char week[98];
    char buf[300];

    f_b085_42bd();
    f_b085_42cf("______________________________________________________________________________\n");
    f_b085_42fa(2);
    sprintf(line, "%s FIXTURES/RESULTS SEASON %d", f_2162_0e9b(NEAR_PTR(d_69da_b1fc[team])), d_69da_d99a);
    f_b085_42cf(line);
    f_b085_42fa(3);
    f_b085_42cf("COMP  OPPONENTS    VEN SCORE GATE   SCORERS");
    f_b085_42fa(2);
    f_7827_4802(team, names, comp, week);
    for (d_69da_da24 = 0; d_69da_da18 - 1 >= d_69da_da24; d_69da_da24++) {
        strcpy(line, names[0][d_69da_da24] + 2);
        sprintf(buf, " %s   %-13.13s(%s)  ", f_2162_0e9b(line), names[1][d_69da_da24], names[2][d_69da_da24]);
        f_b085_42cf(buf);
        if (week[d_69da_da24] < d_69da_d996) {
            d_69da_da28 = week[d_69da_da24] - 1;
            d_69da_da2a = comp[d_69da_da28];
            d_69da_da2c = d_28da_2270[d_69da_da28] + d_69da_da2a;
            home = d_5dbf_1292[d_69da_da2a][0][d_69da_da28] / 32 == team;
            f_2162_19f6(2);
            fp = fopen(d_536d_a475, "rb");
            fseek(fp, (int32_t)(d_69da_da2c - 1) * 155, 0);
            fread(d_536d_3066, 1, 155, fp);
            fclose(fp);
            if (d_536d_3066[1].home1 == 15 && d_536d_3066[1].away1 == 15) {
                d_69da_dba8 = d_536d_3066[0].home2;
                d_69da_dbaa = d_536d_3066[0].away2;
            } else {
                d_69da_dba8 = d_536d_3066[1].home1;
                d_69da_dbaa = d_536d_3066[1].away1;
            }
            if (home == 0)
                f_2162_13fc(&d_69da_dba8, &d_69da_dbaa, 2);
            sprintf(line, "%d-%d", d_69da_dba8, d_69da_dbaa);
            sprintf(buf, "%-5.5s%-7d", line, d_536d_306a);
            f_b085_42cf(buf);
            if (d_69da_dba8 > 0) {
                d_69da_da14 = 0;
                col = 38;
                for (d_69da_d9a0 = 0; d_69da_d9a0 <= 13; d_69da_d9a0++) {
                    if (home) {
                        d_69da_d9ae = d_536d_306e[0][d_69da_d9a0];
                        d_69da_db2c = d_536d_30a6[0][d_69da_d9a0] / 16;
                    } else {
                        d_69da_d9ae = d_536d_306e[1][d_69da_d9a0];
                        d_69da_db2c = d_536d_30a6[1][d_69da_d9a0] / 16;
                    }
                    if (d_69da_db2c > 0) {
                        if (d_69da_da14 > 0)
                            strcpy(sep, ",");
                        else
                            strcpy(sep, "");
                        strcpy(scorers, sep);
                        strcat(scorers, f_1a70_46c1(d_69da_d9ae));
                        if (d_69da_db2c > 1) {
                            sprintf(line, " %d", d_69da_db2c);
                            strcat(scorers, line);
                        }
                        if (strlen(scorers) > col) {
                            if (sep[0]) {
                                f_b085_42cf(sep);
                                f_b085_42fa(1);
                                strcpy(scorers, scorers + 1);
                            } else
                                f_b085_42fa(1);
                            f_b085_42cf("                                    ");
                            col = 38;
                        }
                        f_b085_42cf(scorers);
                        col = col - strlen(scorers);
                        d_69da_da14++;
                    }
                }
            }
        }
        f_b085_42fa(1);
    }
    f_b085_42fa(2);
    f_b085_42cf("______________________________________________________________________________\n");
    f_b085_42fa(2);
    f_b085_42c6();
}

/* a message box */
void f_a330_045f(char *s)
{
    f_1a70_4a41("");
    f_2162_0897(16);
    f_2162_08b5(20, 121, 308, 89);
    f_2162_0897(31);
    f_2162_08b5(16, 117, 304, 85);
    f_2162_08a6(19);
    f_2162_090f(16, 117, 304, 85);
    f_1a70_3b47(-1.0, 12.5, 1, s);
}

/* the week's injuries and suspensions */
void f_a330_04ca(void)
{
    unsigned char flag[1860];
    char tmp[320];
    char title[80];
    char text[180];

    memset(flag, 0, 1860);
    if (d_536d_6611[0] && d_69da_d996 > 8) {
        for (d_69da_d9d2 = 1; strlen(d_536d_6611) >= d_69da_d9d2; d_69da_d9d2 += 4) {
            strncpy(tmp, d_536d_6611 + d_69da_d9d2 - 1, 4);
            tmp[4] = 0;
            if (!f_1a70_5b94(d_69da_d9ae = atol(tmp))) {
                d_3668_0000[2][d_69da_d9ae] += 10;
                if (d_3668_0000[2][d_69da_d9ae] % 5 == 1)
                    d_3668_0000[2][d_69da_d9ae]--;
                flag[d_69da_d9ae] = 0xff;
                d_4512_1710[4][d_28da_2a78[18][d_69da_d9ae]] += 10;
            } else if (d_69da_d996 > 10 && f_1a70_2d83(d_69da_d9ae) == 0)
                f_a330_12ed(d_69da_d9ae, 26, 2);
        }
    }
    if (d_536d_6751[0] && d_69da_d996 > 8) {
        for (d_69da_d9d2 = 1; strlen(d_536d_6751) >= d_69da_d9d2; d_69da_d9d2 += 4) {
            strncpy(tmp, d_536d_6751 + d_69da_d9d2 - 1, 4);
            tmp[4] = 0;
            if (!f_1a70_5b94(d_69da_d9ae = atol(tmp)) && flag[d_69da_d9ae] == 0) {
                d_3668_0000[2][d_69da_d9ae] += 5;
                if (d_3668_0000[2][d_69da_d9ae] % 5 == 1)
                    d_3668_0000[2][d_69da_d9ae]--;
                d_4512_1710[4][d_28da_2a78[18][d_69da_d9ae]] += 5;
            }
        }
    }
    strcpy(d_536d_74f5, " suffered during the match");
    if (d_536d_6481[0]) {
        for (d_69da_d9d2 = 1; strlen(d_536d_6481) >= d_69da_d9d2; d_69da_d9d2 += 4) {
            strncpy(tmp, d_536d_6481 + d_69da_d9d2 - 1, 4);
            tmp[4] = 0;
            d_69da_d9ae = atol(tmp);
            if (f_2162_0da1(3) > 0) {
                if (!f_1a70_5b94(d_69da_d9ae)) {
                    f_a330_1014(d_69da_d9ae);
                    d_28da_2a78[20][d_69da_d9ae] -= d_28da_2a78[20][d_69da_d9ae] > 0;
                } else if (f_1a70_2d83(d_69da_d9ae) == 0)
                    f_a330_1014(d_69da_d9ae);
            }
        }
    }
    if (d_536d_6a21[0]) {
        for (d_69da_d9d2 = 1; strlen(d_536d_6a21) >= d_69da_d9d2; d_69da_d9d2 += 4) {
            strncpy(tmp, d_536d_6a21 + d_69da_d9d2 - 1, 4);
            tmp[4] = 0;
            d_69da_d9ae = atol(tmp);
            if (f_2162_0da1(5) > 0 && !f_1a70_5b94(d_69da_d9ae))
                d_28da_2a78[15][d_69da_d9ae] = f_2162_13ba(d_28da_2a78[15][d_69da_d9ae] + f_2162_0da1(25),
                                                           d_28da_2a78[9][d_69da_d9ae] + 25);
        }
    }
    for (d_69da_d9ae = 0; d_69da_d98e - 1 >= d_69da_d9ae; d_69da_d9ae++) {
        d_69da_d9d8 = d_28da_2a78[18][d_69da_d9ae];
        if (d_28da_2a78[20][d_69da_d9ae] == 0) {
            d_69da_dc9e = d_3668_0000[2][d_69da_d9ae];
            d_69da_dd0a = (flag[d_69da_d9ae] ? 1 : 0) + (d_69da_dc9e > 0 && d_69da_dc9e % 20 == 0 ? 2 : 0);
            if (d_69da_dd0a > 0) {
                if (d_69da_d996 < 10) {
                    d_28da_2a78[19][d_69da_d9ae] = d_69da_dd0a + 26;
                    if (f_1a70_2bc7(d_69da_d9d8)) {
                        sprintf(title, "%s squad news", (char *)NEAR_PTR(d_69da_b1fc[d_69da_d9d8]));
                        sprintf(text, "%s put under delayed suspension, due to bad discipline.",
                                f_1a70_4592(d_69da_d9ae));
                        f_1a70_598c(d_69da_d9d8, title, text);
                    }
                } else
                    f_a330_12ed(d_69da_d9ae, 26, d_69da_dd0a);
                d_4512_bdc8[d_69da_d9ae].f15 = 1;
                if (f_1a70_2bc7(d_69da_d9d8) == 0 && f_2162_0da1(8) == 0)
                    f_9661_11c2(d_69da_d9ae, -1);
            }
        } else if (d_28da_2a78[19][d_69da_d9ae] == 26 && d_536d_4c3d[0][d_69da_d9d8] && d_69da_d996 > 5) {
            d_28da_2a78[20][d_69da_d9ae] -= 1;
            if (d_28da_2a78[20][d_69da_d9ae] == 0)
                f_a330_15f1(d_69da_d9ae);
        }
    }
}

void f_a330_0a97(void)
{
    char text[320];
    char score[80];

    if (d_4512_471c[0] > -1) {
        f_1a70_4a41("");
        f_1a70_3b47(-1.0, 10.0, 2, "Performance of the week");
        sprintf(d_536d_6de3, "%d-%d", abs(d_4512_471c[2]), d_4512_471c[3]);
        if (d_4512_471c[2] < 0)
            strcat(d_536d_6de3, " Pens");
        strcpy(score, d_536d_82dd);
        score[1] = 0;
        sprintf(text, "%s : %s v %s (%s)", f_2162_104e(f_1a70_3404(d_4512_471c[0])), d_536d_6de3,
                f_2162_104e(f_1a70_3404(d_4512_471c[1])), score);
        f_1a70_3b47(-1.0, 12.0, 6, text);
        strcpy(text, d_536d_82de);
        f_1a70_3b47(-1.0, 14.0, 9, text);
        f_1a70_5688(0);
    }
}

void f_a330_0bd1(void)
{
    char text[320];

    for (d_69da_d9d8 = 0; d_69da_d9d8 <= 79; d_69da_d9d8++) {
        d_69da_dc9e = d_4512_1990[d_69da_d9d8];
        d_69da_ddae = d_69da_d9d8 / 20 + 1;
        if (d_69da_dc9e >= d_69da_ddae * 20 + 150 && d_69da_dc9e % 5 == 0) {
            switch (d_69da_ddae) {
            case 1:
                d_69da_df61 = f_2162_0da1(6) * 5000 + 50000;
                break;
            case 2:
                d_69da_df61 = f_2162_0da1(6) * 1000 + 25000;
                break;
            case 3:
            case 4:
                d_69da_df61 = f_2162_0da1(11) * 500 + 5000;
                break;
            }
            sprintf(text, "%s have been fined %d for excessive foul play.",
                    (char *)NEAR_PTR(d_69da_b1fc[d_69da_d9d8]), d_69da_df61);
            f_1a70_598c(d_69da_d9d8, "FA Disciplinary action", text);
            d_69da_dfae = f_2162_1634(d_69da_dff0, 1);
            d_69da_dfae[12][d_69da_d9d8] += d_69da_df61;
            d_4512_1990[d_69da_d9d8]++;
        }
        f_b085_3d39(d_69da_d9d8);
    }
}

void f_a330_0d3c(int16_t n)
{
    strcpy(d_536d_74f5, " suffered during training");
    for (d_69da_dd0e = 1; d_69da_dd0e <= n; d_69da_dd0e++) {
        d_69da_d9d2 = -1;
        d_69da_db58 = 0;
        do {
            do {
                d_69da_da86 = f_2162_0da1(d_69da_d98e);
                d_69da_d9d8 = d_28da_2a78[18][d_69da_da86];
            } while (d_28da_2a78[20][d_69da_da86] > 0);
            d_69da_db5a = f_2162_0da1(d_28da_2a78[13][d_69da_da86] + 10);
            if (d_69da_db5a > d_69da_d9e0 || d_69da_d9d2 == -1) {
                d_69da_d9d2 = d_69da_da86;
                d_69da_d9e0 = d_69da_db5a;
            }
            d_69da_db58++;
        } while (d_69da_d9d2 <= -1 || d_69da_db58 < 10);
        f_a330_1014(d_69da_d9d2);
        d_69da_d9d2 = -1;
        d_69da_db58 = 0;
        do {
            d_69da_d9d8 = f_2162_0da1(80);
            d_69da_d9d2 = d_69da_d9d8 * 20 + f_2162_0da1(16) + 3000;
            d_69da_db58++;
        } while ((d_4512_a4f8[d_69da_d9d8][f_1a70_5bc8(d_69da_d9d2)] > 0 || f_1a70_2d83(d_69da_d9d2))
                 && d_69da_db58 < 50);
        if (d_4512_a4f8[d_69da_d9d8][f_1a70_5bc8(d_69da_d9d2)] == 0 && f_1a70_2d83(d_69da_d9d2) == 0)
            f_a330_1014(d_69da_d9d2);
        if (d_69da_ddb3 == 0) {
            for (d_69da_da24 = 1; d_69da_da24 <= 7; d_69da_da24++) {
                d_69da_d9d2 = -1;
                d_69da_db58 = 0;
                do {
                    d_69da_da86 = f_2162_0da1(d_69da_d98e);
                    d_69da_db5a = f_2162_0da1(d_28da_2a78[17][d_69da_da86] - 6);
                    if (d_69da_db5a < d_69da_dc82 || d_69da_d9d2 == -1) {
                        d_69da_d9d2 = d_69da_da86;
                        d_69da_dc82 = d_69da_db5a;
                    }
                    d_69da_db58++;
                } while (d_69da_db58 < 2 || d_69da_d9d2 <= -1);
                d_69da_dd12 = d_28da_2a78[15][d_69da_d9d2];
                f_a330_1c2a(d_69da_d9d2);
                if (d_69da_ddb3 == 0) {
                    if (d_28da_2a78[15][d_69da_d9d2] < d_69da_dd12 && d_4512_bdc8[d_69da_d9d2].f7
                        && f_1a70_2bc7(d_28da_2a78[18][d_69da_d9d2]) == 0)
                        f_1a70_0e4d(d_69da_d9d2);
                    else if (d_28da_2a78[15][d_69da_d9d2] > d_69da_dd12 && d_28da_2a78[20][d_69da_d9d2] == 0
                             && f_1a70_2bc7(d_28da_2a78[18][d_69da_d9d2]) == 0)
                        f_1a70_12cd(d_69da_d9d2);
                }
            }
        }
    }
}

void f_a330_1014(int16_t p)
{
    unsigned char lo[26] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 2, 6, 6, 6, 8, 8, 8, 8, 8, 8, 16, 6, 20};
    unsigned char hi[26] = {1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 3, 3, 4, 10, 8, 8, 12, 12, 12, 12, 12, 12, 16, 60, 16, 60};

    d_69da_da6e = f_2162_0da1(100) + 1;
    if (d_69da_da6e <= 43 || f_2162_0da1(2) == 0) {
        char c;

        if (f_1a70_5b76(p) || f_1a70_6d23(p))
            c = d_4512_bdc8[p].f0;
        else if (f_1a70_5b94(p))
            c = d_4512_a4c8[f_1a70_5baa(p)][0][f_1a70_5bc8(p)] == 1 ? 1 : 0;
        do
            d_69da_dd14 = f_2162_0da1(8);
        while (d_69da_dd14 == 4 || d_69da_dd14 == 5 || d_69da_dd14 == 6 || (d_69da_dd14 == 3 && c == 0));
    } else if (d_69da_da6e >= 44 && d_69da_da6e <= 78)
        d_69da_dd14 = f_2162_0da1(6) + 8;
    else if (d_69da_da6e >= 79 && d_69da_da6e <= 92)
        d_69da_dd14 = f_2162_0da1(2) + 14;
    else if (d_69da_da6e >= 93 && d_69da_da6e <= 97)
        d_69da_dd14 = f_2162_0da1(6) + 16;
    else if (d_69da_da6e >= 98)
        d_69da_dd14 = f_2162_0da1(4) + 22;
    d_69da_dd16 = lo[d_69da_dd14] + f_2162_0da1(hi[d_69da_dd14] - lo[d_69da_dd14] + 1);
    f_a330_12ed(p, d_69da_dd14, d_69da_dd16);
    if (f_1a70_5b76(p)) {
        d_69da_dd18 = d_69da_dd16;
        if (d_69da_dd16 >= 12 && f_1a70_2bc7(d_28da_2a78[18][p]) == 0)
            f_b8da_0c4c(p);
        if (d_69da_dd16 >= 16 && f_2162_0da1(15) == 0)
            f_a330_181a(p);
        if (d_69da_dd16 >= 16 && f_2162_0da1(4) == 0) {
            d_28da_2a78[0][p] = d_28da_2a78[0][p] * f_2162_1324(f_2162_10cf(), 0.5);
            d_28da_2a78[9][p] = f_2162_134e(d_28da_2a78[9][p] * f_2162_1324(f_2162_10cf(), 0.5), d_28da_2a78[0][p]);
        }
    }
}

void f_a330_12ed(int16_t p, int16_t a, int16_t b)
{
    char title[120];
    char text[120];

    d_69da_de23 = a == 26 ? -1 : 0;
    d_69da_de24 = a == 50 ? -1 : 0;
    if (!f_1a70_5b94(p)) {
        d_69da_d9d8 = d_28da_2a78[18][p];
        d_28da_2a78[19][p] = a;
        d_28da_2a78[20][p] = b;
        d_3668_0000[2][p] += d_69da_de23 ? 1 : 0;
    } else {
        d_69da_d9d8 = f_1a70_5baa(p);
        d_4512_a4f8[d_69da_d9d8][f_1a70_5bc8(p)] = b;
    }
    if (d_69da_ddb3 == 0 && d_69da_de13 == 0 && f_1a70_6d23(p) == 0) {
        if (f_1a70_2bc7(d_69da_d9d8) == 0)
            f_1a70_0e4d(p);
        else
            f_1a70_1cda(p);
        if (f_1a70_2bc7(d_69da_d9d8)) {
            if (d_69da_de23) {
                sprintf(title, "%s squad news", (char *)NEAR_PTR(d_69da_b1fc[d_69da_d9d8]));
                sprintf(text, "%s serves a %d match ban, due to bad discipline.", f_1a70_4592(p), b);
                f_1a70_598c(d_69da_d9d8, title, text);
            } else if (d_69da_de24) {
                sprintf(title, "%s squad news", (char *)NEAR_PTR(d_69da_b1fc[d_69da_d9d8]));
                sprintf(text, "%s is ineligible for today's game - he is cuptied.", f_1a70_4592(p));
                f_1a70_598c(d_69da_d9d8, title, text);
            } else if (a != 51) {
                if (b == 1)
                    strcpy(d_536d_7545, "a few days");
                else
                    sprintf(d_536d_7545, "about %d weeks", b);
                sprintf(title, "%s %ssquad news", (char *)NEAR_PTR(d_69da_b1fc[d_69da_d9d8]),
                        f_1a70_5b94(p) ? "reserve " : "");
                sprintf(text, "%s out for %s with %s%s.", f_1a70_4592(p), d_536d_7545, FAR_PTR(d_5dbf_0359[a]), d_536d_74f5);
                f_1a70_598c(d_69da_d9d8, title, text);
            }
        }
    }
    if (!f_1a70_5b94(p) && f_2162_0da1(d_28da_2a78[14][p] + 10) < f_2162_0da1(10)
        && b > f_2162_0da1(3) + 5)
        d_28da_2a78[15][p] = f_2162_134e(d_28da_2a78[15][p] - f_2162_0da1(25), 10);
}

#pragma option -O-
void f_a330_15f1(int16_t p)
{
    char what[180];
    char title[80];
    char text[180];

    if (!f_1a70_5b94(p)) {
        d_69da_d9d8 = d_28da_2a78[18][p];
        d_69da_de23 = d_28da_2a78[19][p] == 26;
        d_69da_de24 = d_28da_2a78[19][p] == 50;
        d_28da_2a78[19][p] = 0;
        d_28da_2a78[20][p] = 0;
        d_4512_bdc8[p].f25 = 0;
        d_4512_bdc8[p].f26 = 0;
        d_4512_bdc8[p].f27 = 0;
        d_4512_bdc8[p].f23 = 1;
    } else {
        d_69da_d9d8 = f_1a70_5baa(p);
        d_69da_de23 = 0;
        d_69da_de24 = 0;
        d_4512_a4f8[d_69da_d9d8][f_1a70_5bc8(p)] = 0;
    }
    if (d_69da_de13 == 0 && f_1a70_6d23(p) == 0) {
        if (f_1a70_2bc7(d_69da_d9d8) && !d_69da_de24) {
            if (d_69da_de23)
                strcpy(what, "returns from his disciplinary ban.");
            else if (!f_1a70_5b94(p))
                sprintf(what, "resumes training at %d%% match fitness.", d_28da_2a78[21][p]);
            else
                strcpy(what, "resumes training.");
            sprintf(title, "%s %ssquad news", (char *)NEAR_PTR(d_69da_b1fc[d_69da_d9d8]),
                    f_1a70_5b94(p) ? "reserve " : "");
            sprintf(text, "%s %s", f_1a70_4592(p), what);
            f_1a70_598c(d_69da_d9d8, title, text);
        }
        if (!f_1a70_5b94(p) && f_1a70_2bc7(d_28da_2a78[18][p]) == 0)
            f_1a70_12cd(p);
    }
}

void f_a330_181a(int16_t p)
{
    char ok;
    char failed;
    char buf[320];

    ok = 0;
    failed = 0;
    d_69da_dd1a = d_28da_2a78[18][p];
    d_69da_df2d = f_2162_0da1(11) * 10000 + 100000;
    if (f_1a70_2bc7(d_69da_dd1a) && d_3668_0000[7][p] == 0xff && d_69da_ddb3 == 0 && d_69da_de13 == 0) {
        switch (d_69da_dd1c = f_2162_0da1(7)) {
        case 0: strcpy(d_536d_7595, "Norway"); break;
        case 1: strcpy(d_536d_7595, "Germany"); break;
        case 2: strcpy(d_536d_7595, "the USA"); break;
        case 3: strcpy(d_536d_7595, "Italy"); break;
        case 4: strcpy(d_536d_7595, "Sweden"); break;
        case 5: strcpy(d_536d_7595, "Canada"); break;
        case 6: strcpy(d_536d_7595, "Holland"); break;
        }
        do {
            d_69da_ddf4 = 0;
            f_1a70_4a41("Medical Specialist");
            sprintf(buf, " %s injury ", f_1a70_4739(p));
            f_1a70_3d0c(1.0, 4.0, -(d_4512_0000[2][d_69da_dd1a] / 16), d_4512_0000[2][d_69da_dd1a] % 16, 0, buf);
            sprintf(buf, "A top surgeon in %s can operate", d_536d_7595);
            f_1a70_0adb(7, buf);
            if (d_4512_bdc8[p].f20)
                strcpy(buf, "Cost is covered by insurance");
            else
                sprintf(buf, "It would cost %d", d_69da_df2d);
            f_1a70_0adb(9, buf);
            f_1a70_2eaa(12, "", "View Factfile|Last Finances|Accept Offer|Refuse Offer|");
            do {
                d_69da_ddbc = -1;
                f_1a70_3226(3);
                d_69da_dd1e = d_69da_d992;
                if (d_69da_dd1e == 0) {
                    do
                        f_aac9_42ed(p, -1, 0);
                    while (!d_69da_ddbe);
                    d_69da_ddbe = 0;
                    d_69da_ddf4 = -1;
                } else if (d_69da_dd1e == 1) {
                    f_7dd6_002a(d_69da_dd1a);
                    d_69da_ddf4 = -1;
                } else if (d_69da_dd1e == 2) {
                    if (f_1a70_0c2c()) {
                        if (!d_4512_bdc8[p].f20 && d_69da_df2d > f_1a70_588f(d_69da_dd1a) * 0.5) {
                            f_1a70_0b46("The board refuse");
                            d_69da_ddbc = 0;
                        } else {
                            sprintf(buf, "%s has the operation", f_1a70_4739(p));
                            f_1a70_0b46(buf);
                            ok = -1;
                            if (f_2162_0da1(8) == 0) {
                                f_1a70_0b46("But it is unsuccessful");
                                failed = -1;
                            } else
                                f_1a70_0b46("It is successful");
                        }
                    } else
                        d_69da_ddbc = 0;
                } else if (d_69da_dd1e == 3) {
                    if (f_1a70_0c2c()) {
                        f_1a70_0b46("The offer is refused");
                        0;
                    } else
                        d_69da_ddbc = 0;
                }
            } while (!d_69da_ddbc);
        } while (d_69da_ddf4 != 0);
    } else if (d_4512_bdc8[p].f20
               || d_28da_2a78[23][p] < 3 && f_1a70_588f(d_69da_dd1a) >= d_69da_df2d) {
        ok = -1;
        if (f_2162_0da1(8) == 0)
            failed = -1;
    }
    if (ok && !d_4512_bdc8[p].f20) {
        d_69da_dfae = f_2162_1634(d_69da_dff0, 1);
        d_69da_dfae[13][d_69da_dd1a] += d_69da_df2d;
    }
    if (ok == 0 && f_2162_0da1(4) == 0 || ok && failed)
        d_4512_bdc8[p].f17 = 1;
}

void f_a330_1c2a(int16_t p)
{
    d_69da_db84 = 50 - (8.5 - d_4512_0000[0][d_28da_2a78[18][p]]) * 5;
    if (d_69da_db84 > f_2162_0da1(101))
        d_69da_db6c = f_2162_0da1(10);
    else
        d_69da_db6c = -f_2162_0da1(10);
    d_69da_dd9e = f_2162_134e(d_28da_2a78[0][p] - 25, 10);
    d_69da_dda0 = f_2162_13ba(d_28da_2a78[0][p] + 25, d_28da_2a78[9][p] + 25);
    d_28da_2a78[15][p] = f_2162_134e(f_2162_13ba(d_28da_2a78[15][p] + d_69da_db6c, d_69da_dda0), d_69da_dd9e);
}

void f_a330_1d35(void)
{
    char title[80];
    char text[180];
    int16_t wage[30];

    for (d_69da_d9d8 = 0; d_69da_d9d8 <= 79; d_69da_d9d8++) {
        d_69da_df65 = f_a83a_1ea1(d_69da_d9d8) - d_4512_1e90[0][d_69da_d9d8];
        if (d_69da_df65 < 0) {
            d_69da_dfae = f_2162_1634(d_69da_dff0, 1);
            d_69da_dfae[3][d_69da_d9d8] += labs(d_69da_df65) * 0.0005;
            d_69da_de27 = 0;
        } else {
            d_69da_dfae = f_2162_1634(d_69da_dff0, 1);
            d_69da_dfae[10][d_69da_d9d8] += d_69da_df65 * 0.004;
            d_69da_de27 = -1;
        }
        switch (d_69da_d9d8 / 20) {
        case 0:
            d_69da_df69 = 30000;
            d_69da_dfae = f_2162_1634(d_69da_dff0, 1);
            d_69da_dfae[6][d_69da_d9d8] += f_2162_0da1(5000) + 10000;
            d_69da_dfae[13][d_69da_d9d8] += f_2162_0da1(5000) + 20000;
            break;
        case 1:
            d_69da_df69 = 10000;
            d_69da_dfae = f_2162_1634(d_69da_dff0, 1);
            d_69da_dfae[6][d_69da_d9d8] += f_2162_0da1(2500) + 5000;
            d_69da_dfae[13][d_69da_d9d8] += f_2162_0da1(5000) + 5000;
            break;
        case 2:
            d_69da_df69 = 5000;
            d_69da_dfae = f_2162_1634(d_69da_dff0, 1);
            d_69da_dfae[6][d_69da_d9d8] += f_2162_0da1(2500) + 2500;
            d_69da_dfae[13][d_69da_d9d8] += f_2162_0da1(2000) + 2000;
            break;
        case 3:
            d_69da_df69 = 2500;
            d_69da_dfae = f_2162_1634(d_69da_dff0, 1);
            d_69da_dfae[6][d_69da_d9d8] += f_2162_0da1(1250) + 1250;
            d_69da_dfae[13][d_69da_d9d8] += f_2162_0da1(1000) + 2000;
            break;
        }
        d_69da_dfae = f_2162_1634(d_69da_dff0, 1);
        if (d_69da_d996 < 6)
            d_69da_dfae[0][d_69da_d9d8] += d_4512_0000[1][d_69da_d9d8] / (f_1a70_68b6(d_69da_d9d8) * 4) * 30000
                + f_2162_0da1(10000) - f_2162_0da1(10000);
        else
            d_69da_dfae[4][d_69da_d9d8] += d_69da_df69;
        d_69da_dfa6 = f_2162_1634(d_69da_dfec, 0);
        for (d_69da_d9a0 = 0; d_69da_d9a0 <= d_4512_0000[7][d_69da_d9d8] - 1; d_69da_d9a0++)
            wage[d_69da_d9a0] = d_69da_dfa6[4][d_28da_10f0[d_69da_d9d8][d_69da_d9a0]];
        for (d_69da_d9a0 = 0; d_69da_d9a0 <= d_4512_0000[7][d_69da_d9d8] - 1; d_69da_d9a0++) {
            d_69da_d9ae = d_28da_10f0[d_69da_d9d8][d_69da_d9a0];
            d_69da_dfae = f_2162_1634(d_69da_dff0, 1);
            d_69da_dfae[7][d_69da_d9d8] += wage[d_69da_d9a0];
            if (d_4512_bdc8[d_69da_d9ae].f20) {
                d_69da_df2d = f_9661_13f2(d_69da_d9ae);
                d_69da_dfae = f_2162_1634(d_69da_dff0, 1);
                d_69da_dfae[13][d_69da_d9d8] += d_69da_df2d;
            }
            d_69da_dfae = f_2162_1634(d_69da_dff0, 1);
            if (d_4512_bdc8[d_69da_d9ae].f25)
                d_69da_dfae[13][d_69da_d9d8] += 10000;
            if (d_4512_bdc8[d_69da_d9ae].f26)
                d_69da_dfae[13][d_69da_d9d8] += 5000;
            if (d_4512_bdc8[d_69da_d9ae].f27)
                d_69da_dfae[13][d_69da_d9d8] += 3000;
        }
        d_69da_dfae = f_2162_1634(d_69da_dff0, 1);
        d_69da_dfae[11][d_69da_d9d8] += d_4512_0000[1][d_69da_d9d8] * 200 / (1 << d_69da_d9d8 / 20);
        d_69da_df6d = 0;
        d_69da_dfae = f_2162_1634(d_69da_dff0, 0);
        for (d_69da_da24 = 0; d_69da_da24 <= 13; d_69da_da24++) {
            if (d_69da_da24 <= 6)
                d_69da_df6d += d_69da_dfae[d_69da_da24][d_69da_d9d8];
            else if (d_69da_da24 != 8)
                d_69da_df6d -= d_69da_dfae[d_69da_da24][d_69da_d9d8];
        }
        d_69da_dfae = f_2162_1634(d_69da_dff0, 1);
        if (d_69da_df6d > 0)
            d_69da_dfae[8][d_69da_d9d8] += d_69da_df6d * 0.4;
        d_69da_dfae = f_2162_1634(d_69da_dff0, 0);
        for (d_69da_da24 = 0; d_69da_da24 <= 13; d_69da_da24++) {
            if (d_69da_da24 <= 6)
                d_4512_1e90[0][d_69da_d9d8] += d_69da_dfae[d_69da_da24][d_69da_d9d8];
            else
                d_4512_1e90[0][d_69da_d9d8] -= d_69da_dfae[d_69da_da24][d_69da_d9d8];
        }
        if (f_a83a_1ea1(d_69da_d9d8) + f_2162_0da1(100000) + 250000 < d_69da_df65) {
            switch (d_69da_d9d8 / 20) {
            case 0:
                d_69da_df71 = f_2162_0da1(6) * 100000 + 500000;
                break;
            case 1:
                d_69da_df71 = f_2162_0da1(6) * 50000 + 250000;
                break;
            case 2:
                d_69da_df71 = f_2162_0da1(6) * 25000 + 125000;
                break;
            case 3:
                d_69da_df71 = f_2162_0da1(6) * 12500 + 62500;
                break;
            }
            d_69da_df71 += d_69da_df65;
            d_69da_df71 = d_69da_df71 / 10000 * 10000;
            sprintf(title, "%s takeover!", (char *)NEAR_PTR(d_69da_b1fc[d_69da_d9d8]));
            sprintf(text, "%s have been rescued by a %d takeover deal. ", (char *)NEAR_PTR(d_69da_b1fc[d_69da_d9d8]), d_69da_df71);
            f_1a70_598c(d_69da_d9d8, title, text);
            d_69da_dfae = f_2162_1634(d_69da_dff0, 1);
            d_69da_dfae[6][d_69da_d9d8] += d_69da_df71;
            d_4512_1e90[0][d_69da_d9d8] += d_69da_df71;
            if (d_4512_0000[6][d_69da_d9d8] < f_2162_0da1(31) + 20)
                f_9661_3ef4(d_69da_d9d8, 0);
        } else if (f_a83a_1ea1(d_69da_d9d8) < d_69da_df65) {
            if (f_1a70_2bc7(d_69da_d9d8))
                f_1a70_598c(d_69da_d9d8, f_1a70_4793(d_4512_1a30[d_69da_d9d8], 0),
                    "The club is in severe financial trouble, and you are urged to sell players.");
        } else if (f_a83a_1ea1(d_69da_d9d8) / 2 < d_69da_df65) {
            if (f_1a70_2bc7(d_69da_d9d8))
                f_1a70_598c(d_69da_d9d8, f_1a70_4793(d_4512_1a30[d_69da_d9d8], 0),
                    "The board is concerned at the club's financial situation.");
        }
        d_69da_dfae = f_2162_1634(d_69da_dff0, 1);
        for (d_69da_da24 = 0; d_69da_da24 <= 13; d_69da_da24++)
            (d_69da_dfae + 16)[d_69da_da24][d_69da_d9d8] = d_69da_dfae[d_69da_da24][d_69da_d9d8];
    }
}

/* the international squads: picks the senior and under-21 squads of the five home nations */
void f_a330_27ce(void)
{
    unsigned char *p;
    uint16_t i;
    unsigned char nation[5] = { 0, 25, 9, 10, 32 };
    char title[80];
    char text[180];
    char u21[20];

    f_1a70_0b80("New international squads|have been announced");
    d_69da_d9ae = 0;
    do {
        d_4512_bdc8[d_69da_d9ae].f18 = 0;
        d_4512_bdc8[d_69da_d9ae].f19 = 0;
        if (d_69da_d98e - 1 == d_69da_d9ae)
            d_69da_d9ae = 1680;
        else
            d_69da_d9ae++;
    } while (d_69da_d990 + 1679 >= d_69da_d9ae);
    for (d_69da_da00 = 0; d_69da_da00 <= 1; d_69da_da00++) {
        for (d_69da_dbb0 = 0; d_69da_dbb0 <= 4; d_69da_dbb0++) {
            p = d_28c7_0000;
            for (i = 0; i <= 21; i++) {
                d_69da_da04 = *p++;
                d_69da_dd22 = -1;
                d_69da_de28 = 0;
                do {
                    for (d_69da_da86 = 1; d_69da_da86 <= 100; d_69da_da86++) {
                        d_69da_dfb2 = f_2162_1634(d_69da_dff2, 0);
                        d_69da_d9ae = d_69da_dfb2[d_69da_dbb0][d_69da_da86 - 1];
                        if (d_69da_d9ae > -1 && !d_4512_bdc8[d_69da_d9ae].f18 && d_28da_2a78[20][d_69da_d9ae] == 0 &&
                            (d_28da_2a78[21][d_69da_d9ae] > 90 || d_69da_de28 != 0 || d_69da_d996 < 8) &&
                            (d_69da_da00 == 0 || (d_69da_da00 == 1 && d_28da_2a78[17][d_69da_d9ae] < 22)) &&
                            (f_1a70_6514(d_69da_d9ae, d_69da_da04) || (d_69da_de28 != 0 && d_69da_da04 > 1))) {
                            d_69da_db18 = (d_28da_2a78[0][d_69da_d9ae] * 2 + d_28da_2a78[15][d_69da_d9ae] * 2) / 4;
                            if ((d_3668_0000[0][d_69da_d9ae] > d_69da_d9ba / 3 || d_69da_de28 != 0) &&
                                (d_69da_dd22 == -1 || d_69da_db18 > d_69da_dd24)) {
                                d_69da_dd24 = d_69da_db18;
                                d_69da_dd22 = d_69da_d9ae;
                            }
                        }
                    }
                    d_69da_ddbc = -1;
                    if (d_69da_dd22 == -1 && d_69da_de28 == 0) {
                        d_69da_de28 = -1;
                        d_69da_ddbc = 0;
                    }
                } while (!d_69da_ddbc);
                d_4512_9e64[d_69da_dbb0][d_69da_da00][i] = d_69da_dd22;
                if (d_69da_dd22 > -1) {
                    d_4512_bdc8[d_69da_dd22].f18 = 1;
                    d_4512_bdc8[d_69da_dd22].f19 = d_69da_da00 == 1;
                    if (d_69da_da00 == 0) {
                        d_69da_dfba = f_2162_1634(d_69da_dff6, 1);
                        d_69da_dfba[2][d_69da_dd22]++;
                    }
                    d_69da_d9d8 = d_28da_2a78[18][d_69da_dd22];
                    if (f_1a70_2bc7(d_69da_d9d8)) {
                        sprintf(title, "%s squad news", (char *)NEAR_PTR(d_69da_b1fc[d_69da_d9d8]));
                        strcpy(u21, "");
                        if (d_69da_da00 == 1)
                            strcpy(u21, "under-21 ");
                        sprintf(text, "%s has been called up to the %s %ssquad.", f_1a70_4592(d_69da_dd22),
                                FAR_PTR(d_5dbf_0000[nation[d_69da_dbb0]]), u21);
                        f_1a70_598c(d_69da_d9d8, title, text);
                    }
                }
            }
        }
    }
}

/* loads the saved game (quick == 0) or the quick-start game (quick == 1) */
void f_a330_2b82(char quick)
{
    FILE *fp;

    f_2162_19f6(3);
    d_536d_5933[0] = 0;
    if (quick == 0)
        f_a330_447a("Ok - Loading Saved Game");
    else
        f_a330_447a("Ok - Loading Quick-Start Game");
    fp = fopen(d_536d_a44d, "rb");
    d_69da_dfc6 = f_2162_1634(d_69da_dffc, 1);
    fread(d_69da_dfc6, 8282, 1, fp);
    fread(d_536d_83b9, 820, 1, fp);
    fread(d_536d_0000, 6880, 1, fp);
    d_69da_dfce = f_2162_1634(d_69da_e000, 1);
    fread(d_69da_dfce, 604, 1, fp);
    d_69da_dfd2 = f_2162_1634(d_69da_e002, 1);
    fread(d_69da_dfd2, 604, 1, fp);
    d_69da_dfd6 = f_2162_1634(d_69da_e004, 1);
    fread(d_69da_dfd6, 604, 1, fp);
    fread(d_536d_596f, 160, 1, fp);
    fread(d_69da_b344, 920, 1, fp);
    fread(d_69da_b1fc, 164, 1, fp);
    fread(d_69da_b2a0, 164, 1, fp);
    f_a330_4934();
    f_a330_423a(fp);
    fread(d_28da_2a78, 44640, 1, fp);
    fread(d_3668_0000, 44640, 1, fp);
    d_69da_dfba = f_2162_1634(d_69da_dff6, 1);
    fread(d_69da_dfba, 18600, 1, fp);
    fread(d_3668_ae60, 14880, 1, fp);
    d_69da_dfa6 = f_2162_1634(d_69da_dfec, 1);
    fread(d_69da_dfa6, 18600, 1, fp);
    d_69da_df9a = f_2162_1634(d_69da_dfe6, 1);
    fread(d_69da_df9a, 7440, 1, fp);
    fread(d_536d_4c3d, 640, 1, fp);
    fread(d_4512_0000, 5904, 1, fp);
    fread(d_4512_7f74, 140, 1, fp);
    fread(d_5dbf_0996, 2300, 1, fp);
    fread(d_4512_1710, 1920, 1, fp);
    fread(d_4512_a4c8, 6400, 1, fp);
    fread(d_28da_10f0, 4160, 1, fp);
    d_69da_dfbe = f_2162_1634(d_69da_dff8, 1);
    fread(d_69da_dfbe, 5120, 1, fp);
    fread(d_536d_4fd5, 208, 1, fp);
    fread(d_4512_1e90, 1280, 1, fp);
    fread(d_4512_2390, 9100, 1, fp);
    d_69da_dfaa = f_2162_1634(d_69da_dfee, 1);
    fread(d_69da_dfaa, 3900, 1, fp);
    d_69da_df9e = f_2162_1634(d_69da_dfe8, 1);
    fread(d_69da_df9e, 2600, 1, fp);
    d_69da_dfa2 = f_2162_1634(d_69da_dfea, 1);
    fread(d_69da_dfa2, 1300, 1, fp);
    fread(d_4512_4726, 3444, 1, fp);
    fread(d_4512_549a, 2296, 1, fp);
    fread(d_28da_00b0, 4160, 1, fp);
    fread(d_4512_5e24, 1280, 1, fp);
    fread(d_4512_6324, 80, 1, fp);
    fread(d_5dbf_1292, 15680, 1, fp);
    fread(d_28da_2270, 392, 1, fp);
    d_69da_dfae = f_2162_1634(d_69da_dff0, 1);
    fread(d_69da_dfae, 10240, 1, fp);
    fread(d_4512_637c, 2560, 1, fp);
    fread(d_4512_6d7c, 1280, 1, fp);
    fread(d_4512_8000, 1920, 1, fp);
    fread(d_28da_263c, 640, 1, fp);
    fread(d_28c9_0000, 40, 1, fp);
    fread(d_28cc_0000, 120, 1, fp);
    fread(d_4512_87bc, 80, 1, fp);
    fread(d_4512_880c, 1820, 1, fp);
    fread(d_4512_8f28, 2800, 1, fp);
    d_69da_dfb6 = f_2162_1634(d_69da_dff4, 1);
    fread(d_69da_dfb6, 2240, 1, fp);
    fread(d_4512_9c34, 560, 1, fp);
    fread(d_4512_a01c, 16, 1, fp);
    fread(d_4512_a02c, 32, 1, fp);
    fread(d_4512_a04c, 8, 1, fp);
    fread(d_4512_a054, 16, 1, fp);
    fread(d_4512_9e64, 440, 1, fp);
    d_69da_dfb2 = f_2162_1634(d_69da_dff2, 1);
    fread(d_69da_dfb2, 1000, 1, fp);
    fread(d_4512_a064, 16, 1, fp);
    fread(d_4512_a074, 48, 1, fp);
    fread(d_4512_a0a4, 60, 1, fp);
    fread(d_4512_a2c0, 180, 1, fp);
    fread(d_4512_9a18, 540, 1, fp);
    fread(d_5dbf_4fd2, 280, 1, fp);
    fread(d_536d_493d, 768, 1, fp);
    fread(d_28da_0000, 16, 1, fp);
    fread(&d_69da_d996, 2, 1, fp);
    fread(&d_69da_d9ba, 2, 1, fp);
    fread(&d_69da_d99a, 2, 1, fp);
    fread(&d_69da_dab8, 2, 1, fp);
    fread(&d_69da_d99c, 2, 1, fp);
    fread(&d_69da_d99e, 2, 1, fp);
    fread(&d_69da_d9a2, 2, 1, fp);
    fread(&d_69da_d9a4, 2, 1, fp);
    fread(&d_69da_d9a6, 2, 1, fp);
    fread(&d_69da_d9a8, 2, 1, fp);
    fread(&d_69da_d9b2, 2, 1, fp);
    fread(&d_69da_d9b0, 2, 1, fp);
    fread(&d_69da_da0a, 2, 1, fp);
    fread(&d_69da_d9b4, 2, 1, fp);
    fread(&d_69da_d9b6, 2, 1, fp);
    fread(&d_69da_d9b8, 2, 1, fp);
    fread(&d_4512_6374, 1, 1, fp);
    fread(&d_4512_6375, 1, 1, fp);
    fread(d_4512_6376, 1, 1, fp);
    fread(&d_4512_6377, 1, 1, fp);
    fread(d_4512_6378, 1, 1, fp);
    fread(&d_4512_6379, 1, 1, fp);
    fread(&d_4512_637a, 1, 1, fp);
    fread(&d_4512_637b, 1, 1, fp);
    fread(&d_69da_da4c, 2, 1, fp);
    fread(&d_69da_da4a, 2, 1, fp);
    fread(d_536d_1c70, 3064, 1, fp);
    fread(d_536d_4939, 1, 1, fp);
    fread(&d_536d_493a, 1, 1, fp);
    fread(&d_536d_493b, 1, 1, fp);
    fread(&d_536d_493c, 1, 1, fp);
    fread(&d_69da_ddb8, 1, 1, fp);
    fread(&d_4512_471c, 2, 1, fp);
    fread(&d_4512_471e, 2, 1, fp);
    fread(&d_4512_4720, 2, 1, fp);
    fread(&d_4512_4722, 2, 1, fp);
    fread(d_536d_82dd, 40, 1, fp);
    fread(d_4512_e438, 368, 1, fp);
    fread(d_536d_1ae0, 400, 1, fp);
    fread(&d_69da_d98e, 2, 1, fp);
    fread(&d_69da_d990, 2, 1, fp);
    fread(&d_69da_de3f, 1, 1, fp);
    fread(&d_69da_92f5, 4, 1, fp);
    fclose(fp);
    f_2162_19f6(2);
}

#pragma option -O-
/* saves the game */
void f_a330_36da(void)
{
    FILE *fp;

    f_2162_19f6(3);
    d_536d_5933[0] = 0;
    f_a330_447a("Ok - Saving Data");
    fp = fopen(d_536d_a44d, "wb");
    if (fp != NULL) {
        d_69da_dfc6 = f_2162_1634(d_69da_dffc, 0);
        fwrite(d_69da_dfc6, 8282, 1, fp);
        fwrite(d_536d_83b9, 820, 1, fp);
        fwrite(d_536d_0000, 6880, 1, fp);
        d_69da_dfce = f_2162_1634(d_69da_e000, 0);
        fwrite(d_69da_dfce, 604, 1, fp);
        d_69da_dfd2 = f_2162_1634(d_69da_e002, 0);
        fwrite(d_69da_dfd2, 604, 1, fp);
        d_69da_dfd6 = f_2162_1634(d_69da_e004, 0);
        fwrite(d_69da_dfd6, 604, 1, fp);
        fwrite(d_536d_596f, 160, 1, fp);
        f_a330_492b();
        fwrite(d_69da_b344, 920, 1, fp);
        fwrite(d_69da_b1fc, 164, 1, fp);
        fwrite(d_69da_b2a0, 164, 1, fp);
        f_a330_4934();
        f_a330_425c(fp);
        fwrite(d_28da_2a78, 44640, 1, fp);
        fwrite(d_3668_0000, 44640, 1, fp);
        d_69da_dfba = f_2162_1634(d_69da_dff6, 0);
        fwrite(d_69da_dfba, 18600, 1, fp);
        fwrite(d_3668_ae60, 14880, 1, fp);
        d_69da_dfa6 = f_2162_1634(d_69da_dfec, 0);
        fwrite(d_69da_dfa6, 18600, 1, fp);
        d_69da_df9a = f_2162_1634(d_69da_dfe6, 0);
        fwrite(d_69da_df9a, 7440, 1, fp);
        fwrite(d_536d_4c3d, 640, 1, fp);
        fwrite(d_4512_0000, 5904, 1, fp);
        fwrite(d_4512_7f74, 140, 1, fp);
        fwrite(d_5dbf_0996, 2300, 1, fp);
        fwrite(d_4512_1710, 1920, 1, fp);
        fwrite(d_4512_a4c8, 6400, 1, fp);
        fwrite(d_28da_10f0, 4160, 1, fp);
        d_69da_dfbe = f_2162_1634(d_69da_dff8, 0);
        fwrite(d_69da_dfbe, 5120, 1, fp);
        fwrite(d_536d_4fd5, 208, 1, fp);
        fwrite(d_4512_1e90, 1280, 1, fp);
        fwrite(d_4512_2390, 9100, 1, fp);
        d_69da_dfaa = f_2162_1634(d_69da_dfee, 0);
        fwrite(d_69da_dfaa, 3900, 1, fp);
        d_69da_df9e = f_2162_1634(d_69da_dfe8, 0);
        fwrite(d_69da_df9e, 2600, 1, fp);
        d_69da_dfa2 = f_2162_1634(d_69da_dfea, 0);
        fwrite(d_69da_dfa2, 1300, 1, fp);
        fwrite(d_4512_4726, 3444, 1, fp);
        fwrite(d_4512_549a, 2296, 1, fp);
        fwrite(d_28da_00b0, 4160, 1, fp);
        fwrite(d_4512_5e24, 1280, 1, fp);
        fwrite(d_4512_6324, 80, 1, fp);
        fwrite(d_5dbf_1292, 15680, 1, fp);
        fwrite(d_28da_2270, 392, 1, fp);
        d_69da_dfae = f_2162_1634(d_69da_dff0, 0);
        fwrite(d_69da_dfae, 10240, 1, fp);
        fwrite(d_4512_637c, 2560, 1, fp);
        fwrite(d_4512_6d7c, 1280, 1, fp);
        fwrite(d_4512_8000, 1920, 1, fp);
        fwrite(d_28da_263c, 640, 1, fp);
        fwrite(d_28c9_0000, 40, 1, fp);
        fwrite(d_28cc_0000, 120, 1, fp);
        fwrite(d_4512_87bc, 80, 1, fp);
        fwrite(d_4512_880c, 1820, 1, fp);
        fwrite(d_4512_8f28, 2800, 1, fp);
        d_69da_dfb6 = f_2162_1634(d_69da_dff4, 0);
        fwrite(d_69da_dfb6, 2240, 1, fp);
        fwrite(d_4512_9c34, 560, 1, fp);
        fwrite(d_4512_a01c, 16, 1, fp);
        fwrite(d_4512_a02c, 32, 1, fp);
        fwrite(d_4512_a04c, 8, 1, fp);
        fwrite(d_4512_a054, 16, 1, fp);
        fwrite(d_4512_9e64, 440, 1, fp);
        d_69da_dfb2 = f_2162_1634(d_69da_dff2, 0);
        fwrite(d_69da_dfb2, 1000, 1, fp);
        fwrite(d_4512_a064, 16, 1, fp);
        fwrite(d_4512_a074, 48, 1, fp);
        fwrite(d_4512_a0a4, 60, 1, fp);
        fwrite(d_4512_a2c0, 180, 1, fp);
        fwrite(d_4512_9a18, 540, 1, fp);
        fwrite(d_5dbf_4fd2, 280, 1, fp);
        fwrite(d_536d_493d, 768, 1, fp);
        fwrite(d_28da_0000, 16, 1, fp);
        fwrite(&d_69da_d996, 2, 1, fp);
        fwrite(&d_69da_d9ba, 2, 1, fp);
        fwrite(&d_69da_d99a, 2, 1, fp);
        fwrite(&d_69da_dab8, 2, 1, fp);
        fwrite(&d_69da_d99c, 2, 1, fp);
        fwrite(&d_69da_d99e, 2, 1, fp);
        fwrite(&d_69da_d9a2, 2, 1, fp);
        fwrite(&d_69da_d9a4, 2, 1, fp);
        fwrite(&d_69da_d9a6, 2, 1, fp);
        fwrite(&d_69da_d9a8, 2, 1, fp);
        fwrite(&d_69da_d9b2, 2, 1, fp);
        fwrite(&d_69da_d9b0, 2, 1, fp);
        fwrite(&d_69da_da0a, 2, 1, fp);
        fwrite(&d_69da_d9b4, 2, 1, fp);
        fwrite(&d_69da_d9b6, 2, 1, fp);
        fwrite(&d_69da_d9b8, 2, 1, fp);
        fwrite(&d_4512_6374, 1, 1, fp);
        fwrite(&d_4512_6375, 1, 1, fp);
        fwrite(d_4512_6376, 1, 1, fp);
        fwrite(&d_4512_6377, 1, 1, fp);
        fwrite(d_4512_6378, 1, 1, fp);
        fwrite(&d_4512_6379, 1, 1, fp);
        fwrite(&d_4512_637a, 1, 1, fp);
        fwrite(&d_4512_637b, 1, 1, fp);
        fwrite(&d_69da_da4c, 2, 1, fp);
        fwrite(&d_69da_da4a, 2, 1, fp);
        fwrite(d_536d_1c70, 3064, 1, fp);
        fwrite(&d_536d_4939, 1, 1, fp);
        fwrite(&d_536d_493a, 1, 1, fp);
        fwrite(&d_536d_493b, 1, 1, fp);
        fwrite(&d_536d_493c, 1, 1, fp);
        fwrite(&d_69da_ddb8, 1, 1, fp);
        fwrite(&d_4512_471c, 2, 1, fp);
        fwrite(&d_4512_471e, 2, 1, fp);
        fwrite(&d_4512_4720, 2, 1, fp);
        fwrite(&d_4512_4722, 2, 1, fp);
        fwrite(d_536d_82dd, 40, 1, fp);
        fwrite(d_4512_e438, 368, 1, fp);
        fwrite(d_536d_1ae0, 400, 1, fp);
        fwrite(&d_69da_d98e, 2, 1, fp);
        fwrite(&d_69da_d990, 2, 1, fp);
        fwrite(&d_69da_de3f, 1, 1, fp);
        fwrite(&d_69da_92f5, 4, 1, fp);
        fclose(fp);
        f_2162_0dfb(350);
    }
    d_69da_d994 = -1;
}

void f_a330_423a(FILE *fp)
{
    fread(d_4512_bdc8, 0x1d10, 1, fp);
}

void f_a330_425c(FILE *fp)
{
    fwrite(d_4512_bdc8, 0x1d10, 1, fp);
}

/* loads the hall of fame */
void f_a330_427e(void)
{
    FILE *fp;
    unsigned char c;

    f_2162_19f6(1);
    d_536d_5933[0] = 0;
    fp = fopen("hiscores", "rb");
    for (c = 0; c <= 1; c = c + 1)
        for (d_69da_d9d2 = 0; d_69da_d9d2 <= 19; d_69da_d9d2++) {
            d_69da_dfca = f_2162_1634(d_69da_dffe, 1);
            f_2162_0cbe(fp, d_69da_dfca + d_69da_d9d2 * 160 + c * 80);
            f_2162_0cbe(fp, d_69da_dfca + d_69da_d9d2 * 160 + c * 80 + 3200);
        }
    fread(d_4512_727c, 160, 1, fp);
    fclose(fp);
}

/* saves the hall of fame */
void f_a330_4372(void)
{
    FILE *fp;
    unsigned char c;

    f_2162_19f6(1);
    d_536d_5933[0] = 0;
    f_a330_447a("Saving Hall of Fame");
    fp = fopen("hiscores", "wb");
    if (fp != NULL) {
        for (c = 0; c <= 1; c = c + 1)
            for (d_69da_d9d2 = 0; d_69da_d9d2 <= 19; d_69da_d9d2++) {
                d_69da_dfca = f_2162_1634(d_69da_dffe, 0);
                f_2162_0cf9(fp, d_69da_dfca + d_69da_d9d2 * 160 + c * 80);
                f_2162_0cf9(fp, d_69da_dfca + d_69da_d9d2 * 160 + c * 80 + 3200);
            }
        fwrite(d_4512_727c, 160, 1, fp);
        fclose(fp);
    }
}

/* shows a message in a box */
void f_a330_447a(char *s)
{
    if (!d_536d_5933[0])
        f_1a70_4a41("");
    f_2162_19ff();
    if (_fstrcmp(d_536d_5933, s) != 0) {
        f_2162_0897(16);
        f_2162_08b5(20, 0x79, 0x134, 0x59);
        f_2162_0897(20);
        f_2162_08b5(16, 0x75, 0x130, 0x55);
        f_2162_08a6(28);
        f_2162_1021(16, 0x75, 16, 0x55);
        f_2162_1021(16, 0x55, 0x130, 0x55);
        f_2162_08a6(16);
        f_2162_1021(0x130, 0x55, 0x130, 0x75);
        f_2162_1021(0x130, 0x75, 16, 0x75);
        f_1a70_3b47(-1.0, 12.5, 1, s);
        _fstrcpy(d_536d_5933, s);
    }
}

/* swaps two clubs' records */
void f_a330_4570(int16_t a, int16_t b)
{
    FILE *fp;
    char x[280];
    char y[280];

    for (d_69da_d9a0 = 0; d_69da_d9a0 <= 12; d_69da_d9a0++) {
        f_2162_13fc(&d_4512_880c[d_69da_d9a0][a], &d_4512_880c[d_69da_d9a0][b], 1);
        if (d_69da_d9a0 < 10) {
            f_2162_13fc(&d_4512_8f28[d_69da_d9a0][a], &d_4512_8f28[d_69da_d9a0][b], 2);
            if (d_69da_d9a0 < 4) {
                d_69da_dfb6 = f_2162_1634(d_69da_dff4, 1);
                f_2162_13fc(&d_69da_dfb6[d_69da_d9a0][a], &d_69da_dfb6[d_69da_d9a0][b], 4);
            }
        }
    }
    f_2162_13fc(&d_4512_9c34[a], &d_4512_9c34[b], 4);
    f_2162_19f6(2);
    fp = fopen(d_536d_a4c5, "rb+");
    fseek(fp, a * 279, 0);
    fread(x, 1, 279, fp);
    fseek(fp, b * 279, 0);
    fread(y, 1, 279, fp);
    fseek(fp, a * 279, 0);
    fwrite(y, 1, 279, fp);
    fseek(fp, b * 279, 0);
    fwrite(x, 1, 279, fp);
    fclose(fp);
}

/* swaps two clubs in the history table */
void f_a330_4795(int16_t a, int16_t b)
{
    uint16_t k, i, j;

    for (k = 0; k <= 6; k++)
        for (i = 0; i <= 15; i++)
            if (d_536d_493d[0][i][k] > 0)
                for (j = 1; j <= 2; j++) {
                    if (d_536d_493d[j][i][k] == a)
                        d_536d_493d[j][i][k] = b;
                    else if (d_536d_493d[j][i][k] == b)
                        d_536d_493d[j][i][k] = a;
                }
}

/* asks a player's names */
void f_a330_4876(int16_t n)
{
    char buf[60];

    for (d_69da_da52 = 0; d_69da_da52 <= 1; d_69da_da52++) {
        if (d_69da_da52 == 0)
            strcpy(buf, "First Name ?");
        else
            strcpy(buf, "Surname ?");
        f_1a70_4b7d(2.625, d_69da_da52 * 3 + 7, buf);
        if (d_536d_5a0f[0] == 0) {
            if (d_69da_da52 == 0)
                strcpy(d_536d_5a0f, "Player");
            else
                strcpy(d_536d_5a0f, f_1a70_488b(n + 1));
        }
        strcpy(d_536d_596f[d_69da_da52][n], d_536d_5a0f);
    }
}

void f_a330_492b(void)
{
}

void f_a330_4934(void)
{
}
