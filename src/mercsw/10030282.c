/* SPDX-License-Identifier: MIT */
/* mercsw 10030282 */
/* mercsw 10030282: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_10030224(int * param_1);
undefined __cdecl FUN_100301b0(int * param_1);

void __cdecl FUN_10030282(int * param_1, uint param_2)

{
  if (param_1 != (int *)0x0) {
    FUN_10030282((int *)param_1[2],param_2);
    if ((param_1[0x1b] == 0) || (*(ushort *)(param_1[0x1b] + 0x16) != param_2)) {
      FUN_10030282((int *)param_1[1],param_2);
    }
    else {
      FUN_10030224((int *)param_1[1]);
      FUN_100301b0(param_1);
    }
  }
  return;
}
