/* SPDX-License-Identifier: MIT */
/* mercsw 10044bba */
/* mercsw 10044bba: Ghidra's C, repaired by tools/ghidra_repair.py */

undefined4 __cdecl FUN_10044bba(int param_1, int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (((*(int *)(iVar1 + 0x3f4) < 6) || (*(int *)(iVar1 + 0x420) == 0)) ||
     (param_2 <= *(int *)(iVar1 + 0x3cc) >> 0x10)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
