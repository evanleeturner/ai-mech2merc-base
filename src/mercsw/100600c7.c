/* SPDX-License-Identifier: MIT */
/* mercsw 100600c7 */
/* mercsw 100600c7: Ghidra's C, repaired by tools/ghidra_repair.py */
int __cdecl FUN_10025a50(int * param_1, int param_2, int param_3, int param_4, int param_5);
undefined4 __cdecl FUN_1005ffd8(int param_1, int param_2, int param_3, int param_4);

uint __cdecl FUN_100600c7(int param_1, int param_2, int param_3, int param_4)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    uVar1 = FUN_1005ffd8(param_1,param_2,param_3,param_4);
  }
  else {
    uVar1 = FUN_10025a50(*(int **)(param_1 + 0x4c),*(int *)(param_1 + 0x1c),param_2,param_3,param_4)
    ;
    uVar1 = uVar1 & 1;
  }
  return uVar1;
}
