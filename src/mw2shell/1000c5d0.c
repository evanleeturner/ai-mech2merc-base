/* SPDX-License-Identifier: MIT */
/* mw2shell 1000c5d0 */
/* mw2shell 1000c5d0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a67bc;
extern undefined4 DAT_100a67c0;
extern undefined4 DAT_100a67c4;
undefined4 __cdecl FUN_10018060(int param_1, int param_2);
undefined4 __cdecl FUN_1000c6b0(int param_1, int param_2);

int * __cdecl FUN_1000c5d0(int param_1, int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(DAT_100a67c4 + 4)) {
    do {
      piVar1 = (int *)FUN_10018060(DAT_100a67c4,iVar2);
      if (*piVar1 == param_1) {
        FUN_1000c6b0((int)piVar1,param_2);
        return piVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(DAT_100a67c4 + 4));
  }
  iVar2 = 0;
  if (0 < *(int *)(DAT_100a67bc + 4)) {
    do {
      piVar1 = (int *)FUN_10018060(DAT_100a67bc,iVar2);
      if (*piVar1 == param_1) {
        FUN_1000c6b0((int)piVar1,param_2);
        return piVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(DAT_100a67bc + 4));
  }
  iVar2 = 0;
  if (0 < *(int *)(DAT_100a67c0 + 4)) {
    do {
      piVar1 = (int *)FUN_10018060(DAT_100a67c0,iVar2);
      if (*piVar1 == param_1) {
        FUN_1000c6b0((int)piVar1,param_2);
        return piVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(DAT_100a67c0 + 4));
  }
  return (int *)0x0;
}
