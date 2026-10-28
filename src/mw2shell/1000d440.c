/* SPDX-License-Identifier: MIT */
/* mw2shell 1000d440 */
/* mw2shell 1000d440: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a6798;
extern undefined4 DAT_100a67b4;
extern undefined4 DAT_100a67b8;
undefined4 __cdecl FUN_10018060(int param_1, int param_2);
int __cdecl FUN_100507a0(int param_1);
undefined4 __cdecl FUN_10050490(int param_1);

int __stdcall FUN_1000d440(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar1 = 0;
  if (0 < *(int *)(DAT_100a6798 + 4)) {
    do {
      iVar3 = iVar1 + 1;
      iVar1 = FUN_10018060(DAT_100a6798,iVar1);
      iVar1 = FUN_100507a0(iVar1);
      iVar2 = iVar2 + iVar1;
      iVar1 = iVar3;
    } while (iVar3 < *(int *)(DAT_100a6798 + 4));
  }
  iVar1 = 0;
  if (0 < *(int *)(DAT_100a67b4 + 4)) {
    do {
      iVar3 = iVar1 + 1;
      iVar1 = FUN_10018060(DAT_100a67b4,iVar1);
      iVar1 = FUN_10050490(iVar1);
      iVar2 = iVar2 + iVar1;
      iVar1 = iVar3;
    } while (iVar3 < *(int *)(DAT_100a67b4 + 4));
  }
  iVar1 = 0;
  if (0 < *(int *)(DAT_100a67b8 + 4)) {
    do {
      iVar3 = iVar1 + 1;
      iVar1 = FUN_10018060(DAT_100a67b8,iVar1);
      iVar1 = FUN_10050490(iVar1);
      iVar2 = iVar2 + iVar1;
      iVar1 = iVar3;
    } while (iVar3 < *(int *)(DAT_100a67b8 + 4));
  }
  return iVar2;
}
