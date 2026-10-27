/* Native port of decomp/src/215D.C (see ../README.md). */
/* @at 215d:0000 */
/* @data 61eb:91a0 */
/* @module */

#include "port.h"

int16_t f_215d_017d(void);
int16_t f_215d_142b(int32_t size);                 /* allocate a virtual memory block */
void f_215d_188e(void);
void f_2386_0006(void);
extern char d_61eb_dc7f;                /* 0 none, 1 EGA, 2 VGA */
extern int16_t d_61eb_dc5c, d_61eb_dc48, d_61eb_dc4a, d_61eb_dc58;
extern int16_t d_61eb_dc5e, d_61eb_dc60, d_61eb_dc46, d_61eb_dc62, d_61eb_dc64, d_61eb_dc66;
extern int16_t d_61eb_dc54, d_61eb_dc56, d_61eb_dc50, d_61eb_dc52, d_61eb_dc4c, d_61eb_dc5a;
extern int16_t d_61eb_dc4e;
extern int16_t d_61eb_dc6c;                 /* virtual memory blocks (f_215d_142b) */
extern char d_61eb_92c8[], d_61eb_98c8[], d_61eb_a0c8[];  /* the fonts (another module's data) */
extern int16_t d_61eb_df30;

/* The rest of the module is the platform's (../../../../port/system.c, system93.c): this
   is what is Italia 95's own. */

struct window d_61eb_91b0 = { d_61eb_92c8, { 0, 0 }, 5, 5, 1 };
struct window d_61eb_91be = { d_61eb_98c8, { 0, 0 }, 7, 7, -1 };
struct window d_61eb_91cc = { d_61eb_a0c8, { 0, 0 }, 7, 14, 0 };

void f_215d_01c2(void)
{
    d_61eb_dc7f = f_215d_017d();
    if (d_61eb_dc7f != 2) {
        printf("Requires VGA\n");
        exit(1);
    }
    f_215d_188e();
    if (d_61eb_df30 == 0)
        f_2386_0006();
    d_61eb_91b0.buf = d_61eb_92c8;
    d_61eb_91be.buf = d_61eb_98c8;
    d_61eb_91cc.buf = d_61eb_a0c8;
    d_61eb_dc6c = f_215d_142b(64000);
    d_61eb_dc5c = f_215d_142b(5000);
    d_61eb_dc48 = f_215d_142b(6000);
    d_61eb_dc4a = f_215d_142b(2600);
    d_61eb_dc58 = f_215d_142b(15000);
    d_61eb_dc5e = f_215d_142b(4040);
    d_61eb_dc60 = f_215d_142b(6400);
    d_61eb_dc46 = f_215d_142b(3000);
    d_61eb_dc62 = f_215d_142b(604);
    d_61eb_dc64 = f_215d_142b(604);
    d_61eb_dc66 = f_215d_142b(604);
    d_61eb_dc54 = f_215d_142b(200);
    d_61eb_dc56 = f_215d_142b(2240);
    d_61eb_dc50 = f_215d_142b(3900);
    d_61eb_dc52 = f_215d_142b(4864);
    d_61eb_dc4c = f_215d_142b(1300);
    d_61eb_dc5a = f_215d_142b(2432);
    d_61eb_dc4e = f_215d_142b(15000);
}
