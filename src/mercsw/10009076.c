/* SPDX-License-Identifier: MIT */
/* mercsw 10009076 */
/* mercsw 10009076: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_100adf38;
extern int DAT_100b38d8;
extern int DAT_100b38dc;
extern undefined4 DAT_100eef40[];
extern undefined DAT_100ef030[];
extern undefined DAT_100ef034[];
undefined4 __cdecl FUN_1004d5e3(int param_1);
undefined __cdecl FUN_10008fb3(undefined4 * param_1, int param_2, int param_3, undefined4 param_4, int param_5);
undefined __cdecl FUN_1000dde1(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4);
undefined4 __cdecl FUN_1004d60d(int param_1);

void __cdecl FUN_10009076(undefined4 * param_1)

{
  int iVar1;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  ushort *local_10;
  int local_c;
  int local_8;
  
  for (local_14 = 0; local_14 < DAT_100b38d8; local_14 = local_14 + 1) {
    if ((((local_14 != DAT_100adf38) &&
         (local_8 = DAT_100eef40[local_14], (*(ushort *)(local_8 + 0x14) & 0x1400) != 0)) &&
        ((*(ushort *)(local_8 + 0x14) & 0x800) == 0)) &&
       (((*(ushort *)(local_8 + 0x14) & 0x4000) == 0 && ((*(ushort *)(local_8 + 0x14) & 0x16) == 0))
       )) {
      local_20 = *(int *)(local_8 + 0x50);
      local_1c = *(int *)(local_8 + 0x54);
      local_18 = *(undefined4 *)(local_8 + 0x58);
      iVar1 = FUN_1004d5e3(local_14);
      local_c = *(int *)(param_1[0x1c] + 0xc + iVar1 * 4);
      FUN_10008fb3(param_1,local_20,local_1c,local_18,local_c);
    }
  }
  for (local_14 = 0; local_14 < DAT_100b38dc; local_14 = local_14 + 1) {
    local_10 = (ushort *)(DAT_100ef030 + local_14 * 0x40);
    if (((*local_10 & 0x1400) != 0) && ((*local_10 & 0x1e) == 0)) {
      FUN_1000dde1(*(int *)(DAT_100ef034 + local_14 * 0x40),(undefined4 *)(&local_20),(undefined4 *)(&local_1c),&local_18);
      iVar1 = FUN_1004d60d(local_14);
      local_c = *(int *)(param_1[0x1c] + 0xc + iVar1 * 4);
      FUN_10008fb3(param_1,local_20,local_1c,local_18,local_c);
    }
  }
  return;
}
