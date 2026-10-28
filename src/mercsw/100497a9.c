/* SPDX-License-Identifier: MIT */
/* mercsw 100497a9 */
/* mercsw 100497a9: Ghidra's C, repaired by tools/ghidra_repair.py */

undefined4 __cdecl FUN_100497a9(int param_1)

{
  undefined4 local_8;
  
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    local_8 = *(undefined4 *)(*(int *)(param_1 + 8) + -4 + *(int *)(param_1 + 0xc) * 4);
  }
  return local_8;
}
