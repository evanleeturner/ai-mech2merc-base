/* SPDX-License-Identifier: MIT */
/* mercsw 100497e6 */
/* mercsw 100497e6: Ghidra's C, repaired by tools/ghidra_repair.py */

bool __cdecl FUN_100497e6(int param_1, undefined4 param_2)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0xc) < 8;
  if (bVar1) {
    *(undefined4 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 4) = param_2;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  return bVar1;
}
