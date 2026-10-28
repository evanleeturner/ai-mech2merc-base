/* SPDX-License-Identifier: MIT */
/* mercsw 10055f9e */
/* mercsw 10055f9e: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100b1260[];
extern undefined DAT_100b1264[];
undefined4 __cdecl FUN_1005f040(int param_1, int param_2, uint * param_3, int param_4, int param_5, int param_6, int param_7);

uint __cdecl FUN_10055f9e(int param_1, int param_2, int * param_3, int param_4, int param_5)

{
  uint uVar1;
  uint uVar2;
  uint local_90;
  int local_8c;
  int aiStack_84 [4];
  int local_74;
  int local_60;
  int local_5c;
  int local_48;
  int local_44;
  int local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  (void)local_8c;
  (void)local_74;
  (void)local_60;
  (void)local_5c;
  (void)local_48;
  (void)local_44;
  local_24 = 0;
  local_30 = 0;
  local_18 = 0;
  if (param_2 < 2) {
    local_2c = 0;
  }
  else {
    for (local_1c = 0; (int)local_1c < 3; local_1c = local_1c + 1) {
      if (param_3[3] == 0) {
        if (param_3[4] == 0) {
          if (param_5 == 0) {
            local_8 = *param_3;
            local_c = param_3[1];
            local_24 = 1;
          }
        }
        else {
          local_10 = *param_3;
          local_20 = param_3[1];
          local_30 = 1;
          if (param_3[4] < 0) {
            local_18 = 1;
          }
        }
      }
      else {
        if (param_5 == 1) {
          local_8 = *param_3;
          local_c = param_3[1];
          local_24 = 1;
        }
        if (param_3[3] < 0) {
          local_18 = 1;
        }
      }
      param_3 = param_3 + 6;
    }
    if ((local_24 == 0) || (local_30 == 0)) {
      local_2c = 0;
    }
    else {
      local_2c = ((int)((unsigned int)(local_20) - (unsigned int)(local_c))) >> 1;
      local_28 = ((int)((unsigned int)(local_10) - (unsigned int)(local_8))) >> 1;
      if (param_5 == 0) {
        local_90 = local_8 - local_2c;
        local_8c = local_28 + local_c;
        aiStack_84[3] = local_2c + local_8;
        local_74 = local_c - local_28;
        uVar1 = local_2c;
        uVar2 = -local_28;
      }
      else {
        uVar2 = ((int)((unsigned int)(local_10) - (unsigned int)(local_8))) >> 0x1f;
        local_28 = (local_28 ^ uVar2) - uVar2;
        local_90 = local_10 - local_28;
        local_8c = local_20 - local_28;
        aiStack_84[3] = local_28 + local_10;
        local_74 = local_20 - local_28;
        uVar1 = local_28;
        uVar2 = local_28;
      }
      local_44 = local_28 + local_20;
      local_48 = local_10 - uVar1;
      local_5c = local_20 + uVar2;
      local_60 = uVar1 + local_10;
      for (local_1c = 0; (int)local_1c < 4; local_1c = local_1c + 1) {
        aiStack_84[local_1c * 6 + 1] = *(int *)(DAT_100b1264 + local_1c * 8);
        if (local_18 == 0) {
          aiStack_84[local_1c * 6] = *(int *)(DAT_100b1260 + local_1c * 8);
        }
        else {
          uVar2 = (int)local_1c >> 0x1f;
          if ((((local_1c ^ uVar2) - uVar2 & 1) ^ uVar2) == uVar2) {
            local_14 = 1;
          }
          else {
            local_14 = -1;
          }
          aiStack_84[local_1c * 6] = *(int *)(DAT_100b1260 + (local_14 + local_1c) * 8);
        }
      }
      FUN_1005f040(param_1,4,&local_90,param_4,1,0,0);
    }
  }
  return local_2c;
}
