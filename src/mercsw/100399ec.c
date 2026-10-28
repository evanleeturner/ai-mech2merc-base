/* SPDX-License-Identifier: MIT */
/* mercsw 100399ec */
/* mercsw 100399ec: Ghidra's C, repaired by tools/ghidra_repair.py */

void __cdecl FUN_100399ec(int param_1, int param_2)

{
  if ((((param_1 != 0) && (0 < *(int *)(param_1 + 0x754))) && (-1 < param_2)) &&
     (param_2 < *(int *)(param_1 + 0x750))) {
    *(undefined4 *)(param_2 * 0x24 + param_1 + 0x100) = 0xffffffff;
    *(int *)(param_1 + 0x754) = *(int *)(param_1 + 0x754) + -1;
    *(int *)(param_1 + 0x758 + *(int *)(param_1 + 0x754) * 4) = param_2;
  }
  return;
}
