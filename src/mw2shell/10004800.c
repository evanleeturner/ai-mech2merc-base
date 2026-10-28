/* SPDX-License-Identifier: MIT */
/* mw2shell 10004800 */
/* mw2shell 10004800: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10083770;
extern undefined DAT_10083800[];
extern undefined DAT_10083870[];
extern undefined DAT_10085170[];

void __stdcall FUN_10004800(void)

{
  int *piVar1;
  
  DAT_10083770 = 0;
  piVar1 = (int *)(DAT_10083800);
  do {
    if (*piVar1 != -1) {
      DAT_10083770 = DAT_10083770 + *(int *)(DAT_10085170 + (*piVar1 / 100) * 0x40);
    }
    piVar1 = piVar1 + 2;
  } while (piVar1 < (int *)(DAT_10083870));
  return;
}
