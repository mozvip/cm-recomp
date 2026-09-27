/* YM3812 (OPL2) emulation for the AdLib ports 388h/389h. */
#ifndef RC_OPL2_H
#define RC_OPL2_H
#include <stdint.h>

#define OPL_RATE 49716

void opl_init(void);
void opl_write_addr(uint8_t a);
void opl_write_data(uint8_t v);
uint8_t opl_read_status(void);
void opl_timers_advance(double us);
void opl_generate(int16_t *buf, int n);

#endif
