/* SPDX-License-Identifier: MIT */
/* mercsw 1008980c */
/* mercsw 1008980c: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 * __cdecl FUN_10086973(undefined4 * param_1, undefined4 * param_2, uint param_3);

void __cdecl FUN_1008980c(undefined4 * param_1, undefined4 * param_2)

{
  FUN_10086973(param_2,param_1,0x30);
  param_2[0xb] = 0;
  param_2[10] = param_2[0xb];
  param_2[9] = param_2[10];
  return;
}
