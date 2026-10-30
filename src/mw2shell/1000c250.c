/* SPDX-License-Identifier: MIT */
/* mw2shell 1000c250 */
/* mw2shell 1000c250: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int * DAT_100a67a4;
extern int * DAT_100a67e4;
undefined4 __cdecl FUN_10018060(int param_1, int param_2);
undefined __stdcall FUN_1000be10(void);
undefined4 __cdecl AppendToCollection(int * param_1, undefined4 param_2);
undefined __cdecl FUN_100180f0(int * param_1, char param_2);

void __stdcall FUN_1000c250(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = 0;
  if (0 < DAT_100a67e4[1]) {
    do {
      iVar3 = iVar1 + 1;
      iVar1 = FUN_10018060((int)DAT_100a67e4,iVar1);
      uVar2 = FUN_1000be10();
      *(undefined4 *)(iVar1 + 0x24) = uVar2;
      AppendToCollection(DAT_100a67a4,iVar1);
      iVar1 = iVar3;
    } while (iVar3 < DAT_100a67e4[1]);
  }
  FUN_100180f0(DAT_100a67e4,'\0');
  return;
}
