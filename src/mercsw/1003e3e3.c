/* SPDX-License-Identifier: MIT */
/* mercsw 1003e3e3 */
/* mercsw 1003e3e3: Ghidra's C, repaired by tools/ghidra_repair.py */

void __cdecl FUN_1003e3e3(int param_1, int param_2)

{
  if (*(int *)(param_2 + 8) != 0) {
    *(int *)(*(int *)(param_2 + 8) + 4) = param_1;
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(int *)(param_2 + 8) = param_1;
  *(int *)(param_1 + 4) = param_2;
  return;
}
