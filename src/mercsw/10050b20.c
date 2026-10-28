/* SPDX-License-Identifier: MIT */
/* mercsw 10050b20 */
/* mercsw 10050b20: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_100adf38;
extern int DAT_100b38d8;
extern undefined4 DAT_100eef40[];
extern undefined4 PTR_DAT_100aaf68;
int __cdecl FUN_10003d60(int param_1, int param_2);
undefined4 __stdcall FUN_1001a620(void);
undefined __cdecl FUN_10083a59(uint param_1, undefined4 param_2, uint param_3, int * param_4, undefined4 * param_5, uint * param_6, int * param_7);
undefined4 __cdecl FUN_10050389(int param_1, int param_2);

void __stdcall FUN_10050b20(void)

{
  int iVar1;
  int iVar2;
  int local_32c;
  int local_324;
  int aiStack_320 [180];
  int local_50;
  int local_4c;
  int local_48;
  uint local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int *local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  (void)local_34;
  local_4c = 0;
  local_32c = -1;
  local_10 = -1;
  local_c = -1;
  local_8 = *(int *)(PTR_DAT_100aaf68 + 0xb8);
  local_44 = FUN_10003d60(local_8,0xe10);
  local_14 = FUN_10003d60(local_8,0x2134);
  local_28 = FUN_10003d60(local_8,0x57e4);
  local_34 = FUN_10003d60(local_8,40000);
  local_1c = local_44;
  local_30 = *(int *)PTR_DAT_100aaf68;
  local_40 = *(int *)(PTR_DAT_100aaf68 + 4);
  local_48 = *(int *)(PTR_DAT_100aaf68 + 8);
  for (local_324 = 0; local_324 < DAT_100b38d8; local_324 = local_324 + 1) {
    local_2c = aiStack_320 + local_324 * 3;
    aiStack_320[local_324 * 3 + 2] = local_324;
    iVar1 = DAT_100eef40[local_324];
    if ((local_324 == DAT_100adf38) && (iVar2 = FUN_1001a620(), iVar2 == 0)) {
      local_2c[1] = 4;
      *local_2c = 0;
    }
    else if ((*(ushort *)(iVar1 + 0x14) & 2) == 0) {
      local_2c[1] = -2;
      local_18 = *(int *)(iVar1 + 0x58) - local_48;
      FUN_10083a59(*(int *)(iVar1 + 0x50) - local_30,*(int *)(iVar1 + 0x54) - local_40,local_18,
                   &local_3c,(undefined4 *)(&local_50),&local_38,&local_20);
      *local_2c = local_50;
      if ((int)local_38 < (int)local_1c) {
        local_1c = local_38;
        local_c = local_10;
        local_10 = local_32c;
        local_32c = local_324;
      }
    }
    else if (local_324 == DAT_100adf38) {
      local_2c[1] = 0;
    }
    else {
      local_2c[1] = 1;
    }
  }
  for (local_324 = 0; local_324 < DAT_100b38d8; local_324 = local_324 + 1) {
    local_2c = aiStack_320 + local_324 * 3;
    if (aiStack_320[local_324 * 3 + 1] == -2) {
      if ((aiStack_320[local_324 * 3 + 2] == local_32c) && (*local_2c < (int)local_44)) {
        aiStack_320[local_324 * 3 + 1] = 0;
      }
      else if ((aiStack_320[local_324 * 3 + 2] == local_10) ||
              ((aiStack_320[local_324 * 3 + 2] == local_c && (*local_2c < local_14)))) {
        local_4c = local_4c + 1;
        aiStack_320[local_324 * 3 + 1] = 1;
      }
      else if ((((local_10 == -1) || (local_c == -1)) && (*local_2c < local_14)) && (local_4c < 3))
      {
        local_4c = local_4c + 1;
        aiStack_320[local_324 * 3 + 1] = 1;
      }
      else if (*local_2c < local_28) {
        aiStack_320[local_324 * 3 + 1] = 2;
      }
      else {
        aiStack_320[local_324 * 3 + 1] = 3;
      }
    }
    iVar1 = DAT_100eef40[local_2c[2]];
    local_24 = *(int *)(iVar1 + 0x1c);
    if (((-1 < local_2c[1]) && (local_2c[1] != local_24)) &&
       (iVar2 = FUN_10050389(*(int *)(iVar1 + 4),local_2c[1]), iVar2 != 0)) {
      *(int *)(iVar1 + 0x1c) = local_2c[1];
    }
  }
  return;
}
