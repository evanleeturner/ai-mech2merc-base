/* SPDX-License-Identifier: MIT */
/* mercsw 100249cf */
/* mercsw 100249cf: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_101f52e0[];
undefined __cdecl FUN_1002f322(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4);
undefined4 __cdecl FUN_1003ba89(int * param_1, int * param_2, int * param_3);
uint __cdecl FUN_100562d8(int * param_1, int param_2, int param_3, byte param_4);

undefined4 __cdecl FUN_100249cf(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_1002f322(*(int *)(param_1 + 0x1d2),(undefined4 *)(&local_24),(undefined4 *)(&local_8),(undefined4 *)(&local_c));
    local_14 = 0;
    local_20 = local_c;
    FUN_1003ba89(&local_14,&local_14,&local_20);
    local_10 = *(undefined4 *)(param_1 + 0x1e6);
    if (local_20 < 0x2711) {
      for (local_18 = 0; local_18 < 0x10; local_18 = local_18 + 1) {
        local_14 = *(int *)(param_1 + 0x12 + local_18 * 0xe) + local_24;
        local_1c = *(int *)(param_1 + 0x16 + local_18 * 0xe) + local_8;
        local_20 = *(int *)(param_1 + 0x1a + local_18 * 0xe) + local_c;
        iVar2 = FUN_1003ba89(&local_14,&local_1c,&local_20);
        if (iVar2 != 0) {
          FUN_100562d8((int *)(DAT_101f52e0),local_14,local_1c,(byte)local_10);
        }
      }
    }
    else {
      for (local_18 = 0; local_18 < 0x10; local_18 = local_18 + 2) {
        local_14 = *(int *)(param_1 + 0x12 + local_18 * 0xe) + local_24;
        local_1c = *(int *)(param_1 + 0x16 + local_18 * 0xe) + local_8;
        local_20 = *(int *)(param_1 + 0x1a + local_18 * 0xe) + local_c;
        iVar2 = FUN_1003ba89(&local_14,&local_1c,&local_20);
        if (iVar2 != 0) {
          FUN_100562d8((int *)(DAT_101f52e0),local_14,local_1c,(byte)local_10);
        }
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}
