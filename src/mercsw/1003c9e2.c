/* SPDX-License-Identifier: MIT */
/* mercsw 1003c9e2 */
/* mercsw 1003c9e2: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100aefac;
extern undefined4 DAT_100aefb0;
undefined4 __stdcall _AIL_send_channel_voice_message_20(undefined4, undefined4, undefined4, undefined4, undefined4);
undefined4 __stdcall _AIL_release_channel_8(undefined4, undefined4);

void __stdcall FUN_1003c9e2(void)

{
  if ((DAT_100aefb0 != 0) && (-1 < (signed char)DAT_100aefac)) {
    _AIL_send_channel_voice_message_20(DAT_100aefb0,0,(int)DAT_100aefac | 0x80,0x26,0x7f);
    _AIL_release_channel_8(DAT_100aefb0,DAT_100aefac + 1);
    DAT_100aefac = -1;
  }
  return;
}
