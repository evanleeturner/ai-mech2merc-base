/* SPDX-License-Identifier: MIT */
/* mercsw 1002f90b */
/* mercsw 1002f90b: Ghidra's C, repaired by tools/ghidra_repair.py */

void __cdecl FUN_1002f90b(int param_1, undefined4 param_2)

{
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x6c) != 0) {
    *(short *)(*(int *)(param_1 + 0x6c) + 2) = (short)param_2;
  }
  for (local_8 = *(int *)(param_1 + 4); local_8 != 0; local_8 = *(int *)(local_8 + 8)) {
    FUN_1002f90b(local_8,param_2);
  }
  return;
}
