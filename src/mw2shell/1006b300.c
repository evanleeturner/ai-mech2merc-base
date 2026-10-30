/* SPDX-License-Identifier: MIT */
/* mw2shell 1006b300 */
/* mw2shell 1006b300: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined * DAT_10083508;
int __cdecl MultiplyBy625(int param_1);

void __cdecl FUN_1006b300(int param_1, int param_2, int param_3, char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_3 * 0x12;
  iVar1 = iVar3 + 0x760 + param_1;
  iVar2 = param_2 + 0x760 + iVar3;
  iVar3 = ((*(int *)(param_2 + 0x76c + iVar3) - *(int *)(iVar3 + 0x768 + param_1)) -
          *(int *)(iVar1 + 0xc)) + *(int *)(iVar2 + 8);
  MultiplyBy625(iVar3);
  if (param_4 != '\x01') {
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar2 + 8);
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar2 + 0xc);
    if (0 < iVar3) {
      *(undefined1 *)(param_1 + 0x84c) = 1;
      *DAT_10083508 = 1;
    }
  }
  return;
}
