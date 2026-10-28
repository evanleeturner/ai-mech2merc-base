/* SPDX-License-Identifier: MIT */
/* mercsw 1000e242 */
/* mercsw 1000e242: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_10068d4e(int param_1, int param_2, int param_3);
undefined __cdecl FUN_10068db6(undefined4 param_1);
ushort * __cdecl FUN_10068dc9(int param_1, int * param_2, int param_3, int param_4);
undefined __cdecl FUN_100141c0(ushort * param_1, int param_2);
undefined __cdecl FUN_10089cc9(int * param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7);
undefined __cdecl FUN_1001b7cd(ushort * param_1, int * param_2);
undefined __cdecl FUN_1003da99(ushort * param_1);

void __cdecl FUN_1000e242(int * param_1, int param_2, int param_3)

{
  uint uVar1;
  int local_68 [12];
  int local_38;
  int local_34;
  int local_30;
  ushort *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  (void)local_8;
  local_8 = 0;
  if (param_1 != (int *)0x0) {
    uVar1 = ((int)((unsigned int)(param_1[1]) - (unsigned int)(*param_1))) >> 0x1f;
    local_14 = (param_1[1] - *param_1 ^ uVar1) - uVar1;
    uVar1 = ((int)((unsigned int)(param_1[3]) - (unsigned int)(param_1[2]))) >> 0x1f;
    local_10 = (param_1[3] - param_1[2] ^ uVar1) - uVar1;
    uVar1 = ((int)((unsigned int)(param_1[5]) - (unsigned int)(param_1[4]))) >> 0x1f;
    local_c = (param_1[5] - param_1[4] ^ uVar1) - uVar1;
    local_20 = (local_14 + 9) / 10;
    local_1c = (local_10 * 2 + 0x12) / 10;
    local_18 = (local_c + 9) / 10;
    FUN_10068d4e(local_20,local_1c,local_18);
    FUN_10068db6(4);
    local_24 = 0;
    local_2c = FUN_10068dc9(param_2,&local_24,param_3,0);
    if (local_2c != (ushort *)0x0) {
      local_8 = 1;
      FUN_100141c0(local_2c,4);
      local_28 = ((int)((unsigned int)(param_1[1]) + (unsigned int)(*param_1))) >> 1;
      local_38 = ((int)((unsigned int)(param_1[2]) + (unsigned int)(param_1[3]))) >> 1;
      local_30 = ((int)((unsigned int)(param_1[5]) + (unsigned int)(param_1[4]))) >> 1;
      FUN_10089cc9(local_68,0,0,0,local_28,local_38,local_30);
      FUN_1001b7cd(local_2c,local_68);
      FUN_1003da99(local_2c);
    }
    for (local_34 = 0; local_34 < 4; local_34 = local_34 + 1) {
      FUN_1000e242((int *)param_1[local_34 + 7],param_2,param_3);
    }
  }
  return;
}
