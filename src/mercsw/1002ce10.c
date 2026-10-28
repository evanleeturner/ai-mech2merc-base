/* SPDX-License-Identifier: MIT */
/* mercsw 1002ce10 */
/* mercsw 1002ce10: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_1016a654[];

undefined4 __cdecl FUN_1002ce10(int param_1)

{
  undefined4 local_8;
  
  local_8 = 0;
  if ((-1 < param_1) && (param_1 < 10)) {
    local_8 = *(undefined4 *)(DAT_1016a654 + param_1 * 8);
  }
  return local_8;
}
