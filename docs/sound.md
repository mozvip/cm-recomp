# Sound: the AdLib driver and the OPL2 emulator

## The driver

Both games play music through Dream Weavers' `ADLIB.DRV` (CM1 has version 3.00 of
05/06/92; CM93 has a build of 08/10/92). When started with the `a` option, the game:

1. allocates about 6 KB on the heap and loads `ADLIB.DRV` at `seg:0000`;
2. far-calls `seg:0000` with `AX = 0x91`.

The driver then:
- writes `IVT[91h]` = its dispatcher. From then on each driver function is an
  `INT 91h` with the function number in `AX`. The dispatcher uses a 14-entry table;
  inside it, music commands go through two 32-entry tables.
- hooks `IVT[8]` itself, reprograms the PIT to 50 Hz, and chains to the previous timer
  handler every third tick.
- detects the card with the standard test: reset the OPL timers, start timer 1, wait
  by reading the status port about 40 times, and expect status `C0h`.

The driver is position-independent (CS = DS = its load segment) and has no
relocations. `recomp.py --drivers FILE:NAME` translates it on its own, with functions
keyed by offset and its jump tables resolved statically. At run time, a call into any
segment whose first 64 bytes match the driver is dispatched to the translated code.
Each game translates the copy found in its own directory.

## OPL2 emulation

[`runtime/opl2.c`](../runtime/opl2.c) emulates the YM3812 on ports `388h`/`389h`. It is
written from the chip's documented behaviour, not derived from another emulator.

- 9 channels × 2 operators. Phase is kept in 20-bit fixed point (`fnum << block` ×
  multiplier), the waveform index in 10 bits.
- Envelopes in dB: attack, decay, sustain, release, with sustained and percussive
  modes, key-scale rate, and datasheet timing (decay 0→96 dB takes 39.28 s at rate 4,
  halving every 4 rates).
- Total level, key-scale level, tremolo (3.7 Hz, 1 or 4.8 dB) and vibrato (6.07 Hz,
  7 or 14 cents).
- The four waveforms (enabled by register 1 bit 5), modulator feedback, FM and
  additive connection.
- Rhythm mode: bass drum, snare, tom-tom, cymbal and hi-hat, with the 23-bit noise
  generator and the channel 7/8 phase combinations.
- Both timers and the status register. Each status read counts as about 1 µs, which
  is what the driver's detection loop relies on.

Output is mono at the chip's native 49 716 Hz; SDL converts it to the device rate.
[`runtime/audio.c`](../runtime/audio.c) renders samples up to the current host time
before every register write and at each safe point, and queues them to SDL.

## Checking it

- `CM_DUMP_AUDIO=file.wav` records everything that is rendered.
- `CM_OPL_LOG=1` prints every register write.

So far the output has been checked by measurement only. The spectra show the
expected note and harmonic structure and the song loop, levels stay in range, and
the register traffic matches the instruments the driver sets up. CM1 uses melodic
voices plus the rhythm bass drum and snare. CM93 uses a feedback-7 FM noise voice and
the bass drum, and plays music on its title screen only. A listening comparison
against a reference emulator (for example DOSBox) is still to be done.
