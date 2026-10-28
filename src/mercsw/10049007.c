/* SPDX-License-Identifier: MIT */
/* mercsw 10049007 */
/* mercsw 10049007: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100eebbe;
extern undefined4 DAT_10160be4;
undefined4 __cdecl FUN_100497a9(int param_1);
undefined __cdecl FUN_10048ee3(int param_1, undefined4 param_2, undefined4 * param_3, undefined4 * param_4);
undefined __cdecl FUN_100037f0(uint param_1, undefined4 param_2, uint param_3, uint param_4, int param_5);
undefined __cdecl FUN_1005acaa(int * param_1, int param_2, int param_3, int param_4, byte * param_5, int param_6);
undefined __cdecl FUN_100666ad(int * param_1, undefined4 param_2, int param_3, int param_4, int param_5);
undefined __cdecl FUN_1006670a(int * param_1, char * param_2, int param_3, int param_4, int param_5, int param_6);
undefined4 __cdecl FUN_1005aae4(int param_1);
undefined4 __cdecl FUN_1005aaf7(int param_1, int param_2);
undefined4 __cdecl FUN_10056fc4(int * param_1, int param_2, int param_3, int param_4, int param_5);
char * __cdecl __itoa(int _Value, char * _Dest, int _Radix);
undefined4 __cdecl FUN_10049767(int param_1);
bool __cdecl FUN_100497e6(int param_1, undefined4 param_2);

void __cdecl FUN_10049007(int * param_1)

{
  int iVar1;
  int local_80;
  byte local_7c [40];
  int local_54;
  int local_50;
  int local_4c;
  int *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = 0x10;
  local_20 = 0;
  local_28 = 0;
  if ((((param_1 != (int *)0x0) && (local_2c = param_1[0xc], local_2c != 0)) &&
      (local_48 = (int *)FUN_100497a9((int)param_1), local_48 != (int *)0x0)) &&
     (local_30 = (int *)*param_1, local_30 != (int *)0x0)) {
    local_44 = local_48[4];
    local_80 = -1;
    for (local_34 = 0; local_34 < local_48[3]; local_34 = local_34 + 1) {
      if ((local_48[local_34 * 5 + 6] == 2) || (local_48[local_34 * 5 + 6] == 6)) {
        local_80 = local_34;
      }
      if (local_48[local_34 * 5 + 6] == 3) {
        local_14 = local_34;
        local_20 = 1;
      }
    }
    if (local_80 == -1) {
      local_20 = 0;
    }
    if (*local_48 == 0) {
      *local_48 = 1;
    }
    else {
      if (*local_48 == 1) {
        *local_48 = 2;
      }
      if (DAT_10160be4 != 0) {
        local_24 = DAT_10160be4;
        if ((0x2f < DAT_10160be4) && (DAT_10160be4 < 0x3a)) {
          local_10 = DAT_10160be4 + -0x30;
          if (local_10 == 0) {
            if (local_80 != -1) {
              local_44 = local_80;
              local_24 = 0xd;
            }
          }
          else if ((0 < local_10) && (local_10 < local_48[3] - local_20)) {
            if (local_14 < local_10) {
              DAT_10160be4 = DAT_10160be4 + 1;
              local_44 = local_10;
              if (0x39 < DAT_10160be4) {
                DAT_10160be4 = 0x30;
              }
            }
            else {
              local_44 = DAT_10160be4 + -0x31;
            }
            local_24 = 0xd;
          }
        }
        FUN_10048ee3(local_24,local_48[local_44 * 5 + 6],(undefined4 *)(local_48),(undefined4 *)(&local_28));
        if (local_28 != 0) {
          local_44 = (local_48[3] + local_44 + local_28) % local_48[3];
        }
        if ((local_48[4] != local_44) && (param_1[10] != -1)) {
          FUN_100037f0(0,0,0,param_1[10],0);
        }
      }
    }
    if (local_28 == 0) {
      local_28 = 1;
    }
    if (((local_48[local_44 * 5 + 6] == 3) &&
        (local_44 = (local_48[3] + local_44 + local_28) % local_48[3], 0x2f < DAT_10160be4)) &&
       (DAT_10160be4 < 0x3a)) {
      DAT_10160be4 = DAT_10160be4 + 1;
      if (0x39 < DAT_10160be4) {
        DAT_10160be4 = 0x30;
      }
      FUN_10048ee3(local_24,local_48[local_44 * 5 + 6],(undefined4 *)(local_48),(undefined4 *)(&local_28));
      if (local_28 == 0) {
        local_28 = 1;
      }
    }
    local_48[4] = local_44;
    DAT_100eebbe = (undefined1)param_1[0xd];
    if (local_48[1] != 0) {
      local_40 = param_1[0x12];
      local_3c = param_1[0x13];
      FUN_1005acaa(local_30,local_40,local_3c,local_2c,(byte *)local_48[1],0x100eebb0);
    }
    if ((*(byte *)(param_1 + 1) & 4) == 0) {
      FUN_1006670a(local_30,(char *)local_48[1],local_40,local_3c,local_2c,1);
    }
    else {
      FUN_100666ad(local_30,local_40,local_3c,local_2c,1);
    }
    local_1c = FUN_1005aae4(local_2c);
    local_54 = param_1[0x14];
    local_50 = param_1[0x15] + local_1c / 2;
    local_40 = param_1[0x16];
    local_3c = param_1[0x17];
    local_c = param_1[0x18];
    local_8 = param_1[0x19];
    local_4c = FUN_1005aaf7(local_2c,0x30);
    local_4c = local_4c * 2;
    iVar1 = FUN_1005aaf7(local_2c,0x2e);
    local_4c = local_4c + iVar1;
    local_10 = 0;
    local_38 = 0;
    for (local_34 = 0; local_34 < local_48[3]; local_34 = local_34 + 1) {
      if (local_34 == local_44) {
        DAT_100eebbe = (undefined1)param_1[0xe];
      }
      else {
        DAT_100eebbe = (undefined1)param_1[0xd];
      }
      local_18 = local_48 + local_34 * 5 + 6;
      if (((*(byte *)(param_1 + 1) & 8) == 0) && (local_34 == local_80)) {
        local_38 = local_38 + ((param_1[0xf] - local_34) + -1) * param_1[0x11];
      }
      local_3c = local_3c + local_38;
      local_8 = local_8 + local_38;
      local_50 = local_50 + local_38;
      local_38 = param_1[0x11];
      if ((local_34 == local_44) && (param_1[8] != 0)) {
        FUN_10056fc4(local_30,param_1[8],0,local_54,local_50);
      }
      if (*local_18 != 3) {
        if (local_34 == local_80) {
          local_10 = 0;
        }
        else {
          local_10 = local_10 + 1;
        }
        __itoa(local_10,(char *)local_7c,10);
        FUN_1005acaa(local_30,local_40,local_3c,local_2c,local_7c,0x100eebb0);
      }
      if (local_18[1] != 0) {
        FUN_1005acaa(local_30,local_40 + local_4c,local_3c,local_2c,(byte *)local_18[1],0x100eebb0);
      }
      if (local_18[2] != 0) {
        ((void (*)(int *, int, int, int, int, int *))((*(code *)local_18[2])))(param_1,local_18[3],local_34,local_c,local_8,local_48);
      }
    }
    DAT_100eebbe = 0xe;
    iVar1 = *local_48;
    if (iVar1 == 3) {
      *local_48 = 2;
      if ((local_48[local_44 * 5 + 10] != 0) &&
         (FUN_100497e6((int)param_1,local_48[local_44 * 5 + 10]), param_1[9] != -1)) {
        FUN_100037f0(0,0,0,param_1[9],0);
      }
    }
    else if ((3 < iVar1) && (iVar1 < 6)) {
      *local_48 = 0;
      local_48[4] = 0;
      FUN_10049767((int)param_1);
    }
  }
  return;
}
