/* SPDX-License-Identifier: MIT */
/* mercsw 1002f9c7 */
/* mercsw 1002f9c7: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_100141c0(ushort * param_1, int param_2);

void __cdecl FUN_1002f9c7(int param_1, int param_2)

{
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_100141c0(*(ushort **)(param_1 + 0x6c),param_2);
  }
  for (local_8 = *(int *)(param_1 + 4); local_8 != 0; local_8 = *(int *)(local_8 + 8)) {
    FUN_1002f9c7(local_8,param_2);
  }
  return;
}
