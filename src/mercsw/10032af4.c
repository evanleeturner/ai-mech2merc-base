/* SPDX-License-Identifier: MIT */
/* mercsw 10032af4 */
/* mercsw 10032af4: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_100329cf(float param_1, float param_2, float param_3, float param_4, undefined4 * param_5, undefined4 * param_6, undefined4 * param_7, undefined4 * param_8);

void __cdecl FUN_10032af4(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9, undefined4 * param_10, undefined4 * param_11, undefined4 * param_12, undefined4 * param_13)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (param_9 - param_2) * (param_5 - param_2) - (param_6 - param_3) * (param_8 - param_2);
  fVar2 = (param_4 - param_1) * (param_9 - param_2) - (param_6 - param_3) * (param_7 - param_1);
  fVar3 = (param_4 - param_1) * (param_8 - param_2) - (param_5 - param_2) * (param_7 - param_1);
  FUN_100329cf(fVar1,fVar2,fVar3,-(fVar2 * param_2 + fVar3 * param_3 + fVar1 * param_1),param_10,
               param_11,param_12,param_13);
  return;
}
