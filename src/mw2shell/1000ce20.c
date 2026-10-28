/* SPDX-License-Identifier: MIT */
/* mw2shell 1000ce20 */
/* mw2shell 1000ce20: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a67a4;
undefined4 __cdecl FUN_10018060(int param_1, int param_2);

int __stdcall FUN_1000ce20(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(DAT_100a67a4 + 4)) {
    do {
      iVar1 = FUN_10018060(DAT_100a67a4,iVar2);
      if (*(char *)(iVar1 + 0x2064) == '\x01') {
        return iVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(DAT_100a67a4 + 4));
  }
  return 0;
}
