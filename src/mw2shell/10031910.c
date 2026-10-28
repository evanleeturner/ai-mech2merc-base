/* SPDX-License-Identifier: MIT */
/* mw2shell 10031910 */
/* mw2shell 10031910: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10092000;

void __cdecl FUN_10031910(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(DAT_10092000 + 0x2f0 + iVar1) == param_1) {
      *(undefined4 *)(DAT_10092000 + 0x2f0 + iVar1) = 0xffffffff;
      *(undefined4 *)(DAT_10092000 + 0x2f4 + iVar1) = 0xffffffff;
    }
    iVar1 = iVar1 + 8;
  } while (iVar1 < 0x70);
  return;
}
