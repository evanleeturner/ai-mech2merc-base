/* SPDX-License-Identifier: MIT */
/* mw2shell 1004b0f0 */
/* mw2shell 1004b0f0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a67a4;
undefined4 __cdecl FUN_10018060(int param_1, int param_2);

int __stdcall FUN_1004b0f0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  if (0 < *(int *)(DAT_100a67a4 + 4)) {
    do {
      iVar1 = FUN_10018060(DAT_100a67a4,iVar3);
      if (*(char *)(iVar1 + 0x2064) == '\0') {
        iVar2 = iVar2 + *(int *)(iVar1 + 0x3c);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_100a67a4 + 4));
  }
  return iVar2;
}
