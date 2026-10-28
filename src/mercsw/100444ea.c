/* SPDX-License-Identifier: MIT */
/* mercsw 100444ea */
/* mercsw 100444ea: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100af4f8[];
extern undefined DAT_100af4fc[];
int __cdecl FUN_1002fc9d(int param_1);
undefined __cdecl FUN_10089060(int * param_1, int * param_2, int * param_3, int * param_4);
undefined __cdecl FUN_100261f0(int * param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7);
int __cdecl FUN_1000fc30(int param_1, int param_2, int param_3);
undefined __cdecl FUN_10026423(int param_1);
undefined __cdecl FUN_1002637d(int param_1);

void __cdecl FUN_100444ea(int param_1, int * param_2, int param_3, short param_4, int param_5, int param_6)

{
  int iVar1;
  uint uVar2;
  int local_2c;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_20 = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  local_8 = (int *)FUN_1002fc9d(*(int *)(param_1 + 0x40));
  if (param_3 < 0) {
    uVar2 = (int)(0x10U - (int)param_4) >> 0x1f;
    local_28 = (((0x10U - (int)param_4 ^ uVar2) - uVar2 & 0xf) ^ uVar2) - uVar2;
  }
  else {
    local_28 = (int)param_4;
  }
  local_14 = *(int *)(DAT_100af4f8 + local_28 * 8);
  if (param_3 < 0) {
    uVar2 = (int)(0x10U - (int)param_4) >> 0x1f;
    local_2c = (((0x10U - (int)param_4 ^ uVar2) - uVar2 & 0xf) ^ uVar2) - uVar2;
  }
  else {
    local_2c = (int)param_4;
  }
  local_1c = *(int *)(DAT_100af4fc + local_2c * 8);
  if (local_14 != 0) {
    local_14 = param_5 / local_14;
  }
  if (local_1c != 0) {
    local_1c = param_5 / local_1c;
  }
  FUN_10089060(local_8,&local_14,&local_20,&local_1c);
  if (param_6 == 0) {
    local_10 = *(int *)(param_1 + 0x54);
    local_c = *(int *)(param_1 + 0x50);
    local_18 = *(int *)(param_1 + 0x58);
  }
  else {
    if (param_3 < 0) {
      local_c = 1 - *(int *)(iVar1 + 0x41c);
    }
    else {
      local_c = *(int *)(iVar1 + 0x41c) + -1;
    }
    local_18 = 0;
    FUN_10089060(local_8,&local_c,&local_20,&local_18);
    local_10 = *(int *)(param_1 + 0x54);
  }
  FUN_100261f0(param_2,local_c,local_10,local_18,local_14,local_10,local_1c);
  iVar1 = FUN_1000fc30(local_14 - local_c,0,local_1c - local_18);
  if (iVar1 < 0xbb9) {
    FUN_1002637d((int)param_2);
  }
  else {
    FUN_10026423((int)param_2);
  }
  return;
}
