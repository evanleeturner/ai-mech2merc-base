/* SPDX-License-Identifier: MIT */
/* mercsw 1004c173 */
/* mercsw 1004c173: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a9a38;
extern undefined4 DAT_100b0700;
extern undefined4 DAT_100c7e08;
extern undefined4 DAT_100c7e2c;
extern undefined4 DAT_100c7e30;
extern undefined4 DAT_100c7e34;
extern undefined4 DAT_100c7e38;
extern undefined DAT_101f26f0[];
extern undefined DAT_101f2714[];
undefined4 __cdecl FUN_1006065d(int param_1, uint param_2, int param_3);
undefined __cdecl FUN_1004aa97(undefined4 param_1, uint param_2, int param_3, int param_4, int param_5, int param_6, undefined4 param_7, int param_8);

void __cdecl FUN_1004c173(int param_1)

{
  int iVar1;
  uint uVar2;
  int local_8;
  
  uVar2 = DAT_100a9a38 * 2;
  local_8 = 0xff;
  do {
    iVar1 = local_8 + -1;
    if (local_8 == 0) break;
    local_8 = iVar1;
  } while (((*(int *)(DAT_101f2714 + iVar1 * 0x2c) != 0x16) ||
           (*(int *)(DAT_101f26f0 + iVar1 * 0x2c) == 0)) ||
          (*(int *)(*(int *)(DAT_101f26f0 + iVar1 * 0x2c) + 0x6c) == 0));
  DAT_100c7e08 = 10000;
  FUN_1006065d(0x12,uVar2,2);
  DAT_100c7e30 = *(int *)(param_1 + 0x50);
  DAT_100c7e34 = *(int *)(param_1 + 0x54);
  DAT_100c7e38 = *(int *)(param_1 + 0x58);
  DAT_100c7e2c = 0;
  DAT_100b0700 = uVar2;
  FUN_1004aa97(0xfffffffe,0x16,DAT_100c7e30,DAT_100c7e34,DAT_100c7e38,DAT_100c7e30,DAT_100c7e34,
               DAT_100c7e38);
  return;
}
