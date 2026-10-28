/* SPDX-License-Identifier: MIT */
/* mercsw 1002a89b */
/* mercsw 1002a89b: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_10083b74(int param_1, int param_2, int param_3);

void __cdecl FUN_1002a89b(int param_1, short param_2)

{
  *(int *)(param_1 + 0xdc) = (int)param_2;
  FUN_10083b74(param_1,1,1);
  if (*(int *)(param_1 + 0x1a2) == *(int *)(param_1 + 0xdc)) {
    FUN_10083b74(param_1,1,1);
  }
  *(short *)(param_1 + 0x178) = (short)*(undefined4 *)(param_1 + 0xdc);
  return;
}
