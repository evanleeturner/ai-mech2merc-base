/* SPDX-License-Identifier: MIT */
/* mercsw 1002935a */
/* mercsw 1002935a: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_1002a4e0(int param_1, short param_2, ushort param_3, int param_4);

bool __cdecl FUN_1002935a(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  undefined2 uStack_6;
  
  bVar2 = *(short *)(param_1 + 0x16c) != 0;
  if (bVar2) {
    *(short *)(param_1 + 0x16c) = *(short *)(param_1 + 0x16c) + -1;
    uVar1 = *(undefined4 *)(param_1 + 0x154 + (uint)*(ushort *)(param_1 + 0x16c) * 4);
    uStack_6 = (ushort)((uint)uVar1 >> 0x10);
    FUN_1002a4e0(param_1,(short)uVar1,uStack_6,0);
  }
  return !bVar2;
}
