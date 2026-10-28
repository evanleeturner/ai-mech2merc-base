/* SPDX-License-Identifier: MIT */
/* mercsw 10063528 */
/* mercsw 10063528: Ghidra's C, repaired by tools/ghidra_repair.py */

void __cdecl FUN_10063528(int param_1, int param_2, int param_3)

{
  if ((-1 < param_3) && (param_3 < 3)) {
    *(int *)(*(int *)(param_1 + 0x54) + param_2 * 0x40 + 0xc) = param_3;
  }
  return;
}
