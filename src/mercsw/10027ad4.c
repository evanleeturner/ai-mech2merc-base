/* SPDX-License-Identifier: MIT */
/* mercsw 10027ad4 */
/* mercsw 10027ad4: Ghidra's C, repaired by tools/ghidra_repair.py */
uint __cdecl FUN_100293c6(int param_1);
int __cdecl FUN_10028bde(int param_1, ushort param_2, short param_3, ushort * param_4, ushort * param_5);
undefined __cdecl FUN_1002a4e0(int param_1, short param_2, ushort param_3, int param_4);

void __cdecl FUN_10027ad4(int param_1)

{
  uint uVar1;
  ushort local_14 [2];
  int local_10;
  ushort local_c [2];
  ushort local_8;
  undefined2 uStack_6;
  
  (void)uStack_6;
  if ((*(byte *)(param_1 + 0x17e) & 1) == 0) {
    uVar1 = FUN_100293c6(param_1);
    local_8 = (ushort)uVar1;
    if (((local_8 != 0xffff) &&
        (((uint)*(ushort *)(param_1 + 0x17a) != *(uint *)(param_1 + 0x1a2) ||
         (*(short *)(param_1 + 0x176) != 8)))) &&
       (((*(short *)(param_1 + 0x176) != 2 && (*(short *)(param_1 + 0x176) != 3)) ||
        ((uint)*(ushort *)(param_1 + 0x17a) != (uint)((int)(short)local_8))))) {
      if ((*(int *)(param_1 + 0x1a8) != 0) &&
         (local_10 = FUN_10028bde(param_1,local_8,-3,local_14,local_c), local_10 != 0)) {
        if ((*(byte *)(local_10 + 0x17e) & 0x40) == 0) {
          FUN_1002a4e0(local_10,0,0,0);
        }
        else {
          local_8 = 0xffff;
        }
      }
      if (local_8 != 0xffff) {
        FUN_1002a4e0(param_1,2,local_8,1);
      }
    }
  }
  return;
}
