/* Helpers for hand-written replacements of translated functions (games/<game>/src/).
 *
 * A replacement keeps the original calling convention: it runs on the emulated register
 * file and memory, reads its arguments from the emulated stack, returns in AX or DX:AX
 * and removes its own return address. See docs/handwritten.md. */
#ifndef RC_HAND_H
#define RC_HAND_H

#include "cpu.h"

/* registers compared by RC_VERIFY after a call */
enum {
    RC_R_AX = 1 << 0, RC_R_CX = 1 << 1, RC_R_DX = 1 << 2, RC_R_BX = 1 << 3,
    RC_R_SP = 1 << 4, RC_R_BP = 1 << 5, RC_R_SI = 1 << 6, RC_R_DI = 1 << 7,
    RC_R_ES = 1 << 8, RC_R_CS = 1 << 9, RC_R_SS = 1 << 10, RC_R_DS = 1 << 11,
    RC_R_FLAGS = 1 << 12,
};
/* Borland C: SI, DI, BP, DS (and SS, SP, CS) survive a call; AX, BX, CX, DX, ES are scratch */
#define RC_KEEP (RC_R_SP | RC_R_BP | RC_R_SI | RC_R_DI | RC_R_CS | RC_R_SS | RC_R_DS)
#define RC_ABI_VOID RC_KEEP                   /* void function */
#define RC_ABI_16 (RC_KEEP | RC_R_AX)         /* returns char/int/near pointer in AX */
#define RC_ABI_32 (RC_KEEP | RC_R_AX | RC_R_DX) /* returns long/far pointer in DX:AX */
#define RC_ABI_ALL 0x1fff                     /* assembly helper with its own convention */

/* Define a replacement for the translated function FN (f_SSSS_OOOO, listed in the game's
 * overrides.txt). NAME is the C name of the body; REGS the registers RC_VERIFY compares:
 *
 *   RC_REPLACE(f_1000_41d2, rc_strlen, RC_ABI_16)
 *   {
 *       ...
 *       RET_FAR();
 *   }
 */
#define RC_REPLACE(FN, NAME, REGS)                                             \
    static void NAME(void);                                                    \
    void FN##_orig(void);                                                      \
    void FN(void) { rc_verified_call(#NAME, NAME, FN##_orig, (REGS)); }        \
    static void NAME(void)

void rc_verified_call(const char *name, rc_fn fn, rc_fn orig, unsigned regs);

/* ---- arguments: word K of the arguments (K = 0 is the first word pushed last) ----
 * far function: [bp+6+2K] after the usual prologue; near function: [bp+4+2K] */
static inline uint16_t FAR_ARG(int k) { return RW(cpu.ss, (uint16_t)(cpu.sp + 4 + 2 * k)); }
static inline uint16_t NEAR_ARG(int k) { return RW(cpu.ss, (uint16_t)(cpu.sp + 2 + 2 * k)); }

/* far pointer (offset word K, segment word K+1) */
typedef struct { uint16_t seg, ofs; } rc_ptr;
static inline rc_ptr FAR_ARG_PTR(int k) { rc_ptr p = { FAR_ARG(k + 1), FAR_ARG(k) }; return p; }
static inline rc_ptr NEAR_ARG_PTR(int k) { rc_ptr p = { NEAR_ARG(k + 1), NEAR_ARG(k) }; return p; }
/* byte I of a far pointer; offsets wrap inside the segment like the 8086's */
static inline uint8_t PTR_RB(rc_ptr p, uint16_t i) { return RB(p.seg, (uint16_t)(p.ofs + i)); }
static inline void PTR_WB(rc_ptr p, uint16_t i, uint8_t v) { WB(p.seg, (uint16_t)(p.ofs + i), v); }

/* ---- return values and return ---- */
static inline void RET16(uint16_t v) { cpu.ax = v; }
static inline void RET32(uint32_t v) { cpu.ax = (uint16_t)v; cpu.dx = (uint16_t)(v >> 16); }
static inline void RET_PTR(rc_ptr p) { cpu.ax = p.ofs; cpu.dx = p.seg; }
/* retf / retf N: Borland C functions leave the arguments to the caller (N = 0) */
static inline void RET_FAR_N(uint16_t n) { POP(); cpu.cs = POP(); cpu.sp += n; }
static inline void RET_FAR(void) { RET_FAR_N(0); }
static inline void RET_NEAR_N(uint16_t n) { cpu.sp += 2 + n; }
static inline void RET_NEAR(void) { RET_NEAR_N(0); }

#endif
