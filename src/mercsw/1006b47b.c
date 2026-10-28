/* SPDX-License-Identifier: MIT */
/* mercsw 1006b47b */
/* mercsw 1006b47b: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ab094;
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100b3904;
extern undefined4 PTR_DAT_100aaf68;
undefined __cdecl FUN_1004ab11(uint param_1, undefined4 param_2);
undefined __cdecl FUN_1002f322(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4);
undefined __cdecl FUN_10003742(uint param_1, int param_2, undefined4 param_3, int param_4, ushort param_5);
undefined __cdecl FUN_100037f0(uint param_1, undefined4 param_2, uint param_3, uint param_4, int param_5);

void __cdecl FUN_1006b47b(int * param_1)

{
  int iVar1;
  int iVar2;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  undefined4 local_8;
  
  (void)local_8;
  local_c = *param_1;
  local_8 = 6;
  iVar1 = param_1[0xec];
  if (iVar1 != 0) {
    *(int *)(local_c + 0x48) = param_1[0xec];
    FUN_1004ab11(0x19,*param_1);
    FUN_1002f322(*(int *)(local_c + 0x48),&local_10,(undefined4 *)(&local_14),&local_18);
  }
  local_8 = 7;
  iVar2 = param_1[0xed];
  if (iVar2 != 0) {
    *(int *)(local_c + 0x48) = param_1[0xed];
    FUN_1004ab11(0x19,*param_1);
    FUN_1002f322(*(int *)(local_c + 0x48),&local_10,(undefined4 *)(&local_14),&local_18);
  }
  if (iVar2 != 0 || iVar1 != 0) {
    local_10 = local_10 - *(int *)PTR_DAT_100aaf68;
    local_14 = local_14 - *(int *)(PTR_DAT_100aaf68 + 4);
    local_18 = local_18 - *(int *)(PTR_DAT_100aaf68 + 8);
    if ((((undefined4)(*(int *)(*param_1 + 4)) == DAT_100adf38) && (param_1[0xfd] < 0x1c4)) &&
       (0x1c4 < param_1[0xfd] + DAT_100b3904)) {
      FUN_10003742(0xf2,100,0x40,5,0x50);
    }
    else {
      FUN_100037f0(local_10,local_14,local_18,0xf3,DAT_100ab094);
    }
  }
  return;
}
