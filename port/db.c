/* The game's database: its players and teams in SQLite (game.db in the data directory,
 * made by tools/port/mkdb.py from the game's files), read in place of TEAM.DAT,
 * LEAGUE.DAT and FOREIGN.DAT and of the executable's tables of teams and names.
 *
 * The game's sources read it through port_db_query() and the functions below. What the
 * executable holds (the names, CM1's teams) is copied into port_image at start-up by
 * the game's port_game_db() (games/<game>/port/db.c), before the game runs. */
#include <sqlite3.h>
#include <stdarg.h>

#include "port.h"

struct port_rows {
    sqlite3_stmt *st;
};

static sqlite3 *db;
static const char *db_path;

static void fail(const char *what)
{
    fprintf(stderr, "%s: %s: %s\n", db_path, what, db ? sqlite3_errmsg(db) : "");
    exit(1);
}

void port_db_open(const char *path)
{
    struct stat st;

    db_path = path;
    if (stat(path, &st) != 0) {
        fprintf(stderr, "%s not found: make the game's database first (make data, see "
                "README.md), or name it (-b DB)\n", path);
        exit(1);
    }
    if (sqlite3_open_v2(path, &db, SQLITE_OPEN_READONLY, NULL) != SQLITE_OK)
        fail("cannot open");
}

port_rows *port_db_query(const char *sql, ...)
{
    port_rows *r = malloc(sizeof(*r));
    va_list ap;
    int i, n;

    if (sqlite3_prepare_v2(db, sql, -1, &r->st, NULL) != SQLITE_OK)
        fail(sql);
    n = sqlite3_bind_parameter_count(r->st);
    va_start(ap, sql);
    for (i = 1; i <= n; i++)
        sqlite3_bind_int(r->st, i, va_arg(ap, int));
    va_end(ap);
    return r;
}

/* the next row: 0 when there are no more */
int port_db_next(port_rows *r)
{
    int rc = sqlite3_step(r->st);

    if (rc == SQLITE_ROW)
        return 1;
    if (rc != SQLITE_DONE)
        fail(sqlite3_sql(r->st));
    return 0;
}

static int column(port_rows *r, const char *name)
{
    int i, n = sqlite3_column_count(r->st);

    for (i = 0; i < n; i++)
        if (strcmp(sqlite3_column_name(r->st, i), name) == 0)
            return i;
    fprintf(stderr, "%s: no column %s in %s\n", db_path, name, sqlite3_sql(r->st));
    exit(1);
}

int port_db_int(port_rows *r, const char *name)
{
    return sqlite3_column_int(r->st, column(r, name));
}

const char *port_db_text(port_rows *r, const char *name)
{
    const char *s = (const char *)sqlite3_column_text(r->st, column(r, name));

    return s ? s : "";
}

void port_db_done(port_rows *r)
{
    if (r) {
        sqlite3_finalize(r->st);
        free(r);
    }
}

/* the first column of the first row */
int port_db_count(const char *sql, ...)
{
    port_rows *r = malloc(sizeof(*r));
    va_list ap;
    int i, n, v;

    if (sqlite3_prepare_v2(db, sql, -1, &r->st, NULL) != SQLITE_OK)
        fail(sql);
    n = sqlite3_bind_parameter_count(r->st);
    va_start(ap, sql);
    for (i = 1; i <= n; i++)
        sqlite3_bind_int(r->st, i, va_arg(ap, int));
    va_end(ap);
    v = port_db_next(r) ? sqlite3_column_int(r->st, 0) : 0;
    port_db_done(r);
    return v;
}

/* ---- checks: what the game's arrays can hold ---------------------------------------- */

static void bad(const char *fmt, ...)
{
    va_list ap;

    fprintf(stderr, "%s: ", db_path);
    va_start(ap, fmt);
    vfprintf(stderr, fmt, ap);
    va_end(ap);
    fputc('\n', stderr);
    exit(1);
}

/* the teams: exactly n, numbered 0 to n-1 */
void port_db_check_teams(int n)
{
    if (port_db_count("SELECT count(*) FROM teams WHERE id BETWEEN 0 AND ?", n - 1) != n
        || port_db_count("SELECT count(*) FROM teams") != n)
        bad("the game has %d teams, numbered 0 to %d", n, n - 1);
}

/* the players: league at most players in league teams (0..teams-1), abroad at most
 * playing abroad (team NULL) */
void port_db_check_players(int teams, int league, int abroad)
{
    int n;

    if (port_db_count("SELECT count(*) FROM players WHERE team IS NOT NULL AND team NOT BETWEEN 0 AND ?",
                      teams - 1))
        bad("a player's team is not one of the game's (0 to %d, or NULL: abroad)", teams - 1);
    if ((n = port_db_count("SELECT count(*) FROM players WHERE team IS NOT NULL")) > league)
        bad("%d players in the league: the game has room for %d", n, league);
    if ((n = port_db_count("SELECT count(*) FROM players WHERE team IS NULL")) > abroad)
        bad("%d players abroad: the game has room for %d", n, abroad);
    if (port_db_count("SELECT count(*) FROM careers WHERE season = 255"))
        bad("a career's season is 255");
}

/* ---- names: the executable's tables of strings --------------------------------------
 * A name the database changes is written to the pool, after the original data
 * (port_pool, made by tools/port/mkdata.py), and its pointer moved there: near pointers
 * (offsets in DGROUP) from the pool's start, as far as DGROUP's 64K go, far pointers
 * from its end. An unchanged name is left where it is, so with the database as mkdb.py
 * makes it the image stays as the executable has it. */
extern unsigned char port_pool[], port_pool_end[];
static unsigned char *pool_near = port_pool, *pool_far = port_pool_end;

/* UTF-8 (the database) to code page 437 (the game) */
static const uint16_t cp437[128] = {
    0xc7, 0xfc, 0xe9, 0xe2, 0xe4, 0xe0, 0xe5, 0xe7, 0xea, 0xeb, 0xe8, 0xef, 0xee, 0xec, 0xc4, 0xc5,
    0xc9, 0xe6, 0xc6, 0xf4, 0xf6, 0xf2, 0xfb, 0xf9, 0xff, 0xd6, 0xdc, 0xa2, 0xa3, 0xa5, 0x20a7, 0x192,
    0xe1, 0xed, 0xf3, 0xfa, 0xf1, 0xd1, 0xaa, 0xba, 0xbf, 0x2310, 0xac, 0xbd, 0xbc, 0xa1, 0xab, 0xbb,
    0x2591, 0x2592, 0x2593, 0x2502, 0x2524, 0x2561, 0x2562, 0x2556, 0x2555, 0x2563, 0x2551, 0x2557, 0x255d, 0x255c, 0x255b, 0x2510,
    0x2514, 0x2534, 0x252c, 0x251c, 0x2500, 0x253c, 0x255e, 0x255f, 0x255a, 0x2554, 0x2569, 0x2566, 0x2560, 0x2550, 0x256c, 0x2567,
    0x2568, 0x2564, 0x2565, 0x2559, 0x2558, 0x2552, 0x2553, 0x256b, 0x256a, 0x2518, 0x250c, 0x2588, 0x2584, 0x258c, 0x2590, 0x2580,
    0x3b1, 0xdf, 0x393, 0x3c0, 0x3a3, 0x3c3, 0xb5, 0x3c4, 0x3a6, 0x398, 0x3a9, 0x3b4, 0x221e, 0x3c6, 0x3b5, 0x2229,
    0x2261, 0xb1, 0x2265, 0x2264, 0x2320, 0x2321, 0xf7, 0x2248, 0xb0, 0x2219, 0xb7, 0x221a, 0x207f, 0xb2, 0x25a0, 0xa0,
};

static void to_cp437(const char *utf8, char *out, size_t size)
{
    const unsigned char *s = (const unsigned char *)utf8;
    size_t n = 0;

    while (*s && n + 1 < size) {
        unsigned c = *s++;
        int k;

        if (c >= 0xc0) {                /* a multi-byte sequence */
            int more = c >= 0xf0 ? 3 : c >= 0xe0 ? 2 : 1;

            c &= 0x3f >> more;
            while (more-- && (*s & 0xc0) == 0x80)
                c = c << 6 | (*s++ & 0x3f);
        }
        if (c >= 0x80) {
            for (k = 0; k < 128 && cp437[k] != c; k++)
                ;
            c = k < 128 ? 0x80 + k : '?';
        }
        out[n++] = (char)c;
    }
    out[n] = 0;
}

static char *pool_string(const char *s, int near)
{
    size_t len = strlen(s) + 1;
    unsigned char *p;

    if (near) {
        if (pool_near + len > pool_far
            || pool_near + len - (unsigned char *)NEAR_PTR(0) > 0x10000)
            return NULL;
        p = pool_near;
        pool_near += len;
    } else {
        if (pool_far - len < pool_near)
            return NULL;
        pool_far -= len;
        p = pool_far;
    }
    return memcpy(p, s, len);
}

/* rows of sql: (id, name), id 0 to n-1; table: near pointers (near) or far pointers */
static void names(const char *sql, void *table, int n, int near)
{
    port_rows *r = port_db_query(sql);
    char name[256], *old, *p;
    int id, k;

    while (port_db_next(r)) {
        id = sqlite3_column_int(r->st, 0);
        if (id < 0 || id >= n)
            bad("%s: id %d: the game's table has %d", sql, id, n);
        to_cp437((const char *)sqlite3_column_text(r->st, 1), name, sizeof(name));
        old = near ? NEAR_PTR(((nearptr *)table)[id]) : FAR_PTR(((farptr *)table)[id]);
        if (strcmp(old, name) == 0)
            continue;
        if ((p = pool_string(name, near)) == NULL) {
            /* no room left: in place, if it fits and no other entry has the string */
            for (k = 0; k < n; k++)
                if (k != id && (near ? NEAR_PTR(((nearptr *)table)[k])
                                     : FAR_PTR(((farptr *)table)[k])) == old)
                    break;
            if (k < n || strlen(name) > strlen(old))
                bad("%s: no room left for the name \"%s\" (id %d)", sql, name, id);
            strcpy(old, name);
            continue;
        }
        if (near)
            ((nearptr *)table)[id] = to_near_ptr(p);
        else {
            uint32_t lin = (uint32_t)((unsigned char *)p - port_image) + IMAGE_START;

            ((farptr *)table)[id] = (lin >> 4) << 16 | (lin & 15);
        }
    }
    port_db_done(r);
}

void port_db_near_names(const char *sql, nearptr *table, int n)
{
    names(sql, table, n, 1);
}

void port_db_far_names(const char *sql, farptr *table, int n)
{
    names(sql, table, n, 0);
}
