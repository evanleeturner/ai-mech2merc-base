/* SPDX-License-Identifier: MIT */
/* mercsw 1005fbab */
/* mercsw 1005fbab: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_1001bdc6(ushort * param_1);

void __cdecl FUN_1005fbab(ushort * param_1, int param_2, int param_3, int param_4, undefined4 * param_5, undefined4 * param_6, int * param_7)

{
  int *piVar1;
  
  FUN_1001bdc6(param_1);
  piVar1 = *(int **)(param_1 + 0x26);
  if (piVar1 == (int *)0x0) {
    *param_6 = 0;
    *param_5 = 0;
  }
  else if ((((param_2 < *piVar1) || (piVar1[1] < param_2)) || (param_4 < piVar1[4])) ||
          (piVar1[5] < param_4)) {
    *param_6 = 0;
    *param_5 = 0;
  }
  else {
    *param_6 = 1;
    *param_7 = piVar1[3];
    if ((param_3 < piVar1[2]) || (piVar1[3] < param_3)) {
      *param_5 = 0;
    }
    else {
      *param_5 = 1;
    }
  }
  return;
}
