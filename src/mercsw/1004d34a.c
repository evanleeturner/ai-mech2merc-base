/* SPDX-License-Identifier: MIT */
/* mercsw 1004d34a */
/* mercsw 1004d34a: Ghidra's C, repaired by tools/ghidra_repair.py */
extern uint DAT_100b38d8;
extern undefined4 DAT_100eef40[];
extern undefined DAT_101604d0[];
extern undefined DAT_101604f0[];
extern undefined DAT_10160510[];
undefined4 __cdecl FUN_1004d47f(int param_1);
int __cdecl FUN_1002fc9d(int param_1);
undefined __cdecl FUN_10089060(int * param_1, int * param_2, int * param_3, int * param_4);

undefined4 __cdecl FUN_1004d34a(uint param_1, int * param_2, int * param_3, undefined4 * param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  int local_14;
  int *local_10;
  uint local_c;
  int local_8;
  
  local_18 = 0;
  if (param_1 < DAT_100b38d8) {
    iVar1 = *(int *)(DAT_100eef40[param_1] + 8);
    local_c = FUN_1004d47f(iVar1);
    local_8 = *(int *)(DAT_100eef40[param_1] + 0xc);
    if (param_1 == local_c) {
      *param_2 = *(int *)(DAT_100eef40[local_c] + 0x50);
      *param_3 = *(int *)(DAT_100eef40[local_c] + 0x58);
      *param_4 = *(undefined4 *)(DAT_100eef40[local_c] + 0x60);
    }
    else {
      *param_2 = *(int *)(DAT_101604d0 + local_8 * 4 + iVar1 * 0x70);
      *param_3 = *(int *)(DAT_101604f0 + local_8 * 4 + iVar1 * 0x70);
      *param_4 = *(undefined4 *)(DAT_10160510 + local_8 * 4 + iVar1 * 0x70);
      local_14 = *(int *)(DAT_100eef40[local_c] + 0x40);
      local_10 = (int *)FUN_1002fc9d(local_14);
      FUN_10089060(local_10,param_2,&local_18,param_3);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
