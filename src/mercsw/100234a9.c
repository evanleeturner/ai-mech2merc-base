/* SPDX-License-Identifier: MIT */
/* mercsw 100234a9 */
/* mercsw 100234a9: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100adf38;
int __cdecl FUN_10051f43(int param_1);
undefined __cdecl FUN_10003742(uint param_1, int param_2, undefined4 param_3, int param_4, ushort param_5);

void __cdecl FUN_100234a9(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = FUN_10051f43(100);
  if ((iVar2 < *(int *)(param_1 + 0x1b4)) &&
     (*(ushort *)(iVar1 + 0x440) = *(ushort *)(iVar1 + 0x440) | 0x80,
     (uint)*(ushort *)(param_1 + 0x17a) == (DAT_100adf38 | 0x200))) {
    FUN_10003742(0x5c,100,0x40,5,0x32);
  }
  return;
}
