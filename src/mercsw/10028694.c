/* SPDX-License-Identifier: MIT */
/* mercsw 10028694 */
/* mercsw 10028694: Ghidra's C, repaired by tools/ghidra_repair.py */
int __cdecl FUN_10028bde(int param_1, ushort param_2, short param_3, ushort * param_4, ushort * param_5);

ushort __cdecl FUN_10028694(int param_1, ushort param_2)

{
  ushort local_c [2];
  ushort local_8 [2];
  
  if (((((int)(short)param_2 & 0xf000U) != 0) &&
      (FUN_10028bde(param_1,param_2,-3,local_c,local_8), param_2 = local_8[0],
      *(short *)(param_1 + 0x176) == 2)) && (*(int *)(param_1 + 0x1a8) != 0)) {
    param_2 = local_c[0];
  }
  return param_2;
}
