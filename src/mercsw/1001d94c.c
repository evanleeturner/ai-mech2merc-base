/* SPDX-License-Identifier: MIT */
/* mercsw 1001d94c */
extern unsigned int DAT_100ab238;
extern unsigned char DAT_101e89b0[];

void __cdecl FUN_1001d94c(unsigned char *param_1, unsigned char *param_2)
{
    unsigned int iVar1;

    iVar1 = DAT_100ab238;
    *param_2 = DAT_101e89b0[(unsigned int)*param_1 + DAT_100ab238 * 0x40u];
    param_2[1] = DAT_101e89b0[(unsigned int)param_1[1] + iVar1 * 0x40u];
    param_2[2] = DAT_101e89b0[(unsigned int)param_1[2] + iVar1 * 0x40u];
    return;
}
