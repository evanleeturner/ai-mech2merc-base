/* SPDX-License-Identifier: MIT */
/* mercsw 10065cdb */
/* mercsw 10065cdb: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b3910;
extern undefined4 DAT_100b3920;
extern undefined4 DAT_100b3924;
extern undefined4 DAT_100b3928;
extern undefined4 DAT_100b3938;
undefined __cdecl FUN_10036aeb(uint param_1);
undefined4 __stdcall _AIL_release_timer_handle_4(undefined4);
undefined4 __stdcall _AIL_shutdown_0(void);

void __stdcall FUN_10065cdb(void)

{
  if (DAT_100b3938 != 0) {
    FUN_10036aeb(DAT_100b3924);
    FUN_10036aeb(DAT_100b3928);
    FUN_10036aeb(DAT_100b3920);
    _AIL_release_timer_handle_4(DAT_100b3910);
    DAT_100b3910 = 0xffffffff;
    _AIL_shutdown_0();
    DAT_100b3938 = 0;
  }
  return;
}
