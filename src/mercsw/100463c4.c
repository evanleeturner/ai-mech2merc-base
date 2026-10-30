/* SPDX-License-Identifier: MIT */
/* mercsw 100463c4 */
extern undefined4 DAT_100b04b0;
extern undefined4 __stdcall mciSendCommandA(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4);

void __stdcall StopMciDevice(void)
{
    undefined4 local_8;
    
    mciSendCommandA(DAT_100b04b0, 0x808, 0, (undefined4)&local_8);
    return;
}
