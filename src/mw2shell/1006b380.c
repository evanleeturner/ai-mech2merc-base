/* SPDX-License-Identifier: MIT */
/* mw2shell 1006b380 */
/* mw2shell 1006b380: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined * DAT_10083508;
int __cdecl FUN_1000d000(int param_1);

void __cdecl FUN_1006b380(int param_1, int param_2, int param_3, char param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_3 * 0x12;
  iVar2 = *(int *)(iVar1 + 0x760 + param_2) - *(int *)(iVar1 + 0x760 + param_1);
  FUN_1000d000(iVar2);
  if ((param_4 != '\x01') &&
     (*(undefined4 *)(iVar1 + 0x760 + param_1) = *(undefined4 *)(iVar1 + 0x760 + param_2), 0 < iVar2
     )) {
    *(undefined1 *)(param_1 + 0x84c) = 1;
    *DAT_10083508 = 1;
  }
  return;
}
