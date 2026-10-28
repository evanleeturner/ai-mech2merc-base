/* SPDX-License-Identifier: MIT */
/* mercsw 10039454 */
/* mercsw 10039454: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ae744;
extern undefined4 DAT_100ae748;
extern undefined4 DAT_100ae74c;
extern undefined4 DAT_100ae750;
extern undefined4 DAT_100ae754;
extern int * DAT_100ae758;
extern int DAT_100c6ce0;
extern undefined4 DAT_100c6ce4;
extern int DAT_100c6ce8;
extern undefined4 DAT_100c6cf0;
extern undefined4 DAT_100c6cf4;
extern undefined4 DAT_100c6cf8;
extern undefined4 DAT_100c6cfc;
extern undefined4 PTR_DAT_100aaf68;
undefined __cdecl FUN_1002f783(int param_1);
undefined __cdecl FUN_1002f37a(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4);
undefined __cdecl FUN_1002fbc0(int * param_1);

void __stdcall FUN_10039454(void)

{
  uint uVar1;
  uint uVar2;
  int local_20;
  int local_1c;
  int local_14;
  int local_10;
  
  if ((DAT_100ae750 != 0) && (DAT_100ae748 != 0)) {
    local_20 = *(int *)PTR_DAT_100aaf68;
    local_1c = *(int *)(PTR_DAT_100aaf68 + 8);
    if (DAT_100ae754 == 0) {
      local_20 = local_20 / DAT_100ae744;
      local_1c = local_1c / DAT_100ae744;
    }
    else {
      uVar1 = (local_20 - DAT_100c6cf0) >> 0x1f;
      uVar2 = (local_1c - DAT_100c6cf8) >> 0x1f;
      if (((int)DAT_100c6cfc < (int)((local_20 - DAT_100c6cf0 ^ uVar1) - uVar1)) ||
         ((int)DAT_100c6cfc < (int)((local_1c - DAT_100c6cf8 ^ uVar2) - uVar2))) {
        local_10 = DAT_100ae744 >> 1;
        local_14 = local_10;
        if (local_20 < 0) {
          local_14 = -DAT_100ae744 >> 1;
        }
        if (local_1c < 0) {
          local_10 = -DAT_100ae744 >> 1;
        }
        local_20 = (local_14 + local_20) / DAT_100ae744;
        local_1c = (local_10 + local_1c) / DAT_100ae744;
      }
      else {
        local_20 = DAT_100c6ce0;
        local_1c = DAT_100c6ce8;
      }
    }
    if (DAT_100ae74c == 0) {
      FUN_1002f783((int)DAT_100ae758);
      DAT_100ae74c = 1;
    }
    if ((DAT_100c6ce0 != local_20) || (DAT_100c6ce8 != local_1c)) {
      DAT_100c6cf0 = local_20 * DAT_100ae744;
      DAT_100c6cf4 = 0;
      DAT_100c6cf8 = local_1c * DAT_100ae744;
      if (DAT_100ae758 != (int *)0x0) {
        FUN_1002f783((int)DAT_100ae758);
        FUN_1002f37a((int)DAT_100ae758,DAT_100c6cf0,DAT_100c6cf4,DAT_100c6cf8);
        FUN_1002fbc0(DAT_100ae758);
      }
    }
    DAT_100c6ce0 = local_20;
    DAT_100c6ce4 = 0;
    DAT_100c6ce8 = local_1c;
  }
  return;
}
