/* SPDX-License-Identifier: MIT */
/* mercsw 1004d20b */
/* mercsw 1004d20b: Ghidra's C, repaired by tools/ghidra_repair.py */
extern uint DAT_100b38d8;
extern undefined4 DAT_100eef40[];
extern undefined DAT_101600e0[];
undefined4 __cdecl FUN_1004d34a(uint param_1, int * param_2, int * param_3, undefined4 * param_4);
undefined __cdecl FUN_1002f37a(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4);
undefined __cdecl FUN_1002f668(int param_1, int param_2, int param_3, int param_4, uint param_5);
undefined __cdecl FUN_1002fbc0(int * param_1);

undefined4 __cdecl FUN_1004d20b(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)

{
  int iVar1;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  if ((param_1 < 0x10) &&
     (local_10 = *(uint *)(DAT_101600e0 + param_1 * 0x3c), local_10 < DAT_100b38d8)) {
    iVar1 = DAT_100eef40[local_10];
    *(undefined4 *)(iVar1 + 0x50) = param_2;
    *(undefined4 *)(iVar1 + 0x54) = param_3;
    *(undefined4 *)(iVar1 + 0x58) = param_4;
    *(undefined4 *)(iVar1 + 0x60) = param_5;
    for (local_20 = 0; local_20 < DAT_100b38d8; local_20 = local_20 + 1) {
      local_14 = DAT_100eef40[local_20];
      if (*(int *)(local_14 + 8) == param_1) {
        FUN_1004d34a(local_20,&local_1c,&local_c,(undefined4 *)(&local_18));
        FUN_1002f37a(*(int *)(local_14 + 0x40),local_1c,param_3,local_c);
        FUN_1002f668(*(int *)(local_14 + 0x40),0,local_18,0,0);
        FUN_1002fbc0(*(int **)(local_14 + 0x40));
        *(int *)(local_14 + 0x50) = local_1c;
        *(undefined4 *)(local_14 + 0x54) = param_3;
        *(int *)(local_14 + 0x58) = local_c;
        *(int *)(local_14 + 0x60) = local_18;
      }
    }
    local_8 = 1;
  }
  return local_8;
}
