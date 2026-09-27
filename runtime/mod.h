/* Gameplay mods: switches and settings that games/<game>/src/ code reads while it runs.
 *
 * A mod is a static rc_mod registered with RC_MOD_REGISTER. Its values start at the
 * defaults, are then read from the mods file (rc_mods.ini in the game directory, or
 * RC_MODS_FILE) and then from the environment variables named in the mod, and can be
 * changed while the game runs from the overlay (F12). Mod code must read `on` and the
 * settings on every call, not once. */
#ifndef RC_MOD_H
#define RC_MOD_H

typedef struct {
    const char *key;      /* name in the mods file */
    const char *label;
    const char *env;      /* environment variable, or NULL */
    int value, min, max;  /* value is the default until rc_mods_load() */
    const char *format;   /* slider format, e.g. "%d ms" */
} rc_mod_setting;

typedef struct rc_mod {
    const char *key;      /* section in the mods file */
    const char *name;
    const char *desc;
    const char *env;      /* VAR=0 turns the mod off, any other value on */
    int on;               /* default until rc_mods_load() */
    rc_mod_setting *settings;
    int nsettings;
    struct rc_mod *next;
} rc_mod;

void rc_mod_register(rc_mod *m);
#define RC_MOD_REGISTER(m) \
    __attribute__((constructor)) static void m##_register(void) { rc_mod_register(&m); }

rc_mod *rc_mods(void);    /* registration order */
void rc_mods_load(void);  /* defaults < mods file < environment */
void rc_mods_save(void);

#endif
