/* SPDX-License-Identifier: MIT */
/* mercsw 100895ca */
/* mercsw 100895ca: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_1008941c(int * param_1, int * param_2, int * param_3);
undefined __cdecl FUN_10089060(int * param_1, int * param_2, int * param_3, int * param_4);
undefined4 * __cdecl FUN_10086973(undefined4 * param_1, undefined4 * param_2, uint param_3);

void __cdecl FUN_100895ca(int * param_1, int * param_2, undefined4 * param_3)

{
  int local_40;
  int local_3c;
  int local_38;
  int local_34 [9];
  int local_10;
  int local_c;
  int local_8;
  
  (void)local_10;
  (void)local_c;
  (void)local_8;
  FUN_1008941c(param_1,param_2,local_34);
  local_38 = param_2[9];
  local_3c = param_2[10];
  local_40 = param_2[0xb];
  FUN_10089060(param_1,&local_38,&local_3c,&local_40);
  local_10 = local_38;
  local_c = local_3c;
  local_8 = local_40;
  FUN_10086973(param_3,(undefined4 *)(local_34),0x30);
  return;
}
