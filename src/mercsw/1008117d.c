/* SPDX-License-Identifier: MIT */
/* mercsw 1008117d */
/* mercsw 1008117d: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aae84;
extern undefined4 DAT_100b3c9c;
undefined __cdecl FUN_1002cd87(uint param_1, int param_2);
undefined __cdecl FUN_10039649(int param_1);

void __cdecl FUN_1008117d(undefined4 param_1, int param_2)

{
  FUN_1002cd87(0x800,param_2);
  FUN_10039649(param_2);
  DAT_100aae84 = param_2;
  *(int *)(DAT_100b3c9c + 0x18) = param_2;
  return;
}
