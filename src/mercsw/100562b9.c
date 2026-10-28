/* SPDX-License-Identifier: MIT */
/* mercsw 100562b9 */
/* mercsw 100562b9: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100b1280[];

void __cdecl FUN_100562b9(undefined4 * param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(DAT_100b1280);
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}
