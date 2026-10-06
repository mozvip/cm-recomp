/* @at 1446:0009 */
/* @data 60ae:0094 */
/* @module */

/* The game's main module: the start-up menus and the season loop, one week per pass.
   CM93 rewrote CM1's version (144E.C): a help/new game menu, a choice of real or generated
   players, a pause option at the end of the season, and 99 weeks. */

void f_1bd3_03cf(char c);
void f_1bd3_0d58(void);
void f_1446_0725(void);
void f_14bc_60da(void);
void f_14bc_4bd3(char far *title);
void f_14bc_2f90(int n, char far *title, char far *items);
void f_14bc_3334(int);
char f_14bc_0c5e(void);
void f_14bc_0b83(char far *);
char f_14bc_248a(int);
char f_14bc_2545(int);
char f_14bc_25c5(int);
char f_14bc_2620(int);
char f_14bc_2677(int);
char f_14bc_26d6(int);
char f_14bc_2729(int);
char f_14bc_2b02(int);
char f_14bc_2c1d(int);

void f_70a9_0000(void);
void f_70a9_316b(char);
void f_7732_12ec(void);
void f_7732_136d(int, int, int);
void f_7732_3167(void);
void f_7c74_00eb(void);
void f_8683_12d3(void);
void f_8683_1952(void);
void f_8683_2f3b(void);
void f_8683_3456(void);
void f_8683_35c9(void);
void f_8683_3974(void);
void f_8683_3b21(void);
void f_8aa1_0000(void);
void f_8aa1_0238(void);
void f_8aa1_06be(void);
void f_8aa1_099a(void);
void f_8aa1_124c(void);
void f_9107_32f4(void);
void f_9107_3b4d(void);
void f_9107_3e85(void);
void f_9107_420f(void);
void f_9107_456c(void);
void f_96bb_1617(void);
void f_96bb_1a0c(void);
void f_96bb_1cb4(void);
void f_96bb_1e3a(void);
void f_96bb_1ff6(void);
void f_96bb_23c4(void);
void f_96bb_2ac6(int);
void f_96bb_30ac(void);
void f_96bb_3372(void);
void f_96bb_3937(void);
void f_96bb_3f40(void);
void f_9e77_049b(char far *);
void f_9e77_053e(void);
void f_9e77_0aed(void);
void f_9e77_0c7b(void);
void f_9e77_0df3(int);
void f_9e77_1dce(void);
void f_9e77_28e8(void);
void f_9e77_2c88(char);
void f_9e77_47cb(void);
void f_9e77_4e5e(int);
void f_a3de_0398(void);
void f_a3de_0416(void);
void f_a3de_048b(void);
void f_a3de_05c9(void);
void f_a3de_1021(void);
void f_a3de_21e1(void);
void f_a694_1d89(char);
void f_a694_220f(void);
void f_a694_3626(void);
void f_a694_3dd4(void);
void f_a694_455e(void);
void f_a694_46a8(void);
void f_a694_48ef(void);
void f_ad38_0000(void);
void f_ad38_0256(void);
void f_ad38_3423(void);
void f_ad38_3fe8(void);
void f_ad38_3fed(void);
void f_ad38_4019(char);
void f_ad38_41c9(void);
void f_ad38_4201(void);
void f_ad38_422d(void);
void f_ad38_5ecd(void);
void f_ad38_5fc8(void);
void f_b628_0d28(void);
void f_b628_2109(void);
void f_b628_2934(void);
void f_b628_47e3(void);
void f_b628_491e(void);
void f_b628_4c59(void);
void f_b628_4ed1(void);
void f_b628_65ab(void);
void f_b628_694d(void);
void f_b628_6a61(void);
void f_b628_6ba7(void);
void f_b628_6ced(void);
void f_b628_7759(void);
void f_b628_77f4(void);
void f_be31_1f93(void);
void f_be31_21a7(void);

extern int d_60ae_d62a;
extern int d_60ae_fb04;
extern int d_60ae_dda0;                 /* menu choice */
extern int d_60ae_dd9c;                 /* week of the season, 0..98 */
extern int d_60ae_dd9a, d_60ae_dd98;    /* season */
extern char d_60ae_d97d;                /* printer on */
extern char d_60ae_d8f6, d_60ae_d97a, d_60ae_d97b, d_60ae_d980, d_60ae_d8f4, d_60ae_d920;
extern int d_60ae_dd96, d_60ae_dd94, d_60ae_dd90, d_60ae_dd8e, d_60ae_dd8c, d_60ae_dd8a;
extern int d_60ae_dd88, d_60ae_dd86, d_60ae_dd82, d_60ae_dd80, d_60ae_dd7e, d_60ae_dd7c;
extern int d_60ae_dd7a, d_60ae_dd78, d_60ae_dd28;
extern int far d_471b_b5a2[];
extern unsigned char far d_323f_4c14[];

long d_60ae_0094 = 0;
int d_60ae_0098 = 12000;
char d_60ae_009a[] = "$VER: v1.10";

void main(int argc, char *argv[])
{
    char choice;

    d_60ae_d62a = 0x8000;
    f_1bd3_03cf(argc > 1 ? argv[1][0] : 0);
    f_1bd3_0d58();
    f_a694_220f();
    f_1446_0725();
    f_14bc_60da();
    f_9e77_47cb();
    if (d_60ae_fb04 == 0)
        f_b628_694d();
    f_be31_21a7();
    do {
        f_14bc_4bd3("Championship Manager '93");
        f_14bc_2f90(0, "", "*Help|New Game|Continue Season|Quick Start|");
again:
        f_14bc_3334(3);
        if (d_60ae_dda0 == 0)
            f_b628_6a61();
        else if (d_60ae_dda0 == 1 && !f_14bc_0c5e())
            goto again;
    } while (d_60ae_dda0 == 0);
    choice = d_60ae_dda0;
    f_be31_1f93();
printer:
    f_14bc_2f90(0, "Printer Option", "Printer On|Printer Off|");
    if (d_60ae_dda0 == 0) {
        if (f_14bc_0c5e() == 0)
            goto printer;
        f_ad38_3fe8();
        f_9e77_049b("Put printer on line to continue");
        f_ad38_4019(1);
        d_60ae_d97d = -1;
        f_ad38_3fed();
    } else if (d_60ae_dda0 == 1)
        d_60ae_d97d = 0;
    if (choice == 2) {
        f_9e77_2c88(0);
        if (d_60ae_dd9c <= 98)
            goto week;
        goto season_end;
    }
    if (choice == 3) {
        f_9e77_2c88(1);
        f_9e77_4e5e(0);
        goto week;
    }
    f_14bc_2f90(0, "Championship Manager '93", "1993 Players|Generated Players|");
    d_60ae_d8f6 = d_60ae_dda0 == 0 ? -1 : 0;
    f_ad38_0000();
    f_a694_3626();
    f_a3de_0398();
    f_b628_65ab();
    f_96bb_1cb4();
    f_ad38_4201();
    f_96bb_1a0c();
    f_ad38_0256();
    f_9107_32f4();
    f_96bb_1e3a();
    f_8683_35c9();
    d_60ae_d97a = 0;
    for (;;) {
        d_60ae_d980 = -1;
        f_a694_48ef();
        f_a694_3dd4();
        f_b628_47e3();
        f_96bb_2ac6(d_60ae_dd9a);
        f_96bb_3372();
        f_b628_4ed1();
        f_ad38_41c9();
        if (d_60ae_dd98 == 1)
            f_9e77_0df3(180);
        f_a3de_1021();
        f_b628_2934();
        f_a694_455e();
        f_a694_46a8();
        f_b628_7759();
        f_b628_77f4();
        f_b628_6ced();
        f_8aa1_099a();
        f_8aa1_124c();
        f_8683_2f3b();
        d_60ae_d97a = 0;
        f_8683_3456();
        f_8683_1952();
        d_60ae_d980 = 0;
        while (d_60ae_dd9c <= 98) {
            if (d_60ae_dd9c % 9 == 0 && d_60ae_dd9c > 9) {
                f_a694_1d89(0);
                d_60ae_d8f4 = -1;
                if (!d_60ae_d97b)
                    f_70a9_316b(0);
                f_a3de_0416();
            }
            if (d_60ae_dd9c % 2 == 1)
                f_a3de_048b();
            if (d_60ae_dd9c <= 8 && d_60ae_dd9c % 2 == 0)
                f_7732_3167();
            else if (d_60ae_dd9c == 66)
                f_14bc_0b83("Transfer deadline is this week");
            else if (d_60ae_dd9c == 67)
                f_14bc_0b83("Transfer deadline has now passed");
            if (d_60ae_dd9c % 16 == 0)
                f_9e77_28e8();
            f_a3de_05c9();
            if (f_14bc_2c1d(d_60ae_dd9c) || d_60ae_dd9c % 2 == 0) {
                if (f_14bc_2545(d_60ae_dd9c))
                    d_60ae_dd96 = 0;
                if (f_14bc_25c5(d_60ae_dd9c))
                    d_60ae_dd94 = 0;
                if (f_14bc_2620(d_60ae_dd9c))
                    d_60ae_dd90 = 0;
                if (f_14bc_2677(d_60ae_dd9c))
                    d_60ae_dd8e = 0;
                if (f_14bc_26d6(d_60ae_dd9c))
                    d_60ae_dd8c = 0;
                if (f_14bc_2729(d_60ae_dd9c))
                    d_60ae_dd8a = 0;
week:
                f_70a9_0000();
                f_9e77_0df3(22);
                f_ad38_5ecd();
                if (f_14bc_2c1d(d_60ae_dd9c)) {
                    f_7732_136d(d_60ae_dd9c, 0, -1);
                    f_7c74_00eb();
                    if (f_14bc_248a(d_60ae_dd9c)) {
                        f_8683_3b21();
                        f_96bb_1617();
                    } else {
                        if (d_60ae_dd9c == 57 || d_60ae_dd9c == 61 || d_60ae_dd9c == 69 ||
                            d_60ae_dd9c == 73 || d_60ae_dd9c == 77 || d_60ae_dd9c == 81)
                            f_8aa1_0000();
                        if (d_60ae_dd9c == 29 || d_60ae_dd9c == 33 || d_60ae_dd9c == 37 ||
                            d_60ae_dd9c == 47 || d_60ae_dd9c == 51 || d_60ae_dd9c == 57 ||
                            d_60ae_dd9c == 61)
                            f_8aa1_0238();
                    }
                    f_7732_136d(d_60ae_dd9c, 1, -1);
                    if (f_14bc_248a(d_60ae_dd9c) || d_60ae_dd9c == 98)
                        f_8683_12d3();
                    if (f_14bc_2545(d_60ae_dd9c) || d_60ae_dd9c == 82) {
                        d_60ae_dd88 = d_60ae_dd86;
                        if (d_60ae_dd88 > 0) {
                            if (d_60ae_dd9c == 82) {
                                d_60ae_dd82 = 83;
                                d_471b_b5a2[d_60ae_dd82] = d_60ae_dd88;
                            } else {
                                d_60ae_dd80 = d_60ae_dd9c + 1;
                                d_471b_b5a2[d_60ae_dd80] = d_60ae_dd88;
                            }
                        }
                    } else if (f_14bc_2b02(d_60ae_dd9c))
                        d_60ae_dd88 = 0;
                    if (f_14bc_2545(d_60ae_dd9c) == 0 && d_60ae_dd9c != 82 || d_60ae_dd86 <= 0)
                        f_8683_1952();
                    switch (d_60ae_dd9c) {
                    case 15:
                        d_60ae_dd82 = 19;
                        break;
                    case 21:
                        d_60ae_dd7e = 25;
                        break;
                    case 23:
                        d_60ae_dd82 = 27;
                        break;
                    case 29:
                        d_60ae_dd7a = 33;
                        d_60ae_dd7c = 33;
                        d_60ae_dd28 = 33;
                        break;
                    case 33:
                        d_60ae_dd28 = 37;
                    case 37:
                        d_60ae_dd7e = 41;
                        break;
                    case 47:
                        d_60ae_dd7a = 51;
                        d_60ae_dd7c = 51;
                        d_60ae_dd7e = 51;
                        d_60ae_dd28 = 51;
                        break;
                    case 51:
                    case 57:
                        d_60ae_dd7a = 61;
                        d_60ae_dd28 = 61;
                        break;
                    case 61:
                        d_60ae_dd7a = 69;
                        break;
                    case 63:
                        d_60ae_dd82 = 67;
                        break;
                    case 69:
                        d_60ae_dd7a = 73;
                        d_60ae_dd7c = 73;
                        d_60ae_dd7e = 73;
                        d_60ae_dd28 = 73;
                        break;
                    case 73:
                        d_60ae_dd7a = 77;
                        break;
                    case 77:
                        d_60ae_dd7a = 81;
                        d_60ae_dd7c = 81;
                        d_60ae_dd7e = 81;
                        break;
                    case 89:
                        d_60ae_dd7e = 95;
                        break;
                    }
                    if (d_60ae_dd9c == 90 || d_60ae_dd9c == 96)
                        f_8683_3974();
                    f_9e77_053e();
                    f_9e77_0c7b();
                    d_60ae_dd78 -= f_14bc_248a(d_60ae_dd9c);
                    if (d_60ae_dd9c > 20)
                        f_9107_3e85();
                    f_9107_420f();
                    f_9107_456c();
                }
            }
            if (d_60ae_dd9c % 2 == 0) {
                if (d_60ae_dd9c >= 12)
                    f_9e77_0aed();
                f_a3de_21e1();
                f_b628_491e();
                f_8aa1_06be();
                f_ad38_5fc8();
                f_b628_2109();
                f_9e77_1dce();
            }
            d_60ae_dd9c++;
        }
season_end:
        f_70a9_0000();
        if (!d_60ae_d97b) {
            do {
                f_14bc_2f90(0, "Updating Data", "*Help|Pause For News|Don't Pause|Save Game|");
                if (d_60ae_dda0 == 0)
                    f_b628_6ba7();
                else if (d_60ae_dda0 == 3)
                    f_7732_12ec();
            } while (d_60ae_dda0 == 0 || d_60ae_dda0 == 3);
            d_60ae_d97a = d_60ae_dda0 == 2 ? -1 : 0;
        }
        d_60ae_d920 = -1;
        f_a694_1d89(-1);
        if (!d_60ae_d97b)
            f_70a9_316b(-1);
        f_96bb_1ff6();
        f_b628_0d28();
        f_96bb_3937();
        f_b628_4c59();
        f_b628_65ab();
        f_96bb_3f40();
        f_ad38_422d();
        f_96bb_23c4();
        f_9107_3b4d();
        f_96bb_30ac();
        f_ad38_3423();
        d_60ae_d920 = 0;
        d_60ae_dd98++;
    }
}

/* clear the 80 x 72 byte table */
void f_1446_0725(void)
{
    unsigned char i;
    unsigned char j;

    for (i = 0; i <= 79; i++)
        for (j = 0; j <= 71; j = j + 1)
            d_323f_4c14[j * 82 + i] = 0;
}
