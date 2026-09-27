/* In-game overlay drawn with Dear ImGui over the game frame. F12 opens the mods window;
 * changes apply at once and are written to the mods file. While the window is open the
 * game does not see the mouse and keyboard events the overlay uses. */
#include "ui.h"
extern "C" {
#include "mod.h"
}
#include "imgui.h"
#include "imgui_impl_sdl2.h"
#include "imgui_impl_sdlrenderer2.h"

static SDL_Renderer *renderer;
static bool active, open;
static Uint32 hint_until;   /* "F12: mods" note shown for the first seconds */

void ui_init(SDL_Window *win, SDL_Renderer *ren)
{
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO &io = ImGui::GetIO();
    io.IniFilename = NULL;   /* nothing written to the game directory */
    ImGui::StyleColorsDark();
    ImGui_ImplSDL2_InitForSDLRenderer(win, ren);
    ImGui_ImplSDLRenderer2_Init(ren);
    renderer = ren;
    active = true;
    hint_until = SDL_GetTicks() + 5000;
}

int ui_event(const SDL_Event *e)
{
    if (!active) return 0;
    if ((e->type == SDL_KEYDOWN || e->type == SDL_KEYUP) && e->key.keysym.sym == SDLK_F12) {
        static bool held;   /* toggle once per press, whatever the repeat flag says */
        if (e->type == SDL_KEYDOWN && !held) open = !open;
        held = e->type == SDL_KEYDOWN;
        return 1;
    }
    if (!open) return 0;
    ImGui_ImplSDL2_ProcessEvent(e);
    ImGuiIO &io = ImGui::GetIO();
    switch (e->type) {
    case SDL_MOUSEMOTION: case SDL_MOUSEBUTTONDOWN: case SDL_MOUSEBUTTONUP: case SDL_MOUSEWHEEL:
        return io.WantCaptureMouse;
    case SDL_KEYDOWN: case SDL_KEYUP: case SDL_TEXTINPUT:
        return io.WantCaptureKeyboard;
    }
    return 0;
}

static void mods_window(void)
{
    bool changed = false;
    ImGui::SetNextWindowPos(ImVec2(20, 20), ImGuiCond_FirstUseEver);
    ImGui::SetNextWindowSize(ImVec2(420, 0), ImGuiCond_FirstUseEver);
    if (!ImGui::Begin("Mods  (F12 to close)", &open)) { ImGui::End(); return; }
    if (!rc_mods()) ImGui::TextDisabled("This game has no mods.");
    for (rc_mod *m = rc_mods(); m; m = m->next) {
        ImGui::PushID(m->key);
        bool on = m->on;
        if (ImGui::Checkbox(m->name, &on)) { m->on = on; changed = true; }
        if (m->desc) {
            ImGui::Indent();
            ImGui::PushStyleColor(ImGuiCol_Text, ImGui::GetStyleColorVec4(ImGuiCol_TextDisabled));
            ImGui::TextWrapped("%s", m->desc);
            ImGui::PopStyleColor();
            ImGui::Unindent();
        }
        ImGui::BeginDisabled(!m->on);
        for (int i = 0; i < m->nsettings; i++) {
            rc_mod_setting *s = &m->settings[i];
            ImGui::Indent();
            ImGui::SetNextItemWidth(200);
            changed |= ImGui::SliderInt(s->label, &s->value, s->min, s->max, s->format ? s->format : "%d",
                                        ImGuiSliderFlags_AlwaysClamp);
            ImGui::Unindent();
        }
        ImGui::EndDisabled();
        ImGui::Spacing();
        ImGui::PopID();
    }
    ImGui::End();
    if (changed) rc_mods_save();
}

static void hint(void)
{
    const ImGuiWindowFlags flags = ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoInputs |
                                   ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoSavedSettings |
                                   ImGuiWindowFlags_NoFocusOnAppearing | ImGuiWindowFlags_NoNav;
    ImGuiIO &io = ImGui::GetIO();
    ImGui::SetNextWindowPos(ImVec2(io.DisplaySize.x - 10, io.DisplaySize.y - 10), ImGuiCond_Always, ImVec2(1, 1));
    ImGui::SetNextWindowBgAlpha(0.6f);
    if (ImGui::Begin("##hint", NULL, flags)) ImGui::TextUnformatted("F12: mods");
    ImGui::End();
}

void ui_draw(void)
{
    bool show_hint;
    if (!active) return;
    show_hint = !open && SDL_GetTicks() < hint_until;
    if (!open && !show_hint) return;
    ImGui_ImplSDLRenderer2_NewFrame();
    ImGui_ImplSDL2_NewFrame();
    ImGui::NewFrame();
    if (open) mods_window();
    else hint();
    ImGui::Render();
    ImGuiIO &io = ImGui::GetIO();
    SDL_RenderSetScale(renderer, io.DisplayFramebufferScale.x, io.DisplayFramebufferScale.y);
    ImGui_ImplSDLRenderer2_RenderDrawData(ImGui::GetDrawData(), renderer);
    SDL_RenderSetScale(renderer, 1, 1);
}
