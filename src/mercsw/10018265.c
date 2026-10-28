/* SPDX-License-Identifier: MIT */
/* mercsw 10018265 */
/* mercsw 10018265: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aae5c;
extern undefined4 DAT_100aae60;
extern undefined4 PTR_DAT_100aaf68;
undefined __cdecl FUN_10017f0b(int param_1, int param_2, int param_3, int param_4, int param_5);

void __cdecl FUN_10018265(int param_1, int param_2, int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int local_28;
  int local_20;
  int local_1c;
  int local_c;
  
  iVar1 = *(int *)PTR_DAT_100aaf68;
  iVar2 = *(int *)(PTR_DAT_100aaf68 + 8);
  if (iVar1 < 0) {
    local_1c = iVar1 / DAT_100aae5c + -1;
  }
  else {
    local_1c = iVar1 / DAT_100aae5c;
  }
  if (iVar2 < 0) {
    local_20 = iVar2 / DAT_100aae5c + -1;
  }
  else {
    local_20 = iVar2 / DAT_100aae5c;
  }
  FUN_10017f0b(param_1,param_2,param_3,local_1c,local_20);
  if (iVar1 < 0) {
    local_28 = -1;
  }
  else {
    local_28 = 1;
  }
  if (iVar2 < 0) {
    local_c = -1;
  }
  else {
    local_c = 1;
  }
  uVar3 = (iVar1 % DAT_100aae5c) / DAT_100aae60;
  uVar5 = (int)uVar3 >> 0x1f;
  uVar4 = (iVar2 % DAT_100aae5c) / DAT_100aae60;
  uVar6 = (int)uVar4 >> 0x1f;
  switch(((uVar3 ^ uVar5) - uVar5) * 2 + ((uVar4 ^ uVar6) - uVar6)) {
  case 0:
    FUN_10017f0b(param_1,param_2,param_3,local_1c - local_28,local_20);
    FUN_10017f0b(param_1,param_2,param_3,local_1c - local_28,local_20 - local_c);
    FUN_10017f0b(param_1,param_2,param_3,local_1c,local_20 - local_c);
    break;
  case 1:
    FUN_10017f0b(param_1,param_2,param_3,local_1c - local_28,local_20);
    FUN_10017f0b(param_1,param_2,param_3,local_1c - local_28,local_c + local_20);
    FUN_10017f0b(param_1,param_2,param_3,local_1c,local_c + local_20);
    break;
  case 2:
    FUN_10017f0b(param_1,param_2,param_3,local_28 + local_1c,local_20);
    FUN_10017f0b(param_1,param_2,param_3,local_28 + local_1c,local_20 - local_c);
    FUN_10017f0b(param_1,param_2,param_3,local_1c,local_20 - local_c);
    break;
  case 3:
    FUN_10017f0b(param_1,param_2,param_3,local_28 + local_1c,local_20);
    FUN_10017f0b(param_1,param_2,param_3,local_28 + local_1c,local_c + local_20);
    FUN_10017f0b(param_1,param_2,param_3,local_1c,local_c + local_20);
  }
  return;
}
