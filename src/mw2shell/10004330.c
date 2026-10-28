/* SPDX-License-Identifier: MIT */
/* mw2shell 10004330 */
/* mw2shell 10004330: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_1008379c[];
extern undefined DAT_10083800[];

int __cdecl FUN_10004330(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)(DAT_1008379c);
  piVar3 = (int *)(DAT_1008379c);
  do {
    if (*piVar4 == param_1) {
      *piVar4 = -1;
    }
    iVar2 = *piVar4;
    if (iVar2 != -1) {
      if (*piVar3 == -1) {
        *piVar3 = iVar2;
        *piVar4 = -1;
      }
      iVar1 = *piVar3;
      iVar2 = iVar1 / -100;
      if (param_1 / -100 == iVar2) {
        iVar2 = iVar1 / 100;
        if (param_1 % 100 < iVar1 % 100) {
          *piVar3 = iVar1 + -1;
        }
      }
      piVar3 = piVar3 + 1;
    }
    piVar4 = piVar4 + 1;
  } while (piVar4 < (int *)(DAT_10083800));
  return iVar2;
}
