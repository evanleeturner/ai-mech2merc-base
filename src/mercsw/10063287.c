/* SPDX-License-Identifier: MIT */
/* mercsw 10063287 */
/* mercsw 10063287: Ghidra's C, repaired by tools/ghidra_repair.py */

undefined4 __cdecl FUN_10063287(int param_1)

{
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  if (*(int *)(param_1 + 0x3e0) != -1) {
    if (*(int *)(*(int *)(param_1 + 0x3e0) * 0x40 + 8 + *(int *)(param_1 + 0x54)) == 1) {
      local_8 = 1;
    }
    else {
      local_8 = 0;
    }
  }
  return local_8;
}
