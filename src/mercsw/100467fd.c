/* SPDX-License-Identifier: MIT */
/* mercsw 100467fd */
/* mercsw 100467fd: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100b04b8[];
extern undefined4 DAT_100b04c4;
undefined __cdecl FUN_10046a29(int * param_1, int param_2);

void __stdcall FUN_100467fd(void)

{
  if (DAT_100b04c4 != 0) {
    FUN_10046a29((int *)(DAT_100b04b8),1);
  }
  return;
}
