/* SPDX-License-Identifier: MIT */
/* mercsw 10003686 */
/* mercsw 10003686: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a40a4;
extern undefined4 DAT_100a40b0;
undefined __cdecl FUN_10083a59(uint param_1, undefined4 param_2, uint param_3, int * param_4, undefined4 * param_5, uint * param_6, int * param_7);
int __cdecl ComputeVolumeFalloffPercent(int param_1);
int __cdecl FixedMul16(int param_1, int param_2);
int __cdecl FUN_10003783(int param_1, undefined4 param_2, uint param_3, int param_4, undefined4 param_5, ushort param_6);

int __cdecl FUN_10003686(uint param_1, undefined4 param_2, uint param_3, uint param_4, int param_5, ushort param_6)

{
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  FUN_10083a59(param_1,param_2,param_3,&local_18,(undefined4 *)(&local_1c),&local_8,&local_10);
  if ((local_1c / 100 < (int)DAT_100a40b0) || (DAT_100a40b0 == 0)) {
    local_14 = ComputeVolumeFalloffPercent(local_1c / 100);
    if (0 < local_14) {
      if (param_5 != 0) {
        local_14 = local_14 >> 1;
      }
      local_c = FixedMul16(local_1c,DAT_100a40a4);
      FUN_10003783(local_c,local_18,param_4,local_14,0xffffffff,param_6);
    }
  }
  return local_1c;
}
