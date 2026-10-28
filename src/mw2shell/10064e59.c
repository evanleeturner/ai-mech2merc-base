/* SPDX-License-Identifier: MIT */
/* mw2shell 10064e59 */
/* mw2shell 10064e59: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100a8a38[];

void __cdecl FUN_10064e59(undefined4 * param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(DAT_100a8a38);
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}
