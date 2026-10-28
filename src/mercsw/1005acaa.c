/* SPDX-License-Identifier: MIT */
/* mercsw 1005acaa */
/* mercsw 1005acaa: Ghidra's C, repaired by tools/ghidra_repair.py */
int __cdecl FUN_1005ab17(int * param_1, int param_2, int param_3, int param_4, int param_5, int param_6);

void __cdecl FUN_1005acaa(int * param_1, int param_2, int param_3, int param_4, byte * param_5, int param_6)

{
  int iVar1;
  
  do {
    iVar1 = FUN_1005ab17(param_1,param_2,param_3,param_4,(uint)*param_5,param_6);
    param_2 = param_2 + iVar1;
    param_5 = param_5 + 1;
  } while (*param_5 != 0);
  return;
}
