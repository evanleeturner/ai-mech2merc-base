/* SPDX-License-Identifier: MIT */
/* mercsw 1007c28e */
/* mercsw 1007c28e: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_1007cbc4(int * param_1);
int __cdecl FUN_1007c9fd(int param_1);
undefined __cdecl FUN_1007c97d(int param_1);

void __cdecl FUN_1007c28e(int * param_1, undefined * param_2)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    FUN_1007cbc4(param_1);
    if (param_2 != (undefined *)0x0) {
      ((void (*)(int *))((*(code *)param_2)))(param_1);
    }
    iVar1 = FUN_1007c9fd((int)param_1);
    if (iVar1 != -1) {
      FUN_1007c97d(iVar1);
    }
  }
  return;
}
