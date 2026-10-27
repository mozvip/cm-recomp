/* Native port of decomp/src/1BD3.C (see ../README.md). */
/* @at 1bd3:000d */
/* @data 60ae:9628 */
/* @module */

#include "port.h"

int16_t f_1bd3_0180(void);
int16_t f_1bd3_13df(int32_t size);                 /* allocate a virtual memory block */
void f_1bd3_18c4(void);
void f_1dfe_000a(void);
extern char d_60ae_fdb6;                /* 0 none, 1 EGA, 2 VGA */
extern int16_t d_60ae_fdd8, d_60ae_fdec, d_60ae_fdea, d_60ae_fddc;
extern int16_t d_60ae_fdd6, d_60ae_fdd4, d_60ae_fdee, d_60ae_fdd2, d_60ae_fdd0, d_60ae_fdce;
extern int16_t d_60ae_fde0, d_60ae_fdde, d_60ae_fde4, d_60ae_fde2, d_60ae_fde8, d_60ae_fdda;
extern int16_t d_60ae_fde6;
extern int16_t d_60ae_fdc8;                 /* virtual memory blocks (f_1bd3_13df) */
extern char d_60ae_974e[], d_60ae_9d4e[], d_60ae_a54e[];  /* the fonts (another module's data) */
extern int16_t d_60ae_fb04;

/* The rest of the module is the platform's (../../../../port/system.c, system93.c): this
   is what is CM93's own. */

struct window d_60ae_9638 = { d_60ae_974e, { 0, 0 }, 5, 5, 1 };
struct window d_60ae_9646 = { d_60ae_9d4e, { 0, 0 }, 7, 7, -1 };
struct window d_60ae_9654 = { d_60ae_a54e, { 0, 0 }, 7, 14, 0 };

void f_1bd3_01c3(void)
{
    d_60ae_fdb6 = f_1bd3_0180();
    if (d_60ae_fdb6 != 2) {
        printf("Requires VGA\n");
        exit(1);
    }
    f_1bd3_18c4();
    if (d_60ae_fb04 == 0)
        f_1dfe_000a();
    d_60ae_9638.buf = d_60ae_974e;
    d_60ae_9646.buf = d_60ae_9d4e;
    d_60ae_9654.buf = d_60ae_a54e;
    d_60ae_fdc8 = f_1bd3_13df(64000);
    d_60ae_fdd8 = f_1bd3_13df(5000);
    d_60ae_fdec = f_1bd3_13df(7440);
    d_60ae_fdea = f_1bd3_13df(2600);
    d_60ae_fddc = f_1bd3_13df(18600);
    d_60ae_fdd6 = f_1bd3_13df(8282);
    d_60ae_fdd4 = f_1bd3_13df(6400);
    d_60ae_fdee = f_1bd3_13df(3720);
    d_60ae_fdd2 = f_1bd3_13df(604);
    d_60ae_fdd0 = f_1bd3_13df(604);
    d_60ae_fdce = f_1bd3_13df(604);
    d_60ae_fde0 = f_1bd3_13df(1000);
    d_60ae_fdde = f_1bd3_13df(2240);
    d_60ae_fde4 = f_1bd3_13df(3900);
    d_60ae_fde2 = f_1bd3_13df(10240);
    d_60ae_fde8 = f_1bd3_13df(1300);
    d_60ae_fdda = f_1bd3_13df(5120);
    d_60ae_fde6 = f_1bd3_13df(18600);
}
