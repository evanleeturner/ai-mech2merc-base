/* SPDX-License-Identifier: MIT */
/* mw2shell 1005b3f0 */
/* mw2shell 1005b3f0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a50e8;

void __cdecl FUN_1005b3f0(byte * param_1, undefined1 * param_2)

{
  int iVar1;
  
  iVar1 = DAT_100a50e8 * 0x40 + 0x100c66a0;
  *param_2 = *(undefined1 *)((uint)*param_1 + iVar1);
  param_2[1] = *(undefined1 *)((uint)param_1[1] + iVar1);
  param_2[2] = *(undefined1 *)((uint)param_1[2] + iVar1);
  return;
}
