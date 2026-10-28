/* SPDX-License-Identifier: MIT */
/* mercsw 10027c4c */
/* mercsw 10027c4c: Ghidra's C, repaired by tools/ghidra_repair.py */

void __cdecl FUN_10027c4c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x4c) + 0xc) >> 0x10;
  iVar2 = iVar1 * -0x1680;
  uVar3 = *(int *)(param_1 + 100) + iVar1 * 0x1680;
  uVar4 = (int)uVar3 >> 0x1f;
  if ((int)((uVar3 ^ uVar4) - uVar4) < 0xa0001) {
    *(int *)(param_1 + 100) = iVar2;
  }
  else {
    *(int *)(param_1 + 100) =
         *(int *)(param_1 + 100) +
         (((iVar2 - *(int *)(param_1 + 100) < 0) - 1 & 2) * 5 + -5) * 0x10000;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) % 0x1680000;
  }
  return;
}
