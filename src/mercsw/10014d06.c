/* SPDX-License-Identifier: MIT */
/* mercsw 10014d06 */
/* mercsw 10014d06: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aa540;
extern undefined4 DAT_100aa544;
extern undefined4 DAT_100aa548;
undefined __cdecl FUN_1002650e(int * param_1, int param_2);
undefined __cdecl FUN_1000fef4(uint * param_1, uint * param_2, uint * param_3);

void __cdecl FUN_10014d06(int param_1, int * param_2, int param_3)

{
  if (0 < param_3) {
    FUN_1002650e(param_2,param_3);
  }
  if (param_3 == 10) {
    DAT_100aa540 = *param_2 - *(int *)(param_1 + 0x34);
    DAT_100aa544 = param_2[1] - *(int *)(param_1 + 0x38);
    DAT_100aa548 = param_2[2] - *(int *)(param_1 + 0x3c);
  }
  else {
    DAT_100aa540 = param_2[3] - *(int *)(param_1 + 0x34);
    DAT_100aa544 = param_2[4] - *(int *)(param_1 + 0x38);
    DAT_100aa548 = param_2[5] - *(int *)(param_1 + 0x3c);
  }
  FUN_1000fef4((uint *)&DAT_100aa540,(uint *)&DAT_100aa544,(uint *)&DAT_100aa548);
  return;
}
