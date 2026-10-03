/* @at a694:0000 */
/* @data 60ae:6056 */
/* @module */

/* Overlay 9: the player's career and information pages, the club Info screen, the title
 * picture and the palette, the new game's menus, teams and personalities, future targets,
 * the player details screen with buying and the shortlist, and the history pages. CM93's
 * version of CM1's A1C3.C, whose screen helpers (names, formats, menus, buttons) CM93 moved
 * to segment 14bc. */
#include <stdio.h>
#include <string.h>
#include <mem.h>
#include <stdlib.h>
#include <dos.h>
#include <ctype.h>

/* the functions, in the order of the overlay's stub entries: BCC writes the public definitions (TLINK makes
 * the overlay's stub entries from them) in the order of the first declarations */
void f_a694_0000(int player, int mode);
void f_a694_09a0(int team);
void f_a694_1d89(char a);
char far *f_a694_2118(int a, int b);
int f_a694_21b2(void);
void f_a694_220f(void);
void f_a694_225b(void);
void f_a694_2282(void);
void f_a694_22e9(int p);
void f_a694_34cf(void);
void f_a694_35c7(void);
void f_a694_3626(void);
int f_a694_3a85(int p);
int f_a694_3ce4(int p);
void f_a694_3dd4(void);
void f_a694_455e(void);
void f_a694_46a8(void);
void f_a694_48ef(void);
void f_a694_49c9(int player, int team, char buy);
void f_a694_60f3(int p);

void f_14bc_60ca(void);
void f_14bc_60da(void);
void f_14bc_4bd3(char far *title);
char far *f_14bc_4703(int player);
char f_14bc_6f7c(int player);
void f_14bc_3672(float x, float y, int bg, int fg, int w, char far *s);
void f_14bc_3e40(float x, float y, int bg, int fg, int w, char far *s);
void f_14bc_356a(int x, int y, int colour, char far *s);
void f_1bd3_08cb(int c);
void f_1bd3_08e1(int x1, int y1, int x2, int y2);
void f_1bd3_13a3(void far *a, void far *b, int n);
struct label { int x, y; char far *s; };
extern unsigned char far d_471b_0000[][1860];
extern unsigned char far d_3c35_0000[][1860];
extern unsigned char far d_323f_4cb8[];
extern char far d_2289_320a[];
extern char far d_2289_33c2[][6];
extern char far d_2289_33c3[][6];
extern unsigned char far d_2289_de84[];
extern char far * far d_54d9_0000[];
extern char near *d_60ae_b572[];
extern char near *d_60ae_b93a[];
extern char d_60ae_d977;
extern int d_60ae_dd72;
extern int d_60ae_dd48;
extern int d_60ae_dd6e;
extern int d_60ae_d9de;
extern int d_60ae_d9dc;
extern int d_60ae_d9da;
extern int d_60ae_d9d8;
extern int d_60ae_d9d6;
extern int d_60ae_d9d4;
extern int d_60ae_d9ce;
extern int d_60ae_d9cc;
extern int d_60ae_da98;
extern int d_60ae_dbc2;
extern int d_60ae_da66;
extern int d_60ae_dd92;
extern int d_60ae_dae4;
extern int d_60ae_dafc;
extern int d_60ae_db8c;
extern int d_60ae_daa2;
void f_14bc_000b(float x, int team, char far *title);
void f_14bc_50f8(int a, float x, float y, int c, int d, int e, char far *s);
void f_14bc_548f(int a, char b);
int f_14bc_5635(int a);
void f_14bc_589c(int team);
char f_14bc_2cc0(int x);
int f_14bc_468c(int team);
char far *f_14bc_483d(int player);
char far *f_14bc_490d(int manager, char full);
char far *f_14bc_4a83(int n);
char far *f_14bc_4b12(int division, char full);
void f_1bd3_0b10(int on);
long f_1bd3_131c(long a, long b);
void far *f_1bd3_1617(int handle, int page);
long f_a3de_21b9(int team);
int f_a3de_0000(int x);
char far *f_96bb_6ee2(int round);
char far *f_96bb_6fde(int round);
char far *f_96bb_70c0(int round, int cup);
void f_9e77_0000(int team);
void f_96bb_5f8e(int team);
void f_96bb_4db6(int team);
struct flags_a { unsigned char b0; unsigned f8 : 1; unsigned f9 : 1; unsigned : 6; unsigned : 2; unsigned f18 : 1; unsigned f19 : 1; unsigned : 4; unsigned : 0; unsigned f24 : 1; unsigned : 3; unsigned f28 : 1; unsigned : 1; unsigned f30 : 1; unsigned : 1; };
struct flags_w { unsigned f0 : 1; unsigned f1 : 1; unsigned f2 : 1; unsigned f3 : 1; unsigned f4 : 1; unsigned f5 : 1; unsigned f6 : 1; unsigned f7 : 1; unsigned f8 : 1; unsigned f9 : 1; unsigned f10 : 1; unsigned f11 : 1; unsigned f12 : 1; unsigned f13 : 1; unsigned f14 : 1; unsigned f15 : 1; unsigned f16 : 1; unsigned f17 : 1; unsigned f18 : 1; unsigned f19 : 1; unsigned f20 : 1; unsigned f21 : 1; unsigned f22 : 1; unsigned f23 : 1; unsigned f24 : 1; unsigned f25 : 1; unsigned f26 : 1; unsigned f27 : 1; unsigned f28 : 1; unsigned f29 : 1; unsigned f30 : 1; unsigned f31 : 1; };
union flags { struct flags_a a; struct flags_w w; };
extern union flags d_60ae_ddbe[];
extern int (far *d_60ae_fae6)[1860];
extern int d_60ae_fde6;
extern int far d_471b_b7a8[][26];
extern int far d_323f_47b4[];
extern long far d_323f_3f94[][80];
extern long far d_323f_4354[];
extern unsigned char far d_323f_4c66[];
extern unsigned char far d_323f_6138[];
extern unsigned char far d_323f_4e00[];
extern unsigned char far d_323f_4e52[];
extern unsigned char far d_323f_4f48[][82];
extern unsigned char far d_323f_4fec[];
extern unsigned char far d_323f_503e[];
extern unsigned char far d_323f_5f9e[];
extern unsigned char far d_2289_cf5c[][140];
extern unsigned char far d_2289_d2a4[];
extern unsigned char far d_2289_d330[];
extern unsigned char far d_2289_d3bc[];
extern unsigned char far d_2289_d448[];
extern unsigned char far d_2289_d4d4[];
extern unsigned char far d_2289_d560[];
extern char far d_2289_233c[];
extern char far d_2289_238c[];
extern char far d_2289_3070[];
extern char far d_2289_30c0[];
extern char far d_2289_4cfa[];
extern char far d_2289_4eda[];
extern char d_60ae_d97b;
extern char d_60ae_d97d;
extern int d_60ae_d9d2;
extern int d_60ae_d9d0;
extern int d_60ae_da94;
extern float d_60ae_d8cf;
extern int d_60ae_dccc;
extern int d_60ae_dd3c;
extern int d_60ae_dd60;
extern float d_60ae_d8e3;
extern int d_60ae_dd1e;
extern int d_60ae_dd78;
extern int d_60ae_dd56;
extern int d_60ae_dda0;
extern int d_60ae_d9ca;
extern int d_60ae_dd84;
long f_14bc_5af6(int team);
void unmapped_f_a1c3_5c9f(int team, char far *title, char far *text);
char far *f_14bc_4602(int n, char far *s);
int f_14bc_46ce(int team);
char far *f_14bc_48b4(int player);
int unmapped_f_a1c3_238e(int x);
char far *unmapped_f_a1c3_23c9(int a, int b);
char far *f_14bc_4a14(int player);
void unmapped_f_a1c3_271d(void);
void unmapped_f_a1c3_27e4(char far *title);
void f_14bc_4d4c(float x, int w, char far *prompt);
void unmapped_f_a1c3_29a4(int x, float y, int colour, int maxlen);
void f_14bc_58b1(void);
void f_14bc_58db(int a);
void f_14bc_5a4d(void);
char far *unmapped_f_a1c3_364a(char far *s);
extern unsigned char huge unmapped_d_483b_0000[][1702];
extern char far d_2289_3a68[];
extern char far d_2289_3c20[][6];
extern char far d_2289_3c21[][6];
extern unsigned char far unmapped_d_2f3c_1b40[];
extern char near *d_60ae_b45a[];
extern int far unmapped_d_2f3c_7f93[];
extern long far unmapped_d_2f3c_74f3[][80];
extern long far unmapped_d_2f3c_7b33[];
extern int far unmapped_d_2f3c_85f7[][0x6a6];
extern int far unmapped_d_2f3c_bb27[];
extern unsigned char far unmapped_d_2f3c_0d8c[][140];
extern unsigned char far unmapped_d_2f3c_10d4[];
extern unsigned char far unmapped_d_2f3c_1160[];
extern unsigned char far unmapped_d_2f3c_11ec[];
extern unsigned char far unmapped_d_2f3c_1278[];
extern unsigned char far unmapped_d_2f3c_1304[];
extern unsigned char far unmapped_d_5739_0334[][82];
extern int far unmapped_d_483b_a372[][26];
extern unsigned char huge unmapped_d_3e42_0000[][1702];
extern char far d_2289_d394[];
extern char far d_2289_da3a[];
extern char far d_2289_2c4e[];
extern char far d_2289_2c9e[];
extern char far d_2289_38ce[];
extern char far d_2289_391e[];
extern char far d_2289_51b6[];
extern char far d_2289_5396[];
extern long far unmapped_d_2f3c_0040[];
extern float far unmapped_d_2f3c_0050[][4];
extern int far unmapped_d_2f3c_0070[][4];
extern unsigned char far unmapped_d_2f3c_2794[][20];
extern int far unmapped_d_2f3c_422b[];
extern int far unmapped_d_2f3c_473f[];
extern int far unmapped_d_2f3c_4c53[];
extern unsigned char far d_323f_1c08[];
extern int far unmapped_d_2f3c_d5bf[];
extern int far unmapped_d_2f3c_e30b[];
extern char far * far unmapped_d_5471_0000[];
extern char far * far unmapped_d_5471_0a70[];
extern char far d_2289_2bea[];
extern char far d_2289_40d0[];
extern char far d_2289_4170[];
extern char far d_2289_4fcc[];
extern char far d_2289_4fea[][4][20];
extern char far d_2289_509e[];
extern char d_60ae_9612;
extern long d_60ae_d837;
extern float d_60ae_d8ef;
extern char d_60ae_d901;
extern char d_60ae_d930;
extern int d_60ae_d9c6;
extern int d_60ae_d9c8;
extern int d_60ae_daea;
extern int d_60ae_db90;
extern int d_60ae_dbde;
extern int d_60ae_dce8;
extern int d_60ae_dd36;
extern int d_60ae_dd42;
extern int d_60ae_dd54;
extern int d_60ae_dd64;
extern long far *d_60ae_faee;
extern char d_60ae_fdb6;
extern int d_60ae_fdea;
extern int d_60ae_fb04;
void f_1dfe_000a(void);
void f_1dfe_0044(void);
char far *f_1bd3_0157();
void f_1bd3_01c3(void);
void f_1bd3_0476(void);
void f_1bd3_07e6(int noflip);
void f_1bd3_0821(unsigned x1, unsigned y1, unsigned x2, unsigned y2);
void f_1bd3_08d6(int c);
void f_1bd3_0928(int x1, int y1, int x2, int y2);
void f_1bd3_0992(void);
int f_1bd3_0c16(void);
char far *f_1bd3_0cec(void);
long f_1bd3_0df6(void);
char far *f_1bd3_0efb(void);
unsigned f_1bd3_0b1b(char far *s, char far *set);
void far *unmapped_f_14d2_16bc(int handle, int page);
void f_1bd3_18f1(void);
void f_1bd3_19b1(void);
void f_14bc_3c75(float x, float y, int colour, char far *s);
void f_1bd3_1a23();
void f_1bd3_067c(void);
int f_1bd3_0c0e(void);
int f_1bd3_0c06(void);
int unmapped_f_14d2_0c2a(int n);
void f_14bc_3a36(float x, float y, int bg, int fg, int w, char far *s);
long f_14bc_0d32(long v, char c);
extern int d_60ae_fdce;
extern int d_60ae_fdd6;
extern int unmapped_d_5d9c_a350;
extern int unmapped_d_5d9c_a35c;
extern unsigned char far *d_60ae_dd8e;
extern long (far *d_60ae_fade)[80];
extern char far *d_60ae_ddae;
extern unsigned char far d_2289_5814[];
extern char far d_2289_4acc[];
extern char far d_2289_2e2e[];
extern int d_60ae_dc90;
extern int d_60ae_d9c2;
extern int d_60ae_d9c4;
extern int d_60ae_dd5e;
extern int unmapped_d_5d9c_9f19;
extern int d_60ae_dd68;
extern int d_60ae_dc7e;
extern int d_60ae_d9c0;
extern int d_60ae_d9be;
extern float d_60ae_d8eb;
extern float d_60ae_d8d3;
extern float d_60ae_d8df;
extern float d_60ae_d853;
extern float d_60ae_d84b;
extern float d_60ae_d847;
extern float d_60ae_d843;
extern char d_60ae_d902;
extern char d_60ae_d97c;
extern char d_60ae_d91a;
extern long d_60ae_d7bb;
extern long d_60ae_d7b7;
extern long d_60ae_d7b3;
extern long d_60ae_d7af;
char far *unmapped_f_992a_5114(int n);
int f_14bc_1eb7(int player);
long f_14bc_020c(int p, int n);
long f_14bc_0dd6(long v);
char far *f_14bc_0e7a(long amount);
long f_9107_1391(int player);
char f_14bc_6b4a(int player, char c);
char far *f_14bc_2f2c(int x, char c);
int f_8aa1_1a8b(int team, int p);
extern long d_60ae_d83b;
extern char d_60ae_d939;
extern int d_60ae_d9e2;
extern int d_60ae_d9e4;
extern int d_60ae_d9e6;
extern int d_60ae_dbbc;
extern int far unmapped_d_2f3c_a08f[];
extern int far unmapped_d_2f3c_addb[];
extern char far * far unmapped_d_5471_1770[];
extern char far * far unmapped_d_5471_17f4[];
extern char far d_2289_5be8[][0x6a6];
extern char far d_2289_7680[][0x6a6];
extern char far d_2289_8a72[];
extern char far d_2289_9118[];
extern char far d_2289_97be[];
extern char far d_2289_9e64[];
extern char far d_2289_b8fc[];
extern char far d_2289_e0e0[];
extern char far d_2289_2cee[];
extern char far d_2289_2d3e[];
extern char far d_2289_2d8e[];
extern char far d_2289_2dde[];
extern char far d_2289_2e7e[];
extern char far d_2289_2ece[];
extern char far d_2289_2f1e[];
extern char far d_2289_2f6e[];
extern char far d_2289_2fbe[];
extern char far d_2289_300e[];
extern char far d_2289_305e[];
extern char far d_2289_30ae[];
extern char far d_2289_30fe[];
extern char far d_2289_314e[];
extern char far d_2289_319e[];
extern char far d_2289_31ee[];
extern char far d_2289_323e[];
extern char far d_2289_328e[];
extern char far d_2289_32de[];
extern char far d_2289_332e[];
extern char far d_2289_337e[];
extern char far d_2289_33ce[];
extern char far d_2289_341e[];
extern char far d_2289_346e[];
extern char far d_2289_34be[];
extern char far d_2289_350e[];
extern char far d_2289_355e[];
extern char far d_2289_35ae[];
extern char far d_2289_35fe[];
extern char far d_2289_364e[];
extern char far d_2289_373e[];
extern char far d_2289_3e28[];
extern char far d_2289_4120[];
extern char far d_2289_4262[];
extern char far d_2289_4492[];
extern char far d_2289_52a6[];
void f_14bc_2f90(int n, char far *title, char far *items);
void f_14bc_3334(int last);
char far *f_14bc_3523(int x);
float f_14bc_2cf4(int x);
void f_a3de_0066(int a, int b);
void f_9e77_4e5e(int n);
extern char d_60ae_d903;
extern char d_60ae_d904;
extern char d_60ae_d909;
extern int d_60ae_da04;
extern int d_60ae_da06;
extern int d_60ae_da08;
extern int d_60ae_da0a;
extern int d_60ae_db7e;
extern int d_60ae_dcc4;
extern int d_60ae_dce4;
extern int d_60ae_dce6;
extern int d_60ae_dd46;
extern int d_60ae_dd5a;
extern int d_60ae_dd5c;
extern char near *d_60ae_b61a[];
extern int far d_2289_fb9d[];
extern unsigned char far unmapped_d_2f3c_53f1[];
extern unsigned char far unmapped_d_2f3c_567b[];
extern unsigned char far unmapped_d_2f3c_5905[];
extern unsigned char far unmapped_d_2f3c_5e19[];
extern unsigned char far unmapped_d_2f3c_7269[];
extern unsigned char far d_323f_4c14[][82];
extern unsigned char far d_323f_08b4[];
extern unsigned char far d_323f_0a80[];
extern unsigned char far d_323f_0c4c[];
extern unsigned char far d_323f_3c78[][140];
void f_a3de_03bb(int a, int b, int c);
void f_a3de_069a(int t);
void f_a3de_08c3(int a, int b);
int f_1bd3_1369(int a, int b);
char f_14bc_248a(int);
void unmapped_f_992a_424a(int p);
void f_b628_674e(char a);
void f_b628_68ca(char a, int i, int n);
extern int d_60ae_dd98;
extern int d_60ae_dae0;
extern int d_60ae_db82;
extern int d_60ae_dcac;
extern int d_60ae_da10;
extern int d_60ae_da0e;
extern int d_60ae_d9fe;
extern int d_60ae_d9fc;
extern int d_60ae_d9f0;
extern int d_60ae_d9ee;
extern int d_60ae_dd9c;
extern int d_60ae_dc7a;
extern int d_60ae_dd80;
extern int d_60ae_dd82;
extern int d_60ae_dd28;
extern int d_60ae_dd7e;
extern int d_60ae_dd7c;
extern int d_60ae_dd7a;
extern int unmapped_d_5d9c_9f87;
extern int d_60ae_fde8;
extern int d_60ae_fde0;
extern int d_60ae_fdee;
extern long d_60ae_d7ab;
extern char d_60ae_d906;
extern int d_60ae_d8c8[];
extern int far *d_60ae_faea;
extern int (far *d_60ae_face)[2][22];
extern int (far *d_60ae_fada)[100];
extern int (far *unmapped_d_5d9c_a002)[170];
extern unsigned char far unmapped_d_5739_0290[];
extern unsigned char far unmapped_d_5739_02e2[];
extern unsigned char far d_323f_4f9a[];
extern int far d_323f_1200[][2][94];
extern int far unmapped_d_2f3c_7c73[][80];
extern unsigned char far unmapped_d_2f3c_029c[];
extern int far unmapped_d_2f3c_1d94[][16];
extern char far d_2289_0ab4[][101];
extern char far d_2289_0780[][82][5];
extern char far d_2289_5918[][80];
extern char far d_2289_b256[];
extern char far d_2289_36ee[];
extern int far unmapped_d_483b_a0ba[];
extern int far unmapped_d_483b_a176[];
char far *f_1bd3_0e5e(char far *s);
char far *f_1bd3_0f30(char far *s, unsigned n);
char f_14bc_69ec(int x);
char f_14bc_2dfc(int x);
void f_a3de_14f5(char all);
void f_a3de_1630(char redraw);
void f_14bc_0b83(char far *s);
extern unsigned char far d_323f_52ce[];
extern char far d_2289_369e[];
extern char d_60ae_d96a;
extern char d_60ae_d975;
extern int d_60ae_d990;
extern int d_60ae_d9bc;
extern int d_60ae_d9e8;
extern int d_60ae_dc6e;
extern int d_60ae_dc70;
extern int d_60ae_dd4a;
extern int d_60ae_d9e0;
extern float far d_2289_be38[][4];
extern int far d_2289_be58[][4];
extern long far d_2289_be20[];
extern int far d_2289_be30[];
extern int d_60ae_dda4;
extern int d_60ae_fde4;
extern char far *d_60ae_fae2;
void f_1bd3_05af(char reset);
void f_1bd3_03a7(int i, char r, char g, char b);
extern char far d_2289_22d8[];
extern char far d_2289_4be2[];
char f_b628_4f4c(int player);
extern int far d_323f_824a[];
extern char far * far d_54d9_02c6[];
extern char far * far d_54d9_0593[];
extern int d_60ae_fddc;
extern unsigned char (far *d_60ae_fad2)[1860];
extern char far d_2289_23dc[];
extern char far d_2289_242c[];
extern char far d_2289_24cc[];
extern char far d_2289_251c[];
extern char far d_2289_256c[];
extern char far d_2289_25bc[];
extern char far d_2289_260c[];
extern char far d_2289_265c[];
extern char far d_2289_26ac[];
extern char far d_2289_26fc[];
extern char far d_2289_2760[];
extern char far d_2289_27b0[];
extern char far d_2289_2800[];
extern char far d_2289_2850[];
extern char far d_2289_28a0[];
extern char far d_2289_28f0[];
extern char far d_2289_2940[];
extern char far d_2289_2990[];
extern char far d_2289_29e0[];
extern char far d_2289_2a30[];
extern char far d_2289_2a80[];
extern char far d_2289_2ad0[];
extern char far d_2289_2b20[];
extern char far d_2289_2b70[];
extern char far d_2289_2bc0[];
extern char far d_2289_2c10[];
extern char far d_2289_2c60[];
extern char far d_2289_2cb0[];
extern char far d_2289_2d00[];
extern char far d_2289_2d50[];
extern char far d_2289_2da0[];
extern char far d_2289_2df0[];
extern char far d_2289_2ee0[];
extern char far d_2289_35ca[];
extern char far d_2289_38c2[];
extern char far d_2289_3af4[];
extern char far d_2289_3f04[];
extern char far d_2289_4dea[];
long f_1bd3_0d69(long n);
extern int far d_2289_b9f8[];
extern unsigned char far d_323f_1e92[];
extern unsigned char far d_323f_211c[];
extern unsigned char far d_323f_23a6[];
extern unsigned char far d_323f_28ba[];
extern unsigned char far d_323f_3d0a[];
extern unsigned char far d_54d9_08b4[];
extern unsigned char far d_54d9_0a80[];
extern unsigned char far d_54d9_0c4c[];
extern unsigned char far d_54d9_4f40[][140];
extern char near *d_60ae_b616[];
extern char d_60ae_d8f6;
void f_14bc_5bfe(int team, char far *title, char far *text);
int f_b628_0000(int a, char team);
void f_b628_65ab(void);
extern int far d_323f_4494[][80];
extern long far d_323f_40d4[];
extern long far d_323f_4214[];
extern unsigned char far d_323f_618a[];
extern unsigned char far d_323f_62d2[];
extern char far d_2289_1e28[][82][5];
extern char far d_2289_7b6a[][86];
extern char far d_2289_5658[][80];
extern unsigned char far d_2289_c46c[];
extern int far d_2289_f108[][16];
extern int far d_2289_be68[][2][22];
extern unsigned char far d_2289_fb10[][20];
extern unsigned char far d_2289_fb0c[];
extern int far d_54d9_1200[][2][98];
extern int far d_471b_b4e0[];
extern int far d_471b_b5a4[];
extern unsigned char far d_471b_d8c8[];
extern char d_60ae_d7a2;
extern char d_60ae_d8f4;
extern int d_60ae_dda2;
extern int d_60ae_dd0e;
extern int d_60ae_fde2;
extern char (far *d_60ae_ddb6)[101];
extern unsigned char far d_323f_6094[];
extern char far d_2289_2e40[];
extern char far d_2289_0050[];

/* the career screen's buttons */
static struct label d_60ae_6056[] = {
    {263, 50, "Seasons"}, {272, 84, "Apps"}, {269, 118, "Goals"}, {272, 152, "Av R"}
};

void f_a694_0000(int player, int mode)
{
    struct label far *q;
    char buf[320];

    f_14bc_60ca();
    f_14bc_4bd3("");
    sprintf(buf, " %s - aged %d", f_14bc_4703(player), d_471b_0000[17][player]);
    if (f_14bc_6f7c(player) == 0) {
        if (d_3c35_0000[7][player] < 255)
            f_14bc_3e40(1.25, 1.25, d_323f_4cb8[d_3c35_0000[7][player]] / 16,
                        d_323f_4cb8[d_3c35_0000[7][player]] % 16, 0, buf);
        else
            f_14bc_3e40(1.25, 1.25, d_323f_4cb8[d_471b_0000[18][player]] / 16,
                        d_323f_4cb8[d_471b_0000[18][player]] % 16, 0, buf);
    } else
        f_14bc_3e40(1.25, 1.25, 1, 4, 0, buf);
    f_14bc_3672(1.125, 5.25, 1, 8, 0, " YEAR ");
    f_14bc_3672(5.875, 5.25, 1, 8, 100, " CLUB");
    f_14bc_3672(18.625, 5.25, 1, 8, 0, " AP ");
    f_14bc_3672(21.875, 5.25, 1, 8, 0, " GL ");
    f_14bc_3672(25.125, 5.25, 1, 8, 0, " AV R ");
    d_60ae_dd72 = 6;
    d_60ae_dd48 = 4;
    d_60ae_dd6e = 12;
    d_60ae_d9de = 0;
    d_60ae_d9dc = 0;
    d_60ae_d9da = 0;
    d_60ae_d9d8 = 0;
    if (d_60ae_da98 == 0) {
        f_14bc_3672(1.125, 4.0, 0, 6, 0x130, " NO LEAGUE CAREER TO DATE");
    } else {
        d_60ae_d9d6 = -1;
        d_60ae_d9d4 = -1;
        if (d_60ae_da98 > 22) {
            d_60ae_dbc2 = d_60ae_da98 - 21;
            d_60ae_d9ce = d_60ae_dbc2 - 1;
        } else {
            d_60ae_dbc2 = 1;
            d_60ae_d9ce = d_60ae_da98;
        }
        d_60ae_da66 = d_2289_33c3[d_60ae_dbc2 - 1][0] + 1900;
        sprintf(buf, " FOOTBALL LEAGUE CAREER SINCE %d", d_60ae_da66);
        f_14bc_3672(1.125, 4.0, 0, 6, 0x130, buf);
        d_60ae_dd92 = d_60ae_dbc2;
        d_60ae_d9cc = 1;
        do {
            unsigned char far *p;

            p = (unsigned char far *)d_2289_320a;
            memcpy(d_2289_320a, &d_2289_33c2[d_60ae_dd92 - 1][1], 6);
            d_2289_320a[6] = 0;
            d_60ae_da66 = d_2289_320a[0] + 1900;
            if (d_60ae_da66 != d_60ae_d9d6) {
                d_60ae_d9de++;
                d_60ae_d9d6 = d_60ae_da66;
            }
            d_60ae_dae4 = (unsigned char)d_2289_320a[1] < 140
                ? d_2289_de84[(unsigned char)d_2289_320a[1]] : (unsigned char)d_2289_320a[1];
            d_60ae_dafc = d_2289_320a[2];
            d_60ae_d9dc += d_60ae_dafc;
            d_60ae_db8c = d_2289_320a[3];
            d_60ae_d9da += d_60ae_db8c;
            d_60ae_daa2 = (p[4] << 8) | p[5];
            d_60ae_d9d8 += d_60ae_daa2;
            if ((mode == 0 && d_60ae_d9cc < 17) || (mode == 1 && d_60ae_d9cc > 16)) {
                sprintf(buf, " %d ", d_60ae_da66);
                f_14bc_3672(1.125, d_60ae_dd72 + 0.25, 6, 3, 0, buf);
                if (d_60ae_dae4 != d_60ae_d9d4) {
                    if (d_60ae_dae4 <= 79)
                        sprintf(buf, " %.15s", (char far *)d_60ae_b572[d_60ae_dae4]);
                    else if (d_60ae_dae4 <= 139)
                        sprintf(buf, " %.15s", (char far *)d_60ae_b93a[d_60ae_dae4]);
                    else
                        sprintf(buf, " <%.13s>", d_54d9_0000[d_60ae_dae4 - 140]);
                    d_60ae_d9d4 = d_60ae_dae4;
                } else
                    strcpy(buf, "");
                f_14bc_3672(5.875, d_60ae_dd72 + 0.25, 1, d_60ae_dd48, 100, buf);
                sprintf(buf, " %02d ", d_60ae_dafc);
                f_14bc_3672(18.625, d_60ae_dd72 + 0.25, 1, 2, 0, buf);
                sprintf(buf, " %02d ", d_60ae_db8c);
                f_14bc_3672(21.875, d_60ae_dd72 + 0.25, 1, 2, 0, buf);
                sprintf(buf, " %s ", f_a694_2118(d_60ae_dafc, d_60ae_daa2));
                f_14bc_3672(25.125, d_60ae_dd72 + 0.25, 1, 9, 0, buf);
                f_1bd3_13a3(&d_60ae_dd48, &d_60ae_dd6e, 2);
                d_60ae_dd72++;
            }
            d_60ae_d9cc++;
            d_60ae_d977 = d_60ae_dd92 == d_60ae_d9ce;
            if (d_60ae_dd92 == 22)
                d_60ae_dd92 = 1;
            else
                d_60ae_dd92++;
        } while (!d_60ae_d977);
    }
    while (d_60ae_dd72 < 22) {
        f_14bc_3672(1.125, d_60ae_dd72 + 0.25, 6, 3, 0, "      ");
        f_14bc_3672(5.875, d_60ae_dd72 + 0.25, 1, d_60ae_dd48, 100, "");
        f_14bc_3672(18.625, d_60ae_dd72 + 0.25, 1, 2, 0, "    ");
        f_14bc_3672(21.875, d_60ae_dd72 + 0.25, 1, 2, 0, "    ");
        f_14bc_3672(25.125, d_60ae_dd72 + 0.25, 1, 9, 0, "      ");
        f_1bd3_13a3(&d_60ae_dd48, &d_60ae_dd6e, 2);
        d_60ae_dd72++;
    }
    f_14bc_60da();
    for (d_60ae_dd72 = 36, q = d_60ae_6056; d_60ae_dd72 <= 138; d_60ae_dd72 += 34, q++) {
        f_1bd3_08cb(24);
        f_1bd3_08e1(238, d_60ae_dd72, 312, d_60ae_dd72 + 15);
        f_14bc_356a(266, d_60ae_dd72 + 7, 1, "Career");
        f_14bc_356a(q->x, q->y, 1, q->s);
    }
    sprintf(buf, "   %03d", d_60ae_d9de);
    f_14bc_3e40(30.0, 7.25, 0, 1, 71, buf);
    sprintf(buf, "   %03d", d_60ae_d9dc);
    f_14bc_3e40(30.0, 11.5, 0, 1, 71, buf);
    sprintf(buf, "   %03d", d_60ae_d9da);
    f_14bc_3e40(30.0, 15.75, 0, 1, 71, buf);
    sprintf(buf, "   %.3s", f_a694_2118(-d_60ae_d9dc, d_60ae_d9d8));
    f_14bc_3e40(30.0, 20.0, 0, 1, 71, buf);
}

void f_a694_09a0(int team)
{
    int who[3];
    char buf[320];
    char far *names[7] = { "PLD", "WON", "DRN", "LST", "FOR", "AGG", "PTS" };
    float best[3];
    unsigned i;
    int j;

    do {
        f_14bc_60ca();
        f_14bc_000b(1.25, team, "Info");
        f_1bd3_0b10(1);
        f_1bd3_08cb(16);
        f_1bd3_08e1(12, 28, 160, 86);
        f_1bd3_08e1(12, 128, 316, 170);
        f_1bd3_08e1(168, 28, 316, 86);
        f_1bd3_08e1(12, 94, 316, 120);
        f_1bd3_08cb(20);
        f_1bd3_08e1(8, 24, 156, 82);
        f_1bd3_08cb(19);
        f_1bd3_08e1(8, 124, 312, 166);
        f_1bd3_08cb(20);
        f_1bd3_08e1(164, 24, 312, 82);
        f_1bd3_08cb(30);
        f_1bd3_08e1(8, 90, 312, 116);
        f_14bc_3672(1.375, 4.0, 0, 1, 144, "        General");
        f_14bc_3672(1.375, 5.0, 1, 12, 71, " Manager");
        sprintf(buf, " %.10s", f_14bc_490d(d_323f_47b4[team], -1));
        f_14bc_3672(10.5, 5.0, 1, 12, 71, buf);
        f_14bc_3672(1.375, 6.0, 1, 12, 71, " Board");
        sprintf(buf, " %d%%", d_323f_4e00[team]);
        f_14bc_3672(10.5, 6.0, 1, 12, 71, buf);
        f_14bc_3672(1.375, 7.0, 1, 12, 71, " Capacity");
        sprintf(buf, " %ld (%d)", d_323f_4c66[team] * 1000L, d_323f_6138[team]);
        f_14bc_3672(10.5, 7.0, 1, 12, 71, buf);
        f_14bc_3672(1.375, 8.0, 1, 12, 71, " Cash");
        if (d_60ae_d97b != 0 || f_14bc_2cc0(team))
            sprintf(buf, " %ld", f_1bd3_131c(d_323f_3f94[0][team] - f_a3de_21b9(team), 0L));
        else
            strcpy(buf, " Unknown");
        f_14bc_3672(10.5, 8.0, 1, 12, 71, buf);
        f_14bc_3672(1.375, 9.0, 1, 12, 71, " Ints");
        d_60ae_d9d2 = 0;
        d_60ae_d9d0 = 0;
        for (i = 0; i < 3; i++)
            best[i] = -1;
        for (j = 0; j <= d_323f_4e52[team] - 1; j++) {
            d_60ae_dd84 = d_471b_b7a8[team][j];
            if (d_60ae_ddbe[d_60ae_dd84].a.f18) {
                if (d_60ae_ddbe[d_60ae_dd84].a.f19)
                    d_60ae_d9d0++;
                else
                    d_60ae_d9d2++;
            }
            d_60ae_dafc = d_3c35_0000[12][d_60ae_dd84];
            if (d_60ae_dafc > 0) {
                d_60ae_db8c = d_3c35_0000[13][d_60ae_dd84];
                d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 0);
                d_60ae_d8cf = (float)d_60ae_fae6[2][d_60ae_dd84] / d_60ae_dafc;
                d_60ae_da94 = d_3c35_0000[2][d_60ae_dd84] - d_3c35_0000[2][d_60ae_dd84] % 5;
                if (d_60ae_db8c > best[0] || best[0] == -1) {
                    best[0] = d_60ae_db8c;
                    who[0] = d_60ae_dd84;
                }
                if (d_60ae_d8cf > best[1] || best[1] == -1) {
                    best[1] = d_60ae_d8cf;
                    who[1] = d_60ae_dd84;
                }
                if (d_60ae_da94 > best[2] || best[2] == -1) {
                    best[2] = d_60ae_da94;
                    who[2] = d_60ae_dd84;
                }
            }
        }
        sprintf(buf, " %d", d_60ae_d9d2);
        f_14bc_3672(10.5, 9.0, 1, 12, 71, buf);
        f_14bc_3672(1.375, 10.0, 1, 12, 71, " U-21s");
        sprintf(buf, " %d", d_60ae_d9d0);
        f_14bc_3672(10.5, 10.0, 1, 12, 71, buf);
        f_14bc_3672(20.875, 4.0, 0, 1, 144, "       CUP ROUNDS");
        f_14bc_3672(20.875, 5.0, 1, 12, 144, "       THE FA CUP");
        strcpy(d_2289_238c, "Draw Not Made");
        if (d_2289_d2a4[team] > 0) {
            strcpy(d_2289_233c, f_96bb_6ee2(d_2289_d2a4[team]));
            strcpy(d_2289_238c, d_2289_30c0);
        }
        sprintf(buf, "%*s", (72 - strlen(d_2289_238c) * 3) / 6 + strlen(d_2289_238c), d_2289_238c);
        f_14bc_3672(20.875, 6.0, 6, 12, 144, buf);
        strcpy(d_2289_4cfa, "THE Coca-Cola CUP");
        sprintf(buf, "%*s", (72 - strlen(d_2289_4cfa) * 3) / 6 + strlen(d_2289_4cfa), d_2289_4cfa);
        f_14bc_3672(20.875, 7.0, 1, 12, 144, buf);
        strcpy(d_2289_238c, "Draw Not Made");
        if (d_2289_d330[team] > 0) {
            strcpy(d_2289_233c, f_96bb_6fde(d_2289_d330[team]));
            strcpy(d_2289_238c, d_2289_30c0);
        }
        sprintf(buf, "%*s", (72 - strlen(d_2289_238c) * 3) / 6 + strlen(d_2289_238c), d_2289_238c);
        f_14bc_3672(20.875, 8.0, 6, 12, 144, buf);
        d_60ae_dccc = 0;
        if (d_2289_d3bc[team] > 0)
            d_60ae_dccc = 8;
        else if (d_2289_d448[team] > 0)
            d_60ae_dccc = 9;
        else if (d_2289_d4d4[team] > 0)
            d_60ae_dccc = 10;
        else if (d_2289_d560[team] > 0)
            d_60ae_dccc = 11;
        if (d_60ae_dccc > 0) {
            strcpy(d_2289_233c, f_96bb_70c0(d_2289_cf5c[d_60ae_dccc][team], d_60ae_dccc - 5));
            sprintf(d_2289_4cfa, "THE %s", d_2289_3070);
            sprintf(buf, "%*s", (72 - strlen(d_2289_4cfa) * 3) / 6 + strlen(d_2289_4cfa), d_2289_4cfa);
            f_14bc_3672(20.875, 9.0, 1, 12, 144, buf);
            strcpy(d_2289_238c, "Draw Not Made");
            if (d_2289_cf5c[d_60ae_dccc][team] > 0)
                strcpy(d_2289_238c, d_2289_30c0);
            sprintf(buf, "%*s", (72 - strlen(d_2289_238c) * 3) / 6 + strlen(d_2289_238c), d_2289_238c);
            f_14bc_3672(20.875, 10.0, 6, 12, 144, buf);
        } else {
            f_14bc_3672(20.875, 9.0, 1, 12, 144, "");
            f_14bc_3672(20.875, 10.0, 6, 12, 144, "");
        }
        f_14bc_3672(1.375, 12.25, 1, 2, 300, "                  League Record");
        d_60ae_dd3c = f_14bc_468c(team);
        f_14bc_3672(1.375, 13.25, 0, 1, 34, " DIV");
        sprintf(buf, " %s", f_14bc_4b12(d_60ae_dd3c / 20 + 1, 3));
        f_14bc_3672(1.375, 14.25, 1, 4, 34, buf);
        f_14bc_3672(5.875, 13.25, 0, 1, 33, " POS");
        sprintf(buf, " %s", f_14bc_4a83(d_60ae_dd3c % 20 + 1));
        f_14bc_3672(5.875, 14.25, 1, 4, 33, buf);
        for (d_60ae_dd60 = 0; d_60ae_dd60 <= 6; d_60ae_dd60++) {
            d_60ae_d8e3 = d_60ae_dd60 * 4.125 + 10.25;
            sprintf(buf, " %s", names[d_60ae_dd60]);
            f_14bc_3672(d_60ae_d8e3, 13.25, 0, 6, 31, buf);
            if (d_60ae_dd60 == 0)
                d_60ae_dd1e = d_60ae_dd78 - 1;
            else if (d_60ae_dd60 == 1)
                d_60ae_dd1e = d_323f_4fec[team];
            else if (d_60ae_dd60 == 2)
                d_60ae_dd1e = d_60ae_dd78 - 1 - d_323f_4fec[team] - d_323f_503e[team];
            else if (d_60ae_dd60 == 6)
                d_60ae_dd1e = f_a3de_0000(d_60ae_dd3c);
            else
                d_60ae_dd1e = d_323f_4f48[d_60ae_dd60][team];
            sprintf(buf, "%3d", d_60ae_dd1e);
            f_14bc_3672(d_60ae_d8e3, 14.25, 1, 4, 31, buf);
        }
        f_14bc_3672(1.375, 16.5, 0, 1, 300, "                   This season");
        f_14bc_3672(1.375, 17.5, 0, 6, 149, " Average attendance");
        strcpy(d_2289_4cfa, "");
        if (d_323f_5f9e[team] > 0)
            sprintf(d_2289_4cfa, " %ld", d_323f_4354[team] / d_323f_5f9e[team]);
        f_14bc_3672(20.25, 17.5, 0, 6, 149, d_2289_4cfa);
        f_14bc_3672(1.375, 18.5, 0, 6, 149, " Top Goalscorer");
        strcpy(d_2289_4cfa, "");
        if (best[0] > 0) {
            strcpy(buf, f_14bc_483d(who[0]));
            buf[18] = 0;
            sprintf(d_2289_4cfa, " %s - %d", buf, (int)best[0]);
        }
        f_14bc_3672(20.25, 18.5, 0, 6, 149, d_2289_4cfa);
        f_14bc_3672(1.375, 19.5, 0, 6, 149, " Best Average Rating");
        strcpy(d_2289_4cfa, "");
        if (best[1] > 0) {
            sprintf(d_2289_4eda, "%4.2f", best[1]);
            strcpy(buf, f_14bc_483d(who[1]));
            buf[16] = 0;
            sprintf(d_2289_4cfa, " %s - %s", buf, d_2289_4eda);
        }
        f_14bc_3672(20.25, 19.5, 0, 6, 149, d_2289_4cfa);
        f_14bc_3672(1.375, 20.5, 0, 6, 149, " Worst Discipline");
        strcpy(d_2289_4cfa, "");
        if (best[2] > 0) {
            strcpy(buf, f_14bc_483d(who[2]));
            buf[18] = 0;
            sprintf(d_2289_4cfa, " %s - %d", buf, (int)best[2]);
        }
        f_14bc_3672(20.25, 20.5, 0, 6, 149, d_2289_4cfa);
        f_14bc_60da();
        f_14bc_50f8(2, 25.75, 1.125, 1, 2, 31, "PRNT");
        f_14bc_50f8(2, 30.25, 1.125, 1, 2, 31, "HIST");
        f_14bc_50f8(2, 34.75, 1.125, 1, 2, 31, "RECS");
        f_14bc_50f8(2, 1.25, 22.5, 1, 4, 301, "                 DONE");
        if (d_60ae_d97d == 0)
            f_14bc_589c(1);
        do {
            d_60ae_d9ca = d_60ae_dda0 = f_14bc_5635(d_60ae_dd56);
            if (d_60ae_d9ca == 1) {
                f_9e77_0000(team);
                f_14bc_548f(1, 0);
            }
        } while (d_60ae_d9ca <= 0);
        if (d_60ae_d9ca == 2)
            f_96bb_5f8e(team);
        else if (d_60ae_d9ca == 3)
            f_96bb_4db6(team);
    } while (d_60ae_d9ca != 4);
}

void f_a694_1d89(char a)
{
    unsigned i, j;
    register unsigned char c;
    unsigned char k, n;
    unsigned char used[2][4];

    for (i = 0; i < 2; i++)
        for (j = 0; j < 4; j++)
            d_2289_be38[i][j] = 0;
    memset(d_2289_be58, -1, 16);
    memset(d_2289_be20, 0, 16);
    memset(d_2289_be30, -1, 8);
    memset(used, 0, 8);
    d_60ae_d9c8 = 3 - a * 17;
    do {
        for (d_60ae_dd84 = 0; d_60ae_dd84 <= d_60ae_dda4 - 1; d_60ae_dd84++) {
            d_60ae_dafc = d_3c35_0000[a ? 0 : 21][d_60ae_dd84];
            d_60ae_dd54 = d_471b_0000[18][d_60ae_dd84] / 20;
            d_60ae_dd36 = d_471b_0000[17][d_60ae_dd84] < 22;
            if (used[d_60ae_dd36][d_60ae_dd54] == 0 && d_60ae_dafc >= d_60ae_d9c8) {
                if (a) {
                    d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 0);
                    d_60ae_d9c6 = (*d_60ae_fae6)[d_60ae_dd84];
                } else
                    d_60ae_d9c6 = d_3c35_0000[22][d_60ae_dd84];
                d_60ae_d8cf = (float)d_60ae_d9c6 / d_60ae_dafc;
                if (d_2289_be38[d_60ae_dd36][d_60ae_dd54] < d_60ae_d8cf) {
                    d_2289_be58[d_60ae_dd36][d_60ae_dd54] = d_60ae_dd84;
                    d_2289_be38[d_60ae_dd36][d_60ae_dd54] = d_60ae_d8cf;
                }
            }
        }
        n = 0;
        for (c = 0; c <= 1; c++)
            for (k = 0; k <= 3; ++k)
                if (d_2289_be58[c][k] > -1) {
                    used[c][k] = 1;
                    n++;
                }
        d_60ae_d9c8--;
    } while (n < 8 && d_60ae_d9c8 > 1);
    for (d_60ae_dd42 = 0; d_60ae_dd42 <= d_60ae_dce8 + 645; d_60ae_dd42++) {
        if (d_323f_1c08[d_60ae_dd42] < 0xff) {
            if (a) {
                d_60ae_faee = f_1bd3_1617(d_60ae_fdea, 0);
                d_60ae_d837 = d_60ae_faee[d_60ae_dd42];
            } else {
                d_60ae_fae2 = f_1bd3_1617(d_60ae_fde4, 0);
                d_60ae_d837 = ((int far *)(d_60ae_fae2 + 2600))[d_60ae_dd42];
            }
            d_60ae_dd54 = d_323f_1c08[d_60ae_dd42] / 20;
            if (d_2289_be20[d_60ae_dd54] < d_60ae_d837) {
                d_2289_be30[d_60ae_dd54] = d_60ae_dd42;
                d_2289_be20[d_60ae_dd54] = d_60ae_d837;
            }
        }
    }
}

char far *f_a694_2118(int a, int b)
{
    char far *buf;

    buf = f_1bd3_0efb();
    if (a == 0)
        strcpy(buf, "----");
    else if (a > 0)
        sprintf(buf, "%4.2f", (float)b / a);
    else if (a < 0)
        sprintf(buf, "%3.1f", (float)b / abs(a));
    return buf;
}

int f_a694_21b2(void)
{
    int m;

    m = 4;
    if (d_60ae_d97b == 0) {
        for (d_60ae_dd60 = 646; d_60ae_dd60 <= d_60ae_dce8 + 645; d_60ae_dd60++) {
            if (d_323f_1c08[d_60ae_dd60] < 0xff) {
                d_60ae_dd54 = d_323f_1c08[d_60ae_dd60] / 20;
                if (d_60ae_dd54 < m)
                    m = d_60ae_dd54;
            }
        }
    }
    if (m == 4)
        m = 0;
    return m;
}

void f_a694_220f(void)
{
    f_a694_225b();
    f_1bd3_0992();
    f_1bd3_0476();
    strcpy(d_2289_22d8, "");
    strcpy(d_2289_4be2, "picture5.lbm");
    f_1bd3_05af(-1);
    f_a694_2282();
}

void f_a694_225b(void)
{
    f_1bd3_01c3();
    f_1bd3_08cb(0);
    f_1bd3_08e1(0, 0, 0x13f, 0xc7);
}

/* colours 16-31 of the palette, as RGB triples */
static unsigned char d_60ae_6092[] = {
    0, 0, 0, 15, 15, 15, 14, 2, 0, 0, 10, 4, 0, 4, 10, 0, 14, 14, 14, 14, 6, 12, 0, 14,
    10, 10, 10, 14, 8, 0, 2, 2, 8, 6, 0, 6, 2, 8, 12, 0, 10, 10, 7, 7, 7, 0, 8, 2
};

void f_a694_2282(void)
{
    int r, g, b;
    unsigned char far *p;

    p = d_60ae_6092;
    for (d_60ae_dbde = 16; d_60ae_dbde <= 31; d_60ae_dbde++) {
        r = *p++;
        g = *p++;
        b = *p++;
        f_1bd3_03a7(d_60ae_dbde, r, g, b);
    }
}

void f_a694_22e9(int p)
{
    char buf[320];
    int m;

    sprintf(buf, "%d years", d_471b_0000[17][p]);
    strcpy(d_2289_2ee0, f_14bc_4602(12, buf));
    if (f_14bc_6f7c(p) == 0) {
        if (d_3c35_0000[7][p] < 255)
            strcpy(buf, d_60ae_b572[d_3c35_0000[7][p]]);
        else
            strcpy(buf, d_60ae_b572[d_471b_0000[18][p]]);
    } else
        sprintf(buf, "<%s>", d_54d9_0000[d_471b_0000[18][p] - 140]);
    strcpy(d_2289_4dea, f_14bc_4602(12, buf));
    d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 0);
    strcpy(buf, d_54d9_0000[d_60ae_fad2[9][p]]);
    if (d_60ae_ddbe[p].w.f18) {
        if (d_60ae_ddbe[p].w.f19 == 0)
            strcat(buf, " I");
        else
            strcat(buf, " U");
    }
    strcpy(d_2289_2da0, f_14bc_4602(12, buf));
    if (f_14bc_6f7c(p) == 0) {
        if (d_323f_824a[p] > 0)
            sprintf(buf, "EXP %d/%d", d_60ae_d9e6 % 100, (d_60ae_d9e6 = d_323f_824a[p]) / 100);
        else
            strcpy(buf, "Free agent");
    } else
        strcpy(buf, "Unknown");
    strcpy(d_2289_2d50, f_14bc_4602(12, buf));
    if (f_14bc_6f7c(p) == 0) {
        d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 0);
        sprintf(buf, "%d p/w", d_60ae_fae6[4][p]);
    } else
        strcpy(buf, "Unknown");
    strcpy(d_2289_2d00, f_14bc_4602(12, buf));
    if (d_3c35_0000[7][p] < 255)
        sprintf(buf, "On Loan (%d)", d_3c35_0000[8][p]);
    else {
        if (d_60ae_ddbe[p].w.f8)
            strcpy(buf, d_60ae_ddbe[p].w.f10 ? "R/" : "L/");
        else
            strcpy(buf, "");
        if (d_60ae_ddbe[p].w.f24)
            strcat(buf, "For Loan");
        else {
            d_60ae_d83b = f_14bc_020c(p, d_471b_0000[18][p]);
            if (d_60ae_ddbe[p].w.f8 == 0 && f_14bc_2cc0(d_471b_0000[18][p]) == 0)
                d_60ae_d83b = f_14bc_0dd6(d_60ae_d83b);
            strcat(buf, f_14bc_0e7a(d_60ae_d83b));
        }
    }
    strcpy(d_2289_2cb0, f_14bc_4602(12, buf));
    if (d_60ae_ddbe[p].w.f20)
        sprintf(buf, "%ld p/w", f_9107_1391(p));
    else
        strcpy(buf, "NONE");
    strcpy(d_2289_2c60, f_14bc_4602(12, buf));

    strcpy(d_2289_35ca, "");
    if (d_60ae_ddbe[p].w.f0)
        strcat(d_2289_35ca, " GK");
    if (d_60ae_ddbe[p].w.f1)
        strcat(d_2289_35ca, " DEF");
    if (d_60ae_ddbe[p].w.f2)
        strcat(d_2289_35ca, " MID");
    if (d_60ae_ddbe[p].w.f3)
        strcat(d_2289_35ca, " ATT");
    strcpy(buf, &d_2289_35ca[1]);
    strcpy(d_2289_35ca, f_14bc_4602(12, buf));
    if (d_60ae_ddbe[p].w.f0 == 0) {
        strcpy(d_2289_2df0, "");
        if (d_60ae_ddbe[p].w.f4)
            strcat(d_2289_2df0, " R");
        if (d_60ae_ddbe[p].w.f5)
            strcat(d_2289_2df0, " L");
        if (d_60ae_ddbe[p].w.f6)
            strcat(d_2289_2df0, " C");
    } else if (f_14bc_6f7c(p) == 0)
        sprintf(d_2289_2df0, " %d", d_471b_0000[1][p]);
    else
        strcpy(d_2289_2df0, " Unknown");
    strcpy(d_2289_2df0, &d_2289_2df0[1]);
    strcpy(d_2289_2df0, f_14bc_4602(12, d_2289_2df0));

    sprintf(buf, "%d", d_3c35_0000[12][p]);
    strcpy(d_2289_28a0, f_14bc_4602(8, buf));
    sprintf(buf, "%d", d_3c35_0000[13][p]);
    strcpy(d_2289_38c2, f_14bc_4602(8, buf));
    sprintf(buf, "%d", d_3c35_0000[2][p] / 5 * 5);
    strcpy(d_2289_3f04, f_14bc_4602(8, buf));
    if (d_3c35_0000[12][p] > 0) {
        d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 0);
        sprintf(buf, "%4.2f", (float)d_60ae_fae6[2][p] / d_3c35_0000[12][p]);
    } else
        strcpy(buf, "----");
    strcpy(d_2289_4eda, f_14bc_4602(8, buf));
    if (d_3c35_0000[0][p] > 0) {
        sprintf(buf, "%d", d_3c35_0000[3][p]);
        strcpy(d_2289_2850, f_14bc_4602(8, buf));
        sprintf(buf, "%d", d_3c35_0000[4][p]);
        strcpy(d_2289_2800, f_14bc_4602(8, buf));
    } else {
        strcpy(d_2289_2850, " -      ");
        strcpy(d_2289_2800, d_2289_2850);
    }
    d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 0);
    sprintf(buf, "%d", d_60ae_fad2[3][p]);
    strcpy(d_2289_27b0, f_14bc_4602(8, buf));
    d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 0);
    sprintf(buf, "%d", d_60ae_fad2[2][p]);
    strcpy(d_2289_2760, f_14bc_4602(8, buf));
    sprintf(buf, "%d", d_3c35_0000[5][p]);
    strcpy(d_2289_26fc, f_14bc_4602(7, buf));
    sprintf(buf, "%d", d_3c35_0000[6][p]);
    strcpy(d_2289_26ac, f_14bc_4602(7, buf));
    d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 0);
    sprintf(buf, "%d", d_60ae_fad2[6][p]);
    strcpy(d_2289_265c, f_14bc_4602(7, buf));
    d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 0);
    if (d_3c35_0000[5][p] > 0)
        sprintf(buf, "%4.2f", (float)d_60ae_fae6[1][p] / d_3c35_0000[5][p]);
    else
        strcpy(buf, "----");
    strcpy(d_2289_260c, f_14bc_4602(7, buf));
    if (d_3c35_0000[5][p] > 0) {
        d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 0);
        sprintf(buf, "%d", d_60ae_fad2[7][p]);
        strcpy(d_2289_25bc, f_14bc_4602(7, buf));
        d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 0);
        sprintf(buf, "%d", d_60ae_fad2[8][p]);
        strcpy(d_2289_24cc, f_14bc_4602(7, buf));
    } else {
        strcpy(d_2289_25bc, " -     ");
        strcpy(d_2289_24cc, d_2289_25bc);
    }

    strcpy(d_2289_2940, "                  AVAILABILITY");
    if (d_471b_0000[20][p] > 0 && d_471b_0000[19][p] != 51) {
        if (d_471b_0000[19][p] < 26) {
            if (d_471b_0000[20][p] < 3)
                strcpy(d_2289_242c, "soon");
            else
                sprintf(d_2289_242c, "in about %d weeks", d_471b_0000[20][p]);
            sprintf(d_2289_28f0, "Has %s - back %s", d_54d9_02c6[d_471b_0000[19][p]], d_2289_242c);
        } else if (d_471b_0000[19][p] == 26) {
            if (d_471b_0000[20][p] == 1)
                strcpy(d_2289_242c, "match");
            else
                sprintf(d_2289_242c, "%d matches", d_471b_0000[20][p]);
            sprintf(d_2289_28f0, "Suspended for next %s", d_2289_242c);
        } else if (d_471b_0000[19][p] == 50)
            strcpy(d_2289_28f0, "Cup-tied for this match");
    } else {
        sprintf(d_2289_28f0, "%d%% match fit", d_471b_0000[21][p]);
        if (d_60ae_ddbe[p].w.f7) {
            unsigned char n;

            n = f_14bc_1eb7(p) + 1;
            sprintf(buf, " - Shirt No.%s", f_14bc_2f2c(n, 0));
            strcat(d_2289_28f0, buf);
        }
    }
    strcpy(d_2289_2c10, d_54d9_0593[d_3c35_0000[17][p]]);
    if (d_60ae_ddbe[p].w.f0 == 0) {
        sprintf(d_2289_2bc0, "%d", d_471b_0000[1][p]);
        sprintf(d_2289_2b70, "%d", d_471b_0000[2][p]);
        sprintf(d_2289_2b20, "%d", d_471b_0000[3][p]);
        sprintf(d_2289_2ad0, "%d", d_471b_0000[4][p]);
        sprintf(d_2289_2a80, "%d", d_471b_0000[5][p]);
        sprintf(d_2289_2a30, "%d", d_471b_0000[6][p]);
        sprintf(d_2289_29e0, "%d", d_471b_0000[22][p]);
    } else {
        strcpy(d_2289_2bc0, "");
        strcpy(d_2289_2b70, "");
        strcpy(d_2289_2b20, "");
        strcpy(d_2289_2ad0, "");
        strcpy(d_2289_2a80, "");
        strcpy(d_2289_2a30, "");
        strcpy(d_2289_29e0, "");
    }
    sprintf(d_2289_2990, "%d", d_471b_0000[12][p]);
    m = d_471b_0000[15][p] - d_471b_0000[0][p];
    if (m <= -24)
        strcpy(d_2289_256c, "Very low");
    else if (m <= -16)
        strcpy(d_2289_256c, "Low");
    else if (m <= 8)
        strcpy(d_2289_256c, "Ok");
    else if (m <= 24)
        strcpy(d_2289_256c, "Good");
    else
        strcpy(d_2289_256c, "Superb");

    d_60ae_d939 = f_14bc_6b4a(p, 0);
    if (d_60ae_d939 && (d_60ae_dbbc == 1 || d_60ae_dbbc == 2) && d_3c35_0000[14][p] == 0)
        d_60ae_d939 = 0;
    if (d_60ae_ddbe[p].w.f8 && d_60ae_ddbe[p].w.f10) {
        if (d_60ae_d939 == 0)
            strcpy(d_2289_3af4, "But having second thoughts");
        sprintf(d_2289_23dc, "Requested move - %s", d_2289_3af4);
    } else if (d_60ae_d939) {
        if (d_3c35_0000[14][p] > 0)
            sprintf(d_2289_23dc, "%s to leave - %s", d_60ae_ddbe[p].w.f8 ? "Wants" : "May ask", d_2289_3af4);
        else
            sprintf(d_2289_23dc, "Unhappy - %s", d_2289_3af4);
    } else if (f_b628_4f4c(p))
        strcpy(d_2289_23dc, "Expected to move abroad at end of season");
    else
        sprintf(d_2289_23dc, "%s happy to stay at the club", d_60ae_ddbe[p].w.f8 ? "He would be" : "He is");

    strcpy(d_2289_251c, "");
    if (d_3c35_0000[23][p] > 0 && !d_60ae_ddbe[p].w.f9 && !d_60ae_ddbe[p].w.f30) {
        d_60ae_d9e4 = 0;
        for (d_60ae_d9e2 = 0; d_60ae_d9e2 <= 79; d_60ae_d9e2++) {
            if (f_14bc_2cc0(d_60ae_d9e2) == 0 && f_8aa1_1a8b(d_60ae_d9e2, p) > 0) {
                d_60ae_d9e4++;
                if (d_60ae_d9e4 > 1) {
                    if (d_3c35_0000[23][p] == d_60ae_d9e4)
                        strcat(d_2289_251c, " and ");
                    else if (d_3c35_0000[23][p] > d_60ae_d9e4)
                        strcat(d_2289_251c, ", ");
                }
                strcat(d_2289_251c, d_60ae_b572[d_60ae_d9e2]);
            }
        }
    }
}

void f_a694_34cf(void)
{
    f_14bc_3672(1.375, 24.375, 6, 4, 0x12a, "");
    if (d_60ae_d904 == 0) {
        f_14bc_3672(1.375, 23.5, 0, 1, 0x12a, "                     FUTURE");
        f_14bc_3672(-1.0, 24.375, 6, 4, 0, d_2289_23dc);
    } else {
        f_14bc_3672(1.375, 23.5, 0, 6, 0x12a, "                   TARGETED BY");
        f_14bc_3672(-1.0, 24.375, 1, 4, 0, d_2289_251c);
    }
    d_60ae_d904 = !d_60ae_d904;
}

void f_a694_35c7(void)
{
    f_14bc_3672(37.375, 23.5, 2, d_60ae_d904 ? 1 : 6, 0, d_60ae_d903 ? ">" : " ");
    d_60ae_d903 = !d_60ae_d903;
}

void f_a694_3626(void)
{
    for (d_60ae_dd5c = 0; d_60ae_dd5c <= 139; d_60ae_dd5c++)
        d_2289_b9f8[d_60ae_dd5c] = d_60ae_dd5c + (d_60ae_dd5c >= 80 ? 400 : 0);
    for (d_60ae_dd60 = 0; d_60ae_dd60 <= 138; d_60ae_dd60++)
        for (d_60ae_dd92 = d_60ae_dd60 + 1; d_60ae_dd92 <= 139; d_60ae_dd92++)
            if (strcmp(f_14bc_3523(d_2289_b9f8[d_60ae_dd60]), f_14bc_3523(d_2289_b9f8[d_60ae_dd92])) > 0)
                f_1bd3_13a3(&d_2289_b9f8[d_60ae_dd60], &d_2289_b9f8[d_60ae_dd92], 2);
    d_60ae_d909 = -1;
    for (d_60ae_dce4 = 0x286; d_60ae_dce4 < 0x28a; d_60ae_dce4++)
        d_323f_1c08[d_60ae_dce4] = 255;
    f_14bc_2f90(0, "New game", "Demo Game|One Player|Two Players|Three Players|Four Players|");
    d_60ae_dce8 = d_60ae_dce6 = d_60ae_dda0;
    d_60ae_d97b = d_60ae_dce6 == 0 ? -1 : 0;
    if (d_60ae_dce6 > 0) {
        for (d_60ae_dd84 = 1; d_60ae_dd84 <= d_60ae_dce8; d_60ae_dd84++) {
            d_60ae_dd5a = f_a694_3a85(d_60ae_dce4 = d_60ae_dd84 + 0x285);
            if (d_60ae_dd5a >= 400) {
                d_60ae_da08 = -1;
                for (d_60ae_dd5c = 60; d_60ae_dd5c <= 79; d_60ae_dd5c++) {
                    if (f_14bc_2cc0(d_60ae_dd5c) == 0) {
                        if ((d_60ae_db7e = f_14bc_2cf4(d_60ae_dd5c) + f_1bd3_0d69(2) - f_1bd3_0d69(2)) < d_60ae_da06
                            || d_60ae_da08 == -1) {
                            d_60ae_da06 = d_60ae_db7e;
                            d_60ae_da08 = d_60ae_dd5c;
                        }
                    }
                }
                f_1bd3_13a3((void *)&d_60ae_b572[d_60ae_da08], (void *)&d_60ae_b61a[d_60ae_dd5a], 2);
                d_60ae_b616[d_60ae_da08] = d_60ae_b61a[d_60ae_dd5a];
                d_323f_4c14[0][d_60ae_da08] = 10;
                d_323f_4c14[1][d_60ae_da08] = f_1bd3_0d69(10) + 10;
                f_1bd3_13a3((void *)&d_323f_4c14[2][d_60ae_da08], (void *)&d_54d9_0a80[d_60ae_dd5a], 1);
                f_1bd3_13a3((void *)&d_323f_4c14[3][d_60ae_da08], (void *)&d_54d9_0c4c[d_60ae_dd5a], 1);
                d_323f_4c14[4][d_60ae_da08] = 13;
                d_54d9_08b4[d_60ae_dd5a] = 10;
                f_1bd3_13a3((void *)&d_54d9_4f40[0][d_60ae_da08], (void *)&d_54d9_4f40[0][d_60ae_dd5a - 400], 1);
                f_1bd3_13a3((void *)&d_54d9_4f40[1][d_60ae_da08], (void *)&d_54d9_4f40[1][d_60ae_dd5a - 400], 1);
                d_60ae_dd5a = d_60ae_da08;
            }
            d_60ae_dce4 = d_60ae_dd84 + 0x285;
            d_323f_47b4[d_60ae_dd5a] = d_60ae_dce4;
            d_323f_1c08[d_60ae_dce4] = d_60ae_dd5a;
            d_323f_1e92[d_60ae_dce4] = 35;
            d_323f_211c[d_60ae_dce4] = 25;
            d_323f_3d0a[d_60ae_dce4] = 0;
            d_323f_28ba[d_60ae_dce4] = 80;
            d_323f_23a6[d_60ae_dce4] = f_a694_3ce4(d_60ae_dce4);
            f_9e77_4e5e(d_60ae_dd84 - 1);
        }
        if (d_60ae_d8f6 == 0) {
            f_14bc_2f90(0, "Starting Division", "FA Premier|Division One|Division Two|Division Three|");
            d_60ae_da0a = d_60ae_dda0 + 1;
            for (d_60ae_dd42 = 0x286; d_60ae_dd42 <= d_60ae_dce8 + 0x285; d_60ae_dd42++) {
                d_60ae_dd5a = d_323f_1c08[d_60ae_dd42];
                if (d_60ae_dd5a < 255) {
                    if ((d_60ae_dd54 = d_60ae_dd5a / 20 + 1) < d_60ae_da0a) {
                        for (d_60ae_dcc4 = d_60ae_dd54; d_60ae_dcc4 <= d_60ae_da0a - 1; d_60ae_dcc4++) {
                            f_a3de_0066(d_60ae_dd5a, d_60ae_dcc4 + 1);
                            d_60ae_dd5a = d_60ae_da08;
                        }
                    } else if (d_60ae_dd54 > d_60ae_da0a) {
                        for (d_60ae_dcc4 = d_60ae_dd54; d_60ae_dcc4 >= d_60ae_da0a + 1; d_60ae_dcc4--) {
                            f_a3de_0066(d_60ae_dd5a, d_60ae_dcc4 - 1);
                            d_60ae_dd5a = d_60ae_da08;
                        }
                    }
                }
            }
        }
    }
    d_60ae_d909 = 0;
}

int f_a694_3a85(int p)
{
    char buf[320];
    int list[48];

    d_60ae_dd5a = -1;
    d_60ae_dd46 = 1;
    do {
        f_14bc_4bd3("Team Choice");
        sprintf(buf, " Player %s choose team ", f_14bc_4a14(p - 645));
        f_14bc_3672(1.125, 4.0, 1, 2, 0x130, buf);
        f_14bc_50f8(2, 1.25, 22.5, 1, 4, 0x12d, "                 MORE");
        for (d_60ae_dd5c = 0; d_60ae_dd5c <= (d_60ae_dd46 == 3 ? 43 : 47); d_60ae_dd5c++) {
            list[d_60ae_dd5c] = d_2289_b9f8[(d_60ae_dd46 - 1) * 48 + d_60ae_dd5c];
            d_60ae_d8e3 = d_60ae_dd5c / 16 * 12.75 + 1.125;
            d_60ae_d8eb = d_60ae_dd5c + 6 - d_60ae_dd5c / 16 * 16;
            sprintf(buf, " %.15s", f_14bc_3523(list[d_60ae_dd5c]));
            f_14bc_50f8(0, d_60ae_d8e3, d_60ae_d8eb, f_14bc_2cc0(list[d_60ae_dd5c]) ? 6 : 1,
                        d_60ae_dd5c & 1 ? 15 : 3, 100, buf);
            if (f_14bc_2cc0(list[d_60ae_dd5c]) || (list[d_60ae_dd5c] >= 80 && d_60ae_d8f6))
                f_14bc_589c(d_60ae_dd5c + 2);
        }
        do {
            d_60ae_dda0 = f_14bc_5635(d_60ae_dd56);
        } while (d_60ae_dda0 == 0);
        if (d_60ae_dda0 == 1) {
            d_60ae_dd46++;
            if (d_60ae_dd46 == 4)
                d_60ae_dd46 = 1;
        } else
            d_60ae_dd5a = list[d_60ae_dda0 - 2];
    } while (d_60ae_dd5a == -1);
    return d_60ae_dd5a;
}

int f_a694_3ce4(int p)
{
    char buf[320];

    sprintf(buf, "Player %s", f_14bc_4a14(p - 645));
    f_14bc_4bd3(buf);
    f_14bc_3e40(1.0, 4.0, 1, 2, 0, " Select Personality ");
    strcpy(buf, "");
    for (d_60ae_da04 = 0; d_60ae_da04 <= 9; d_60ae_da04++) {
        strcat(buf, d_54d9_0593[d_60ae_da04]);
        strcat(buf, "|");
    }
    f_14bc_2f90(7, "", buf);
    f_14bc_3334(9);
    return d_60ae_dda0;
}

void f_a694_3dd4(void)
{
    register int salary;
    char title[320];
    char text[320];

    for (d_60ae_dd60 = 0; d_60ae_dd60 <= 79; d_60ae_dd60++) {
        for (d_60ae_dd92 = 0; d_60ae_dd92 <= 21; d_60ae_dd92++) {
            switch (d_60ae_dd92) {
            case 8: case 9: case 12: case 13: case 14: case 15: case 16: case 17: case 18:
            case 19: case 20:
                d_323f_4c14[d_60ae_dd92][d_60ae_dd60] = 0;
                break;
            case 0: case 1: case 2: case 4:
                d_323f_4494[d_60ae_dd92][d_60ae_dd60] = 0;
                break;
            }
        }
        d_323f_4f9a[d_60ae_dd60] = 2;
        d_323f_40d4[d_60ae_dd60] = 0;
        d_323f_4214[d_60ae_dd60] = 0;
        d_323f_4354[d_60ae_dd60] = 0;
        d_323f_5f9e[d_60ae_dd60] = 0;
        d_323f_618a[d_60ae_dd60] = 0;
        d_323f_62d2[d_60ae_dd60] = 0;
        d_60ae_d7ab = (f_14bc_2cf4(d_60ae_dd60) + f_1bd3_0d69(2) - f_1bd3_0d69(2))
            * (4 - d_60ae_dd60 / 20) * 500.0f;
        d_60ae_fade = f_1bd3_1617(d_60ae_fde2, 1);
        d_60ae_fade[1][d_60ae_dd60] = d_60ae_d7ab / 2500 * 2500;
        d_60ae_ddb6 = f_1bd3_1617(d_60ae_fdd6, 1);
        strcpy(d_60ae_ddb6[d_60ae_dd60], "");
        for (d_60ae_dd92 = 0; d_60ae_dd92 <= 1; d_60ae_dd92++)
            strcpy(d_2289_1e28[d_60ae_dd92][d_60ae_dd60], "");
        d_2289_7b6a[d_60ae_dd60][0] = 0;
        d_2289_7b6a[d_60ae_dd60][1] = 0;
        for (d_60ae_dd92 = 1; d_60ae_dd92 <= 6; d_60ae_dd92++)
            d_2289_5658[d_60ae_dd92][d_60ae_dd60] = 0;
        salary = f_b628_0000(d_323f_47b4[d_60ae_dd60], d_60ae_dd60);
        d_60ae_faea = f_1bd3_1617(d_60ae_fde8, 0);
        if (d_60ae_faea[d_323f_47b4[d_60ae_dd60]] < salary) {
            d_60ae_faea = f_1bd3_1617(d_60ae_fde8, 1);
            d_60ae_faea[d_323f_47b4[d_60ae_dd60]] = salary;
            if (f_14bc_2cc0(d_60ae_dd60) && d_60ae_dd98 > 1) {
                sprintf(title, "%s board message", (char far *)d_60ae_b572[d_60ae_dd60]);
                sprintf(text, "We have increased your salary to %ld per year.", salary * 1000L);
                f_14bc_5bfe(d_60ae_dd60, title, text);
                f_b628_65ab();
            }
        }
    }
    d_60ae_faee = f_1bd3_1617(d_60ae_fdea, 1);
    memset(d_60ae_faee, 0, 2600);
    for (d_60ae_dd60 = 0; d_60ae_dd60 <= d_60ae_dda4 - 1; d_60ae_dd60++) {
        if (f_14bc_2cc0(d_60ae_dd5a = d_471b_0000[18][d_60ae_dd60]) == 0 && (d_60ae_d8f6 == 0 || d_60ae_dd98 != 1))
            d_60ae_ddbe[d_60ae_dd60].w.f9 = 0;
        d_60ae_ddbe[d_60ae_dd60].w.f11 = 0;
        d_60ae_ddbe[d_60ae_dd60].w.f12 = 0;
        d_60ae_ddbe[d_60ae_dd60].w.f13 = 0;
        d_60ae_ddbe[d_60ae_dd60].w.f15 = 0;
        d_60ae_ddbe[d_60ae_dd60].w.f16 = 0;
        d_60ae_ddbe[d_60ae_dd60].w.f17 = 0;
        d_60ae_ddbe[d_60ae_dd60].w.f18 = 0;
        d_60ae_ddbe[d_60ae_dd60].w.f19 = 0;
        d_60ae_ddbe[d_60ae_dd60].w.f23 = 0;
        if (d_60ae_ddbe[d_60ae_dd60].w.f0)
            d_471b_0000[1][d_60ae_dd60] = 0;
        for (d_60ae_dd92 = 0; d_60ae_dd92 <= 51; d_60ae_dd92++) {
            switch (d_60ae_dd92) {
            case 24: case 25: case 26: case 27: case 28: case 33: case 36: case 37: case 43: case 47:
                d_3c35_0000[d_60ae_dd92 - 24][d_60ae_dd60] = 0;
                break;
            case 0: case 2:
                d_60ae_fae6 = f_1bd3_1617(d_60ae_fde6, 1);
                d_60ae_fae6[d_60ae_dd92][d_60ae_dd60] = 0;
                break;
            }
        }
        d_471b_0000[21][d_60ae_dd60] = 70;
        if (d_471b_0000[19][d_60ae_dd60] == 26) {
            if (d_471b_0000[20][d_60ae_dd60] > 0) {
                d_471b_0000[19][d_60ae_dd60] = d_471b_0000[20][d_60ae_dd60] + 26;
                d_471b_0000[20][d_60ae_dd60] = 0;
            }
        }
        d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 1);
        d_60ae_fad2[3][d_60ae_dd60] = 0;
    }
    for (d_60ae_dd60 = 0; d_60ae_dd60 <= 139; d_60ae_dd60++)
        for (d_60ae_dd92 = 6; d_60ae_dd92 <= 11; d_60ae_dd92++)
            d_2289_cf5c[d_60ae_dd92][d_60ae_dd60] = 0;
    memset(d_2289_c46c, -1, 2800);
    for (d_60ae_dd5c = 0; d_60ae_dd5c <= 79; d_60ae_dd5c++)
        if (f_14bc_2cc0(d_60ae_dd5c) == 0 || d_60ae_dd98 == 1)
            d_2289_f108[d_60ae_dd5c][0] = 0;
    memset(d_2289_be68, -1, 440);
    d_60ae_dd9c = 1;
    d_60ae_dd78 = 1;
    d_60ae_dc7a = 1;
    d_60ae_dd80 = 0;
    d_60ae_dd82 = 0;
    d_60ae_dd28 = 0;
    d_60ae_dd7e = 0;
    d_60ae_dd7c = 0;
    d_60ae_dd7a = 0;
    for (d_60ae_dd0e = 0; d_60ae_dd0e <= 97; d_60ae_dd0e++) {
        d_471b_b4e0[d_60ae_dd0e] = 0;
        d_471b_b5a4[d_60ae_dd0e] = 0;
    }
    memset(d_471b_d8c8, 0, 16);
    for (d_60ae_dae0 = 1; d_60ae_dae0 <= 98; d_60ae_dae0++)
        if (f_14bc_248a(d_60ae_dae0) == 0)
            f_a3de_03bb(1, 40, d_60ae_dae0);
    d_54d9_1200[0][0][9] = d_2289_fb0c[0] * 32;
    d_54d9_1200[0][1][9] = d_2289_fb0c[1] * 32;
    d_60ae_d7a2 = f_1bd3_0d69(200) + 1;
    d_60ae_d8f4 = 0;
}

void f_a694_455e(void)
{
    f_b628_674e(7);
    for (d_60ae_dd84 = 0; d_60ae_dd84 <= d_60ae_dda4 - 1; d_60ae_dd84++) {
        f_b628_68ca(7, d_60ae_dd84, d_60ae_dda4 - 1);
        if (d_60ae_ddbe[d_60ae_dd84].w.f13)
            d_471b_0000[15][d_60ae_dd84] = f_1bd3_1369(d_471b_0000[0][d_60ae_dd84] + f_1bd3_0d69(10),
                d_471b_0000[9][d_60ae_dd84] + 25);
        else if (d_60ae_d8f6 && d_60ae_dd98 == 1 && d_60ae_ddbe[d_60ae_dd84].w.f28)
            d_471b_0000[15][d_60ae_dd84] = d_471b_0000[0][d_60ae_dd84] + f_1bd3_0d69(15) + 10;
        else
            d_471b_0000[15][d_60ae_dd84] = d_471b_0000[0][d_60ae_dd84] + f_1bd3_0d69(10);
    }
    f_b628_674e(8);
    for (d_60ae_dd5a = 0; d_60ae_dd5a <= 79; d_60ae_dd5a++) {
        f_b628_68ca(8, d_60ae_dd5a, 84);
        f_a3de_069a(d_60ae_dd5a);
    }
}

void f_a694_46a8(void)
{
    int cnt[3];
    int skip;
    unsigned char nation[5] = {0, 25, 9, 10, 32};
    unsigned char tries;
    char used[1860];

    memset(used, 0, 1860);
    memset(cnt, 0, 6);
    d_60ae_dd84 = 0;
    do {
        if (strstr(f_14bc_4703(d_60ae_dd84), "Gary Lineker")) {
            skip = d_60ae_dd84;
            d_60ae_dd84 = d_60ae_dda2 + 1699;
        }
        if (d_60ae_dda4 - 1 == d_60ae_dd84)
            d_60ae_dd84 = 1700;
        else
            d_60ae_dd84++;
    } while (d_60ae_dda2 + 1699 >= d_60ae_dd84);
    for (d_60ae_db82 = 0; d_60ae_db82 <= 4; d_60ae_db82++) {
        f_b628_68ca(8, d_60ae_db82 + 80, 84);
        d_60ae_d906 = 0;
        for (d_60ae_dcac = 1; d_60ae_dcac <= 100; d_60ae_dcac++) {
            tries = 1;
            d_60ae_da10 = -1;
            do {
                d_60ae_dd84 = 0;
                do {
                    if (d_60ae_dd84 != skip) {
                        d_60ae_fad2 = f_1bd3_1617(d_60ae_fddc, 0);
                        if (d_60ae_fad2[9][d_60ae_dd84] == nation[d_60ae_db82] && used[d_60ae_dd84] == 0
                            && (d_60ae_dcac <= 50 && d_471b_0000[17][d_60ae_dd84] < 22
                                || d_60ae_dcac > 50 || tries == 2)
                            && ((d_60ae_dcac - 1) % 50 > 4 ? 0 : 1) == d_60ae_ddbe[d_60ae_dd84].w.f0
                            && (d_60ae_da10 == -1 || d_471b_0000[0][d_60ae_dd84] > d_60ae_da0e)) {
                            d_60ae_da10 = d_60ae_dd84;
                            d_60ae_da0e = d_471b_0000[0][d_60ae_dd84];
                        }
                    }
                    if (d_60ae_dda4 - 1 == d_60ae_dd84)
                        d_60ae_dd84 = 1700;
                    else
                        d_60ae_dd84++;
                } while (d_60ae_dda2 + 1699 >= d_60ae_dd84);
                tries++;
            } while (d_60ae_da10 == -1 && tries < 3);
            d_60ae_fada = f_1bd3_1617(d_60ae_fde0, 1);
            d_60ae_fada[d_60ae_db82][d_60ae_dcac - 1] = d_60ae_da10;
            if (d_60ae_da10 > -1)
                used[d_60ae_da10] = -1;
        }
    }
}

void f_a694_48ef(void)
{
    f_b628_674e(5);
    for (d_60ae_dd60 = 0; d_60ae_dd60 <= 79; d_60ae_dd60++)
        d_2289_fb10[0][d_60ae_dd60] = d_60ae_dd60;
    for (d_60ae_dd60 = 1; d_60ae_dd60 <= 20; d_60ae_dd60++)
        for (d_60ae_dd54 = 0; d_60ae_dd54 <= 3; d_60ae_dd54++) {
            f_b628_68ca(5, (d_60ae_dd60 - 1) * 4 + d_60ae_dd54, 79);
            d_60ae_d9fe = d_2289_fb10[0][f_1bd3_0d69(20) + d_60ae_dd54 * 20];
            d_60ae_d9fc = d_2289_fb10[0][f_1bd3_0d69(20) + d_60ae_dd54 * 20];
            f_a3de_08c3(d_60ae_d9fe, d_60ae_d9fc);
        }
}

void f_a694_49c9(int player, int team, char buy)
{
    int club;
    char buf[320];
    char more[80];

    club = d_3c35_0000[7][player] < 255 ? d_3c35_0000[7][player] : d_471b_0000[18][player];
    d_60ae_d904 = 0;
    d_60ae_d903 = -1;
    f_a694_22e9(player);
    f_14bc_60ca();
    f_14bc_4bd3("");
    sprintf(buf, " %s ", f_1bd3_0e5e(f_14bc_4703(player)));
    if (f_14bc_6f7c(player) == 0)
        f_14bc_3e40(1.25, 1.125, d_323f_4cb8[club] / 16, d_323f_4cb8[club] % 16, 0, buf);
    else
        f_14bc_3e40(1.25, 1.125, 1, 4, 0, buf);
    f_1bd3_0b10(1);
    f_1bd3_08cb(16);
    f_1bd3_08e1(12, 26, 160, 98);
    f_1bd3_08e1(166, 26, 312, 98);
    f_1bd3_08e1(12, 104, 312, 116);
    f_1bd3_08e1(12, 122, 212, 162);
    f_1bd3_08e1(218, 122, 312, 178);
    f_1bd3_08e1(12, 171, 212, 178);
    f_1bd3_08e1(12, 184, 312, 197);
    f_1bd3_08cb(19);
    f_1bd3_08e1(8, 100, 310, 114);
    f_1bd3_08e1(8, 118, 210, 160);
    f_1bd3_08e1(214, 118, 310, 176);
    f_1bd3_08cb(20);
    f_1bd3_08e1(8, 22, 158, 96);
    f_1bd3_08e1(162, 22, 310, 96);
    f_1bd3_08cb(30);
    f_1bd3_08e1(8, 165, 210, 176);
    f_1bd3_08cb(20);
    f_1bd3_08e1(8, 180, 310, 195);
    f_14bc_3672(1.375, 3.75, 1, 12, 0, " AGE        ");
    f_14bc_3672(10.625, 3.75, 1, 12, 0, d_2289_2ee0);
    f_14bc_3672(1.375, 4.75, 1, 12, 0, " CLUB       ");
    f_14bc_3672(10.625, 4.75, 1, 12, 0, d_2289_4dea);
    f_14bc_3672(1.375, 5.75, 1, 12, 0, " COUNTRY    ");
    f_14bc_3672(10.625, 5.75, 1, 12, 0, d_2289_2da0);
    f_14bc_3672(1.375, 6.75, 1, 12, 0, " CONTRACT   ");
    f_14bc_3672(10.625, 6.75, 1, 12, 0, d_2289_2d50);
    f_14bc_3672(1.375, 7.75, 1, 12, 0, " WAGES      ");
    f_14bc_3672(10.625, 7.75, 1, 12, 0, d_2289_2d00);
    f_14bc_3672(1.375, 8.75, 1, 12, 0, " STATUS/VAL ");
    f_14bc_3672(10.625, 8.75, 1, 12, 0, d_2289_2cb0);
    f_14bc_3672(1.375, 9.75, 1, 12, 0, " INSURANCE  ");
    f_14bc_3672(10.625, 9.75, 1, 12, 0, d_2289_2c60);
    f_14bc_3672(1.375, 10.75, 1, 12, 0, " POSITION   ");
    f_14bc_3672(10.625, 10.75, 1, 12, 0, d_2289_35ca);
    if (d_60ae_ddbe[player].w.f0 == 0)
        f_14bc_3672(1.375, 11.75, 1, 12, 0, " SIDE       ");
    else
        f_14bc_3672(1.375, 11.75, 1, 12, 0, " CONCEDED   ");
    f_14bc_3672(10.625, 11.75, 1, 12, 0, d_2289_2df0);
    f_14bc_3672(20.625, 3.75, 1, 12, 71, " CHARACTER");
    sprintf(buf, " %s", d_2289_2c10);
    f_14bc_3672(29.75, 3.75, 1, 12, 71, buf);
    f_14bc_3672(20.625, 4.75, 1, 12, 71, " PASSING");
    sprintf(buf, " %s", d_2289_2bc0);
    f_14bc_3672(29.75, 4.75, 1, 12, 71, buf);
    f_14bc_3672(20.625, 5.75, 1, 12, 71, " TACKLING");
    sprintf(buf, " %s", d_2289_2b70);
    f_14bc_3672(29.75, 5.75, 1, 12, 71, buf);
    f_14bc_3672(20.625, 6.75, 1, 12, 71, " PACE");
    sprintf(buf, " %s", d_2289_2b20);
    f_14bc_3672(29.75, 6.75, 1, 12, 71, buf);
    f_14bc_3672(20.625, 7.75, 1, 12, 71, " HEADING");
    sprintf(buf, " %s", d_2289_2ad0);
    f_14bc_3672(29.75, 7.75, 1, 12, 71, buf);
    f_14bc_3672(20.625, 8.75, 1, 12, 71, " FLAIR    ");
    sprintf(buf, " %s", d_2289_2a80);
    f_14bc_3672(29.75, 8.75, 1, 12, 71, buf);
    f_14bc_3672(20.625, 9.75, 1, 12, 71, " CREATIVITY");
    sprintf(buf, " %s", d_2289_2a30);
    f_14bc_3672(29.75, 9.75, 1, 12, 71, buf);
    f_14bc_3672(20.625, 10.75, 1, 12, 71, " STAMINA   ");
    sprintf(buf, " %s", d_2289_29e0);
    f_14bc_3672(29.75, 10.75, 1, 12, 71, buf);
    f_14bc_3672(20.625, 11.75, 1, 12, 71, " INFLUENCE");
    sprintf(buf, " %s", d_2289_2990);
    f_14bc_3672(29.75, 11.75, 1, 12, 71, buf);
    f_14bc_3672(1.375, 13.375, 0, 6, 298, d_2289_2940);
    f_14bc_3672(-1.0, 14.25, 1, 3, 0, d_2289_28f0);
    f_14bc_3672(1.375, 15.75, 0, 1, 198, "           THIS SEASON");
    f_14bc_3672(1.375, 16.75, 0, 6, 0, " APPS   ");
    f_14bc_3672(7.625, 16.75, 0, 6, 0, d_2289_28a0);
    f_14bc_3672(1.375, 17.75, 0, 6, 0, " GOALS  ");
    f_14bc_3672(7.625, 17.75, 0, 6, 0, d_2289_38c2);
    f_14bc_3672(1.375, 18.75, 0, 6, 0, " DISP   ");
    f_14bc_3672(7.625, 18.75, 0, 6, 0, d_2289_3f04);
    f_14bc_3672(13.875, 16.75, 0, 6, 0, " AV R   ");
    f_14bc_3672(20.125, 16.75, 0, 6, 0, d_2289_4eda);
    f_14bc_3672(13.875, 17.75, 0, 6, 0, " MIN R  ");
    f_14bc_3672(20.125, 17.75, 0, 6, 0, d_2289_2850);
    f_14bc_3672(13.875, 18.75, 0, 6, 0, " MAX R  ");
    f_14bc_3672(20.125, 18.75, 0, 6, 0, d_2289_2800);
    f_14bc_3672(1.375, 19.75, 0, 6, 0, " M/O/M  ");
    f_14bc_3672(7.625, 19.75, 0, 6, 0, d_2289_27b0);
    f_14bc_3672(13.875, 19.75, 0, 6, 0, " INTS   ");
    f_14bc_3672(20.125, 19.75, 0, 6, 0, d_2289_2760);
    f_14bc_3672(27.125, 15.75, 0, 1, 90, "  LAST SEASON");
    f_14bc_3672(37.875, 15.75, 0, 1, 0, " ");
    f_14bc_3672(27.125, 16.75, 0, 6, 0, " APPS   ");
    f_14bc_3672(33.375, 16.75, 0, 6, 0, d_2289_26fc);
    f_14bc_3672(27.125, 17.75, 0, 6, 0, " GOALS  ");
    f_14bc_3672(33.375, 17.75, 0, 6, 0, d_2289_26ac);
    f_14bc_3672(27.125, 18.75, 0, 6, 0, " DISP   ");
    f_14bc_3672(33.375, 18.75, 0, 6, 0, d_2289_265c);
    f_14bc_3672(27.125, 19.75, 0, 6, 0, " AV R   ");
    f_14bc_3672(33.375, 19.75, 0, 6, 0, d_2289_260c);
    f_14bc_3672(27.125, 20.75, 0, 6, 0, " MIN R  ");
    f_14bc_3672(33.375, 20.75, 0, 6, 0, d_2289_25bc);
    f_14bc_3672(27.125, 21.75, 0, 6, 0, " MAX R  ");
    f_14bc_3672(33.375, 21.75, 0, 6, 0, d_2289_24cc);
    f_14bc_3672(1.375, 21.625, 1, 8, 98, " MORALE");
    sprintf(buf, " %s", d_2289_256c);
    f_14bc_3672(13.875, 21.625, 1, 8, 98, buf);
    f_a694_34cf();
    f_14bc_60da();
    if (d_2289_251c[0] != 0)
        f_a694_35c7();
    f_14bc_50f8(2, 35.5, 1.125, 1, 2, 24, "HST");
    if (buy != 0 && d_60ae_d97b == 0) {
        f_14bc_50f8(2, 24.625, 1.125, 1, 3, 24, "STA");
        f_14bc_50f8(2, 28.25, 1.125, 1, 3, 24, "BUY");
        f_14bc_50f8(2, 31.875, 1.125, 1, 3, 24, "ADD");
        if (f_14bc_2cc0(d_471b_0000[18][player]) == 0 && d_471b_0000[18][player] != team && d_3c35_0000[7][player] != team)
            f_14bc_589c(2);
        if (d_60ae_d96a != 0) {
            f_14bc_589c(2);
            f_14bc_589c(3);
        }
        if (f_14bc_6f7c(player))
            f_14bc_589c(2);
    }
    d_60ae_d975 = 0;
    d_60ae_dd4a = 0;
    d_60ae_d902 = -1;
    d_60ae_d9e8 = f_14bc_5635(0);
    d_60ae_d902 = 0;
    if (d_60ae_d9e8 == 0)
        d_60ae_d975 = -1;
    else if (d_60ae_d9e8 == 1)
        f_a694_60f3(player);
    else if (d_60ae_d9e8 == 2)
        d_60ae_dd4a = -1;
    else if (d_60ae_d9e8 == 3 || d_60ae_d9e8 == 4) {
        d_60ae_d990 = -1;
        if (team > -1)
            d_60ae_d990 = team;
        else if (d_60ae_dce6 == 2) {
            f_a3de_1630(0);
            sprintf(buf, "%.3s", d_2289_2e40);
            d_60ae_dc70 = atoi(buf);
            d_60ae_dc6e = atoi(f_1bd3_0f30(d_2289_2e40, 3));
            if (d_323f_1c08[d_60ae_dc70] == club)
                d_60ae_d990 = d_323f_1c08[d_60ae_dc6e];
            else if (d_323f_1c08[d_60ae_dc6e] == club)
                d_60ae_d990 = d_323f_1c08[d_60ae_dc70];
        }
        if (d_60ae_d990 == -1) {
            f_a3de_14f5(0);
            if (d_60ae_d9bc > -1)
                d_60ae_d990 = d_323f_1c08[d_60ae_d9bc];
        }
        if (d_60ae_d990 > -1) {
            if (d_60ae_d990 == club) {
                sprintf(buf, "You already own %s", f_14bc_48b4(player));
                f_14bc_0b83(buf);
            } else if (d_60ae_d9e8 == 3 && d_3c35_0000[7][player] < 255)
                f_14bc_0b83("His loan must be terminated first");
            else if (d_60ae_d9e8 == 3 && d_323f_4e00[d_60ae_d990] < 30)
                f_14bc_0b83("The board refuse any transfers");
            else if (d_60ae_d9e8 == 3 && f_14bc_69ec(d_60ae_dd9c))
                f_14bc_0b83("Transfer deadline has passed");
            else if (d_60ae_d9e8 == 3 && d_323f_52ce[d_60ae_d990] > 3)
                f_14bc_0b83("Not enough time");
            else if (d_60ae_d9e8 == 3 && (d_60ae_ddbe[player].a.f9 || d_60ae_ddbe[player].a.f30)) {
                sprintf(buf, "%s not for sale", f_14bc_48b4(player));
                f_14bc_0b83(buf);
            } else if (d_60ae_d9e8 == 3 && d_323f_4e52[d_60ae_d990] + d_323f_6094[d_60ae_d990] >= 26) {
                strcpy(buf, "Maximum squad size is 26");
                if (d_323f_6094[d_60ae_d990] > 0) {
                    sprintf(more, "|(%d player%s loaned out)", d_323f_6094[d_60ae_d990], d_323f_6094[d_60ae_d990] > 1 ? "s" : "");
                    strcat(buf, more);
                }
                f_14bc_0b83(buf);
            } else if (f_14bc_6f7c(player) == 0 && d_60ae_d9e8 == 3 && f_14bc_2dfc(player)) {
                sprintf(buf, "%s have too few players", (char far *)d_60ae_b572[d_471b_0000[18][player]]);
                f_14bc_0b83(buf);
            } else if (d_60ae_d9e8 == 4 && d_2289_f108[d_60ae_d990][0] == 15)
                f_14bc_0b83("shortlist is full");
            else if (d_60ae_d9e8 == 3)
                d_60ae_dd4a = d_60ae_d990 + 1;
            else if (d_60ae_d9e8 == 4)
                d_60ae_dd4a = -d_60ae_d990 - 2;
        }
    }
}

void f_a694_60f3(int p)
{
    FILE *fp;

    f_1bd3_1a23(2);
    fp = fopen(d_2289_0050, "rb+");
    fseek(fp, (long)p * 133, 0);
    fread(d_2289_33c2, 1, 133, fp);
    fclose(fp);
    d_60ae_da98 = d_3c35_0000[20][p];
    if (d_60ae_da98 < 17) {
        f_a694_0000(p, 0);
        f_14bc_50f8(2, 1.25, 22.5, 1, 4, 0x12d, "                 EXIT");
        do
            d_60ae_dda0 = f_14bc_5635(d_60ae_dd56);
        while (d_60ae_dda0 <= 0);
    } else {
        d_60ae_d9e0 = 0;
        do {
            f_a694_0000(p, d_60ae_d9e0);
            f_14bc_50f8(2, 1.25, 22.5, 1, 12, 0x49, "   MORE");
            f_14bc_50f8(2, 11.0, 22.5, 1, 4, 0xdf, "            EXIT");
            do
                d_60ae_dda0 = f_14bc_5635(d_60ae_dd56);
            while (d_60ae_dda0 <= 0);
            if (d_60ae_dda0 == 1)
                d_60ae_d9e0 = 1 - d_60ae_d9e0;
        } while (d_60ae_dda0 != 2);
    }
}
