/* SPDX-License-Identifier: MIT */
/* mercsw 1002650e */
/* mercsw 1002650e: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_1002637d(int param_1);
int __cdecl FUN_10003d60(int param_1, int param_2);

void __cdecl FUN_1002650e(int * param_1, int param_2)

{
  int iVar1;
  
  if (param_1[0xd] == 0) {
    FUN_1002637d((int)param_1);
  }
  if (param_1[0xd] != 0) {
    iVar1 = FUN_10003d60(param_2,param_1[9]);
    param_1[3] = *param_1 + iVar1;
    iVar1 = FUN_10003d60(param_2,param_1[10]);
    param_1[4] = param_1[1] + iVar1;
    iVar1 = FUN_10003d60(param_2,param_1[0xb]);
    param_1[5] = param_1[2] + iVar1;
    param_1[6] = param_1[3] - *param_1;
    param_1[7] = param_1[4] - param_1[1];
    param_1[8] = param_1[5] - param_1[2];
    param_1[0xc] = param_2;
  }
  return;
}
