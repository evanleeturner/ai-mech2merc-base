/* SPDX-License-Identifier: MIT */
/* mw2shell 10004960 */
/* mw2shell 10004960: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10083778;
extern undefined DAT_1008379c[];
extern undefined DAT_10083800[];

void __stdcall FUN_10004960(void)

{
  int *piVar1;
  
  piVar1 = (int *)(DAT_1008379c);
  DAT_10083778 = 0;
  do {
    if (*piVar1 == -1) {
      return;
    }
    piVar1 = piVar1 + 1;
    DAT_10083778 = DAT_10083778 + 100;
  } while (piVar1 < (int *)(DAT_10083800));
  return;
}
