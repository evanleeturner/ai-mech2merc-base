/* SPDX-License-Identifier: MIT */
/* mw2shell 1006b420 */
/* mw2shell 1006b420: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aa6b8;

int __stdcall FUN_1006b420(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = -1;
  do {
    if (*(int *)(DAT_100aa6b8 + 0x28c + iVar1 * 4) == -1) {
      iVar2 = iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x19);
  iVar1 = 0x18;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}
