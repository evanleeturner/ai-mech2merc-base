/* SPDX-License-Identifier: MIT */
/* mercsw 10071002 */
/* mercsw 10071002: Ghidra's C, repaired by tools/ghidra_repair.py */

undefined4 __cdecl FUN_10071002(int param_1, int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x4b4) <= param_2)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xc + param_2 * 0xc);
  }
  return uVar1;
}
