/* SPDX-License-Identifier: MIT */
/* mw2shell 10012940 */
/* mw2shell 10012940: Ghidra's C, repaired by tools/ghidra_repair.py */

void __thiscall FUN_10012940(void * this, undefined4 * param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)((int)this + 0x92);
  for (iVar1 = 0xc0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}
