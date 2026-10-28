/* SPDX-License-Identifier: MIT */
/* mw2shell 100430b0 */
/* mw2shell 100430b0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern void * DAT_100988dc;
extern void * DAT_100988e0;
extern void * DAT_100988e4;
extern void * DAT_100988e8;
undefined __thiscall FUN_1005f7d0(void * this, int param_1);

void __cdecl FUN_100430b0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    FUN_1005f7d0(DAT_100988dc,0);
    return;
  case 1:
    FUN_1005f7d0(DAT_100988e8,0);
    return;
  case 2:
    FUN_1005f7d0(DAT_100988e4,0);
    return;
  case 3:
    FUN_1005f7d0(DAT_100988e0,0);
  }
  return;
}
