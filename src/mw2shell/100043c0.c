/* SPDX-License-Identifier: MIT */
/* mw2shell 100043c0 */
/* mw2shell 100043c0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10083800[];
extern undefined DAT_10083870[];

int __cdecl FUN_100043c0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  piVar2 = (int *)(DAT_10083800);
  iVar3 = (param_1 - param_1 % 100) + 1;
  do {
    if (*piVar2 == -1) {
      DAT_10083800[iVar1 * 2] = iVar3;
      return iVar3;
    }
    if (iVar3 / -100 == *piVar2 / -100) {
      iVar3 = iVar3 + 1;
    }
    piVar2 = piVar2 + 2;
    iVar1 = iVar1 + 1;
  } while (piVar2 < (int *)(DAT_10083870));
  return 0;
}
