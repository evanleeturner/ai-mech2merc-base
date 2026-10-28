/* SPDX-License-Identifier: MIT */
/* mercsw 10039980 */
/* mercsw 10039980: Ghidra's C, repaired by tools/ghidra_repair.py */

int __cdecl FUN_10039980(int param_1)

{
  int iVar1;
  
  if ((param_1 == 0) || (0x2c < *(int *)(param_1 + 0x754))) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x758 + *(int *)(param_1 + 0x754) * 4) * 0x24 + param_1 + 0xfc;
    *(int *)(param_1 + 0x754) = *(int *)(param_1 + 0x754) + 1;
  }
  return iVar1;
}
