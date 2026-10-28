/* SPDX-License-Identifier: MIT */
/* mercsw 1004d47f */
/* mercsw 1004d47f: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_101600e0[];

undefined4 __cdecl FUN_1004d47f(int param_1)

{
  undefined4 local_8;
  
  local_8 = 0;
  if (param_1 < 0x10) {
    local_8 = *(undefined4 *)(DAT_101600e0 + param_1 * 0x3c);
  }
  return local_8;
}
