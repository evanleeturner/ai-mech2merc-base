/* SPDX-License-Identifier: MIT */
/* mw2shell 10040270 */
extern unsigned char DAT_100980f8[];

void __stdcall FUN_10040270(void)
{
    int iVar1;

    DAT_100980f8[0] = 0xff;
    iVar1 = 1;
    do {
        DAT_100980f8[iVar1] = (unsigned char)iVar1;
        iVar1 = (int)((unsigned int)iVar1 + 1u);
    } while (iVar1 < 0x100);
    DAT_100980f8[1] = 0x11;
}
