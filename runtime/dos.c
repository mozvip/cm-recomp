/* DOS INT 21h services for translated code. Files map onto the host directory
   (case-insensitive, drive letters and backslashes stripped). */
#include "rt.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>
#include <fcntl.h>
#include <unistd.h>
#include <dirent.h>
#include <time.h>
#include <sys/stat.h>

#define MAX_HANDLES 64
static int handles[MAX_HANDLES];
static uint16_t dta_seg, dta_ofs;
static uint16_t last_error;

static void ok(void) { cpu.cf = 0; }
static void fail(uint16_t err) { cpu.cf = 1; cpu.ax = err; last_error = err; }

static void rd_str(uint16_t s, uint16_t o, char *buf, int max)
{
    int i;
    for (i = 0; i < max - 1; i++) {
        buf[i] = (char)RB(s, (uint16_t)(o + i));
        if (!buf[i]) break;
    }
    buf[max - 1] = 0;
}

/* DOS path -> host path, matching each component case-insensitively */
static void map_path(const char *dos, char *out, size_t max)
{
    char tmp[512], *p, *tok, *save = NULL;
    snprintf(tmp, sizeof(tmp), "%s", dos);
    for (p = tmp; *p; p++) if (*p == '\\') *p = '/';
    p = tmp;
    if (p[0] && p[1] == ':') p += 2;
    while (*p == '/') p++;
    snprintf(out, max, ".");
    for (tok = strtok_r(p, "/", &save); tok; tok = strtok_r(NULL, "/", &save)) {
        DIR *d;
        struct dirent *de;
        char found[256];
        if (!strcmp(tok, ".")) continue;
        snprintf(found, sizeof(found), "%s", tok);
        if ((d = opendir(out)) != NULL) {
            while ((de = readdir(d)) != NULL)
                if (!strcasecmp(de->d_name, tok)) { snprintf(found, sizeof(found), "%s", de->d_name); break; }
            closedir(d);
        }
        {
            size_t l = strlen(out);
            snprintf(out + l, max - l, "/%s", found);
        }
    }
}

static int new_handle(int fd)
{
    int i;
    for (i = 5; i < MAX_HANDLES; i++)
        if (handles[i] < 0) { handles[i] = fd; return i; }
    close(fd);
    return -1;
}

static int host_fd(uint16_t h) { return h < MAX_HANDLES ? handles[h] : -1; }

/* ------------------------------------------------------------ memory blocks */
typedef struct { uint16_t seg, paras; } block;
static block blocks[64];
static int nblocks;

static int find_block(uint16_t seg)
{
    int i;
    for (i = 0; i < nblocks; i++) if (blocks[i].seg == seg) return i;
    return -1;
}

static uint16_t free_after(int i)
{
    uint16_t end = (uint16_t)(blocks[i].seg + blocks[i].paras);
    uint16_t limit = RC_MEM_TOP;
    int j;
    for (j = 0; j < nblocks; j++)
        if (blocks[j].seg > blocks[i].seg && blocks[j].seg - 1 < limit) limit = blocks[j].seg - 1;
    return limit > end ? (uint16_t)(limit - end) : 0;
}

static void mem_alloc(void)
{
    uint16_t want = cpu.bx, cand = 0, best = 0;
    int i;
    /* first fit above each block (and after the MCB paragraph) */
    for (i = 0; i < nblocks; i++) {
        uint16_t avail = free_after(i);
        uint16_t start = (uint16_t)(blocks[i].seg + blocks[i].paras + 1);
        if (avail > best) best = avail ? avail - 1 : 0;
        if (avail > want && !cand) cand = start;
    }
    if (!cand) { cpu.bx = best; fail(8); return; }
    blocks[nblocks].seg = cand;
    blocks[nblocks].paras = want;
    nblocks++;
    cpu.ax = cand;
    ok();
}

static void mem_free(void)
{
    int i = find_block(cpu.es);
    if (i < 0) { fail(9); return; }
    blocks[i] = blocks[--nblocks];
    ok();
}

/* Borland c0 shrinks the program block to end at its stack (SS + stack size), which
   is where the resident part ended in the overlaid EXE. In a flattened image the
   overlay segments sit above that, so the heap would overwrite them. At that first
   setblock, move every C-runtime word in DGROUP holding the old heap base
   (_heapbase/_brklvl; CM1: DS:0089/DS:008D) past the end of the image. */
static void startup_setblock(void)
{
    uint16_t old = (uint16_t)(cpu.es + cpu.bx), base = (uint16_t)(rc_image_end_seg + 1);
    uint16_t o;
    if (old >= base) return;
    for (o = 0; o < 0x100; o += 1)
        if (RW(cpu.ds, o) == old) {
            fprintf(stderr, "[C0] heap word DS:%04x %04x -> %04x\n", o, old, base);
            WW(cpu.ds, o, base);
        }
    cpu.bx = (uint16_t)(base - RC_PSP_SEG);
}

static void mem_resize(void)
{
    static int startup_done;
    int i = find_block(cpu.es);
    if (!startup_done && cpu.es == RC_PSP_SEG) { startup_done = 1; startup_setblock(); }
    uint16_t maxp;
    if (i < 0) { fail(9); return; }
    maxp = (uint16_t)(blocks[i].paras + free_after(i));
    if (cpu.bx > maxp) { cpu.bx = maxp; fail(8); return; }
    blocks[i].paras = cpu.bx;
    ok();
}

/* ------------------------------------------------------------ find first/next */
typedef struct { char dir[512]; char pat[16]; int pos; } search;
static search searches[16];
static int nsearch;

static int wild_match(const char *pat, const char *name)
{
    /* DOS 8.3 wildcard match, case-insensitive */
    char pb[9], pe[4], nb[9], ne[4];
    const char *d;
    int i;
    memset(pb, ' ', 8); memset(pe, ' ', 3); memset(nb, ' ', 8); memset(ne, ' ', 3);
    for (i = 0, d = pat; *d && *d != '.' && i < 8; d++) {
        if (*d == '*') { while (i < 8) pb[i++] = '?'; } else pb[i++] = (char)toupper(*d);
    }
    d = strchr(pat, '.');
    if (d) for (i = 0, d++; *d && i < 3; d++) {
        if (*d == '*') { while (i < 3) pe[i++] = '?'; } else pe[i++] = (char)toupper(*d);
    }
    if (strlen(name) > 12) return 0;
    for (i = 0, d = name; *d && *d != '.' && i < 8; d++) nb[i++] = (char)toupper(*d);
    if (*d && *d != '.') return 0;
    d = strchr(name, '.');
    if (d) for (i = 0, d++; *d && i < 3; d++) ne[i++] = (char)toupper(*d);
    for (i = 0; i < 8; i++) if (pb[i] != '?' && pb[i] != nb[i]) return 0;
    for (i = 0; i < 3; i++) if (pe[i] != '?' && pe[i] != ne[i]) return 0;
    return 1;
}

static int find_next(int id)
{
    search *s = &searches[id];
    DIR *d = opendir(s->dir);
    struct dirent *de;
    int n = 0;
    if (!d) return 0;
    while ((de = readdir(d)) != NULL) {
        char full[800];
        struct stat st;
        struct tm *tm;
        int i;
        if (de->d_name[0] == '.') continue;
        if (!wild_match(s->pat, de->d_name)) continue;
        if (n++ < s->pos) continue;
        s->pos++;
        snprintf(full, sizeof(full), "%s/%s", s->dir, de->d_name);
        if (stat(full, &st) || !S_ISREG(st.st_mode)) continue;
        tm = localtime(&st.st_mtime);
        WB(dta_seg, dta_ofs, (uint8_t)id);
        WB(dta_seg, (uint16_t)(dta_ofs + 21), 0x20);
        WW(dta_seg, (uint16_t)(dta_ofs + 22), (uint16_t)((tm->tm_hour << 11) | (tm->tm_min << 5) | (tm->tm_sec / 2)));
        WW(dta_seg, (uint16_t)(dta_ofs + 24), (uint16_t)(((tm->tm_year - 80) << 9) | ((tm->tm_mon + 1) << 5) | tm->tm_mday));
        WD(dta_seg, (uint16_t)(dta_ofs + 26), (uint32_t)st.st_size);
        for (i = 0; i < 12 && de->d_name[i]; i++) WB(dta_seg, (uint16_t)(dta_ofs + 30 + i), (uint8_t)toupper(de->d_name[i]));
        WB(dta_seg, (uint16_t)(dta_ofs + 30 + i), 0);
        closedir(d);
        return 1;
    }
    closedir(d);
    return 0;
}

/* ------------------------------------------------------------ INT 21h */
void dos_set_cmdline(const char *tail)
{
    int n = (int)strlen(tail), i;
    WB(RC_PSP_SEG, 0x80, (uint8_t)n);
    for (i = 0; i < n; i++) WB(RC_PSP_SEG, (uint16_t)(0x81 + i), (uint8_t)tail[i]);
    WB(RC_PSP_SEG, (uint16_t)(0x81 + n), 0x0d);
}

void dos_init(void)
{
    static const char env0[] = "COMSPEC=C:\\COMMAND.COM\0PATH=C:\\\0\0\1\0";
    char env[256];
    int i, n = (int)sizeof(env0) - 1;
    memcpy(env, env0, (size_t)n);
    snprintf(env + n, sizeof(env) - (size_t)n, "%s", rc_game_dos_path);
    n += (int)strlen(rc_game_dos_path) + 1;
    for (i = 0; i < MAX_HANDLES; i++) handles[i] = -1;
    handles[0] = 0; handles[1] = 1; handles[2] = 2; handles[3] = -1; handles[4] = -1;
    for (i = 0; i < n; i++) WB(RC_ENV_SEG, (uint16_t)i, (uint8_t)env[i]);
    /* PSP */
    WW(RC_PSP_SEG, 0x00, 0x20cd);
    WW(RC_PSP_SEG, 0x02, RC_MEM_TOP);
    WW(RC_PSP_SEG, 0x2c, RC_ENV_SEG);
    for (i = 0; i < 20; i++) WB(RC_PSP_SEG, (uint16_t)(0x18 + i), (uint8_t)(i < 5 ? i : 0xff));
    WW(RC_PSP_SEG, 0x32, 20);
    WW(RC_PSP_SEG, 0x34, 0x18);
    WW(RC_PSP_SEG, 0x36, RC_PSP_SEG);
    dos_set_cmdline("");
    dta_seg = RC_PSP_SEG; dta_ofs = 0x80;
    nblocks = 2;
    blocks[0].seg = RC_ENV_SEG; blocks[0].paras = RC_PSP_SEG - RC_ENV_SEG - 1;
    blocks[1].seg = RC_PSP_SEG; blocks[1].paras = RC_MEM_TOP - RC_PSP_SEG;
}

void dos_int21(void)
{
    char name[256], path[800];
    uint8_t fn = AH;
    switch (fn) {
    case 0x01: case 0x07: case 0x08: {                   /* read char */
        uint16_t k;
        while (!rc_kbd_get(&k)) { plat_pump(); plat_present(); }
        AL = (uint8_t)k;
        if (fn == 0x01) putchar(AL);
        return;
    }
    case 0x06:
        if (DL != 0xff) { putchar(DL); return; }
        { uint16_t k; if (rc_kbd_get(&k)) { AL = (uint8_t)k; cpu.zf = 0; } else { AL = 0; cpu.zf = 1; } }
        return;
    case 0x02: putchar(DL); return;
    case 0x09: {
        uint16_t o = cpu.dx;
        char c;
        while ((c = (char)RB(cpu.ds, o++)) != '$') putchar(c);
        fflush(stdout);
        return;
    }
    case 0x0b: { uint16_t k; AL = rc_kbd_peek(&k) ? 0xff : 0; return; }
    case 0x0c: { uint16_t k; while (rc_kbd_get(&k)) ; AH = AL; if (AH) dos_int21(); return; }
    case 0x0e: AL = 26; return;
    case 0x19: AL = 2; return;                           /* C: */
    case 0x1a: dta_seg = cpu.ds; dta_ofs = cpu.dx; return;
    case 0x25: WW(0, AL * 4, cpu.dx); WW(0, AL * 4 + 2, cpu.ds); return;
    case 0x2a: {
        time_t t = time(NULL); struct tm *tm = localtime(&t);
        cpu.cx = (uint16_t)(tm->tm_year + 1900); DH = (uint8_t)(tm->tm_mon + 1); DL = (uint8_t)tm->tm_mday; AL = (uint8_t)tm->tm_wday;
        return;
    }
    case 0x2c: {
        struct timespec ts; struct tm *tm;
        clock_gettime(CLOCK_REALTIME, &ts);
        tm = localtime(&ts.tv_sec);
        CH = (uint8_t)tm->tm_hour; CL = (uint8_t)tm->tm_min; DH = (uint8_t)tm->tm_sec; DL = (uint8_t)(ts.tv_nsec / 10000000);
        return;
    }
    case 0x2f: cpu.es = dta_seg; cpu.bx = dta_ofs; return;
    case 0x30: cpu.ax = 0x0005; cpu.bx = 0; cpu.cx = 0; return;   /* DOS 5.0 */
    case 0x33: if (AL == 0 || AL == 5) DL = AL == 5 ? 3 : 0; return;
    case 0x35: cpu.bx = RW(0, AL * 4); cpu.es = RW(0, AL * 4 + 2); return;
    case 0x36: cpu.ax = 64; cpu.bx = 0x7fff; cpu.cx = 512; cpu.dx = 0x7fff; return;
    case 0x38: {
        int i;
        for (i = 0; i < 34; i++) WB(cpu.ds, (uint16_t)(cpu.dx + i), 0);
        WB(cpu.ds, (uint16_t)(cpu.dx + 2), '$'); WB(cpu.ds, (uint16_t)(cpu.dx + 7), ',');
        WB(cpu.ds, (uint16_t)(cpu.dx + 9), '.'); WB(cpu.ds, (uint16_t)(cpu.dx + 11), '/'); WB(cpu.ds, (uint16_t)(cpu.dx + 13), ':');
        cpu.bx = 44; ok(); return;
    }
    case 0x39: case 0x3a: case 0x3b: ok(); return;
    case 0x3c: case 0x5b: {                              /* create */
        int fd, h;
        rd_str(cpu.ds, cpu.dx, name, sizeof(name));
        map_path(name, path, sizeof(path));
        fd = open(path, O_RDWR | O_CREAT | (fn == 0x5b ? O_EXCL : O_TRUNC), 0644);
        if (fd < 0 || (h = new_handle(fd)) < 0) { fail(fd < 0 ? 5 : 4); return; }
        fprintf(stderr, "[DOS] create \"%s\" -> %d\n", name, h);
        cpu.ax = (uint16_t)h; ok(); return;
    }
    case 0x3d: {                                         /* open */
        int fd, h, mode = AL & 3;
        rd_str(cpu.ds, cpu.dx, name, sizeof(name));
        map_path(name, path, sizeof(path));
        fd = open(path, mode == 0 ? O_RDONLY : mode == 1 ? O_WRONLY : O_RDWR);
        fprintf(stderr, "[DOS] open \"%s\" mode %d -> %s\n", name, mode, fd < 0 ? "not found" : "ok");
        if (fd < 0 || (h = new_handle(fd)) < 0) { fail(fd < 0 ? 2 : 4); return; }
        cpu.ax = (uint16_t)h; ok(); return;
    }
    case 0x3e: {
        int fd = host_fd(cpu.bx);
        if (fd < 0) { fail(6); return; }
        if (cpu.bx > 4) { close(fd); handles[cpu.bx] = -1; }
        ok(); return;
    }
    case 0x3f: {                                         /* read */
        int fd = host_fd(cpu.bx), got = 0;
        uint16_t i;
        uint8_t buf[0x10000];
        ssize_t n;
        if (fd < 0) { fail(6); return; }
        if (cpu.bx == 0) {
            uint16_t k;
            while (!rc_kbd_get(&k)) { plat_pump(); plat_present(); }
            WB(cpu.ds, cpu.dx, (uint8_t)k); cpu.ax = 1; ok(); return;
        }
        n = read(fd, buf, cpu.cx);
        if (n < 0) { fail(5); return; }
        got = (int)n;
        for (i = 0; i < got; i++) WB(cpu.ds, (uint16_t)(cpu.dx + i), buf[i]);
        cpu.ax = (uint16_t)got; ok(); return;
    }
    case 0x40: {                                         /* write */
        int fd = host_fd(cpu.bx);
        uint16_t i;
        uint8_t buf[0x10000];
        ssize_t n;
        if (fd < 0) { fail(6); return; }
        for (i = 0; i < cpu.cx; i++) buf[i] = RB(cpu.ds, (uint16_t)(cpu.dx + i));
        if (cpu.cx == 0 && cpu.bx > 4) {                  /* truncate at current position */
            off_t pos = lseek(fd, 0, SEEK_CUR);
            if (ftruncate(fd, pos)) { fail(5); return; }
            cpu.ax = 0; ok(); return;
        }
        n = write(fd, buf, cpu.cx);
        if (cpu.bx <= 2) fflush(stdout);
        if (n < 0) { fail(5); return; }
        cpu.ax = (uint16_t)n; ok(); return;
    }
    case 0x41: {
        rd_str(cpu.ds, cpu.dx, name, sizeof(name));
        map_path(name, path, sizeof(path));
        if (unlink(path)) fail(2); else ok();
        return;
    }
    case 0x42: {                                         /* lseek */
        int fd = host_fd(cpu.bx);
        off_t r;
        int32_t o = (int32_t)(((uint32_t)cpu.cx << 16) | cpu.dx);
        if (fd < 0) { fail(6); return; }
        r = lseek(fd, o, AL == 0 ? SEEK_SET : AL == 1 ? SEEK_CUR : SEEK_END);
        if (r < 0) { fail(25); return; }
        cpu.ax = (uint16_t)r; cpu.dx = (uint16_t)(r >> 16); ok(); return;
    }
    case 0x43: {
        struct stat st;
        rd_str(cpu.ds, cpu.dx, name, sizeof(name));
        map_path(name, path, sizeof(path));
        if (stat(path, &st)) { fail(2); return; }
        cpu.cx = S_ISDIR(st.st_mode) ? 0x10 : 0x20; ok(); return;
    }
    case 0x44:                                           /* ioctl */
        if (AL == 0) {
            if (cpu.bx <= 4) cpu.dx = cpu.bx == 0 ? 0x80d3 : cpu.bx <= 2 ? 0x80d3 : 0x80c0;
            else if (host_fd(cpu.bx) >= 0) cpu.dx = 0x0002;
            else { fail(6); return; }
            ok(); return;
        }
        if (AL == 1) { ok(); return; }
        if (AL == 8) { cpu.ax = 1; ok(); return; }
        if (AL == 0x0e) { AL = 0; ok(); return; }
        fail(1); return;
    case 0x45: {
        int fd = host_fd(cpu.bx), h;
        if (fd < 0) { fail(6); return; }
        h = new_handle(dup(fd));
        if (h < 0) { fail(4); return; }
        cpu.ax = (uint16_t)h; ok(); return;
    }
    case 0x47: WB(cpu.ds, cpu.si, 0); ok(); return;
    case 0x48: mem_alloc(); return;
    case 0x49: mem_free(); return;
    case 0x4a: mem_resize(); return;
    case 0x4c:
        fprintf(stderr, "[DOS] exit(%d)\n", AL);
        exit(AL);
    case 0x4e: {
        char *slash;
        int id = nsearch++ & 15;
        rd_str(cpu.ds, cpu.dx, name, sizeof(name));
        map_path(name, path, sizeof(path));
        slash = strrchr(path, '/');
        memset(&searches[id], 0, sizeof(search));
        if (slash) { *slash = 0; snprintf(searches[id].dir, 512, "%s", path); snprintf(searches[id].pat, 16, "%s", slash + 1); }
        /* keep the pattern's original spelling (map_path may not match wildcards) */
        {
            const char *b = strrchr(name, '\\');
            if (!b) b = strchr(name, ':') ? strchr(name, ':') + 1 : name; else b++;
            snprintf(searches[id].pat, 16, "%s", b);
        }
        if (find_next(id)) ok(); else fail(18);
        return;
    }
    case 0x4f:
        if (find_next(RB(dta_seg, dta_ofs) & 15)) ok(); else fail(18);
        return;
    case 0x56: {
        char n2[256], p2[800];
        rd_str(cpu.ds, cpu.dx, name, sizeof(name));
        rd_str(cpu.es, cpu.di, n2, sizeof(n2));
        map_path(name, path, sizeof(path));
        map_path(n2, p2, sizeof(p2));
        if (rename(path, p2)) fail(5); else ok();
        return;
    }
    case 0x57:
        if (AL == 0) { cpu.cx = 0; cpu.dx = (12 << 9) | (1 << 5) | 1; }
        ok(); return;
    case 0x59: cpu.ax = last_error; cpu.bx = 0x0101; cpu.cx = 0; return;
    case 0x62: case 0x51: cpu.bx = RC_PSP_SEG; return;
    case 0x0d: return;
    }
    rc_fatal("INT 21h AH=%02x not implemented", fn);
}
