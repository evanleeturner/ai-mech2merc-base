/* SPDX-License-Identifier: MIT */
/* mercsw 1004639a */
extern undefined4 DAT_100b04b0;
extern undefined4 __stdcall mciSendCommandA(undefined4, uint, uint, void *);

void __stdcall ResumeMciDevice(void)
{
    undefined1 local_8[4];
    
    mciSendCommandA(DAT_100b04b0, 0x855, 0, (void *)local_8);
    return;
}
