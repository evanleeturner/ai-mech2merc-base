/* SPDX-License-Identifier: MIT */
/* mercsw 1004318b */
/* mercsw 1004318b: Ghidra's C, repaired by tools/ghidra_repair.py */

undefined4 __cdecl FUN_1004318b(int param_1, int param_2)

{
  undefined4 local_8;
  
  local_8 = 0;
  if (((0x50000 < param_2) || (param_2 < -0x50000)) &&
     (local_8 = 1, *(int *)(*(int *)(param_1 + 0x4c) + 8) == 0)) {
    *(undefined4 *)(*(int *)(param_1 + 0x4c) + 8) = 0x66;
  }
  return local_8;
}
