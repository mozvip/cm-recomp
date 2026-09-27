/* Gameplay mod registry and the mods file (see mod.h).
 *
 * The file has one section per mod:
 *   [fast_results]
 *   on=1
 *   line_ms=150 */
#include "mod.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static rc_mod *head, **tail = &head;

void rc_mod_register(rc_mod *m)
{
    m->next = NULL;
    *tail = m;
    tail = &m->next;
}

rc_mod *rc_mods(void) { return head; }

static const char *mods_path(void)
{
    const char *p = getenv("RC_MODS_FILE");
    return p ? p : "rc_mods.ini";
}

static rc_mod *find_mod(const char *key)
{
    rc_mod *m;
    for (m = head; m; m = m->next)
        if (!strcmp(m->key, key)) return m;
    return NULL;
}

static int clamp(const rc_mod_setting *s, int v)
{
    return v < s->min ? s->min : v > s->max ? s->max : v;
}

static void set_value(rc_mod *m, const char *key, int v)
{
    int i;
    if (!strcmp(key, "on")) { m->on = v != 0; return; }
    for (i = 0; i < m->nsettings; i++)
        if (!strcmp(m->settings[i].key, key)) { m->settings[i].value = clamp(&m->settings[i], v); return; }
    fprintf(stderr, "[MODS] %s: unknown setting %s\n", m->key, key);
}

static void load_file(void)
{
    char line[256], *p, *eq;
    rc_mod *m = NULL;
    FILE *f = fopen(mods_path(), "r");
    if (!f) return;
    while (fgets(line, sizeof line, f)) {
        line[strcspn(line, "\r\n")] = 0;
        for (p = line; *p == ' ' || *p == '\t'; p++) ;
        if (!*p || *p == ';' || *p == '#') continue;
        if (*p == '[') {
            char *end = strchr(p, ']');
            if (end) *end = 0;
            if (!(m = find_mod(p + 1))) fprintf(stderr, "[MODS] %s: unknown mod %s\n", mods_path(), p + 1);
        } else if (m && (eq = strchr(p, '='))) {
            *eq = 0;
            set_value(m, p, atoi(eq + 1));
        }
    }
    fclose(f);
}

void rc_mods_load(void)
{
    rc_mod *m;
    int i;
    load_file();
    for (m = head; m; m = m->next) {
        const char *e = m->env ? getenv(m->env) : NULL;
        if (e) m->on = strcmp(e, "0") != 0;
        for (i = 0; i < m->nsettings; i++) {
            rc_mod_setting *s = &m->settings[i];
            if (s->env && (e = getenv(s->env))) s->value = clamp(s, atoi(e));
        }
    }
}

void rc_mods_save(void)
{
    rc_mod *m;
    int i;
    FILE *f = fopen(mods_path(), "w");
    if (!f) { fprintf(stderr, "[MODS] cannot write %s\n", mods_path()); return; }
    fprintf(f, "; gameplay mods, written by the F12 overlay\n");
    for (m = head; m; m = m->next) {
        fprintf(f, "\n[%s]\non=%d\n", m->key, m->on);
        for (i = 0; i < m->nsettings; i++) fprintf(f, "%s=%d\n", m->settings[i].key, m->settings[i].value);
    }
    fclose(f);
}
