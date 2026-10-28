/* SPDX-License-Identifier: MIT */
/* mercsw 100707b3 */
/* mercsw 100707b3: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 PTR_DAT_100aaf68;

int * __cdecl FUN_100707b3(int param_1, int * param_2)

{
  *param_2 = *(int *)PTR_DAT_100aaf68 - *(int *)(param_1 + 0x50);
  param_2[1] = *(int *)(PTR_DAT_100aaf68 + 4) - *(int *)(param_1 + 0x54);
  param_2[2] = *(int *)(PTR_DAT_100aaf68 + 8) - *(int *)(param_1 + 0x58);
  return param_2;
}
