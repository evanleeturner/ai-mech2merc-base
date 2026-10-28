/* SPDX-License-Identifier: MIT */
/* mercsw 100592ef */
/* mercsw 100592ef: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __cdecl FUN_10058e74(int * param_1, undefined1 param_2);
undefined4 __cdecl FUN_10058f53(int * param_1, int param_2, int param_3, int * param_4, int param_5, int param_6, uint param_7);

int __cdecl FUN_100592ef(uint * * param_1, uint param_2, uint param_3, int param_4, uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_48;
  uint **local_30;
  uint *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  (void)local_28;
  (void)local_24;
  (void)local_14;
  (void)local_10;
  iVar1 = ((int)param_1[3] + 1) - (int)param_1[1];
  if (iVar1 != 0 && (int)param_1[1] <= (int)param_1[3] + 1) {
    iVar3 = ((int)param_1[4] + 1) - (int)param_1[2];
    if (iVar3 != 0 && (int)param_1[2] <= (int)param_1[4] + 1) {
      iVar2 = -iVar1;
      iVar4 = -iVar3;
      if (param_4 == 1) {
        if (param_5 == 0) {
          return iVar1 * iVar3;
        }
        local_30 = &local_2c;
        local_18 = param_5;
        local_2c = &local_18;
        local_28 = 0;
        local_24 = 0;
        local_20 = iVar1 + -1;
        local_1c = iVar3 + -1;
        local_14 = local_20;
        local_10 = local_1c;
        FUN_10058f53((int *)param_1,0,0,(int *)local_30,0,0,0xffffffff);
        param_2 = (int)param_2 % iVar1;
        param_3 = (int)param_3 % iVar3;
        local_48 = 0xffffffff;
      }
      else {
        if ((iVar1 <= (int)((param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f))) ||
           (iVar3 <= (int)((param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f)))) {
          iVar1 = FUN_10058e74((int *)param_1,(char)param_5);
          return iVar1;
        }
        local_30 = param_1;
        local_48 = param_5;
      }
      if (param_2 != 0 || param_3 != 0) {
        FUN_10058f53((int *)local_30,0,0,(int *)param_1,param_2,param_3,0xffffffff);
        FUN_10058f53((int *)local_30,iVar1,iVar3,(int *)param_1,param_2,param_3,local_48);
        FUN_10058f53((int *)local_30,iVar1,0,(int *)param_1,param_2,param_3,local_48);
        FUN_10058f53((int *)local_30,iVar1,iVar4,(int *)param_1,param_2,param_3,local_48);
        FUN_10058f53((int *)local_30,0,iVar3,(int *)param_1,param_2,param_3,local_48);
        FUN_10058f53((int *)local_30,0,iVar4,(int *)param_1,param_2,param_3,local_48);
        FUN_10058f53((int *)local_30,iVar2,iVar3,(int *)param_1,param_2,param_3,local_48);
        FUN_10058f53((int *)local_30,iVar2,0,(int *)param_1,param_2,param_3,local_48);
        FUN_10058f53((int *)local_30,iVar2,iVar4,(int *)param_1,param_2,param_3,local_48);
      }
      return 0;
    }
  }
  return -2;
}
