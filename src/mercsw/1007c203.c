/* SPDX-License-Identifier: MIT */
/* mercsw 1007c203 */
/* mercsw 1007c203: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __cdecl FUN_1002fc40(int param_1);
undefined4 __cdecl FUN_1002fc56(int param_1);
undefined __cdecl FUN_1007c066(int * param_1, undefined * param_2, int param_3);

void __cdecl FUN_1007c203(int * param_1, undefined * param_2, int param_3)

{
  int *piVar1;
  
  if (param_1 != (int *)0x0) {
    piVar1 = (int *)FUN_1002fc40((int)param_1);
    if (piVar1 != (int *)0x0) {
      FUN_1007c203(piVar1,param_2,param_3);
    }
    piVar1 = (int *)FUN_1002fc56((int)param_1);
    if (piVar1 != (int *)0x0) {
      FUN_1007c203(piVar1,param_2,param_3);
    }
    FUN_1007c066(param_1,param_2,param_3);
  }
  return;
}
