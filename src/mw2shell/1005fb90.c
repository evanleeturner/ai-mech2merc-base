/* SPDX-License-Identifier: MIT */
/* mw2shell 1005fb90 */
/* mw2shell 1005fb90: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a7248;
extern undefined4 DAT_100a724c;
extern undefined4 DAT_100a7580;

void __stdcall FUN_1005fb90(void)

{
  if (DAT_100a724c != 0) {
    (**(code **)(DAT_100a724c + 0x14))();
  }
  if (DAT_100a7248 != 0) {
    (**(code **)(DAT_100a7248 + 0x10))();
  }
  DAT_100a7580 = 1;
  return;
}
