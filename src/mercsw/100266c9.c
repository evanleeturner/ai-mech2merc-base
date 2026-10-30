/* SPDX-License-Identifier: MIT */
/* mercsw 100266c9 */
/* mercsw 100266c9: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl EnsureSegmentDirection(int param_1);
undefined __cdecl FUN_10026423(int param_1);

void __cdecl FUN_100266c9(int * param_1, int param_2, int param_3, int param_4)

{
  int iVar1;
  
  param_1[3] = param_2;
  param_1[4] = param_3;
  param_1[5] = param_4;
  param_1[6] = param_2 - *param_1;
  param_1[7] = param_3 - param_1[1];
  param_1[8] = param_4 - param_1[2];
  iVar1 = param_1[0xd];
  param_1[0xd] = 0;
  if (iVar1 == 1) {
    EnsureSegmentDirection((int)param_1);
  }
  else if (iVar1 == 2) {
    FUN_10026423((int)param_1);
  }
  else {
    param_1[0xc] = 0;
    param_1[0xb] = param_1[0xc];
    param_1[10] = param_1[0xb];
    param_1[9] = param_1[10];
  }
  return;
}
