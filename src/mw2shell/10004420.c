/* SPDX-License-Identifier: MIT */
/* mw2shell 10004420 */
/* mw2shell 10004420: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_1008379c[];
extern undefined DAT_10083800[];
extern undefined DAT_10083870[];

int __cdecl FUN_10004420(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  piVar5 = (int *)(DAT_10083800);
  piVar6 = (int *)(DAT_10083800);
  do {
    if (*piVar6 == param_1) {
      *piVar6 = -1;
    }
    if (*piVar6 != -1) {
      if (*piVar5 == -1) {
        iVar1 = piVar6[1];
        *piVar5 = *piVar6;
        piVar5[1] = iVar1;
        *piVar6 = -1;
      }
      iVar1 = *piVar5;
      if ((iVar1 / -100 == param_1 / -100) && (param_1 % 100 < iVar1 % 100)) {
        *piVar5 = iVar1 + -1;
      }
      piVar5 = piVar5 + 2;
    }
    piVar6 = piVar6 + 2;
  } while (piVar6 < (int *)(DAT_10083870));
  piVar5 = (int *)(DAT_1008379c);
  piVar6 = (int *)(DAT_1008379c);
  iVar1 = param_1 * 100 + 0x2711;
  iVar3 = iVar1 / 100;
  do {
    if (*piVar5 / 100 == iVar3) {
      *piVar5 = -1;
    }
    iVar4 = *piVar5;
    if (iVar4 != -1) {
      if (*piVar6 == -1) {
        *piVar6 = iVar4;
        *piVar5 = -1;
      }
      iVar2 = *piVar6;
      iVar4 = iVar1 / -10000;
      if ((iVar2 / -10000 == iVar4) && (iVar4 = iVar3 / 100, iVar3 % 100 < (iVar2 / 100) % 100)) {
        *piVar6 = iVar2 + -100;
      }
      piVar6 = piVar6 + 1;
    }
    piVar5 = piVar5 + 1;
  } while (piVar5 < (int *)(DAT_10083800));
  return iVar4;
}
