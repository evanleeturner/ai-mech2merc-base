/* SPDX-License-Identifier: MIT */
/* mercsw 1003431f */
/* mercsw 1003431f: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_101eb480;
extern undefined4 DAT_101eb484;
undefined __cdecl FUN_10034268(int * param_1, int * param_2, int param_3, int param_4, int param_5);
undefined __cdecl FUN_10019df1(int param_1, int param_2, int param_3);

void __cdecl FUN_1003431f(int * param_1)

{
  int local_c;
  int local_8;
  
  FUN_10034268(&local_8,&local_c,-param_1[2],-param_1[3],param_1[5]);
  DAT_101eb480 = *param_1 + local_8;
  DAT_101eb484 = param_1[1] + local_c;
  FUN_10034268(&local_8,&local_c,param_1[2],-param_1[3],param_1[5]);
  FUN_10019df1(*param_1 + local_8,param_1[1] + local_c,param_1[7]);
  FUN_10034268(&local_8,&local_c,param_1[2],param_1[3],param_1[5]);
  FUN_10019df1(*param_1 + local_8,param_1[1] + local_c,param_1[7]);
  FUN_10034268(&local_8,&local_c,-param_1[2],param_1[3],param_1[5]);
  FUN_10019df1(*param_1 + local_8,param_1[1] + local_c,param_1[7]);
  FUN_10034268(&local_8,&local_c,-param_1[2],-param_1[3],param_1[5]);
  FUN_10019df1(*param_1 + local_8,param_1[1] + local_c,param_1[7]);
  return;
}
