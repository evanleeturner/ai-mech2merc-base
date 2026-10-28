/* SPDX-License-Identifier: MIT */
/* mercsw 1002f969 */
/* mercsw 1002f969: Ghidra's C, repaired by tools/ghidra_repair.py */

void __cdecl FUN_1002f969(int param_1, undefined4 param_2)

{
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x6c) != 0) {
    *(short *)(*(int *)(param_1 + 0x6c) + 0x14) = (short)param_2;
  }
  for (local_8 = *(int *)(param_1 + 4); local_8 != 0; local_8 = *(int *)(local_8 + 8)) {
    FUN_1002f969(local_8,param_2);
  }
  return;
}
