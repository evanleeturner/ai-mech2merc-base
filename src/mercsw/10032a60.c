/* SPDX-License-Identifier: MIT */
/* mercsw 10032a60 */
/* mercsw 10032a60: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_10032959(float param_1, float param_2, float param_3, undefined4 * param_4, undefined4 * param_5, undefined4 * param_6);

void __cdecl FUN_10032a60(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9, undefined4 * param_10, undefined4 * param_11, undefined4 * param_12)

{
  FUN_10032959((param_9 - param_2) * (param_5 - param_2) - (param_8 - param_2) * (param_6 - param_3)
               ,(param_9 - param_2) * (param_4 - param_1) -
                (param_7 - param_1) * (param_6 - param_3),
               (param_8 - param_2) * (param_4 - param_1) - (param_7 - param_1) * (param_5 - param_2)
               ,param_10,param_11,param_12);
  return;
}
