/* SPDX-License-Identifier: MIT */
/* mw2shell 1000c220 */
/* mw2shell 1000c220: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __cdecl FUN_10018060(int param_1, int param_2);

int * __cdecl FUN_1000c220(int param_1, int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      piVar1 = (int *)FUN_10018060(param_1,iVar2);
      if (*piVar1 == param_2) {
        return piVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  return (int *)0x0;
}
