/* SPDX-License-Identifier: MIT */
/* mercsw 1002f6e8 */
/* mercsw 1002f6e8: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_1001b550(int param_1, int * param_2);

void __cdecl FUN_1002f6e8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  FUN_1001b550(iVar1,(int *)(*(int *)(param_1 + 0x18) + 0x3c));
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_1 + 0x50);
  return;
}
