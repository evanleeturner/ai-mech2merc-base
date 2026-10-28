/* SPDX-License-Identifier: MIT */
/* mercsw 1003b59a */
/* mercsw 1003b59a: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aefa8;
extern undefined DAT_10165950[];
extern undefined DAT_101665d0[];
uint __cdecl FUN_1003c170(int param_1, int param_2, int param_3);
int __cdecl FUN_10003d60(int param_1, int param_2);
undefined4 __cdecl FUN_10011e60(int param_1, int param_2, int param_3);
int __cdecl FUN_10015b30(int param_1, int param_2);
undefined __cdecl FUN_1003c1f0(uint * param_1, uint * param_2, short * param_3, uint param_4, uint param_5);

void __cdecl FUN_1003b59a(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  int local_54;
  int local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  int local_3c;
  int local_38;
  short local_34 [2];
  short local_30 [2];
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_38 = param_1;
  local_60 = *(uint *)(param_1 + 0x18);
  local_1c = *(int *)(param_1 + 0x44);
  local_44 = (int)*(short *)(param_1 + 0x4c);
  local_2c = (int)*(short *)(param_1 + 0x50);
  local_50 = *(int *)(param_1 + 0x34);
  local_c = *(int *)(param_1 + 0x38);
  local_20 = *(int *)(param_1 + 0x2c);
  local_18 = *(int *)(param_1 + 0x30);
  local_8 = (((int)(((unsigned int)(local_18) + (unsigned int)(local_20)) + (unsigned int)(1))) >> 1) + local_44;
  *(int *)(param_1 + 0x8c) = local_8;
  local_14 = (((int)(((unsigned int)(local_c) + (unsigned int)(local_50)) + (unsigned int)(1))) >> 1) + local_2c;
  *(int *)(param_1 + 0x90) = local_14;
  local_4c = ((int)(((unsigned int)(local_18) - (unsigned int)(local_20)) + (unsigned int)(1))) >> 1;
  if ((int)local_4c < 2) {
    local_4c = 1;
  }
  *(uint *)(param_1 + 0x84) = local_4c;
  local_54 = ((int)(((unsigned int)(local_c) - (unsigned int)(local_50)) + (unsigned int)(1))) >> 1;
  if (local_54 < 2) {
    local_54 = 1;
  }
  *(int *)(param_1 + 0x88) = local_54;
  if (0x100000 < (int)local_60) {
    local_60 = 0x100000;
  }
  if ((int)local_60 < 0x8000) {
    local_60 = 0x8000;
  }
  local_64 = FUN_1003c170(local_60,local_4c,local_44);
  local_48 = FUN_1003c170(local_60,local_4c,-local_44);
  uVar3 = local_4c;
  iVar2 = local_54;
  iVar1 = FUN_10003d60(local_60,local_1c);
  local_3c = FUN_10011e60(iVar1,uVar3,iVar2);
  *(int *)(local_38 + 0xb0) = local_3c;
  local_10 = FUN_1003c170(local_3c,local_54,local_2c);
  local_40 = FUN_1003c170(local_3c,local_54,-local_2c);
  if (799 < (int)local_64) {
    local_64 = 799;
  }
  if (799 < (int)local_48) {
    local_48 = 799;
  }
  if (799 < (int)local_10) {
    local_10 = 799;
  }
  if (799 < (int)local_40) {
    local_40 = 799;
  }
  iVar2 = FUN_10015b30(local_60,*(int *)(DAT_10165950 + local_64 * 4));
  *(int *)(local_38 + 0xa8) = iVar2 + (*(int *)(DAT_101665d0 + local_64 * 4) >> 0xd);
  iVar2 = FUN_10015b30(local_3c,*(int *)(DAT_10165950 + local_10 * 4));
  *(int *)(local_38 + 0xac) = iVar2 + (*(int *)(DAT_101665d0 + local_10 * 4) >> 0xd);
  local_30[0] = 2;
  local_34[0] = 2;
  uVar3 = FUN_10003d60(local_60,local_1c);
  FUN_1003c1f0(&local_28,&local_5c,local_30,local_4c,uVar3);
  FUN_1003c1f0(&local_24,&local_58,local_34,local_4c,local_60);
  *(int *)(local_38 + 0x3c) = ((int)local_24 >> 0x11) + 1;
  *(undefined4 *)(local_38 + 0xb4) = *(undefined4 *)(local_38 + 0x40);
  *(short *)(local_38 + 0xa4) = local_34[0];
  *(short *)(local_38 + 0xa6) = local_30[0];
  *(uint *)(local_38 + 0x9c) = local_58;
  *(uint *)(local_38 + 0xa0) = local_5c;
  *(uint *)(local_38 + 0x94) = local_24;
  *(uint *)(local_38 + 0x98) = local_28;
  if (DAT_100aefa8 < 1) {
    DAT_100aefa8 = 1;
  }
  *(int *)(local_38 + 0xb8) = (int)local_24 / (DAT_100aefa8 * 0xa0);
  return;
}
