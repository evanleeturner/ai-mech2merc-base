/* SPDX-License-Identifier: MIT */
/* mercsw 1005dadc */
/* mercsw 1005dadc: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_1005dab8(undefined4 param_1, undefined4 * param_2);

void __cdecl FUN_1005dadc(undefined4 * param_1)

{
  undefined4 *local_8;
  
  for (local_8 = (undefined4 *)*param_1; local_8 != (undefined4 *)0x0;
      local_8 = (undefined4 *)local_8[5]) {
    FUN_1005dab8((undefined4)(param_1),local_8);
  }
  return;
}
