/* Replaces James W. Birdsall's EMS interface library (CM1's 1A51.ASM, CM93's 1E19.ASM):
 * the game's virtual memory (CM1's vm_alloc/vm_map) keeps its blocks in expanded memory
 * when there is some, else in a file, VM.$$$. Here the expanded memory is plain memory,
 * and there is always some. Every function leaves an EMM status in ems_error (0: none).
 * The names are CM1's: another game's game.h maps them to its own. */
#include "port.h"

extern char ems_error;

static char *ems_mem;
static int32_t ems_size;

/* EMS present: 0 */
int16_t ems_init(void)
{
    ems_error = 0;
    return 0;
}

int16_t ems_alloc(int32_t size)
{
    if (ems_mem != NULL || (ems_mem = calloc(1, size)) == NULL) {
        ems_error = 0x87;               /* not enough pages */
        return -1;
    }
    ems_size = size;
    ems_error = 0;
    return 1;
}

void ems_free(int16_t handle)
{
    (void)handle;
    free(ems_mem);
    ems_mem = NULL;
    ems_error = 0;
}

void ems_write(int32_t size, char *buf, int16_t handle, int32_t off)
{
    (void)handle;
    if (off < 0 || size < 0 || off + size > ems_size) {
        fprintf(stderr, "ems_write: %d bytes at %d, past the %d allocated\n", size, off, ems_size);
        abort();
    }
    memcpy(ems_mem + off, buf, size);
    ems_error = 0;
}

void ems_read(int32_t size, int16_t handle, int32_t off, char *buf)
{
    (void)handle;
    if (off < 0 || size < 0 || off + size > ems_size) {
        fprintf(stderr, "ems_read: %d bytes at %d, past the %d allocated\n", size, off, ems_size);
        abort();
    }
    memcpy(buf, ems_mem + off, size);
    ems_error = 0;
}
