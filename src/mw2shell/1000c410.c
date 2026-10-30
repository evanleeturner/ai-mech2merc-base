/* SPDX-License-Identifier: MIT */
/* mw2shell 1000c410 */
/* mw2shell 1000c410: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int * DAT_100a67b4;
extern int * DAT_100a67b8;
extern int * DAT_100a67cc;
extern int * DAT_100a67d0;
undefined4 __cdecl FUN_10018060(int param_1, int param_2);
undefined4 __cdecl AppendToCollection(int * param_1, undefined4 param_2);
undefined __cdecl FUN_100180f0(int * param_1, char param_2);

void __stdcall FUN_1000c410(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < DAT_100a67cc[1]) {
    do {
      iVar2 = iVar3 + 1;
      uVar1 = FUN_10018060((int)DAT_100a67cc,iVar3);
      AppendToCollection(DAT_100a67b4,uVar1);
      iVar3 = iVar2;
    } while (iVar2 < DAT_100a67cc[1]);
  }
  FUN_100180f0(DAT_100a67cc,'\0');
  iVar3 = 0;
  if (0 < DAT_100a67d0[1]) {
    do {
      iVar2 = iVar3 + 1;
      uVar1 = FUN_10018060((int)DAT_100a67d0,iVar3);
      AppendToCollection(DAT_100a67b8,uVar1);
      iVar3 = iVar2;
    } while (iVar2 < DAT_100a67d0[1]);
  }
  FUN_100180f0(DAT_100a67d0,'\0');
  return;
}
