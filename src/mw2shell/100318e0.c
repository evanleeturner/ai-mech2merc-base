/* SPDX-License-Identifier: MIT */
/* mw2shell 100318e0 */
/* mw2shell 100318e0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10092000;

void __cdecl FUN_100318e0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(DAT_10092000 + 0x28c + iVar1) == param_1) {
      *(undefined4 *)(DAT_10092000 + 0x28c + iVar1) = 0xffffffff;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 < 100);
  return;
}
