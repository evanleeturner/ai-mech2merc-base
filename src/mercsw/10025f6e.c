/* SPDX-License-Identifier: MIT */
/* mercsw 10025f6e */
/* mercsw 10025f6e: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __cdecl FUN_10025f6e(int * param_1, int param_2, int param_3, int param_4, int param_5, int * param_6);
undefined4 __cdecl FUN_100150df(int param_1, int param_2, int param_3, int param_4);
bool __cdecl FUN_100141fb(int param_1, int param_2, int param_3, int param_4, int param_5, int * param_6);

undefined4 __cdecl FUN_10025f6e(int * param_1, int param_2, int param_3, int param_4, int param_5, int * param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_10;
  int *local_c;
  
  if (param_1 == (int *)0x0) {
    uVar1 = 0;
  }
  else if ((((param_3 < *param_1) || (param_1[1] < param_3)) || (param_5 < param_1[4])) ||
          (param_1[5] < param_5)) {
    uVar1 = 0;
  }
  else if (param_1[6] == 0) {
    iVar2 = FUN_10025f6e((int *)param_1[7],param_2,param_3,param_4,param_5,param_6);
    if (iVar2 == 0) {
      iVar2 = FUN_10025f6e((int *)param_1[8],param_2,param_3,param_4,param_5,param_6);
      if (iVar2 == 0) {
        iVar2 = FUN_10025f6e((int *)param_1[9],param_2,param_3,param_4,param_5,param_6);
        if (iVar2 == 0) {
          iVar2 = FUN_10025f6e((int *)param_1[10],param_2,param_3,param_4,param_5,param_6);
          if (iVar2 == 0) {
            *param_6 = 0;
            uVar1 = 1;
          }
          else {
            uVar1 = 1;
          }
        }
        else {
          uVar1 = 1;
        }
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    local_c = param_1 + 0xb;
    for (local_10 = 0; local_10 < param_1[6]; local_10 = local_10 + 1) {
      iVar2 = *local_c;
      local_c = local_c + 1;
      if ((0 < *(int *)(iVar2 + 0x18)) &&
         (iVar3 = FUN_100150df(iVar2,param_2 + 0x18,param_3,param_5), iVar3 != 0)) {
        FUN_100141fb(iVar2,param_2 + 0x18,param_3,param_4,param_5,param_6);
        return 1;
      }
    }
    *param_6 = 0;
    uVar1 = 1;
  }
  return uVar1;
}
