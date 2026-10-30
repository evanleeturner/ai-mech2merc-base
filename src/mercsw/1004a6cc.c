/* SPDX-License-Identifier: MIT */
/* mercsw 1004a6cc */
/* mercsw 1004a6cc: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b3904;
extern undefined4 DAT_100eef40[];
extern undefined DAT_100ef030[];
extern undefined DAT_100ef034[];
undefined __cdecl FUN_1000dde1(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4);
int __cdecl ApproxLength3_Likely(int param_1, int param_2, int param_3);
undefined4 __cdecl FUN_10002570(uint param_1, int param_2);
undefined __cdecl NormalizeVec3(uint * param_1, uint * param_2, uint * param_3);
int __cdecl FixedMul16(int param_1, int param_2);
undefined __stdcall FUN_10006d3e(void);
int __cdecl FUN_10006bbb(uint param_1);
undefined __cdecl FUN_1002f668(int param_1, int param_2, int param_3, int param_4, uint param_5);

void __cdecl FUN_1004a6cc(int param_1, int param_2, int param_3, int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  ushort *local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x34) < 0) {
    return;
  }
  if (*(int *)(param_1 + 0x38) == 0x200) {
    local_10 = DAT_100eef40[*(int *)(param_1 + 0x34)];
    if (((*(ushort *)(local_10 + 0x14) & 2) != 0) || ((*(ushort *)(local_10 + 0x14) & 4) != 0)) {
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined4 *)(param_1 + 0x38) = 0;
      return;
    }
    local_34 = *(int *)(local_10 + 0x50);
    local_8 = *(int *)(local_10 + 0x54);
    local_c = *(int *)(local_10 + 0x58);
  }
  else {
    if (*(int *)(param_1 + 0x38) != 0x400) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x34) * 0x40;
    local_20 = (ushort *)(DAT_100ef030 + iVar1);
    if ((*local_20 & 4) != 0) {
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined4 *)(param_1 + 0x38) = 0;
      return;
    }
    FUN_1000dde1(*(int *)(DAT_100ef034 + iVar1),(undefined4 *)(&local_34),(undefined4 *)(&local_8),(undefined4 *)(&local_c));
  }
  local_18 = local_34 - param_2;
  local_14 = local_8 - param_3;
  local_1c = local_c - param_4;
  local_24 = ApproxLength3_Likely(local_18,local_14,local_1c);
  if (local_24 < 0x65) {
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 0x8000;
  }
  local_18 = FUN_10002570(local_18,local_24);
  local_14 = FUN_10002570(local_14,local_24);
  local_1c = FUN_10002570(local_1c,local_24);
  local_28 = *(uint *)(param_1 + 0xc);
  local_2c = *(uint *)(param_1 + 0x10);
  local_30 = *(uint *)(param_1 + 0x14);
  NormalizeVec3(&local_28,&local_2c,&local_30);
  if ((*(byte *)(param_1 + 4) & 0x10) == 0) {
    *(uint *)(param_1 + 0x18) = local_18 - local_28;
    *(uint *)(param_1 + 0x1c) = local_14 - local_2c;
    *(uint *)(param_1 + 0x20) = local_1c - local_30;
  }
  else {
    iVar1 = FUN_10002570(DAT_100b3904,0x2d4);
    iVar2 = FixedMul16((local_18 - local_28) - *(int *)(param_1 + 0x18),iVar1);
    iVar3 = FixedMul16((local_14 - local_2c) - *(int *)(param_1 + 0x1c),iVar1);
    iVar1 = FixedMul16((local_1c - local_30) - *(int *)(param_1 + 0x20),iVar1);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar2;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + iVar3;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar1;
  }
  local_8 = FUN_10006d3e();
  local_34 = FUN_10006bbb(local_2c << 0xd);
  local_34 = -local_34;
  FUN_1002f668(*(int *)(param_1 + 0x30),local_34,local_8,0,0);
  return;
}
