/* SPDX-License-Identifier: MIT */
/* mercsw 10040f45 */
/* mercsw 10040f45: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100af3f8[];

void __cdecl FUN_10040f45(undefined4 * param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(DAT_100af3f8);
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}
