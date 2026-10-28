/* SPDX-License-Identifier: MIT */
/* mercsw 100449ef */
/* mercsw 100449ef: Ghidra's C, repaired by tools/ghidra_repair.py */

void __cdecl FUN_100449ef(int param_1, short param_2)

{
  *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x20) = (undefined1)param_2;
  if (param_2 == 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x21) = 1;
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x21) = 0;
  }
  return;
}
