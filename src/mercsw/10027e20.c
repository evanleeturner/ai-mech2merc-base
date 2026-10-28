/* SPDX-License-Identifier: MIT */
/* mercsw 10027e20 */
/* mercsw 10027e20: Ghidra's C, repaired by tools/ghidra_repair.py */
int __cdecl FUN_1002fc9d(int param_1);
undefined __cdecl FUN_10089060(int * param_1, int * param_2, int * param_3, int * param_4);
undefined __cdecl FUN_10024699(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6);

void __cdecl FUN_10027e20(int param_1)

{
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  local_20 = 0;
  local_14 = 0;
  local_18 = 0;
  local_10 = 0;
  local_1c = -1000;
  local_8 = -0x514;
  local_c = (int *)FUN_1002fc9d(*(int *)(param_1 + 0x40));
  FUN_10089060(local_c,&local_10,&local_18,&local_1c);
  FUN_10089060(local_c,&local_14,&local_20,&local_8);
  FUN_10024699(local_10,local_18,local_1c,local_14 - local_10,local_20 - local_18,local_8 - local_1c
              );
  return;
}
