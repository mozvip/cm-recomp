/* Native port of decomp/src/2162.C (see ../README.md). */
/* @at 2162:000b */
/* @data 69da:92b2 */
/* @module */

#include "port.h"

int16_t f_2162_0188(void);
int16_t f_2162_1436(int32_t size);                 /* allocate a virtual memory block */
void f_2162_1899(void);
void f_238c_0002(void);
extern char d_69da_e01d;                /* 0 none, 1 EGA, 2 VGA */
extern int16_t d_69da_dffa, d_69da_dfe6, d_69da_dfe8, d_69da_dff6;
extern int16_t d_69da_dffc, d_69da_dffe, d_69da_dfe4, d_69da_e000, d_69da_e002, d_69da_e004;
extern int16_t d_69da_dff2, d_69da_dff4, d_69da_dfee, d_69da_dff0, d_69da_dfea, d_69da_dff8;
extern int16_t d_69da_dfec;
extern int16_t d_69da_e00a;                 /* virtual memory blocks (f_2162_1436) */
extern char d_69da_93d8[], d_69da_99d8[], d_69da_a1d8[];  /* the fonts (another module's data) */
extern int16_t d_69da_e2ce;

/* The rest of the module is the platform's (../../../../port/system.c, system93.c): this
   is what is CM94's own. */

struct window d_69da_92c2 = { d_69da_93d8, { 0, 0 }, 5, 5, 1 };
struct window d_69da_92d0 = { d_69da_99d8, { 0, 0 }, 7, 7, -1 };
struct window d_69da_92de = { d_69da_a1d8, { 0, 0 }, 7, 14, 0 };

void f_2162_01cd(void)
{
    d_69da_e01d = f_2162_0188();
    if (d_69da_e01d != 2) {
        printf("Requires VGA\n");
        exit(1);
    }
    f_2162_1899();
    if (d_69da_e2ce == 0)
        f_238c_0002();
    d_69da_92c2.buf = d_69da_93d8;
    d_69da_92d0.buf = d_69da_99d8;
    d_69da_92de.buf = d_69da_a1d8;
    d_69da_e00a = f_2162_1436(64000);
    d_69da_dffa = f_2162_1436(5000);
    d_69da_dfe6 = f_2162_1436(7440);
    d_69da_dfe8 = f_2162_1436(2600);
    d_69da_dff6 = f_2162_1436(18600);
    d_69da_dffc = f_2162_1436(8282);
    d_69da_dffe = f_2162_1436(6400);
    d_69da_dfe4 = f_2162_1436(3720);
    d_69da_e000 = f_2162_1436(604);
    d_69da_e002 = f_2162_1436(604);
    d_69da_e004 = f_2162_1436(604);
    d_69da_dff2 = f_2162_1436(1000);
    d_69da_dff4 = f_2162_1436(2240);
    d_69da_dfee = f_2162_1436(3900);
    d_69da_dff0 = f_2162_1436(10240);
    d_69da_dfea = f_2162_1436(1300);
    d_69da_dff8 = f_2162_1436(5120);
    d_69da_dfec = f_2162_1436(18600);
}
