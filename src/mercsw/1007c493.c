/* SPDX-License-Identifier: MIT */
/* mercsw 1007c493 */
/* mercsw 1007c493: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100cf0dc[];
undefined __cdecl FUN_1007c3c2(int param_1);

void __cdecl FUN_1007c493(int param_1, int param_2)

{
  *(int *)(DAT_100cf0dc + param_1 * 0x14) = *(int *)(DAT_100cf0dc + param_1 * 0x14) - param_2;
  if (*(int *)(DAT_100cf0dc + param_1 * 0x14) < 0) {
    FUN_1007c3c2(param_1);
  }
  return;
}
