/* SPDX-License-Identifier: MIT */
/* mercsw 1002f19a */
/* mercsw 1002f19a: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ada48;
undefined __cdecl FUN_1008975d(undefined4 * param_1);

int * __cdecl FUN_1002f19a(int param_1, int * param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  *param_2 = param_1;
  param_2[1] = 0;
  if (param_1 == 0) {
    param_2[2] = 0;
  }
  else {
    param_2[2] = *(int *)(param_1 + 4);
    *(int **)(param_1 + 4) = param_2;
  }
  FUN_1008975d((undefined4 *)(param_2 + 3));
  if (param_1 == 0) {
    FUN_1008975d((undefined4 *)(param_2 + 0xf));
  }
  else {
    piVar2 = (int *)(param_1 + 0x3c);
    piVar3 = param_2 + 0xf;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    }
  }
  param_2[0x1b] = 0;
  param_2[0x1d] = 1;
  param_2[0x1c] = 0;
  param_2[0x1e] = DAT_100ada48;
  DAT_100ada48 = (DAT_100ada48 + 7U & 0x7f) + 0x40;
  return param_2;
}
