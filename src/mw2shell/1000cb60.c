/* SPDX-License-Identifier: MIT */
/* mw2shell 1000cb60 */
/* mw2shell 1000cb60: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int * DAT_100a67b4;
extern undefined4 DAT_100a67bc;
extern undefined4 DAT_100a67c0;
extern undefined4 DAT_100a67c4;
extern undefined4 DAT_100a67c8;
extern int * DAT_100a67cc;
extern undefined4 DAT_100a67d4;
extern undefined4 DAT_100a67d8;
extern undefined4 DAT_100a67dc;
extern undefined4 DAT_100a67e0;
undefined4 __cdecl FUN_10018060(int param_1, int param_2);
undefined4 __cdecl AppendToCollection(int * param_1, undefined4 param_2);

void __stdcall FUN_1000cb60(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(DAT_100a67bc + 4)) {
    do {
      iVar3 = iVar4 + 1;
      uVar1 = FUN_10018060(DAT_100a67bc,iVar4);
      AppendToCollection(DAT_100a67b4,uVar1);
      iVar4 = iVar3;
    } while (iVar3 < *(int *)(DAT_100a67bc + 4));
  }
  iVar4 = 0;
  if (0 < *(int *)(DAT_100a67c0 + 4)) {
    do {
      iVar3 = iVar4 + 1;
      uVar1 = FUN_10018060(DAT_100a67c0,iVar4);
      AppendToCollection(DAT_100a67b4,uVar1);
      iVar4 = iVar3;
    } while (iVar3 < *(int *)(DAT_100a67c0 + 4));
  }
  iVar4 = 0;
  if (0 < *(int *)(DAT_100a67c4 + 4)) {
    do {
      iVar3 = iVar4 + 1;
      uVar1 = FUN_10018060(DAT_100a67c4,iVar4);
      AppendToCollection(DAT_100a67b4,uVar1);
      iVar4 = iVar3;
    } while (iVar3 < *(int *)(DAT_100a67c4 + 4));
  }
  iVar4 = 0;
  if (0 < *(int *)(DAT_100a67c8 + 4)) {
    do {
      piVar2 = (int *)FUN_10018060(DAT_100a67c8,iVar4);
      if (*piVar2 != 9) {
        AppendToCollection(DAT_100a67b4,(undefined4)(piVar2));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_100a67c8 + 4));
  }
  iVar4 = 0;
  if (0 < *(int *)(DAT_100a67d4 + 4)) {
    do {
      iVar3 = iVar4 + 1;
      uVar1 = FUN_10018060(DAT_100a67d4,iVar4);
      AppendToCollection(DAT_100a67cc,uVar1);
      iVar4 = iVar3;
    } while (iVar3 < *(int *)(DAT_100a67d4 + 4));
  }
  iVar4 = 0;
  if (0 < *(int *)(DAT_100a67d8 + 4)) {
    do {
      iVar3 = iVar4 + 1;
      uVar1 = FUN_10018060(DAT_100a67d8,iVar4);
      AppendToCollection(DAT_100a67cc,uVar1);
      iVar4 = iVar3;
    } while (iVar3 < *(int *)(DAT_100a67d8 + 4));
  }
  iVar4 = 0;
  if (0 < *(int *)(DAT_100a67dc + 4)) {
    do {
      iVar3 = iVar4 + 1;
      uVar1 = FUN_10018060(DAT_100a67dc,iVar4);
      AppendToCollection(DAT_100a67cc,uVar1);
      iVar4 = iVar3;
    } while (iVar3 < *(int *)(DAT_100a67dc + 4));
  }
  iVar4 = 0;
  if (0 < *(int *)(DAT_100a67e0 + 4)) {
    do {
      iVar3 = iVar4 + 1;
      uVar1 = FUN_10018060(DAT_100a67e0,iVar4);
      AppendToCollection(DAT_100a67cc,uVar1);
      iVar4 = iVar3;
    } while (iVar3 < *(int *)(DAT_100a67e0 + 4));
  }
  return;
}
