/* SPDX-License-Identifier: MIT */
/* mercsw 10068a11 */
/* mercsw 10068a11: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_10066609(int * param_1, int param_2);
undefined __cdecl FUN_1003517a(int param_1, int param_2, int param_3, int * param_4);

void __cdecl FUN_10068a11(int param_1, int param_2, int param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xa4);
  FUN_10066609(piVar1,param_2);
  FUN_1003517a((int)*(short *)(param_1 + 0xb8) >> 1,2,param_3,piVar1);
  return;
}
