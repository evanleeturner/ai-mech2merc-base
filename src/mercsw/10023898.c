/* SPDX-License-Identifier: MIT */
/* mercsw 10023898 */
/* mercsw 10023898: Ghidra's C, repaired by tools/ghidra_repair.py */

undefined4 __cdecl FUN_10023898(int param_1, int param_2)

{
  undefined4 uVar1;
  
  if ((((*(int *)(param_2 + 0x20) < *(int *)(param_1 + 0x60)) &&
       (*(int *)(param_1 + 0x66 + *(int *)(param_2 + 0x20) * 0x3a) != 0)) ||
      ((0x13 < *(int *)(param_2 + 4) && (*(int *)(param_2 + 4) < 0x1c)))) ||
     ((0x32 < *(int *)(param_2 + 4) && (*(int *)(param_2 + 4) < 0x3d)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
