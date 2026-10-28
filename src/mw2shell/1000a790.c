/* SPDX-License-Identifier: MIT */
/* mw2shell 1000a790 */
/* mw2shell 1000a790: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_10084c58[];
extern undefined DAT_10084c5c[];

void __cdecl FUN_1000a790(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x20c);
  iVar2 = (iVar1 % 10000) * 0x10;
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(DAT_10084c58 + iVar2);
  iVar2 = *(int *)(DAT_10084c5c + iVar2);
  *(int *)(param_1 + 0x214) = iVar2;
  if (9999 < iVar1) {
    *(int *)(param_1 + 0x214) = iVar2 / 2;
  }
  *(uint *)(param_1 + 0x218) = (iVar1 < 10000) - 1 & 7;
  *(int *)(param_1 + 0x21c) = *(int *)(param_1 + 0x200) - *(int *)(param_1 + 0x214);
  return;
}
