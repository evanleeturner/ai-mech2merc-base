/* SPDX-License-Identifier: MIT */
/* mercsw 1002fcce */
/* mercsw 1002fcce: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_1002fbc0(int * param_1);

void __cdecl FUN_1002fcce(int * param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_c;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (*(int **)(iVar1 + 4) == param_1) {
      *(int *)(iVar1 + 4) = param_1[2];
    }
    else {
      for (local_c = *(int *)(iVar1 + 4); local_c != 0; local_c = *(int *)(local_c + 8)) {
        if (*(int **)(local_c + 8) == param_1) {
          *(int *)(local_c + 8) = param_1[2];
          break;
        }
      }
    }
  }
  *param_1 = 0;
  param_1[2] = 0;
  piVar2 = param_1 + 0xf;
  piVar3 = param_1 + 3;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  param_1[0x1d] = param_1[0x1d] | 1;
  FUN_1002fbc0(param_1);
  return;
}
