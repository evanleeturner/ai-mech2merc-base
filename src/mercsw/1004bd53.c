/* SPDX-License-Identifier: MIT */
/* mercsw 1004bd53 */
/* mercsw 1004bd53: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100ef030[];
extern undefined DAT_100ef038[];
undefined __cdecl FUN_1004aa97(undefined4 param_1, uint param_2, int param_3, int param_4, int param_5, int param_6, undefined4 param_7, int param_8);
undefined __cdecl FUN_1004bbc3(uint param_1);

void __cdecl FUN_1004bd53(undefined4 param_1, int param_2, int param_3, int param_4, int param_5, int param_6)

{
  ushort uVar1;
  int iVar2;
  
  if (param_2 != 0) {
    uVar1 = *(ushort *)(param_2 + 0x14);
    iVar2 = (uint)uVar1 * 0x40;
    if (((*(ushort *)(DAT_100ef030 + iVar2) & 4) == 0) && (*(int *)(DAT_100ef038 + iVar2) != 0)) {
      if (((byte)*(undefined2 *)(param_2 + 2) & 0xf0) == 0xb0) {
        *(undefined4 *)(DAT_100ef038 + iVar2) = 0;
      }
      else {
        *(int *)(DAT_100ef038 + iVar2) = *(int *)(DAT_100ef038 + iVar2) - param_3;
      }
      if (*(int *)(DAT_100ef038 + iVar2) < 1) {
        *(undefined4 *)(DAT_100ef038 + iVar2) = 0;
        if (((byte)*(undefined2 *)(param_2 + 2) & 0xf0) == 0xb0) {
          FUN_1004aa97(param_1,0xd,param_4,param_5,param_6,param_4,param_5,param_6);
        }
        else {
          FUN_1004aa97(param_1,3,param_4,param_5,param_6,param_4,param_5,param_6);
          FUN_1004aa97(param_1,0x20b,param_4,param_5,param_6,param_4,param_5,param_6);
        }
        FUN_1004bbc3((uint)uVar1);
      }
    }
  }
  return;
}
