/* SPDX-License-Identifier: MIT */
/* mercsw 100338f2 */
/* mercsw 100338f2: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100adb00;
extern undefined4 DAT_100adb04;
extern undefined4 DAT_100adb08;
extern undefined4 DAT_100adb0c;
undefined4 __stdcall _AIL_release_timer_handle_4(undefined4);
undefined __cdecl FUN_1006af90(undefined4 param_1);

void __stdcall FUN_100338f2(void)

{
  if (DAT_100adb00 != (undefined4)(-1)) {
    _AIL_release_timer_handle_4(DAT_100adb00);
    DAT_100adb00 = -1;
  }
  if (DAT_100adb04 != 0) {
    FUN_1006af90(DAT_100adb04);
    DAT_100adb04 = 0;
  }
  if (DAT_100adb08 != 0) {
    FUN_1006af90(DAT_100adb08);
    DAT_100adb08 = 0;
    DAT_100adb0c = 0;
  }
  return;
}
