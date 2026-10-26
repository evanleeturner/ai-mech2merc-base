/* SPDX-License-Identifier: MIT */
/* mw2shell 100361c0 */
extern int DAT_10093914[];
extern int DAT_10093a2c[];

void __stdcall FUN_100361c0(void)
{
    int iVar1;

    iVar1 = 0;
    do {
        *(unsigned int *)((char *)DAT_10093914 + iVar1) = 0xffffffffu;
        *(unsigned int *)((char *)DAT_10093a2c + iVar1) = 0xffffffffu;
        iVar1 = (int)((unsigned int)iVar1 + 0x40u);
    } while (iVar1 < 0xc0);
}
