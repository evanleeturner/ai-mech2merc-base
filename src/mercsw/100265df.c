/* SPDX-License-Identifier: MIT */
/* mercsw 100265df */
/* mercsw 100265df: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_1002637d(int param_1);
int __cdecl FUN_10003d60(int param_1, int param_2);
undefined __cdecl FUN_10026423(int param_1);

void __cdecl FUN_100265df(int * param_1, int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[0xd];
  if (iVar1 == 0) {
    FUN_1002637d((int)param_1);
  }
  if (0 < param_1[0xc]) {
    iVar2 = FUN_10003d60(param_2,param_1[9]);
    *param_1 = *param_1 + iVar2;
    iVar2 = FUN_10003d60(param_2,param_1[10]);
    param_1[1] = param_1[1] + iVar2;
    iVar2 = FUN_10003d60(param_2,param_1[0xb]);
    param_1[2] = param_1[2] + iVar2;
    param_1[6] = param_1[3] - *param_1;
    param_1[7] = param_1[4] - param_1[1];
    param_1[8] = param_1[5] - param_1[2];
    param_1[0xd] = 0;
    if (iVar1 == 2) {
      FUN_10026423((int)param_1);
    }
    else {
      FUN_1002637d((int)param_1);
    }
  }
  return;
}
