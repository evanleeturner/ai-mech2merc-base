/* SPDX-License-Identifier: MIT */
/* mw2shell 10063f70 */
/* mw2shell 10063f70: Ghidra's C, repaired by tools/ghidra_repair.py */

int * __cdecl FUN_10063f70(int * param_1, int param_2, int param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    while (iVar2 != -1) {
      if ((((param_1[8] != 0) && (*param_1 <= param_2)) && (param_2 < param_1[2] + *param_1)) &&
         ((param_1[1] <= param_3 && (param_3 < param_1[3] + param_1[1])))) {
        return param_1;
      }
      piVar1 = param_1 + 0xe;
      param_1 = param_1 + 0xe;
      iVar2 = *piVar1;
    }
  }
  return (int *)0x0;
}
