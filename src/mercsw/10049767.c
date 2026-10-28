/* SPDX-License-Identifier: MIT */
/* mercsw 10049767 */
/* mercsw 10049767: Ghidra's C, repaired by tools/ghidra_repair.py */

undefined4 __cdecl FUN_10049767(int param_1)

{
  undefined4 local_8;
  
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    local_8 = *(undefined4 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 4);
  }
  return local_8;
}
