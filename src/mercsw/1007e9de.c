/* SPDX-License-Identifier: MIT */
/* mercsw 1007e9de */
/* mercsw 1007e9de: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b38fc;
extern undefined4 DAT_100b3904;
extern undefined DAT_10123130[];
extern undefined DAT_1012327a[];
extern undefined DAT_1012327c[];
extern undefined DAT_10123368[];
extern undefined DAT_10123369[];
extern undefined DAT_1012336a[];
extern undefined DAT_10215688[];
extern undefined DAT_1021568c[];
extern undefined DAT_10215690[];
undefined __cdecl FUN_10026f0b(int * param_1);
undefined __cdecl FUN_1002f322(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4);
undefined4 __cdecl FUN_10002570(uint param_1, int param_2);
undefined4 __cdecl IsWithinRadius3_Likely(int param_1, int param_2, int param_3, int param_4);
undefined __cdecl NormalizeVec3(uint * param_1, uint * param_2, uint * param_3);
int __cdecl FixedMul16(int param_1, int param_2);
undefined __stdcall FUN_1004fed5(void);
undefined __cdecl FUN_1006b2cc(int * param_1);

void __cdecl FUN_1007e9de(int * param_1)

{
  int iVar1;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  undefined *local_10;
  int local_c;
  int *local_8;
  
  (void)local_10;
  local_8 = param_1;
  FUN_10026f0b((int *)*param_1);
  if (local_8[0xf5] == 2) {
    local_c = *(int *)(*local_8 + 8);
    iVar1 = *(int *)(DAT_10123130 + local_c * 4) * 0x13f + local_c * 0x3c0a;
    local_10 = DAT_1012327a + iVar1;
    *(undefined4 *)(*local_8 + 0xdc) = 0;
    *(undefined1 *)(*(int *)(*local_8 + 0x4c) + 0x43) = 0;
    if (((*(int *)(DAT_1012327c + iVar1) == 0x100) && (DAT_10123368[iVar1] != '\0')) &&
       (DAT_1012336a[iVar1] == '\x01')) {
      local_18 = (uint)(byte)DAT_10123369[iVar1];
      FUN_1002f322(*(int *)(*local_8 + 0x40),(undefined4 *)(&local_1c),(undefined4 *)(&local_28),(undefined4 *)(&local_30));
      local_20 = *(uint *)(DAT_10215688 + local_18 * 0x54);
      local_2c = *(uint *)(DAT_1021568c + local_18 * 0x54);
      local_34 = *(uint *)(DAT_10215690 + local_18 * 0x54);
      local_38 = local_20 - local_1c;
      local_3c = local_2c - local_28;
      local_14 = local_34 - local_30;
      local_24 = FUN_10002570(local_8[0xee] * DAT_100b3904,0x697e98);
      iVar1 = IsWithinRadius3_Likely(local_38,local_3c,local_14,local_24);
      if (iVar1 == 0) {
        local_38 = local_20;
        local_3c = local_2c;
        local_14 = local_34;
      }
      else {
        NormalizeVec3(&local_38,&local_3c,&local_14);
        local_38 = FixedMul16(local_38,local_24);
        local_3c = FixedMul16(local_3c,local_24);
        local_14 = FixedMul16(local_14,local_24);
      }
      local_8[10] = local_38;
      local_8[0x12] = local_3c;
      local_8[0xe] = local_14;
    }
  }
  else {
    *(undefined4 *)(*local_8 + 0x8c) = 0;
    *(undefined4 *)(*local_8 + 0x88) = 0xffffffff;
  }
  switch(local_8[0xf5]) {
  case 0:
    local_8[0xf5] = 2;
    local_8[0xef] = 0;
    break;
  case 1:
    local_8[0xf5] = 2;
    break;
  case 2:
    break;
  case 3:
    local_8[0xf5] = 2;
    break;
  case 4:
    if (local_8[0xef] == 0) {
      local_8[0xef] = DAT_100b38fc + 0x712;
      FUN_1004fed5();
    }
    if ((int)DAT_100b38fc < local_8[0xef]) {
      FUN_1006b2cc(local_8);
    }
  }
  return;
}
