/* SPDX-License-Identifier: MIT */
/* mercsw 1002f783 */
/* mercsw 1002f783: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_1003e051(ushort * param_1);

void __cdecl FUN_1002f783(int param_1)

{
  undefined4 local_8;
  
  if ((*(int *)(param_1 + 0x6c) != 0) &&
     (((byte)*(undefined2 *)(*(int *)(param_1 + 0x6c) + 2) & 0xf0) != 0x70)) {
    FUN_1003e051(*(ushort **)(param_1 + 0x6c));
  }
  for (local_8 = *(int *)(param_1 + 4); local_8 != 0; local_8 = *(int *)(local_8 + 8)) {
    FUN_1002f783(local_8);
  }
  return;
}
