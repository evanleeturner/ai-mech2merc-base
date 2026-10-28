/* SPDX-License-Identifier: MIT */
/* mercsw 1006aec6 */
extern unsigned short _DAT_100c7fc8;
extern unsigned short _DAT_100c7fca;
extern unsigned long _DAT_100c7fcc;
extern unsigned long _DAT_100c7fd0;
extern unsigned short _DAT_100c7fd4;
extern unsigned short _DAT_100c7fd6;

int __stdcall _AIL_waveOutOpen(unsigned long *hWaveOut, unsigned long param_2, unsigned long param_3, unsigned short *lpFormat);

unsigned long __stdcall FUN_1006aec6(void)
{
    unsigned long local_8;
    int iVar1;

    _DAT_100c7fc8 = 1;
    _DAT_100c7fca = 2;
    _DAT_100c7fcc = 0x2b11;
    _DAT_100c7fd0 = 0x5622;
    _DAT_100c7fd4 = 2;
    _DAT_100c7fd6 = 8;
    iVar1 = _AIL_waveOutOpen(&local_8, 0, 0, &_DAT_100c7fc8);
    if (iVar1 != 0) {
        local_8 = 0;
    }
    return local_8;
}
