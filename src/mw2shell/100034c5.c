/* SPDX-License-Identifier: MIT */
/* mw2shell 100034c5 */
/* mw2shell 100034c5: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_10082128[];

void __cdecl FUN_100034c5(undefined4 * param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(DAT_10082128);
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}
