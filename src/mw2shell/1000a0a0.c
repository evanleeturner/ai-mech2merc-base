/* SPDX-License-Identifier: MIT */
/* mw2shell 1000a0a0 */
/* mw2shell 1000a0a0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_1008379c[];
extern undefined DAT_10083800[];

int __cdecl FUN_1000a0a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar1 = (int *)(DAT_1008379c);
  iVar2 = (param_1 - param_1 % 100) + 1;
  do {
    if (*piVar1 == -1) {
      if (0x14 < iVar2 % 100) {
        return 0;
      }
      DAT_1008379c[iVar3] = iVar2;
      return iVar2;
    }
    if (iVar2 / -100 == *piVar1 / -100) {
      iVar2 = iVar2 + 1;
    }
    piVar1 = piVar1 + 1;
    iVar3 = iVar3 + 1;
  } while (piVar1 < (int *)(DAT_10083800));
  return 0;
}
