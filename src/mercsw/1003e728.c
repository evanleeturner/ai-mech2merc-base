/* SPDX-License-Identifier: MIT */
/* mercsw 1003e728 */
/* mercsw 1003e728: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100af0a0;
extern undefined4 DAT_100af0a4;
extern undefined4 DAT_100c7b70;
extern undefined4 DAT_100c7b88;
undefined __cdecl FUN_1003e768(int param_1);

void __stdcall FUN_1003e728(void)

{
  DAT_100c7b70 = 0;
  DAT_100c7b88 = 0;
  if (0 < DAT_100af0a0) {
    DAT_100af0a4 = 1;
    FUN_1003e768(0);
  }
  return;
}
