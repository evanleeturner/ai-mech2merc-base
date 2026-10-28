/* SPDX-License-Identifier: MIT */
/* mw2shell 1006602f */
/* mw2shell 1006602f: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100aa2c8[];

void __cdecl FUN_1006602f(undefined4 * param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(DAT_100aa2c8);
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}
