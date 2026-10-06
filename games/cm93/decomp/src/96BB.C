/* @at 96bb:0000 */
/* @data 60ae:472a */
/* @module */

/* Overlay 7: the end of CM1's overlay 6 and most of its overlay 7, in one module: player
 * values and wages, transfer news, retirements, the staff screen and the board's messages
 * (CM1's 88C9.C from f_88c9_5ea7), then the seasons and the files: a new game and its
 * clubs, the savegame, records and history files, players' ratings and moods, team lists
 * and money, the end of a season, the club records, club history and past winners
 * screens, and the cups' round names (CM1's 9100.C). */
#include <string.h>
#include <stdio.h>
#include <mem.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
int f_96bb_0000(int team, int x);
void f_96bb_01ac(int team, int x);
int f_96bb_09e7(int x);
void f_96bb_0a22(int team);
void f_96bb_0ec9(float x, float y, int c, int c2, int type, int team);
char far *f_96bb_14f5(int manager, int type);
void f_96bb_1617(void);
void f_96bb_18d8(int club);
void f_96bb_1968(int team, char far *s);
char far *f_96bb_19a9(int n);
void f_96bb_1a0c(void);
void f_96bb_1cb4(void);
void f_96bb_1e3a(void);
void f_96bb_1ff6(void);
void f_96bb_23c4(void);
void f_96bb_2ac6(int team);
void f_96bb_30ac(void);
void f_96bb_3372(void);
void f_96bb_37d1(int player, int age, int games, int rating);
void f_96bb_3937(void);
void f_96bb_3f40(void);
void f_96bb_48fa(int team, int other, int a, int b);
void f_96bb_4999(int team, int other, int a, int b);
void f_96bb_4a38(int team, int other, long v);
void f_96bb_4ac3(int team, int other, long v);
void f_96bb_4b70(int team, int a, int player, int b);
void f_96bb_4bc4(int team, int row, int v);
void f_96bb_4c07(int player, int from, int to, long fee);
void f_96bb_4c87(int player, int from, int to, long fee);
void f_96bb_4d07(int team, int player, int a, int b, int c);
void f_96bb_4db6(int team);
void f_96bb_5f8e(int team);
void f_96bb_6852(int cup, int winner, int runner);
void f_96bb_6929(void);
void f_96bb_6d89(int n, char c);
char far *f_96bb_6ee2(int round);
char far *f_96bb_6fde(int round);
char far *f_96bb_70c0(int round, int cup);

struct staffbox { /* 6-byte entries at 60ae:4746 */ unsigned char x1, y1; int x2; unsigned char y2, colour; };
struct staffpanel { /* 10-byte entries at 60ae:4764 */ float x, y; unsigned char a, b; };
struct recpos { float x, y; int bg, fg, w; };
void f_14bc_000b(float x, int team, char far *title);
void f_14bc_0ac0(int n, char far *s);
void f_14bc_0b30(char far *s);
void f_14bc_0b83(char far *s);
char f_14bc_2cc0(int x);
void f_14bc_2f90(int n, char far *title, char far *items);
void f_14bc_3334(int last);
void f_14bc_3672(float x, float y, int bg, int fg, int w, char far *s);
void f_14bc_3c75(float x, float y, int colour, char far *s);
void f_14bc_4587(float x, float y, int team);
char far *f_14bc_490d(int manager, char full);
void f_14bc_4bd3(char far *title);
void f_14bc_50f8(int a, float x, float y, int c, int d, int e, char far *s);
void f_14bc_548f(int a, char b);
int f_14bc_5635(int a);
void f_14bc_60ca(void);
void f_14bc_60da(void);
void f_1bd3_08cb(int c);
void f_1bd3_08e1(int x1, int y1, int x2, int y2);
int f_1bd3_0c06(void);
int f_1bd3_0c0e(void);
void far *f_1bd3_1617(int handle, int page);
void f_9107_1d53(int a, int b, int bg, int fg, char far *s1, char far *s2);
void f_9107_291b(void);
void f_9107_4d4c(int club, int n);
char f_9107_531a(int p, int team, int x);
extern char far d_2289_366a[];
extern char far d_2289_36ba[];
extern char far d_2289_4f2a[];
extern char far d_2289_5178[];
extern char far d_2289_ada0[][4][23];
extern unsigned char far d_2289_b9c6[];
extern unsigned char far d_323f_1c08[];
extern unsigned char far d_323f_1e92[];
extern unsigned char far d_323f_23a6[];
extern int far d_323f_47b4[][80];
extern int far d_471b_ae66[];
extern char far * far d_54d9_0593[];
extern char near *d_60ae_b572[];
extern char d_60ae_d91d;
extern char d_60ae_d922;
extern char d_60ae_d92b;
extern char d_60ae_d93f;
extern char d_60ae_d960;
extern char d_60ae_d975;
extern unsigned char d_60ae_d986;
extern int d_60ae_daca;
extern int d_60ae_dacc;
extern int d_60ae_dad4;
extern int d_60ae_dafe;
extern int d_60ae_db00;
extern int d_60ae_db02;
extern int d_60ae_db0a;
extern int d_60ae_db0e;
extern int d_60ae_dc0e;
extern int d_60ae_dc7e;
extern int d_60ae_dc8e;
extern int d_60ae_dd1e;
extern int d_60ae_dd3c;
extern int d_60ae_dd40;
extern int d_60ae_dd44;
extern int d_60ae_dd48;
extern int d_60ae_dd50;
extern int d_60ae_dd56;
extern int d_60ae_dda0;
extern int far *d_60ae_faf6;
extern int d_60ae_fdee;
int f_14bc_468c(int team);
char far *f_1bd3_0efb(void);
int f_1bd3_1307(int a, int b);
int f_1bd3_1369(int a, int b);
void f_8683_1661(int team, int delta);
extern char far d_2289_357a[];
extern char far d_2289_35ca[];
extern unsigned char far d_323f_28ba[][650];
extern int far d_323f_4494[][80];
extern unsigned char far d_323f_4d5c[];
extern unsigned char far d_323f_4e00[];
extern int far d_54d9_07d8[][5];
extern int far d_54d9_1200[][2][98];
extern long d_60ae_d7e3;
extern long d_60ae_d7e7;
extern char d_60ae_d91b;
extern char d_60ae_d91c;
extern int d_60ae_dac4;
extern int d_60ae_dac6;
extern int d_60ae_dac8;
extern int d_60ae_dbfe;
extern int d_60ae_dd5a;
extern int d_60ae_dd78;
void f_14bc_5bfe(int team, char far *title, char far *text);
long f_1bd3_0d69(long n);
int f_1bd3_0d9b(char far *path);
void f_1bd3_13a3(void far *a, void far *b, int n);
void f_1bd3_1a23();
void f_9e77_48d3(void);
long f_a3de_21b9(int team);
char f_b628_01d6(char team);
void f_b628_674e(char a);
void f_b628_68ca(char a, int i, int n);
extern char far d_2289_0028[];
extern char far d_2289_0050[];
extern char far d_2289_0078[];
extern unsigned char far d_2289_d218[][140];
extern unsigned char far d_2289_de84[];
extern long far d_2289_eb68[][2];
extern long far d_323f_3f94[][80];
extern int far d_323f_4674[];
extern unsigned char far d_323f_4c14[][82];
extern unsigned char far d_54d9_0904[][460];
extern unsigned char far d_54d9_0e68[];
extern char d_60ae_d8f6;
extern char d_60ae_d915;
extern int d_60ae_dabe;
extern int d_60ae_dac0;
extern int d_60ae_dce8;
extern int d_60ae_dd0e;
extern int d_60ae_dd42;
extern int d_60ae_dd5c;
extern int d_60ae_dd60;
extern int d_60ae_dd92;
extern char far *d_60ae_ddb2;
extern long far *d_60ae_faee;
extern int d_60ae_fdd4;
extern int d_60ae_fdea;
void f_8aa1_1865(int p, char all);
void f_9107_3360(int staff, int team, char c);
void f_9107_3ff7(int club, int a);
void f_9e77_4b29(int a, int b);
void f_9e77_4d7d(int a, int b);
void f_a3de_08c3(int a, int b);
void f_a3de_21e1(void);
void f_ad38_0557(int player, int team, char c);
void f_ad38_2f53(int player);
void f_ad38_3276(char team, char n);
void f_b628_61ea(void);
void f_b628_65ab(void);
extern unsigned char far d_2289_fb0c[];
extern unsigned char far d_2289_fb10[][20];
extern int far d_323f_0000[][80];
extern unsigned char far d_323f_211c[];
extern unsigned char far d_323f_2b44[];
extern unsigned char far d_323f_2dce[];
extern unsigned char far d_323f_3058[];
extern unsigned char far d_3c35_0000[][1860];
extern unsigned char far d_471b_0000[][1860];
extern unsigned char far d_54d9_4f40[][140];
extern char near *d_60ae_b616[];
extern char near *d_60ae_b6ba[];
extern int d_60ae_d996;
extern int d_60ae_da86;
extern int d_60ae_da88;
extern int d_60ae_da8a;
extern int d_60ae_dab0;
extern int d_60ae_dad2;
extern int d_60ae_daea;
extern int d_60ae_db3c;
extern int d_60ae_db7e;
extern int d_60ae_db80;
extern int d_60ae_db86;
extern int d_60ae_dbda;
extern int d_60ae_dd52;
extern int d_60ae_dd54;
extern int d_60ae_dd84;
extern int d_60ae_dd98;
extern int d_60ae_dd9a;
extern int d_60ae_dda2;
extern int d_60ae_dda4;
extern char (far *d_60ae_ddb6)[101];
extern unsigned char (far *d_60ae_fad2)[1860];
extern int (far *d_60ae_fae6)[1860];
extern int d_60ae_fddc;
extern int d_60ae_fdd6;
extern int d_60ae_fde6;
struct flags_a { unsigned char b0; unsigned f8 : 1; unsigned f9 : 1; unsigned : 6; unsigned : 2; unsigned f18 : 1; unsigned f19 : 1; unsigned : 4; unsigned : 0; unsigned f24 : 1; unsigned : 3; unsigned f28 : 1; unsigned : 1; unsigned f30 : 1; unsigned : 1; };
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
union flags { struct flags_a a; struct flags_w w; };
extern union flags d_60ae_ddbe[];
long f_14bc_020c(int p, int n);
long f_14bc_0d32(long v, char c);
char far *f_14bc_4703(int player);
char far *f_14bc_48b4(int player);
float f_1bd3_1088(void);
long f_1bd3_131c(long a, long b);
extern long far d_323f_4354[];
extern unsigned char far d_323f_4c66[];
extern unsigned char far d_323f_4e52[];
extern unsigned char far d_323f_4f48[][82];
extern unsigned char far d_323f_5f9e[];
extern unsigned char far d_323f_6138[];
extern long d_60ae_d7d7;
extern long d_60ae_d7db;
extern long d_60ae_d7df;
extern float d_60ae_d8cf;
extern char d_60ae_d911;
extern char d_60ae_d912;
extern char d_60ae_d913;
extern int d_60ae_da80;
extern int d_60ae_da82;
extern int d_60ae_da84;
extern int d_60ae_dae4;
extern long far *d_60ae_faf2;
extern int d_60ae_fdec;
char far *f_14bc_3523(int x);
char far *f_14bc_483d(int player);
int f_a3de_0000(int x);
extern char far d_2289_320a[];
extern char far d_2289_325a[];
extern char far d_2289_329e[][12];
extern char far d_2289_32aa[];
extern char far d_2289_32b6[];
extern char far d_2289_3322[];
extern char far d_2289_332e;
extern char far d_2289_332f[];
extern char far d_2289_333b;
extern char far d_2289_333c[];
extern char far d_2289_3348;
extern char far d_2289_3349[];
extern char far d_2289_3355;
extern char far d_2289_3356[];
extern char far d_2289_3363;
extern char far d_2289_3364[];
extern char far d_2289_3371;
extern char far d_2289_3372[];
extern char far d_2289_337f[];
extern char far d_2289_338b;
extern char far d_2289_338c[];
extern char far d_2289_3399[];
extern char far d_2289_33a5;
extern char far d_2289_33a6;
extern char far d_2289_33a7[];
extern char far d_2289_33b4[];
extern char far d_2289_33c0;
extern float far d_2289_c020[];
extern int far d_2289_c46c[][140];
extern unsigned char far d_2289_cf5c[][140];
extern unsigned char far d_323f_4fec[];
extern unsigned char far d_323f_503e[];
extern unsigned char far d_323f_5090[];
extern unsigned char far d_323f_50e2[];
extern int far d_471b_b29c[][80];
extern float far d_471b_b668[];
extern int far d_471b_d828[];
extern char far * far d_54d9_0550[];
extern int d_60ae_da72;
extern int d_60ae_da74;
extern int d_60ae_da76;
extern int d_60ae_da78;
extern int d_60ae_da90;
extern long (far *d_60ae_fad6)[140];
extern int d_60ae_fdde;
char far *f_1bd3_100b(char far *s);
char far *f_14bc_4a83(int n);
char far *f_14bc_4b12(int division, char full);
extern char far d_2289_3110[];
extern char far d_2289_3160[];
extern char far d_2289_31b0[];
extern char far d_2289_3200[];
extern char far d_2289_3732[];
extern char far d_2289_3964[];
extern char far d_2289_4e3a[];
extern char far d_2289_4eda[];
extern unsigned char far d_2289_cfe8[];
extern unsigned char far d_2289_d074[];
extern unsigned char far d_2289_d100[];
extern unsigned char far d_2289_d18c[];
extern unsigned char far d_2289_d5ec[];
extern int far d_471b_b33c[];
extern char far * far d_54d9_0000[];
extern int d_60ae_da6c;
extern int d_60ae_da6e;
extern int d_60ae_da70;
void f_14bc_58db(int a);
extern float d_60ae_d85b;
extern float d_60ae_d85f;
extern int d_60ae_da5c;
extern int d_60ae_da5e;
extern int d_60ae_da60;
extern int d_60ae_da62;
extern int d_60ae_da64;
extern int d_60ae_da66;
extern int d_60ae_da68;
extern int d_60ae_da6a;
void f_14bc_356a(int x, int y, int colour, char far *s);
void f_1bd3_0821(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_1bd3_08d6(int c);
void f_1bd3_0928(int x1, int y1, int x2, int y2);
unsigned f_1bd3_0b1b(char far *s, char far *set);
unsigned f_1bd3_0b69(char far *s, char far *set);
char far *f_1bd3_0f83(char far *s, unsigned i, unsigned n);
extern char far d_2289_3020[];
extern char far d_2289_3070[];
extern char far d_2289_30c0[];
extern int far d_2289_58d8[3][16][8];
extern int d_60ae_dccc;
extern int d_60ae_dd26;
extern int d_60ae_dd68;

/* the competitions' names */
static char far *d_60ae_472a[] = {
    "League Champions", "FA Cup", "Coca-Cola Cup", "Anglo-Ital Cup", "UEFA Cup",
    "Cup Winners Cup", "European Cup"
};

int f_96bb_0000(int team, int x)
{
    char buf[320];

    memset(d_2289_b9c6, 0, 50);
    d_60ae_dad4 = -1;
    strcpy(d_2289_36ba, f_96bb_19a9(x));
    do {
        sprintf(buf, "Appoint %s", d_2289_36ba);
        f_14bc_4bd3(buf);
        f_14bc_4587(1.0, 4.0, team);
        f_14bc_2f90(7, "", "Own Search|Board Decision|");
        f_14bc_3334(1);
        d_60ae_db0e = d_60ae_dda0;
        if (d_60ae_db0e == 0) {
            memset(d_2289_b9c6, 0, 50);
            d_60ae_faf6 = f_1bd3_1617(d_60ae_fdee, 1);
            memset(d_60ae_faf6, -1, 0xe88);
            f_9107_1d53(11, 14, 1, 2, "Age", "35-40|40-50|50-60|60+|");
            if (d_60ae_d975 == 0) {
                f_9107_1d53(16, 20, 1, 2, "Division", "FA Premier|First|Second|Third|Unemployed|");
                if (d_60ae_d975 == 0) {
                    f_9107_1d53(22, 27, 1, 2, "Reputation", "Unknown|Poor|Fair|Good|Very Good|Superb|");
                    if (d_60ae_d975 == 0)
                        f_96bb_01ac(team, x);
                }
            }
        }
    } while ((d_60ae_db0e != 0 || d_60ae_dad4 == -1) && d_60ae_db0e != 1);
    return d_60ae_dad4;
}

void f_96bb_01ac(int team, int x)
{
    int n;
    int j;
    char buf[320];

    n = 0;
    f_14bc_4bd3("");
    f_14bc_3c75(-1.0, 12.5, 1, "Searching");
    for (j = 1; j <= 2; j++)
        for (d_60ae_dd44 = 0; d_60ae_dd44 <= 0x285; d_60ae_dd44++) {
            d_60ae_d960 = -1;
            if (d_323f_1c08[d_60ae_dd44] != team && j == 1)
                d_60ae_d960 = 0;
            if (d_60ae_d960 != 0 && d_323f_1c08[d_60ae_dd44] == team && j == 2)
                d_60ae_d960 = 0;
            if (d_60ae_d960 != 0 && d_323f_47b4[x][team] == d_60ae_dd44)
                d_60ae_d960 = 0;
            if (d_323f_1c08[d_60ae_dd44] != d_60ae_dc0e) {
                if (d_60ae_d960 != 0) {
                    d_60ae_d92b = 0;
                    if (d_2289_b9c6[15] != 0)
                        d_60ae_d92b = -1;
                    else {
                        d_60ae_db02 = d_323f_1e92[d_60ae_dd44];
                        if (d_60ae_db02 <= 40)
                            d_60ae_d92b = d_2289_b9c6[11];
                        else if (d_60ae_db02 <= 50)
                            d_60ae_d92b = d_2289_b9c6[12];
                        else if (d_60ae_db02 <= 60)
                            d_60ae_d92b = d_2289_b9c6[13];
                        else
                            d_60ae_d92b = d_2289_b9c6[14];
                    }
                    if (d_60ae_d92b == 0)
                        d_60ae_d960 = 0;
                }
                if (d_60ae_d960 != 0 && d_2289_b9c6[21] == 0)
                    if (d_323f_1c08[d_60ae_dd44] == 0xff && d_2289_b9c6[20] == 0
                        || d_323f_1c08[d_60ae_dd44] < 0xff && d_2289_b9c6[16 + d_323f_1c08[d_60ae_dd44] / 20] == 0)
                        d_60ae_d960 = 0;
                if (d_60ae_d960 != 0 && d_2289_b9c6[28] == 0) {
                    strcpy(d_2289_366a, f_96bb_14f5(d_60ae_dd44, x));
                    if (d_2289_b9c6[22 + d_60ae_dd40] == 0)
                        d_60ae_d960 = 0;
                }
            }
            if (d_60ae_d960 != 0) {
                n++;
                d_60ae_faf6 = f_1bd3_1617(d_60ae_fdee, 1);
                d_60ae_faf6[n - 1] = d_60ae_dd44;
            }
        }
    if (n > 0) {
        d_60ae_db00 = 1;
        do {
            sprintf(buf, "New %s %s", (char far *)d_60ae_b572[team], d_2289_36ba);
            f_14bc_60ca();
            f_14bc_4bd3(buf);
            f_14bc_3672(1.125, 4.5, 0, 1, 72, " NAME");
            f_14bc_3672(10.375, 4.5, 0, 1, 78, " CLUB");
            f_14bc_3672(20.375, 4.5, 0, 1, 22, " YR");
            f_14bc_3672(23.375, 4.5, 0, 1, 72, " CHARACTER");
            f_14bc_3672(32.625, 4.5, 0, 1, 52, " REP");
            f_14bc_60da();
            f_9107_291b();
            d_60ae_dc8e = 0;
            for (d_60ae_dd1e = d_60ae_db00; d_60ae_db00 + 14 >= d_60ae_dd1e; d_60ae_dd1e++) {
                d_60ae_faf6 = f_1bd3_1617(d_60ae_fdee, 0);
                d_60ae_dd44 = d_60ae_faf6[d_60ae_dd1e - 1];
                if (d_60ae_dd44 > -1) {
                    d_471b_ae66[d_60ae_dc8e] = d_60ae_dd44;
                    d_60ae_dc8e++;
                } else
                    d_60ae_dd1e = d_60ae_db00 + 14;
            }
            f_14bc_60ca();
            for (d_60ae_dd1e = 1; d_60ae_dd1e <= d_60ae_dc8e; d_60ae_dd1e++) {
                if (d_60ae_dd1e & 1)
                    d_60ae_dd48 = 2;
                else
                    d_60ae_dd48 = 9;
                d_60ae_dd44 = d_471b_ae66[d_60ae_dd1e - 1];
                sprintf(buf, " %.11s", f_14bc_490d(d_60ae_dd44, -1));
                f_14bc_50f8(0, 1.125, d_60ae_dd1e + 5, 1, d_60ae_dd48, 72, buf);
                if (d_323f_1c08[d_60ae_dd44] < 0xff)
                    strcpy(d_2289_5178, d_60ae_b572[d_323f_1c08[d_60ae_dd44]]);
                else
                    strcpy(d_2289_5178, "Unemployed");
                d_60ae_dd48 = d_323f_1c08[d_60ae_dd44] == team ? 3 : 12;
                sprintf(buf, " %.12s", d_2289_5178);
                f_14bc_3672(10.375, d_60ae_dd1e + 5, 1, d_60ae_dd48, 78, buf);
                sprintf(buf, " %d", d_323f_1e92[d_60ae_dd44]);
                f_14bc_3672(20.375, d_60ae_dd1e + 5, 1, 4, 22, buf);
                sprintf(buf, " %s", d_54d9_0593[d_323f_23a6[d_60ae_dd44]]);
                f_14bc_3672(23.375, d_60ae_dd1e + 5, 1, 4, 72, buf);
                sprintf(buf, " %s", f_96bb_14f5(d_60ae_dd44, x));
                f_14bc_3672(32.625, d_60ae_dd1e + 5, 6, 3, 52, buf);
            }
            f_14bc_60da();
            do
                d_60ae_db0a = f_14bc_5635(-1);
            while (d_60ae_db0a < 1);
            if (d_60ae_db0a == 1 && d_60ae_d986 < 3)
                d_60ae_db00 -= 15;
            else if (d_60ae_db0a == 3 && d_60ae_d986 == 1 || d_60ae_db0a == 2 && d_60ae_d986 == 3)
                d_60ae_db00 += 15;
            else if (d_60ae_db0a >= d_60ae_dafe) {
                d_60ae_dc7e = d_60ae_db0a - d_60ae_dafe;
                d_60ae_dd44 = d_471b_ae66[d_60ae_dc7e];
                sprintf(buf, "Appoint %s", f_14bc_490d(d_60ae_dd44, 0));
                f_14bc_2f90(0, buf, "Cancel|Appoint Him|");
                if (d_60ae_dda0 == 1) {
                    strcpy(d_2289_4f2a, f_14bc_490d(d_60ae_dd44, -1));
                    if (f_9107_531a(d_60ae_dd44, team, x)) {
                        sprintf(buf, "%s accepts the offer", d_2289_4f2a);
                        f_14bc_0b30(buf);
                        d_60ae_dad4 = d_60ae_dd44;
                    } else {
                        sprintf(buf, "%s refuses the offer", d_2289_4f2a);
                        f_14bc_0b30(buf);
                    }
                }
            }
        } while ((d_60ae_db0a != 2 || d_60ae_d986 >= 3) && (d_60ae_db0a != 1 || d_60ae_d986 <= 2)
                 && d_60ae_dad4 == -1);
    } else
        f_14bc_0b83("Nobody found");
}

int f_96bb_09e7(int x)
{
    switch (x) {
    case 0:
    case 1:
        d_60ae_dd50 = x;
        break;
    case 2:
    case 3:
    case 4:
    case 5:
        d_60ae_dd50 = 2;
        break;
    case 6:
        d_60ae_dd50 = 3;
        break;
    }
    return d_60ae_dd50;
}

/* the staff screen: its boxes, and where each member of staff is drawn */
static struct staffbox d_60ae_4746[] = {
    {8, 24, 156, 74, 4}, {8, 80, 156, 188, 14}, {164, 24, 312, 66, 3},
    {164, 74, 312, 116, 14}, {164, 124, 312, 166, 14}
};
static struct staffpanel d_60ae_4764[] = {
    {1.375, 5, 1, 28}, {20.875, 5, 1, 31}, {1.375, 12, 1, 24}, {1.375, 16.125, 1, 24},
    {1.375, 20.25, 1, 24}, {20.875, 17.5, 1, 24}, {20.875, 11.25, 1, 24}
};

void f_96bb_0a22(int team)
{
    struct staffbox far *p;
    struct staffpanel far *q;
    int x2[5];
    int x1[5];
    int y2[5];
    int y1[5];
    char buf[320];

    do {
        d_60ae_d93f = 0;
        f_14bc_000b(1.25, team, "Staff");
        p = d_60ae_4746;
        for (d_60ae_dacc = 0; d_60ae_dacc <= 4; d_60ae_dacc++, p++) {
            f_1bd3_08cb(16);
            f_1bd3_08e1(p->x1 + 4, p->y1 + 4, p->x2 + 4, p->y2 + 4);
            f_1bd3_08cb(p->colour + 16);
            f_1bd3_08e1(p->x1, p->y1, p->x2, p->y2);
            x1[d_60ae_dacc] = p->x1;
            x2[d_60ae_dacc] = p->x2;
            y1[d_60ae_dacc] = p->y1;
            y2[d_60ae_dacc] = p->y2;
        }
        q = d_60ae_4764;
        for (d_60ae_dd3c = 0; d_60ae_dd3c <= 6; d_60ae_dd3c++, q++)
            f_96bb_0ec9(q->x, q->y, q->a, q->b, d_60ae_dd3c, team);
        f_14bc_50f8(2, 20.75, 22.25, 1, 4, 0x94, "       DONE");
        if (f_14bc_2cc0(team))
            f_14bc_50f8(2, 35.0, 1.125, 1, 3, 0, "SACK");
        d_60ae_d922 = 0;
        do {
            d_60ae_d91d = 0;
            d_60ae_dda0 = f_14bc_5635(d_60ae_dd56);
            if (d_60ae_dda0 == 0 && d_60ae_d922 != 0) {
                d_60ae_daca = -1;
                for (d_60ae_dacc = 0; d_60ae_dacc <= 4; d_60ae_dacc++) {
                    if (f_1bd3_0c0e() >= x1[d_60ae_dacc] && f_1bd3_0c0e() <= x2[d_60ae_dacc]) {
                        if (d_60ae_dacc == 1) {
                            if (f_1bd3_0c06() >= 90 && f_1bd3_0c06() <= 120)
                                d_60ae_daca = 2;
                            else if (f_1bd3_0c06() >= 123 && f_1bd3_0c06() <= 153)
                                d_60ae_daca = 3;
                            else if (f_1bd3_0c06() >= 156 && f_1bd3_0c06() <= 186)
                                d_60ae_daca = 4;
                        } else if (f_1bd3_0c06() >= y1[d_60ae_dacc] && f_1bd3_0c06() <= y2[d_60ae_dacc]) {
                            switch (d_60ae_dacc) {
                            case 2:
                                d_60ae_daca = 1;
                                break;
                            case 3:
                                d_60ae_daca = 6;
                                break;
                            case 4:
                                d_60ae_daca = 5;
                                break;
                            }
                        }
                    }
                }
                if (d_60ae_daca > -1) {
                    strcpy(d_2289_4f2a, f_14bc_490d(d_323f_47b4[d_60ae_daca][team], 0));
                    sprintf(buf, "Sack %s", d_2289_4f2a);
                    f_14bc_4bd3(buf);
                    if (d_60ae_daca >= 2 && d_60ae_daca <= 5)
                        f_14bc_0ac0(5, "Any report will be lost");
                    f_14bc_2f90(d_60ae_daca >= 2 && d_60ae_daca <= 5 ? 8 : 5, "", "*Exit|Sack Him|");
                    f_14bc_3334(1);
                    if (d_60ae_dda0 == 1) {
                        sprintf(buf, "%s leaves club", d_2289_4f2a);
                        f_14bc_0b83(buf);
                        f_9107_4d4c(team, d_60ae_daca);
                        if (d_60ae_daca >= 2 && d_60ae_daca <= 5)
                            d_2289_ada0[d_323f_47b4[0][team]][d_60ae_daca][0] = 0;
                    }
                    d_60ae_d93f = -1;
                } else {
                    d_60ae_d922 = 0;
                    f_14bc_548f(2, 0);
                }
            } else if (d_60ae_dda0 == 1) {
                d_60ae_d91d = -1;
            } else if (d_60ae_dda0 == 2) {
                f_14bc_548f(2, d_60ae_d922 = !d_60ae_d922);
            }
        } while (d_60ae_d91d == 0 && d_60ae_d93f == 0);
    } while (!d_60ae_d91d);
}

void f_96bb_0ec9(float x, float y, int c, int c2, int type, int team)
{
    char buf[320];

    d_60ae_dac8 = d_323f_47b4[type][team];
    strcpy(d_2289_35ca, f_96bb_19a9(type));
    if (type == 2)
        strcat(d_2289_35ca, "s");
    if (type != 3 && type != 4) {
        sprintf(buf, "%*s", strlen(d_2289_35ca) + 12 - strlen(d_2289_35ca) / 2, d_2289_35ca);
        f_14bc_3672(x, y - 1, c / 16, c % 16, 0x90, buf);
    }
    if (d_60ae_dac8 < 0x28a) {
        strcpy(d_2289_4f2a, f_14bc_490d(d_60ae_dac8, 0));
        sprintf(buf, "%*s", strlen(d_2289_4f2a) + 12 - strlen(d_2289_4f2a) / 2, d_2289_4f2a);
        d_60ae_d91c = type == 2 || type == 3 || type == 4;
        f_14bc_3672(x, y, c2 / 16 - (d_60ae_d91c ? 5 : 0), c2 % 16, 0x90, buf);
        f_14bc_3672(x, y + 1, c2 / 16, c2 % 16, 0x47, " Age");
        sprintf(buf, " %d YRS", d_323f_1e92[d_60ae_dac8]);
        f_14bc_3672(x + 9.125, y + 1, c2 / 16, c2 % 16, 0x47, buf);
        f_14bc_3672(x, y + 2, c2 / 16, c2 % 16, 0x47, " Character");
        sprintf(buf, " %s", d_54d9_0593[d_323f_23a6[d_60ae_dac8]]);
        f_14bc_3672(x + 9.125, y + 2, c2 / 16, c2 % 16, 0x47, buf);
        f_14bc_3672(x, y + 3, c2 / 16, c2 % 16, 0x47, type == 0 ? " Reputation" : " Ability");
        sprintf(buf, " %s", f_96bb_14f5(d_60ae_dac8, type));
        f_14bc_3672(x + 9.125, y + 3, c2 / 16, c2 % 16, 0x47, buf);
        if (type == 0) {
            f_14bc_3672(x, y + 4, c2 / 16, c2 % 16, 0x47, " Board");
            sprintf(buf, " %d%%", d_323f_4e00[team]);
            f_14bc_3672(x + 9.125, y + 4, c2 / 16, c2 % 16, 0x47, buf);
        }
    } else {
        f_14bc_3672(x, y, c2 / 16, c2 % 16, 0x90, "");
        f_14bc_3672(x, y + 1, c2 / 16, c2 % 16, 0x90, "      The coach is");
        f_14bc_3672(x, y + 2, c2 / 16, c2 % 16, 0x90, "   temporary manager");
        f_14bc_3672(x, y + 3, c2 / 16, c2 % 16, 0x90, "");
    }
    if (type == 0) {
        f_14bc_3672(x, y + 4, c2 / 16, c2 % 16, 0x47, " Board");
        sprintf(buf, " %d%%", d_323f_4e00[team]);
        f_14bc_3672(x + 9.125, y + 4, c2 / 16, c2 % 16, 0x47, buf);
    }
}

/* The rating word of a manager's (type 0: reputation) or a coach's or scout's ability;
   d_60ae_dd40 gets its rank (0 unknown, 1 poor ... 5 superb). */
char far *f_96bb_14f5(int manager, int type)
{
    char far *s;

    s = f_1bd3_0efb();
    if (d_323f_1e92[manager] > 35) {
        switch (d_323f_28ba[f_96bb_09e7(type)][manager] / 10) {
        case 0: case 1: case 2: case 3: case 4:
            strcpy(s, "Poor");
            d_60ae_dd40 = 1;
            break;
        case 5: case 6: case 7: case 8: case 9: case 10: case 11:
            strcpy(s, "Fair");
            d_60ae_dd40 = 2;
            break;
        case 12: case 13: case 14:
            strcpy(s, "Good");
            d_60ae_dd40 = 3;
            break;
        case 15: case 16:
            strcpy(s, "V Good");
            d_60ae_dd40 = 4;
            break;
        default:
            strcpy(s, "Superb");
            d_60ae_dd40 = 5;
            break;
        }
    } else {
        strcpy(s, "Unknown");
        d_60ae_dd40 = 0;
    }
    return s;
}

void f_96bb_1617(void)
{
    for (d_60ae_dd5a = 0; d_60ae_dd5a <= 79; d_60ae_dd5a++) {
        d_60ae_dd3c = f_14bc_468c(d_60ae_dd5a) % 20;
        d_60ae_dac6 = f_1bd3_1369(f_1bd3_1307(d_323f_4d5c[d_60ae_dd5a] - 13, 0), 4);
        d_60ae_dac4 = (d_323f_4e00[d_60ae_dd5a] * (38 - d_60ae_dd78)
                       + d_54d9_07d8[d_60ae_dd3c][d_60ae_dac6] * d_60ae_dd78) / 38;
        d_60ae_dbfe = (d_323f_4e00[d_60ae_dd5a] * 3 + d_60ae_dac4) / 4 - d_323f_4e00[d_60ae_dd5a];
        if (d_60ae_dbfe < 0 && d_323f_4494[0][d_60ae_dd5a] != 0) {
            d_60ae_d7e7 = d_54d9_1200[d_323f_4494[1][d_60ae_dd5a]][0][d_323f_4494[2][d_60ae_dd5a]];
            d_60ae_d7e3 = d_54d9_1200[d_323f_4494[1][d_60ae_dd5a]][1][d_323f_4494[2][d_60ae_dd5a]];
            d_60ae_d91b = d_60ae_dd5a == d_60ae_d7e7 / 32 && d_60ae_d7e7 % 32 > d_60ae_d7e3 % 32
                       || d_60ae_dd5a == d_60ae_d7e3 / 32 && d_60ae_d7e3 % 32 > d_60ae_d7e7 % 32;
            if (d_60ae_d91b)
                d_60ae_dbfe = 0;
        }
        f_8683_1661(d_60ae_dd5a, d_60ae_dbfe);
        if (f_14bc_2cc0(d_60ae_dd5a) && (d_60ae_dd78 == 10 || d_60ae_dd78 == 20 || d_60ae_dd78 == 30)) {
            if (d_54d9_07d8[d_60ae_dd3c][d_60ae_dac6] < 50)
                f_96bb_1968(d_60ae_dd5a, "Our league position is unacceptable.");
            else if (d_54d9_07d8[d_60ae_dd3c][d_60ae_dac6] == 100)
                f_96bb_1968(d_60ae_dd5a, "An excellent league position.");
        }
    }
}

void f_96bb_18d8(int club)
{
    char buf[320];
    unsigned char v;

    v = d_323f_4e00[club];
    if (v <= 24)
        strcpy(d_2289_357a, "were going to sack you anyway.");
    else if (v <= 34)
        strcpy(d_2289_357a, "are not particularly disappointed.");
    else if (v <= 59)
        strcpy(d_2289_357a, "are a little disappointed.");
    else if (v <= 94)
        strcpy(d_2289_357a, "are very disappointed at your decision.");
    else if (v <= 99)
        strcpy(d_2289_357a, "are astonished at your decision.");
    else
        strcpy(d_2289_357a, "think you are a right bandit.");
    sprintf(buf, "We %s", d_2289_357a);
    f_96bb_1968(club, buf);
}

void f_96bb_1968(int team, char far *s)
{
    char buf[320];

    sprintf(buf, "%s board message", (char far *)d_60ae_b572[team]);
    f_14bc_5bfe(team, buf, s);
}

char far *f_96bb_19a9(int n)
{
    char far *p;

    p = f_1bd3_0efb();
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

void f_96bb_1a0c(void)
{
    for (d_60ae_dd5a = 0; d_60ae_dd5a <= 79; d_60ae_dd5a++) {
        d_323f_4c14[5][d_60ae_dd5a] = f_1bd3_0d69(5) + 5;
        if (f_14bc_2cc0(d_60ae_dd5a)) {
            d_323f_4c14[0][d_60ae_dd5a] = 8;
            d_323f_4c14[6][d_60ae_dd5a] = 50;
        }
        d_323f_4c14[7][d_60ae_dd5a] = 0;
        d_323f_4c14[11][d_60ae_dd5a] = 2;
        d_323f_4c14[68][d_60ae_dd5a] = 255;
        d_323f_4c14[69][d_60ae_dd5a] = 255;
        d_323f_4c14[70][d_60ae_dd5a] = 255;
        d_323f_4674[d_60ae_dd5a] = f_1bd3_0d69(9);
        for (d_60ae_dd92 = (f_14bc_2cc0(d_60ae_dd5a) != 0) + 5; d_60ae_dd92 <= 11; d_60ae_dd92++)
            d_323f_4494[d_60ae_dd92][d_60ae_dd5a] = 650;
        switch (d_60ae_dd5a / 20) {
        case 0:
            if (d_60ae_d8f6 == 0) {
                if (f_b628_01d6(d_60ae_dd5a))
                    d_323f_3f94[0][d_60ae_dd5a] = f_1bd3_0d69(1000000L) + 3000000L;
                else
                    d_323f_3f94[0][d_60ae_dd5a] = f_1bd3_0d69(1000000L) + 1000000L;
            }
            d_323f_4c14[22][d_60ae_dd5a] = f_1bd3_0d69(3);
            break;
        case 1:
            if (d_60ae_d8f6 == 0)
                d_323f_3f94[0][d_60ae_dd5a] = f_1bd3_0d69(500000L) + 500000L;
            d_323f_4c14[22][d_60ae_dd5a] = f_1bd3_0d69(3) + 1;
            break;
        case 2:
            if (d_60ae_d8f6 == 0)
                d_323f_3f94[0][d_60ae_dd5a] = f_1bd3_0d69(250000L) + 250000L;
            else {
                d_323f_4c14[22][d_60ae_dd5a] = f_1bd3_0d69(3) + 2;
                break;
            }
            d_323f_4c14[22][d_60ae_dd5a] = f_1bd3_0d69(3) + 2;
            break;
        case 3:
            if (d_60ae_d8f6 == 0)
                d_323f_3f94[0][d_60ae_dd5a] = f_1bd3_0d69(125000L) + 125000L;
            d_323f_4c14[22][d_60ae_dd5a] = f_1bd3_0d69(3) + 2;
            break;
        }
        d_323f_3f94[0][d_60ae_dd5a] += f_a3de_21b9(d_60ae_dd5a);
    }
    for (d_60ae_dd5c = 0; d_60ae_dd5c <= 139; d_60ae_dd5c++) {
        d_2289_de84[d_60ae_dd5c] = d_60ae_dd5c;
        d_2289_d218[0][d_60ae_dd5c] = 80;
    }
}

void f_96bb_1cb4(void)
{
    FILE *fp;
    char buf[320];

    f_1bd3_1a23(2);
    f_b628_674e(0);
    if (f_1bd3_0d9b(d_2289_0028) == 0) {
        fp = fopen(d_2289_0028, "wb");
        memset(buf, 0, 279);
        for (d_60ae_dac0 = 1; d_60ae_dac0 <= 140; d_60ae_dac0++)
            fwrite(buf, 1, 279, fp);
        fclose(fp);
    }
    f_1bd3_1a23(2);
    if (f_1bd3_0d9b(d_2289_0050) == 0) {
        fp = fopen(d_2289_0050, "wb");
        for (d_60ae_dac0 = 1; d_60ae_dac0 <= 1860; d_60ae_dac0++) {
            fwrite(buf, 1, 133, fp);
            f_b628_68ca(0, d_60ae_dac0 - 1, 1859);
        }
        fclose(fp);
    }
    f_1bd3_1a23(2);
    if (f_1bd3_0d9b(d_2289_0078) == 0) {
        fp = fopen(d_2289_0078, "wb");
        fwrite(buf, 1, 154, fp);
        fclose(fp);
    }
}

void f_96bb_1e3a(void)
{
    f_b628_674e(3);
    for (d_60ae_dabe = 0; d_60ae_dabe <= 459; d_60ae_dabe++) {
        f_b628_68ca(3, d_60ae_dabe, 459);
        switch (d_54d9_0904[0][d_60ae_dabe]) {
        case 0: d_54d9_0904[0][d_60ae_dabe] = 20; break;
        case 1: d_54d9_0904[0][d_60ae_dabe] = 17; break;
        case 2: d_54d9_0904[0][d_60ae_dabe] = 15; break;
        case 3: d_54d9_0904[0][d_60ae_dabe] = 12; break;
        case 4: d_54d9_0904[0][d_60ae_dabe] = 10; break;
        case 5: d_54d9_0904[0][d_60ae_dabe] = 7; break;
        case 6: d_54d9_0904[0][d_60ae_dabe] = 5; break;
        case 7:
        case 8: d_54d9_0904[0][d_60ae_dabe] = 3; break;
        }
        d_60ae_dd0e = f_1bd3_0d69(100);
        if (d_60ae_dd0e <= 5)
            d_54d9_0e68[d_60ae_dabe] = 0;
        else if (d_60ae_dd0e <= 6)
            d_54d9_0e68[d_60ae_dabe] = 1;
        else if (d_60ae_dd0e <= 70)
            d_54d9_0e68[d_60ae_dabe] = 2;
        else if (d_60ae_dd0e <= 80)
            d_54d9_0e68[d_60ae_dabe] = 6;
        else if (d_60ae_dd0e <= 85)
            d_54d9_0e68[d_60ae_dabe] = 3;
        else if (d_60ae_dd0e <= 88)
            d_54d9_0e68[d_60ae_dabe] = 4;
        else if (d_60ae_dd0e <= 93)
            d_54d9_0e68[d_60ae_dabe] = 5;
        else
            d_54d9_0e68[d_60ae_dabe] = 7;
    }
}

void f_96bb_1ff6(void)
{
    unsigned char k;

    d_60ae_d915 = 0;
    for (k = 0; k <= 1; k = k + 1) {
        for (d_60ae_dd42 = k == 0 ? 646 : 0; d_60ae_dd42 <= d_60ae_dce8 + 645; d_60ae_dd42++) {
            d_60ae_dd48 = 0;
            for (d_60ae_dd92 = 0; d_60ae_dd92 <= 19; d_60ae_dd92++)
                if (d_2289_eb68[d_60ae_dd92][k] <= d_2289_eb68[d_60ae_dd48][k])
                    d_60ae_dd48 = d_60ae_dd92;
            d_60ae_faee = f_1bd3_1617(d_60ae_fdea, 0);
            if (d_2289_eb68[d_60ae_dd48][k] < d_60ae_faee[d_60ae_dd42]) {
                d_60ae_faee = f_1bd3_1617(d_60ae_fdea, 0);
                d_2289_eb68[d_60ae_dd48][k] = d_60ae_faee[d_60ae_dd42];
                d_60ae_ddb2 = f_1bd3_1617(d_60ae_fdd4, 1);
                strcpy(d_60ae_ddb2 + d_60ae_dd48 * 160 + k * 80, f_14bc_490d(d_60ae_dd42, 0));
                if (d_323f_1c08[d_60ae_dd42] < 255)
                    strcpy(d_2289_5178, d_60ae_b572[d_323f_1c08[d_60ae_dd42]]);
                else
                    strcpy(d_2289_5178, "NO CLUB");
                d_60ae_ddb2 = f_1bd3_1617(d_60ae_fdd4, 1);
                strcpy(d_60ae_ddb2 + d_60ae_dd48 * 160 + k * 80 + 3200, d_2289_5178);
                d_60ae_d915 = -1;
            }
        }
        for (d_60ae_dd60 = 0; d_60ae_dd60 <= 18; d_60ae_dd60++)
            for (d_60ae_dd92 = d_60ae_dd60 + 1; d_60ae_dd92 <= 19; d_60ae_dd92++)
                if (d_2289_eb68[d_60ae_dd60][k] < d_2289_eb68[d_60ae_dd92][k]) {
                    f_1bd3_13a3(&d_2289_eb68[d_60ae_dd60][k], &d_2289_eb68[d_60ae_dd92][k], 4);
                    d_60ae_ddb2 = f_1bd3_1617(d_60ae_fdd4, 1);
                    f_1bd3_13a3(d_60ae_ddb2 + d_60ae_dd60 * 160 + k * 80,
                                d_60ae_ddb2 + d_60ae_dd92 * 160 + k * 80, 80);
                    f_1bd3_13a3(d_60ae_ddb2 + d_60ae_dd60 * 160 + k * 80 + 3200,
                                d_60ae_ddb2 + d_60ae_dd92 * 160 + k * 80 + 3200, 80);
                }
    }
    if (d_60ae_d915 != 0)
        f_9e77_48d3();
}

void f_96bb_23c4(void)
{
    int d[3];
    int a[11];
    int b[11];
    int c[11];
    unsigned k;

    for (d_60ae_dd3c = 0; d_60ae_dd3c <= 79; d_60ae_dd3c++) {
        d_60ae_dd5a = d_2289_fb10[0][d_60ae_dd3c];
        d_323f_4c14[70][d_60ae_dd5a] = d_323f_4c14[69][d_60ae_dd5a];
        d_323f_4c14[69][d_60ae_dd5a] = d_323f_4c14[68][d_60ae_dd5a];
        d_323f_4c14[68][d_60ae_dd5a] = d_60ae_dd3c;
        d_323f_4c14[0][d_60ae_dd5a] = (d_323f_4c14[0][d_60ae_dd5a] * 2 + 8) / 3;
        if (d_323f_4c14[11][d_60ae_dd5a] == 1 && d_60ae_dd3c < 79)
            d_323f_3f94[0][d_60ae_dd5a] = d_323f_3f94[0][d_60ae_dd5a]
                + (f_a3de_21b9(d_60ae_dd5a + 20) - f_a3de_21b9(d_60ae_dd5a));
        else if (d_323f_4c14[11][d_60ae_dd5a] > 2 && d_60ae_dd3c > 0)
            d_323f_3f94[0][d_60ae_dd5a] = d_323f_3f94[0][d_60ae_dd5a]
                + (f_a3de_21b9(d_60ae_dd5a - 20) - f_a3de_21b9(d_60ae_dd5a));
        d_323f_4c14[11][d_60ae_dd5a] = 2;
    }
    f_b628_61ea();
    d_2289_fb0c[0] = d_2289_fb10[0][0];
    d_2289_fb0c[1] = d_323f_0000[1][0];
    if (d_2289_fb0c[0] == d_2289_fb0c[1])
        d_2289_fb0c[1] = d_2289_fb10[0][1];
    a[0] = d_323f_0000[6][0];
    a[1] = d_2289_fb10[0][0];
    a[2] = d_323f_0000[6][1];
    for (d_60ae_dd5c = 3; d_60ae_dd5c <= 10; d_60ae_dd5c++)
        a[d_60ae_dd5c] = d_2289_fb10[0][d_60ae_dd5c - 2];
    b[0] = d_323f_0000[5][0];
    b[1] = d_323f_0000[1][0];
    b[2] = d_323f_0000[1][1];
    b[3] = d_323f_0000[5][1];
    for (d_60ae_dd5c = 4; d_60ae_dd5c <= 10; d_60ae_dd5c++)
        b[d_60ae_dd5c] = d_2289_fb10[0][d_60ae_dd5c - 3];
    for (d_60ae_dd5c = 0; d_60ae_dd5c <= 10; d_60ae_dd5c++)
        c[d_60ae_dd5c] = d_2289_fb10[0][d_60ae_dd5c + 1];

    for (d_60ae_db80 = 0; d_60ae_db80 <= 1; d_60ae_db80++)
        for (d_60ae_db86 = d_60ae_db80 + 1; d_60ae_db86 <= 10; d_60ae_db86++)
            if (a[d_60ae_db86] == a[d_60ae_db80]) {
                for (k = d_60ae_db86; k < 10; k++)
                    a[k] = a[k + 1];
                d_60ae_db86--;
                a[10] = -1;
            }
    for (d_60ae_db80 = 0; d_60ae_db80 <= 1; d_60ae_db80++)
        for (d_60ae_db86 = 0; d_60ae_db86 <= 10; d_60ae_db86++)
            if (b[d_60ae_db86] == a[d_60ae_db80]) {
                for (k = d_60ae_db86; k < 10; k++)
                    b[k] = b[k + 1];
                d_60ae_db86--;
                b[10] = -1;
            }
    for (d_60ae_db80 = 0; d_60ae_db80 <= 1; d_60ae_db80++)
        for (d_60ae_db86 = 0; d_60ae_db86 <= 10; d_60ae_db86++)
            if (c[d_60ae_db86] == a[d_60ae_db80]) {
                for (k = d_60ae_db86; k < 10; k++)
                    c[k] = c[k + 1];
                d_60ae_db86--;
                c[10] = -1;
            }
    for (d_60ae_db80 = 0; d_60ae_db80 <= 1; d_60ae_db80++)
        for (d_60ae_db86 = d_60ae_db80 + 1; d_60ae_db86 <= 10; d_60ae_db86++)
            if (b[d_60ae_db86] == b[d_60ae_db80]) {
                for (k = d_60ae_db86; k < 10; k++)
                    b[k] = b[k + 1];
                d_60ae_db86--;
                b[10] = -1;
            }
    for (d_60ae_db80 = 0; d_60ae_db80 <= 1; d_60ae_db80++)
        for (d_60ae_db86 = 0; d_60ae_db86 <= 10; d_60ae_db86++)
            if (c[d_60ae_db86] == b[d_60ae_db80]) {
                for (k = d_60ae_db86; k < 10; k++)
                    c[k] = c[k + 1];
                d_60ae_db86--;
                c[10] = -1;
            }

    d[0] = d_323f_0000[7][0];
    d[1] = d_323f_0000[7][1];
    d[2] = d_323f_0000[7][2];
    memset(d_323f_0000, -1, 0x500);
    for (d_60ae_db80 = 0; d_60ae_db80 <= 3; d_60ae_db80++) {
        d_323f_0000[4][d_60ae_db80] = c[d_60ae_db80];
        if (d_60ae_db80 < 2) {
            d_323f_0000[5][d_60ae_db80] = b[d_60ae_db80];
            d_323f_0000[6][d_60ae_db80] = a[d_60ae_db80];
        }
    }
    for (d_60ae_dd5c = 48; d_60ae_dd5c <= 79; d_60ae_dd5c++)
        d_323f_0000[2][d_60ae_dd5c - 48] = d_2289_fb10[0][d_60ae_dd5c];
    for (d_60ae_dd5c = 0; d_60ae_dd5c <= 47; d_60ae_dd5c++)
        d_323f_0000[2][d_60ae_dd5c + 32] = d_2289_fb10[0][d_60ae_dd5c];

    for (d_60ae_dd54 = 0; d_60ae_dd54 <= 2; d_60ae_dd54++) {
        for (d_60ae_dd3c = 0; d_60ae_dd3c <= 1; d_60ae_dd3c++) {
            d_323f_211c[d_323f_47b4[0][d_2289_fb10[d_60ae_dd54 + 1][d_60ae_dd3c]]] =
                d_323f_211c[d_323f_47b4[0][d_2289_fb10[d_60ae_dd54 + 1][d_60ae_dd3c]]] + 50;
            f_a3de_08c3(d_2289_fb10[d_60ae_dd54][d_60ae_dd3c + 18],
                        d_2289_fb10[d_60ae_dd54 + 1][d_60ae_dd3c]);
        }
        d_323f_211c[d_323f_47b4[0][d[d_60ae_dd54]]] =
            d_323f_211c[d_323f_47b4[0][d[d_60ae_dd54]]] + 50;
        f_a3de_08c3(d_2289_fb10[d_60ae_dd54][17], d[d_60ae_dd54]);
    }

    d_60ae_dd9a = d_2289_fb10[3][19];
    f_9107_3ff7(d_60ae_dd9a, 2);
    f_b628_65ab();
}

/* A non-league club (400-459, the best of 30 random draws) takes the place of club
   `team`: names, attributes, fixtures, staff and players are swapped or reset. */
void f_96bb_2ac6(int team)
{
    unsigned char i;

    if (d_60ae_dd98 > 1) {
        d_60ae_dbda = 0;
        do {
            d_60ae_dd5c = f_1bd3_0d69(60) + 400;
            if ((d_60ae_db7e = d_54d9_0904[0][d_60ae_dd5c]) > d_60ae_dd52 || d_60ae_dbda == 0) {
                d_60ae_dd52 = d_54d9_0904[0][d_60ae_dd5c];
                d_60ae_da8a = d_60ae_dd5c;
            }
            d_60ae_dbda++;
        } while (d_60ae_dbda < 30);
        f_1bd3_13a3((void *)&d_60ae_b572[team], (void *)&d_60ae_b6ba[d_60ae_da8a], 2);
        d_60ae_b616[team] = d_60ae_b572[team];
        d_323f_4c14[0][team] = 10;
        d_323f_4c14[1][team] = f_1bd3_0d69(10) + 10;
        f_1bd3_13a3(&d_323f_4c14[2][team], &d_54d9_0904[1][d_60ae_da8a], 1);
        f_1bd3_13a3(&d_323f_4c14[3][team], &d_54d9_0904[2][d_60ae_da8a], 1);
        d_323f_4c14[4][team] = 13;
        d_323f_4c14[5][team] = f_1bd3_0d69(5) + 5;
        d_323f_4c14[6][team] = 100;
        d_323f_4c14[11][team] = 2;
        d_323f_4c14[22][team] = f_1bd3_0d69(3) + 2;
        d_323f_3f94[0][team] = f_1bd3_0d69(125000L) + 125000L;
        d_323f_3f94[0][team] += f_a3de_21b9(team);
        d_54d9_0904[0][d_60ae_da8a] = 10;
        for (d_60ae_dd92 = 0; d_60ae_dd92 <= 139; d_60ae_dd92++)
            if (d_2289_de84[d_60ae_dd92] == team)
                d_2289_de84[d_60ae_dd92] = d_60ae_da8a - 320;
            else if (d_2289_de84[d_60ae_dd92] == d_60ae_da8a - 320)
                d_2289_de84[d_60ae_dd92] = team;
        for (d_60ae_dd92 = 0; d_60ae_dd92 <= 79; d_60ae_dd92++)
            for (d_60ae_dd48 = 1; d_60ae_dd48 <= 7; d_60ae_dd48++) {
                if (d_60ae_dd48 == 2)
                    continue;
                if (d_323f_0000[d_60ae_dd48][d_60ae_dd92] == team)
                    d_323f_0000[d_60ae_dd48][d_60ae_dd92] = d_60ae_da8a + 80;
                else if (d_323f_0000[d_60ae_dd48][d_60ae_dd92] == d_60ae_da8a + 80)
                    d_323f_0000[d_60ae_dd48][d_60ae_dd92] = team;
            }
        for (d_60ae_dd92 = 0; d_60ae_dd92 <= 1; d_60ae_dd92++)
            if (d_2289_fb0c[d_60ae_dd92] == team)
                d_2289_fb0c[d_60ae_dd92] = d_60ae_da8a + 80;
            else if (d_2289_fb0c[d_60ae_dd92] == d_60ae_da8a + 80)
                d_2289_fb0c[d_60ae_dd92] = team;
        f_1bd3_13a3(&d_54d9_4f40[0][team], &d_54d9_4f40[0][d_60ae_da8a - 320], 1);
        f_1bd3_13a3(&d_54d9_4f40[1][team], &d_54d9_4f40[1][d_60ae_da8a - 320], 1);
        for (d_60ae_dd92 = 0; d_60ae_dd92 <= d_60ae_dda4 - 1; d_60ae_dd92++)
            if (d_3c35_0000[10][d_60ae_dd92] == team)
                d_3c35_0000[10][d_60ae_dd92] = d_60ae_da8a - 320;
            else if (d_3c35_0000[10][d_60ae_dd92] == d_60ae_da8a - 320)
                d_3c35_0000[10][d_60ae_dd92] = team;
        f_9e77_4b29(team, d_60ae_da8a - 320);
        f_9e77_4d7d(team, d_60ae_da8a + 80);
        for (d_60ae_daea = 0; d_60ae_daea <= 6; d_60ae_daea++)
            d_323f_47b4[d_60ae_daea][team] = 650;
        for (d_60ae_d996 = 0; d_60ae_d996 <= 6; d_60ae_d996++) {
            d_60ae_dad2 = -1;
            for (d_60ae_dd42 = 0; d_60ae_dd42 <= 645; d_60ae_dd42++)
                if (d_323f_1c08[d_60ae_dd42] == 255) {
                    if ((d_60ae_db3c = f_1bd3_1307(d_323f_28ba[0][d_60ae_dd42],
                                         f_1bd3_1307(d_323f_2b44[d_60ae_dd42],
                                             f_1bd3_1307(d_323f_2dce[d_60ae_dd42],
                                                         d_323f_3058[d_60ae_dd42]))))
                            < d_60ae_dab0 || d_60ae_dad2 == -1) {
                        d_60ae_dad2 = d_60ae_dd42;
                        d_60ae_dab0 = d_60ae_db3c;
                    }
                }
            f_9107_3360(d_60ae_dad2, team, 0);
        }
        d_323f_4c14[62][team] = 0;
        d_60ae_ddb6 = f_1bd3_1617(d_60ae_fdd6, 1);
        strcpy(d_60ae_ddb6[team], "");
        d_323f_4c14[7][team] = 0;
        d_323f_4c14[10][team] = 0;
        d_60ae_da88 = 0;
        for (d_60ae_dd84 = 0; d_60ae_dd84 <= d_60ae_dda4 - 1; d_60ae_dd84++)
            if (d_471b_0000[18][d_60ae_dd84] == team) {
                f_ad38_0557(d_60ae_dd84, team, d_60ae_da88 < 2 ? 1 : 0);
                d_60ae_da88++;
                f_8aa1_1865(d_60ae_dd84, -1);
            }
        for (i = 0; i <= 15; i = i + 1)
            f_ad38_3276(team, i);
    }
}

/* The players' yearly ageing and attribute drift. */
void f_96bb_30ac(void)
{
    f_b628_674e(1);
    for (d_60ae_da86 = 1; d_60ae_da86 <= 3; d_60ae_da86++)
        f_a3de_21e1();
    d_60ae_dd84 = 0;
    do {
        if (d_60ae_dda4 - 1 >= d_60ae_dd84)
            f_b628_68ca(1, d_60ae_dd84, d_60ae_dda4 - 1);
        d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 0);
        f_96bb_37d1(d_60ae_dd84, d_471b_0000[17][d_60ae_dd84], d_3c35_0000[0][d_60ae_dd84],
                    d_60ae_fae6[0][d_60ae_dd84]);
        f_ad38_2f53(d_60ae_dd84);
        d_471b_0000[8][d_60ae_dd84] = f_1bd3_1369(d_471b_0000[8][d_60ae_dd84] + (f_1bd3_0d69(3) == 0), 9);
        d_471b_0000[11][d_60ae_dd84] = f_1bd3_1307(d_471b_0000[11][d_60ae_dd84] - (f_1bd3_0d69(3) == 0), 1);
        d_471b_0000[12][d_60ae_dd84] = f_1bd3_1369(d_471b_0000[12][d_60ae_dd84] + (f_1bd3_0d69(3) == 0), 20);
        d_471b_0000[14][d_60ae_dd84] = f_1bd3_1307(d_471b_0000[14][d_60ae_dd84] - (f_1bd3_0d69(3) == 0), 1);
        d_471b_0000[17][d_60ae_dd84]++;
        d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 1);
        d_3c35_0000[5][d_60ae_dd84] = d_3c35_0000[0][d_60ae_dd84];
        d_3c35_0000[6][d_60ae_dd84] = d_3c35_0000[1][d_60ae_dd84];
        d_60ae_fad2[6][d_60ae_dd84] = d_3c35_0000[2][d_60ae_dd84];
        d_60ae_fad2[6][d_60ae_dd84] = d_60ae_fad2[6][d_60ae_dd84] - d_60ae_fad2[6][d_60ae_dd84] % 5;
        d_60ae_fad2[7][d_60ae_dd84] = d_3c35_0000[3][d_60ae_dd84];
        d_60ae_fad2[8][d_60ae_dd84] = d_3c35_0000[4][d_60ae_dd84];
        d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 1);
        d_60ae_fae6[1][d_60ae_dd84] = d_60ae_fae6[0][d_60ae_dd84];
        if (d_60ae_dda4 - 1 == d_60ae_dd84)
            d_60ae_dd84 = 1700;
        else
            d_60ae_dd84++;
    } while (d_60ae_dda2 + 1699 >= d_60ae_dd84);
}

void f_96bb_3372(void)
{
    char buf[320];
    char title[80];
    char text[80];

    f_b628_674e(6);
    for (d_60ae_dd84 = 0; d_60ae_dd84 <= d_60ae_dda4 - 1; d_60ae_dd84++) {
        f_b628_68ca(6, d_60ae_dd84, d_60ae_dda4 - 1);
        if (d_60ae_d8f6 && d_60ae_dd98 == 1)
            continue;
        d_60ae_dae4 = d_471b_0000[18][d_60ae_dd84];
        d_60ae_db02 = d_471b_0000[17][d_60ae_dd84];
        if (d_60ae_ddbe[d_60ae_dd84].w.f0 && d_60ae_db02 > 28)
            d_60ae_db02 = f_1bd3_1307(d_60ae_db02 - 4, 28);
        d_60ae_d913 = d_60ae_db02 > 30 && d_60ae_ddbe[d_60ae_dd84].a.f8;
        d_60ae_d912 = d_60ae_ddbe[d_60ae_dd84].w.f17 == 1;
        if (d_60ae_d912 != 0 || d_60ae_db02 > 38 ||
            (d_60ae_db02 > 33 && d_471b_0000[0][d_60ae_dd84] < 40) ||
            (d_60ae_db02 > 30 && d_471b_0000[0][d_60ae_dd84] < 30) || d_60ae_d913 != 0) {
            d_60ae_d911 = 0;
            if (f_14bc_2cc0(d_60ae_dae4) && d_60ae_dd98 > 1) {
                sprintf(title, "%s squad news", (char far *)d_60ae_b572[d_60ae_dae4]);
                if (d_60ae_d912 != 0)
                    sprintf(buf, "%s has been forced to retire through injury", f_14bc_4703(d_60ae_dd84));
                else if (d_60ae_d913 != 0) {
                    sprintf(buf, "%s has decided to go into non league soccer", f_14bc_4703(d_60ae_dd84));
                    d_60ae_faf2 = f_1bd3_1617(d_60ae_fdec, 0);
                    d_323f_3f94[0][d_60ae_dae4] += d_60ae_faf2[d_60ae_dd84] / (f_1bd3_1088() + 1);
                } else
                    sprintf(buf, "%s has decided to hang up his boots", f_14bc_4703(d_60ae_dd84));
                sprintf(text, "%s at the age of %d.", buf, d_471b_0000[17][d_60ae_dd84]);
                f_14bc_5bfe(d_60ae_dae4, title, text);
                d_60ae_d911 = -1;
            }
            if (d_60ae_d912 != 0 && d_60ae_ddbe[d_60ae_dd84].w.f20) {
                d_60ae_d7df = f_14bc_0d32(f_14bc_020c(d_60ae_dd84, -1), 0);
                if (f_14bc_2cc0(d_60ae_dae4) && d_60ae_dd98 > 1) {
                    sprintf(title, "%s squad news", (char far *)d_60ae_b572[d_60ae_dae4]);
                    sprintf(text, "The club receives %ld from the insurance company following %s's retirement.",
                            d_60ae_d7df, f_14bc_48b4(d_60ae_dd84));
                    f_14bc_5bfe(d_60ae_dae4, title, text);
                    d_60ae_d911 = -1;
                }
                d_323f_3f94[0][d_60ae_dae4] += d_60ae_d7df;
            }
            if (d_60ae_d911 != 0) {
                f_b628_65ab();
                f_b628_674e(6);
            }
            d_323f_4e52[d_60ae_dae4]--;
            if (d_60ae_ddbe[d_60ae_dd84].w.f0)
                d_323f_4f48[0][d_60ae_dae4]--;
            if (d_323f_4e52[d_60ae_dae4] < 17 || d_323f_4f48[0][d_60ae_dae4] == 0)
                f_ad38_0557(d_60ae_dd84, d_60ae_dae4, d_323f_4f48[0][d_60ae_dae4] == 0 ? 3 : 2);
            else {
                d_60ae_dd5a = -1;
                d_60ae_dbda = 0;
                do {
                    d_60ae_dd5a = f_1bd3_0d69(60);
                    d_60ae_dbda++;
                } while (d_323f_4e52[d_60ae_dd5a] >= d_60ae_dbda / 60 + 14);
                f_ad38_0557(d_60ae_dd84, d_60ae_dd5a, 2);
            }
            f_8aa1_1865(d_60ae_dd84, -1);
        }
    }
}

void f_96bb_37d1(int player, int age, int games, int rating)
{
    if (games > 0)
        d_60ae_d8cf = (float)rating / games * 41 - 120;
    else
        d_60ae_d8cf = d_471b_0000[0][player];
    d_60ae_da84 = d_471b_0000[0][player];
    if (d_60ae_ddbe[player].w.f0 && age > 28)
        d_60ae_da82 = f_1bd3_1307(age - 4, 28);
    else
        d_60ae_da82 = age;
    if (d_60ae_da82 <= 27) {
        d_471b_0000[0][player] = (d_471b_0000[0][player] * 4 + d_471b_0000[9][player]) / 5;
        d_60ae_da80 = f_1bd3_1369(38, games);
        d_471b_0000[0][player] = f_1bd3_1307(f_1bd3_1369((d_471b_0000[0][player] * (100 - d_60ae_da80) +
                                                          d_60ae_da80 * d_60ae_d8cf * 1.03) / 100,
                                                         d_471b_0000[9][player]), 10);
    } else if (d_60ae_da82 >= 30)
        d_471b_0000[0][player] = (d_471b_0000[0][player] * 5 + 10) / 6;
}

void f_96bb_3937(void)
{
    long cap;

    for (d_60ae_dd5c = 0; d_60ae_dd5c <= 79; d_60ae_dd5c++) {
        long cost;
        unsigned char stand;
        unsigned char seat;

        cap = d_323f_4c66[d_60ae_dd5c] * 1000L;
        d_60ae_d7db = d_323f_4354[d_60ae_dd5c] / d_323f_5f9e[d_60ae_dd5c];
        if (f_14bc_2cc0(d_60ae_dd5c)) {
            char title[80];
            char text[80];

            sprintf(title, "%s club news", (char far *)d_60ae_b572[d_60ae_dd5c]);
            sprintf(text, "Our average attendance for the season was %ld.", d_60ae_d7db);
            f_14bc_5bfe(d_60ae_dd5c, title, text);
        }
        if (d_60ae_d7db > cap * 0.8 && d_323f_4c66[d_60ae_dd5c] < 50) {
            d_60ae_d7d7 = f_1bd3_131c(d_323f_3f94[0][d_60ae_dd5c] - f_a3de_21b9(d_60ae_dd5c), 0L) * 0.75;
            cost = f_1bd3_1369(d_60ae_d7d7, (f_1bd3_0d69(6) * 10 + 200) * 1000);
            if (cost < 0)
                cost = 0;
            stand = d_60ae_dd5c < 20 && d_323f_4c66[d_60ae_dd5c] < 40 && f_1bd3_0d69(30) == 0 ?
                    f_1bd3_0d69(6) + 5 : f_1bd3_0d69(3) + 1;
            seat = d_60ae_dd5c < 40 ? stand : 0;
            d_323f_3f94[0][d_60ae_dd5c] -= cost;
            d_323f_4c66[d_60ae_dd5c] += stand;
            d_323f_6138[d_60ae_dd5c] += seat;
            if (f_14bc_2cc0(d_60ae_dd5c)) {
                char title[80];
                char text[180];

                sprintf(title, "%s ground news", (char far *)d_60ae_b572[d_60ae_dd5c]);
                if (seat > 0)
                    sprintf(text, "The board has decided to increase standing capacity by %ld and seating capacity by %ld. Total capacity is now %ld. %ld of the cost is from club funds.",
                            (stand - seat) * 1000L, seat * 1000L, d_323f_4c66[d_60ae_dd5c] * 1000L, cost);
                else
                    sprintf(text, "The board has decided to increase standing capacity by %ld. Total capacity is now %ld. %ld of the cost is from club funds.",
                            stand * 1000L, d_323f_4c66[d_60ae_dd5c] * 1000L, cost);
                f_14bc_5bfe(d_60ae_dd5c, title, text);
            }
        } else if (d_60ae_dd5c / 20 == 0 && d_323f_6138[d_60ae_dd5c] < d_323f_4c66[d_60ae_dd5c]) {
            d_60ae_d7d7 = f_1bd3_131c(d_323f_3f94[0][d_60ae_dd5c] - f_a3de_21b9(d_60ae_dd5c), 0L) * 0.75;
            cost = f_1bd3_1369(d_60ae_d7d7, (f_1bd3_0d69(6) * 10 + 100) * 1000);
            if (cost < 0)
                cost = 0;
            stand = (d_323f_4c66[d_60ae_dd5c] - d_323f_6138[d_60ae_dd5c]) / 2;
            stand = f_1bd3_1369(f_1bd3_1307(stand, 1), f_1bd3_0d69(4) + 5);
            d_323f_3f94[0][d_60ae_dd5c] -= cost;
            d_323f_6138[d_60ae_dd5c] += stand;
            d_323f_4c66[d_60ae_dd5c] = d_323f_4c66[d_60ae_dd5c] - stand * 0.4;
            if (d_323f_4c66[d_60ae_dd5c] < d_323f_6138[d_60ae_dd5c])
                d_323f_4c66[d_60ae_dd5c] = d_323f_6138[d_60ae_dd5c];
            if (f_14bc_2cc0(d_60ae_dd5c)) {
                char title[80];
                char text[180];

                sprintf(title, "%s ground news", (char far *)d_60ae_b572[d_60ae_dd5c]);
                if (d_323f_4c66[d_60ae_dd5c] == d_323f_6138[d_60ae_dd5c])
                    sprintf(text, "The board has decided to convert the remaining standing areas to seating. The all-seater capacity is now %ld. %ld of the cost is from club funds.",
                            d_323f_4c66[d_60ae_dd5c] * 1000L, cost);
                else
                    sprintf(text, "The board has decided to convert part of the standing area to seating. Seating capacity is now %ld, but total capacity is reduced to %ld. %ld of the cost is from club funds.",
                            d_323f_6138[d_60ae_dd5c] * 1000L, d_323f_4c66[d_60ae_dd5c] * 1000L, cost);
                f_14bc_5bfe(d_60ae_dd5c, title, text);
            }
        }
    }
}

void f_96bb_3f40(void)
{
    FILE *fp;
    char buf[320];
    unsigned char i;

    f_b628_674e(4);
    for (i = 0; i <= 79; i++) {
        d_471b_d828[i] = 0;
        d_471b_b668[i] = 0;
    }
    for (d_60ae_dd84 = 0; d_60ae_dd84 <= d_60ae_dda4 - 1; d_60ae_dd84++) {
        d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 0);
        f_96bb_4d07(d_60ae_dd84, d_471b_0000[18][d_60ae_dd84], d_3c35_0000[13][d_60ae_dd84],
                    d_3c35_0000[12][d_60ae_dd84], d_60ae_fae6[2][d_60ae_dd84]);
    }
    f_1bd3_1a23(2);
    fp = fopen(d_2289_0028, "rb+");
    for (d_60ae_dd5c = 0; d_60ae_dd5c <= 139; d_60ae_dd5c++) {
        f_b628_68ca(4, d_60ae_dd5c, 139);
        fseek(fp, (long)d_60ae_dd5c * 279, 0);
        fread(d_2289_32aa, 1, 279, fp);
        if (d_2289_c46c[0][d_60ae_dd5c] > -1) {
            sprintf(d_2289_5178, "%.12s", f_14bc_3523(d_2289_c46c[0][d_60ae_dd5c]));
            sprintf(d_2289_3322, "%-12s", d_2289_5178);
            d_2289_332e = d_60ae_dd98 + 99;
        }
        if (d_2289_c46c[1][d_60ae_dd5c] > -1) {
            sprintf(d_2289_5178, "%.12s", f_14bc_3523(d_2289_c46c[1][d_60ae_dd5c]));
            sprintf(d_2289_332f, "%-12s", d_2289_5178);
            d_2289_333b = d_60ae_dd98 + 99;
        }
        if (d_2289_c46c[2][d_60ae_dd5c] > -1) {
            sprintf(d_2289_5178, "%.12s", f_14bc_3523(d_2289_c46c[2][d_60ae_dd5c]));
            sprintf(d_2289_333c, "%-12s", d_2289_5178);
            d_2289_3348 = d_60ae_dd98 + 99;
        }
        if (d_2289_c46c[3][d_60ae_dd5c] > -1) {
            sprintf(d_2289_5178, "%.12s", f_14bc_3523(d_2289_c46c[3][d_60ae_dd5c]));
            sprintf(d_2289_3349, "%-12s", d_2289_5178);
            d_2289_3355 = d_60ae_dd98 + 99;
        }
        if (d_2289_c46c[8][d_60ae_dd5c] > -1) {
            sprintf(d_2289_325a, "%.13s", f_14bc_483d(d_2289_c46c[9][d_60ae_dd5c]));
            sprintf(d_2289_33a7, "%-13s", d_2289_325a);
            sprintf(d_2289_5178, "%.12s", f_14bc_3523(d_2289_c46c[8][d_60ae_dd5c]));
            sprintf(d_2289_33b4, "%-12s", d_2289_5178);
            d_2289_33c0 = d_60ae_dd98 + 99;
        }
        if (d_2289_c46c[4][d_60ae_dd5c] > -1) {
            sprintf(d_2289_325a, "%.13s", f_14bc_483d(d_2289_c46c[4][d_60ae_dd5c]));
            sprintf(d_2289_3372, "%-13s", d_2289_325a);
            if (d_2289_c46c[5][d_60ae_dd5c] < 80)
                strcpy(d_2289_5178, d_60ae_b572[d_2289_c46c[5][d_60ae_dd5c]]);
            else
                sprintf(d_2289_5178, "<%s>", d_54d9_0550[d_2289_c46c[5][d_60ae_dd5c] - 480]);
            sprintf(d_2289_337f, "%-12s", d_2289_5178);
            d_2289_338b = d_60ae_dd98 + 99;
        }
        if (d_2289_c46c[6][d_60ae_dd5c] > -1) {
            sprintf(d_2289_325a, "%.13s", f_14bc_483d(d_2289_c46c[6][d_60ae_dd5c]));
            sprintf(d_2289_338c, "%-13s", d_2289_325a);
            if (d_2289_c46c[7][d_60ae_dd5c] < 80)
                sprintf(d_2289_5178, "%.12s", (char far *)d_60ae_b572[d_2289_c46c[7][d_60ae_dd5c]]);
            else
                sprintf(d_2289_5178, "<%.12s>", d_54d9_0550[d_2289_c46c[7][d_60ae_dd5c] - 480]);
            sprintf(d_2289_3399, "%-12s", d_2289_5178);
            d_2289_33a5 = d_60ae_dd98 + 99;
        }
        if (d_60ae_dd5c < 80) {
            if (d_2289_cf5c[4][d_60ae_dd5c] < d_471b_d828[d_60ae_dd5c]) {
                d_2289_cf5c[4][d_60ae_dd5c] = d_471b_d828[d_60ae_dd5c];
                sprintf(d_2289_325a, "%.13s", f_14bc_483d(d_471b_b29c[0][d_60ae_dd5c]));
                sprintf(d_2289_3356, "%-13s", d_2289_325a);
                d_2289_3363 = d_60ae_dd98 + 99;
            }
            if (d_471b_b668[d_60ae_dd5c] > d_2289_c020[d_60ae_dd5c]) {
                d_2289_c020[d_60ae_dd5c] = d_471b_b668[d_60ae_dd5c];
                sprintf(d_2289_325a, "%.13s", f_14bc_483d(d_471b_b29c[1][d_60ae_dd5c]));
                sprintf(d_2289_3364, "%-13s", d_2289_325a);
                d_2289_3371 = d_60ae_dd98 + 99;
            }
        }
        d_60ae_dd3c = f_14bc_468c(d_60ae_dd5c);
        if (d_2289_cf5c[5][d_60ae_dd5c] > d_60ae_dd3c) {
            d_2289_cf5c[5][d_60ae_dd5c] = d_60ae_dd3c;
            d_2289_33a6 = d_60ae_dd98 + 99;
        }
        sprintf(d_2289_320a, "%c%c", d_60ae_dd98 + 99, d_60ae_dd3c + 32);
        if (d_60ae_dd5c < 80) {
            d_60ae_da78 = d_323f_4fec[d_60ae_dd5c];
            d_60ae_da76 = d_323f_503e[d_60ae_dd5c];
            d_60ae_da74 = d_60ae_dd78 - d_60ae_da78 - d_60ae_da76 - 1;
            sprintf(buf, "%c%c%c%c%c%c", d_60ae_da78 + 32, d_60ae_da74 + 32, d_60ae_da76 + 32,
                    d_323f_5090[d_60ae_dd5c] + 32, d_323f_50e2[d_60ae_dd5c] + 32,
                    f_a3de_0000(d_60ae_dd3c) + 32);
            strcat(d_2289_320a, buf);
        } else
            strcat(d_2289_320a, "      ");
        sprintf(d_2289_320a + strlen(d_2289_320a), "%c%c",
                d_2289_cf5c[6][d_60ae_dd5c] + 32, d_2289_cf5c[7][d_60ae_dd5c] + 32);
        if (d_2289_cf5c[8][d_60ae_dd5c] > 0)
            sprintf(d_2289_320a + strlen(d_2289_320a), "%c%c", 35, d_2289_cf5c[8][d_60ae_dd5c] + 32);
        else if (d_2289_cf5c[9][d_60ae_dd5c] > 0)
            sprintf(d_2289_320a + strlen(d_2289_320a), "%c%c", 36, d_2289_cf5c[9][d_60ae_dd5c] + 32);
        else if (d_2289_cf5c[10][d_60ae_dd5c] > 0)
            sprintf(d_2289_320a + strlen(d_2289_320a), "%c%c", 37, d_2289_cf5c[10][d_60ae_dd5c] + 32);
        else if (d_2289_cf5c[11][d_60ae_dd5c] > 0)
            sprintf(d_2289_320a + strlen(d_2289_320a), "%c%c", 38, d_2289_cf5c[11][d_60ae_dd5c] + 32);
        else
            strcat(d_2289_320a, "  ");
        d_60ae_da90 = f_1bd3_1369(d_60ae_dd98, 10);
        if (d_60ae_dd98 > 10)
            memcpy(d_2289_32aa, d_2289_32b6, 108);
        memcpy(d_2289_329e[d_60ae_da90], d_2289_320a, 12);
        fseek(fp, (long)d_60ae_dd5c * 279, 0);
        fwrite(d_2289_32aa, 1, 279, fp);
    }
    fclose(fp);
}

void f_96bb_48fa(int team, int other, int a, int b)
{
    if (team < 80 || team >= 480) {
        d_60ae_dd5c = team - (team >= 480 ? 400 : 0);
        d_60ae_da72 = d_2289_cf5c[0][d_60ae_dd5c] - d_2289_cf5c[1][d_60ae_dd5c];
        if (a - b > d_60ae_da72
            || (a - b == d_60ae_da72 && d_2289_cf5c[0][d_60ae_dd5c] < a)) {
            d_2289_cf5c[0][d_60ae_dd5c] = a;
            d_2289_cf5c[1][d_60ae_dd5c] = b;
            d_2289_c46c[0][d_60ae_dd5c] = other;
        }
    }
}

void f_96bb_4999(int team, int other, int a, int b)
{
    if (team < 80 || team >= 480) {
        d_60ae_dd5c = team - (team >= 480 ? 400 : 0);
        d_60ae_da72 = d_2289_cf5c[3][d_60ae_dd5c] - d_2289_cf5c[2][d_60ae_dd5c];
        if (b - a > d_60ae_da72
            || (b - a == d_60ae_da72 && d_2289_cf5c[3][d_60ae_dd5c] < b)) {
            d_2289_cf5c[2][d_60ae_dd5c] = a;
            d_2289_cf5c[3][d_60ae_dd5c] = b;
            d_2289_c46c[1][d_60ae_dd5c] = other;
        }
    }
}

void f_96bb_4a38(int team, int other, long v)
{
    if (team < 80 || team >= 480) {
        d_60ae_dd5c = team - (team >= 480 ? 400 : 0);
        d_60ae_fad6 = f_1bd3_1617(d_60ae_fdde, 1);
        if (d_60ae_fad6[0][d_60ae_dd5c] < v) {
            d_60ae_fad6[0][d_60ae_dd5c] = v;
            d_2289_c46c[2][d_60ae_dd5c] = other;
        }
    }
}

void f_96bb_4ac3(int team, int other, long v)
{
    if (team < 80 || team >= 480) {
        d_60ae_dd5c = team - (team >= 480 ? 400 : 0);
        d_60ae_fad6 = f_1bd3_1617(d_60ae_fdde, 1);
        if (d_60ae_fad6[1][d_60ae_dd5c] > v || d_60ae_fad6[1][d_60ae_dd5c] == 0) {
            d_60ae_fad6[1][d_60ae_dd5c] = v;
            d_2289_c46c[3][d_60ae_dd5c] = other;
        }
    }
}

void f_96bb_4b70(int team, int a, int player, int b)
{
    if (team < 80) {
        d_60ae_dd5c = team;
        if (d_2289_cf5c[12][d_60ae_dd5c] < b) {
            d_2289_cf5c[12][d_60ae_dd5c] = b;
            d_2289_c46c[8][d_60ae_dd5c] = a;
            d_2289_c46c[9][d_60ae_dd5c] = player;
        }
    }
}

void f_96bb_4bc4(int team, int row, int v)
{
    if (team < 80 || team >= 480) {
        d_60ae_dd5c = team - (team >= 480 ? 400 : 0);
        d_2289_d218[row][d_60ae_dd5c] = v;
    }
}

void f_96bb_4c07(int player, int from, int to, long fee)
{
    d_60ae_fad6 = f_1bd3_1617(d_60ae_fdde, 1);
    if (d_60ae_fad6[2][to] < fee) {
        d_60ae_fad6[2][to] = fee;
        d_2289_c46c[4][to] = player;
        d_2289_c46c[5][to] = from;
    }
}

void f_96bb_4c87(int player, int from, int to, long fee)
{
    d_60ae_fad6 = f_1bd3_1617(d_60ae_fdde, 1);
    if (d_60ae_fad6[3][from] < fee) {
        d_60ae_fad6[3][from] = fee;
        d_2289_c46c[6][from] = player;
        d_2289_c46c[7][from] = to;
    }
}

void f_96bb_4d07(int team, int player, int a, int b, int c)
{
    if (d_471b_d828[player] < a) {
        d_471b_d828[player] = a;
        d_471b_b29c[0][player] = team;
    }
    if (b >= 20) {
        d_60ae_d8cf = (float)c / b;
        if (d_471b_b668[player] < d_60ae_d8cf) {
            d_471b_b668[player] = d_60ae_d8cf;
            d_471b_b33c[player] = team;
        }
    }
}

void f_96bb_4db6(int team)
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

    f_1bd3_1a23(2);
    fp = fopen(d_2289_0028, "rb+");
    fseek(fp, (long)team * 279, 0);
    fread(d_2289_32aa, 1, 279, fp);
    fclose(fp);
    f_14bc_60ca();

    f_14bc_000b(1.25, team, "Club Records");
    sprintf(d_2289_3200, "%d", d_60ae_dd98 + 1991);
    f_14bc_3672(1.125, 4.0, 1, 8, 0x130, "                   CLUB RECORDS");
    f_14bc_3672(1.125, 11.75, 1, 8, 0x130, "                 TRANSFER RECORDS");
    f_14bc_3672(1.125, 16.5, 1, 8, 0x130, "                  PLAYER RECORDS");
    for (d_60ae_da70 = 0; d_60ae_da70 <= 1; d_60ae_da70++) {
        f_14bc_3672(1.125, d_60ae_da70 * 12.5 + 5.25, 1, 12, 0x7e, " ACHIEVEMENT");
        f_14bc_3672(17.125, d_60ae_da70 * 12.5 + 5.25, 1, 4, 0x8a, " RECORD");
        f_14bc_3672(34.625, d_60ae_da70 * 12.5 + 5.25, 1, 4, 0x24, " YEAR");
    }
    for (d_60ae_da6e = 0; d_60ae_da6e <= 19; d_60ae_da6e++)
        strcpy(lines[d_60ae_da6e], "");

    /* best league placing */
    f_14bc_3672(1.125, 6.5, 1, 14, 0x7e, " BEST LEAGUE PLACING");
    d_60ae_dd54 = d_2289_d218[0][team] / 20 + 1;
    if (d_60ae_dd54 < 5) {
        sprintf(lines[0], " %s IN %s", f_14bc_4a83(d_2289_d218[0][team] % 20 + 1), f_14bc_4b12(d_60ae_dd54, 0));
        sprintf(lines[1], " %d", d_2289_33a6 + 1892);
    }

    /* biggest victory */
    f_14bc_3672(1.125, 7.5, 1, 14, 0x7e, " BIGGEST VICTORY");
    sprintf(d_2289_3964, "%d-%d", d_2289_cf5c[0][team], d_2289_cfe8[team]);
    if (strcmp(d_2289_3964, "0-0")) {
        sprintf(lines[2], " %s V ", d_2289_3964);
        if (d_2289_c46c[0][team] == -1) {
            strncpy(buf, d_2289_3322, 12);
            buf[12] = 0;
            strcat(lines[2], f_1bd3_100b(buf));
            sprintf(lines[3], " %d", d_2289_332e + 1892);
        } else {
            sprintf(buf, "%.12s", f_14bc_3523(d_2289_c46c[0][team]));
            strcat(lines[2], buf);
            sprintf(lines[3], " %s", d_2289_3200);
        }
    }

    /* heaviest defeat */
    f_14bc_3672(1.125, 8.5, 1, 14, 0x7e, " HEAVIEST DEFEAT");
    sprintf(d_2289_3964, "%d-%d", d_2289_d074[team], d_2289_d100[team]);
    if (strcmp(d_2289_3964, "0-0")) {
        sprintf(lines[4], " %s V ", d_2289_3964);
        if (d_2289_c46c[1][team] == -1) {
            strncpy(buf, d_2289_332f, 12);
            buf[12] = 0;
            strcat(lines[4], f_1bd3_100b(buf));
            sprintf(lines[5], " %d", d_2289_333b + 1892);
        } else {
            sprintf(buf, "%.12s", f_14bc_3523(d_2289_c46c[1][team]));
            strcat(lines[4], buf);
            sprintf(lines[5], " %s", d_2289_3200);
        }
    }

    /* highest attendance */
    f_14bc_3672(1.125, 9.5, 1, 14, 0x7e, " HIGHEST ATTENDANCE");
    d_60ae_fad6 = f_1bd3_1617(d_60ae_fdde, 0);
    sprintf(d_2289_31b0, "%ld", d_60ae_fad6[0][team]);
    if (strcmp(d_2289_31b0, "0")) {
        sprintf(lines[6], " %s V ", d_2289_31b0);
        if (d_2289_c46c[2][team] == -1) {
            strncpy(buf, d_2289_333c, 12);
            buf[12] = 0;
            strcat(lines[6], f_1bd3_100b(buf));
            sprintf(lines[7], " %d", d_2289_3348 + 1892);
        } else {
            sprintf(buf, "%.12s", f_14bc_3523(d_2289_c46c[2][team]));
            strcat(lines[6], buf);
            sprintf(lines[7], " %s", d_2289_3200);
        }
    }

    /* lowest attendance */
    f_14bc_3672(1.125, 10.5, 1, 14, 0x7e, " LOWEST ATTENDANCE");
    d_60ae_fad6 = f_1bd3_1617(d_60ae_fdde, 0);
    sprintf(d_2289_31b0, "%ld", d_60ae_fad6[1][team]);
    if (strcmp(d_2289_31b0, "0")) {
        sprintf(lines[8], " %s V ", d_2289_31b0);
        if (d_2289_c46c[3][team] == -1) {
            strncpy(buf, d_2289_3349, 12);
            buf[12] = 0;
            strcat(lines[8], f_1bd3_100b(buf));
            sprintf(lines[9], " %d", d_2289_3355 + 1892);
        } else {
            sprintf(buf, "%.12s", f_14bc_3523(d_2289_c46c[3][team]));
            strcat(lines[8], buf);
            sprintf(lines[9], " %s", d_2289_3200);
        }
    }

    /* goals in a season */
    f_14bc_3672(1.125, 19.0, 1, 14, 0x7e, " GOALS IN A SEASON");
    sprintf(d_2289_3160, "%d", d_2289_d18c[team]);
    if (strcmp(d_2289_3160, "0")) {
        strncpy(d_2289_4e3a, d_2289_3356, 13);
        d_2289_4e3a[13] = 0;
        sprintf(lines[10], " %s - %s", f_1bd3_100b(d_2289_4e3a), d_2289_3160);
        sprintf(lines[11], " %d", d_2289_3363 + 1892);
    }

    /* average rating in a season */
    f_14bc_3672(1.125, 20.0, 1, 14, 0x7e, " AV RT IN A SEASON");
    if (d_2289_c020[team] > 0) {
        sprintf(d_2289_4eda, "%.2f", d_2289_c020[team]);
        strncpy(d_2289_4e3a, d_2289_3364, 13);
        d_2289_4e3a[13] = 0;
        sprintf(lines[12], " %s - %s", f_1bd3_100b(d_2289_4e3a), d_2289_4eda);
        sprintf(lines[13], " %d", d_2289_3371 + 1892);
    }

    /* record fee paid */
    f_14bc_3672(1.125, 13.0, 1, 4, 0x97, " RECORD FEE PAID");
    d_60ae_fad6 = f_1bd3_1617(d_60ae_fdde, 0);
    sprintf(d_2289_3732, "%ld", d_60ae_fad6[2][team]);
    if (strcmp(d_2289_3732, "0")) {
        sprintf(lines[14], " %s FOR ", d_2289_3732);
        strcpy(lines[15], " FROM ");
        if (d_2289_c46c[4][team] == -1) {
            strncpy(buf, d_2289_3372, 13);
            buf[13] = 0;
            strcpy(name, f_1bd3_100b(buf));
            strncpy(buf, d_2289_337f, 12);
            buf[12] = 0;
            strcat(lines[15], f_1bd3_100b(buf));
            sprintf(buf, " %d", d_2289_338b + 1892);
        } else {
            strcpy(name, f_14bc_483d(d_2289_c46c[4][team]));
            if (d_2289_c46c[5][team] < 80)
                sprintf(buf, "%.12s %s", f_14bc_3523(d_2289_c46c[5][team]), d_2289_3200);
            else
                sprintf(buf, "<%.12s> %s", d_54d9_0000[d_2289_c46c[5][team] - 140], d_2289_3200);
        }
        strcat(lines[15], buf);
        if (strlen(name) > 12)
            strcpy(name, name + 2);
        strcat(lines[14], name);
    }

    /* record fee recouped */
    f_14bc_3672(20.25, 13.0, 1, 4, 0x97, " RECORD FEE RECOUPED");
    d_60ae_fad6 = f_1bd3_1617(d_60ae_fdde, 0);
    sprintf(d_2289_3732, "%ld", d_60ae_fad6[3][team]);
    if (strcmp(d_2289_3732, "0")) {
        sprintf(lines[16], " %s FOR ", d_2289_3732);
        strcpy(lines[17], " TO ");
        if (d_2289_c46c[6][team] == -1) {
            strncpy(buf, d_2289_338c, 13);
            buf[13] = 0;
            strcpy(name, f_1bd3_100b(buf));
            strncpy(buf, d_2289_3399, 12);
            buf[12] = 0;
            strcat(lines[17], f_1bd3_100b(buf));
            sprintf(buf, " %d", d_2289_338b + 1892);
        } else {
            strcpy(name, f_14bc_483d(d_2289_c46c[6][team]));
            if (d_2289_c46c[7][team] < 80)
                sprintf(buf, "%.12s %s", f_14bc_3523(d_2289_c46c[7][team]), d_2289_3200);
            else
                sprintf(buf, "<%.12s> %s", d_54d9_0000[d_2289_c46c[7][team] - 140], d_2289_3200);
        }
        strcat(lines[17], buf);
        if (strlen(name) > 12)
            strcpy(name, name + 2);
        strcat(lines[16], name);
    }

    /* goals in a match */
    f_14bc_3672(1.125, 21.0, 1, 14, 0x7e, " GOALS IN A MATCH");
    sprintf(d_2289_3160, "%d", d_2289_d5ec[team]);
    if (strcmp(d_2289_3160, "0")) {
        if (d_2289_c46c[8][team] == -1) {
            strncpy(buf, d_2289_33a7, 13);
            buf[13] = 0;
            strcpy(d_2289_4e3a, f_1bd3_100b(buf));
            strncpy(buf, d_2289_33b4, 12);
            buf[12] = 0;
            strcpy(d_2289_3110, f_1bd3_100b(buf));
            sprintf(lines[19], " %d", d_2289_33c0 + 1892);
        } else {
            strcpy(d_2289_4e3a, f_14bc_483d(d_2289_c46c[9][team]));
            sprintf(d_2289_3110, "%.12s", f_14bc_3523(d_2289_c46c[8][team]));
            sprintf(lines[19], " %s", d_2289_3200);
        }
        sprintf(lines[18], " %s -  %s", d_2289_4e3a, d_2289_3160);
    }

    for (p = pos, d_60ae_da6c = 0; d_60ae_da6c <= 19; d_60ae_da6c++, p++)
        f_14bc_3672(p->x, p->y, p->bg, p->fg, p->w, lines[d_60ae_da6c]);
    f_14bc_60da();
    f_14bc_50f8(2, 1.25, 22.5, 1, 4, 0x12d, "                 DONE");
    do
        d_60ae_dda0 = f_14bc_5635(d_60ae_dd56);
    while (d_60ae_dda0 <= 0);
}

/* a club's history: its league and cup record over the last ten seasons */
void f_96bb_5f8e(int team)
{
    FILE *fp;
    char buf[12][80];
    int i;

    f_1bd3_1a23(2);
    fp = fopen(d_2289_0028, "rb+");
    fseek(fp, (long)team * 279, 0);
    fread(d_2289_32aa, 1, 279, fp);
    fclose(fp);
    f_14bc_60ca();
    f_14bc_000b(1.25, team, "History");
    f_14bc_3672(1.125, 4.0, 0, 1, 0x130, "LEAGUE, FA CUP AND LEAGUE CUP");
    f_14bc_3672(1.125, 5.25, 1, 12, 0x22, " YEAR");
    f_14bc_3672(5.625, 5.25, 1, 12, 0x1c, " DIV");
    f_14bc_3672(9.375, 5.25, 1, 12, 0x12, "POS");
    f_14bc_3672(11.875, 5.25, 1, 12, 0x12, " W");
    f_14bc_3672(14.375, 5.25, 1, 12, 0x12, " D");
    f_14bc_3672(16.875, 5.25, 1, 12, 0x12, " L");
    f_14bc_3672(19.375, 5.25, 1, 12, 0x12, " F");
    f_14bc_3672(21.875, 5.25, 1, 12, 0x12, " A");
    f_14bc_3672(24.375, 5.25, 1, 12, 0x12, "PTS");
    f_14bc_3672(26.875, 5.25, 1, 12, 0x30, " FA CUP");
    f_14bc_3672(33.125, 5.25, 1, 12, 0x30, " LG CUP");
    f_14bc_3672(1.125, 16.75, 0, 1, 0x130, "EUROPEAN AND OTHER CUPS");
    for (d_60ae_da6a = 0; d_60ae_da6a <= 1; d_60ae_da6a++) {
        f_14bc_3672(d_60ae_da6a * 19.125 + 1.125, 18.0, 1, 12, 0x22, " YEAR");
        f_14bc_3672(d_60ae_da6a * 19.125 + 5.625, 18.0, 1, 12, 0x73, " ACHIEVEMENT");
    }
    for (d_60ae_da6e = 0; d_60ae_da6e <= 11; d_60ae_da6e++)
        strcpy(buf[d_60ae_da6e], "");
    for (i = 1; i <= 10; i++) {
        memcpy(d_2289_320a, d_2289_329e[i], 12);
        d_2289_320a[12] = 0;
        d_60ae_d85f = i + 5.5;
        if (i < 6) {
            d_60ae_d85b = 1.125;
            d_60ae_da68 = i + 18;
        } else {
            d_60ae_d85b = 20.25;
            d_60ae_da68 = i + 13;
        }
        d_60ae_da66 = d_2289_320a[0] + 1892;
        if (d_60ae_da66 > 1892 && d_60ae_dd98 + 1991 > d_60ae_da66) {
            sprintf(buf[0], " %d", d_60ae_da66);
            d_60ae_dd3c = (unsigned char)d_2289_320a[1] - 32;
            if (d_60ae_dd3c < 80) {
                sprintf(buf[1], " %s", f_14bc_4b12(d_60ae_dd3c / 20 + 1, 3));
                sprintf(buf[2], "%3d", d_60ae_dd3c % 20 + 1);
                for (d_60ae_da64 = 3; d_60ae_da64 <= 8; d_60ae_da64++)
                    sprintf(buf[d_60ae_da64], "%3d", (unsigned char)d_2289_320a[d_60ae_da64 - 1] - 32);
            } else
                strcpy(buf[1], " NLG");
            d_60ae_da62 = (unsigned char)d_2289_320a[8] - 32;
            if (d_60ae_da62 > 0)
                sprintf(buf[9], " %s", f_96bb_6ee2(d_60ae_da62));
            d_60ae_da60 = (unsigned char)d_2289_320a[9] - 32;
            if (d_60ae_da60 > 0)
                sprintf(buf[10], " %s", f_96bb_6fde(d_60ae_da60));
            d_60ae_da5e = (unsigned char)d_2289_320a[11] - 32;
            if (d_60ae_da5e > 0) {
                d_60ae_da5c = (unsigned char)d_2289_320a[10] - 32;
                sprintf(buf[11], " %s", f_96bb_70c0(d_60ae_da5e, d_60ae_da5c));
            }
        }
        f_14bc_3672(1.125, d_60ae_d85f, 1, 4, 0x22, buf[0]);
        f_14bc_3672(d_60ae_d85b, d_60ae_da68, 1, 4, 0x22, buf[0]);
        strcpy(buf[0], "");
        f_14bc_3672(5.625, d_60ae_d85f, 6, 3, 0x1c, buf[1]);
        strcpy(buf[1], "");
        for (d_60ae_da64 = 2; d_60ae_da64 <= 8; d_60ae_da64++) {
            f_14bc_3672((d_60ae_da64 - 2) * 2.5 + 9.375, d_60ae_d85f, 1, i & 1 ? 8 : 14, 0x12, buf[d_60ae_da64]);
            strcpy(buf[d_60ae_da64], "");
        }
        f_14bc_3672(26.875, d_60ae_d85f, 1, i & 1 ? 2 : 9, 0x30, buf[9]);
        strcpy(buf[9], "");
        f_14bc_3672(33.125, d_60ae_d85f, 1, i & 1 ? 2 : 9, 0x30, buf[10]);
        strcpy(buf[10], "");
        f_14bc_3672(d_60ae_d85b + 4.5, d_60ae_da68, 1, i & 1 ? 8 : 14, 0x73, buf[11]);
        strcpy(buf[11], "");
    }
    f_14bc_60da();
    f_14bc_58db(0);
}

/* records a cup's winner and runner-up for this season, shifting the table up when full */
void f_96bb_6852(int cup, int winner, int runner)
{
    if (d_60ae_dd98 <= 16)
        d_60ae_dccc = d_60ae_dd98 - 1;
    else {
        for (d_60ae_dd68 = 0; d_60ae_dd68 <= 14; d_60ae_dd68++)
            for (d_60ae_dd92 = 0; d_60ae_dd92 <= 2; d_60ae_dd92++)
                d_2289_58d8[d_60ae_dd92][d_60ae_dd68][cup] = d_2289_58d8[d_60ae_dd92][d_60ae_dd68 + 1][cup];
        d_60ae_dccc = 15;
    }
    d_2289_58d8[0][d_60ae_dccc][cup] = d_60ae_dd98;
    d_2289_58d8[1][d_60ae_dccc][cup] = winner;
    d_2289_58d8[2][d_60ae_dccc][cup] = runner;
}

/* the past winners screen */
void f_96bb_6929(void)
{
    int i;
    char buf[160];

    f_14bc_60ca();
    f_14bc_4bd3("Past Winners");
    f_14bc_3672(1.125, 5.25, 0, 6, 0, " Year ");
    f_14bc_3672(5.875, 5.25, 0, 6, 0x5c, " Winners");
    f_14bc_3672(17.625, 5.25, 0, 6, 0x5c, " Runners up");
    f_14bc_60da();
    for (d_60ae_dd68 = 0; d_60ae_dd68 <= 6; d_60ae_dd68++)
        f_96bb_6d89(d_60ae_dd68, 0);
    f_14bc_50f8(2, 1.25, 22.5, 1, 4, 0x12d, "                 Done");
    f_14bc_60ca();
    i = 0;
    do {
        f_96bb_6d89(i, -1);
        sprintf(buf, " Past %s", d_60ae_472a[i]);
        if (i > 0)
            strcat(buf, " Winners");
        f_14bc_3672(1.125, 4.0, 0, 1, 0x130, buf);
        for (d_60ae_dd68 = 0; d_60ae_dd68 <= 15; d_60ae_dd68++) {
            d_60ae_dd48 = d_60ae_dd68 & 1 ? 15 : 3;
            if (d_2289_58d8[0][d_60ae_dd68][i] > 0) {
                sprintf(buf, " %d", d_2289_58d8[0][d_60ae_dd68][i] + 1991);
                f_14bc_3672(1.125, d_60ae_dd68 + 6.25, 1, 4, 0x24, buf);
                sprintf(buf, " %s", f_14bc_3523(d_2289_58d8[1][d_60ae_dd68][i]));
                f_14bc_3672(5.875, d_60ae_dd68 + 6.25, 1, d_60ae_dd48, 0x5c, buf);
                sprintf(buf, " %s", f_14bc_3523(d_2289_58d8[2][d_60ae_dd68][i]));
                f_14bc_3672(17.625, d_60ae_dd68 + 6.25, 1, d_60ae_dd48, 0x5c, buf);
            } else {
                f_14bc_3672(1.125, d_60ae_dd68 + 6.25, 1, 4, 0x24, "");
                f_14bc_3672(5.875, d_60ae_dd68 + 6.25, 1, d_60ae_dd48, 0x5c, "");
                f_14bc_3672(17.625, d_60ae_dd68 + 6.25, 1, d_60ae_dd48, 0x5c, "");
            }
        }
        f_14bc_60da();
        do {
            d_60ae_dda0 = f_14bc_5635(-1);
            if (d_60ae_dda0 == 0 && f_1bd3_0c0e() >= 0xec && f_1bd3_0c0e() <= 0x138
                && f_1bd3_0c06() >= 0x24 && f_1bd3_0c06() <= 0xa7)
                d_60ae_dda0 = (f_1bd3_0c06() - 36) / 19 + 2;
        } while (d_60ae_dda0 <= 0 || i + 2 == d_60ae_dda0 || d_60ae_dda0 > 9);
        if (d_60ae_dda0 > 1) {
            f_96bb_6d89(i, 0);
            i = d_60ae_dda0 - 2;
            f_1bd3_0821(8, 0x2c, 0xe8, 0xaa);
        }
    } while (d_60ae_dda0 != 1);
}

/* one competition's button of the past winners screen, highlighted when c */
void f_96bb_6d89(int n, char c)
{
    char buf[160];
    int len;

    f_1bd3_08cb(c ? 25 : 18);
    f_1bd3_08e1(236, n * 19 + 36, 312, n * 19 + 53);
    f_1bd3_08d6(25);
    f_1bd3_0928(236, n * 19 + 36, 312, n * 19 + 53);
    len = f_1bd3_0b69(d_60ae_472a[n], " ");
    strcpy(buf, d_60ae_472a[n]);
    buf[len - 1] = 0;
    f_14bc_356a(275 - strlen(buf) * 3 + 8, n * 19 + 44, 1, buf);
    strcpy(buf, f_1bd3_0f83(d_60ae_472a[n], len + 1, 100));
    f_14bc_356a(275 - strlen(buf) * 3 + 8, n * 19 + 51, 1, buf);
}

/* the name of a cup round by its week */
char far *f_96bb_6ee2(int round)
{
    char far *s;

    s = f_1bd3_0efb();
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
    strcpy(d_2289_30c0, f_1bd3_100b(s));
    if (round < 70)
        strcat(d_2289_30c0, " ROUND");
    return s;
}

/* the name of a cup round by its week (CM1's f_9100_7482) */
char far *f_96bb_6fde(int round)
{
    char far *s;

    s = f_1bd3_0efb();
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
    strcpy(d_2289_30c0, f_1bd3_100b(s));
    if (round < 55)
        strcat(d_2289_30c0, " ROUND");
    return s;
}

/* a European / Anglo-Italian cup's round name, "CUP ROUND" */
char far *f_96bb_70c0(int round, int cup)
{
    char far *s;

    s = f_1bd3_0efb();
    if (cup == 3)
        strcpy(d_2289_3070, "A/I CUP");
    else if (cup == 4)
        strcpy(d_2289_3070, "UEFA CUP");
    else if (cup == 5)
        strcpy(d_2289_3070, "C/W CUP");
    else if (cup == 6)
        strcpy(d_2289_3070, "EURO CUP");
    switch (round) {
    case 21: strcpy(d_2289_3020, "PRELIMS"); break;
    case 29: case 37:
        if (d_60ae_dd26 == 3)
            strcpy(d_2289_3020, "QUALS");
        else
            strcpy(d_2289_3020, "1ST RND");
        break;
    case 47:
        if (d_60ae_dd26 == 3)
            strcpy(d_2289_3020, "INT");
        else
            strcpy(d_2289_3020, "2ND RND");
        break;
    case 57: strcpy(d_2289_3020, "GROUPS"); break;
    case 69:
        if (d_60ae_dd26 == 3)
            strcpy(d_2289_3020, "SEMIS");
        else
            strcpy(d_2289_3020, "3RD RND");
        break;
    case 77: strcpy(d_2289_3020, "SEMIS"); break;
    case 86: case 89: case 91: case 97: strcpy(d_2289_3020, "FINAL"); break;
    case 100: strcpy(d_2289_3020, "WINNERS"); break;
    }
    strcpy(d_2289_30c0, d_2289_3020);
    d_60ae_dd68 = f_1bd3_0b1b(d_2289_3020, "RND");
    if (d_60ae_dd68 > 0)
        strcpy(&d_2289_30c0[d_60ae_dd68 - 1], "ROUND");
    sprintf(s, "%s %s", d_2289_3070, d_2289_3020);
    return s;
}
