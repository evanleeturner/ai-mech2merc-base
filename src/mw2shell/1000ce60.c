/* SPDX-License-Identifier: MIT */
/* mw2shell 1000ce60 */
/* mw2shell 1000ce60: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a67a4;
undefined4 __cdecl FUN_10018060(int param_1, int param_2);
int __cdecl FUN_1000ad70(int param_1, int param_2);

int __cdecl FUN_1000ce60(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  if (0 < *(int *)(DAT_100a67a4 + 4)) {
    while (iVar1 = FUN_10018060(DAT_100a67a4,iVar2), *(char *)(iVar1 + 0x2064) != '\x01') {
      iVar2 = iVar2 + 1;
      if (*(int *)(DAT_100a67a4 + 4) <= iVar2) {
        return 0;
      }
    }
    iVar1 = FUN_1000ad70(param_1,*(int *)(iVar1 + 0x24));
  }
  return iVar1;
}
