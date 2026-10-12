/* Replaces the keyboard driver (CM1's 14B7.ASM, CM93's 1DFE.ASM, the same code): an
 * INT 9 handler that, with no mouse driver, moved the pointer with the arrows and clicked
 * with Ctrl/Shift/Alt/Space. The platform always provides a mouse driver (sdl.c), and the
 * game installs the handler only without one. Its data stays in the original data,
 * port_image. The names are CM1's: another game's game.h maps them to its own. */
#include "port.h"

void install_keyboard_handler(void)
{
}

void remove_keyboard_handler(void)
{
}
