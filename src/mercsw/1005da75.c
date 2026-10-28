/* SPDX-License-Identifier: MIT */
/* mercsw 1005da75 */
/* mercsw 1005da75: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_1005d9bf(int * param_1, undefined4 * param_2);

void __cdecl FUN_1005da75(int * param_1)

{
  undefined4 *local_8;
  
  for (local_8 = (undefined4 *)*param_1; local_8 != (undefined4 *)0x0;
      local_8 = (undefined4 *)local_8[5]) {
    FUN_1005d9bf(param_1,local_8);
  }
  return;
}
