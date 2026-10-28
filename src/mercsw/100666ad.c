/* SPDX-License-Identifier: MIT */
/* mercsw 100666ad */
/* mercsw 100666ad: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __cdecl FUN_1005aae4(int param_1);
uint __cdecl FUN_10056489(int * param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7);

void __cdecl FUN_100666ad(int * param_1, undefined4 param_2, int param_3, int param_4, int param_5)

{
  int iVar1;
  
  iVar1 = FUN_1005aae4(param_4);
  FUN_10056489(param_1,0,param_3 + iVar1,param_1[3] - param_1[1],param_3 + iVar1,0,param_5);
  return;
}
