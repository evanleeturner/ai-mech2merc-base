/* SPDX-License-Identifier: MIT */
/* mw2shell 1006b3f0 */
/* mw2shell 1006b3f0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aa6b8;

int __stdcall FUN_1006b3f0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = -1;
  do {
    if (*(int *)(DAT_100aa6b8 + 0x2f0 + iVar1 * 8) == -1) {
      iVar2 = iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xe);
  iVar1 = 0xd;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}
