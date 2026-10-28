/* SPDX-License-Identifier: MIT */
/* mercsw 10067569 */
/* mercsw 10067569: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 PTR_DAT_100aaf68;
int __cdecl FUN_10003d60(int param_1, int param_2);
uint __cdecl FUN_1005982d(int * param_1, int param_2, int param_3, int param_4, int param_5, int param_6);

void __cdecl FUN_10067569(int * param_1, int * param_2, int param_3)

{
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  (void)local_28;
  (void)local_24;
  (void)local_20;
  (void)local_1c;
  local_8 = *(int *)(PTR_DAT_100aaf68 + 0x44);
  local_18 = ((int)(((unsigned int)(param_1[3]) - (unsigned int)(param_1[1])) + (unsigned int)(1))) >> 1;
  local_14 = ((int)(((unsigned int)(param_1[4]) - (unsigned int)(param_1[2])) + (unsigned int)(1))) >> 1;
  local_c = ((param_1[3] - param_1[1]) + 1) / 2 + -1;
  local_10 = FUN_10003d60(local_c,local_8);
  local_2c = *param_1;
  local_28 = param_1[1] + *param_2;
  local_24 = param_1[2] + param_2[1];
  local_20 = param_1[1] + param_2[2];
  local_1c = param_1[2] + param_2[3];
  local_18 = local_18 - *param_2;
  local_14 = local_14 - param_2[1];
  FUN_1005982d(&local_2c,local_18,local_14,local_c,local_10,param_3);
  return;
}
