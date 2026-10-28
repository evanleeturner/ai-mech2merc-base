/* SPDX-License-Identifier: MIT */
/* mercsw 10081cb8 */
/* mercsw 10081cb8: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b9a18;
extern undefined4 DAT_100b9a1c;
extern undefined4 DAT_100b9d50;

void __stdcall FUN_10081cb8(void)

{
  if (DAT_100b9a1c != 0) {
    (**(code **)(DAT_100b9a1c + 0x14))();
  }
  if (DAT_100b9a18 != 0) {
    (**(code **)(DAT_100b9a18 + 0x10))();
  }
  DAT_100b9d50 = 1;
  return;
}
