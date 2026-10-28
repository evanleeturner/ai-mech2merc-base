/* SPDX-License-Identifier: MIT */
/* mercsw 100267fd */
/* mercsw 100267fd: Ghidra's C, repaired by tools/ghidra_repair.py */

void __cdecl FUN_100267fd(undefined4 * param_1, undefined4 * param_2)

{
  int iVar1;
  
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}
