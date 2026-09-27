/* In-game overlay (Dear ImGui, ui.cpp): F12 shows the mods window. */
#ifndef RC_UI_H
#define RC_UI_H

#include <SDL2/SDL.h>

#ifdef __cplusplus
extern "C" {
#endif

void ui_init(SDL_Window *win, SDL_Renderer *ren);
int ui_event(const SDL_Event *e);   /* 1: the overlay used the event, the game must not see it */
void ui_draw(void);                 /* between the game frame and SDL_RenderPresent */

#ifdef __cplusplus
}
#endif

#endif
