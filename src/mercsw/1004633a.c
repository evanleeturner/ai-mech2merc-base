/* SPDX-License-Identifier: MIT */
/* mercsw 1004633a */
extern uint __stdcall mciSendCommandA(uint, uint, uint, uint);
extern uint DAT_100b04b0;

uint __stdcall FUN_1004633a(void)
{
    uint local_8;
    mciSendCommandA(DAT_100b04b0, 0x804, 0, (uint)&local_8);
    DAT_100b04b0 = 0xffffffff;
    return 0;
}
