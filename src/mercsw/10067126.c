/* SPDX-License-Identifier: MIT */
/* mercsw 10067126 */
/* mercsw 10067126: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __cdecl FUN_10002570(uint param_1, int param_2);
int __cdecl FUN_10003d60(int param_1, int param_2);

int * __cdecl FUN_10067126(int * param_1, undefined4 param_2, int param_3, int * param_4)

{
  int iVar1;
  int local_1c;
  int local_18;
  int local_10;
  
  local_1c = *param_1 * 2;
  local_18 = param_1[1] * 2;
  if (*param_1 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = FUN_10002570(param_1[1],*param_1);
  }
  switch(param_2) {
  case 0:
    if (local_10 < param_3) {
      local_1c = FUN_10002570(param_1[1],param_3);
      local_1c = *param_1 + local_1c;
    }
    else {
      local_18 = FUN_10003d60(*param_1,param_3);
      local_18 = param_1[1] + local_18;
    }
    break;
  case 1:
    if (param_3 < -local_10) {
      local_1c = FUN_10002570(param_1[1],param_3);
      local_1c = *param_1 + local_1c;
    }
    else {
      local_1c = 0;
      local_18 = param_1[1];
      iVar1 = FUN_10003d60(*param_1,param_3);
      local_18 = local_18 - iVar1;
    }
    break;
  case 2:
    if (param_3 < -local_10) {
      local_18 = 0;
      local_1c = *param_1;
      iVar1 = FUN_10002570(param_1[1],param_3);
      local_1c = local_1c - iVar1;
    }
    else {
      local_18 = FUN_10003d60(*param_1,param_3);
      local_18 = param_1[1] + local_18;
    }
    break;
  case 3:
    if (local_10 < param_3) {
      local_18 = 0;
      local_1c = *param_1;
      iVar1 = FUN_10002570(param_1[1],param_3);
      local_1c = local_1c - iVar1;
    }
    else {
      local_1c = 0;
      local_18 = param_1[1];
      iVar1 = FUN_10003d60(*param_1,param_3);
      local_18 = local_18 - iVar1;
    }
    break;
  default:
    local_18 = 0;
    local_1c = 0;
    break;
  case 5:
    local_1c = *param_1;
    break;
  case 7:
    local_18 = 0;
    local_1c = *param_1;
  }
  *param_4 = local_1c;
  param_4[1] = local_18;
  return param_4;
}
