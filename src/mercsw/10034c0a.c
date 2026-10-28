/* SPDX-License-Identifier: MIT */
/* mercsw 10034c0a */
/* mercsw 10034c0a: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 PTR_DAT_100aaf68;
undefined4 __cdecl FUN_1003ba89(int * param_1, int * param_2, int * param_3);
int * __cdecl FUN_10066f36(int param_1, int * param_2, int * param_3);
undefined4 __cdecl FUN_10034495(int param_1, int param_2, undefined4 param_3, int param_4, int param_5);
undefined __cdecl FUN_1003510c(int param_1, int param_2, int param_3);
int __cdecl FUN_1000f1c0(int param_1, int param_2, int param_3);

void __cdecl FUN_10034c0a(int param_1, int param_2)

{
  int iVar1;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_20 = *(int *)(param_1 + 0x50);
  local_24 = *(int *)(param_1 + 0x54);
  local_28 = *(int *)(param_1 + 0x58);
  iVar1 = FUN_1003ba89(&local_20,&local_24,&local_28);
  if (iVar1 == 0) {
    local_34 = local_20;
    local_30 = local_24;
    FUN_10066f36(0x101f52e0,&local_34,&local_34);
    if (param_2 == 0) {
      local_8 = 0xca;
    }
    else if (param_2 == 2) {
      local_8 = 0xcd;
    }
    else {
      local_8 = 199;
    }
    FUN_10034495(1,*(int *)(param_1 + 4),local_20,local_24,param_2);
    FUN_1003510c(local_34,local_30,local_8);
  }
  else {
    local_2c = *(int *)(*(int *)(param_1 + 0x20) + 0x41c);
    local_2c = FUN_1000f1c0(*(int *)(PTR_DAT_100aaf68 + 0x94),local_2c,local_28);
    if (param_2 == 0) {
      local_8 = 0x97;
      local_c = 0xa0;
      local_10 = 0xa9;
      local_14 = 0xb2;
    }
    else if (param_2 == 1) {
      local_8 = 0x9a;
      local_c = 0xa3;
      local_10 = 0xac;
      local_14 = 0xb5;
    }
    else if (param_2 == 2) {
      local_8 = 0x9d;
      local_c = 0xa6;
      local_10 = 0xaf;
      local_14 = 0xb8;
    }
    iVar1 = FUN_10034495(0,*(int *)(param_1 + 4),local_20,local_24,param_2);
    if (iVar1 != 0) {
      local_18 = local_20 - local_2c;
      local_1c = local_24 - local_2c;
      FUN_1003510c(local_18,local_1c,local_8);
      local_18 = local_20 + local_2c;
      local_1c = local_24 - local_2c;
      FUN_1003510c(local_18,local_1c,local_c);
      local_18 = local_20 - local_2c;
      local_1c = local_24 + local_2c;
      FUN_1003510c(local_18,local_1c,local_10);
      local_18 = local_20 + local_2c;
      local_1c = local_24 + local_2c;
      FUN_1003510c(local_18,local_1c,local_14);
    }
  }
  return;
}
