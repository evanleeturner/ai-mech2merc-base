/* SPDX-License-Identifier: MIT */
/* mercsw 1002443b */
/* mercsw 1002443b: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_101f52e0[];
undefined __cdecl FUN_1002f322(int param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4);
undefined4 __cdecl FUN_1003ba89(int * param_1, int * param_2, int * param_3);
uint __cdecl FUN_10056489(int * param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7);
uint __cdecl FUN_100562d8(int * param_1, int param_2, int param_3, byte param_4);

undefined4 __cdecl FUN_1002443b(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_1002f322(*(int *)(param_1 + 0x1d2),(undefined4 *)(&local_3c),(undefined4 *)(&local_10),(undefined4 *)(&local_18));
    local_30 = *(int *)(param_1 + 0x1ea) / 10;
    local_38 = *(int *)(param_1 + 0x1ee) / 10;
    local_c = *(int *)(param_1 + 0x1f2) / 10;
    local_1c = *(int *)(param_1 + 0x1e6);
    local_20 = 0;
    local_2c = local_18;
    FUN_1003ba89(&local_20,&local_20,&local_2c);
    if (local_2c < 0x4e21) {
      for (local_24 = 0; local_24 < 0x10; local_24 = local_24 + 1) {
        local_20 = *(int *)(param_1 + 0x12 + local_24 * 0xe) + local_3c;
        local_28 = *(int *)(param_1 + 0x16 + local_24 * 0xe) + local_10;
        local_2c = *(int *)(param_1 + 0x1a + local_24 * 0xe) + local_18;
        iVar2 = FUN_1003ba89(&local_20,&local_28,&local_2c);
        if (iVar2 != 0) {
          local_34 = *(int *)(param_1 + 0x12 + local_24 * 0xe) + local_30 + local_3c;
          local_8 = *(int *)(param_1 + 0x16 + local_24 * 0xe) + local_38 + local_10;
          local_14 = *(int *)(param_1 + 0x1a + local_24 * 0xe) + local_c + local_18;
          FUN_1003ba89(&local_34,&local_8,&local_14);
          FUN_10056489((int *)(DAT_101f52e0),local_20,local_28,local_34,local_8,0,local_1c);
        }
      }
    }
    else {
      for (local_24 = 0; local_24 < 0x10; local_24 = local_24 + 1) {
        local_20 = *(int *)(param_1 + 0x12 + local_24 * 0xe) + local_3c;
        local_28 = *(int *)(param_1 + 0x16 + local_24 * 0xe) + local_10;
        local_2c = *(int *)(param_1 + 0x1a + local_24 * 0xe) + local_18;
        iVar2 = FUN_1003ba89(&local_20,&local_28,&local_2c);
        if (iVar2 != 0) {
          FUN_100562d8((int *)(DAT_101f52e0),local_20,local_28,(byte)local_1c);
        }
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}
