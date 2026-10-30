/* SPDX-License-Identifier: MIT */
/* mercsw 1006416e */
/* mercsw 1006416e: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __stdcall FUN_10006d3e(void);
int __cdecl FUN_10006bbb(uint param_1);
undefined __cdecl FUN_1002f668(int param_1, int param_2, int param_3, int param_4, uint param_5);
undefined __cdecl FUN_100640ee(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4);
int __cdecl FUN_10051f43(int param_1);
undefined __cdecl NormalizeVec3(uint * param_1, uint * param_2, uint * param_3);
int __cdecl FixedMul16(int param_1, int param_2);
undefined __cdecl FUN_1002f37a(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4);
undefined __cdecl FUN_1002f3a7(int param_1, int param_2, int param_3, int param_4);

void __cdecl FUN_1006416e(int param_1, int param_2, uint param_3, int param_4, int param_5, int param_6, int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_18 = FUN_10006d3e();
  local_14 = FUN_10006bbb((int)((unsigned int)(param_4) << (0xd)));
  FUN_1002f668(param_2,-local_14,local_18,0,0);
  FUN_100640ee(param_1,(undefined4 *)(&local_8),(undefined4 *)(&local_c),(undefined4 *)(&local_10));
  if (param_6 != 0) {
    local_24 = FUN_10051f43(200);
    local_24 = local_24 + -100;
    local_34 = -param_5;
    local_38 = 0;
    local_20 = param_3;
    NormalizeVec3(&local_34,&local_38,&local_20);
    iVar1 = FixedMul16(local_24,local_34);
    local_8 = local_8 + iVar1;
    iVar1 = FixedMul16(local_24,local_20);
    local_10 = local_10 + iVar1;
    local_28 = FixedMul16(param_4,local_20);
    iVar1 = FixedMul16(local_20,param_3);
    local_2c = FixedMul16(param_5,local_34);
    local_2c = iVar1 + local_2c;
    local_30 = FixedMul16(local_34,param_4);
    local_30 = -local_30;
    iVar1 = FixedMul16(local_24,local_28);
    local_8 = local_8 + iVar1;
    iVar1 = FixedMul16(local_24,local_2c);
    local_c = local_c + iVar1;
    iVar1 = FixedMul16(local_24,local_30);
    local_10 = local_10 + iVar1;
  }
  FUN_1002f37a(param_2,local_8,local_c,local_10);
  if ((*(byte *)(param_7 + 8) & 0x40) == 0) {
    local_1c = *(int *)(*(int *)(param_2 + 0x6c) + 0x40) * 2;
    iVar1 = FixedMul16(param_3,local_1c);
    iVar2 = FixedMul16(param_4,local_1c);
    iVar3 = FixedMul16(param_5,local_1c);
    FUN_1002f3a7(param_2,iVar1,iVar2,iVar3);
  }
  return;
}
