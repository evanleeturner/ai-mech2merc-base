/* SPDX-License-Identifier: MIT */
/* mercsw 1005ff34 */
/* mercsw 1005ff34: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_1001bdc6(ushort * param_1);

undefined4 __cdecl FUN_1005ff34(ushort * param_1, int param_2, undefined4 param_3, int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  FUN_1001bdc6(param_1);
  piVar1 = *(int **)(param_1 + 0x26);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else if ((((param_2 < *piVar1) || (piVar1[1] < param_2)) || (param_4 < piVar1[4])) ||
          (piVar1[5] < param_4)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
