/* SPDX-License-Identifier: MIT */
/* mw2shell 1000ad30 */
/* mw2shell 1000ad30: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __cdecl FUN_10018060(int param_1, int param_2);

int __cdecl FUN_1000ad30(int param_1, int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      iVar1 = FUN_10018060(param_1,iVar2);
      if (*(int *)(iVar1 + 0x810) == param_2) {
        return iVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  return 0;
}
