/* SPDX-License-Identifier: MIT */
/* mercsw 1004a9bd */
/* mercsw 1004a9bd: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b06f0;
extern undefined DAT_101ec758[];
extern undefined DAT_101ec780[];
extern undefined DAT_101ec794[];
extern undefined DAT_101ec7a0[];
extern undefined DAT_101ec7a8[];
extern undefined DAT_101ec7ac[];
undefined __cdecl FUN_1002f727(int param_1);
undefined __cdecl FUN_1002f7f7(int param_1);
undefined __cdecl FUN_1007d08d(int param_1);
undefined __cdecl FUN_10030fd2(int param_1);
undefined __cdecl FUN_10049a9b(int param_1);
undefined __cdecl FUN_1004ab46(undefined4 param_1, int param_2, uint param_3, int param_4, int param_5, int param_6, int param_7, undefined4 param_8, int param_9, int param_10, int param_11, int param_12);

void __cdecl FUN_1004a9bd(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, undefined4 param_8, int param_9)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_2 * 0x60;
  if (*(int *)(DAT_101ec7a0 + iVar2) != 0) {
    DAT_100b06f0 = 0xffffffff;
  }
  FUN_1002f727(*(int *)(DAT_101ec780 + iVar2));
  FUN_1002f7f7(*(int *)(DAT_101ec780 + iVar2));
  uVar1 = *(uint *)(DAT_101ec758 + iVar2);
  FUN_1007d08d(*(int *)(DAT_101ec7a8 + iVar2));
  FUN_10030fd2(*(int *)(DAT_101ec7ac + iVar2));
  *(undefined4 *)(DAT_101ec7a8 + iVar2) = 0xffffffff;
  *(undefined4 *)(DAT_101ec7ac + iVar2) = 0xffffffff;
  FUN_10049a9b(param_2);
  if (param_3 != 0) {
    FUN_1004ab46(*(undefined4 *)(DAT_101ec794 + iVar2),param_1,uVar1,param_4,param_5,param_6,
                 param_7,param_8,param_9,0,0,0);
  }
  return;
}
