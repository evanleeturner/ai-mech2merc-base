/* SPDX-License-Identifier: MIT */
/* mercsw 100632e4 */
/* mercsw 100632e4: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100a7bcc[];
undefined __cdecl FUN_10003742(uint param_1, int param_2, undefined4 param_3, int param_4, ushort param_5);
undefined __cdecl FUN_100082c4(int param_1, int param_2);

undefined4 __cdecl FUN_100632e4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_14;
  int local_10;
  ushort *local_8;
  
  local_8 = (ushort *)0x0;
  if (*(int *)(param_1 + 0x3e0) == -1) {
    uVar1 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x3e0) * 0x40 + *(int *)(param_1 + 0x54);
    if (*(int *)(iVar2 + 0x20) < *(int *)(param_1 + 0x60)) {
      local_8 = (ushort *)(*(int *)(iVar2 + 0x20) * 0x3a + param_1 + 100);
    }
    if (((local_8 == (ushort *)0x0) || (*(int *)(DAT_100a7bcc + *(int *)(iVar2 + 4) * 0x68) < 1))
       || (*(int *)(local_8 + 1) < 1)) {
      uVar1 = 0;
    }
    else {
      FUN_10003742(0xa7,100,0x40,5,0x50);
      FUN_10003742(0xa7,100,0x40,5,0x32);
      FUN_100082c4(0x22,-1);
      local_14 = *(int *)(param_1 + 0x54);
      for (local_10 = 0; local_10 < 0xe; local_10 = local_10 + 1) {
        if ((uint)(*(int *)(local_14 + 0x3c) / 100) == (uint)*local_8) {
          *(undefined4 *)(local_14 + 8) = 0xffffffff;
        }
        local_14 = local_14 + 0x40;
      }
      for (local_10 = 0; local_10 < *(int *)(local_8 + 3); local_10 = local_10 + 1) {
        *(undefined2 *)(*(int *)(local_8 + local_10 * 2 + 7) * 0x1e + 2 + *(int *)(param_1 + 0x5c))
             = 0;
      }
      local_8[1] = 0;
      local_8[2] = 0;
      uVar1 = 1;
    }
  }
  return uVar1;
}
