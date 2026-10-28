/* SPDX-License-Identifier: MIT */
/* mw2shell 1006984a */
/* mw2shell 1006984a: Ghidra's C, repaired by tools/ghidra_repair.py */
int __cdecl FUN_100696b7(int * param_1, int param_2, int param_3, int param_4, int param_5, int param_6);

void __cdecl FUN_1006984a(int * param_1, int param_2, int param_3, int param_4, byte * param_5, int param_6)

{
  int iVar1;
  
  do {
    iVar1 = FUN_100696b7(param_1,param_2,param_3,param_4,(uint)*param_5,param_6);
    param_2 = param_2 + iVar1;
    param_5 = param_5 + 1;
  } while (*param_5 != 0);
  return;
}
