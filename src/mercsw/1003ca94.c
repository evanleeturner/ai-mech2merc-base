/* SPDX-License-Identifier: MIT */
/* mercsw 1003ca94 */
/* mercsw 1003ca94: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100aefac;
extern undefined4 DAT_100aefb0;
extern undefined4 DAT_100b3c4c;
int __cdecl FUN_10003d60(int param_1, int param_2);
undefined4 __stdcall _AIL_send_channel_voice_message_20(undefined4, undefined4, undefined4, undefined4, undefined4);

void __stdcall FUN_1003ca94(void)

{
  uint uVar1;
  
  if ((DAT_100aefb0 != 0) && (-1 < (signed char)DAT_100aefac)) {
    uVar1 = FUN_10003d60(DAT_100b3c4c,100);
    _AIL_send_channel_voice_message_20(DAT_100aefb0,0,(int)DAT_100aefac | 0xb0,7,uVar1 & 0xff);
  }
  return;
}
