/* SPDX-License-Identifier: MIT */
/* mercsw 100558df */
/* mercsw 100558df: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10160eb4;
extern undefined4 DAT_10160eb8;
extern undefined4 DAT_10160ec4;
extern undefined4 DAT_10160ee8;
int __cdecl FUN_1005558c(int param_1, int param_2, uint param_3, int param_4, int param_5, int param_6);
undefined8 __cdecl FUN_10055bc0(int param_1, int param_2, int param_3, int param_4, int param_5);
uint __cdecl FUN_10055b60(int param_1, int param_2, int param_3, byte param_4);

void __cdecl FUN_100558df(int * param_1, int * param_2, uint param_3, uint * param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int local_10;
  int local_c;
  
  uVar1 = FUN_1005558c(param_1[1],param_2[1],param_3,0,param_1[2],param_2[2]);
  param_4[2] = uVar1;
  uVar1 = param_4[2];
  uVar3 = FUN_10055bc0(param_1[4],param_2[4],param_3,param_1[3],param_2[3]);
  param_4[3] = (uint)uVar3;
  param_4[4] = param_3;
  uVar2 = FUN_10055b60(param_4[3],DAT_10160ec4,uVar1,(byte)DAT_10160eb4);
  *param_4 = uVar2;
  uVar1 = FUN_10055b60(DAT_10160ee8,param_3,uVar1,(byte)DAT_10160eb8);
  param_4[1] = uVar1;
  local_c = *param_1 - *param_2;
  if (local_c < 0) {
    local_c = -local_c;
  }
  local_10 = param_1[1] - param_2[1];
  if (local_10 < 0) {
    local_10 = -local_10;
  }
  if (local_c < local_10) {
    uVar3 = FUN_10055bc0(param_1[1],param_2[1],param_4[1],param_1[5],param_2[5]);
    param_4[5] = (uint)uVar3;
    uVar3 = FUN_10055bc0(param_1[1],param_2[1],param_4[1],param_1[6],param_2[6]);
    param_4[6] = (uint)uVar3;
    uVar3 = FUN_10055bc0(param_1[1],param_2[1],param_4[1],param_1[0xb],param_2[0xb]);
    param_4[0xb] = (uint)uVar3;
  }
  else if (local_c == 0) {
    param_4[5] = ((int)((unsigned int)(param_2[5]) + (unsigned int)(param_1[5]))) >> 1;
    param_4[6] = ((int)((unsigned int)(param_2[6]) + (unsigned int)(param_1[6]))) >> 1;
    param_4[0xb] = ((int)((unsigned int)(param_2[0xb]) + (unsigned int)(param_1[0xb]))) >> 1;
  }
  else {
    uVar3 = FUN_10055bc0(*param_1,*param_2,*param_4,param_1[5],param_2[5]);
    param_4[5] = (uint)uVar3;
    uVar3 = FUN_10055bc0(*param_1,*param_2,*param_4,param_1[6],param_2[6]);
    param_4[6] = (uint)uVar3;
    uVar3 = FUN_10055bc0(*param_1,*param_2,*param_4,param_1[0xb],param_2[0xb]);
    param_4[0xb] = (uint)uVar3;
  }
  return;
}
