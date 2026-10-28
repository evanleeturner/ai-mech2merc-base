/* SPDX-License-Identifier: MIT */
/* mw2shell 100694df */
/* mw2shell 100694df: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100686cb[];
extern undefined DAT_100694db[];

void __cdecl FUN_100694df(uint param_1, int * param_2, int * param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  for (; (int)param_1 < 0; param_1 = param_1 + 0xe10) {
  }
  for (; 0xe10 < (int)param_1; param_1 = param_1 - 0xe10) {
  }
  if (param_1 < 0x709) {
    if (param_1 < 0x385) {
      iVar1 = *(int *)(DAT_100686cb + param_1 * 4);
      iVar2 = *(int *)(DAT_100694db + param_1 * -4);
    }
    else {
      iVar1 = -*(int *)(DAT_100686cb + (0x708 - param_1) * 4);
      iVar2 = *(int *)(DAT_100694db + (0x708 - param_1) * -4);
    }
  }
  else {
    uVar3 = 0xe10 - param_1;
    if (uVar3 < 0x385) {
      iVar1 = *(int *)(DAT_100686cb + uVar3 * 4);
      iVar2 = -*(int *)(DAT_100694db + uVar3 * -4);
    }
    else {
      iVar1 = -*(int *)(DAT_100686cb + (0x708 - uVar3) * 4);
      iVar2 = -*(int *)(DAT_100694db + (0x708 - uVar3) * -4);
    }
  }
  *param_2 = iVar1;
  *param_3 = iVar2;
  return;
}
