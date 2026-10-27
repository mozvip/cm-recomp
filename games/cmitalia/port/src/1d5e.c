/* Native port of decomp/src/1D5E.C (see ../README.md). */
/* @at 1d5e:000e */
/* @data 5d51:952a */
/* @module */

#include "port.h"

int16_t f_1d5e_0181(void);
int16_t f_1d5e_13e0(int32_t size);                 /* allocate a virtual memory block */
void f_1d5e_18c5(void);
void f_1f89_000c(void);
extern char d_5d51_dd6c;                /* 0 none, 1 EGA, 2 VGA */
extern int16_t d_5d51_dd8e, d_5d51_dda2, d_5d51_dda0, d_5d51_dd92;
extern int16_t d_5d51_dd8c, d_5d51_dd8a, d_5d51_dda4, d_5d51_dd88, d_5d51_dd86, d_5d51_dd84;
extern int16_t d_5d51_dd96, d_5d51_dd94, d_5d51_dd9a, d_5d51_dd98, d_5d51_dd9e, d_5d51_dd90;
extern int16_t d_5d51_dd9c;
extern int16_t d_5d51_dd7e;                 /* virtual memory blocks (f_1d5e_13e0) */
extern char d_5d51_9652[], d_5d51_9c52[], d_5d51_a452[];  /* the fonts (another module's data) */
extern int16_t d_5d51_daba;

/* The rest of the module is the platform's (../../../../port/system.c, system93.c): this
   is what is Italia's own. */

struct window d_5d51_953a = { d_5d51_9652, { 0, 0 }, 5, 5, 1 };
struct window d_5d51_9548 = { d_5d51_9c52, { 0, 0 }, 7, 7, -1 };
struct window d_5d51_9556 = { d_5d51_a452, { 0, 0 }, 7, 14, 0 };

void f_1d5e_01c4(void)
{
    d_5d51_dd6c = f_1d5e_0181();
    if (d_5d51_dd6c != 2) {
        printf("Requires VGA\n");
        exit(1);
    }
    f_1d5e_18c5();
    if (d_5d51_daba == 0)
        f_1f89_000c();
    d_5d51_953a.buf = d_5d51_9652;
    d_5d51_9548.buf = d_5d51_9c52;
    d_5d51_9556.buf = d_5d51_a452;
    d_5d51_dd7e = f_1d5e_13e0(64000);
    d_5d51_dd8e = f_1d5e_13e0(5000);
    d_5d51_dda2 = f_1d5e_13e0(6000);
    d_5d51_dda0 = f_1d5e_13e0(2600);
    d_5d51_dd92 = f_1d5e_13e0(15000);
    d_5d51_dd8c = f_1d5e_13e0(4040);
    d_5d51_dd8a = f_1d5e_13e0(6400);
    d_5d51_dda4 = f_1d5e_13e0(3000);
    d_5d51_dd88 = f_1d5e_13e0(604);
    d_5d51_dd86 = f_1d5e_13e0(604);
    d_5d51_dd84 = f_1d5e_13e0(604);
    d_5d51_dd96 = f_1d5e_13e0(200);
    d_5d51_dd94 = f_1d5e_13e0(2240);
    d_5d51_dd9a = f_1d5e_13e0(3900);
    d_5d51_dd98 = f_1d5e_13e0(4864);
    d_5d51_dd9e = f_1d5e_13e0(1300);
    d_5d51_dd90 = f_1d5e_13e0(2432);
    d_5d51_dd9c = f_1d5e_13e0(15000);
}
