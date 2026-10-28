/* SPDX-License-Identifier: MIT */
/* mercsw 1008072a */
/* mercsw 1008072a: Ghidra's C, repaired by tools/ghidra_repair.py */
int __cdecl FUN_100807b5(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6);

void __cdecl FUN_1008072a(int param_1, int param_2)

{
  int iVar1;
  
  iVar1 = (uint)*(byte *)(*(int *)(param_1 + 4) + param_1) * 0x44 + param_2;
  FUN_100807b5(*(int *)(iVar1 + 0xc),*(int *)(iVar1 + 0x10),*(int *)(iVar1 + 0x14),
               *(int *)(param_1 + 0x14),*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}
