# ai-mech2merc-base

An AI-ready decompile of MechWarrior 2: Mercenaries (1996).

This repository is the decompile of the Windows 95 version of
MechWarrior 2: Mercenaries, the giant robot combat game Activision
released in 1996. It is rebuilt from the 3 program files on its CD:
`MERCSWIN.EXE` (the launcher), `MW2SHELL.DLL` (the menus) and
`MERCSW.DLL` (the game itself). AI-ready means the code is written to
be read by AI. Each function, one small piece of the program, and each
variable gets a plain name chosen by reading what it does, so a person
or an AI model working in the code can follow it.

## Why another decompile?

This repo changes nothing. It has no improvements, no new features and
no bug fixes: each function does what the original does, bugs included.
That makes it a fixed starting point for other work, such as a port to
a new system, a mod, a study of how the game works, or a check on
someone else's rebuild.

It is also built for AI models to work in. The names say what each
piece does, so a model helping with one of those projects can read and
change the code without first having to work out what it means.

The MIT license suits a base like this. It lets anyone reuse the code
on one condition: keep its copyright and license notice. A companion
project, such as a port or a mod, can carry this code inside its own
work, under its own license, and take each new function as it arrives
here.

## Status

Each rebuilt function arrives here once it passes its checks against
the original program. The first 304 arrived on 26 October 2026: 234
from the game, 69 from the menus and 1 from the launcher, each in its
own file under `src/`, named by its address. 21 of them have plain
names so far; the rest still carry the decompiler's stand-in names,
`FUN_` and the address, until a later pass names them.

## The legal side

Decompiling a commercial game is a legal gray area. The game itself
still belongs to its copyright holder: Activision published it (its
help file reads "Copyright Activision 1996"), and Activision is now
part of Microsoft. MechWarrior and BattleTech are trademarks of their
owners. This project is not affiliated with or endorsed by any of them.

The source code here is released under the MIT license (see `LICENSE`)
so that anyone can use it in their own work quickly. That license
covers only what is written in this repository. It grants no rights in
the game itself: its story, art, sound, music, names and trademarks.

- **You need the original CD.** No game files are included: no art,
  sound, missions or programs.
- **It is provided as is,** with no warranty of any kind, as the MIT
  license says.
