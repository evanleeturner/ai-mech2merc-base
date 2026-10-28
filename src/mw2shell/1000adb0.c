/* SPDX-License-Identifier: MIT */
/* mw2shell 1000adb0 */
/* mw2shell 1000adb0: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __cdecl FUN_10018060(int param_1, int param_2);

int __cdecl FUN_1000adb0(int param_1, int param_2)

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
      if (*(int *)(iVar1 + 0x24) == param_2) {
        return iVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  return 0;
}
