/* SPDX-License-Identifier: MIT */
/* mw2shell 10062430 */
/* mw2shell 10062430: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int * DAT_100a8178;
extern int * DAT_100a8190;
extern undefined4 DAT_100a8198;
extern undefined4 DAT_100d08e8;
undefined __stdcall FUN_100624a0(void);

void __stdcall FUN_10062430(void)

{
  DAT_100a8198 = 0;
  if (DAT_100a8178 != (int *)0x0) {
    FUN_100624a0();
    ((void (*)(int *, undefined4, int))((**(code **)(*DAT_100a8178 + 0x50))))(DAT_100a8178,DAT_100d08e8,8);
    ((void (*)(int *))((**(code **)(*DAT_100a8178 + 0x4c))))(DAT_100a8178);
    if (DAT_100a8190 != (int *)0x0) {
      ((void (*)(int *))((**(code **)(*DAT_100a8190 + 8))))(DAT_100a8190);
      DAT_100a8190 = (int *)0x0;
    }
    ((void (*)(int *))((**(code **)(*DAT_100a8178 + 8))))(DAT_100a8178);
    DAT_100a8178 = (int *)0x0;
  }
  return;
}
