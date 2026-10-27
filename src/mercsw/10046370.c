/* SPDX-License-Identifier: MIT */
/* mercsw 10046370 */
undefined4 __stdcall mciSendCommandA(undefined4, undefined4, undefined4, undefined4);
undefined4 DAT_100b04b0;

void __stdcall FUN_10046370(void)
{
    undefined4 local_8;
    mciSendCommandA(DAT_100b04b0, 0x809, 0, (undefined4)&local_8);
    return;
}
