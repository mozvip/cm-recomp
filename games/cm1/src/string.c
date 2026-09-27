/* Championship Manager (1992): Borland C runtime string functions (far pointers, far calls). */
#include "hand.h"

/* size_t strlen(const char far *s); a null pointer has length 0 */
RC_REPLACE(f_1000_41d2, rc_strlen, RC_ABI_16)
{
    rc_ptr s = FAR_ARG_PTR(0);
    uint16_t n = 0;
    if (s.seg || s.ofs) {
        cpu.df = 0;
        while (PTR_RB(s, n)) n++;
    }
    RET16(n);
    RET_FAR();
}

/* char far *strcpy(char far *dest, const char far *src): copies forward, byte by byte */
RC_REPLACE(f_1000_41a9, rc_strcpy, RC_ABI_32)
{
    rc_ptr dest = FAR_ARG_PTR(0), src = FAR_ARG_PTR(2);
    uint16_t i = 0;
    uint8_t c;
    cpu.df = 0;
    do {
        c = PTR_RB(src, i);
        PTR_WB(dest, i, c);
        i++;
    } while (c);
    RET_PTR(dest);
    RET_FAR();
}

/* int strcmp(const char far *s1, const char far *s2): difference of the first differing
 * bytes, compared as unsigned */
RC_REPLACE(f_1000_4179, rc_strcmp, RC_ABI_16)
{
    rc_ptr s1 = FAR_ARG_PTR(0), s2 = FAR_ARG_PTR(2);
    uint16_t i = 0;
    uint8_t a, b;
    cpu.df = 0;
    do {
        a = PTR_RB(s1, i);
        b = PTR_RB(s2, i);
        i++;
    } while (a == b && b);
    RET16((uint16_t)(a - b));
    RET_FAR();
}
