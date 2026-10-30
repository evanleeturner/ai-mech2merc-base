/* SPDX-License-Identifier: MIT */
/* mercsw 1000c3a0 */
/* mercsw 1000c3a0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a7558;
extern undefined4 DAT_100aae80;
extern undefined4 g_disabled100aafbc_Likely;
extern undefined4 DAT_100b0a08;
extern undefined4 DAT_100b352c;
undefined __cdecl FUN_1003eb9c(int * param_1, int param_2, uint * param_3);
undefined __cdecl FUN_1007b068(int * param_1, int * param_2, int param_3, uint param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8);

void __cdecl FUN_1000c3a0(int * param_1, byte * param_2, short param_3, short param_4, int param_5, uint * param_6, undefined4 param_7, undefined4 param_8, int param_9)

{
  byte **local_220;
  int local_21c;
  int local_218;
  uint local_214;
  byte *local_210 [128];
  int local_10;
  uint *local_c;
  uint local_8;
  
  (void)local_218;
  (void)local_c;
  if (g_disabled100aafbc_Likely == 0) {
    local_214 = 0x651;
  }
  else {
    local_214 = 0x451;
  }
  if (0x80 < param_4) {
    param_4 = 0x80;
  }
  if (param_3 < param_4) {
    param_4 = param_3;
  }
  for (local_10 = 0; local_10 < param_4; local_10 = local_10 + 1) {
    local_210[local_10] = param_2;
    param_2 = param_2 + param_3;
  }
  local_21c = (int)param_4;
  local_220 = local_210;
  local_c = param_6;
  local_218 = local_21c;
  if ((param_9 == 0) || (DAT_100a7558 == 0)) {
    local_8 = param_6[2];
    FUN_1007b068(param_1,(int *)param_6,param_5,local_214,local_8,(undefined4)(&local_220),DAT_100b352c,0);
  }
  else {
    if (DAT_100b0a08 == 0) {
      if (DAT_100aae80 == 0) {
        local_8 = *local_210[0] & 0xf0;
      }
      else {
        local_8 = (*local_210[0] & 0xf0) | 0xf;
      }
    }
    else {
      local_8 = 3;
    }
    param_6[2] = local_8 << 0x10;
    FUN_1003eb9c(param_1,param_5,param_6);
  }
  return;
}
