/* @at 9c01:0000 */
/* @data 69da:45de */
/* @module */

/* Overlay 9c01 (CM93's 96BB.C; CM1's 88C9.C from f_88c9_5ea7 and 9100.C): player values
 * and wages, transfer news, retirements, the staff screen and the board's messages, then
 * the seasons and the files: a new game and its clubs, the savegame, records and history
 * files, players' ratings and moods, team lists and money, the end of a season, the club
 * records, club history and past winners screens, and the cups' round names. Its data
 * starts with the competitions' names, the staff screen's boxes and panels, and the
 * initialiser of 4a17's record positions, before the literals. Jump optimisation is
 * turned off before 59a6 (64e8 pops after every call). */
#include <string.h>
#include <stdio.h>
#include <mem.h>

/* the functions, in the reverse order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
int f_9c01_0000(int team, int x);
void f_9c01_0152(int team, int x);
int f_9c01_08a5(int x);
void f_9c01_08e4(int team);
void f_9c01_0d10(float x, float y, int c, int c2, int type, int team);
char far *f_9c01_12e0(int manager, int type);
void f_9c01_13fe(void);
void f_9c01_1697(int club);
void f_9c01_1720(int team, char far *s);
char far *f_9c01_175d(int n);
void f_9c01_17c1(void);
void f_9c01_1ab0(void);
void f_9c01_1c14(void);
void f_9c01_1dcf(void);
void f_9c01_2132(void);
void f_9c01_2815(int team);
void f_9c01_2dc1(void);
void f_9c01_30af(void);
void f_9c01_34fd(int player, int age, int games, int rating);
void f_9c01_3671(void);
void f_9c01_3c56(void);
void f_9c01_4549(int team, int other, int a, int b);
void f_9c01_45ec(int team, int other, int a, int b);
void f_9c01_468f(int team, int other, long v);
void f_9c01_471b(int team, int other, long v);
void f_9c01_47c8(int team, int a, int player, int b);
void f_9c01_4820(int team, int row, int v);
void f_9c01_4864(int player, int from, int to, long fee);
void f_9c01_48e4(int player, int from, int to, long fee);
void f_9c01_4964(int team, int player, int a, int b, int c);
void f_9c01_4a17(int team);
void f_9c01_59a6(int team);
void f_9c01_606c(int cup, int winner, int runner);
void f_9c01_6142(void);
void f_9c01_64e8(int n, char c);
char far *f_9c01_6630(int round);
char far *f_9c01_6728(int round);
char far *f_9c01_6806(int round, int cup);

struct staffbox { /* 6-byte entries at 69da:45fa */ unsigned char x1, y1; int x2; unsigned char y2, colour; };
struct staffpanel { /* 10-byte entries at 69da:4618 */ float x, y; unsigned char a, b; };
struct recpos { float x, y; int bg, fg, w; };
void f_1a70_000a(float x, int team, char far *title);
void f_1a70_0adb(int n, char far *s);
void f_1a70_0b46(char far *s);
void f_1a70_0b80(char far *s);
char f_1a70_2bc7(int x);
void f_1a70_2eaa(int n, char far *title, char far *items);
void f_1a70_3226(int last);
void f_1a70_3554(float x, float y, int bg, int fg, int w, char far *s);
void f_1a70_3b47(float x, float y, int colour, char far *s);
void f_1a70_442b(float x, float y, int team);
char far *f_1a70_4793(int manager, char full);
void f_1a70_4a41(char far *title);
void f_1a70_4ede(int a, float x, float y, int c, int d, int e, char far *s);
void f_1a70_525f(int a, char b);
int f_1a70_53de(int a);
void f_1a70_5e32(void);
void f_1a70_5e46(void);
void f_2162_0897();
void f_2162_08b5(int x1, int y1, int x2, int y2);
int f_2162_0c13(void);
int f_2162_0c1f(void);
void far *f_2162_1634(int handle, int page);
void f_9661_1ce0(int a, int b, int bg, int fg, char far *s1, char far *s2);
void f_9661_28e8(void);
void f_9661_4bc4(int club, int n);
char f_9661_517f(int p, int team, int x);
extern char far d_536d_6e5b[];
extern char far d_536d_6e33[];
extern char far d_536d_55cd[];
extern char far d_536d_534d[];
extern char far d_4512_e438[][4][23];
extern unsigned char far d_4512_a48c[];
extern unsigned char far d_4512_2390[];
extern unsigned char far d_4512_261a[];
extern unsigned char far d_4512_2b2e[];
extern int far d_4512_1a30[][80];
extern int far d_28da_2a4c[];
extern char far * far d_5dbf_0626[];
extern char near *d_69da_b1fc[];
extern char d_69da_de16;
extern char d_69da_de11;
extern char d_69da_de08;
extern char d_69da_ddf4;
extern char d_69da_ddd3;
extern char d_69da_ddbe;
extern unsigned char d_69da_ddad;
extern int d_69da_dc68;
extern int d_69da_dc66;
extern int d_69da_dc5e;
extern int d_69da_dc34;
extern int d_69da_dc32;
extern int d_69da_dc30;
extern int d_69da_dc28;
extern int d_69da_dc24;
extern int d_69da_db24;
extern int d_69da_dab4;
extern int d_69da_daa4;
extern int d_69da_da14;
extern int d_69da_d9f6;
extern int d_69da_d9f2;
extern int d_69da_d9ee;
extern int d_69da_d9ea;
extern int d_69da_d9e2;
extern int d_69da_d9dc;
extern int d_69da_d992;
extern int far *d_69da_df96;
extern int d_69da_dfe4;
extern char far d_536d_6efb[];
extern unsigned char far d_4512_01ec[];
extern char d_69da_de17;
extern int d_69da_dc6a;
int f_1a70_4513(int team);
char far *f_2162_0f38(void);
int f_2162_134e(int a, int b);
int f_2162_13ba(int a, int b);
void f_8c32_150f(int team, int delta);
extern char far d_536d_6f4b[];
extern unsigned char far d_4512_3042[][650];
extern int far d_4512_1710[][80];
extern unsigned char far d_4512_0148[];
extern int far d_5dbf_086a[][5];
extern int far d_5dbf_1292[][2][98];
extern long d_69da_df4d;
extern long d_69da_df49;
extern char d_69da_de18;
extern int d_69da_dc6e;
extern int d_69da_dc6c;
extern int d_69da_db34;
extern int d_69da_d9d8;
extern int d_69da_d9ba;
void f_1a70_598c(int team, char far *title, char far *text);
long f_2162_0da1(long n);
int f_2162_0dd7(char far *path);
void f_2162_13fc(void far *a, void far *b, int n);
void f_2162_19f6();
void f_a330_4372(void);
long f_a83a_1ea1(int team);
char f_b8da_01ba(char team);
void f_b8da_61ff(char a);
void f_b8da_6369(char a, int i, int n);
extern char far d_536d_a4c5[];
extern char far d_536d_a49d[];
extern char far d_536d_a475[];
extern unsigned char far d_4512_8ac8[][140];
extern unsigned char far d_4512_7f74[];
extern long far d_4512_727c[][2];
extern long far d_4512_1e90[][80];
extern int far d_4512_18f0[];
extern unsigned char far d_4512_0000[][82];
extern unsigned char far d_5dbf_0996[][460];
extern unsigned char far d_5dbf_0efa[];
extern char d_69da_de3d;
extern char d_69da_de1e;
extern int d_69da_dc74;
extern int d_69da_dc72;
extern int d_69da_da4a;
extern int d_69da_da24;
extern int d_69da_d9f0;
extern int d_69da_d9d6;
extern int d_69da_d9d2;
extern int d_69da_d9a0;
extern char far *d_69da_dfca;
extern long far *d_69da_df9e;
extern int d_69da_dffe;
extern int d_69da_dfe8;
void f_9007_17fd(int p, char all);
void f_9661_327b(int staff, int team, char c);
void f_9661_3ef4(int club, int a);
void f_a330_4570(int a, int b);
void f_a330_4795(int a, int b);
void f_a83a_0852(int a, int b);
void f_a83a_1ecd(void);
void f_b085_08ac(int player, int team, char c);
void f_b085_33dc(int player);
void f_b085_36c7(char team, char n);
void f_b8da_5d03(void);
void f_b8da_609f(void);
extern unsigned char far d_4512_6376[];
extern unsigned char far d_4512_6324[][20];
extern unsigned char far d_4512_6322[];
extern unsigned char far d_4512_6321[];
extern int far d_4512_5e24[][80];
extern unsigned char far d_4512_28a4[];
extern unsigned char far d_4512_32cc[];
extern unsigned char far d_4512_3556[];
extern unsigned char far d_4512_37e0[];
extern unsigned char far d_3668_0000[][1860];
extern unsigned char far d_28da_2a78[][1860];
extern FILE *d_69da_0094;
extern unsigned char far d_5dbf_4fd2[][140];
extern char near *d_69da_b2a0[];
extern char near *d_69da_b344[];
extern int d_69da_dd9c;
extern int d_69da_dcac;
extern int d_69da_dcaa;
extern int d_69da_dca8;
extern int d_69da_dc82;
extern int d_69da_dc60;
extern int d_69da_dc48;
extern int d_69da_dbf6;
extern int d_69da_dbb4;
extern int d_69da_dbb2;
extern int d_69da_dbac;
extern int d_69da_db58;
extern int d_69da_d9e0;
extern int d_69da_d9de;
extern int d_69da_d9ae;
extern int d_69da_d99a;
extern int d_69da_d998;
extern int d_69da_d990;
extern int d_69da_d98e;
extern char (far *d_69da_dfc6)[101];
extern unsigned char (far *d_69da_dfba)[1860];
extern int (far *d_69da_dfa6)[1860];
extern int d_69da_dff6;
extern int d_69da_dffc;
extern int d_69da_dfec;
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
extern struct flags_w far d_4512_bdc8[];
long f_1a70_01d9(int p, int n);
long f_1a70_0cb8(long v, char c);
char far *f_1a70_4592(int player);
char far *f_1a70_4739(int player);
float f_2162_10cf(void);
extern unsigned char far d_4512_023e[];
extern unsigned char far d_4512_0334[][82];
extern long d_69da_df51;
extern char d_69da_de22;
extern char d_69da_de21;
extern char d_69da_de20;
extern int d_69da_dc4e;
extern long far *d_69da_df9a;
extern int d_69da_dfe6;
extern unsigned char far d_28da_ad40[];
long f_2162_1367(long a, long b);
extern long far d_4512_2250[];
extern unsigned char far d_4512_0052[];
extern unsigned char far d_4512_138a[];
extern unsigned char far d_4512_1524[];
extern long d_69da_df59;
extern long d_69da_df55;
extern float d_69da_de61;
extern int d_69da_dcb2;
extern int d_69da_dcb0;
extern int d_69da_dcae;
char far *f_1a70_3404(int x);
char far *f_1a70_46c1(int player);
int f_a83a_0000(int x);
extern char far d_536d_72bb[];
extern char far d_536d_726b[];
extern char far d_536d_7147[][12];
extern char far d_536d_7153[];
extern char far d_536d_715f[];
extern char far d_536d_71cb[];
extern char far d_536d_71d7;
extern char far d_536d_71d8[];
extern char far d_536d_71e4;
extern char far d_536d_71e5[];
extern char far d_536d_71f1;
extern char far d_536d_71f2[];
extern char far d_536d_71fe;
extern char far d_536d_71ff[];
extern char far d_536d_720c;
extern char far d_536d_720d[];
extern char far d_536d_721a;
extern char far d_536d_721b[];
extern char far d_536d_7228[];
extern char far d_536d_7234;
extern char far d_536d_7235[];
extern char far d_536d_7242[];
extern char far d_536d_724e;
extern char far d_536d_724f;
extern char far d_536d_7250[];
extern char far d_536d_725d[];
extern char far d_536d_7269;
extern float far d_4512_9c34[];
extern int far d_4512_8f28[][140];
extern unsigned char far d_4512_880c[][140];
extern unsigned char far d_4512_03d8[];
extern unsigned char far d_4512_042a[];
extern unsigned char far d_4512_047c[];
extern unsigned char far d_4512_04ce[];
extern int far d_28da_24fc[][80];
extern float far d_28da_2130[];
extern int far d_28da_0010[];
extern char far * far d_5dbf_0550[];
extern int d_69da_dcc0;
extern int d_69da_dcbe;
extern int d_69da_dcbc;
extern int d_69da_dcba;
extern int d_69da_dca2;
extern long (far *d_69da_dfb6)[140];
extern int d_69da_dff4;
char far *f_2162_104e(char far *s);
char far *f_1a70_48f5(int n);
char far *f_1a70_4983(int division, char full);
extern char far d_536d_73b5[];
extern char far d_536d_7365[];
extern char far d_536d_7315[];
extern char far d_536d_730b[];
extern char far d_536d_6d93[];
extern char far d_536d_6b61[];
extern char far d_536d_568b[];
extern char far d_536d_55eb[];
extern unsigned char far d_4512_8898[];
extern unsigned char far d_4512_8924[];
extern unsigned char far d_4512_89b0[];
extern unsigned char far d_4512_8a3c[];
extern unsigned char far d_4512_8e9c[];
extern int far d_28da_259c[];
extern char far * far d_5dbf_0000[];
extern int d_69da_dcc6;
extern int d_69da_dcc4;
extern int d_69da_dcc2;
void f_1a70_5688(int a);
extern float d_69da_ded5;
extern float d_69da_ded1;
extern int d_69da_dcd6;
extern int d_69da_dcd4;
extern int d_69da_dcd2;
extern int d_69da_dcd0;
extern int d_69da_dcce;
extern int d_69da_dccc;
extern int d_69da_dcca;
extern int d_69da_dcc8;
void f_1a70_344b(int x, int y, int colour, char far *s);
void f_2162_07f7(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_2162_08a6();
void f_2162_090f(int x1, int y1, int x2, int y2);
unsigned f_2162_0b1b(char far *s, char far *set);
unsigned f_2162_0b6f(char far *s, char far *set);
char far *f_2162_0fc1(char far *s, unsigned i, unsigned n);
extern char far d_536d_74a5[];
extern char far d_536d_7455[];
extern char far d_536d_7405[];
extern int far d_536d_493d[3][16][8];
extern int d_69da_da66;
extern int d_69da_d9ca;

/* the competitions' names: their strings head the literal pool */
static char far *d_69da_45de[] = {
    "League Champions", "FA Cup", "Coca-Cola Cup", "Anglo-Ital Cup", "UEFA Cup",
    "Cup Winners Cup", "European Cup"
};

int f_9c01_0000(int team, int x)
{
    char buf[320];

    memset(d_4512_a48c, 0, 60);
    d_69da_dc5e = -1;
    strcpy(d_536d_6e33, f_9c01_175d(x));
    do {
        sprintf(buf, "Appoint %s", d_536d_6e33);
        f_1a70_4a41(buf);
        f_1a70_442b(1.0, 4.0, team);
        f_1a70_2eaa(7, "", "Own Search|Board Decision|");
        f_1a70_3226(1);
        d_69da_dc24 = d_69da_d992;
        if (d_69da_dc24 == 0) {
            memset(d_4512_a48c, 0, 60);
            d_69da_df96 = f_2162_1634(d_69da_dfe4, 1);
            memset(d_69da_df96, -1, 0xe88);
            f_9661_1ce0(11, 14, 1, 2, "Age", "35-40|40-50|50-60|60+|");
            if (d_69da_ddbe == 0) {
                f_9661_1ce0(16, 20, 1, 2, "Division", "FA Premier|First|Second|Third|Unemployed|");
                if (d_69da_ddbe == 0) {
                    f_9661_1ce0(22, 27, 1, 2, "Reputation", "Unknown|Poor|Fair|Good|Very Good|Superb|");
                    if (d_69da_ddbe == 0)
                        f_9c01_0152(team, x);
                }
            }
        }
    } while ((d_69da_dc24 != 0 || d_69da_dc5e == -1) && d_69da_dc24 != 1);
    return d_69da_dc5e;
}

void f_9c01_0152(int team, int x)
{
    int n;
    int j;
    char buf[320];

    n = 0;
    f_1a70_4a41("");
    f_1a70_3b47(-1.0, 12.5, 1, "Searching");
    for (j = 1; j <= 2; j++)
        for (d_69da_d9ee = 0; d_69da_d9ee <= 0x285; d_69da_d9ee++) {
            d_69da_ddd3 = -1;
            if (d_4512_2390[d_69da_d9ee] != team && j == 1)
                d_69da_ddd3 = 0;
            if (d_69da_ddd3 != 0 && d_4512_2390[d_69da_d9ee] == team && j == 2)
                d_69da_ddd3 = 0;
            if (d_69da_ddd3 != 0 && d_4512_1a30[x][team] == d_69da_d9ee)
                d_69da_ddd3 = 0;
            if (d_4512_2390[d_69da_d9ee] != d_69da_db24) {
                if (d_69da_ddd3 != 0) {
                    d_69da_de08 = 0;
                    if (d_4512_a48c[15] != 0)
                        d_69da_de08 = -1;
                    else {
                        d_69da_dc30 = d_4512_261a[d_69da_d9ee];
                        if (d_69da_dc30 <= 40)
                            d_69da_de08 = d_4512_a48c[11];
                        else if (d_69da_dc30 <= 50)
                            d_69da_de08 = d_4512_a48c[12];
                        else if (d_69da_dc30 <= 60)
                            d_69da_de08 = d_4512_a48c[13];
                        else
                            d_69da_de08 = d_4512_a48c[14];
                    }
                    if (d_69da_de08 == 0)
                        d_69da_ddd3 = 0;
                }
                if (d_69da_ddd3 != 0 && d_4512_a48c[21] == 0)
                    if (d_4512_2390[d_69da_d9ee] == 0xff && d_4512_a48c[20] == 0
                        || d_4512_2390[d_69da_d9ee] < 0xff && d_4512_a48c[16 + d_4512_2390[d_69da_d9ee] / 20] == 0)
                        d_69da_ddd3 = 0;
                if (d_69da_ddd3 != 0 && d_4512_a48c[28] == 0) {
                    strcpy(d_536d_6e5b, f_9c01_12e0(d_69da_d9ee, x));
                    if (d_4512_a48c[22 + d_69da_d9f2] == 0)
                        d_69da_ddd3 = 0;
                }
            }
            if (d_69da_ddd3 != 0) {
                n++;
                d_69da_df96 = f_2162_1634(d_69da_dfe4, 1);
                d_69da_df96[n - 1] = d_69da_d9ee;
            }
        }
    if (n > 0) {
        d_69da_dc32 = 1;
        do {
            sprintf(buf, "New %s %s", (char far *)d_69da_b1fc[team], d_536d_6e33);
            f_1a70_5e32();
            f_1a70_4a41(buf);
            f_1a70_3554(1.125, 4.5, 0, 1, 72, " NAME");
            f_1a70_3554(10.375, 4.5, 0, 1, 78, " CLUB");
            f_1a70_3554(20.375, 4.5, 0, 1, 22, " YR");
            f_1a70_3554(23.375, 4.5, 0, 1, 72, " CHARACTER");
            f_1a70_3554(32.625, 4.5, 0, 1, 52, " REP");
            f_1a70_5e46();
            f_9661_28e8();
            d_69da_daa4 = 0;
            for (d_69da_da14 = d_69da_dc32; d_69da_dc32 + 14 >= d_69da_da14; d_69da_da14++) {
                d_69da_df96 = f_2162_1634(d_69da_dfe4, 0);
                d_69da_d9ee = d_69da_df96[d_69da_da14 - 1];
                if (d_69da_d9ee > -1) {
                    d_28da_2a4c[d_69da_daa4] = d_69da_d9ee;
                    d_69da_daa4++;
                } else
                    d_69da_da14 = d_69da_dc32 + 14;
            }
            f_1a70_5e32();
            for (d_69da_da14 = 1; d_69da_da14 <= d_69da_daa4; d_69da_da14++) {
                if (d_69da_da14 & 1)
                    d_69da_d9ea = 2;
                else
                    d_69da_d9ea = 9;
                d_69da_d9ee = d_28da_2a4c[d_69da_da14 - 1];
                sprintf(buf, " %.11s", f_1a70_4793(d_69da_d9ee, -1));
                f_1a70_4ede(0, 1.125, d_69da_da14 + 5, 1, d_69da_d9ea, 72, buf);
                if (d_4512_2390[d_69da_d9ee] < 0xff)
                    strcpy(d_536d_534d, d_69da_b1fc[d_4512_2390[d_69da_d9ee]]);
                else
                    strcpy(d_536d_534d, "Unemployed");
                d_69da_d9ea = d_4512_2390[d_69da_d9ee] == team ? 3 : 12;
                sprintf(buf, " %.12s", d_536d_534d);
                f_1a70_3554(10.375, d_69da_da14 + 5, 1, d_69da_d9ea, 78, buf);
                sprintf(buf, " %d", d_4512_261a[d_69da_d9ee]);
                f_1a70_3554(20.375, d_69da_da14 + 5, 1, 4, 22, buf);
                sprintf(buf, " %s", d_5dbf_0626[d_4512_2b2e[d_69da_d9ee]]);
                f_1a70_3554(23.375, d_69da_da14 + 5, 1, 4, 72, buf);
                sprintf(buf, " %s", f_9c01_12e0(d_69da_d9ee, x));
                f_1a70_3554(32.625, d_69da_da14 + 5, 6, 3, 52, buf);
            }
            f_1a70_5e46();
            do
                d_69da_dc28 = f_1a70_53de(-1);
            while (d_69da_dc28 < 1);
            if (d_69da_dc28 == 1 && d_69da_ddad < 3)
                d_69da_dc32 -= 15;
            else if (d_69da_dc28 == 3 && d_69da_ddad == 1 || d_69da_dc28 == 2 && d_69da_ddad == 3)
                d_69da_dc32 += 15;
            else if (d_69da_dc28 >= d_69da_dc34) {
                d_69da_dab4 = d_69da_dc28 - d_69da_dc34;
                d_69da_d9ee = d_28da_2a4c[d_69da_dab4];
                sprintf(buf, "Appoint %s", f_1a70_4793(d_69da_d9ee, 0));
                f_1a70_2eaa(0, buf, "Cancel|Appoint Him|");
                if (d_69da_d992 == 1) {
                    strcpy(d_536d_55cd, f_1a70_4793(d_69da_d9ee, -1));
                    if (f_9661_517f(d_69da_d9ee, team, x)) {
                        sprintf(buf, "%s accepts the offer", d_536d_55cd);
                        f_1a70_0b46(buf);
                        d_69da_dc5e = d_69da_d9ee;
                    } else {
                        sprintf(buf, "%s refuses the offer", d_536d_55cd);
                        f_1a70_0b46(buf);
                    }
                }
            }
        } while ((d_69da_dc28 != 2 || d_69da_ddad >= 3) && (d_69da_dc28 != 1 || d_69da_ddad <= 2)
                 && d_69da_dc5e == -1);
    } else
        f_1a70_0b80("Nobody found");
}

int f_9c01_08a5(int x)
{
    switch (x) {
    case 0:
    case 1:
        d_69da_d9e2 = x;
        break;
    case 2:
    case 3:
    case 4:
    case 5:
        d_69da_d9e2 = 2;
        break;
    case 6:
        d_69da_d9e2 = 3;
        break;
    }
    return d_69da_d9e2;
}

/* the staff screen: its boxes, and where each member of staff is drawn */
static struct staffbox d_69da_45fa[] = {
    {8, 24, 156, 74, 4}, {8, 80, 156, 188, 14}, {164, 24, 312, 66, 3},
    {164, 74, 312, 116, 14}, {164, 124, 312, 166, 14}
};
static struct staffpanel d_69da_4618[] = {
    {1.375, 5, 1, 28}, {20.875, 5, 1, 31}, {1.375, 12, 1, 24}, {1.375, 16.125, 1, 24},
    {1.375, 20.25, 1, 24}, {20.875, 17.5, 1, 24}, {20.875, 11.25, 1, 24}
};

void f_9c01_08e4(int team)
{
    struct staffbox far *p;
    struct staffpanel far *q;
    int x2[5];
    int x1[5];
    int y2[5];
    int y1[5];
    char buf[320];

    do {
        d_69da_ddf4 = 0;
        f_1a70_000a(1.25, team, "Staff");
        p = d_69da_45fa;
        for (d_69da_dc66 = 0; d_69da_dc66 <= 4; d_69da_dc66++, p++) {
            f_2162_0897(16);
            f_2162_08b5(p->x1 + 4, p->y1 + 4, p->x2 + 4, p->y2 + 4);
            f_2162_0897(p->colour + 16);
            f_2162_08b5(p->x1, p->y1, p->x2, p->y2);
            x1[d_69da_dc66] = p->x1;
            x2[d_69da_dc66] = p->x2;
            y1[d_69da_dc66] = p->y1;
            y2[d_69da_dc66] = p->y2;
        }
        q = d_69da_4618;
        for (d_69da_d9f6 = 0; d_69da_d9f6 <= 6; d_69da_d9f6++, q++)
            f_9c01_0d10(q->x, q->y, q->a, q->b, d_69da_d9f6, team);
        f_1a70_4ede(2, 20.75, 22.25, 1, 4, 0x94, "       DONE");
        if (f_1a70_2bc7(team))
            f_1a70_4ede(2, 35.0, 1.125, 1, 3, 0, "SACK");
        d_69da_de11 = 0;
        do {
            d_69da_de16 = 0;
            d_69da_d992 = f_1a70_53de(d_69da_d9dc);
            if (d_69da_d992 == 0 && d_69da_de11 != 0) {
                d_69da_dc68 = -1;
                for (d_69da_dc66 = 0; d_69da_dc66 <= 4; d_69da_dc66++) {
                    if (f_2162_0c1f() >= x1[d_69da_dc66] && f_2162_0c1f() <= x2[d_69da_dc66]) {
                        if (d_69da_dc66 == 1) {
                            if (f_2162_0c13() >= 90 && f_2162_0c13() <= 120)
                                d_69da_dc68 = 2;
                            else if (f_2162_0c13() >= 123 && f_2162_0c13() <= 153)
                                d_69da_dc68 = 3;
                            else if (f_2162_0c13() >= 156 && f_2162_0c13() <= 186)
                                d_69da_dc68 = 4;
                        } else if (f_2162_0c13() >= y1[d_69da_dc66] && f_2162_0c13() <= y2[d_69da_dc66]) {
                            switch (d_69da_dc66) {
                            case 2:
                                d_69da_dc68 = 1;
                                break;
                            case 3:
                                d_69da_dc68 = 6;
                                break;
                            case 4:
                                d_69da_dc68 = 5;
                                break;
                            }
                        }
                    }
                }
                if (d_69da_dc68 > -1) {
                    strcpy(d_536d_55cd, f_1a70_4793(d_4512_1a30[d_69da_dc68][team], 0));
                    sprintf(buf, "Sack %s", d_536d_55cd);
                    f_1a70_4a41(buf);
                    if (d_69da_dc68 >= 2 && d_69da_dc68 <= 5)
                        f_1a70_0adb(5, "Any report will be lost");
                    f_1a70_2eaa(d_69da_dc68 >= 2 && d_69da_dc68 <= 5 ? 8 : 5, "", "*Exit|Sack Him|");
                    f_1a70_3226(1);
                    if (d_69da_d992 == 1) {
                        sprintf(buf, "%s leaves club", d_536d_55cd);
                        f_1a70_0b80(buf);
                        f_9661_4bc4(team, d_69da_dc68);
                        if (d_69da_dc68 >= 2 && d_69da_dc68 <= 5)
                            /* CM93 d_2289_ada0[staff][n][0]; in CM94 the displacement is 4512:fbe2, past the end of
                             * 4512's segment (e5a8), so it is folded: e438 + 6058 */
                            d_4512_e438[d_4512_1a30[0][team] + 65][d_69da_dc68 + 3][9] = 0;
                    }
                    d_69da_ddf4 = -1;
                } else {
                    d_69da_de11 = 0;
                    f_1a70_525f(2, 0);
                }
            } else if (d_69da_d992 == 1) {
                d_69da_de16 = -1;
            } else if (d_69da_d992 == 2) {
                d_69da_de11 = !d_69da_de11;
                f_1a70_525f(2, d_69da_de11);
            }
        } while (d_69da_de16 == 0 && d_69da_ddf4 == 0);
    } while (!d_69da_de16);
}

void f_9c01_0d10(float x, float y, int c, int c2, int type, int team)
{
    char buf[320];

    d_69da_dc6a = d_4512_1a30[type][team];
    strcpy(d_536d_6efb, f_9c01_175d(type));
    if (type == 2)
        strcat(d_536d_6efb, "s");
    if (type != 3 && type != 4) {
        sprintf(buf, "%*s", strlen(d_536d_6efb) + 12 - strlen(d_536d_6efb) / 2, d_536d_6efb);
        f_1a70_3554(x, y - 1, c / 16, c % 16, 0x90, buf);
    }
    if (d_69da_dc6a < 0x28a) {
        strcpy(d_536d_55cd, f_1a70_4793(d_69da_dc6a, 0));
        sprintf(buf, "%*s", strlen(d_536d_55cd) + 12 - strlen(d_536d_55cd) / 2, d_536d_55cd);
        d_69da_de17 = type == 2 || type == 3 || type == 4;
        f_1a70_3554(x, y, c2 / 16 - (d_69da_de17 ? 5 : 0), c2 % 16, 0x90, buf);
        f_1a70_3554(x, y + 1, c2 / 16, c2 % 16, 0x47, " Age");
        sprintf(buf, " %d YRS", d_4512_261a[d_69da_dc6a]);
        f_1a70_3554(x + 9.125, y + 1, c2 / 16, c2 % 16, 0x47, buf);
        f_1a70_3554(x, y + 2, c2 / 16, c2 % 16, 0x47, " Character");
        sprintf(buf, " %s", d_5dbf_0626[d_4512_2b2e[d_69da_dc6a]]);
        f_1a70_3554(x + 9.125, y + 2, c2 / 16, c2 % 16, 0x47, buf);
        f_1a70_3554(x, y + 3, c2 / 16, c2 % 16, 0x47, type == 0 ? " Reputation" : " Ability");
        sprintf(buf, " %s", f_9c01_12e0(d_69da_dc6a, type));
        f_1a70_3554(x + 9.125, y + 3, c2 / 16, c2 % 16, 0x47, buf);
        if (type == 0) {
            f_1a70_3554(x, y + 4, c2 / 16, c2 % 16, 0x47, " Board");
            sprintf(buf, " %d%%", d_4512_01ec[team]);
            f_1a70_3554(x + 9.125, y + 4, c2 / 16, c2 % 16, 0x47, buf);
        }
    } else {
        f_1a70_3554(x, y, c2 / 16, c2 % 16, 0x90, "");
        f_1a70_3554(x, y + 1, c2 / 16, c2 % 16, 0x90, "      The coach is");
        f_1a70_3554(x, y + 2, c2 / 16, c2 % 16, 0x90, "   temporary manager");
        f_1a70_3554(x, y + 3, c2 / 16, c2 % 16, 0x90, "");
    }
    if (type == 0) {
        f_1a70_3554(x, y + 4, c2 / 16, c2 % 16, 0x47, " Board");
        sprintf(buf, " %d%%", d_4512_01ec[team]);
        f_1a70_3554(x + 9.125, y + 4, c2 / 16, c2 % 16, 0x47, buf);
    }
}

/* The rating word of a manager's (type 0: reputation) or a coach's or scout's ability;
   d_69da_d9f2 gets its rank (0 unknown, 1 poor ... 5 superb). */
char far *f_9c01_12e0(int manager, int type)
{
    char far *s;

    s = f_2162_0f38();
    if (d_4512_261a[manager] > 35) {
        switch (d_4512_3042[f_9c01_08a5(type)][manager] / 10) {
        case 0: case 1: case 2: case 3: case 4:
            strcpy(s, "Poor");
            d_69da_d9f2 = 1;
            break;
        case 5: case 6: case 7: case 8: case 9: case 10: case 11:
            strcpy(s, "Fair");
            d_69da_d9f2 = 2;
            break;
        case 12: case 13: case 14:
            strcpy(s, "Good");
            d_69da_d9f2 = 3;
            break;
        case 15: case 16:
            strcpy(s, "V Good");
            d_69da_d9f2 = 4;
            break;
        default:
            strcpy(s, "Superb");
            d_69da_d9f2 = 5;
            break;
        }
    } else {
        strcpy(s, "Unknown");
        d_69da_d9f2 = 0;
    }
    return s;
}

void f_9c01_13fe(void)
{
    for (d_69da_d9d8 = 0; d_69da_d9d8 <= 79; d_69da_d9d8++) {
        d_69da_d9f6 = f_1a70_4513(d_69da_d9d8) % 20;
        d_69da_dc6c = f_2162_13ba(f_2162_134e(d_4512_0148[d_69da_d9d8] - 13, 0), 4);
        d_69da_dc6e = (d_4512_01ec[d_69da_d9d8] * (38 - d_69da_d9ba)
                       + d_5dbf_086a[d_69da_d9f6][d_69da_dc6c] * d_69da_d9ba) / 38;
        d_69da_db34 = (d_4512_01ec[d_69da_d9d8] * 3 + d_69da_dc6e) / 4 - d_4512_01ec[d_69da_d9d8];
        if (d_69da_db34 < 0 && d_4512_1710[0][d_69da_d9d8] != 0) {
            d_69da_df49 = d_5dbf_1292[d_4512_1710[1][d_69da_d9d8]][0][d_4512_1710[2][d_69da_d9d8]];
            d_69da_df4d = d_5dbf_1292[d_4512_1710[1][d_69da_d9d8]][1][d_4512_1710[2][d_69da_d9d8]];
            d_69da_de18 = d_69da_d9d8 == d_69da_df49 / 32 && d_69da_df49 % 32 > d_69da_df4d % 32
                       || d_69da_d9d8 == d_69da_df4d / 32 && d_69da_df4d % 32 > d_69da_df49 % 32;
            if (d_69da_de18)
                d_69da_db34 = 0;
        }
        f_8c32_150f(d_69da_d9d8, d_69da_db34);
        if (f_1a70_2bc7(d_69da_d9d8) && (d_69da_d9ba == 10 || d_69da_d9ba == 20 || d_69da_d9ba == 30)) {
            if (d_5dbf_086a[d_69da_d9f6][d_69da_dc6c] < 50)
                f_9c01_1720(d_69da_d9d8, "Our league position is unacceptable.");
            else if (d_5dbf_086a[d_69da_d9f6][d_69da_dc6c] == 100)
                f_9c01_1720(d_69da_d9d8, "An excellent league position.");
        }
    }
}

void f_9c01_1697(int club)
{
    char buf[320];
    unsigned char v;

    v = d_4512_01ec[club];
    if (v <= 24)
        strcpy(d_536d_6f4b, "were going to sack you anyway.");
    else if (v <= 34)
        strcpy(d_536d_6f4b, "are not particularly disappointed.");
    else if (v <= 59)
        strcpy(d_536d_6f4b, "are a little disappointed.");
    else if (v <= 94)
        strcpy(d_536d_6f4b, "are very disappointed at your decision.");
    else if (v <= 99)
        strcpy(d_536d_6f4b, "are astonished at your decision.");
    else
        strcpy(d_536d_6f4b, "think you are a right bandit.");
    sprintf(buf, "We %s", d_536d_6f4b);
    f_9c01_1720(club, buf);
}

void f_9c01_1720(int team, char far *s)
{
    char buf[320];

    sprintf(buf, "%s board message", (char far *)d_69da_b1fc[team]);
    f_1a70_598c(team, buf, s);
}

char far *f_9c01_175d(int n)
{
    char far *p;

    p = f_2162_0f38();
    switch (n) {
    case 0:
        strcpy(p, "Manager");
        break;
    case 1:
        strcpy(p, "Team Coach");
        break;
    case 2:
    case 3:
    case 4:
        strcpy(p, "League Scout");
        break;
    case 5:
        strcpy(p, "Youth Scout");
        break;
    case 6:
        strcpy(p, "Club Physio");
        break;
    }
    return p;
}

void f_9c01_17c1(void)
{
    for (d_69da_d9d8 = 0; d_69da_d9d8 <= 79; d_69da_d9d8++) {
        d_4512_0000[5][d_69da_d9d8] = f_2162_0da1(5) + 5;
        if (f_1a70_2bc7(d_69da_d9d8)) {
            d_4512_0000[0][d_69da_d9d8] = 8;
            d_4512_0000[6][d_69da_d9d8] = 50;
        }
        d_4512_0000[7][d_69da_d9d8] = 0;
        d_4512_0000[11][d_69da_d9d8] = 2;
        d_4512_0000[68][d_69da_d9d8] = 255;
        d_4512_0000[69][d_69da_d9d8] = 255;
        d_4512_0000[70][d_69da_d9d8] = 255;
        d_4512_18f0[d_69da_d9d8] = f_2162_0da1(9);
        for (d_69da_d9a0 = (f_1a70_2bc7(d_69da_d9d8) != 0) + 5; d_69da_d9a0 <= 11; d_69da_d9a0++)
            d_4512_1710[d_69da_d9a0][d_69da_d9d8] = 650;
        switch (d_69da_d9d8 / 20) {
        case 0:
            if (d_69da_de3d == 0 || d_4512_1e90[0][d_69da_d9d8] == 0) {
                if (f_b8da_01ba(d_69da_d9d8))
                    d_4512_1e90[0][d_69da_d9d8] = f_2162_0da1(1000000L) + 3000000L;
                else
                    d_4512_1e90[0][d_69da_d9d8] = f_2162_0da1(1000000L) + 1000000L;
            }
            d_4512_0000[22][d_69da_d9d8] = f_2162_0da1(3);
            break;
        case 1:
            if (d_69da_de3d == 0 || d_4512_1e90[0][d_69da_d9d8] == 0)
                d_4512_1e90[0][d_69da_d9d8] = f_2162_0da1(500000L) + 500000L;
            d_4512_0000[22][d_69da_d9d8] = f_2162_0da1(3) + 1;
            break;
        case 2:
            if (d_69da_de3d == 0 || d_4512_1e90[0][d_69da_d9d8] == 0)
                d_4512_1e90[0][d_69da_d9d8] = f_2162_0da1(250000L) + 250000L;
            else {
                d_4512_0000[22][d_69da_d9d8] = f_2162_0da1(3) + 2;
                break;
            }
            d_4512_0000[22][d_69da_d9d8] = f_2162_0da1(3) + 2;
            break;
        case 3:
            if (d_69da_de3d == 0 || d_4512_1e90[0][d_69da_d9d8] == 0)
                d_4512_1e90[0][d_69da_d9d8] = f_2162_0da1(125000L) + 125000L;
            d_4512_0000[22][d_69da_d9d8] = f_2162_0da1(3) + 2;
            break;
        }
        d_4512_1e90[0][d_69da_d9d8] += f_a83a_1ea1(d_69da_d9d8);
    }
    for (d_69da_d9d6 = 0; d_69da_d9d6 <= 139; d_69da_d9d6++) {
        d_4512_7f74[d_69da_d9d6] = d_69da_d9d6;
        d_4512_8ac8[0][d_69da_d9d6] = 80;
    }
}

void f_9c01_1ab0(void)
{
    FILE *fp;
    char buf[320];

    f_2162_19f6(2);
    f_b8da_61ff(0);
    if (f_2162_0dd7(d_536d_a4c5) == 0) {
        fp = fopen(d_536d_a4c5, "wb");
        memset(buf, 0, 279);
        for (d_69da_dc72 = 1; d_69da_dc72 <= 140; d_69da_dc72++)
            fwrite(buf, 1, 279, fp);
        fclose(fp);
    }
    f_2162_19f6(2);
    if (f_2162_0dd7(d_536d_a49d) == 0) {
        fp = fopen(d_536d_a49d, "wb");
        for (d_69da_dc72 = 1; d_69da_dc72 <= 1860; d_69da_dc72++) {
            fwrite(buf, 1, 133, fp);
            f_b8da_6369(0, d_69da_dc72 - 1, 1859);
        }
        fclose(fp);
    }
    f_2162_19f6(2);
    if (f_2162_0dd7(d_536d_a475) == 0) {
        fp = fopen(d_536d_a475, "wb");
        fwrite(buf, 1, 155, fp);
        fclose(fp);
    }
}

void f_9c01_1c14(void)
{
    f_b8da_61ff(3);
    for (d_69da_dc74 = 0; d_69da_dc74 <= 459; d_69da_dc74++) {
        f_b8da_6369(3, d_69da_dc74, 459);
        switch (d_5dbf_0996[0][d_69da_dc74]) {
        case 0: d_5dbf_0996[0][d_69da_dc74] = 20; break;
        case 1: d_5dbf_0996[0][d_69da_dc74] = 17; break;
        case 2: d_5dbf_0996[0][d_69da_dc74] = 15; break;
        case 3: d_5dbf_0996[0][d_69da_dc74] = 12; break;
        case 4: d_5dbf_0996[0][d_69da_dc74] = 10; break;
        case 5: d_5dbf_0996[0][d_69da_dc74] = 7; break;
        case 6: d_5dbf_0996[0][d_69da_dc74] = 5; break;
        case 7:
        case 8: d_5dbf_0996[0][d_69da_dc74] = 3; break;
        }
        d_69da_da24 = f_2162_0da1(100);
        if (d_69da_da24 <= 5)
            d_5dbf_0efa[d_69da_dc74] = 0;
        else if (d_69da_da24 <= 6)
            d_5dbf_0efa[d_69da_dc74] = 1;
        else if (d_69da_da24 <= 70)
            d_5dbf_0efa[d_69da_dc74] = 2;
        else if (d_69da_da24 <= 80)
            d_5dbf_0efa[d_69da_dc74] = 6;
        else if (d_69da_da24 <= 85)
            d_5dbf_0efa[d_69da_dc74] = 3;
        else if (d_69da_da24 <= 88)
            d_5dbf_0efa[d_69da_dc74] = 4;
        else if (d_69da_da24 <= 93)
            d_5dbf_0efa[d_69da_dc74] = 5;
        else
            d_5dbf_0efa[d_69da_dc74] = 7;
    }
}

void f_9c01_1dcf(void)
{
    unsigned char k;

    d_69da_de1e = 0;
    for (k = 0; k <= 1; k = k + 1) {
        for (d_69da_d9f0 = k == 0 ? 646 : 0; d_69da_d9f0 <= d_69da_da4a + 645; d_69da_d9f0++) {
            d_69da_d9ea = 0;
            for (d_69da_d9a0 = 0; d_69da_d9a0 <= 19; d_69da_d9a0++)
                if (d_4512_727c[d_69da_d9a0][k] <= d_4512_727c[d_69da_d9ea][k])
                    d_69da_d9ea = d_69da_d9a0;
            d_69da_df9e = f_2162_1634(d_69da_dfe8, 0);
            if (d_4512_727c[d_69da_d9ea][k] < d_69da_df9e[d_69da_d9f0]) {
                d_69da_df9e = f_2162_1634(d_69da_dfe8, 0);
                d_4512_727c[d_69da_d9ea][k] = d_69da_df9e[d_69da_d9f0];
                d_69da_dfca = f_2162_1634(d_69da_dffe, 1);
                strcpy(d_69da_dfca + d_69da_d9ea * 160 + k * 80, f_1a70_4793(d_69da_d9f0, 0));
                if (d_4512_2390[d_69da_d9f0] < 255)
                    strcpy(d_536d_534d, d_69da_b1fc[d_4512_2390[d_69da_d9f0]]);
                else
                    strcpy(d_536d_534d, "NO CLUB");
                d_69da_dfca = f_2162_1634(d_69da_dffe, 1);
                strcpy(d_69da_dfca + d_69da_d9ea * 160 + k * 80 + 3200, d_536d_534d);
                d_69da_de1e = -1;
            }
        }
        for (d_69da_d9d2 = 0; d_69da_d9d2 <= 18; d_69da_d9d2++)
            for (d_69da_d9a0 = d_69da_d9d2 + 1; d_69da_d9a0 <= 19; d_69da_d9a0++)
                if (d_4512_727c[d_69da_d9d2][k] < d_4512_727c[d_69da_d9a0][k]) {
                    f_2162_13fc(&d_4512_727c[d_69da_d9d2][k], &d_4512_727c[d_69da_d9a0][k], 4);
                    d_69da_dfca = f_2162_1634(d_69da_dffe, 1);
                    f_2162_13fc(d_69da_dfca + d_69da_d9d2 * 160 + k * 80,
                                d_69da_dfca + d_69da_d9a0 * 160 + k * 80, 80);
                    f_2162_13fc(d_69da_dfca + d_69da_d9d2 * 160 + k * 80 + 3200,
                                d_69da_dfca + d_69da_d9a0 * 160 + k * 80 + 3200, 80);
                }
    }
    if (d_69da_de1e != 0)
        f_a330_4372();
}

void f_9c01_2132(void)
{
    int d[3];
    int a[11];
    int b[11];
    int c[11];
    unsigned k;

    for (d_69da_d9f6 = 0; d_69da_d9f6 <= 79; d_69da_d9f6++) {
        d_69da_d9d8 = d_4512_6324[0][d_69da_d9f6];
        d_4512_0000[70][d_69da_d9d8] = d_4512_0000[69][d_69da_d9d8];
        d_4512_0000[69][d_69da_d9d8] = d_4512_0000[68][d_69da_d9d8];
        d_4512_0000[68][d_69da_d9d8] = d_69da_d9f6;
        d_4512_0000[0][d_69da_d9d8] = (d_4512_0000[0][d_69da_d9d8] * 2 + 8) / 3;
        if (d_4512_0000[11][d_69da_d9d8] == 1 && d_69da_d9f6 < 79)
            d_4512_1e90[0][d_69da_d9d8] = d_4512_1e90[0][d_69da_d9d8]
                + (f_a83a_1ea1(d_69da_d9d8 + 20) - f_a83a_1ea1(d_69da_d9d8));
        else if (d_4512_0000[11][d_69da_d9d8] > 2 && d_69da_d9f6 > 0)
            d_4512_1e90[0][d_69da_d9d8] = d_4512_1e90[0][d_69da_d9d8]
                + (f_a83a_1ea1(d_69da_d9d8 - 20) - f_a83a_1ea1(d_69da_d9d8));
        d_4512_0000[11][d_69da_d9d8] = 2;
    }
    f_b8da_5d03();
    d_4512_6376[0] = d_4512_6324[0][0];
    d_4512_6376[1] = d_4512_5e24[1][0];
    if (d_4512_6376[0] == d_4512_6376[1])
        d_4512_6376[1] = d_4512_6324[0][1];
    a[0] = d_4512_5e24[6][0];
    a[1] = d_4512_6324[0][0];
    a[2] = d_4512_5e24[6][1];
    for (d_69da_d9d6 = 3; d_69da_d9d6 <= 10; d_69da_d9d6++)
        a[d_69da_d9d6] = d_4512_6322[d_69da_d9d6];
    b[0] = d_4512_5e24[5][0];
    b[1] = d_4512_5e24[1][0];
    b[2] = d_4512_5e24[1][1];
    b[3] = d_4512_5e24[5][1];
    for (d_69da_d9d6 = 4; d_69da_d9d6 <= 10; d_69da_d9d6++)
        b[d_69da_d9d6] = d_4512_6321[d_69da_d9d6];
    for (d_69da_d9d6 = 0; d_69da_d9d6 <= 10; d_69da_d9d6++)
        c[d_69da_d9d6] = d_4512_6324[0][d_69da_d9d6 + 1];

    for (d_69da_dbb2 = 0; d_69da_dbb2 <= 1; d_69da_dbb2++)
        for (d_69da_dbac = d_69da_dbb2 + 1; d_69da_dbac <= 10; d_69da_dbac++)
            if (a[d_69da_dbac] == a[d_69da_dbb2]) {
                for (k = d_69da_dbac; k < 10; k++)
                    a[k] = a[k + 1];
                d_69da_dbac--;
                a[10] = -1;
            }
    for (d_69da_dbb2 = 0; d_69da_dbb2 <= 1; d_69da_dbb2++)
        for (d_69da_dbac = 0; d_69da_dbac <= 10; d_69da_dbac++)
            if (b[d_69da_dbac] == a[d_69da_dbb2]) {
                for (k = d_69da_dbac; k < 10; k++)
                    b[k] = b[k + 1];
                d_69da_dbac--;
                b[10] = -1;
            }
    for (d_69da_dbb2 = 0; d_69da_dbb2 <= 1; d_69da_dbb2++)
        for (d_69da_dbac = 0; d_69da_dbac <= 10; d_69da_dbac++)
            if (c[d_69da_dbac] == a[d_69da_dbb2]) {
                for (k = d_69da_dbac; k < 10; k++)
                    c[k] = c[k + 1];
                d_69da_dbac--;
                c[10] = -1;
            }
    for (d_69da_dbb2 = 0; d_69da_dbb2 <= 1; d_69da_dbb2++)
        for (d_69da_dbac = d_69da_dbb2 + 1; d_69da_dbac <= 10; d_69da_dbac++)
            if (b[d_69da_dbac] == b[d_69da_dbb2]) {
                for (k = d_69da_dbac; k < 10; k++)
                    b[k] = b[k + 1];
                d_69da_dbac--;
                b[10] = -1;
            }
    for (d_69da_dbb2 = 0; d_69da_dbb2 <= 1; d_69da_dbb2++)
        for (d_69da_dbac = 0; d_69da_dbac <= 10; d_69da_dbac++)
            if (c[d_69da_dbac] == b[d_69da_dbb2]) {
                for (k = d_69da_dbac; k < 10; k++)
                    c[k] = c[k + 1];
                d_69da_dbac--;
                c[10] = -1;
            }

    d[0] = d_4512_5e24[7][0];
    d[1] = d_4512_5e24[7][1];
    d[2] = d_4512_5e24[7][2];
    memset(d_4512_5e24, -1, 0x500);
    for (d_69da_dbb2 = 0; d_69da_dbb2 <= 3; d_69da_dbb2++) {
        d_4512_5e24[4][d_69da_dbb2] = c[d_69da_dbb2];
        if (d_69da_dbb2 < 2) {
            d_4512_5e24[5][d_69da_dbb2] = b[d_69da_dbb2];
            d_4512_5e24[6][d_69da_dbb2] = a[d_69da_dbb2];
        }
    }
    for (d_69da_d9d6 = 48; d_69da_d9d6 <= 79; d_69da_d9d6++)
        d_4512_5e24[2][d_69da_d9d6 - 48] = d_4512_6324[0][d_69da_d9d6];
    for (d_69da_d9d6 = 0; d_69da_d9d6 <= 47; d_69da_d9d6++)
        d_4512_5e24[2][d_69da_d9d6 + 32] = d_4512_6324[0][d_69da_d9d6];

    for (d_69da_d9de = 0; d_69da_d9de <= 2; d_69da_d9de++) {
        for (d_69da_d9f6 = 0; d_69da_d9f6 <= 1; d_69da_d9f6++) {
            d_4512_28a4[d_4512_1a30[0][d_4512_6324[d_69da_d9de + 1][d_69da_d9f6]]] =
                d_4512_28a4[d_4512_1a30[0][d_4512_6324[d_69da_d9de + 1][d_69da_d9f6]]] + 50;
            f_a83a_0852(d_4512_6324[d_69da_d9de][d_69da_d9f6 + 18],
                        d_4512_6324[d_69da_d9de + 1][d_69da_d9f6]);
        }
        d_4512_28a4[d_4512_1a30[0][d[d_69da_d9de]]] =
            d_4512_28a4[d_4512_1a30[0][d[d_69da_d9de]]] + 50;
        f_a83a_0852(d_4512_6324[d_69da_d9de][17], d[d_69da_d9de]);
    }

    d_69da_d998 = d_4512_6324[3][19];
    f_9661_3ef4(d_69da_d998, 2);
    f_b8da_609f();
}

/* A non-league club (400-459, the best of 30 random draws) takes the place of club
   `team`: names, attributes, fixtures, staff and players are swapped or reset. */
void f_9c01_2815(int team)
{
    unsigned char i;

    if (d_69da_d99a > 1) {
        d_69da_db58 = 0;
        do {
            d_69da_d9d6 = f_2162_0da1(60) + 400;
            if ((d_69da_dbb4 = d_5dbf_0996[0][d_69da_d9d6]) > d_69da_d9e0 || d_69da_db58 == 0) {
                d_69da_d9e0 = d_5dbf_0996[0][d_69da_d9d6];
                d_69da_dca8 = d_69da_d9d6;
            }
            d_69da_db58++;
        } while (d_69da_db58 < 30);
        f_2162_13fc((void *)&d_69da_b1fc[team], (void *)&d_69da_b344[d_69da_dca8], 2);
        d_69da_b2a0[team] = d_69da_b1fc[team];
        d_4512_0000[0][team] = 10;
        d_4512_0000[1][team] = f_2162_0da1(10) + 10;
        f_2162_13fc(&d_4512_0000[2][team], &d_5dbf_0996[1][d_69da_dca8], 1);
        f_2162_13fc(&d_4512_0000[3][team], &d_5dbf_0996[2][d_69da_dca8], 1);
        d_4512_0000[4][team] = 13;
        d_4512_0000[5][team] = f_2162_0da1(5) + 5;
        d_4512_0000[6][team] = 100;
        d_4512_0000[11][team] = 2;
        d_4512_0000[22][team] = f_2162_0da1(3) + 2;
        d_4512_1e90[0][team] = f_2162_0da1(125000L) + 125000L;
        d_4512_1e90[0][team] += f_a83a_1ea1(team);
        d_5dbf_0996[0][d_69da_dca8] = 10;
        for (d_69da_d9a0 = 0; d_69da_d9a0 <= 139; d_69da_d9a0++)
            if (d_4512_7f74[d_69da_d9a0] == team)
                d_4512_7f74[d_69da_d9a0] = d_69da_dca8 - 320;
            else if (d_4512_7f74[d_69da_d9a0] == d_69da_dca8 - 320)
                d_4512_7f74[d_69da_d9a0] = team;
        for (d_69da_d9a0 = 0; d_69da_d9a0 <= 79; d_69da_d9a0++)
            for (d_69da_d9ea = 1; d_69da_d9ea <= 7; d_69da_d9ea++) {
                if (d_69da_d9ea == 2)
                    continue;
                if (d_4512_5e24[d_69da_d9ea][d_69da_d9a0] == team)
                    d_4512_5e24[d_69da_d9ea][d_69da_d9a0] = d_69da_dca8 + 80;
                else if (d_4512_5e24[d_69da_d9ea][d_69da_d9a0] == d_69da_dca8 + 80)
                    d_4512_5e24[d_69da_d9ea][d_69da_d9a0] = team;
            }
        for (d_69da_d9a0 = 0; d_69da_d9a0 <= 1; d_69da_d9a0++)
            if (d_4512_6376[d_69da_d9a0] == team)
                d_4512_6376[d_69da_d9a0] = d_69da_dca8 + 80;
            else if (d_4512_6376[d_69da_d9a0] == d_69da_dca8 + 80)
                d_4512_6376[d_69da_d9a0] = team;
        f_2162_13fc(&d_5dbf_4fd2[0][team], d_5dbf_4fd2[0] - 320 + d_69da_dca8, 1);
        f_2162_13fc(&d_5dbf_4fd2[1][team], d_5dbf_4fd2[1] - 320 + d_69da_dca8, 1);
        for (d_69da_d9a0 = 0; d_69da_d9a0 <= d_69da_d98e - 1; d_69da_d9a0++)
            if (d_3668_0000[10][d_69da_d9a0] == team)
                d_3668_0000[10][d_69da_d9a0] = d_69da_dca8 - 320;
            else if (d_3668_0000[10][d_69da_d9a0] == d_69da_dca8 - 320)
                d_3668_0000[10][d_69da_d9a0] = team;
        f_a330_4570(team, d_69da_dca8 - 320);
        f_a330_4795(team, d_69da_dca8 + 80);
        for (d_69da_dc48 = 0; d_69da_dc48 <= 6; d_69da_dc48++)
            d_4512_1a30[d_69da_dc48][team] = 650;
        for (d_69da_dd9c = 0; d_69da_dd9c <= 6; d_69da_dd9c++) {
            d_69da_dc60 = -1;
            for (d_69da_d9f0 = 0; d_69da_d9f0 <= 645; d_69da_d9f0++)
                if (d_4512_2390[d_69da_d9f0] == 255) {
                    if ((d_69da_dbf6 = f_2162_134e(d_4512_3042[0][d_69da_d9f0],
                                         f_2162_134e(d_4512_32cc[d_69da_d9f0],
                                             f_2162_134e(d_4512_3556[d_69da_d9f0],
                                                         d_4512_37e0[d_69da_d9f0]))))
                            < d_69da_dc82 || d_69da_dc60 == -1) {
                        d_69da_dc60 = d_69da_d9f0;
                        d_69da_dc82 = d_69da_dbf6;
                    }
                }
            f_9661_327b(d_69da_dc60, team, 0);
        }
        d_4512_0000[62][team] = 0;
        d_69da_dfc6 = f_2162_1634(d_69da_dffc, 1);
        strcpy(d_69da_dfc6[team], "");
        d_4512_0000[7][team] = 0;
        d_4512_0000[10][team] = 0;
        d_69da_dcaa = 0;
        for (d_69da_d9ae = 0; d_69da_d9ae <= d_69da_d98e - 1; d_69da_d9ae++)
            if (d_28da_2a78[18][d_69da_d9ae] == team) {
                f_b085_08ac(d_69da_d9ae, team, d_69da_dcaa < 2 ? 1 : 0);
                d_69da_dcaa++;
                f_9007_17fd(d_69da_d9ae, -1);
            }
        for (i = 0; i <= 15; i = i + 1)
            f_b085_36c7(team, i);
    }
}

/* The players' yearly ageing and attribute drift. */
void f_9c01_2dc1(void)
{
    f_b8da_61ff(1);
    for (d_69da_dcac = 1; d_69da_dcac <= 3; d_69da_dcac++)
        f_a83a_1ecd();
    d_69da_d9ae = 0;
    f_2162_19f6(2);
    d_69da_0094 = fopen(d_536d_a49d, "rb+");
    do {
        if (d_69da_d98e - 1 >= d_69da_d9ae)
            f_b8da_6369(1, d_69da_d9ae, d_69da_d98e - 1);
        d_69da_dfa6 = f_2162_1634(d_69da_dfec, 0);
        f_9c01_34fd(d_69da_d9ae, d_28da_2a78[17][d_69da_d9ae], d_3668_0000[0][d_69da_d9ae],
                    d_69da_dfa6[0][d_69da_d9ae]);
        f_b085_33dc(d_69da_d9ae);
        d_28da_2a78[8][d_69da_d9ae] = f_2162_13ba(d_28da_2a78[8][d_69da_d9ae] + (f_2162_0da1(3) == 0), 9);
        d_28da_2a78[11][d_69da_d9ae] = f_2162_134e(d_28da_2a78[11][d_69da_d9ae] - (f_2162_0da1(3) == 0), 1);
        d_28da_2a78[12][d_69da_d9ae] = f_2162_13ba(d_28da_2a78[12][d_69da_d9ae] + (f_2162_0da1(3) == 0), 20);
        d_28da_2a78[14][d_69da_d9ae] = f_2162_134e(d_28da_2a78[14][d_69da_d9ae] - (f_2162_0da1(3) == 0), 1);
        d_28da_2a78[17][d_69da_d9ae]++;
        d_69da_dfba = f_2162_1634(d_69da_dff6, 1);
        d_3668_0000[5][d_69da_d9ae] = d_3668_0000[0][d_69da_d9ae];
        d_3668_0000[6][d_69da_d9ae] = d_3668_0000[1][d_69da_d9ae];
        d_69da_dfba[6][d_69da_d9ae] = d_3668_0000[2][d_69da_d9ae];
        d_69da_dfba[6][d_69da_d9ae] -= d_69da_dfba[6][d_69da_d9ae] % 5;
        d_69da_dfba[7][d_69da_d9ae] = d_3668_0000[3][d_69da_d9ae];
        d_69da_dfba[8][d_69da_d9ae] = d_3668_0000[4][d_69da_d9ae];
        d_69da_dfa6 = f_2162_1634(d_69da_dfec, 1);
        d_69da_dfa6[1][d_69da_d9ae] = d_69da_dfa6[0][d_69da_d9ae];
        if (d_69da_d98e - 1 == d_69da_d9ae)
            d_69da_d9ae = 1680;
        else
            d_69da_d9ae++;
    } while (d_69da_d990 + 1679 >= d_69da_d9ae);
    fclose(d_69da_0094);
}

void f_9c01_30af(void)
{
    char buf[320];
    char title[80];
    char text[80];

    f_b8da_61ff(6);
    for (d_69da_d9ae = 0; d_69da_d9ae <= d_69da_d98e - 1; d_69da_d9ae++) {
        f_b8da_6369(6, d_69da_d9ae, d_69da_d98e - 1);
        if (d_69da_de3d && d_69da_d99a == 1)
            continue;
        d_69da_dc4e = d_28da_2a78[0][18 * 1860 + d_69da_d9ae];
        d_69da_dc30 = d_28da_2a78[17][d_69da_d9ae];
        if (d_4512_bdc8[d_69da_d9ae].f0 && d_69da_dc30 > 28)
            d_69da_dc30 = f_2162_134e(d_69da_dc30 - 4, 28);
        d_69da_de20 = d_69da_dc30 > 30 && d_4512_bdc8[d_69da_d9ae].f8;
        d_69da_de21 = d_4512_bdc8[d_69da_d9ae].f17 == 1;
        if (d_69da_de21 != 0 || d_69da_dc30 > 38 ||
            (d_69da_dc30 > 33 && d_28da_2a78[0][d_69da_d9ae] < 40) ||
            (d_69da_dc30 > 30 && d_28da_2a78[0][d_69da_d9ae] < 30) || d_69da_de20 != 0) {
            d_69da_de22 = 0;
            if (f_1a70_2bc7(d_69da_dc4e) && d_69da_d99a > 1) {
                sprintf(title, "%s squad news", (char far *)d_69da_b1fc[d_69da_dc4e]);
                if (d_69da_de21 != 0)
                    sprintf(buf, "%s has been forced to retire through injury", f_1a70_4592(d_69da_d9ae));
                else if (d_69da_de20 != 0) {
                    sprintf(buf, "%s has decided to go into non league soccer", f_1a70_4592(d_69da_d9ae));
                    d_69da_df9a = f_2162_1634(d_69da_dfe6, 0);
                    d_4512_1e90[0][d_69da_dc4e] += d_69da_df9a[d_69da_d9ae] / (f_2162_10cf() + 1);
                } else
                    sprintf(buf, "%s has decided to hang up his boots", f_1a70_4592(d_69da_d9ae));
                sprintf(text, "%s at the age of %d.", buf, d_28da_2a78[17][d_69da_d9ae]);
                f_1a70_598c(d_69da_dc4e, title, text);
                d_69da_de22 = -1;
            }
            if (d_69da_de21 != 0 && d_4512_bdc8[d_69da_d9ae].f20) {
                d_69da_df51 = f_1a70_0cb8(f_1a70_01d9(d_69da_d9ae, -1), 0);
                if (f_1a70_2bc7(d_69da_dc4e) && d_69da_d99a > 1) {
                    sprintf(title, "%s squad news", (char far *)d_69da_b1fc[d_69da_dc4e]);
                    sprintf(text, "The club receives %ld from the insurance company following %s's retirement.",
                            d_69da_df51, f_1a70_4739(d_69da_d9ae));
                    f_1a70_598c(d_69da_dc4e, title, text);
                    d_69da_de22 = -1;
                }
                d_4512_1e90[0][d_69da_dc4e] += d_69da_df51;
            }
            if (d_69da_de22 != 0) {
                f_b8da_609f();
                f_b8da_61ff(6);
            }
            d_4512_023e[d_69da_dc4e]--;
            if (d_4512_bdc8[d_69da_d9ae].f0)
                d_4512_0334[0][d_69da_dc4e]--;
            if (d_4512_023e[d_69da_dc4e] < 17 || d_4512_0334[0][d_69da_dc4e] == 0)
                f_b085_08ac(d_69da_d9ae, d_69da_dc4e, d_4512_0334[0][d_69da_dc4e] == 0 ? 3 : 2);
            else {
                d_69da_d9d8 = -1;
                d_69da_db58 = 0;
                do {
                    d_69da_d9d8 = f_2162_0da1(60);
                    d_69da_db58++;
                } while (d_4512_023e[d_69da_d9d8] >= d_69da_db58 / 60 + 14);
                f_b085_08ac(d_69da_d9ae, d_69da_d9d8, 2);
            }
            f_9007_17fd(d_69da_d9ae, -1);
        }
    }
}

void f_9c01_34fd(int player, int age, int games, int rating)
{
    if (games > 0)
        d_69da_de61 = (float)rating / games * 41 - 120;
    else
        d_69da_de61 = d_28da_2a78[0][player];
    d_69da_dcae = d_28da_2a78[0][player];
    if (d_4512_bdc8[player].f0 && age > 28)
        d_69da_dcb0 = f_2162_134e(age - 4, 28);
    else
        d_69da_dcb0 = age;
    if (d_69da_dcb0 <= 27) {
        d_28da_2a78[0][player] = (d_28da_2a78[0][player] * 4 + d_28da_2a78[9][player]) / 5;
        d_69da_dcb2 = f_2162_13ba(38, games);
        d_28da_2a78[0][player] = f_2162_134e(f_2162_13ba((d_28da_2a78[0][player] * (100 - d_69da_dcb2) +
                                                          d_69da_dcb2 * d_69da_de61 * 1.03) / 100,
                                                         d_28da_2a78[9][player]), 10);
    } else if (d_69da_dcb0 >= 30)
        d_28da_2a78[0][player] = (d_28da_2a78[0][player] * 5 + 10) / 6;
}

void f_9c01_3671(void)
{
    long cap;

    for (d_69da_d9d6 = 0; d_69da_d9d6 <= 79; d_69da_d9d6++) {
        long cost;
        unsigned char stand;
        unsigned char seat;

        cap = d_4512_0052[d_69da_d9d6] * 1000L;
        d_69da_df55 = d_4512_2250[d_69da_d9d6] / d_4512_138a[d_69da_d9d6];
        if (f_1a70_2bc7(d_69da_d9d6)) {
            char title[80];
            char text[80];

            sprintf(title, "%s club news", (char far *)d_69da_b1fc[d_69da_d9d6]);
            sprintf(text, "Our average attendance for the season was %ld.", d_69da_df55);
            f_1a70_598c(d_69da_d9d6, title, text);
        }
        if (d_69da_df55 > cap * 0.8 && d_4512_0052[d_69da_d9d6] < 50) {
            d_69da_df59 = f_2162_1367(d_4512_1e90[0][d_69da_d9d6] - f_a83a_1ea1(d_69da_d9d6), 0L) * 0.75;
            cost = f_2162_13ba(d_69da_df59, (f_2162_0da1(6) * 10 + 200) * 1000);
            if (cost < 0)
                cost = 0;
            stand = d_69da_d9d6 < 20 && d_4512_0052[d_69da_d9d6] < 40 && f_2162_0da1(30) == 0 ?
                    f_2162_0da1(6) + 5 : f_2162_0da1(3) + 1;
            seat = d_69da_d9d6 < 40 ? stand : 0;
            d_4512_1e90[0][d_69da_d9d6] -= cost;
            d_4512_0052[d_69da_d9d6] += stand;
            d_4512_1524[d_69da_d9d6] += seat;
            if (f_1a70_2bc7(d_69da_d9d6)) {
                char title[80];
                char text[180];

                sprintf(title, "%s ground news", (char far *)d_69da_b1fc[d_69da_d9d6]);
                if (seat > 0)
                    sprintf(text, "The board has decided to increase standing capacity by %ld and seating capacity by %ld. Total capacity is now %ld. %ld of the cost is from club funds.",
                            (stand - seat) * 1000L, seat * 1000L, d_4512_0052[d_69da_d9d6] * 1000L, cost);
                else
                    sprintf(text, "The board has decided to increase standing capacity by %ld. Total capacity is now %ld. %ld of the cost is from club funds.",
                            stand * 1000L, d_4512_0052[d_69da_d9d6] * 1000L, cost);
                f_1a70_598c(d_69da_d9d6, title, text);
            }
        } else if (d_69da_d9d6 / 20 == 0 && d_4512_1524[d_69da_d9d6] < d_4512_0052[d_69da_d9d6]) {
            d_69da_df59 = f_2162_1367(d_4512_1e90[0][d_69da_d9d6] - f_a83a_1ea1(d_69da_d9d6), 0L) * 0.75;
            cost = f_2162_13ba(d_69da_df59, (f_2162_0da1(6) * 10 + 100) * 1000);
            if (cost < 0)
                cost = 0;
            stand = (d_4512_0052[d_69da_d9d6] - d_4512_1524[d_69da_d9d6]) / 2;
            stand = f_2162_13ba(f_2162_134e(stand, 1), f_2162_0da1(4) + 5);
            d_4512_1e90[0][d_69da_d9d6] -= cost;
            d_4512_1524[d_69da_d9d6] += stand;
            d_4512_0052[d_69da_d9d6] = d_4512_0052[d_69da_d9d6] - stand * 0.4;
            if (d_4512_0052[d_69da_d9d6] < d_4512_1524[d_69da_d9d6])
                d_4512_0052[d_69da_d9d6] = d_4512_1524[d_69da_d9d6];
            if (f_1a70_2bc7(d_69da_d9d6)) {
                char title[80];
                char text[180];

                sprintf(title, "%s ground news", (char far *)d_69da_b1fc[d_69da_d9d6]);
                if (d_4512_0052[d_69da_d9d6] == d_4512_1524[d_69da_d9d6])
                    sprintf(text, "The board has decided to convert the remaining standing areas to seating. The all-seater capacity is now %ld. %ld of the cost is from club funds.",
                            d_4512_0052[d_69da_d9d6] * 1000L, cost);
                else
                    sprintf(text, "The board has decided to convert part of the standing area to seating. Seating capacity is now %ld, but total capacity is reduced to %ld. %ld of the cost is from club funds.",
                            d_4512_1524[d_69da_d9d6] * 1000L, d_4512_0052[d_69da_d9d6] * 1000L, cost);
                f_1a70_598c(d_69da_d9d6, title, text);
            }
        }
    }
}

void f_9c01_3c56(void)
{
    FILE *fp;
    char buf[320];
    unsigned char i;

    f_b8da_61ff(4);
    for (i = 0; i <= 79; i++) {
        d_28da_0010[i] = 0;
        d_28da_2130[i] = 0;
    }
    for (d_69da_d9ae = 0; d_69da_d9ae <= d_69da_d98e - 1; d_69da_d9ae++) {
        d_69da_dfa6 = f_2162_1634(d_69da_dfec, 0);
        f_9c01_4964(d_69da_d9ae, d_28da_ad40[d_69da_d9ae], d_3668_0000[13][d_69da_d9ae],
                    d_3668_0000[12][d_69da_d9ae], d_69da_dfa6[2][d_69da_d9ae]);
    }
    f_2162_19f6(2);
    fp = fopen(d_536d_a4c5, "rb+");
    for (d_69da_d9d6 = 0; d_69da_d9d6 <= 139; d_69da_d9d6++) {
        f_b8da_6369(4, d_69da_d9d6, 139);
        fseek(fp, (long)d_69da_d9d6 * 279, 0);
        fread(d_536d_7153, 1, 279, fp);
        if (d_4512_8f28[0][d_69da_d9d6] > -1) {
            sprintf(d_536d_534d, "%.12s", f_1a70_3404(d_4512_8f28[0][d_69da_d9d6]));
            sprintf(d_536d_71cb, "%-12s", d_536d_534d);
            d_536d_71d7 = d_69da_d99a + 99;
        }
        if (d_4512_8f28[1][d_69da_d9d6] > -1) {
            sprintf(d_536d_534d, "%.12s", f_1a70_3404(d_4512_8f28[1][d_69da_d9d6]));
            sprintf(d_536d_71d8, "%-12s", d_536d_534d);
            d_536d_71e4 = d_69da_d99a + 99;
        }
        if (d_4512_8f28[2][d_69da_d9d6] > -1) {
            sprintf(d_536d_534d, "%.12s", f_1a70_3404(d_4512_8f28[2][d_69da_d9d6]));
            sprintf(d_536d_71e5, "%-12s", d_536d_534d);
            d_536d_71f1 = d_69da_d99a + 99;
        }
        if (d_4512_8f28[3][d_69da_d9d6] > -1) {
            sprintf(d_536d_534d, "%.12s", f_1a70_3404(d_4512_8f28[3][d_69da_d9d6]));
            sprintf(d_536d_71f2, "%-12s", d_536d_534d);
            d_536d_71fe = d_69da_d99a + 99;
        }
        if (d_4512_8f28[8][d_69da_d9d6] > -1) {
            sprintf(d_536d_726b, "%.13s", f_1a70_46c1(d_4512_8f28[9][d_69da_d9d6]));
            sprintf(d_536d_7250, "%-13s", d_536d_726b);
            sprintf(d_536d_534d, "%.12s", f_1a70_3404(d_4512_8f28[8][d_69da_d9d6]));
            sprintf(d_536d_725d, "%-12s", d_536d_534d);
            d_536d_7269 = d_69da_d99a + 99;
        }
        if (d_4512_8f28[4][d_69da_d9d6] > -1) {
            sprintf(d_536d_726b, "%.13s", f_1a70_46c1(d_4512_8f28[4][d_69da_d9d6]));
            sprintf(d_536d_721b, "%-13s", d_536d_726b);
            if (d_4512_8f28[5][d_69da_d9d6] < 80)
                strcpy(d_536d_534d, d_69da_b1fc[d_4512_8f28[5][d_69da_d9d6]]);
            else
                sprintf(d_536d_534d, "<%s>", d_5dbf_0550[d_4512_8f28[5][d_69da_d9d6] - 480]);
            sprintf(d_536d_7228, "%-12s", d_536d_534d);
            d_536d_7234 = d_69da_d99a + 99;
        }
        if (d_4512_8f28[6][d_69da_d9d6] > -1) {
            sprintf(d_536d_726b, "%.13s", f_1a70_46c1(d_4512_8f28[6][d_69da_d9d6]));
            sprintf(d_536d_7235, "%-13s", d_536d_726b);
            if (d_4512_8f28[7][d_69da_d9d6] < 80)
                sprintf(d_536d_534d, "%.12s", (char far *)d_69da_b1fc[d_4512_8f28[7][d_69da_d9d6]]);
            else
                sprintf(d_536d_534d, "<%.12s>", d_5dbf_0550[d_4512_8f28[7][d_69da_d9d6] - 480]);
            sprintf(d_536d_7242, "%-12s", d_536d_534d);
            d_536d_724e = d_69da_d99a + 99;
        }
        if (d_69da_d9d6 < 80) {
            if (d_4512_880c[4][d_69da_d9d6] < d_28da_0010[d_69da_d9d6]) {
                d_4512_880c[4][d_69da_d9d6] = d_28da_0010[d_69da_d9d6];
                sprintf(d_536d_726b, "%.13s", f_1a70_46c1(d_28da_24fc[0][d_69da_d9d6]));
                sprintf(d_536d_71ff, "%-13s", d_536d_726b);
                d_536d_720c = d_69da_d99a + 99;
            }
            if (d_28da_2130[d_69da_d9d6] > d_4512_9c34[d_69da_d9d6]) {
                d_4512_9c34[d_69da_d9d6] = d_28da_2130[d_69da_d9d6];
                sprintf(d_536d_726b, "%.13s", f_1a70_46c1(d_28da_24fc[1][d_69da_d9d6]));
                sprintf(d_536d_720d, "%-13s", d_536d_726b);
                d_536d_721a = d_69da_d99a + 99;
            }
        }
        d_69da_d9f6 = f_1a70_4513(d_69da_d9d6);
        if (d_4512_880c[5][d_69da_d9d6] > d_69da_d9f6) {
            d_4512_880c[5][d_69da_d9d6] = d_69da_d9f6;
            d_536d_724f = d_69da_d99a + 99;
        }
        sprintf(d_536d_72bb, "%c%c", d_69da_d99a + 99, d_69da_d9f6 + 32);
        if (d_69da_d9d6 < 80) {
            d_69da_dcba = d_4512_03d8[d_69da_d9d6];
            d_69da_dcbc = d_4512_042a[d_69da_d9d6];
            d_69da_dcbe = d_69da_d9ba - d_69da_dcba - d_69da_dcbc - 1;
            sprintf(buf, "%c%c%c%c%c%c", d_69da_dcba + 32, d_69da_dcbe + 32, d_69da_dcbc + 32,
                    d_4512_047c[d_69da_d9d6] + 32, d_4512_04ce[d_69da_d9d6] + 32,
                    f_a83a_0000(d_69da_d9f6) + 32);
            strcat(d_536d_72bb, buf);
        } else
            strcat(d_536d_72bb, "      ");
        sprintf(d_536d_72bb + strlen(d_536d_72bb), "%c%c",
                d_4512_880c[6][d_69da_d9d6] + 32, d_4512_880c[7][d_69da_d9d6] + 32);
        if (d_4512_880c[8][d_69da_d9d6] > 0)
            sprintf(d_536d_72bb + strlen(d_536d_72bb), "%c%c", 35, d_4512_880c[8][d_69da_d9d6] + 32);
        else if (d_4512_880c[9][d_69da_d9d6] > 0)
            sprintf(d_536d_72bb + strlen(d_536d_72bb), "%c%c", 36, d_4512_880c[9][d_69da_d9d6] + 32);
        else if (d_4512_880c[10][d_69da_d9d6] > 0)
            sprintf(d_536d_72bb + strlen(d_536d_72bb), "%c%c", 37, d_4512_880c[10][d_69da_d9d6] + 32);
        else if (d_4512_880c[11][d_69da_d9d6] > 0)
            sprintf(d_536d_72bb + strlen(d_536d_72bb), "%c%c", 38, d_4512_880c[11][d_69da_d9d6] + 32);
        else
            strcat(d_536d_72bb, "  ");
        d_69da_dca2 = f_2162_13ba(d_69da_d99a, 10);
        if (d_69da_d99a > 10)
            memcpy(d_536d_7153, d_536d_715f, 108);
        memcpy(d_536d_7147[d_69da_dca2], d_536d_72bb, 12);
        fseek(fp, (long)d_69da_d9d6 * 279, 0);
        fwrite(d_536d_7153, 1, 279, fp);
    }
    fclose(fp);
}

void f_9c01_4549(int team, int other, int a, int b)
{
    if (team < 80 || team >= 480) {
        d_69da_d9d6 = team - (team >= 480 ? 400 : 0);
        d_69da_dcc0 = d_4512_880c[0][d_69da_d9d6] - d_4512_880c[1][d_69da_d9d6];
        if (a - b > d_69da_dcc0
            || (a - b == d_69da_dcc0 && d_4512_880c[0][d_69da_d9d6] < a)) {
            d_4512_880c[0][d_69da_d9d6] = a;
            d_4512_880c[1][d_69da_d9d6] = b;
            d_4512_8f28[0][d_69da_d9d6] = other;
        }
    }
}

void f_9c01_45ec(int team, int other, int a, int b)
{
    if (team < 80 || team >= 480) {
        d_69da_d9d6 = team - (team >= 480 ? 400 : 0);
        d_69da_dcc0 = d_4512_880c[3][d_69da_d9d6] - d_4512_880c[2][d_69da_d9d6];
        if (b - a > d_69da_dcc0
            || (b - a == d_69da_dcc0 && d_4512_880c[3][d_69da_d9d6] < b)) {
            d_4512_880c[2][d_69da_d9d6] = a;
            d_4512_880c[3][d_69da_d9d6] = b;
            d_4512_8f28[1][d_69da_d9d6] = other;
        }
    }
}

void f_9c01_468f(int team, int other, long v)
{
    if (team < 80 || team >= 480) {
        d_69da_d9d6 = team - (team >= 480 ? 400 : 0);
        d_69da_dfb6 = f_2162_1634(d_69da_dff4, 1);
        if (d_69da_dfb6[0][d_69da_d9d6] < v) {
            d_69da_dfb6[0][d_69da_d9d6] = v;
            d_4512_8f28[2][d_69da_d9d6] = other;
        }
    }
}

void f_9c01_471b(int team, int other, long v)
{
    if (team < 80 || team >= 480) {
        d_69da_d9d6 = team - (team >= 480 ? 400 : 0);
        d_69da_dfb6 = f_2162_1634(d_69da_dff4, 1);
        if (d_69da_dfb6[1][d_69da_d9d6] > v || d_69da_dfb6[1][d_69da_d9d6] == 0) {
            d_69da_dfb6[1][d_69da_d9d6] = v;
            d_4512_8f28[3][d_69da_d9d6] = other;
        }
    }
}

void f_9c01_47c8(int team, int a, int player, int b)
{
    if (team < 80) {
        d_69da_d9d6 = team;
        if (d_4512_880c[12][d_69da_d9d6] < b) {
            d_4512_880c[12][d_69da_d9d6] = b;
            d_4512_8f28[8][d_69da_d9d6] = a;
            d_4512_8f28[9][d_69da_d9d6] = player;
        }
    }
}

void f_9c01_4820(int team, int row, int v)
{
    if (team < 80 || team >= 480) {
        d_69da_d9d6 = team - (team >= 480 ? 400 : 0);
        d_4512_8ac8[row][d_69da_d9d6] = v;
    }
}

void f_9c01_4864(int player, int from, int to, long fee)
{
    d_69da_dfb6 = f_2162_1634(d_69da_dff4, 1);
    if (d_69da_dfb6[2][to] < fee) {
        d_69da_dfb6[2][to] = fee;
        d_4512_8f28[4][to] = player;
        d_4512_8f28[5][to] = from;
    }
}

void f_9c01_48e4(int player, int from, int to, long fee)
{
    d_69da_dfb6 = f_2162_1634(d_69da_dff4, 1);
    if (d_69da_dfb6[3][from] < fee) {
        d_69da_dfb6[3][from] = fee;
        d_4512_8f28[6][from] = player;
        d_4512_8f28[7][from] = to;
    }
}

void f_9c01_4964(int team, int player, int a, int b, int c)
{
    if (d_28da_0010[player] < a) {
        d_28da_0010[player] = a;
        d_28da_24fc[0][player] = team;
    }
    if (b >= 20) {
        d_69da_de61 = (float)c / b;
        if (d_28da_2130[player] < d_69da_de61) {
            d_28da_2130[player] = d_69da_de61;
            d_28da_259c[player] = team;
        }
    }
}

void f_9c01_4a17(int team)
{
    struct recpos far *p;
    FILE *fp;
    char lines[20][80];
    char buf[320];
    char name[40];
    struct recpos pos[20] = {
        { 17.125, 6.5, 6, 2, 138 }, { 34.625, 6.5, 6, 3, 36 },
        { 17.125, 7.5, 6, 9, 138 }, { 34.625, 7.5, 6, 3, 36 },
        { 17.125, 8.5, 6, 2, 138 }, { 34.625, 8.5, 6, 3, 36 },
        { 17.125, 9.5, 6, 9, 138 }, { 34.625, 9.5, 6, 3, 36 },
        { 17.125, 10.5, 6, 2, 138 }, { 34.625, 10.5, 6, 3, 36 },
        { 17.125, 19.0, 6, 2, 138 }, { 34.625, 19.0, 6, 3, 36 },
        { 17.125, 20.0, 6, 9, 138 }, { 34.625, 20.0, 6, 3, 36 },
        { 1.125, 14.25, 6, 14, 151 }, { 1.125, 15.25, 6, 14, 151 },
        { 20.25, 14.25, 6, 14, 151 }, { 20.25, 15.25, 6, 14, 151 },
        { 17.125, 21.0, 6, 2, 138 }, { 34.625, 21.0, 6, 3, 36 }
    };

    f_2162_19f6(2);
    fp = fopen(d_536d_a4c5, "rb+");
    fseek(fp, (long)team * 279, 0);
    fread(d_536d_7153, 1, 279, fp);
    fclose(fp);
    f_1a70_5e32();

    f_1a70_000a(1.25, team, "Club Records");
    sprintf(d_536d_730b, "%d", d_69da_d99a + 1993);
    f_1a70_3554(1.125, 4.0, 1, 8, 0x130, "                   CLUB RECORDS");
    f_1a70_3554(1.125, 11.75, 1, 8, 0x130, "                 TRANSFER RECORDS");
    f_1a70_3554(1.125, 16.5, 1, 8, 0x130, "                  PLAYER RECORDS");
    for (d_69da_dcc2 = 0; d_69da_dcc2 <= 1; d_69da_dcc2++) {
        f_1a70_3554(1.125, d_69da_dcc2 * 12.5 + 5.25, 1, 12, 0x7e, " ACHIEVEMENT");
        f_1a70_3554(17.125, d_69da_dcc2 * 12.5 + 5.25, 1, 4, 0x8a, " RECORD");
        f_1a70_3554(34.625, d_69da_dcc2 * 12.5 + 5.25, 1, 4, 0x24, " YEAR");
    }
    for (d_69da_dcc4 = 0; d_69da_dcc4 <= 19; d_69da_dcc4++)
        strcpy(lines[d_69da_dcc4], "");

    /* best league placing */
    f_1a70_3554(1.125, 6.5, 1, 14, 0x7e, " BEST LEAGUE PLACING");
    d_69da_d9de = d_4512_8ac8[0][team] / 20 + 1;
    if (d_69da_d9de < 5) {
        sprintf(lines[0], " %s IN %s", f_1a70_48f5(d_4512_8ac8[0][team] % 20 + 1), f_1a70_4983(d_69da_d9de, 0));
        sprintf(lines[1], " %d", d_536d_724f + 1894);
    }

    /* biggest victory */
    f_1a70_3554(1.125, 7.5, 1, 14, 0x7e, " BIGGEST VICTORY");
    sprintf(d_536d_6b61, "%d-%d", d_4512_880c[0][team], d_4512_8898[team]);
    if (strcmp(d_536d_6b61, "0-0")) {
        sprintf(lines[2], " %s V ", d_536d_6b61);
        if (d_4512_8f28[0][team] == -1) {
            strncpy(buf, d_536d_71cb, 12);
            buf[12] = 0;
            strcat(lines[2], f_2162_104e(buf));
            sprintf(lines[3], " %d", d_536d_71d7 + 1894);
        } else {
            sprintf(buf, "%.12s", f_1a70_3404(d_4512_8f28[0][team]));
            strcat(lines[2], buf);
            sprintf(lines[3], " %s", d_536d_730b);
        }
    }

    /* heaviest defeat */
    f_1a70_3554(1.125, 8.5, 1, 14, 0x7e, " HEAVIEST DEFEAT");
    sprintf(d_536d_6b61, "%d-%d", d_4512_8924[team], d_4512_89b0[team]);
    if (strcmp(d_536d_6b61, "0-0")) {
        sprintf(lines[4], " %s V ", d_536d_6b61);
        if (d_4512_8f28[1][team] == -1) {
            strncpy(buf, d_536d_71d8, 12);
            buf[12] = 0;
            strcat(lines[4], f_2162_104e(buf));
            sprintf(lines[5], " %d", d_536d_71e4 + 1894);
        } else {
            sprintf(buf, "%.12s", f_1a70_3404(d_4512_8f28[1][team]));
            strcat(lines[4], buf);
            sprintf(lines[5], " %s", d_536d_730b);
        }
    }

    /* highest attendance */
    f_1a70_3554(1.125, 9.5, 1, 14, 0x7e, " HIGHEST ATTENDANCE");
    d_69da_dfb6 = f_2162_1634(d_69da_dff4, 0);
    sprintf(d_536d_7315, "%ld", d_69da_dfb6[0][team]);
    if (strcmp(d_536d_7315, "0")) {
        sprintf(lines[6], " %s V ", d_536d_7315);
        if (d_4512_8f28[2][team] == -1) {
            strncpy(buf, d_536d_71e5, 12);
            buf[12] = 0;
            strcat(lines[6], f_2162_104e(buf));
            sprintf(lines[7], " %d", d_536d_71f1 + 1894);
        } else {
            sprintf(buf, "%.12s", f_1a70_3404(d_4512_8f28[2][team]));
            strcat(lines[6], buf);
            sprintf(lines[7], " %s", d_536d_730b);
        }
    }

    /* lowest attendance */
    f_1a70_3554(1.125, 10.5, 1, 14, 0x7e, " LOWEST ATTENDANCE");
    d_69da_dfb6 = f_2162_1634(d_69da_dff4, 0);
    sprintf(d_536d_7315, "%ld", d_69da_dfb6[1][team]);
    if (strcmp(d_536d_7315, "0")) {
        sprintf(lines[8], " %s V ", d_536d_7315);
        if (d_4512_8f28[3][team] == -1) {
            strncpy(buf, d_536d_71f2, 12);
            buf[12] = 0;
            strcat(lines[8], f_2162_104e(buf));
            sprintf(lines[9], " %d", d_536d_71fe + 1894);
        } else {
            sprintf(buf, "%.12s", f_1a70_3404(d_4512_8f28[3][team]));
            strcat(lines[8], buf);
            sprintf(lines[9], " %s", d_536d_730b);
        }
    }

    /* goals in a season */
    f_1a70_3554(1.125, 19.0, 1, 14, 0x7e, " GOALS IN A SEASON");
    sprintf(d_536d_7365, "%d", d_4512_8a3c[team]);
    if (strcmp(d_536d_7365, "0")) {
        strncpy(d_536d_568b, d_536d_71ff, 13);
        d_536d_568b[13] = 0;
        sprintf(lines[10], " %s - %s", f_2162_104e(d_536d_568b), d_536d_7365);
        sprintf(lines[11], " %d", d_536d_720c + 1894);
    }

    /* average rating in a season */
    f_1a70_3554(1.125, 20.0, 1, 14, 0x7e, " AV RT IN A SEASON");
    if (d_4512_9c34[team] > 0) {
        sprintf(d_536d_55eb, "%.2f", d_4512_9c34[team]);
        strncpy(d_536d_568b, d_536d_720d, 13);
        d_536d_568b[13] = 0;
        sprintf(lines[12], " %s - %s", f_2162_104e(d_536d_568b), d_536d_55eb);
        sprintf(lines[13], " %d", d_536d_721a + 1894);
    }

    /* record fee paid */
    f_1a70_3554(1.125, 13.0, 1, 4, 0x97, " RECORD FEE PAID");
    d_69da_dfb6 = f_2162_1634(d_69da_dff4, 0);
    sprintf(d_536d_6d93, "%ld", d_69da_dfb6[2][team]);
    if (strcmp(d_536d_6d93, "0")) {
        sprintf(lines[14], " %s FOR ", d_536d_6d93);
        strcpy(lines[15], " FROM ");
        if (d_4512_8f28[4][team] == -1) {
            strncpy(buf, d_536d_721b, 13);
            buf[13] = 0;
            strcpy(name, f_2162_104e(buf));
            strncpy(buf, d_536d_7228, 12);
            buf[12] = 0;
            strcat(lines[15], f_2162_104e(buf));
            sprintf(buf, " %d", d_536d_7234 + 1894);
        } else {
            strcpy(name, f_1a70_46c1(d_4512_8f28[4][team]));
            if (d_4512_8f28[5][team] < 80)
                sprintf(buf, "%.12s %s", f_1a70_3404(d_4512_8f28[5][team]), d_536d_730b);
            else
                sprintf(buf, "<%.12s> %s", d_5dbf_0000[d_4512_8f28[5][team] - 140], d_536d_730b);
        }
        strcat(lines[15], buf);
        if (strlen(name) > 12)
            strcpy(name, name + 2);
        strcat(lines[14], name);
    }

    /* record fee recouped */
    f_1a70_3554(20.25, 13.0, 1, 4, 0x97, " RECORD FEE RECOUPED");
    d_69da_dfb6 = f_2162_1634(d_69da_dff4, 0);
    sprintf(d_536d_6d93, "%ld", d_69da_dfb6[3][team]);
    if (strcmp(d_536d_6d93, "0")) {
        sprintf(lines[16], " %s FOR ", d_536d_6d93);
        strcpy(lines[17], " TO ");
        if (d_4512_8f28[6][team] == -1) {
            strncpy(buf, d_536d_7235, 13);
            buf[13] = 0;
            strcpy(name, f_2162_104e(buf));
            strncpy(buf, d_536d_7242, 12);
            buf[12] = 0;
            strcat(lines[17], f_2162_104e(buf));
            sprintf(buf, " %d", d_536d_7234 + 1894);
        } else {
            strcpy(name, f_1a70_46c1(d_4512_8f28[6][team]));
            if (d_4512_8f28[7][team] < 80)
                sprintf(buf, "%.12s %s", f_1a70_3404(d_4512_8f28[7][team]), d_536d_730b);
            else
                sprintf(buf, "<%.12s> %s", d_5dbf_0000[d_4512_8f28[7][team] - 140], d_536d_730b);
        }
        strcat(lines[17], buf);
        if (strlen(name) > 12)
            strcpy(name, name + 2);
        strcat(lines[16], name);
    }

    /* goals in a match */
    f_1a70_3554(1.125, 21.0, 1, 14, 0x7e, " GOALS IN A MATCH");
    sprintf(d_536d_7365, "%d", d_4512_8e9c[team]);
    if (strcmp(d_536d_7365, "0")) {
        if (d_4512_8f28[8][team] == -1) {
            strncpy(buf, d_536d_7250, 13);
            buf[13] = 0;
            strcpy(d_536d_568b, f_2162_104e(buf));
            strncpy(buf, d_536d_725d, 12);
            buf[12] = 0;
            strcpy(d_536d_73b5, f_2162_104e(buf));
            sprintf(lines[19], " %d", d_536d_7269 + 1894);
        } else {
            strcpy(d_536d_568b, f_1a70_46c1(d_4512_8f28[9][team]));
            sprintf(d_536d_73b5, "%.12s", f_1a70_3404(d_4512_8f28[8][team]));
            sprintf(lines[19], " %s", d_536d_730b);
        }
        sprintf(lines[18], " %s -  %s", d_536d_568b, d_536d_7365);
    }

    for (p = pos, d_69da_dcc6 = 0; d_69da_dcc6 <= 19; d_69da_dcc6++, p++)
        f_1a70_3554(p->x, p->y, p->bg, p->fg, p->w, lines[d_69da_dcc6]);
    f_1a70_5e46();
    f_1a70_4ede(2, 1.25, 22.5, 1, 4, 0x12d, "                 DONE");
    do
        d_69da_d992 = f_1a70_53de(d_69da_d9dc);
    while (d_69da_d992 <= 0);
}

/* jump optimisation is off from here (or earlier: 4549-4a17 match either way, 2815-3c56
 * need it): f_9c01_64e8 pops after every call, which -O1 merges */
#pragma option -O-

/* a club's history: its league and cup record over the last ten seasons */
void f_9c01_59a6(int team)
{
    FILE *fp;
    char buf[12][80];

    f_2162_19f6(2);
    fp = fopen(d_536d_a4c5, "rb+");
    fseek(fp, (long)team * 279, 0);
    fread(d_536d_7153, 1, 279, fp);
    fclose(fp);
    f_1a70_5e32();
    f_1a70_000a(1.25, team, "History");
    f_1a70_3554(1.125, 4.0, 0, 1, 0x130, "LEAGUE, FA CUP AND LEAGUE CUP");
    f_1a70_3554(1.125, 5.25, 1, 12, 0x22, " YEAR");
    f_1a70_3554(5.625, 5.25, 1, 12, 0x1c, " DIV");
    f_1a70_3554(9.375, 5.25, 1, 12, 0x12, "POS");
    f_1a70_3554(11.875, 5.25, 1, 12, 0x12, " W");
    f_1a70_3554(14.375, 5.25, 1, 12, 0x12, " D");
    f_1a70_3554(16.875, 5.25, 1, 12, 0x12, " L");
    f_1a70_3554(19.375, 5.25, 1, 12, 0x12, " F");
    f_1a70_3554(21.875, 5.25, 1, 12, 0x12, " A");
    f_1a70_3554(24.375, 5.25, 1, 12, 0x12, "PTS");
    f_1a70_3554(26.875, 5.25, 1, 12, 0x30, " FA CUP");
    f_1a70_3554(33.125, 5.25, 1, 12, 0x30, " LG CUP");
    f_1a70_3554(1.125, 16.75, 0, 1, 0x130, "EUROPEAN AND OTHER CUPS");
    for (d_69da_dcc8 = 0; d_69da_dcc8 <= 1; d_69da_dcc8++) {
        f_1a70_3554(d_69da_dcc8 * 19.125 + 1.125, 18.0, 1, 12, 0x22, " YEAR");
        f_1a70_3554(d_69da_dcc8 * 19.125 + 5.625, 18.0, 1, 12, 0x73, " ACHIEVEMENT");
    }
    for (d_69da_dcc4 = 0; d_69da_dcc4 <= 11; d_69da_dcc4++)
        strcpy(buf[d_69da_dcc4], "");
    for (team = 1; team <= 10; team++) {
        memcpy(d_536d_72bb, d_536d_7147[team], 12);
        d_536d_72bb[12] = 0;
        d_69da_ded1 = team + 5.5;
        if (team < 6) {
            d_69da_ded5 = 1.125;
            d_69da_dcca = team + 18;
        } else {
            d_69da_ded5 = 20.25;
            d_69da_dcca = team + 13;
        }
        d_69da_dccc = d_536d_72bb[0] + 1894;
        if (d_69da_dccc > 1894 && d_69da_d99a + 1994 > d_69da_dccc) {
            sprintf(buf[0], " %d", d_69da_dccc);
            d_69da_d9f6 = (unsigned char)d_536d_72bb[1] - 32;
            if (d_69da_d9f6 < 80) {
                sprintf(buf[1], " %s", f_1a70_4983(d_69da_d9f6 / 20 + 1, 3));
                sprintf(buf[2], "%3d", d_69da_d9f6 % 20 + 1);
                for (d_69da_dcce = 3; d_69da_dcce <= 8; d_69da_dcce++)
                    sprintf(buf[d_69da_dcce], "%3d", (unsigned char)d_536d_72bb[d_69da_dcce - 1] - 32);
            } else
                strcpy(buf[1], " NLG");
            d_69da_dcd0 = (unsigned char)d_536d_72bb[8] - 32;
            if (d_69da_dcd0 > 0)
                sprintf(buf[9], " %s", f_9c01_6630(d_69da_dcd0));
            d_69da_dcd2 = (unsigned char)d_536d_72bb[9] - 32;
            if (d_69da_dcd2 > 0)
                sprintf(buf[10], " %s", f_9c01_6728(d_69da_dcd2));
            d_69da_dcd4 = (unsigned char)d_536d_72bb[11] - 32;
            if (d_69da_dcd4 > 0) {
                d_69da_dcd6 = (unsigned char)d_536d_72bb[10] - 32;
                sprintf(buf[11], " %s", f_9c01_6806(d_69da_dcd4, d_69da_dcd6));
            }
        }
        f_1a70_3554(1.125, d_69da_ded1, 1, 4, 0x22, buf[0]);
        f_1a70_3554(d_69da_ded5, d_69da_dcca, 1, 4, 0x22, buf[0]);
        strcpy(buf[0], "");
        f_1a70_3554(5.625, d_69da_ded1, 6, 3, 0x1c, buf[1]);
        strcpy(buf[1], "");
        for (d_69da_dcce = 2; d_69da_dcce <= 8; d_69da_dcce++) {
            f_1a70_3554((d_69da_dcce - 2) * 2.5 + 9.375, d_69da_ded1, 1, team & 1 ? 8 : 14, 0x12, buf[d_69da_dcce]);
            strcpy(buf[d_69da_dcce], "");
        }
        f_1a70_3554(26.875, d_69da_ded1, 1, team & 1 ? 2 : 9, 0x30, buf[9]);
        strcpy(buf[9], "");
        f_1a70_3554(33.125, d_69da_ded1, 1, team & 1 ? 2 : 9, 0x30, buf[10]);
        strcpy(buf[10], "");
        f_1a70_3554(d_69da_ded5 + 4.5, d_69da_dcca, 1, team & 1 ? 8 : 14, 0x73, buf[11]);
        strcpy(buf[11], "");
    }
    f_1a70_5e46();
    f_1a70_5688(0);
}

/* records a cup's winner and runner-up for this season, shifting the table up when full */
void f_9c01_606c(int cup, int winner, int runner)
{
    if (d_69da_d99a <= 16)
        d_69da_da66 = d_69da_d99a - 1;
    else {
        for (d_69da_d9ca = 0; d_69da_d9ca <= 14; d_69da_d9ca++)
            for (d_69da_d9a0 = 0; d_69da_d9a0 <= 2; d_69da_d9a0++)
                d_536d_493d[d_69da_d9a0][d_69da_d9ca][cup] = d_536d_493d[d_69da_d9a0][d_69da_d9ca + 1][cup];
        d_69da_da66 = 15;
    }
    d_536d_493d[0][d_69da_da66][cup] = d_69da_d99a;
    d_536d_493d[1][d_69da_da66][cup] = winner;
    d_536d_493d[2][d_69da_da66][cup] = runner;
}

/* the past winners screen */
void f_9c01_6142(void)
{
    int i;
    char buf[160];

    f_1a70_5e32();
    f_1a70_4a41("Past Winners");
    f_1a70_3554(1.125, 5.25, 0, 6, 0, " Year ");
    f_1a70_3554(5.875, 5.25, 0, 6, 0x5c, " Winners");
    f_1a70_3554(17.625, 5.25, 0, 6, 0x5c, " Runners up");
    f_1a70_5e46();
    for (d_69da_d9ca = 0; d_69da_d9ca <= 6; d_69da_d9ca++)
        f_9c01_64e8(d_69da_d9ca, 0);
    f_1a70_4ede(2, 1.25, 22.5, 1, 4, 0x12d, "                 Done");
    f_1a70_5e32();
    i = 0;
    do {
        f_9c01_64e8(i, -1);
        sprintf(buf, " Past %s", d_69da_45de[i]);
        if (i > 0)
            strcat(buf, " Winners");
        f_1a70_3554(1.125, 4.0, 0, 1, 0x130, buf);
        for (d_69da_d9ca = 0; d_69da_d9ca <= 15; d_69da_d9ca++) {
            d_69da_d9ea = d_69da_d9ca & 1 ? 15 : 3;
            if (d_536d_493d[0][d_69da_d9ca][i] > 0) {
                sprintf(buf, " %d", d_536d_493d[0][d_69da_d9ca][i] + 1993);
                f_1a70_3554(1.125, d_69da_d9ca + 6.25, 1, 4, 0x24, buf);
                sprintf(buf, " %s", f_1a70_3404(d_536d_493d[1][d_69da_d9ca][i]));
                f_1a70_3554(5.875, d_69da_d9ca + 6.25, 1, d_69da_d9ea, 0x5c, buf);
                sprintf(buf, " %s", f_1a70_3404(d_536d_493d[2][d_69da_d9ca][i]));
                f_1a70_3554(17.625, d_69da_d9ca + 6.25, 1, d_69da_d9ea, 0x5c, buf);
            } else {
                f_1a70_3554(1.125, d_69da_d9ca + 6.25, 1, 4, 0x24, "");
                f_1a70_3554(5.875, d_69da_d9ca + 6.25, 1, d_69da_d9ea, 0x5c, "");
                f_1a70_3554(17.625, d_69da_d9ca + 6.25, 1, d_69da_d9ea, 0x5c, "");
            }
        }
        f_1a70_5e46();
        do {
            d_69da_d992 = f_1a70_53de(-1);
            if (d_69da_d992 == 0 && f_2162_0c1f() >= 0xec && f_2162_0c1f() <= 0x138
                && f_2162_0c13() >= 0x24 && f_2162_0c13() <= 0xa7)
                d_69da_d992 = (f_2162_0c13() - 36) / 19 + 2;
        } while (d_69da_d992 <= 0 || i + 2 == d_69da_d992 || d_69da_d992 > 9);
        if (d_69da_d992 > 1) {
            f_9c01_64e8(i, 0);
            i = d_69da_d992 - 2;
            f_2162_07f7(8, 0x2c, 0xe8, 0xaa);
        }
    } while (d_69da_d992 != 1);
}

/* one competition's button of the past winners screen, highlighted when c */
void f_9c01_64e8(int n, char c)
{
    char buf[160];
    int len;

    f_2162_0897(c ? 25 : 18);
    f_2162_08b5(236, n * 19 + 36, 312, n * 19 + 53);
    f_2162_08a6(25);
    f_2162_090f(236, n * 19 + 36, 312, n * 19 + 53);
    len = f_2162_0b6f(d_69da_45de[n], " ");
    strcpy(buf, d_69da_45de[n]);
    buf[len - 1] = 0;
    f_1a70_344b(275 - strlen(buf) * 3 + 8, n * 19 + 44, 1, buf);
    strcpy(buf, f_2162_0fc1(d_69da_45de[n], len + 1, 100));
    f_1a70_344b(275 - strlen(buf) * 3 + 8, n * 19 + 51, 1, buf);
}

/* the name of a cup round by its week */
char far *f_9c01_6630(int round)
{
    char far *s;

    s = f_2162_0f38();
    switch (round) {
    case 38: case 39: strcpy(s, "  1ST"); break;
    case 44: case 45: strcpy(s, "  2ND"); break;
    case 52: case 53: strcpy(s, "  3RD"); break;
    case 58: case 59: strcpy(s, "  4TH"); break;
    case 64: case 65: strcpy(s, "  5TH"); break;
    case 70: case 71: strcpy(s, " Q FIN"); break;
    case 78: case 79: strcpy(s, " SEMIS"); break;
    case 92: case 93: strcpy(s, " FINAL"); break;
    case 100: strcpy(s, "  WON"); break;
    }
    strcpy(d_536d_7405, f_2162_104e(s));
    if (round < 70)
        strcat(d_536d_7405, " ROUND");
    return s;
}

/* the name of a cup round by its week (CM1's unmapped_f_9100_7482) */
char far *f_9c01_6728(int round)
{
    char far *s;

    s = f_2162_0f38();
    switch (round) {
    case 15: case 19: strcpy(s, "  1ST"); break;
    case 23: case 27: strcpy(s, "  2ND"); break;
    case 31: strcpy(s, "  3RD"); break;
    case 43: strcpy(s, "  4TH"); break;
    case 55: strcpy(s, " Q/FIN"); break;
    case 63: case 67: strcpy(s, " SEMIS"); break;
    case 82: case 83: strcpy(s, " FINAL"); break;
    case 100: strcpy(s, "  WON"); break;
    }
    strcpy(d_536d_7405, f_2162_104e(s));
    if (round < 55)
        strcat(d_536d_7405, " ROUND");
    return s;
}

/* a European / Anglo-Italian cup's round name, "CUP ROUND" */
char far *f_9c01_6806(int round, int cup)
{
    char far *s;

    s = f_2162_0f38();
    if (cup == 3)
        strcpy(d_536d_7455, "A/I CUP");
    else if (cup == 4)
        strcpy(d_536d_7455, "UEFA CUP");
    else if (cup == 5)
        strcpy(d_536d_7455, "C/W CUP");
    else if (cup == 6)
        strcpy(d_536d_7455, "EURO CUP");
    switch (round) {
    case 21: strcpy(d_536d_74a5, "PRELIMS"); break;
    case 29: case 37:
        if (cup == 3)
            strcpy(d_536d_74a5, "QUALS");
        else
            strcpy(d_536d_74a5, "1ST RND");
        break;
    case 47:
        if (cup == 3)
            strcpy(d_536d_74a5, "INT");
        else
            strcpy(d_536d_74a5, "2ND RND");
        break;
    case 57: strcpy(d_536d_74a5, "GROUPS"); break;
    case 69:
        if (cup == 3)
            strcpy(d_536d_74a5, "SEMIS");
        else
            strcpy(d_536d_74a5, "3RD RND");
        break;
    case 77: strcpy(d_536d_74a5, "SEMIS"); break;
    case 86: case 89: case 91: case 97: strcpy(d_536d_74a5, "FINAL"); break;
    case 100: strcpy(d_536d_74a5, "WINNERS"); break;
    }
    strcpy(d_536d_7405, d_536d_74a5);
    d_69da_d9ca = f_2162_0b1b(d_536d_74a5, "RND");
    if (d_69da_d9ca > 0)
        strcpy(&d_536d_7405[d_69da_d9ca - 1], "ROUND");
    sprintf(s, "%s %s", d_536d_7455, d_536d_74a5);
    return s;
}
