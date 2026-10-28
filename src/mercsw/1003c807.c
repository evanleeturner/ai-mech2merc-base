/* SPDX-License-Identifier: MIT */
/* mercsw 1003c807 */
/* mercsw 1003c807: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100aefac;
extern undefined4 DAT_100aefb0;
extern undefined4 DAT_100aefb8;
undefined4 __stdcall _AIL_lock_channel_4(undefined4);
undefined4 __stdcall _AIL_send_channel_voice_message_20(undefined4, undefined4, undefined4, undefined4, undefined4);

void __stdcall FUN_1003c807(void)

{
  char cVar1;
  
  if (((DAT_100aefb0 != 0) && (DAT_100aefac < '\0')) && (DAT_100aefb8 != 0)) {
    cVar1 = _AIL_lock_channel_4(DAT_100aefb0);
    if (cVar1 == '\0') {
      DAT_100aefac = '\0';
    }
    else {
      DAT_100aefac = cVar1 + -1;
      _AIL_send_channel_voice_message_20(DAT_100aefb0,0,(int)DAT_100aefac | 0xb0,0x72,0);
      _AIL_send_channel_voice_message_20(DAT_100aefb0,0,(int)DAT_100aefac | 0xc0,3,0);
      _AIL_send_channel_voice_message_20(DAT_100aefb0,0,(int)DAT_100aefac | 0xe0,0,0x30);
      _AIL_send_channel_voice_message_20(DAT_100aefb0,0,(int)DAT_100aefac | 0xb0,10,0x40);
      _AIL_send_channel_voice_message_20(DAT_100aefb0,0,(int)DAT_100aefac | 0xb0,7,0);
      _AIL_send_channel_voice_message_20(DAT_100aefb0,0,(int)DAT_100aefac | 0x90,0x26,0x7f);
    }
  }
  return;
}
