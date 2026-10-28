/* SPDX-License-Identifier: MIT */
/* mw2shell 10012270 */
/* mw2shell 10012270: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a7248;
extern undefined DAT_100b0b38[];

void __stdcall FUN_10012270(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(DAT_100b0b38);
  for (iVar1 = 0xc0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  ((void (*)(int, int, undefined *, int))((**(code **)(DAT_100a7248 + 0x14))))(0,0x100,DAT_100b0b38,1);
  return;
}
