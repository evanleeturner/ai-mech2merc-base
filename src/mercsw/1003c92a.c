/* SPDX-License-Identifier: MIT */
/* mercsw 1003c92a */
/* mercsw 1003c92a: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100adf38;
extern undefined DAT_100aefac;
extern undefined4 DAT_100aefb0;
extern undefined4 DAT_100b3c4c;
extern undefined4 DAT_100eef40[];
undefined4 __stdcall _AIL_send_channel_voice_message_20(undefined4, undefined4, undefined4, undefined4, undefined4);
int __cdecl FixedMul16(int param_1, int param_2);

void __cdecl FUN_1003c92a(int param_1)

{
  uint uVar1;
  
  if (((DAT_100aefb0 != 0) && (-1 < (signed char)DAT_100aefac)) &&
     (1 < *(int *)(*(int *)(DAT_100eef40[DAT_100adf38] + 0x20) + 0x3d4))) {
    uVar1 = param_1 * 4 + 0x2000;
    _AIL_send_channel_voice_message_20
              (DAT_100aefb0,0,(int)DAT_100aefac | 0xe0,uVar1 & 0x7f,(uVar1 & 0x3f00) >> 8);
    uVar1 = FixedMul16(DAT_100b3c4c,100);
    _AIL_send_channel_voice_message_20(DAT_100aefb0,0,(int)DAT_100aefac | 0xb0,7,uVar1 & 0xff);
  }
  return;
}
