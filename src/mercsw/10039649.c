/* SPDX-License-Identifier: MIT */
/* mercsw 10039649 */
/* mercsw 10039649: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ae750;
extern int * DAT_100ae758;
undefined __cdecl FUN_1002f783(int param_1);
undefined __cdecl FUN_1002f727(int param_1);
undefined __cdecl FUN_1002fbc0(int * param_1);

void __cdecl FUN_10039649(int param_1)

{
  if (DAT_100ae758 != (int *)0x0) {
    if (param_1 == 0) {
      FUN_1002f727((int)DAT_100ae758);
    }
    else {
      FUN_1002f783((int)DAT_100ae758);
    }
    FUN_1002fbc0(DAT_100ae758);
    DAT_100ae750 = param_1;
  }
  return;
}
