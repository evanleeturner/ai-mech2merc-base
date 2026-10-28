/* SPDX-License-Identifier: MIT */
/* mw2shell 1004b140 */
/* mw2shell 1004b140: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a67a8;
undefined4 __cdecl FUN_10018060(int param_1, int param_2);

int __stdcall FUN_1004b140(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar1 = 0;
  if (0 < *(int *)(DAT_100a67a8 + 4)) {
    do {
      iVar3 = iVar1 + 1;
      iVar1 = FUN_10018060(DAT_100a67a8,iVar1);
      iVar2 = iVar2 + *(int *)(iVar1 + 0x24);
      iVar1 = iVar3;
    } while (iVar3 < *(int *)(DAT_100a67a8 + 4));
  }
  return iVar2;
}
