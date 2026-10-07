/* @at 18f9:0006 */
/* @data 69da:0094 */
/* @module */

#include <mem.h>

/* The game's main module: the start-up menus and the season loop, one week per pass.
   CM94's version of CM93's 1446.C: the same menus and week loop, with other overlay
   calls, a printer option whose test of a local always succeeds, and a call before the
   end-of-season menu. */

void f_2162_03c6(char c);
void f_2162_0d8c(void);
void f_18f9_070c(void);
void f_18f9_0752(void);
void f_1a70_5e46(void);
void f_1a70_4a41(char far *title);
void f_1a70_2eaa(int n, char far *title, char far *items);
void f_1a70_3226(int);
char f_1a70_0c2c(void);
void f_1a70_0b80(char far *);
char f_1a70_237e(int);
char f_1a70_243f(int);
char f_1a70_24c5(int);
char f_1a70_2522(int);
char f_1a70_257b(int);
char f_1a70_25dc(int);
char f_1a70_2631(int);
char f_1a70_29fa(int);
char f_1a70_2b1e(int);

void f_7827_0000(void);
void f_7827_2b1c(char);
void f_7dd6_1124(void);
void f_7dd6_11a0(int, int, int);
void f_7dd6_2d5a(void);
void f_829f_00ba(void);
void f_8c32_1188(void);
void f_8c32_17e0(void);
void f_8c32_2b5e(void);
void f_8c32_308e(void);
void f_8c32_31f9(void);
void f_8c32_3589(void);
void f_8c32_36fa(void);
void f_9007_0000(void);
void f_9007_021e(void);
void f_9007_061e(void);
void f_9007_0908(void);
void f_9007_11c8(void);
void f_9007_1abb(void);
void f_9661_3212(void);
void f_9661_3a67(void);
void f_9661_3d86(void);
void f_9661_411b(void);
void f_9661_4452(void);
void f_9c01_13fe(void);
void f_9c01_17c1(void);
void f_9c01_1ab0(void);
void f_9c01_1c14(void);
void f_9c01_1dcf(void);
void f_9c01_2132(void);
void f_9c01_2815(int);
void f_9c01_2dc1(void);
void f_9c01_30af(void);
void f_9c01_3671(void);
void f_9c01_3c56(void);
void f_a330_045f(char far *);
void f_a330_04ca(void);
void f_a330_0a97(void);
void f_a330_0bd1(void);
void f_a330_0d3c(int);
void f_a330_1d35(void);
void f_a330_27ce(void);
void f_a330_2b82(char);
void f_a330_427e(void);
void f_a330_4876(int);
void f_a83a_034e(void);
void f_a83a_03cb(void);
void f_a83a_0440(void);
void f_a83a_0576(void);
void f_a83a_0f1a(void);
void f_a83a_1ecd(void);
void f_aac9_1732(char);
void f_aac9_1b9b(void);
void f_aac9_2fbe(void);
void f_aac9_36e7(void);
void f_aac9_3eb2(void);
void f_aac9_3fde(void);
void f_aac9_421c(void);
void f_b085_0000(void);
void f_b085_0298(void);
void f_b085_3836(void);
void f_b085_42bd(void);
void f_b085_42c6(void);
void f_b085_42fa(char);
void f_b085_44b7(void);
void f_b085_4503(void);
void f_b085_5c44(void);
void f_b085_5d39(void);
void f_b8da_0d08(void);
void f_b8da_1df1(void);
void f_b8da_25ed(void);
void f_b8da_4237(void);
void f_b8da_4391(void);
void f_b8da_4704(void);
void f_b8da_49b3(void);
void f_b8da_609f(void);
void f_b8da_63e5(void);
void f_b8da_64b8(void);
void f_b8da_65b1(void);
void f_b8da_66aa(void);
void f_b8da_6f34(void);
void f_b8da_6ff1(void);
void f_c06b_1e21(void);
void f_c06b_201c(void);

extern int d_69da_d214;
extern int d_69da_e2ce;
extern int d_69da_d992;                 /* menu choice */
extern int d_69da_d996;                 /* week of the season, 0..98 */
extern int d_69da_d998, d_69da_d99a;    /* season */
extern char d_69da_ddb6;                /* printer on */
extern char d_69da_de3d, d_69da_ddb9, d_69da_ddb8, d_69da_ddb3, d_69da_de3f, d_69da_de13;
extern int d_69da_d99c, d_69da_d99e, d_69da_d9a2, d_69da_d9a4, d_69da_d9a6, d_69da_d9a8;
extern int d_69da_d9aa, d_69da_d9ac, d_69da_d9b0, d_69da_d9b2, d_69da_d9b4, d_69da_d9b6;
extern int d_69da_d9b8, d_69da_d9ba, d_69da_da0a;
extern int far d_28da_2332[];
extern unsigned char far d_4512_0000[];

long d_69da_0094 = 0;
int d_69da_0098 = 12000;
char d_69da_009a[] = "$VER: v4.04";

extern char far d_28da_0000[];
extern char far d_28da_0010[];
extern char far d_28da_00b0[];
extern char far d_28da_10f0[];
extern char far d_28da_2130[];
extern char far d_28da_2270[];
extern char far d_28da_23f8[];
extern char far *d_69da_df96;
extern char far d_28da_24fc[];
extern char far *d_69da_df9a;
extern char far *d_69da_df9e;
extern char far *d_69da_dfa2;
extern char far d_28da_263c[];
extern char far d_28da_28bc[];
extern char far d_28da_2a4c[];
extern char far d_28da_2a72[];
extern char far d_28da_2a78[];
extern char far d_3668_0000[];
extern char far d_3668_ae60[];
extern char far *d_69da_dfa6;
extern char far d_3668_e880[];
extern char far d_3668_e886[];
extern char far d_3668_e8da[];
extern char far d_3668_e912[];
extern char far d_3668_e92e[];
extern char far d_3668_e9e2[];
extern char far d_4512_1710[];
extern char far d_4512_1e90[];
extern char far d_4512_2390[];
extern char far *d_69da_dfaa;
extern char far d_4512_471c[];
extern char far d_4512_4726[];
extern char far d_4512_549a[];
extern char far d_4512_5d92[];
extern char far d_4512_5d98[];
extern char far d_4512_5dec[];
extern char far d_4512_5e08[];
extern char far d_4512_5e24[];
extern char far d_4512_6324[];
extern char far d_4512_6374[];
extern char far d_4512_6376[];
extern char far d_4512_6378[];
extern char far d_4512_637c[];
extern char far d_4512_6d7c[];
extern char far *d_69da_dfae;
extern char far d_4512_727c[];
extern char far d_4512_731c[];
extern char far d_4512_740c[];
extern char far d_4512_747c[];
extern char far d_4512_7484[];
extern char far d_4512_7f74[];
extern char far d_4512_8000[];
extern char far d_4512_8780[];
extern char far d_4512_87bc[];
extern char far d_4512_880c[];
extern char far d_4512_8f28[];
extern char far d_4512_9a18[];
extern char far *d_69da_dfb2;
extern char far *d_69da_dfb6;
extern char far d_4512_9c34[];
extern char far d_4512_9e64[];
extern char far d_4512_a01c[];
extern char far d_4512_a02c[];
extern char far d_4512_a04c[];
extern char far d_4512_a054[];
extern char far d_4512_a064[];
extern char far d_4512_a074[];
extern char far d_4512_a0a4[];
extern char far d_4512_a0e0[];
extern char far d_4512_a180[];
extern char far d_4512_a2c0[];
extern char far d_4512_a374[];
extern char far d_4512_a48c[];
extern char far *d_69da_dfba;
extern char far *d_69da_dfbe;
extern char far d_4512_a4c8[];
extern char far d_4512_bdc8[];
extern char far d_4512_dad8[];
extern char far d_4512_e438[];
extern char far d_536d_0000[];
extern char far d_536d_1ae0[];
extern char far d_536d_1c70[];
extern char far d_536d_2b66[];
extern char far d_536d_3101[];
extern char far d_536d_4939[];
extern char far d_536d_493d[];
extern char far d_536d_4c3d[];
extern char far d_536d_4ebd[];
extern char far d_536d_4ed1[];
extern char far d_536d_4f21[];
extern char far d_536d_4f71[];
extern char far d_536d_4fd5[];
extern char far *d_69da_dfc2;
extern char far d_536d_50a5[];
extern char far d_536d_50cd[];
extern char far d_536d_520d[];
extern char far d_536d_525d[];
extern char far d_536d_52ad[];
extern char far d_536d_52fd[];
extern char far d_536d_534d[];
extern char far d_536d_539d[];
extern char far d_536d_53ed[];
extern char far d_536d_543d[];
extern char far d_536d_548d[];
extern char far d_536d_54dd[];
extern char far d_536d_552d[];
extern char far d_536d_557d[];
extern char far d_536d_55cd[];
extern char far d_536d_55eb[];
extern char far d_536d_563b[];
extern char far d_536d_568b[];
extern char far d_536d_56db[];
extern char far d_536d_572b[];
extern char far d_536d_577b[];
extern char far d_536d_57cb[];
extern char far d_536d_581b[];
extern char far d_536d_586b[];
extern char far d_536d_58bb[];
extern char far d_536d_590b[];
extern char far d_536d_591f[];
extern char far d_536d_5933[];
extern char far d_536d_596f[];
extern char far d_536d_5a0f[];
extern char far d_536d_5a2d[];
extern char far d_536d_5a7d[];
extern char far d_536d_5acd[];
extern char far d_536d_5b1d[];
extern char far d_536d_5b6d[];
extern char far d_536d_5bbd[];
extern char far d_536d_5c0d[];
extern char far d_536d_5c5d[];
extern char far d_536d_5cad[];
extern char far d_536d_5cfd[];
extern char far d_536d_5d4d[];
extern char far d_536d_5d9d[];
extern char far d_536d_5ded[];
extern char far d_536d_5e3d[];
extern char far d_536d_5e8d[];
extern char far d_536d_5edd[];
extern char far d_536d_5f2d[];
extern char far d_536d_5f7d[];
extern char far d_536d_5fcd[];
extern char far d_536d_601d[];
extern char far d_536d_606d[];
extern char far d_536d_60bd[];
extern char far d_536d_610d[];
extern char far d_536d_615d[];
extern char far d_536d_61ad[];
extern char far d_536d_61fd[];
extern char far d_536d_624d[];
extern char far d_536d_629d[];
extern char far d_536d_62ed[];
extern char far d_536d_633d[];
extern char far d_536d_638d[];
extern char far d_536d_638f[];
extern char far d_536d_6391[];
extern char far d_536d_63e1[];
extern char far d_536d_6431[];
extern char far d_536d_6481[];
extern char far d_536d_65c1[];
extern char far d_536d_6611[];
extern char far d_536d_6751[];
extern char far d_536d_6891[];
extern char far d_536d_68e1[];
extern char far d_536d_6931[];
extern char far d_536d_6981[];
extern char far d_536d_69d1[];
extern char far d_536d_6a21[];
extern char far d_536d_6b61[];
extern char far d_536d_6bb1[];
extern char far d_536d_6c01[];
extern char far d_536d_6c03[];
extern char far d_536d_6c53[];
extern char far d_536d_6ca3[];
extern char far d_536d_6cf3[];
extern char far d_536d_6d43[];
extern char far d_536d_6d93[];
extern char far d_536d_6de3[];
extern char far d_536d_6e33[];
extern char far d_536d_6e5b[];
extern char far d_536d_6eab[];
extern char far d_536d_6efb[];
extern char far d_536d_6f4b[];
extern char far d_536d_6f9b[];
extern char far d_536d_6feb[];
extern char far d_536d_703b[];
extern char far d_536d_7153[];
extern char far d_536d_726b[];
extern char far d_536d_72bb[];
extern char far d_536d_730b[];
extern char far d_536d_7315[];
extern char far d_536d_7365[];
extern char far d_536d_73b5[];
extern char far d_536d_7405[];
extern char far d_536d_7455[];
extern char far d_536d_74a5[];
extern char far d_536d_74f5[];
extern char far d_536d_7545[];
extern char far d_536d_7595[];
extern char far d_536d_75e5[];
extern char far d_536d_7635[];
extern char far d_536d_7685[];
extern char far d_536d_76d5[];
extern char far d_536d_7725[];
extern char far d_536d_7775[];
extern char far d_536d_77c5[];
extern char far d_536d_7815[];
extern char far d_536d_7865[];
extern char far d_536d_78b5[];
extern char far d_536d_7905[];
extern char far d_536d_7955[];
extern char far d_536d_79a5[];
extern char far d_536d_79f5[];
extern char far d_536d_7a45[];
extern char far d_536d_7a95[];
extern char far d_536d_7ae5[];
extern char far d_536d_7b35[];
extern char far d_536d_7b85[];
extern char far d_536d_7bd5[];
extern char far d_536d_7c25[];
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
extern char far d_536d_7fa9[];
extern char far d_536d_7ff9[];
extern char far d_536d_8049[];
extern char far d_536d_8099[];
extern char far d_536d_80e9[];
extern char far d_536d_8139[];
extern char far d_536d_8189[];
extern char far d_536d_81d9[];
extern char far d_536d_8229[];
extern char far d_536d_823d[];
extern char far d_536d_828d[];
extern char far d_536d_82dd[];
extern char far d_536d_8305[];
extern char far d_536d_8319[];
extern char far d_536d_8369[];
extern char far *d_69da_dfc6;
extern char far d_536d_83b9[];
extern char far *d_69da_dfca;
extern char far d_536d_86ed[];
extern char far *d_69da_dfce;
extern char far *d_69da_dfd2;
extern char far *d_69da_dfd6;
extern char far d_536d_968d[];
extern char far d_536d_9ccd[];
extern char far d_536d_a44d[];
extern char far d_536d_a475[];
extern char far d_536d_a49d[];
extern char far d_536d_a4c5[];
extern char far d_536d_a4ed[];

void main(int argc, char *argv[])
{
    char choice;

    f_18f9_0752();
    d_69da_d214 = 0x8000;
    f_2162_03c6(argc > 1 ? argv[1][0] : 0);
    f_2162_0d8c();
    f_aac9_1b9b();
    f_18f9_070c();
    f_1a70_5e46();
    f_a330_427e();
    if (d_69da_e2ce == 0)
        f_b8da_63e5();
    f_c06b_201c();
    do {
        f_1a70_4a41("End of Season");
        f_1a70_2eaa(0, "", "*Help|New Game|Continue Season|Quick Start|");
again:
        f_1a70_3226(3);
        if (d_69da_d992 == 0)
            f_b8da_64b8();
        else if (d_69da_d992 == 1 && !f_1a70_0c2c())
            goto again;
    } while (d_69da_d992 == 0);
    choice = d_69da_d992;
    f_c06b_1e21();
printer:
    f_1a70_2eaa(0, "Printer Option", "Printer On|Printer Off|");
    if (d_69da_d992 == 0) {
        char x;

        if (f_1a70_0c2c() == 0)
            goto printer;
        x = 0;
        if (x == 0) {
            f_b085_42bd();
            f_a330_045f("Put printer on line to continue");
            f_b085_42fa(1);
            d_69da_ddb6 = -1;
            f_b085_42c6();
        }
    } else if (d_69da_d992 == 1)
        d_69da_ddb6 = 0;
    if (choice == 2) {
        f_a330_2b82(0);
        if (d_69da_d996 <= 98)
            goto week;
        goto season_end;
    }
    if (choice == 3) {
        f_a330_2b82(1);
        f_a330_4876(0);
        goto week;
    }
    f_1a70_2eaa(0, "End Of Season", "1994 Players|Generated Players|");
    d_69da_de3d = d_69da_d992 == 0 ? -1 : 0;
    f_b085_0000();
    f_aac9_2fbe();
    f_a83a_034e();
    f_b8da_609f();
    f_9c01_1ab0();
    f_9c01_17c1();
    f_b085_0298();
    f_9661_3212();
    f_9c01_1c14();
    f_8c32_31f9();
    d_69da_ddb9 = 0;
    for (;;) {
        d_69da_ddb3 = -1;
        f_aac9_421c();
        f_aac9_36e7();
        f_b8da_4237();
        f_9c01_2815(d_69da_d998);
        f_9c01_30af();
        f_b8da_49b3();
        f_b085_44b7();
        if (d_69da_d99a == 1)
            f_a330_0d3c(180);
        f_a83a_0f1a();
        f_b8da_25ed();
        f_aac9_3eb2();
        f_aac9_3fde();
        f_b8da_6f34();
        f_b8da_6ff1();
        f_b8da_66aa();
        f_9007_0908();
        f_9007_11c8();
        f_8c32_2b5e();
        d_69da_ddb9 = 0;
        f_8c32_308e();
        f_8c32_17e0();
        d_69da_ddb3 = 0;
        while (d_69da_d996 <= 98) {
            if (d_69da_d996 % 9 == 0 && d_69da_d996 > 9) {
                f_aac9_1732(0);
                d_69da_de3f = -1;
                if (!d_69da_ddb8)
                    f_7827_2b1c(0);
                f_a83a_03cb();
            }
            if (d_69da_d996 % 2 == 1)
                f_a83a_0440();
            if (d_69da_d996 <= 8 && d_69da_d996 % 2 == 0)
                f_7dd6_2d5a();
            else if (d_69da_d996 == 66)
                f_1a70_0b80("Transfer deadline is this week");
            else if (d_69da_d996 == 67)
                f_1a70_0b80("Transfer deadline has now passed");
            if (d_69da_d996 % 16 == 0)
                f_a330_27ce();
            f_a83a_0576();
            if (f_1a70_2b1e(d_69da_d996) || d_69da_d996 % 2 == 0) {
                if (f_1a70_243f(d_69da_d996))
                    d_69da_d99c = 0;
                if (f_1a70_24c5(d_69da_d996))
                    d_69da_d99e = 0;
                if (f_1a70_2522(d_69da_d996))
                    d_69da_d9a2 = 0;
                if (f_1a70_257b(d_69da_d996))
                    d_69da_d9a4 = 0;
                if (f_1a70_25dc(d_69da_d996))
                    d_69da_d9a6 = 0;
                if (f_1a70_2631(d_69da_d996))
                    d_69da_d9a8 = 0;
week:
                f_7827_0000();
                f_a330_0d3c(22);
                f_b085_5c44();
                if (f_1a70_2b1e(d_69da_d996)) {
                    f_7dd6_11a0(d_69da_d996, 0, -1);
                    f_829f_00ba();
                    if (f_1a70_237e(d_69da_d996)) {
                        f_8c32_36fa();
                        f_9c01_13fe();
                    } else {
                        if (d_69da_d996 == 57 || d_69da_d996 == 61 || d_69da_d996 == 69 ||
                            d_69da_d996 == 73 || d_69da_d996 == 77 || d_69da_d996 == 81)
                            f_9007_0000();
                        if (d_69da_d996 == 29 || d_69da_d996 == 33 || d_69da_d996 == 37 ||
                            d_69da_d996 == 47 || d_69da_d996 == 51 || d_69da_d996 == 57 ||
                            d_69da_d996 == 61)
                            f_9007_021e();
                    }
                    f_7dd6_11a0(d_69da_d996, 1, -1);
                    if (f_1a70_237e(d_69da_d996) || d_69da_d996 == 98)
                        f_8c32_1188();
                    if (f_1a70_243f(d_69da_d996) || d_69da_d996 == 82) {
                        d_69da_d9aa = d_69da_d9ac;
                        if (d_69da_d9aa > 0) {
                            if (d_69da_d996 == 82) {
                                d_69da_d9b0 = 83;
                                d_28da_2332[d_69da_d9b0] = d_69da_d9aa;
                            } else {
                                d_69da_d9b2 = d_69da_d996 + 1;
                                d_28da_2332[d_69da_d9b2] = d_69da_d9aa;
                            }
                        }
                    } else if (f_1a70_29fa(d_69da_d996))
                        d_69da_d9aa = 0;
                    if (f_1a70_243f(d_69da_d996) == 0 && d_69da_d996 != 82 || d_69da_d9ac <= 0)
                        f_8c32_17e0();
                    switch (d_69da_d996) {
                    case 15:
                        d_69da_d9b0 = 19;
                        break;
                    case 21:
                        d_69da_d9b4 = 25;
                        break;
                    case 23:
                        d_69da_d9b0 = 27;
                        break;
                    case 29:
                        d_69da_d9b8 = 33;
                        d_69da_d9b6 = 33;
                        d_69da_da0a = 33;
                        break;
                    case 33:
                        d_69da_da0a = 37;
                    case 37:
                        d_69da_d9b4 = 41;
                        break;
                    case 47:
                        d_69da_d9b8 = 51;
                        d_69da_d9b6 = 51;
                        d_69da_d9b4 = 51;
                        d_69da_da0a = 51;
                        break;
                    case 51:
                    case 57:
                        d_69da_d9b8 = 61;
                        d_69da_da0a = 61;
                        break;
                    case 61:
                        d_69da_d9b8 = 69;
                        break;
                    case 63:
                        d_69da_d9b0 = 67;
                        break;
                    case 69:
                        d_69da_d9b8 = 73;
                        d_69da_d9b6 = 73;
                        d_69da_d9b4 = 73;
                        d_69da_da0a = 73;
                        break;
                    case 73:
                        d_69da_d9b8 = 77;
                        break;
                    case 77:
                        d_69da_d9b8 = 81;
                        d_69da_d9b6 = 81;
                        d_69da_d9b4 = 81;
                        break;
                    case 89:
                        d_69da_d9b4 = 95;
                        break;
                    }
                    if (d_69da_d996 == 90 || d_69da_d996 == 96)
                        f_8c32_3589();
                    f_a330_04ca();
                    f_a330_0bd1();
                    d_69da_d9ba -= f_1a70_237e(d_69da_d996);
                    if (d_69da_d996 > 20)
                        f_9661_3d86();
                    f_9661_411b();
                    f_9661_4452();
                }
            }
            if (d_69da_d996 % 2 == 0) {
                if (d_69da_d996 >= 12)
                    f_a330_0a97();
                f_a83a_1ecd();
                f_b8da_4391();
                f_9007_061e();
                f_b085_5d39();
                f_b8da_1df1();
                f_a330_1d35();
            }
            d_69da_d996++;
        }
season_end:
        f_9007_1abb();
        f_7827_0000();
        if (!d_69da_ddb8) {
            do {
                f_1a70_2eaa(0, "Updating Data", "*Help|Pause For News|Don't Pause|Save Game|");
                if (d_69da_d992 == 0)
                    f_b8da_65b1();
                else if (d_69da_d992 == 3)
                    f_7dd6_1124();
            } while (d_69da_d992 == 0 || d_69da_d992 == 3);
            d_69da_ddb9 = d_69da_d992 == 2 ? -1 : 0;
        }
        d_69da_de13 = -1;
        f_aac9_1732(-1);
        if (!d_69da_ddb8)
            f_7827_2b1c(-1);
        f_9c01_1dcf();
        f_b8da_0d08();
        f_9c01_3671();
        f_b8da_4704();
        f_b8da_609f();
        f_9c01_3c56();
        f_b085_4503();
        f_9c01_2132();
        f_9661_3a67();
        f_9c01_2dc1();
        f_b085_3836();
        d_69da_de13 = 0;
        d_69da_d99a++;
    }
}

/* clear the 80 x 72 byte table */
void f_18f9_070c(void)
{
    unsigned char i;
    unsigned char j;

    for (i = 0; i <= 79; i++)
        for (j = 0; j <= 71; j = j + 1)
            d_4512_0000[j * 82 + i] = 0;
}

/* Clears the game's variables at start-up. */
void f_18f9_0752(void)
{
    _fmemset(d_28da_0000, 0, 16);
    _fmemset(d_28da_0010, 0, 160);
    _fmemset(d_28da_00b0, 0, 4160);
    _fmemset(d_28da_10f0, 0, 4160);
    _fmemset(d_28da_2130, 0, 320);
    _fmemset(d_28da_2270, 0, 392);
    _fmemset(d_28da_23f8, 0, 260);
    _fmemset(d_69da_df96, 0, 4);
    _fmemset(d_28da_24fc, 0, 320);
    _fmemset(d_69da_df9a, 0, 4);
    _fmemset(d_69da_df9e, 0, 4);
    _fmemset(d_69da_dfa2, 0, 4);
    _fmemset(d_28da_263c, 0, 640);
    _fmemset(d_28da_28bc, 0, 400);
    _fmemset(d_28da_2a4c, 0, 38);
    _fmemset(d_28da_2a72, 0, 6);
    _fmemset(d_28da_2a78, 0, 44640);
    _fmemset(d_3668_0000, 0, 44640);
    _fmemset(d_3668_ae60, 0, 14880);
    _fmemset(d_69da_dfa6, 0, 4);
    _fmemset(d_3668_e880, 0, 6);
    _fmemset(d_3668_e886, 0, 84);
    _fmemset(d_3668_e8da, 0, 56);
    _fmemset(d_3668_e912, 0, 28);
    _fmemset(d_3668_e92e, 0, 180);
    _fmemset(d_3668_e9e2, 0, 180);
    _fmemset(d_4512_0000, 0, 5904);
    _fmemset(d_4512_1710, 0, 1920);
    _fmemset(d_4512_1e90, 0, 1280);
    _fmemset(d_4512_2390, 0, 9100);
    _fmemset(d_69da_dfaa, 0, 4);
    _fmemset(d_4512_471c, 0, 10);
    _fmemset(d_4512_4726, 0, 3444);
    _fmemset(d_4512_549a, 0, 2296);
    _fmemset(d_4512_5d92, 0, 6);
    _fmemset(d_4512_5d98, 0, 84);
    _fmemset(d_4512_5dec, 0, 28);
    _fmemset(d_4512_5e08, 0, 28);
    _fmemset(d_4512_5e24, 0, 1280);
    _fmemset(d_4512_6324, 0, 80);
    _fmemset(d_4512_6374, 0, 2);
    _fmemset(d_4512_6376, 0, 2);
    _fmemset(d_4512_6378, 0, 4);
    _fmemset(d_4512_637c, 0, 2560);
    _fmemset(d_4512_6d7c, 0, 1280);
    _fmemset(d_69da_dfae, 0, 4);
    _fmemset(d_4512_727c, 0, 160);
    _fmemset(d_4512_731c, 0, 240);
    _fmemset(d_4512_740c, 0, 112);
    _fmemset(d_4512_747c, 0, 8);
    _fmemset(d_4512_7484, 0, 2800);
    _fmemset(d_4512_7f74, 0, 140);
    _fmemset(d_4512_8000, 0, 1920);
    _fmemset(d_4512_8780, 0, 60);
    _fmemset(d_4512_87bc, 0, 80);
    _fmemset(d_4512_880c, 0, 1820);
    _fmemset(d_4512_8f28, 0, 2800);
    _fmemset(d_4512_9a18, 0, 540);
    _fmemset(d_69da_dfb2, 0, 4);
    _fmemset(d_69da_dfb6, 0, 4);
    _fmemset(d_4512_9c34, 0, 560);
    _fmemset(d_4512_9e64, 0, 440);
    _fmemset(d_4512_a01c, 0, 16);
    _fmemset(d_4512_a02c, 0, 32);
    _fmemset(d_4512_a04c, 0, 8);
    _fmemset(d_4512_a054, 0, 16);
    _fmemset(d_4512_a064, 0, 16);
    _fmemset(d_4512_a074, 0, 48);
    _fmemset(d_4512_a0a4, 0, 60);
    _fmemset(d_4512_a0e0, 0, 160);
    _fmemset(d_4512_a180, 0, 320);
    _fmemset(d_4512_a2c0, 0, 180);
    _fmemset(d_4512_a374, 0, 280);
    _fmemset(d_4512_a48c, 0, 60);
    _fmemset(d_69da_dfba, 0, 4);
    _fmemset(d_69da_dfbe, 0, 4);
    _fmemset(d_4512_a4c8, 0, 6400);
    _fmemset(d_4512_bdc8, 0, 7440);
    _fmemset(d_4512_dad8, 0, 2400);
    _fmemset(d_4512_e438, 0, 368);
    _fmemset(d_536d_0000, 0, 6880);
    _fmemset(d_536d_1ae0, 0, 400);
    _fmemset(d_536d_1c70, 0, 3064);
    _fmemset(d_536d_2b66, 0, 1280);
    _fmemset(d_536d_3101, 0, 6200);
    _fmemset(d_536d_4939, 0, 4);
    _fmemset(d_536d_493d, 0, 768);
    _fmemset(d_536d_4c3d, 0, 640);
    _fmemset(d_536d_4ebd, 0, 20);
    _fmemset(d_536d_4ed1, 0, 80);
    _fmemset(d_536d_4f21, 0, 80);
    _fmemset(d_536d_4f71, 0, 100);
    _fmemset(d_536d_4fd5, 0, 208);
    _fmemset(d_69da_dfc2, 0, 4);
    _fmemset(d_536d_50a5, 0, 40);
    _fmemset(d_536d_50cd, 0, 320);
    _fmemset(d_536d_520d, 0, 80);
    _fmemset(d_536d_525d, 0, 80);
    _fmemset(d_536d_52ad, 0, 80);
    _fmemset(d_536d_52fd, 0, 80);
    _fmemset(d_536d_534d, 0, 80);
    _fmemset(d_536d_539d, 0, 80);
    _fmemset(d_536d_53ed, 0, 80);
    _fmemset(d_536d_543d, 0, 80);
    _fmemset(d_536d_548d, 0, 80);
    _fmemset(d_536d_54dd, 0, 80);
    _fmemset(d_536d_552d, 0, 80);
    _fmemset(d_536d_557d, 0, 80);
    _fmemset(d_536d_55cd, 0, 30);
    _fmemset(d_536d_55eb, 0, 80);
    _fmemset(d_536d_563b, 0, 80);
    _fmemset(d_536d_568b, 0, 80);
    _fmemset(d_536d_56db, 0, 80);
    _fmemset(d_536d_572b, 0, 80);
    _fmemset(d_536d_577b, 0, 80);
    _fmemset(d_536d_57cb, 0, 80);
    _fmemset(d_536d_581b, 0, 80);
    _fmemset(d_536d_586b, 0, 80);
    _fmemset(d_536d_58bb, 0, 80);
    _fmemset(d_536d_590b, 0, 20);
    _fmemset(d_536d_591f, 0, 20);
    _fmemset(d_536d_5933, 0, 60);
    _fmemset(d_536d_596f, 0, 160);
    _fmemset(d_536d_5a0f, 0, 30);
    _fmemset(d_536d_5a2d, 0, 80);
    _fmemset(d_536d_5a7d, 0, 80);
    _fmemset(d_536d_5acd, 0, 80);
    _fmemset(d_536d_5b1d, 0, 80);
    _fmemset(d_536d_5b6d, 0, 80);
    _fmemset(d_536d_5bbd, 0, 80);
    _fmemset(d_536d_5c0d, 0, 80);
    _fmemset(d_536d_5c5d, 0, 80);
    _fmemset(d_536d_5cad, 0, 80);
    _fmemset(d_536d_5cfd, 0, 80);
    _fmemset(d_536d_5d4d, 0, 80);
    _fmemset(d_536d_5d9d, 0, 80);
    _fmemset(d_536d_5ded, 0, 80);
    _fmemset(d_536d_5e3d, 0, 80);
    _fmemset(d_536d_5e8d, 0, 80);
    _fmemset(d_536d_5edd, 0, 80);
    _fmemset(d_536d_5f2d, 0, 80);
    _fmemset(d_536d_5f7d, 0, 80);
    _fmemset(d_536d_5fcd, 0, 80);
    _fmemset(d_536d_601d, 0, 80);
    _fmemset(d_536d_606d, 0, 80);
    _fmemset(d_536d_60bd, 0, 80);
    _fmemset(d_536d_610d, 0, 80);
    _fmemset(d_536d_615d, 0, 80);
    _fmemset(d_536d_61ad, 0, 80);
    _fmemset(d_536d_61fd, 0, 80);
    _fmemset(d_536d_624d, 0, 80);
    _fmemset(d_536d_629d, 0, 80);
    _fmemset(d_536d_62ed, 0, 80);
    _fmemset(d_536d_633d, 0, 80);
    _fmemset(d_536d_638d, 0, 2);
    _fmemset(d_536d_638f, 0, 2);
    _fmemset(d_536d_6391, 0, 80);
    _fmemset(d_536d_63e1, 0, 80);
    _fmemset(d_536d_6431, 0, 80);
    _fmemset(d_536d_6481, 0, 320);
    _fmemset(d_536d_65c1, 0, 80);
    _fmemset(d_536d_6611, 0, 320);
    _fmemset(d_536d_6751, 0, 320);
    _fmemset(d_536d_6891, 0, 80);
    _fmemset(d_536d_68e1, 0, 80);
    _fmemset(d_536d_6931, 0, 80);
    _fmemset(d_536d_6981, 0, 80);
    _fmemset(d_536d_69d1, 0, 80);
    _fmemset(d_536d_6a21, 0, 320);
    _fmemset(d_536d_6b61, 0, 80);
    _fmemset(d_536d_6bb1, 0, 80);
    _fmemset(d_536d_6c01, 0, 2);
    _fmemset(d_536d_6c03, 0, 80);
    _fmemset(d_536d_6c53, 0, 80);
    _fmemset(d_536d_6ca3, 0, 80);
    _fmemset(d_536d_6cf3, 0, 80);
    _fmemset(d_536d_6d43, 0, 80);
    _fmemset(d_536d_6d93, 0, 80);
    _fmemset(d_536d_6de3, 0, 80);
    _fmemset(d_536d_6e33, 0, 40);
    _fmemset(d_536d_6e5b, 0, 80);
    _fmemset(d_536d_6eab, 0, 80);
    _fmemset(d_536d_6efb, 0, 80);
    _fmemset(d_536d_6f4b, 0, 80);
    _fmemset(d_536d_6f9b, 0, 80);
    _fmemset(d_536d_6feb, 0, 80);
    _fmemset(d_536d_703b, 0, 280);
    _fmemset(d_536d_7153, 0, 280);
    _fmemset(d_536d_726b, 0, 80);
    _fmemset(d_536d_72bb, 0, 80);
    _fmemset(d_536d_730b, 0, 10);
    _fmemset(d_536d_7315, 0, 80);
    _fmemset(d_536d_7365, 0, 80);
    _fmemset(d_536d_73b5, 0, 80);
    _fmemset(d_536d_7405, 0, 80);
    _fmemset(d_536d_7455, 0, 80);
    _fmemset(d_536d_74a5, 0, 80);
    _fmemset(d_536d_74f5, 0, 80);
    _fmemset(d_536d_7545, 0, 80);
    _fmemset(d_536d_7595, 0, 80);
    _fmemset(d_536d_75e5, 0, 80);
    _fmemset(d_536d_7635, 0, 80);
    _fmemset(d_536d_7685, 0, 80);
    _fmemset(d_536d_76d5, 0, 80);
    _fmemset(d_536d_7725, 0, 80);
    _fmemset(d_536d_7775, 0, 80);
    _fmemset(d_536d_77c5, 0, 80);
    _fmemset(d_536d_7815, 0, 80);
    _fmemset(d_536d_7865, 0, 80);
    _fmemset(d_536d_78b5, 0, 80);
    _fmemset(d_536d_7905, 0, 80);
    _fmemset(d_536d_7955, 0, 80);
    _fmemset(d_536d_79a5, 0, 80);
    _fmemset(d_536d_79f5, 0, 80);
    _fmemset(d_536d_7a45, 0, 80);
    _fmemset(d_536d_7a95, 0, 80);
    _fmemset(d_536d_7ae5, 0, 80);
    _fmemset(d_536d_7b35, 0, 80);
    _fmemset(d_536d_7b85, 0, 80);
    _fmemset(d_536d_7bd5, 0, 80);
    _fmemset(d_536d_7c25, 0, 80);
    _fmemset(d_536d_7c75, 0, 80);
    _fmemset(d_536d_7cc5, 0, 80);
    _fmemset(d_536d_7d15, 0, 80);
    _fmemset(d_536d_7d65, 0, 80);
    _fmemset(d_536d_7db5, 0, 100);
    _fmemset(d_536d_7e19, 0, 80);
    _fmemset(d_536d_7e69, 0, 80);
    _fmemset(d_536d_7eb9, 0, 80);
    _fmemset(d_536d_7f09, 0, 80);
    _fmemset(d_536d_7f59, 0, 80);
    _fmemset(d_536d_7fa9, 0, 80);
    _fmemset(d_536d_7ff9, 0, 80);
    _fmemset(d_536d_8049, 0, 80);
    _fmemset(d_536d_8099, 0, 80);
    _fmemset(d_536d_80e9, 0, 80);
    _fmemset(d_536d_8139, 0, 80);
    _fmemset(d_536d_8189, 0, 80);
    _fmemset(d_536d_81d9, 0, 80);
    _fmemset(d_536d_8229, 0, 20);
    _fmemset(d_536d_823d, 0, 80);
    _fmemset(d_536d_828d, 0, 80);
    _fmemset(d_536d_82dd, 0, 40);
    _fmemset(d_536d_8305, 0, 20);
    _fmemset(d_536d_8319, 0, 80);
    _fmemset(d_536d_8369, 0, 80);
    _fmemset(d_69da_dfc6, 0, 4);
    _fmemset(d_536d_83b9, 0, 820);
    _fmemset(d_69da_dfca, 0, 4);
    _fmemset(d_536d_86ed, 0, 4000);
    _fmemset(d_69da_dfce, 0, 4);
    _fmemset(d_69da_dfd2, 0, 4);
    _fmemset(d_69da_dfd6, 0, 4);
    _fmemset(d_536d_968d, 0, 1600);
    _fmemset(d_536d_9ccd, 0, 1920);
    _fmemset(d_536d_a44d, 0, 40);
    _fmemset(d_536d_a475, 0, 40);
    _fmemset(d_536d_a49d, 0, 40);
    _fmemset(d_536d_a4c5, 0, 40);
    _fmemset(d_536d_a4ed, 0, 40);
}
