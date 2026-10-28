/* SPDX-License-Identifier: MIT */
/* mercsw 100267af */
/* mercsw 100267af: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __cdecl FUN_10011e60(int param_1, int param_2, int param_3);
undefined __cdecl FUN_1002650e(int * param_1, int param_2);

void __cdecl FUN_100267af(int * param_1, int param_2)

{
  int iVar1;
  
  if (param_1[7] != 0) {
    iVar1 = FUN_10011e60(param_1[0xc],param_2 - param_1[1],param_1[7]);
    FUN_1002650e(param_1,iVar1);
  }
  return;
}
