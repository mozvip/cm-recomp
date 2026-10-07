/* @at 93a1:0000 */
/* @data 61eb:4640 */
/* @module */

/* Overlay 93a1. */
#include <string.h>
#include <stdio.h>
#include <mem.h>

/* the functions, in the reverse order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
int f_93a1_0000(int team, int x);
void f_93a1_0152(int team, int x);
int f_93a1_08a5(int x);
void f_93a1_08e4(int team);
void f_93a1_0d0f(float x, float y, int c, int c2, int type, int team);
char far *f_93a1_12de(int manager, int type);
void f_93a1_13fc(void);
void f_93a1_16a1(int club);
void f_93a1_172a(int team, char far *s);
char far *f_93a1_1767(int n);
void f_93a1_17cb(void);
void f_93a1_19dc(void);
void f_93a1_1b40(void);
void f_93a1_1cfb(void);
void f_93a1_205e(void);
void f_93a1_2685(int team);
void f_93a1_2bd4(void);
void f_93a1_2ec2(void);
void f_93a1_3315(int player, int age, int games, int rating);
void f_93a1_3489(void);
void f_93a1_3a6f(void);
void f_93a1_435f(int team, int other, int a, int b);
void f_93a1_4402(int team, int other, int a, int b);
void f_93a1_44a5(int team, int other, long v);
void f_93a1_4531(int team, int other, long v);
void f_93a1_45de(int team, int a, int player, int b);
void f_93a1_4636(int team, int row, int v);
void f_93a1_467a(int player, int from, int to, long fee);
void f_93a1_46fa(int player, int from, int to, long fee);
void f_93a1_477a(int team, int player, int a, int b, int c);
void f_93a1_482d(int team);
void f_93a1_57bd(int team);
void f_93a1_5e04(int cup, int winner, int runner);
void f_93a1_5eda(void);
void f_93a1_6290(int n, char c);
char far *f_93a1_63d8(int round);
char far *f_93a1_64b0(int round, int cup);

char far *unmapped_f_9c01_6630(int round);
char far *unmapped_f_9c01_6728(int round);
struct staffbox { /* 6-byte entries at 69da:45fa */ unsigned char x1, y1; int x2; unsigned char y2, colour; };
struct staffpanel { /* 10-byte entries at 69da:4618 */ float x, y; unsigned char a, b; };
struct recpos { float x, y; int bg, fg, w; };
void f_1a83_0007(float x, int team, char far *title);
void f_1a83_0b12(int n, char far *s);
void f_1a83_0b7d(char far *s);
void f_1a83_0bb7(char far *s);
char f_1a83_2ad4(int x);
void f_1a83_2da6(int n, char far *title, char far *items);
void f_1a83_3122(int last);
void f_1a83_3450(float x, float y, int bg, int fg, int w, char far *s);
void f_1a83_3a43(float x, float y, int colour, char far *s);
void f_1a83_4327(float x, float y, int team);
char far *f_1a83_4686(int manager, char full);
void f_1a83_48f9(char far *title);
void f_1a83_4d96(int a, float x, float y, int c, int d, int e, char far *s);
void f_1a83_5117(int a, char b);
int f_1a83_5296(int a);
void f_1a83_5ccd(void);
unsigned char f_1a83_6d8b(unsigned char team);
void f_1a83_5ce1(void);
void f_215d_088c();
void f_215d_08aa(int x1, int y1, int x2, int y2);
int f_215d_0c08(void);
int f_215d_0c14(void);
void far *f_215d_1629(int handle, int page);
void f_8e0f_1c7b(int a, int b, int bg, int fg, char far *s1, char far *s2);
void f_8e0f_2815(void);
void f_8e0f_4ad9(int club, int n);
char f_8e0f_5091(int p, int team, int x);
extern char far d_432e_d7b5[];
extern char far d_432e_d78d[];
extern char far d_432e_bf27[];
extern char far d_432e_bca7[];
extern char far d_432e_66ae[][4][23];
extern unsigned char far d_432e_39c2[];
extern unsigned char far d_3334_cee2[];
extern unsigned char far d_3334_d16c[];
extern unsigned char far d_3334_d680[];
extern int far d_3334_ca6e[][38];
extern int far d_28d4_1928[];
extern char far * far d_53fc_0650[];
extern char near *d_61eb_b0ec[];
extern char d_61eb_da26;
extern char d_61eb_da21;
extern char d_61eb_da18;
extern char d_61eb_da04;
extern char d_61eb_d9df;
extern char d_61eb_d9ca;
extern unsigned char d_61eb_d9b9;
extern int d_61eb_d872;
extern int d_61eb_d870;
extern int d_61eb_d868;
extern int d_61eb_d83e;
extern int d_61eb_d83c;
extern int d_61eb_d83a;
extern int d_61eb_d832;
extern int d_61eb_d82e;
extern int d_61eb_d72a;
extern int d_61eb_d6ba;
extern int d_61eb_d6aa;
extern int d_61eb_d61a;
extern int d_61eb_d5fc;
extern int d_61eb_d5f8;
extern int d_61eb_d5f4;
extern int d_61eb_d5f0;
extern int d_61eb_d5e8;
extern int d_61eb_d5e2;
extern int d_61eb_d59e;
extern int far *d_61eb_dba8;
extern int d_61eb_dc46;
extern char far d_432e_d855[];
extern unsigned char far d_3334_bea2[];
extern char d_61eb_da27;
extern int d_61eb_d874;
int f_1a83_440f(int team);
char far *f_215d_0f2d(void);
int f_215d_1343(int a, int b);
int f_215d_13af(int a, int b);
void f_8402_14c0(int team, int delta);
extern char far d_5313_d8a5[];
extern unsigned char far d_3334_db94[][650];
extern int far d_432e_c91c[][80];
extern unsigned char far d_3334_be52[];
extern int far d_53fc_0894[][5];
extern int far d_53fc_138e[][2][100];
extern long d_61eb_db5d;
extern long d_61eb_db59;
extern char d_61eb_da28;
extern int d_61eb_d878;
extern int d_61eb_d876;
extern int d_61eb_d73a;
extern int d_61eb_d5de;
extern int d_61eb_d59a;
void f_1a83_5844(int team, char far *title, char far *text);
long f_215d_0d96(long n);
int f_215d_0dcc(char far *path);
void f_215d_13f1(void far *a, void far *b, int n);
void f_215d_19eb();
void f_9a9e_41bc(void);
long f_9f8d_1ec1(int team);
char f_ab30_01ba(char team);
void f_ab30_5ded(char a);
void f_ab30_5f57(char a, int i, int n);
extern char far d_5313_0e1f[];
extern char far d_5313_0df7[];
extern char far d_5313_0dcf[];
extern unsigned char far d_432e_225a[][140];
extern unsigned char far d_432e_1a96[];
extern long far d_432e_0d8e[][2];
extern long far d_3334_cc82[][38];
extern int far d_432e_c92e[];
extern int far d_432e_0000[][100];
extern unsigned char far d_53fc_09c0[][502];
extern unsigned char far d_53fc_0fa2[];
extern char d_61eb_da4d;
extern char d_61eb_da2e;
extern int d_61eb_d87e;
extern int d_61eb_d87c;
extern int d_61eb_d650;
extern int d_61eb_d62a;
extern int d_61eb_d5f6;
extern int d_61eb_d5dc;
extern int d_61eb_d5d8;
extern int d_61eb_d5aa;
extern char far *d_61eb_dbdc;
extern long far *d_61eb_dbb0;
extern int d_61eb_dc60;
extern int d_61eb_dc4a;
void f_87dc_182c(int p, char all);
void f_8e0f_3192(int staff, int team, char c);
void f_8e0f_3e07(int club, int a);
void f_9a9e_43ba(int a, int b);
void f_9a9e_45df(int a, int b);
void f_9f8d_08a7(int a, int b);
void f_9f8d_1ede(void);
void f_a7b6_05a9(int player, int team, char c);
void f_a7b6_30ee(int player);
void f_b26d_0000(char team, char n);
void f_ab30_5a33(void);
void f_ab30_5c8d(void);
extern unsigned char far d_432e_0668[];
extern unsigned char far d_432e_0640[];
extern unsigned char far d_432e_063e[];
extern unsigned char far d_432e_063d[];
extern int far d_432e_0410[][80];
extern unsigned char far d_432e_d3f6[];
extern unsigned char far d_432e_de1e[];
extern unsigned char far d_432e_e0a8[];
extern unsigned char far d_432e_e332[];
extern unsigned char far d_3334_fe98[][1860];
extern unsigned char far d_28d4_1958[][1500];
extern FILE *d_61eb_0094;
extern unsigned char far d_53fc_778e[][140];
extern char near *d_61eb_b13c[];
extern char near *d_61eb_b18c[];
extern int d_61eb_d9a6;
extern int d_61eb_d8b6;
extern int d_61eb_d8b4;
extern int d_61eb_d8b2;
extern int d_61eb_d88c;
extern int d_61eb_d86a;
extern int d_61eb_d852;
extern int d_61eb_d800;
extern int d_61eb_d7be;
extern int d_61eb_d7bc;
extern int d_61eb_d7b6;
extern int d_61eb_d75e;
extern int d_61eb_d5e6;
extern int d_61eb_d5e4;
extern int d_61eb_d5b8;
extern int d_61eb_d5a4;
extern int d_61eb_d598;
extern int d_61eb_d590;
extern int d_61eb_d58e;
extern char (far *d_61eb_dbd8)[101];
extern unsigned char (far *d_61eb_dbcc)[1500];
extern int (far *d_61eb_dbb8)[1500];
extern int d_61eb_dc58;
extern int d_61eb_dc5e;
extern int d_61eb_dc4e;
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
extern struct flags_w far d_432e_45de[];
long f_1a83_01d6(int p, int n);
long f_1a83_0cef(long v, char c);
char far *f_1a83_4485(int player);
char far *f_1a83_462c(int player);
float f_215d_10c4(void);
extern unsigned char far d_3334_beca[];
extern unsigned char far d_432e_bf42[][82];
extern long d_61eb_db61;
extern char d_61eb_da32;
extern char d_61eb_da31;
extern char d_61eb_da30;
extern int d_61eb_d858;
extern long far *d_61eb_dbac;
extern int d_61eb_dc48;
extern unsigned char far d_28d4_82d0[];
long f_215d_135c(long a, long b);
extern long far d_432e_cda2[];
extern unsigned char far d_432e_0052[];
extern unsigned char far d_432e_147c[];
extern unsigned char far d_432e_1626[];
extern long d_61eb_db69;
extern long d_61eb_db65;
extern float d_61eb_da71;
extern int d_61eb_d8bc;
extern int d_61eb_d8ba;
extern int d_61eb_d8b8;
char far *f_1a83_3300(int x);
char far *f_1a83_45b4(int player);
int f_9f8d_0000(int x);
extern char far d_5313_dc15[];
extern char far d_5313_dbc5[];
extern char far d_5313_daa1[][12];
extern char far d_5313_daad[];
extern char far d_5313_dab9[];
extern char far d_5313_db25[];
extern char far d_5313_db31;
extern char far d_5313_db32[];
extern char far d_5313_db3e;
extern char far d_5313_db3f[];
extern char far d_5313_db4b;
extern char far d_5313_db4c[];
extern char far d_5313_db58;
extern char far d_5313_db59[];
extern char far d_5313_db66;
extern char far d_5313_db67[];
extern char far d_5313_db74;
extern char far d_5313_db75[];
extern char far d_5313_db82[];
extern char far d_5313_db8e;
extern char far d_5313_db8f[];
extern char far d_5313_db9c[];
extern char far d_5313_dba8;
extern char far d_5313_dba9;
extern char far d_5313_dbaa[];
extern char far d_5313_dbb7[];
extern char far d_5313_dbc3;
extern float far d_432e_33c6[];
extern int far d_432e_26ba[][140];
extern unsigned char far d_432e_1f9e[][140];
extern unsigned char far d_432e_03d8[];
extern unsigned char far d_432e_042a[];
extern unsigned char far d_432e_c00a[];
extern unsigned char far d_432e_c05c[];
extern int far d_28d4_1300[][38];
extern float far d_28d4_0fd4[];
extern int far d_28d4_bc9c[];
extern char far * far d_53fc_057a[];
extern int d_61eb_d8ca;
extern int d_61eb_d8c8;
extern int d_61eb_d8c6;
extern int d_61eb_d8c4;
extern int d_61eb_d8ac;
extern long (far *d_61eb_dbc8)[140];
extern int d_61eb_dc56;
char far *f_215d_1043(char far *s);
char far *f_1a83_47e8(int n);
char far *f_1a83_4876(int division, char full);
extern char far d_5313_dd0f[];
extern char far d_5313_dcbf[];
extern char far d_5313_dc6f[];
extern char far d_5313_dc65[];
extern char far d_5313_d6ed[];
extern char far d_5313_d4bb[];
extern char far d_5313_bfe5[];
extern char far d_5313_bf45[];
extern unsigned char far d_432e_202a[];
extern unsigned char far d_432e_20b6[];
extern unsigned char far d_432e_2142[];
extern unsigned char far d_432e_21ce[];
extern unsigned char far d_432e_262e[];
extern int far d_28d4_134c[];
extern char far * far d_53fc_bce0[];
extern int d_61eb_d8d0;
extern int d_61eb_d8ce;
extern int d_61eb_d8cc;
void f_1a83_5540(int a);
extern float d_61eb_dae5;
extern float d_61eb_dae1;
extern int d_61eb_d8e0;
extern int unmapped_d_69da_dcd4;
extern int unmapped_d_69da_dcd2;
extern int d_61eb_d8da;
extern int d_61eb_d8d8;
extern int d_61eb_d8d6;
extern int d_61eb_d8d4;
extern int d_61eb_d8d2;
void f_1a83_3347(int x, int y, int colour, char far *s);
void f_215d_07ec(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_215d_089b();
void f_215d_0904(int x1, int y1, int x2, int y2);
unsigned f_215d_0b10(char far *s, char far *set);
unsigned f_215d_0b64(char far *s, char far *set);
char far *f_215d_0fb6(char far *s, unsigned i, unsigned n);
extern char far d_5313_ddff[];
extern char far d_5313_ddaf[];
extern char far d_5313_dd5f[];
extern int far d_5313_b2eb[3][16][8];
extern int d_61eb_d66c;
extern int d_61eb_d5d0;
extern unsigned char far d_3334_bdb2[][40];
extern int far d_3334_c8f2[][38];
extern int far d_3334_c9d6[];
extern char far d_432e_d8a5[];
extern char far d_5313_0e38[];
extern char far d_5313_0e10[];
extern char far d_5313_0de8[];
extern unsigned char far d_3334_de1e[];
extern unsigned char far d_3334_e0a8[];
extern unsigned char far d_3334_e332[];
extern unsigned char far d_3334_0000[][1500];
extern int d_61eb_d592;
extern int d_61eb_d594;
extern int d_61eb_d596;
extern int far d_28d4_0018[];
extern unsigned char far d_3334_bdda[];
extern unsigned char far d_3334_c73a[];
extern unsigned char far d_3334_c802[];
extern long far d_3334_ce4a[];
extern unsigned char far d_3334_bf92[];
extern unsigned char far d_3334_bfba[];
extern unsigned char far d_3334_bfe2[];
extern unsigned char far d_3334_c00a[];
extern char far d_432e_daa1[][12];
extern char far d_432e_daad[];
extern char far d_432e_dab9[];
extern char far d_432e_db25[];
extern char far d_432e_db31;
extern char far d_432e_db32[];
extern char far d_432e_db3e;
extern char far d_432e_db3f[];
extern char far d_432e_db4b;
extern char far d_432e_db4c[];
extern char far d_432e_db58;
extern char far d_432e_db59[];
extern char far d_432e_db66;
extern char far d_432e_db67[];
extern char far d_432e_db74;
extern char far d_432e_db75[];
extern char far d_432e_db82[];
extern char far d_432e_db8e;
extern char far d_432e_db8f[];
extern char far d_432e_db9c[];
extern char far d_432e_dba8;
extern char far d_432e_dba9;
extern char far d_432e_dbaa[];
extern char far d_432e_dbb7[];
extern char far d_432e_dbc3;
extern char far d_432e_dbc5[];
extern char far d_432e_dc15[];
extern char far * far d_53fc_0000[];
extern int d_61eb_d59c;
extern char far d_5313_bca7[];
extern unsigned char far d_432e_cee2[];
extern unsigned char far d_432e_d16c[];
extern unsigned char far d_432e_01ec[];
extern char far d_432e_dd0f[];
extern char far d_432e_dcbf[];
extern char far d_432e_dc6f[];
extern char far d_432e_dc65[];
extern char far d_432e_d6ed[];
extern char far d_432e_d4bb[];
extern char far d_432e_bfe5[];
extern char far d_432e_bf45[];
extern char far d_432e_ddff[];
extern char far d_432e_ddaf[];
extern char far d_432e_dd5f[];
extern char far d_5313_d7b5[];
extern char far d_5313_d78d[];
extern char far d_5313_bf27[];
extern char far d_5313_d855[];
extern int far d_432e_b43b[3][16][8];
extern int d_61eb_d8de;

/* the competitions' names (room for 8, as in the first Italia): their strings head the
 * literal pool */
static char far *d_61eb_4640[8] = {
    "League Champions", "Italian Cup", "Anglo-Ital Cup", "UEFA Cup", "Cup Winners Cup",
    "European Cup"
};

int f_93a1_0000(int team, int x)
{
    char buf[320];

    memset(d_432e_39c2, 0, 60);
    d_61eb_d868 = -1;
    strcpy(d_432e_d78d, f_93a1_1767(x));
    do {
        sprintf(buf, "Appoint %s", d_432e_d78d);
        f_1a83_48f9(buf);
        f_1a83_4327(1.0, 4.0, team);
        f_1a83_2da6(7, "", "Own Search|Board Decision|");
        f_1a83_3122(1);
        d_61eb_d82e = d_61eb_d59e;
        if (d_61eb_d82e == 0) {
            memset(d_432e_39c2, 0, 60);
            d_61eb_dba8 = f_215d_1629(d_61eb_dc46, 1);
            memset(d_61eb_dba8, -1, 0xbb8);
            f_8e0f_1c7b(11, 14, 1, 2, "Age", "35-40|40-50|50-60|60+|");
            if (d_61eb_d9ca == 0) {
                f_8e0f_1c7b(16, 18, 1, 2, "Division", "Serie A|Serie B|Unemployed|");
                if (d_61eb_d9ca == 0) {
                    f_8e0f_1c7b(20, 25, 1, 2, "Reputation", "Unknown|Poor|Fair|Good|Very Good|Superb|");
                    if (d_61eb_d9ca == 0)
                        f_93a1_0152(team, x);
                }
            }
        }
    } while ((d_61eb_d82e != 0 || d_61eb_d868 == -1) && d_61eb_d82e != 1);
    return d_61eb_d868;
}

void f_93a1_0152(int team, int x)
{
    int n;
    int j;
    char buf[320];

    n = 0;
    f_1a83_48f9("");
    f_1a83_3a43(-1.0, 12.5, 1, "Searching");
    for (j = 1; j <= 2; j++)
        for (d_61eb_d5f4 = 0; d_61eb_d5f4 <= 0x285; d_61eb_d5f4++) {
            d_61eb_d9df = -1;
            if (d_3334_cee2[d_61eb_d5f4] != team && j == 1)
                d_61eb_d9df = 0;
            if (d_61eb_d9df != 0 && d_3334_cee2[d_61eb_d5f4] == team && j == 2)
                d_61eb_d9df = 0;
            if (d_61eb_d9df != 0 && d_3334_ca6e[x][team] == d_61eb_d5f4)
                d_61eb_d9df = 0;
            if (d_3334_cee2[d_61eb_d5f4] != d_61eb_d72a) {
                if (d_61eb_d9df != 0) {
                    d_61eb_da18 = 0;
                    if (d_432e_39c2[15] != 0)
                        d_61eb_da18 = -1;
                    else {
                        d_61eb_d83a = d_3334_d16c[d_61eb_d5f4];
                        if (d_61eb_d83a <= 40)
                            d_61eb_da18 = d_432e_39c2[11];
                        else if (d_61eb_d83a <= 50)
                            d_61eb_da18 = d_432e_39c2[12];
                        else if (d_61eb_d83a <= 60)
                            d_61eb_da18 = d_432e_39c2[13];
                        else
                            d_61eb_da18 = d_432e_39c2[14];
                    }
                    if (d_61eb_da18 == 0)
                        d_61eb_d9df = 0;
                }
                if (d_61eb_d9df != 0 && d_432e_39c2[19] == 0)
                    if (d_3334_cee2[d_61eb_d5f4] == 0xff && d_432e_39c2[18] == 0
                        || d_3334_cee2[d_61eb_d5f4] < 0xff && d_432e_39c2[16 + f_1a83_6d8b(d_3334_cee2[d_61eb_d5f4])] == 0)
                        d_61eb_d9df = 0;
                if (d_61eb_d9df != 0 && d_432e_39c2[26] == 0) {
                    strcpy(d_432e_d7b5, f_93a1_12de(d_61eb_d5f4, x));
                    if (d_432e_39c2[20 + d_61eb_d5f8] == 0)
                        d_61eb_d9df = 0;
                }
            }
            if (d_61eb_d9df != 0) {
                n++;
                d_61eb_dba8 = f_215d_1629(d_61eb_dc46, 1);
                d_61eb_dba8[n - 1] = d_61eb_d5f4;
            }
        }
    if (n > 0) {
        d_61eb_d83c = 1;
        do {
            sprintf(buf, "New %s %s", (char far *)d_61eb_b0ec[team], d_432e_d78d);
            f_1a83_5ccd();
            f_1a83_48f9(buf);
            f_1a83_3450(1.125, 4.5, 0, 1, 72, " NAME");
            f_1a83_3450(10.375, 4.5, 0, 1, 78, " CLUB");
            f_1a83_3450(20.375, 4.5, 0, 1, 22, " YR");
            f_1a83_3450(23.375, 4.5, 0, 1, 72, " CHARACTER");
            f_1a83_3450(32.625, 4.5, 0, 1, 52, " REP");
            f_1a83_5ce1();
            f_8e0f_2815();
            d_61eb_d6aa = 0;
            for (d_61eb_d61a = d_61eb_d83c; d_61eb_d83c + 14 >= d_61eb_d61a; d_61eb_d61a++) {
                d_61eb_dba8 = f_215d_1629(d_61eb_dc46, 0);
                d_61eb_d5f4 = d_61eb_dba8[d_61eb_d61a - 1];
                if (d_61eb_d5f4 > -1) {
                    d_28d4_1928[d_61eb_d6aa] = d_61eb_d5f4;
                    d_61eb_d6aa++;
                } else
                    d_61eb_d61a = d_61eb_d83c + 14;
            }
            f_1a83_5ccd();
            for (d_61eb_d61a = 1; d_61eb_d61a <= d_61eb_d6aa; d_61eb_d61a++) {
                if (d_61eb_d61a & 1)
                    d_61eb_d5f0 = 2;
                else
                    d_61eb_d5f0 = 9;
                d_61eb_d5f4 = d_28d4_1928[d_61eb_d61a - 1];
                sprintf(buf, " %.11s", f_1a83_4686(d_61eb_d5f4, -1));
                f_1a83_4d96(0, 1.125, d_61eb_d61a + 5, 1, d_61eb_d5f0, 72, buf);
                if (d_3334_cee2[d_61eb_d5f4] < 0xff)
                    strcpy(d_432e_bca7, d_61eb_b0ec[d_3334_cee2[d_61eb_d5f4]]);
                else
                    strcpy(d_432e_bca7, "Unemployed");
                d_61eb_d5f0 = d_3334_cee2[d_61eb_d5f4] == team ? 3 : 12;
                sprintf(buf, " %.12s", d_432e_bca7);
                f_1a83_3450(10.375, d_61eb_d61a + 5, 1, d_61eb_d5f0, 78, buf);
                sprintf(buf, " %d", d_3334_d16c[d_61eb_d5f4]);
                f_1a83_3450(20.375, d_61eb_d61a + 5, 1, 4, 22, buf);
                sprintf(buf, " %s", d_53fc_0650[d_3334_d680[d_61eb_d5f4]]);
                f_1a83_3450(23.375, d_61eb_d61a + 5, 1, 4, 72, buf);
                sprintf(buf, " %s", f_93a1_12de(d_61eb_d5f4, x));
                f_1a83_3450(32.625, d_61eb_d61a + 5, 6, 3, 52, buf);
            }
            f_1a83_5ce1();
            do
                d_61eb_d832 = f_1a83_5296(-1);
            while (d_61eb_d832 < 1);
            if (d_61eb_d832 == 1 && d_61eb_d9b9 < 3)
                d_61eb_d83c -= 15;
            else if (d_61eb_d832 == 3 && d_61eb_d9b9 == 1 || d_61eb_d832 == 2 && d_61eb_d9b9 == 3)
                d_61eb_d83c += 15;
            else if (d_61eb_d832 >= d_61eb_d83e) {
                d_61eb_d6ba = d_61eb_d832 - d_61eb_d83e;
                d_61eb_d5f4 = d_28d4_1928[d_61eb_d6ba];
                sprintf(buf, "Appoint %s", f_1a83_4686(d_61eb_d5f4, 0));
                f_1a83_2da6(0, buf, "Cancel|Appoint Him|");
                if (d_61eb_d59e == 1) {
                    strcpy(d_432e_bf27, f_1a83_4686(d_61eb_d5f4, -1));
                    if (f_8e0f_5091(d_61eb_d5f4, team, x)) {
                        sprintf(buf, "%s accepts the offer", d_432e_bf27);
                        f_1a83_0b7d(buf);
                        d_61eb_d868 = d_61eb_d5f4;
                    } else {
                        sprintf(buf, "%s refuses the offer", d_432e_bf27);
                        f_1a83_0b7d(buf);
                    }
                }
            }
        } while ((d_61eb_d832 != 2 || d_61eb_d9b9 >= 3) && (d_61eb_d832 != 1 || d_61eb_d9b9 <= 2)
                 && d_61eb_d868 == -1);
    } else
        f_1a83_0bb7("Nobody found");
}

int f_93a1_08a5(int x)
{
    switch (x) {
    case 0:
    case 1:
        d_61eb_d5e8 = x;
        break;
    case 2:
    case 3:
    case 4:
    case 5:
        d_61eb_d5e8 = 2;
        break;
    case 6:
        d_61eb_d5e8 = 3;
        break;
    }
    return d_61eb_d5e8;
}

/* the staff screen: its boxes, and where each member of staff is drawn */
static struct staffbox d_61eb_4660[] = {
    {8, 24, 156, 74, 4}, {8, 80, 156, 188, 14}, {164, 24, 312, 66, 3},
    {164, 74, 312, 116, 14}, {164, 124, 312, 166, 14}
};
static struct staffpanel d_61eb_467e[] = {
    {1.375, 5, 1, 28}, {20.875, 5, 1, 31}, {1.375, 12, 1, 24}, {1.375, 16.125, 1, 24},
    {1.375, 20.25, 1, 24}, {20.875, 17.5, 1, 24}, {20.875, 11.25, 1, 24}
};

void f_93a1_08e4(int team)
{
    struct staffbox far *p;
    struct staffpanel far *q;
    int x2[5];
    int x1[5];
    int y2[5];
    int y1[5];
    char buf[320];

    do {
        d_61eb_da04 = 0;
        f_1a83_0007(1.25, team, "Staff");
        p = d_61eb_4660;
        for (d_61eb_d870 = 0; d_61eb_d870 <= 4; d_61eb_d870++, p++) {
            f_215d_088c(16);
            f_215d_08aa(p->x1 + 4, p->y1 + 4, p->x2 + 4, p->y2 + 4);
            f_215d_088c(p->colour + 16);
            f_215d_08aa(p->x1, p->y1, p->x2, p->y2);
            x1[d_61eb_d870] = p->x1;
            x2[d_61eb_d870] = p->x2;
            y1[d_61eb_d870] = p->y1;
            y2[d_61eb_d870] = p->y2;
        }
        q = d_61eb_467e;
        for (d_61eb_d5fc = 0; d_61eb_d5fc <= 6; d_61eb_d5fc++, q++)
            f_93a1_0d0f(q->x, q->y, q->a, q->b, d_61eb_d5fc, team);
        f_1a83_4d96(2, 20.75, 22.25, 1, 4, 0x94, "       DONE");
        if (f_1a83_2ad4(team))
            f_1a83_4d96(2, 35.0, 1.125, 1, 3, 0, "SACK");
        d_61eb_da21 = 0;
        do {
            d_61eb_da26 = 0;
            d_61eb_d59e = f_1a83_5296(d_61eb_d5e2);
            if (d_61eb_d59e == 0 && d_61eb_da21 != 0) {
                d_61eb_d872 = -1;
                for (d_61eb_d870 = 0; d_61eb_d870 <= 4; d_61eb_d870++) {
                    if (f_215d_0c14() >= x1[d_61eb_d870] && f_215d_0c14() <= x2[d_61eb_d870]) {
                        if (d_61eb_d870 == 1) {
                            if (f_215d_0c08() >= 90 && f_215d_0c08() <= 120)
                                d_61eb_d872 = 2;
                            else if (f_215d_0c08() >= 123 && f_215d_0c08() <= 153)
                                d_61eb_d872 = 3;
                            else if (f_215d_0c08() >= 156 && f_215d_0c08() <= 186)
                                d_61eb_d872 = 4;
                        } else if (f_215d_0c08() >= y1[d_61eb_d870] && f_215d_0c08() <= y2[d_61eb_d870]) {
                            switch (d_61eb_d870) {
                            case 2:
                                d_61eb_d872 = 1;
                                break;
                            case 3:
                                d_61eb_d872 = 6;
                                break;
                            case 4:
                                d_61eb_d872 = 5;
                                break;
                            }
                        }
                    }
                }
                if (d_61eb_d872 > -1) {
                    strcpy(d_432e_bf27, f_1a83_4686(d_3334_ca6e[d_61eb_d872][team], 0));
                    sprintf(buf, "Sack %s", d_432e_bf27);
                    f_1a83_48f9(buf);
                    if (d_61eb_d872 >= 2 && d_61eb_d872 <= 5)
                        f_1a83_0b12(5, "Any report will be lost");
                    f_1a83_2da6(d_61eb_d872 >= 2 && d_61eb_d872 <= 5 ? 8 : 5, "", "*Exit|Sack Him|");
                    f_1a83_3122(1);
                    if (d_61eb_d59e == 1) {
                        sprintf(buf, "%s leaves club", d_432e_bf27);
                        f_1a83_0bb7(buf);
                        f_8e0f_4ad9(team, d_61eb_d872);
                        if (d_61eb_d872 >= 2 && d_61eb_d872 <= 5)
                            /* CM93 unmapped_d_2289_ada0[staff][n][0]; in CM94 the displacement is 4512:fbe2, past the end of
                             * 4512's segment (e5a8), so it is folded: e438 + 6058 */
                            d_432e_66ae[d_3334_ca6e[0][team] + 65][d_61eb_d872 + 3][9] = 0;
                    }
                    d_61eb_da04 = -1;
                } else {
                    d_61eb_da21 = 0;
                    f_1a83_5117(2, 0);
                }
            } else if (d_61eb_d59e == 1) {
                d_61eb_da26 = -1;
            } else if (d_61eb_d59e == 2) {
                d_61eb_da21 = !d_61eb_da21;
                f_1a83_5117(2, d_61eb_da21);
            }
        } while (d_61eb_da26 == 0 && d_61eb_da04 == 0);
    } while (!d_61eb_da26);
}

void f_93a1_0d0f(float x, float y, int c, int c2, int type, int team)
{
    char buf[320];

    d_61eb_d874 = d_3334_ca6e[type][team];
    strcpy(d_432e_d855, f_93a1_1767(type));
    if (type == 2)
        strcat(d_432e_d855, "s");
    if (type != 3 && type != 4) {
        sprintf(buf, "%*s", strlen(d_432e_d855) + 12 - strlen(d_432e_d855) / 2, d_432e_d855);
        f_1a83_3450(x, y - 1, c / 16, c % 16, 0x90, buf);
    }
    if (d_61eb_d874 < 0x28a) {
        strcpy(d_432e_bf27, f_1a83_4686(d_61eb_d874, 0));
        sprintf(buf, "%*s", strlen(d_432e_bf27) + 12 - strlen(d_432e_bf27) / 2, d_432e_bf27);
        d_61eb_da27 = type == 2 || type == 3 || type == 4;
        f_1a83_3450(x, y, c2 / 16 - (d_61eb_da27 ? 5 : 0), c2 % 16, 0x90, buf);
        f_1a83_3450(x, y + 1, c2 / 16, c2 % 16, 0x47, " Age");
        sprintf(buf, " %d YRS", d_3334_d16c[d_61eb_d874]);
        f_1a83_3450(x + 9.125, y + 1, c2 / 16, c2 % 16, 0x47, buf);
        f_1a83_3450(x, y + 2, c2 / 16, c2 % 16, 0x47, " Character");
        sprintf(buf, " %s", d_53fc_0650[d_3334_d680[d_61eb_d874]]);
        f_1a83_3450(x + 9.125, y + 2, c2 / 16, c2 % 16, 0x47, buf);
        f_1a83_3450(x, y + 3, c2 / 16, c2 % 16, 0x47, type == 0 ? " Reputation" : " Ability");
        sprintf(buf, " %s", f_93a1_12de(d_61eb_d874, type));
        f_1a83_3450(x + 9.125, y + 3, c2 / 16, c2 % 16, 0x47, buf);
        if (type == 0) {
            f_1a83_3450(x, y + 4, c2 / 16, c2 % 16, 0x47, " Board");
            sprintf(buf, " %d%%", d_3334_bea2[team]);
            f_1a83_3450(x + 9.125, y + 4, c2 / 16, c2 % 16, 0x47, buf);
        }
    } else {
        f_1a83_3450(x, y, c2 / 16, c2 % 16, 0x90, "");
        f_1a83_3450(x, y + 1, c2 / 16, c2 % 16, 0x90, "      The coach is");
        f_1a83_3450(x, y + 2, c2 / 16, c2 % 16, 0x90, "   temporary manager");
        f_1a83_3450(x, y + 3, c2 / 16, c2 % 16, 0x90, "");
    }
    if (type == 0) {
        f_1a83_3450(x, y + 4, c2 / 16, c2 % 16, 0x47, " Board");
        sprintf(buf, " %d%%", d_3334_bea2[team]);
        f_1a83_3450(x + 9.125, y + 4, c2 / 16, c2 % 16, 0x47, buf);
    }
}

/* The rating word of a manager's (type 0: reputation) or a coach's or scout's ability;
   d_61eb_d5f8 gets its rank (0 unknown, 1 poor ... 5 superb). */
char far *f_93a1_12de(int manager, int type)
{
    char far *s;

    s = f_215d_0f2d();
    if (d_3334_d16c[manager] > 35) {
        switch (d_3334_db94[f_93a1_08a5(type)][manager] / 10) {
        case 0: case 1: case 2: case 3: case 4:
            strcpy(s, "Poor");
            d_61eb_d5f8 = 1;
            break;
        case 5: case 6: case 7: case 8: case 9: case 10: case 11:
            strcpy(s, "Fair");
            d_61eb_d5f8 = 2;
            break;
        case 12: case 13: case 14:
            strcpy(s, "Good");
            d_61eb_d5f8 = 3;
            break;
        case 15: case 16:
            strcpy(s, "V Good");
            d_61eb_d5f8 = 4;
            break;
        default:
            strcpy(s, "Superb");
            d_61eb_d5f8 = 5;
            break;
        }
    } else {
        strcpy(s, "Unknown");
        d_61eb_d5f8 = 0;
    }
    return s;
}

void f_93a1_13fc(void)
{
    for (d_61eb_d5de = 0; d_61eb_d5de <= 37; d_61eb_d5de++) {
        d_61eb_d5fc = f_1a83_440f(d_61eb_d5de) - (d_61eb_d5de >= 18 ? 18 : 0);
        d_61eb_d876 = f_215d_13af(f_215d_1343(d_3334_be52[d_61eb_d5de] - 13, 0), 4);
        d_61eb_d878 = (d_3334_bea2[d_61eb_d5de] * (38 - d_61eb_d59a)
                       + d_53fc_0894[d_61eb_d5fc][d_61eb_d876] * d_61eb_d59a) / 38;
        d_61eb_d73a = (d_3334_bea2[d_61eb_d5de] * 3 + d_61eb_d878) / 4 - d_3334_bea2[d_61eb_d5de];
        if (d_61eb_d73a < 0 && d_3334_c8f2[0][d_61eb_d5de] != 0) {
            d_61eb_db59 = d_53fc_138e[d_3334_c8f2[1][d_61eb_d5de]][0][d_3334_c8f2[2][d_61eb_d5de]];
            d_61eb_db5d = d_53fc_138e[d_3334_c8f2[1][d_61eb_d5de]][1][d_3334_c8f2[2][d_61eb_d5de]];
            d_61eb_da28 = d_61eb_d5de == d_61eb_db59 / 32 && d_61eb_db59 % 32 > d_61eb_db5d % 32
                       || d_61eb_d5de == d_61eb_db5d / 32 && d_61eb_db5d % 32 > d_61eb_db59 % 32;
            if (d_61eb_da28)
                d_61eb_d73a = 0;
        }
        f_8402_14c0(d_61eb_d5de, d_61eb_d73a);
        if (f_1a83_2ad4(d_61eb_d5de) && (d_61eb_d59a == 10 || d_61eb_d59a == 20 || d_61eb_d59a == 30)) {
            if (d_53fc_0894[d_61eb_d5fc][d_61eb_d876] < 50)
                f_93a1_172a(d_61eb_d5de, "Our league position is unacceptable.");
            else if (d_53fc_0894[d_61eb_d5fc][d_61eb_d876] == 100)
                f_93a1_172a(d_61eb_d5de, "An excellent league position.");
        }
    }
}

void f_93a1_16a1(int club)
{
    char buf[320];
    unsigned char v;

    v = d_3334_bea2[club];
    if (v <= 24)
        strcpy(d_432e_d8a5, "were going to sack you anyway.");
    else if (v <= 34)
        strcpy(d_432e_d8a5, "are not particularly disappointed.");
    else if (v <= 59)
        strcpy(d_432e_d8a5, "are a little disappointed.");
    else if (v <= 94)
        strcpy(d_432e_d8a5, "are very disappointed at your decision.");
    else if (v <= 99)
        strcpy(d_432e_d8a5, "are astonished at your decision.");
    else
        strcpy(d_432e_d8a5, "think you are a right bandit.");
    sprintf(buf, "We %s", d_432e_d8a5);
    f_93a1_172a(club, buf);
}

void f_93a1_172a(int team, char far *s)
{
    char buf[320];

    sprintf(buf, "%s board message", (char far *)d_61eb_b0ec[team]);
    f_1a83_5844(team, buf, s);
}

char far *f_93a1_1767(int n)
{
    char far *p;

    p = f_215d_0f2d();
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

void f_93a1_17cb(void)
{
    for (d_61eb_d5de = 0; d_61eb_d5de <= 37; d_61eb_d5de++) {
        d_3334_bdb2[5][d_61eb_d5de] = f_215d_0d96(5) + 5;
        if (f_1a83_2ad4(d_61eb_d5de)) {
            d_3334_bdb2[0][d_61eb_d5de] = 8;
            d_3334_bdb2[6][d_61eb_d5de] = 50;
        }
        d_3334_bdb2[7][d_61eb_d5de] = 0;
        d_3334_bdb2[11][d_61eb_d5de] = 2;
        d_3334_bdb2[68][d_61eb_d5de] = 255;
        d_3334_bdb2[69][d_61eb_d5de] = 255;
        d_3334_bdb2[70][d_61eb_d5de] = 255;
        d_3334_c9d6[d_61eb_d5de] = f_215d_0d96(9);
        for (d_61eb_d5aa = (f_1a83_2ad4(d_61eb_d5de) != 0) + 5; d_61eb_d5aa <= 11; d_61eb_d5aa++)
            d_3334_c8f2[d_61eb_d5aa][d_61eb_d5de] = 650;
        switch (f_1a83_6d8b(d_61eb_d5de)) {
        case 0:
            if (d_61eb_da4d == 0) {
                if (f_ab30_01ba(d_61eb_d5de))
                    d_3334_cc82[0][d_61eb_d5de] = f_215d_0d96(1000000L) + 10000000L;
                else
                    d_3334_cc82[0][d_61eb_d5de] = f_215d_0d96(1000000L) + 5000000L;
            }
            d_3334_bdb2[22][d_61eb_d5de] = f_215d_0d96(3);
            break;
        case 1:
            if (d_61eb_da4d == 0)
                d_3334_cc82[0][d_61eb_d5de] = f_215d_0d96(500000L) + 500000L;
            d_3334_bdb2[22][d_61eb_d5de] = f_215d_0d96(3) + 1;
            break;
        }
        d_3334_cc82[0][d_61eb_d5de] += f_9f8d_1ec1(d_61eb_d5de);
    }
    for (d_61eb_d5dc = 0; d_61eb_d5dc <= 139; d_61eb_d5dc++) {
        d_432e_1a96[d_61eb_d5dc] = d_61eb_d5dc;
        d_432e_225a[0][d_61eb_d5dc] = 38;
    }
}

void f_93a1_19dc(void)
{
    FILE *fp;
    char buf[320];

    f_215d_19eb(2);
    f_ab30_5ded(0);
    if (f_215d_0dcc(d_5313_0e38) == 0) {
        fp = fopen(d_5313_0e38, "wb");
        memset(buf, 0, 279);
        for (d_61eb_d87c = 1; d_61eb_d87c <= 140; d_61eb_d87c++)
            fwrite(buf, 1, 279, fp);
        fclose(fp);
    }
    f_215d_19eb(2);
    if (f_215d_0dcc(d_5313_0e10) == 0) {
        fp = fopen(d_5313_0e10, "wb");
        for (d_61eb_d87c = 1; d_61eb_d87c <= 1500; d_61eb_d87c++) {
            fwrite(buf, 1, 133, fp);
            f_ab30_5f57(0, d_61eb_d87c - 1, 1499);
        }
        fclose(fp);
    }
    f_215d_19eb(2);
    if (f_215d_0dcc(d_5313_0de8) == 0) {
        fp = fopen(d_5313_0de8, "wb");
        fwrite(buf, 1, 175, fp);
        fclose(fp);
    }
}

void f_93a1_1b40(void)
{
    f_ab30_5ded(3);
    for (d_61eb_d87e = 0; d_61eb_d87e <= 501; d_61eb_d87e++) {
        f_ab30_5f57(3, d_61eb_d87e, 501);
        switch (d_53fc_09c0[0][d_61eb_d87e]) {
        case 0: d_53fc_09c0[0][d_61eb_d87e] = 20; break;
        case 1: d_53fc_09c0[0][d_61eb_d87e] = 17; break;
        case 2: d_53fc_09c0[0][d_61eb_d87e] = 15; break;
        case 3: d_53fc_09c0[0][d_61eb_d87e] = 12; break;
        case 4: d_53fc_09c0[0][d_61eb_d87e] = 10; break;
        case 5: d_53fc_09c0[0][d_61eb_d87e] = 7; break;
        case 6: d_53fc_09c0[0][d_61eb_d87e] = 5; break;
        case 7:
        case 8: d_53fc_09c0[0][d_61eb_d87e] = 3; break;
        }
        d_61eb_d62a = f_215d_0d96(100);
        if (d_61eb_d62a <= 5)
            d_53fc_0fa2[d_61eb_d87e] = 0;
        else if (d_61eb_d62a <= 6)
            d_53fc_0fa2[d_61eb_d87e] = 1;
        else if (d_61eb_d62a <= 70)
            d_53fc_0fa2[d_61eb_d87e] = 2;
        else if (d_61eb_d62a <= 80)
            d_53fc_0fa2[d_61eb_d87e] = 6;
        else if (d_61eb_d62a <= 85)
            d_53fc_0fa2[d_61eb_d87e] = 3;
        else if (d_61eb_d62a <= 88)
            d_53fc_0fa2[d_61eb_d87e] = 4;
        else if (d_61eb_d62a <= 93)
            d_53fc_0fa2[d_61eb_d87e] = 5;
        else
            d_53fc_0fa2[d_61eb_d87e] = 7;
    }
}

void f_93a1_1cfb(void)
{
    unsigned char k;

    d_61eb_da2e = 0;
    for (k = 0; k <= 1; k = k + 1) {
        for (d_61eb_d5f6 = k == 0 ? 646 : 0; d_61eb_d5f6 <= d_61eb_d650 + 645; d_61eb_d5f6++) {
            d_61eb_d5f0 = 0;
            for (d_61eb_d5aa = 0; d_61eb_d5aa <= 19; d_61eb_d5aa++)
                if (d_432e_0d8e[d_61eb_d5aa][k] <= d_432e_0d8e[d_61eb_d5f0][k])
                    d_61eb_d5f0 = d_61eb_d5aa;
            d_61eb_dbb0 = f_215d_1629(d_61eb_dc4a, 0);
            if (d_432e_0d8e[d_61eb_d5f0][k] < d_61eb_dbb0[d_61eb_d5f6]) {
                d_61eb_dbb0 = f_215d_1629(d_61eb_dc4a, 0);
                d_432e_0d8e[d_61eb_d5f0][k] = d_61eb_dbb0[d_61eb_d5f6];
                d_61eb_dbdc = f_215d_1629(d_61eb_dc60, 1);
                strcpy(d_61eb_dbdc + d_61eb_d5f0 * 160 + k * 80, f_1a83_4686(d_61eb_d5f6, 0));
                if (d_3334_cee2[d_61eb_d5f6] < 255)
                    strcpy(d_432e_bca7, d_61eb_b0ec[d_3334_cee2[d_61eb_d5f6]]);
                else
                    strcpy(d_432e_bca7, "NO CLUB");
                d_61eb_dbdc = f_215d_1629(d_61eb_dc60, 1);
                strcpy(d_61eb_dbdc + d_61eb_d5f0 * 160 + k * 80 + 3200, d_432e_bca7);
                d_61eb_da2e = -1;
            }
        }
        for (d_61eb_d5d8 = 0; d_61eb_d5d8 <= 18; d_61eb_d5d8++)
            for (d_61eb_d5aa = d_61eb_d5d8 + 1; d_61eb_d5aa <= 19; d_61eb_d5aa++)
                if (d_432e_0d8e[d_61eb_d5d8][k] < d_432e_0d8e[d_61eb_d5aa][k]) {
                    f_215d_13f1(&d_432e_0d8e[d_61eb_d5d8][k], &d_432e_0d8e[d_61eb_d5aa][k], 4);
                    d_61eb_dbdc = f_215d_1629(d_61eb_dc60, 1);
                    f_215d_13f1(d_61eb_dbdc + d_61eb_d5d8 * 160 + k * 80,
                                d_61eb_dbdc + d_61eb_d5aa * 160 + k * 80, 80);
                    f_215d_13f1(d_61eb_dbdc + d_61eb_d5d8 * 160 + k * 80 + 3200,
                                d_61eb_dbdc + d_61eb_d5aa * 160 + k * 80 + 3200, 80);
                }
    }
    if (d_61eb_da2e != 0)
        f_9a9e_41bc();
}

void f_93a1_205e(void)
{
    int a[11];
    int b[11];
    int c[11];
    unsigned k;

    for (d_61eb_d5fc = 0; d_61eb_d5fc <= 37; d_61eb_d5fc++) {
        d_61eb_d5de = d_432e_0640[d_61eb_d5fc];
        d_3334_bdb2[70][d_61eb_d5de] = d_3334_bdb2[69][d_61eb_d5de];
        d_3334_bdb2[69][d_61eb_d5de] = d_3334_bdb2[68][d_61eb_d5de];
        d_3334_bdb2[68][d_61eb_d5de] = d_61eb_d5fc;
        d_3334_bdb2[0][d_61eb_d5de] = (d_3334_bdb2[0][d_61eb_d5de] * 2 + 8) / 3;
        if (d_3334_bdb2[11][d_61eb_d5de] == 1 && d_61eb_d5fc < 18)
            d_3334_cc82[0][d_61eb_d5de] = d_3334_cc82[0][d_61eb_d5de]
                + (f_9f8d_1ec1(18) - f_9f8d_1ec1(d_61eb_d5de));
        else if (d_3334_bdb2[11][d_61eb_d5de] > 2 && d_61eb_d5fc > 0)
            d_3334_cc82[0][d_61eb_d5de] = d_3334_cc82[0][d_61eb_d5de]
                + (f_9f8d_1ec1(0) - f_9f8d_1ec1(d_61eb_d5de));
        d_3334_bdb2[11][d_61eb_d5de] = 2;
    }
    f_ab30_5a33();
    a[0] = d_432e_0000[6][0];
    a[1] = d_432e_0640[0];
    a[2] = d_432e_0000[6][1];
    for (d_61eb_d5dc = 3; d_61eb_d5dc <= 10; d_61eb_d5dc++)
        a[d_61eb_d5dc] = d_432e_063e[d_61eb_d5dc];
    b[0] = d_432e_0000[5][0];
    b[1] = d_432e_0000[1][0];
    b[2] = d_432e_0000[1][1];
    b[3] = d_432e_0000[5][1];
    for (d_61eb_d5dc = 4; d_61eb_d5dc <= 10; d_61eb_d5dc++)
        b[d_61eb_d5dc] = d_432e_063d[d_61eb_d5dc];
    c[0] = d_432e_0000[4][0];
    for (d_61eb_d5dc = 1; d_61eb_d5dc <= 10; d_61eb_d5dc++)
        c[d_61eb_d5dc] = d_432e_0640[d_61eb_d5dc + 1];

    for (d_61eb_d7bc = 0; d_61eb_d7bc <= 1; d_61eb_d7bc++)
        for (d_61eb_d7b6 = d_61eb_d7bc + 1; d_61eb_d7b6 <= 10; d_61eb_d7b6++)
            if (a[d_61eb_d7b6] == a[d_61eb_d7bc]) {
                for (k = d_61eb_d7b6; k < 10; k++)
                    a[k] = a[k + 1];
                d_61eb_d7b6--;
                a[10] = -1;
            }
    for (d_61eb_d7bc = 0; d_61eb_d7bc <= 1; d_61eb_d7bc++)
        for (d_61eb_d7b6 = 0; d_61eb_d7b6 <= 10; d_61eb_d7b6++)
            if (b[d_61eb_d7b6] == a[d_61eb_d7bc]) {
                for (k = d_61eb_d7b6; k < 10; k++)
                    b[k] = b[k + 1];
                d_61eb_d7b6--;
                b[10] = -1;
            }
    for (d_61eb_d7bc = 0; d_61eb_d7bc <= 1; d_61eb_d7bc++)
        for (d_61eb_d7b6 = 0; d_61eb_d7b6 <= 10; d_61eb_d7b6++)
            if (c[d_61eb_d7b6] == a[d_61eb_d7bc]) {
                for (k = d_61eb_d7b6; k < 10; k++)
                    c[k] = c[k + 1];
                d_61eb_d7b6--;
                c[10] = -1;
            }
    for (d_61eb_d7bc = 0; d_61eb_d7bc <= 1; d_61eb_d7bc++)
        for (d_61eb_d7b6 = d_61eb_d7bc + 1; d_61eb_d7b6 <= 10; d_61eb_d7b6++)
            if (b[d_61eb_d7b6] == b[d_61eb_d7bc]) {
                for (k = d_61eb_d7b6; k < 10; k++)
                    b[k] = b[k + 1];
                d_61eb_d7b6--;
                b[10] = -1;
            }
    for (d_61eb_d7bc = 0; d_61eb_d7bc <= 1; d_61eb_d7bc++)
        for (d_61eb_d7b6 = 0; d_61eb_d7b6 <= 10; d_61eb_d7b6++)
            if (c[d_61eb_d7b6] == b[d_61eb_d7bc]) {
                for (k = d_61eb_d7b6; k < 10; k++)
                    c[k] = c[k + 1];
                d_61eb_d7b6--;
                c[10] = -1;
            }
    for (d_61eb_d7bc = 0; d_61eb_d7bc <= 1; d_61eb_d7bc++)
        for (d_61eb_d7b6 = d_61eb_d7bc + 1; d_61eb_d7b6 <= 10; d_61eb_d7b6++)
            if (c[d_61eb_d7b6] == c[d_61eb_d7bc]) {
                for (k = d_61eb_d7b6; k < 10; k++)
                    c[k] = c[k + 1];
                d_61eb_d7b6--;
                c[10] = -1;
            }

    memset(d_432e_0000, -1, 0x640);
    for (d_61eb_d7bc = 0; d_61eb_d7bc <= 3; d_61eb_d7bc++) {
        d_432e_0000[4][d_61eb_d7bc] = c[d_61eb_d7bc];
        if (d_61eb_d7bc < 2) {
            d_432e_0000[5][d_61eb_d7bc] = b[d_61eb_d7bc];
            d_432e_0000[6][d_61eb_d7bc] = a[d_61eb_d7bc];
        }
    }

    /* Serie A's last four (14-17) go down, Serie B's first four (18-21) up */
    f_9f8d_08a7(d_432e_0640[14], d_432e_0640[18]);
    f_9f8d_08a7(d_432e_0640[15], d_432e_0640[19]);
    f_9f8d_08a7(d_432e_0640[16], d_432e_0640[20]);
    f_9f8d_08a7(d_432e_0640[17], d_432e_0640[21]);

    /* Serie B's last four (34-37) */
    d_61eb_d592 = d_432e_0640[34];
    d_61eb_d594 = d_432e_0640[35];
    d_61eb_d596 = d_432e_0640[36];
    d_61eb_d598 = d_432e_0640[37];
    f_8e0f_3e07(d_61eb_d592, 2);
    f_8e0f_3e07(d_61eb_d594, 2);
    f_8e0f_3e07(d_61eb_d596, 2);
    f_8e0f_3e07(d_61eb_d598, 2);
    f_ab30_5c8d();
}

/* A non-league club (400-501, the best of 30 random draws) takes the place of club
   `team`: names, attributes, fixtures, staff and players are swapped or reset. */
void f_93a1_2685(int team)
{
    unsigned char i;

    if (d_61eb_d5a4 > 1) {
        d_61eb_d75e = 0;
        do {
            d_61eb_d5dc = f_215d_0d96(102) + 400;
            if ((d_61eb_d7be = d_53fc_09c0[0][d_61eb_d5dc]) > d_61eb_d5e6 || d_61eb_d75e == 0) {
                d_61eb_d5e6 = d_53fc_09c0[0][d_61eb_d5dc];
                d_61eb_d8b2 = d_61eb_d5dc;
            }
            d_61eb_d75e++;
        } while (d_61eb_d75e < 30);
        f_215d_13f1((void *)&d_61eb_b0ec[team], (void *)&d_61eb_b18c[d_61eb_d8b2], 2);
        d_61eb_b13c[team] = d_61eb_b0ec[team];
        d_3334_bdb2[0][team] = 10;
        d_3334_bdb2[1][team] = f_215d_0d96(10) + 10;
        f_215d_13f1(&d_3334_bdb2[2][team], &d_53fc_09c0[1][d_61eb_d8b2], 1);
        f_215d_13f1(&d_3334_bdb2[3][team], &d_53fc_09c0[2][d_61eb_d8b2], 1);
        d_3334_bdb2[4][team] = 13;
        d_3334_bdb2[5][team] = f_215d_0d96(5) + 5;
        d_3334_bdb2[6][team] = 100;
        d_3334_bdb2[11][team] = 2;
        d_3334_bdb2[22][team] = f_215d_0d96(3) + 2;
        d_3334_cc82[0][team] = f_215d_0d96(125000L) + 125000L;
        d_3334_cc82[0][team] += f_9f8d_1ec1(team);
        d_53fc_09c0[0][d_61eb_d8b2] = 10;
        for (d_61eb_d5aa = 0; d_61eb_d5aa <= 139; d_61eb_d5aa++)
            if (d_432e_1a96[d_61eb_d5aa] == team)
                d_432e_1a96[d_61eb_d5aa] = d_61eb_d8b2 - 362;
            else if (d_432e_1a96[d_61eb_d5aa] == d_61eb_d8b2 - 362)
                d_432e_1a96[d_61eb_d5aa] = team;
        for (d_61eb_d5aa = 0; d_61eb_d5aa <= 37; d_61eb_d5aa++)
            for (d_61eb_d5f0 = 1; d_61eb_d5f0 <= 7; d_61eb_d5f0++) {
                if (d_61eb_d5f0 == 2)
                    continue;
                if (d_432e_0000[d_61eb_d5f0][d_61eb_d5aa] == team)
                    d_432e_0000[d_61eb_d5f0][d_61eb_d5aa] = d_61eb_d8b2 + 38;
                else if (d_432e_0000[d_61eb_d5f0][d_61eb_d5aa] == d_61eb_d8b2 + 38)
                    d_432e_0000[d_61eb_d5f0][d_61eb_d5aa] = team;
            }
        f_215d_13f1(&d_53fc_778e[0][team], d_53fc_778e[0] - 362 + d_61eb_d8b2, 1);
        f_215d_13f1(&d_53fc_778e[1][team], d_53fc_778e[1] - 362 + d_61eb_d8b2, 1);
        for (d_61eb_d5aa = 0; d_61eb_d5aa <= d_61eb_d58e - 1; d_61eb_d5aa++)
            if (d_3334_0000[10][d_61eb_d5aa] == team)
                d_3334_0000[10][d_61eb_d5aa] = d_61eb_d8b2 - 362;
            else if (d_3334_0000[10][d_61eb_d5aa] == d_61eb_d8b2 - 362)
                d_3334_0000[10][d_61eb_d5aa] = team;
        f_9a9e_43ba(team, d_61eb_d8b2 - 362);
        f_9a9e_45df(team, d_61eb_d8b2 + 38);
        for (d_61eb_d852 = 0; d_61eb_d852 <= 6; d_61eb_d852++)
            d_3334_ca6e[d_61eb_d852][team] = 650;
        for (d_61eb_d9a6 = 0; d_61eb_d9a6 <= 6; d_61eb_d9a6++) {
            d_61eb_d86a = -1;
            for (d_61eb_d5f6 = 0; d_61eb_d5f6 <= 645; d_61eb_d5f6++)
                if (d_3334_cee2[d_61eb_d5f6] == 255) {
                    if ((d_61eb_d800 = f_215d_1343(d_3334_db94[0][d_61eb_d5f6],
                                         f_215d_1343(d_3334_de1e[d_61eb_d5f6],
                                             f_215d_1343(d_3334_e0a8[d_61eb_d5f6],
                                                         d_3334_e332[d_61eb_d5f6]))))
                            < d_61eb_d88c || d_61eb_d86a == -1) {
                        d_61eb_d86a = d_61eb_d5f6;
                        d_61eb_d88c = d_61eb_d800;
                    }
                }
            f_8e0f_3192(d_61eb_d86a, team, 0);
        }
        d_3334_bdb2[62][team] = 0;
        d_61eb_dbd8 = f_215d_1629(d_61eb_dc5e, 1);
        strcpy(d_61eb_dbd8[team], "");
        d_3334_bdb2[7][team] = 0;
        d_3334_bdb2[10][team] = 0;
        d_61eb_d8b4 = 0;
        for (d_61eb_d5b8 = 0; d_61eb_d5b8 <= d_61eb_d58e - 1; d_61eb_d5b8++)
            if (d_28d4_1958[18][d_61eb_d5b8] == team) {
                f_a7b6_05a9(d_61eb_d5b8, team, d_61eb_d8b4 < 2 ? 1 : 0);
                d_61eb_d8b4++;
                f_87dc_182c(d_61eb_d5b8, -1);
            }
        for (i = 0; i <= 15; i = i + 1)
            f_b26d_0000(team, i);
    }
}

/* The players' yearly ageing and attribute drift. */
void f_93a1_2bd4(void)
{
    f_ab30_5ded(1);
    for (d_61eb_d8b6 = 1; d_61eb_d8b6 <= 3; d_61eb_d8b6++)
        f_9f8d_1ede();
    d_61eb_d5b8 = 0;
    f_215d_19eb(2);
    d_61eb_0094 = fopen(d_5313_0e10, "rb+");
    do {
        if (d_61eb_d58e - 1 >= d_61eb_d5b8)
            f_ab30_5f57(1, d_61eb_d5b8, d_61eb_d58e - 1);
        d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 0);
        f_93a1_3315(d_61eb_d5b8, d_28d4_1958[17][d_61eb_d5b8], d_3334_0000[0][d_61eb_d5b8],
                    d_61eb_dbb8[0][d_61eb_d5b8]);
        f_a7b6_30ee(d_61eb_d5b8);
        d_28d4_1958[8][d_61eb_d5b8] = f_215d_13af(d_28d4_1958[8][d_61eb_d5b8] + (f_215d_0d96(3) == 0), 9);
        d_28d4_1958[11][d_61eb_d5b8] = f_215d_1343(d_28d4_1958[11][d_61eb_d5b8] - (f_215d_0d96(3) == 0), 1);
        d_28d4_1958[12][d_61eb_d5b8] = f_215d_13af(d_28d4_1958[12][d_61eb_d5b8] + (f_215d_0d96(3) == 0), 20);
        d_28d4_1958[14][d_61eb_d5b8] = f_215d_1343(d_28d4_1958[14][d_61eb_d5b8] - (f_215d_0d96(3) == 0), 1);
        d_28d4_1958[17][d_61eb_d5b8]++;
        d_61eb_dbcc = f_215d_1629(d_61eb_dc58, 1);
        d_3334_0000[5][d_61eb_d5b8] = d_3334_0000[0][d_61eb_d5b8];
        d_3334_0000[6][d_61eb_d5b8] = d_3334_0000[1][d_61eb_d5b8];
        d_61eb_dbcc[6][d_61eb_d5b8] = d_3334_0000[2][d_61eb_d5b8];
        d_61eb_dbcc[6][d_61eb_d5b8] -= d_61eb_dbcc[6][d_61eb_d5b8] % 5;
        d_61eb_dbcc[7][d_61eb_d5b8] = d_3334_0000[3][d_61eb_d5b8];
        d_61eb_dbcc[8][d_61eb_d5b8] = d_3334_0000[4][d_61eb_d5b8];
        d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 1);
        d_61eb_dbb8[1][d_61eb_d5b8] = d_61eb_dbb8[0][d_61eb_d5b8];
        if (d_61eb_d58e - 1 == d_61eb_d5b8)
            d_61eb_d5b8 = 1000;
        else
            d_61eb_d5b8++;
    } while (d_61eb_d590 + 999 >= d_61eb_d5b8);
    fclose(d_61eb_0094);
}

void f_93a1_2ec2(void)
{
    char buf[320];
    char title[80];
    char text[80];

    f_ab30_5ded(6);
    for (d_61eb_d5b8 = 0; d_61eb_d5b8 <= d_61eb_d58e - 1; d_61eb_d5b8++) {
        f_ab30_5f57(6, d_61eb_d5b8, d_61eb_d58e - 1);
        if (d_61eb_da4d && d_61eb_d5a4 == 1)
            continue;
        d_61eb_d858 = d_28d4_1958[18][d_61eb_d5b8];
        d_61eb_d83a = d_28d4_1958[17][d_61eb_d5b8];
        if (d_432e_45de[d_61eb_d5b8].f0 && d_61eb_d83a > 28)
            d_61eb_d83a = f_215d_1343(d_61eb_d83a - 4, 28);
        d_61eb_da30 = d_61eb_d83a > 30 && d_432e_45de[d_61eb_d5b8].f8;
        d_61eb_da31 = d_432e_45de[d_61eb_d5b8].f17 == 1;
        if (d_61eb_da31 != 0 || d_61eb_d83a > 38 ||
            (d_61eb_d83a > 33 && d_28d4_1958[0][d_61eb_d5b8] < 40) ||
            (d_61eb_d83a > 30 && d_28d4_1958[0][d_61eb_d5b8] < 30) || d_61eb_da30 != 0) {
            d_61eb_da32 = 0;
            if (f_1a83_2ad4(d_61eb_d858) && d_61eb_d5a4 > 1) {
                sprintf(title, "%s squad news", (char far *)d_61eb_b0ec[d_61eb_d858]);
                if (d_61eb_da31 != 0)
                    sprintf(buf, "%s has been forced to retire through injury", f_1a83_4485(d_61eb_d5b8));
                else if (d_61eb_da30 != 0) {
                    sprintf(buf, "%s has decided to go into non league soccer", f_1a83_4485(d_61eb_d5b8));
                    d_61eb_dbac = f_215d_1629(d_61eb_dc48, 0);
                    d_3334_cc82[0][d_61eb_d858] += d_61eb_dbac[d_61eb_d5b8] / (f_215d_10c4() + 1);
                } else
                    sprintf(buf, "%s has decided to hang up his boots", f_1a83_4485(d_61eb_d5b8));
                sprintf(text, "%s at the age of %d.", buf, d_28d4_1958[17][d_61eb_d5b8]);
                f_1a83_5844(d_61eb_d858, title, text);
                d_61eb_da32 = -1;
            }
            if (d_61eb_da31 != 0 && d_432e_45de[d_61eb_d5b8].f20) {
                d_61eb_db61 = f_1a83_0cef(f_1a83_01d6(d_61eb_d5b8, -1), 0);
                if (f_1a83_2ad4(d_61eb_d858) && d_61eb_d5a4 > 1) {
                    sprintf(title, "%s squad news", (char far *)d_61eb_b0ec[d_61eb_d858]);
                    sprintf(text, "The club receives %ld from the insurance company following %s's retirement.",
                            d_61eb_db61, f_1a83_462c(d_61eb_d5b8));
                    f_1a83_5844(d_61eb_d858, title, text);
                    d_61eb_da32 = -1;
                }
                d_3334_cc82[0][d_61eb_d858] += d_61eb_db61;
            }
            if (d_61eb_da32 != 0) {
                f_ab30_5c8d();
                f_ab30_5ded(6);
            }
            d_3334_bdb2[7][d_61eb_d858]--;
            if (d_432e_45de[d_61eb_d5b8].f0)
                d_3334_bdb2[10][d_61eb_d858]--;
            if (d_3334_bdb2[7][d_61eb_d858] < 17 || d_3334_bdb2[10][d_61eb_d858] == 0)
                f_a7b6_05a9(d_61eb_d5b8, d_61eb_d858, d_3334_bdb2[10][d_61eb_d858] == 0 ? 3 : 2);
            else {
                d_61eb_d5de = -1;
                d_61eb_d75e = 0;
                do {
                    d_61eb_d5de = f_215d_0d96(38);
                    d_61eb_d75e++;
                } while (d_3334_bdb2[7][d_61eb_d5de] >= d_61eb_d75e / 60 + 14 || d_3334_bdb2[7][d_61eb_d5de] > 25);
                f_a7b6_05a9(d_61eb_d5b8, d_61eb_d5de, 2);
            }
            f_87dc_182c(d_61eb_d5b8, -1);
        }
    }
}

void f_93a1_3315(int player, int age, int games, int rating)
{
    if (games > 0)
        d_61eb_da71 = (float)rating / games * 41 - 120;
    else
        d_61eb_da71 = d_28d4_1958[0][player];
    d_61eb_d8b8 = d_28d4_1958[0][player];
    if (d_432e_45de[player].f0 && age > 28)
        d_61eb_d8ba = f_215d_1343(age - 4, 28);
    else
        d_61eb_d8ba = age;
    if (d_61eb_d8ba <= 27) {
        d_28d4_1958[0][player] = (d_28d4_1958[0][player] * 4 + d_28d4_1958[9][player]) / 5;
        d_61eb_d8bc = f_215d_13af(38, games);
        d_28d4_1958[0][player] = f_215d_1343(f_215d_13af((d_28d4_1958[0][player] * (100 - d_61eb_d8bc) +
                                                          d_61eb_d8bc * d_61eb_da71 * 1.03) / 100,
                                                         d_28d4_1958[9][player]), 10);
    } else if (d_61eb_d8ba >= 30)
        d_28d4_1958[0][player] = (d_28d4_1958[0][player] * 5 + 10) / 6;
}

void f_93a1_3489(void)
{
    long cap;

    for (d_61eb_d5dc = 0; d_61eb_d5dc <= 37; d_61eb_d5dc++) {
        long cost;
        unsigned char stand;
        unsigned char seat;

        cap = d_3334_bdda[d_61eb_d5dc] * 1000L;
        d_61eb_db65 = d_3334_ce4a[d_61eb_d5dc] / d_3334_c73a[d_61eb_d5dc];
        if (f_1a83_2ad4(d_61eb_d5dc)) {
            char title[80];
            char text[80];

            sprintf(title, "%s club news", (char far *)d_61eb_b0ec[d_61eb_d5dc]);
            sprintf(text, "Our average attendance for the season was %ld.", d_61eb_db65);
            f_1a83_5844(d_61eb_d5dc, title, text);
        }
        if (d_61eb_db65 > cap * 0.8 && d_3334_bdda[d_61eb_d5dc] < 80) {
            d_61eb_db69 = f_215d_135c(d_3334_cc82[0][d_61eb_d5dc] - f_9f8d_1ec1(d_61eb_d5dc), 0L) * 0.75;
            cost = f_215d_13af(d_61eb_db69, (f_215d_0d96(6) * 10 + 200) * 1000);
            if (cost < 0)
                cost = 0;
            stand = d_61eb_d5dc < 18 && d_3334_bdda[d_61eb_d5dc] < 40 && f_215d_0d96(30) == 0 ?
                    f_215d_0d96(6) + 5 : f_215d_0d96(3) + 1;
            seat = d_61eb_d5dc < 38 ? stand : 0;
            d_3334_cc82[0][d_61eb_d5dc] -= cost;
            d_3334_bdda[d_61eb_d5dc] += stand;
            d_3334_c802[d_61eb_d5dc] += seat;
            if (f_1a83_2ad4(d_61eb_d5dc)) {
                char title[80];
                char text[180];

                sprintf(title, "%s ground news", (char far *)d_61eb_b0ec[d_61eb_d5dc]);
                if (seat > 0)
                    sprintf(text, "The board has decided to increase standing capacity by %ld and seating capacity by %ld. Total capacity is now %ld. %ld of the cost is from club funds.",
                            (stand - seat) * 1000L, seat * 1000L, d_3334_bdda[d_61eb_d5dc] * 1000L, cost);
                else
                    sprintf(text, "The board has decided to increase standing capacity by %ld. Total capacity is now %ld. %ld of the cost is from club funds.",
                            stand * 1000L, d_3334_bdda[d_61eb_d5dc] * 1000L, cost);
                f_1a83_5844(d_61eb_d5dc, title, text);
            }
        } else if (f_1a83_6d8b(d_61eb_d5dc) == 0 && d_3334_c802[d_61eb_d5dc] < d_3334_bdda[d_61eb_d5dc]) {
            d_61eb_db69 = f_215d_135c(d_3334_cc82[0][d_61eb_d5dc] - f_9f8d_1ec1(d_61eb_d5dc), 0L) * 0.75;
            cost = f_215d_13af(d_61eb_db69, (f_215d_0d96(6) * 10 + 100) * 1000);
            if (cost < 0)
                cost = 0;
            stand = (d_3334_bdda[d_61eb_d5dc] - d_3334_c802[d_61eb_d5dc]) / 2;
            stand = f_215d_13af(f_215d_1343(stand, 1), f_215d_0d96(4) + 5);
            d_3334_cc82[0][d_61eb_d5dc] -= cost;
            d_3334_c802[d_61eb_d5dc] += stand;
            d_3334_bdda[d_61eb_d5dc] = d_3334_bdda[d_61eb_d5dc] - stand * 0.4;
            if (d_3334_bdda[d_61eb_d5dc] < d_3334_c802[d_61eb_d5dc])
                d_3334_bdda[d_61eb_d5dc] = d_3334_c802[d_61eb_d5dc];
            if (f_1a83_2ad4(d_61eb_d5dc)) {
                char title[80];
                char text[180];

                sprintf(title, "%s ground news", (char far *)d_61eb_b0ec[d_61eb_d5dc]);
                if (d_3334_bdda[d_61eb_d5dc] == d_3334_c802[d_61eb_d5dc])
                    sprintf(text, "The board has decided to convert the remaining standing areas to seating. The all-seater capacity is now %ld. %ld of the cost is from club funds.",
                            d_3334_bdda[d_61eb_d5dc] * 1000L, cost);
                else
                    sprintf(text, "The board has decided to convert part of the standing area to seating. Seating capacity is now %ld, but total capacity is reduced to %ld. %ld of the cost is from club funds.",
                            d_3334_c802[d_61eb_d5dc] * 1000L, d_3334_bdda[d_61eb_d5dc] * 1000L, cost);
                f_1a83_5844(d_61eb_d5dc, title, text);
            }
        }
    }
}

void f_93a1_3a6f(void)
{
    FILE *fp;
    char buf[320];
    unsigned char i;

    f_ab30_5ded(4);
    for (i = 0; i <= 37; i++) {
        d_28d4_0018[i] = 0;
        d_28d4_0fd4[i] = 0;
    }
    for (d_61eb_d5b8 = 0; d_61eb_d5b8 <= d_61eb_d58e - 1; d_61eb_d5b8++) {
        d_61eb_dbb8 = f_215d_1629(d_61eb_dc4e, 0);
        f_93a1_477a(d_61eb_d5b8, d_28d4_82d0[d_61eb_d5b8], d_3334_0000[13][d_61eb_d5b8],
                    d_3334_0000[12][d_61eb_d5b8], d_61eb_dbb8[2][d_61eb_d5b8]);
    }
    f_215d_19eb(2);
    fp = fopen(d_5313_0e38, "rb+");
    for (d_61eb_d5dc = 0; d_61eb_d5dc <= 139; d_61eb_d5dc++) {
        f_ab30_5f57(4, d_61eb_d5dc, 139);
        fseek(fp, (long)d_61eb_d5dc * 279, 0);
        fread(d_432e_daad, 1, 279, fp);
        if (d_432e_26ba[0][d_61eb_d5dc] > -1) {
            sprintf(d_432e_bca7, "%.12s", f_1a83_3300(d_432e_26ba[0][d_61eb_d5dc]));
            sprintf(d_432e_db25, "%-12s", d_432e_bca7);
            d_432e_db31 = d_61eb_d5a4 + 99;
        }
        if (d_432e_26ba[1][d_61eb_d5dc] > -1) {
            sprintf(d_432e_bca7, "%.12s", f_1a83_3300(d_432e_26ba[1][d_61eb_d5dc]));
            sprintf(d_432e_db32, "%-12s", d_432e_bca7);
            d_432e_db3e = d_61eb_d5a4 + 99;
        }
        if (d_432e_26ba[2][d_61eb_d5dc] > -1) {
            sprintf(d_432e_bca7, "%.12s", f_1a83_3300(d_432e_26ba[2][d_61eb_d5dc]));
            sprintf(d_432e_db3f, "%-12s", d_432e_bca7);
            d_432e_db4b = d_61eb_d5a4 + 99;
        }
        if (d_432e_26ba[3][d_61eb_d5dc] > -1) {
            sprintf(d_432e_bca7, "%.12s", f_1a83_3300(d_432e_26ba[3][d_61eb_d5dc]));
            sprintf(d_432e_db4c, "%-12s", d_432e_bca7);
            d_432e_db58 = d_61eb_d5a4 + 99;
        }
        if (d_432e_26ba[8][d_61eb_d5dc] > -1) {
            sprintf(d_432e_dbc5, "%.13s", f_1a83_45b4(d_432e_26ba[9][d_61eb_d5dc]));
            sprintf(d_432e_dbaa, "%-13s", d_432e_dbc5);
            sprintf(d_432e_bca7, "%.12s", f_1a83_3300(d_432e_26ba[8][d_61eb_d5dc]));
            sprintf(d_432e_dbb7, "%-12s", d_432e_bca7);
            d_432e_dbc3 = d_61eb_d5a4 + 99;
        }
        if (d_432e_26ba[4][d_61eb_d5dc] > -1) {
            sprintf(d_432e_dbc5, "%.13s", f_1a83_45b4(d_432e_26ba[4][d_61eb_d5dc]));
            sprintf(d_432e_db75, "%-13s", d_432e_dbc5);
            if (d_432e_26ba[5][d_61eb_d5dc] < 38)
                strcpy(d_432e_bca7, d_61eb_b0ec[d_432e_26ba[5][d_61eb_d5dc]]);
            else
                sprintf(d_432e_bca7, "<%s>", d_53fc_0000[d_432e_26ba[5][d_61eb_d5dc] - 140]);
            sprintf(d_432e_db82, "%-12s", d_432e_bca7);
            d_432e_db8e = d_61eb_d5a4 + 99;
        }
        if (d_432e_26ba[6][d_61eb_d5dc] > -1) {
            sprintf(d_432e_dbc5, "%.13s", f_1a83_45b4(d_432e_26ba[6][d_61eb_d5dc]));
            sprintf(d_432e_db8f, "%-13s", d_432e_dbc5);
            if (d_432e_26ba[7][d_61eb_d5dc] < 38)
                sprintf(d_432e_bca7, "%.12s", (char far *)d_61eb_b0ec[d_432e_26ba[7][d_61eb_d5dc]]);
            else
                sprintf(d_432e_bca7, "<%.12s>", d_53fc_0000[d_432e_26ba[7][d_61eb_d5dc] - 140]);
            sprintf(d_432e_db9c, "%-12s", d_432e_bca7);
            d_432e_dba8 = d_61eb_d5a4 + 99;
        }
        if (d_61eb_d5dc < 38) {
            if (d_432e_1f9e[4][d_61eb_d5dc] < d_28d4_0018[d_61eb_d5dc]) {
                d_432e_1f9e[4][d_61eb_d5dc] = d_28d4_0018[d_61eb_d5dc];
                sprintf(d_432e_dbc5, "%.13s", f_1a83_45b4(d_28d4_1300[0][d_61eb_d5dc]));
                sprintf(d_432e_db59, "%-13s", d_432e_dbc5);
                d_432e_db66 = d_61eb_d5a4 + 99;
            }
            if (d_28d4_0fd4[d_61eb_d5dc] > d_432e_33c6[d_61eb_d5dc]) {
                d_432e_33c6[d_61eb_d5dc] = d_28d4_0fd4[d_61eb_d5dc];
                sprintf(d_432e_dbc5, "%.13s", f_1a83_45b4(d_28d4_1300[1][d_61eb_d5dc]));
                sprintf(d_432e_db67, "%-13s", d_432e_dbc5);
                d_432e_db74 = d_61eb_d5a4 + 99;
            }
        }
        d_61eb_d5fc = f_1a83_440f(d_61eb_d5dc);
        if (d_432e_1f9e[5][d_61eb_d5dc] > d_61eb_d5fc) {
            d_432e_1f9e[5][d_61eb_d5dc] = d_61eb_d5fc;
            d_432e_dba9 = d_61eb_d5a4 + 99;
        }
        sprintf(d_432e_dc15, "%c%c", d_61eb_d5a4 + 99, d_61eb_d5fc + 32);
        if (d_61eb_d5dc < 38) {
            d_61eb_d8c4 = d_3334_bf92[d_61eb_d5dc];
            d_61eb_d8c6 = d_3334_bfba[d_61eb_d5dc];
            d_61eb_d8c8 = (d_61eb_d5dc < 18 ? d_61eb_d59a : d_61eb_d59c) - d_61eb_d8c4 - d_61eb_d8c6;
            sprintf(buf, "%c%c%c%c%c%c", d_61eb_d8c4 + 32, d_61eb_d8c8 + 32, d_61eb_d8c6 + 32,
                    d_3334_bfe2[d_61eb_d5dc] + 32, d_3334_c00a[d_61eb_d5dc] + 32,
                    f_9f8d_0000(d_61eb_d5fc) + 32);
            strcat(d_432e_dc15, buf);
        } else
            strcat(d_432e_dc15, "      ");
        sprintf(d_432e_dc15 + strlen(d_432e_dc15), "%c%c",
                d_432e_1f9e[6][d_61eb_d5dc] + 32, 32);
        if (d_432e_1f9e[8][d_61eb_d5dc] > 0)
            sprintf(d_432e_dc15 + strlen(d_432e_dc15), "%c%c", 35, d_432e_1f9e[8][d_61eb_d5dc] + 32);
        else if (d_432e_1f9e[9][d_61eb_d5dc] > 0)
            sprintf(d_432e_dc15 + strlen(d_432e_dc15), "%c%c", 36, d_432e_1f9e[9][d_61eb_d5dc] + 32);
        else if (d_432e_1f9e[10][d_61eb_d5dc] > 0)
            sprintf(d_432e_dc15 + strlen(d_432e_dc15), "%c%c", 37, d_432e_1f9e[10][d_61eb_d5dc] + 32);
        else if (d_432e_1f9e[11][d_61eb_d5dc] > 0)
            sprintf(d_432e_dc15 + strlen(d_432e_dc15), "%c%c", 38, d_432e_1f9e[11][d_61eb_d5dc] + 32);
        else
            strcat(d_432e_dc15, "  ");
        d_61eb_d8ac = f_215d_13af(d_61eb_d5a4, 10);
        if (d_61eb_d5a4 > 10)
            memcpy(d_432e_daad, d_432e_dab9, 108);
        memcpy(d_432e_daa1[d_61eb_d8ac], d_432e_dc15, 12);
        fseek(fp, (long)d_61eb_d5dc * 279, 0);
        fwrite(d_432e_daad, 1, 279, fp);
    }
    fclose(fp);
}

void f_93a1_435f(int team, int other, int a, int b)
{
    if (team < 38 || team >= 438) {
        d_61eb_d5dc = team - (team >= 438 ? 400 : 0);
        d_61eb_d8ca = d_432e_1f9e[0][d_61eb_d5dc] - d_432e_1f9e[1][d_61eb_d5dc];
        if (a - b > d_61eb_d8ca
            || (a - b == d_61eb_d8ca && d_432e_1f9e[0][d_61eb_d5dc] < a)) {
            d_432e_1f9e[0][d_61eb_d5dc] = a;
            d_432e_1f9e[1][d_61eb_d5dc] = b;
            d_432e_26ba[0][d_61eb_d5dc] = other;
        }
    }
}

void f_93a1_4402(int team, int other, int a, int b)
{
    if (team < 38 || team >= 438) {
        d_61eb_d5dc = team - (team >= 438 ? 400 : 0);
        d_61eb_d8ca = d_432e_1f9e[3][d_61eb_d5dc] - d_432e_1f9e[2][d_61eb_d5dc];
        if (b - a > d_61eb_d8ca
            || (b - a == d_61eb_d8ca && d_432e_1f9e[3][d_61eb_d5dc] < b)) {
            d_432e_1f9e[2][d_61eb_d5dc] = a;
            d_432e_1f9e[3][d_61eb_d5dc] = b;
            d_432e_26ba[1][d_61eb_d5dc] = other;
        }
    }
}

#pragma option -O-
void f_93a1_44a5(int team, int other, long v)
{
    if (team < 38 || team >= 438) {
        d_61eb_d5dc = team - (team >= 438 ? 400 : 0);
        d_61eb_dbc8 = f_215d_1629(d_61eb_dc56, 1);
        if (d_61eb_dbc8[0][d_61eb_d5dc] < v) {
            d_61eb_dbc8[0][d_61eb_d5dc] = v;
            d_432e_26ba[2][d_61eb_d5dc] = other;
        }
    }
}

void f_93a1_4531(int team, int other, long v)
{
    if (team < 38 || team >= 438) {
        d_61eb_d5dc = team - (team >= 438 ? 400 : 0);
        d_61eb_dbc8 = f_215d_1629(d_61eb_dc56, 1);
        if (d_61eb_dbc8[1][d_61eb_d5dc] > v || d_61eb_dbc8[1][d_61eb_d5dc] == 0) {
            d_61eb_dbc8[1][d_61eb_d5dc] = v;
            d_432e_26ba[3][d_61eb_d5dc] = other;
        }
    }
}

void f_93a1_45de(int team, int a, int player, int b)
{
    if (team < 38) {
        d_61eb_d5dc = team;
        if (d_432e_1f9e[12][d_61eb_d5dc] < b) {
            d_432e_1f9e[12][d_61eb_d5dc] = b;
            d_432e_26ba[8][d_61eb_d5dc] = a;
            d_432e_26ba[9][d_61eb_d5dc] = player;
        }
    }
}

void f_93a1_4636(int team, int row, int v)
{
    if (team < 38 || team >= 438) {
        d_61eb_d5dc = team - (team >= 438 ? 400 : 0);
        d_432e_225a[row][d_61eb_d5dc] = v;
    }
}

void f_93a1_467a(int player, int from, int to, long fee)
{
    d_61eb_dbc8 = f_215d_1629(d_61eb_dc56, 1);
    if (d_61eb_dbc8[2][to] < fee) {
        d_61eb_dbc8[2][to] = fee;
        d_432e_26ba[4][to] = player;
        d_432e_26ba[5][to] = from;
    }
}

void f_93a1_46fa(int player, int from, int to, long fee)
{
    d_61eb_dbc8 = f_215d_1629(d_61eb_dc56, 1);
    if (d_61eb_dbc8[3][from] < fee) {
        d_61eb_dbc8[3][from] = fee;
        d_432e_26ba[6][from] = player;
        d_432e_26ba[7][from] = to;
    }
}

void f_93a1_477a(int team, int player, int a, int b, int c)
{
    if (d_28d4_0018[player] < a) {
        d_28d4_0018[player] = a;
        d_28d4_1300[0][player] = team;
    }
    if (b >= 20) {
        d_61eb_da71 = (float)c / b;
        if (d_28d4_0fd4[player] < d_61eb_da71) {
            d_28d4_0fd4[player] = d_61eb_da71;
            d_28d4_134c[player] = team;
        }
    }
}

void f_93a1_482d(int team)
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

    f_215d_19eb(2);
    fp = fopen(d_5313_0e38, "rb+");
    fseek(fp, (long)team * 279, 0);
    fread(d_432e_daad, 1, 279, fp);
    fclose(fp);
    f_1a83_5ccd();

    f_1a83_0007(1.25, team, "Club Records");
    sprintf(d_432e_dc65, "%d", d_61eb_d5a4 + 1994);
    f_1a83_3450(1.125, 4.0, 1, 8, 0x130, "                   CLUB RECORDS");
    f_1a83_3450(1.125, 11.75, 1, 8, 0x130, "                 TRANSFER RECORDS");
    f_1a83_3450(1.125, 16.5, 1, 8, 0x130, "                  PLAYER RECORDS");
    for (d_61eb_d8cc = 0; d_61eb_d8cc <= 1; d_61eb_d8cc++) {
        f_1a83_3450(1.125, d_61eb_d8cc * 12.5 + 5.25, 1, 12, 0x7e, " ACHIEVEMENT");
        f_1a83_3450(17.125, d_61eb_d8cc * 12.5 + 5.25, 1, 4, 0x8a, " RECORD");
        f_1a83_3450(34.625, d_61eb_d8cc * 12.5 + 5.25, 1, 4, 0x24, " YEAR");
    }
    for (d_61eb_d8ce = 0; d_61eb_d8ce <= 19; d_61eb_d8ce++)
        strcpy(lines[d_61eb_d8ce], "");

    /* best league placing */
    f_1a83_3450(1.125, 6.5, 1, 14, 0x7e, " BEST LEAGUE PLACING");
    d_61eb_d5e4 = f_1a83_6d8b(d_432e_225a[0][team]) + 1;
    if (d_61eb_d5e4 < 2) {
        sprintf(lines[0], " %s IN %s", f_1a83_47e8(d_432e_225a[0][team] % 20 + 1), f_1a83_4876(d_61eb_d5e4, 0));
        sprintf(lines[1], " %d", d_432e_dba9 + 1894);
    }

    /* biggest victory */
    f_1a83_3450(1.125, 7.5, 1, 14, 0x7e, " BIGGEST VICTORY");
    sprintf(d_432e_d4bb, "%d-%d", d_432e_1f9e[0][team], d_432e_202a[team]);
    if (strcmp(d_432e_d4bb, "0-0")) {
        sprintf(lines[2], " %s V ", d_432e_d4bb);
        if (d_432e_26ba[0][team] == -1) {
            strncpy(buf, d_432e_db25, 12);
            buf[12] = 0;
            strcat(lines[2], f_215d_1043(buf));
            sprintf(lines[3], " %d", d_432e_db31 + 1894);
        } else {
            sprintf(buf, "%.12s", f_1a83_3300(d_432e_26ba[0][team]));
            strcat(lines[2], buf);
            sprintf(lines[3], " %s", d_432e_dc65);
        }
    }

    /* heaviest defeat */
    f_1a83_3450(1.125, 8.5, 1, 14, 0x7e, " HEAVIEST DEFEAT");
    sprintf(d_432e_d4bb, "%d-%d", d_432e_20b6[team], d_432e_2142[team]);
    if (strcmp(d_432e_d4bb, "0-0")) {
        sprintf(lines[4], " %s V ", d_432e_d4bb);
        if (d_432e_26ba[1][team] == -1) {
            strncpy(buf, d_432e_db32, 12);
            buf[12] = 0;
            strcat(lines[4], f_215d_1043(buf));
            sprintf(lines[5], " %d", d_432e_db3e + 1894);
        } else {
            sprintf(buf, "%.12s", f_1a83_3300(d_432e_26ba[1][team]));
            strcat(lines[4], buf);
            sprintf(lines[5], " %s", d_432e_dc65);
        }
    }

    /* highest attendance */
    f_1a83_3450(1.125, 9.5, 1, 14, 0x7e, " HIGHEST ATTENDANCE");
    d_61eb_dbc8 = f_215d_1629(d_61eb_dc56, 0);
    sprintf(d_432e_dc6f, "%ld", d_61eb_dbc8[0][team]);
    if (strcmp(d_432e_dc6f, "0")) {
        sprintf(lines[6], " %s V ", d_432e_dc6f);
        if (d_432e_26ba[2][team] == -1) {
            strncpy(buf, d_432e_db3f, 12);
            buf[12] = 0;
            strcat(lines[6], f_215d_1043(buf));
            sprintf(lines[7], " %d", d_432e_db4b + 1894);
        } else {
            sprintf(buf, "%.12s", f_1a83_3300(d_432e_26ba[2][team]));
            strcat(lines[6], buf);
            sprintf(lines[7], " %s", d_432e_dc65);
        }
    }

    /* lowest attendance */
    f_1a83_3450(1.125, 10.5, 1, 14, 0x7e, " LOWEST ATTENDANCE");
    d_61eb_dbc8 = f_215d_1629(d_61eb_dc56, 0);
    sprintf(d_432e_dc6f, "%ld", d_61eb_dbc8[1][team]);
    if (strcmp(d_432e_dc6f, "0")) {
        sprintf(lines[8], " %s V ", d_432e_dc6f);
        if (d_432e_26ba[3][team] == -1) {
            strncpy(buf, d_432e_db4c, 12);
            buf[12] = 0;
            strcat(lines[8], f_215d_1043(buf));
            sprintf(lines[9], " %d", d_432e_db58 + 1894);
        } else {
            sprintf(buf, "%.12s", f_1a83_3300(d_432e_26ba[3][team]));
            strcat(lines[8], buf);
            sprintf(lines[9], " %s", d_432e_dc65);
        }
    }

    /* goals in a season */
    f_1a83_3450(1.125, 19.0, 1, 14, 0x7e, " GOALS IN A SEASON");
    sprintf(d_432e_dcbf, "%d", d_432e_21ce[team]);
    if (strcmp(d_432e_dcbf, "0")) {
        strncpy(d_432e_bfe5, d_432e_db59, 13);
        d_432e_bfe5[13] = 0;
        sprintf(lines[10], " %s - %s", f_215d_1043(d_432e_bfe5), d_432e_dcbf);
        sprintf(lines[11], " %d", d_432e_db66 + 1894);
    }

    /* average rating in a season */
    f_1a83_3450(1.125, 20.0, 1, 14, 0x7e, " AV RT IN A SEASON");
    if (d_432e_33c6[team] > 0) {
        sprintf(d_432e_bf45, "%.2f", d_432e_33c6[team]);
        strncpy(d_432e_bfe5, d_432e_db67, 13);
        d_432e_bfe5[13] = 0;
        sprintf(lines[12], " %s - %s", f_215d_1043(d_432e_bfe5), d_432e_bf45);
        sprintf(lines[13], " %d", d_432e_db74 + 1894);
    }

    /* record fee paid */
    f_1a83_3450(1.125, 13.0, 1, 4, 0x97, " RECORD FEE PAID");
    d_61eb_dbc8 = f_215d_1629(d_61eb_dc56, 0);
    sprintf(d_432e_d6ed, "%ld", d_61eb_dbc8[2][team]);
    if (strcmp(d_432e_d6ed, "0")) {
        sprintf(lines[14], " %s FOR ", d_432e_d6ed);
        strcpy(lines[15], " FROM ");
        if (d_432e_26ba[4][team] == -1) {
            strncpy(buf, d_432e_db75, 13);
            buf[13] = 0;
            strcpy(name, f_215d_1043(buf));
            strncpy(buf, d_432e_db82, 12);
            buf[12] = 0;
            strcat(lines[15], f_215d_1043(buf));
            sprintf(buf, " %d", d_432e_db8e + 1894);
        } else {
            strcpy(name, f_1a83_45b4(d_432e_26ba[4][team]));
            if (d_432e_26ba[5][team] < 38)
                sprintf(buf, "%.12s %s", f_1a83_3300(d_432e_26ba[5][team]), d_432e_dc65);
            else
                sprintf(buf, "<%.12s> %s", d_53fc_0000[d_432e_26ba[5][team] - 140], d_432e_dc65);
        }
        strcat(lines[15], buf);
        if (strlen(name) > 12)
            strcpy(name, name + 2);
        strcat(lines[14], name);
    }

    /* record fee recouped */
    f_1a83_3450(20.25, 13.0, 1, 4, 0x97, " RECORD FEE RECOUPED");
    d_61eb_dbc8 = f_215d_1629(d_61eb_dc56, 0);
    sprintf(d_432e_d6ed, "%ld", d_61eb_dbc8[3][team]);
    if (strcmp(d_432e_d6ed, "0")) {
        sprintf(lines[16], " %s FOR ", d_432e_d6ed);
        strcpy(lines[17], " TO ");
        if (d_432e_26ba[6][team] == -1) {
            strncpy(buf, d_432e_db8f, 13);
            buf[13] = 0;
            strcpy(name, f_215d_1043(buf));
            strncpy(buf, d_432e_db9c, 12);
            buf[12] = 0;
            strcat(lines[17], f_215d_1043(buf));
            sprintf(buf, " %d", d_432e_db8e + 1894);
        } else {
            strcpy(name, f_1a83_45b4(d_432e_26ba[6][team]));
            if (d_432e_26ba[7][team] < 38)
                sprintf(buf, "%.12s %s", f_1a83_3300(d_432e_26ba[7][team]), d_432e_dc65);
            else
                sprintf(buf, "<%.12s> %s", d_53fc_0000[d_432e_26ba[7][team] - 140], d_432e_dc65);
        }
        strcat(lines[17], buf);
        if (strlen(name) > 12)
            strcpy(name, name + 2);
        strcat(lines[16], name);
    }

    /* goals in a match */
    f_1a83_3450(1.125, 21.0, 1, 14, 0x7e, " GOALS IN A MATCH");
    sprintf(d_432e_dcbf, "%d", d_432e_262e[team]);
    if (strcmp(d_432e_dcbf, "0")) {
        if (d_432e_26ba[8][team] == -1) {
            strncpy(buf, d_432e_dbaa, 13);
            buf[13] = 0;
            strcpy(d_432e_bfe5, f_215d_1043(buf));
            strncpy(buf, d_432e_dbb7, 12);
            buf[12] = 0;
            strcpy(d_432e_dd0f, f_215d_1043(buf));
            sprintf(lines[19], " %d", d_432e_dbc3 + 1894);
        } else {
            strcpy(d_432e_bfe5, f_1a83_45b4(d_432e_26ba[9][team]));
            sprintf(d_432e_dd0f, "%.12s", f_1a83_3300(d_432e_26ba[8][team]));
            sprintf(lines[19], " %s", d_432e_dc65);
        }
        sprintf(lines[18], " %s -  %s", d_432e_bfe5, d_432e_dcbf);
    }

    for (p = pos, d_61eb_d8d0 = 0; d_61eb_d8d0 <= 19; d_61eb_d8d0++, p++)
        f_1a83_3450(p->x, p->y, p->bg, p->fg, p->w, lines[d_61eb_d8d0]);
    f_1a83_5ce1();
    f_1a83_4d96(2, 1.25, 22.5, 1, 4, 0x12d, "                 DONE");
    do
        d_61eb_d59e = f_1a83_5296(d_61eb_d5e2);
    while (d_61eb_d59e <= 0);
}

#pragma option -O-
/* a club's history: its league and cup record over the last ten seasons (Serie A and B,
 * the Italian Cup) */
void f_93a1_57bd(int team)
{
    FILE *fp;
    char buf[12][80];

    f_215d_19eb(2);
    fp = fopen(d_5313_0e38, "rb+");
    fseek(fp, (long)team * 279, 0);
    fread(d_432e_daad, 1, 279, fp);
    fclose(fp);
    f_1a83_5ccd();
    f_1a83_0007(1.25, team, "History");
    f_1a83_3450(1.125, 4.0, 0, 1, 0x130, "LEAGUE AND ITALIAN CUP");
    f_1a83_3450(1.125, 5.25, 1, 12, 0x22, " YEAR");
    f_1a83_3450(5.625, 5.25, 1, 12, 0x1c, " SER");
    f_1a83_3450(9.375, 5.25, 1, 12, 0x12, "POS");
    f_1a83_3450(11.875, 5.25, 1, 12, 0x12, " W");
    f_1a83_3450(14.375, 5.25, 1, 12, 0x12, " D");
    f_1a83_3450(16.875, 5.25, 1, 12, 0x12, " L");
    f_1a83_3450(19.375, 5.25, 1, 12, 0x12, " F");
    f_1a83_3450(21.875, 5.25, 1, 12, 0x12, " A");
    f_1a83_3450(24.375, 5.25, 1, 12, 0x12, "PTS");
    f_1a83_3450(26.875, 5.25, 1, 12, 0x62, " ITALIAN CUP");
    f_1a83_3450(1.125, 16.75, 0, 1, 0x130, "EUROPEAN AND OTHER CUPS");
    for (d_61eb_d8d2 = 0; d_61eb_d8d2 <= 1; d_61eb_d8d2++) {
        f_1a83_3450(d_61eb_d8d2 * 19.125 + 1.125, 18.0, 1, 12, 0x22, " YEAR");
        f_1a83_3450(d_61eb_d8d2 * 19.125 + 5.625, 18.0, 1, 12, 0x73, " ACHIEVEMENT");
    }
    for (d_61eb_d8ce = 0; d_61eb_d8ce <= 11; d_61eb_d8ce++)
        strcpy(buf[d_61eb_d8ce], "");
    for (team = 1; team <= 10; team++) {
        memcpy(d_432e_dc15, d_432e_daa1[team], 12);
        d_432e_dc15[12] = 0;
        d_61eb_dae1 = team + 5.5;
        if (team < 6) {
            d_61eb_dae5 = 1.125;
            d_61eb_d8d4 = team + 18;
        } else {
            d_61eb_dae5 = 20.25;
            d_61eb_d8d4 = team + 13;
        }
        d_61eb_d8d6 = d_432e_dc15[0] + 1894;
        if (d_61eb_d8d6 > 1894 && d_61eb_d5a4 + 1995 > d_61eb_d8d6) {
            sprintf(buf[0], " %d", d_61eb_d8d6);
            d_61eb_d5fc = (unsigned char)d_432e_dc15[1] - 32;
            if (d_61eb_d5fc < 38) {
                sprintf(buf[1], " %s", f_1a83_4876(f_1a83_6d8b(d_61eb_d5fc) + 1, 3));
                sprintf(buf[2], "%3d", d_61eb_d5fc - (d_61eb_d5fc >= 18 ? 18 : 0) + 1);
                for (d_61eb_d8d8 = 3; d_61eb_d8d8 <= 8; d_61eb_d8d8++)
                    sprintf(buf[d_61eb_d8d8], "%3d", (unsigned char)d_432e_dc15[d_61eb_d8d8 - 1] - 32);
            } else
                strcpy(buf[1], " NLG");
            d_61eb_d8da = (unsigned char)d_432e_dc15[8] - 32;
            if (d_61eb_d8da > 0) {
                f_93a1_63d8(d_61eb_d8da);
                sprintf(buf[9], " %s", d_432e_dd5f);
            }
            d_61eb_d8de = (unsigned char)d_432e_dc15[11] - 32;
            if (d_61eb_d8de > 0) {
                d_61eb_d8e0 = (unsigned char)d_432e_dc15[10] - 32;
                sprintf(buf[11], " %s", f_93a1_64b0(d_61eb_d8de, d_61eb_d8e0));
            }
        }
        f_1a83_3450(1.125, d_61eb_dae1, 1, 4, 0x22, buf[0]);
        f_1a83_3450(d_61eb_dae5, d_61eb_d8d4, 1, 4, 0x22, buf[0]);
        strcpy(buf[0], "");
        f_1a83_3450(5.625, d_61eb_dae1, 6, 3, 0x1c, buf[1]);
        strcpy(buf[1], "");
        for (d_61eb_d8d8 = 2; d_61eb_d8d8 <= 8; d_61eb_d8d8++) {
            f_1a83_3450((d_61eb_d8d8 - 2) * 2.5 + 9.375, d_61eb_dae1, 1, team & 1 ? 8 : 14, 0x12, buf[d_61eb_d8d8]);
            strcpy(buf[d_61eb_d8d8], "");
        }
        f_1a83_3450(26.875, d_61eb_dae1, 1, team & 1 ? 2 : 9, 0x62, buf[9]);
        strcpy(buf[9], "");
        f_1a83_3450(d_61eb_dae5 + 4.5, d_61eb_d8d4, 1, team & 1 ? 8 : 14, 0x73, buf[11]);
        strcpy(buf[11], "");
    }
    f_1a83_5ce1();
    f_1a83_5540(0);
}

/* records a cup's winner and runner-up for this season, shifting the table up when full */
void f_93a1_5e04(int cup, int winner, int runner)
{
    if (d_61eb_d5a4 <= 16)
        d_61eb_d66c = d_61eb_d5a4 - 1;
    else {
        for (d_61eb_d5d0 = 0; d_61eb_d5d0 <= 14; d_61eb_d5d0++)
            for (d_61eb_d5aa = 0; d_61eb_d5aa <= 2; d_61eb_d5aa++)
                d_432e_b43b[d_61eb_d5aa][d_61eb_d5d0][cup] = d_432e_b43b[d_61eb_d5aa][d_61eb_d5d0 + 1][cup];
        d_61eb_d66c = 15;
    }
    d_432e_b43b[0][d_61eb_d66c][cup] = d_61eb_d5a4;
    d_432e_b43b[1][d_61eb_d66c][cup] = winner;
    d_432e_b43b[2][d_61eb_d66c][cup] = runner;
}

/* the past winners screen: six competitions (button 2 on reads column i + 1) */
void f_93a1_5eda(void)
{
    int i;
    int j;
    char buf[160];

    f_1a83_5ccd();
    f_1a83_48f9("Past Winners");
    f_1a83_3450(1.125, 5.25, 0, 6, 0, " Year ");
    f_1a83_3450(5.875, 5.25, 0, 6, 0x5c, " Winners");
    f_1a83_3450(17.625, 5.25, 0, 6, 0x5c, " Runners up");
    f_1a83_5ce1();
    for (d_61eb_d5d0 = 0; d_61eb_d5d0 <= 5; d_61eb_d5d0++)
        f_93a1_6290(d_61eb_d5d0, 0);
    f_1a83_4d96(2, 1.25, 22.5, 1, 4, 0x12d, "                 Done");
    f_1a83_5ccd();
    i = 0;
    do {
        f_93a1_6290(i, -1);
        sprintf(buf, " Past %s", d_61eb_4640[i]);
        if (i > 0)
            strcat(buf, " Winners");
        f_1a83_3450(1.125, 4.0, 0, 1, 0x130, buf);
        for (d_61eb_d5d0 = 0; d_61eb_d5d0 <= 15; d_61eb_d5d0++) {
            d_61eb_d5f0 = d_61eb_d5d0 & 1 ? 15 : 3;
            j = i + (i >= 2);
            if (d_432e_b43b[0][d_61eb_d5d0][j] > 0) {
                sprintf(buf, " %d", d_432e_b43b[0][d_61eb_d5d0][j] + 1994);
                f_1a83_3450(1.125, d_61eb_d5d0 + 6.25, 1, 4, 0x24, buf);
                sprintf(buf, " %s", f_1a83_3300(d_432e_b43b[1][d_61eb_d5d0][j]));
                f_1a83_3450(5.875, d_61eb_d5d0 + 6.25, 1, d_61eb_d5f0, 0x5c, buf);
                sprintf(buf, " %s", f_1a83_3300(d_432e_b43b[2][d_61eb_d5d0][j]));
                f_1a83_3450(17.625, d_61eb_d5d0 + 6.25, 1, d_61eb_d5f0, 0x5c, buf);
            } else {
                f_1a83_3450(1.125, d_61eb_d5d0 + 6.25, 1, 4, 0x24, "");
                f_1a83_3450(5.875, d_61eb_d5d0 + 6.25, 1, d_61eb_d5f0, 0x5c, "");
                f_1a83_3450(17.625, d_61eb_d5d0 + 6.25, 1, d_61eb_d5f0, 0x5c, "");
            }
        }
        f_1a83_5ce1();
        do {
            d_61eb_d59e = f_1a83_5296(-1);
            if (d_61eb_d59e == 0 && f_215d_0c14() >= 0xec && f_215d_0c14() <= 0x138
                && f_215d_0c08() >= 0x24 && f_215d_0c08() <= 0xa5)
                d_61eb_d59e = (f_215d_0c08() - 36) / 22 + 2;
        } while (d_61eb_d59e <= 0 || i + 2 == d_61eb_d59e || d_61eb_d59e > 7);
        if (d_61eb_d59e > 1) {
            f_93a1_6290(i, 0);
            i = d_61eb_d59e - 2;
            f_215d_07ec(8, 0x2c, 0xe8, 0xaa);
        }
    } while (d_61eb_d59e != 1);
}

/* one competition's button of the past winners screen, highlighted when c */
void f_93a1_6290(int n, char c)
{
    char buf[160];
    int len;

    f_215d_088c(c ? 25 : 18);
    f_215d_08aa(236, n * 22 + 36, 312, n * 22 + 55);
    f_215d_089b(25);
    f_215d_0904(236, n * 22 + 36, 312, n * 22 + 55);
    len = f_215d_0b64(d_61eb_4640[n], " ");
    strcpy(buf, d_61eb_4640[n]);
    buf[len - 1] = 0;
    f_1a83_3347(275 - strlen(buf) * 3 + 8, n * 22 + 45, 1, buf);
    strcpy(buf, f_215d_0fb6(d_61eb_4640[n], len + 1, 100));
    f_1a83_3347(275 - strlen(buf) * 3 + 8, n * 22 + 52, 1, buf);
}

/* the name of an Italian Cup round by its week */
char far *f_93a1_63d8(int round)
{
    char far *s;

    s = f_215d_0f2d();
    switch (round) {
    case 14: strcpy(s, "  1ST"); break;
    case 15: case 17: strcpy(s, "  2ND"); break;
    case 27: case 33: strcpy(s, "  3RD"); break;
    case 59: case 63: strcpy(s, "  Q FIN"); break;
    case 71: case 77: strcpy(s, " SEMIS"); break;
    case 98: case 100: strcpy(s, " FINAL"); break;
    case 150: strcpy(s, "  WON"); break;
    }
    strcpy(d_432e_dd5f, f_215d_1043(s));
    if (round <= 33)
        strcat(d_432e_dd5f, " ROUND");
    return s;
}

/* the name of a European cup's round by its week: the cup's name, then the round */
char far *f_93a1_64b0(int round, int cup)
{
    char far *s;

    s = f_215d_0f2d();
    if (cup == 3)
        strcpy(d_432e_ddaf, "A/I CUP");
    else if (cup == 4)
        strcpy(d_432e_ddaf, "UEFA CUP");
    else if (cup == 5)
        strcpy(d_432e_ddaf, "C/W CUP");
    else if (cup == 6)
        strcpy(d_432e_ddaf, "EURO CUP");
    switch (round) {
    case 19: case 23: case 29: strcpy(d_432e_ddff, "QUALS"); break;
    case 21: case 25: strcpy(d_432e_ddff, "1ST RND"); break;
    case 31: case 35: strcpy(d_432e_ddff, "2ND RND"); break;
    case 37: case 47: strcpy(d_432e_ddff, "INTER"); break;
    case 41: case 45:
        if (cup == 6)
            strcpy(d_432e_ddff, "GROUPS");
        else if (cup == 4)
            strcpy(d_432e_ddff, "3RD RND");
        else if (cup == 3)
            strcpy(d_432e_ddff, "INTS");
        break;
    case 61: case 65: strcpy(d_432e_ddff, "SEMIS"); break;
    case 69: case 73:
        if (cup == 6)
            strcpy(d_432e_ddff, "GROUPS");
        else if (cup == 4 || cup == 5)
            strcpy(d_432e_ddff, "QRTERS");
        break;
    case 79: case 83:
        if (cup == 6)
            strcpy(d_432e_ddff, "GROUPS");
        else if (cup == 4 || cup == 5)
            strcpy(d_432e_ddff, "SEMIS");
        break;
    case 75: case 87: case 89: case 91: case 93: strcpy(d_432e_ddff, "FINAL"); break;
    case 150: strcpy(d_432e_ddff, "WINNERS"); break;
    }
    strcpy(d_432e_dd5f, d_432e_ddff);
    d_61eb_d5d0 = f_215d_0b10(d_432e_ddff, "RND");
    if (d_61eb_d5d0 > 0)
        strcpy(&d_432e_dd5f[d_61eb_d5d0 - 1], "ROUND");
    sprintf(s, "%s %s", d_432e_ddaf, d_432e_ddff);
    return s;
}
