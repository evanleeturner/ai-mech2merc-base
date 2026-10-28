/* SPDX-License-Identifier: MIT */
/* mercsw 1002fc82 */
/* mercsw 1002fc82: Ghidra's C, repaired by tools/ghidra_repair.py */

void __cdecl FUN_1002fc82(int param_1, undefined4 * param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0xc);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}
