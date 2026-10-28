/* SPDX-License-Identifier: MIT */
/* mercsw 1004d652 */
/* mercsw 1004d652: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_101600f4[];
extern undefined DAT_1021567c[];

undefined4 __cdecl FUN_1004d652(uint param_1)

{
  undefined4 local_8;
  
  local_8 = 2;
  if (param_1 < 0x10) {
    local_8 = *(undefined4 *)(DAT_101600f4 + *(int *)(DAT_1021567c + param_1 * 0x54) * 0x3c);
  }
  return local_8;
}
