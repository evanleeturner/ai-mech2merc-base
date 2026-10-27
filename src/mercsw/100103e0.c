/* SPDX-License-Identifier: MIT */
/* mercsw 100103e0 */
extern int DAT_100a9df0;
extern unsigned char DAT_101ec450[];

int __cdecl FUN_1001046c(void);

int __cdecl FUN_100103e0(unsigned int param_1, unsigned short param_2, unsigned short param_3)
{
    int iVar1;

    if (DAT_100a9df0 == -1) {
        FUN_1001046c();
    }
    if ((DAT_100a9df0 == -1) || (0x5f < DAT_100a9df0)) {
        iVar1 = -1;
    }
    else {
        iVar1 = (int)((unsigned int)DAT_100a9df0 * 8U);
        *(unsigned int *)(&DAT_101ec450[0] + iVar1) = param_1 & 0xffffU;
        *(unsigned short *)(&DAT_101ec450[0] + iVar1 + 4) = param_2;
        *(unsigned short *)(&DAT_101ec450[0] + iVar1 + 6) = param_3;
        iVar1 = DAT_100a9df0;
        DAT_100a9df0 = (int)((unsigned int)DAT_100a9df0 + 1U);
    }
    return iVar1;
}
