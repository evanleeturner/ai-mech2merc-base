/* SPDX-License-Identifier: MIT */
/* mw2shell 1001d840 */
/* mw2shell 1001d840: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a6798;
extern int DAT_100b5124;
undefined4 __cdecl FUN_10018060(int param_1, int param_2);

int __stdcall FUN_1001d840(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  if (0 < *(int *)(DAT_100a6798 + 4)) {
    do {
      iVar1 = FUN_10018060(DAT_100a6798,iVar2);
      if ((*(int *)(iVar1 + 0x80c) == -1) && (DAT_100b5124 != iVar1)) {
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(DAT_100a6798 + 4));
  }
  return iVar3;
}
