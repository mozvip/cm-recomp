# CM Decomp match view

A VS Code view for finishing a function by hand. You edit the C on the left. On the right,
the code BCC makes of it is lined up with the original code, instruction by instruction,
and redrawn as you type.

The compiling and aligning is `tools/match/fdiff.py`, which also works without the extension:

    python3 tools/match/fdiff.py games/cm1/decomp/wip/8352/t8.c [--func f_8352_46de]

It takes the game, compiler and options from the `decomp/Makefile` above the file and the
file's `@flags`, as the build does. A function is found by its `f_SSSS_OOOO` name or by its
name in `names.txt` / `symbols.txt`. Like fcheck, it leaves out the bytes the linker fills in.
It also applies the 8087 emulator fixups and treats TLINK's near form of a far call
(`90 0E E8`) as the same instruction, so a function that fcheck says matches shows no
differing lines.

## Running it

No build step and no dependencies. Either:

- open a window with the extension loaded:
  `code --extensionDevelopmentPath=$PWD/tools/vscode-decomp $PWD`
- or install it for good with a link:
  `ln -s $PWD/tools/vscode-decomp ~/.vscode/extensions/cm-recomp.cm-decomp-0.1.0`
  and reload the window.

Then, in a C or assembly file under `games/*/decomp/`, run **Decomp: Open Match View**
(Ctrl+Alt+M).

## Using it

- The view shows the function the cursor is in (by its definition line or the lines its code
  comes from). Pick one in the drop-down to keep it shown,
  or press "⇣ cursor" to follow the cursor again. ✗ marks functions that differ, with their
  number of differing lines.
- The editor's text is compiled 1.2 s after the last edit (setting `cmDecomp.liveDelay`;
  0: only on save), saved or not. A compile takes about 2 s (DOSBox-X).
  While it runs, a bar moves under the view's header, the time so far counts up, ⟳ turns,
  the code shown is dimmed, the tab's title starts with ⟳ and the status bar shows a
  spinner. After an edit, until the compile starts, the title starts with ● and the view
  says "● edited" ("save to compile" with `liveDelay` 0).
- Line marks: `+` only in the compiled code, `−` only in the original, `~` the same
  instruction with other numbers (the numbers that differ are highlighted), `*` another
  instruction. A jump counts as the same if it goes to the instructions lined up with each
  other. Dotted underline: bytes the linker fills in, not compared. Hover a line for its bytes.
- Source lines: "source" shows each C line above the instructions made of it. Moving the
  cursor in the editor lights up its line's instructions (opening folds). Hovering an
  instruction lights up its line in the editor, and clicking goes there. In the editor, a red
  bar marks the lines whose code differs (an instruction missing from the compiled code counts
  for the line before it), a yellow one the lines whose code differs only in its numbers.
  The line numbers come from a second compile with `-y` in the same run. `-y` can change the
  code: with line numbers, BCC merges less identical code (as in 8352:46de). The lines are
  then carried over by lining the two codes up, and the code `-y` does not make (the merged
  copy) has no line. The view says when that happens.
- `n` / `p`: next / previous difference; `r`: recompile; "fold" hides identical runs
  (click one to open it). Click a compiler message to go to its line.

The status line also gives fcheck's verdict: the first differing byte and the two lengths.
