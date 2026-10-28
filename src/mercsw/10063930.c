/* SPDX-License-Identifier: MIT */
/* mercsw 10063930 */
/* mercsw 10063930: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_10063528(int param_1, int param_2, int param_3);

void __cdecl FUN_10063930(int param_1)

{
  undefined4 local_c;
  
  *(ushort *)(param_1 + 0x440) = *(ushort *)(param_1 + 0x440) ^ 0x4000;
  local_c = *(int *)(param_1 + 0x3e0) + 1;
  if (*(int *)(*(int *)(param_1 + 0x54) + local_c * 0x40) == -1) {
    local_c = 0;
  }
  FUN_10063528(param_1,local_c,
               *(int *)(*(int *)(param_1 + 0x54) + 0xc + *(int *)(param_1 + 0x3e0) * 0x40));
  return;
}
