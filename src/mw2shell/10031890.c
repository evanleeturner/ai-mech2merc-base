/* SPDX-License-Identifier: MIT */
/* mw2shell 10031890 */
/* mw2shell 10031890: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10092000;

int __cdecl FUN_10031890(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  if (0 < param_1) {
    iVar3 = 0;
    iVar2 = 8;
    do {
      iVar4 = 0xc;
      do {
        if (*(int *)(DAT_10092000 + 0x368 + iVar3) == param_1) {
          iVar1 = iVar1 + 1;
          *(undefined4 *)(DAT_10092000 + 0x368 + iVar3) = 0;
        }
        iVar3 = iVar3 + 4;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return iVar1;
}
