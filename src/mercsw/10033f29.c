/* SPDX-License-Identifier: MIT */
/* mercsw 10033f29 */
/* mercsw 10033f29: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100a7ba0[];
extern undefined DAT_100a7bb0[];
extern undefined DAT_100a7bc8[];
extern undefined DAT_100a7bec[];
extern undefined DAT_100a7bf0[];
undefined4 __cdecl FUN_10034b8e(int * param_1, int * param_2, int * param_3);
undefined __cdecl FUN_1003510c(int param_1, int param_2, int param_3);

undefined4 __cdecl FUN_10033f29(int * param_1, int param_2, int param_3, int param_4)

{
  int iVar1;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  (void)local_24;
  (void)local_20;
  (void)local_c;
  local_28 = 0;
  local_1c = param_1[0xf8] * 0x40 + param_1[0x15];
  iVar1 = *(int *)(local_1c + 4) * 0x68;
  local_20 = DAT_100a7ba0 + iVar1;
  if (*(int *)(local_1c + 8) == 1) {
    if (*(int *)(DAT_100a7bb0 + iVar1) == 3) {
      local_18 = 0x4f;
      local_14 = 0x52;
    }
    else {
      local_14 = 0x5b;
      local_18 = 0x58;
    }
    if (*(int *)(DAT_100a7bc8 + iVar1) == 0) {
      local_24 = 0x30000;
      local_c = 3;
      if (((((*(int *)(*param_1 + 0xdc) == 0) || ((*(byte *)(*param_1 + 0xdd) & 0x11) != 0)) ||
           (param_4 <= *(int *)(DAT_100a7bec + iVar1))) ||
          ((*(int *)(DAT_100a7bf0 + iVar1) <= param_4 || (0x2ffff < param_3)))) ||
         ((param_3 < -0x2ffff || ((2 < param_2 || (param_2 < -2)))))) {
        local_10 = local_14;
      }
      else {
        local_28 = 1;
        local_10 = local_18;
      }
    }
    else if ((*(ushort *)(param_1 + 0x110) & 0x80) == 0) {
      if ((*(ushort *)(param_1 + 0x110) & 0x8000) == 0) {
        local_10 = 0x52;
      }
      else {
        local_10 = 0x55;
      }
    }
    else {
      local_10 = 0x46;
    }
  }
  else {
    local_10 = 0x4c;
  }
  iVar1 = FUN_10034b8e(param_1,&local_8,&local_2c);
  if (iVar1 != 0) {
    FUN_1003510c(local_8,local_2c,local_10);
  }
  return local_28;
}
