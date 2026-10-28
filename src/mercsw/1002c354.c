/* SPDX-License-Identifier: MIT */
/* mercsw 1002c354 */
/* mercsw 1002c354: Ghidra's C, repaired by tools/ghidra_repair.py */
int __cdecl FUN_1008255f(uint param_1, uint param_2);

void __cdecl FUN_1002c354(int param_1)

{
  if (*(int *)(param_1 + 0x1a2) == 0) {
    FUN_1008255f(*(uint *)(param_1 + 4),*(uint *)(param_1 + 0x1a2));
    *(undefined4 *)(param_1 + 0x1a2) = 0x1000;
  }
  return;
}
