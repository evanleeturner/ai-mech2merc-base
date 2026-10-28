/* SPDX-License-Identifier: MIT */
/* mercsw 1005a93f */
/* mercsw 1005a93f: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_10059b2b[];
extern undefined DAT_1005a93b[];

void __cdecl FUN_1005a93f(uint param_1, int * param_2, int * param_3)

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
      iVar1 = *(int *)(DAT_10059b2b + param_1 * 4);
      iVar2 = *(int *)(DAT_1005a93b + param_1 * -4);
    }
    else {
      iVar1 = -*(int *)(DAT_10059b2b + (0x708 - param_1) * 4);
      iVar2 = *(int *)(DAT_1005a93b + (0x708 - param_1) * -4);
    }
  }
  else {
    uVar3 = 0xe10 - param_1;
    if (uVar3 < 0x385) {
      iVar1 = *(int *)(DAT_10059b2b + uVar3 * 4);
      iVar2 = -*(int *)(DAT_1005a93b + uVar3 * -4);
    }
    else {
      iVar1 = -*(int *)(DAT_10059b2b + (0x708 - uVar3) * 4);
      iVar2 = -*(int *)(DAT_1005a93b + (0x708 - uVar3) * -4);
    }
  }
  *param_2 = iVar1;
  *param_3 = iVar2;
  return;
}
