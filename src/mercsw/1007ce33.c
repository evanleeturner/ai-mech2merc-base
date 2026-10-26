/* SPDX-License-Identifier: MIT */
/* mercsw 1007ce33 */
extern int DAT_100b6820;
extern int DAT_100b681c;
extern int DAT_100c96b4;
extern int DAT_100c96b8;
extern unsigned char DAT_100c9ac0[];
extern unsigned char DAT_100c9ed0[];
extern unsigned char DAT_100c9ed4[];
extern unsigned char DAT_100c9ed8[];
extern unsigned char DAT_100c9edc[];
extern unsigned char DAT_100c9ee0[];
extern unsigned char DAT_100c9ee4[];
extern unsigned char DAT_100c9ee8[];
extern unsigned char DAT_100c9eec[];
extern unsigned char DAT_100c9ef0[];
extern unsigned char DAT_100c9ef4[];
extern unsigned char DAT_100c9ef8[];
extern unsigned char DAT_100c9efc[];
extern unsigned char DAT_100c9f00[];
extern unsigned char DAT_100c9f04[];
extern unsigned char DAT_100c9f08[];

void __stdcall FUN_1007ce33(void)
{
    int iVar1;
    int local_8;

    DAT_100b6820 = 0;
    DAT_100b681c = 0;
    DAT_100c96b4 = 0x100;
    DAT_100c96b8 = 0xff;
    for (local_8 = 0; local_8 < 0x100; local_8 = (int)((unsigned int)local_8 + 1u)) {
        iVar1 = (int)((unsigned int)local_8 * 0x40u);
        *(int *)(DAT_100c9ac0 + (unsigned int)local_8 * 4u) = local_8;
        *(unsigned int *)(DAT_100c9ed8 + iVar1) = 0;
        *(unsigned int *)(DAT_100c9ed0 + iVar1) = 0;
        *(unsigned int *)(DAT_100c9ed4 + iVar1) = 0;
        *(int *)(DAT_100c9edc + iVar1) = local_8;
        *(unsigned int *)(DAT_100c9ee0 + iVar1) = 0xffffffffu;
        *(unsigned int *)(DAT_100c9ee4 + iVar1) = 0;
        *(unsigned int *)(DAT_100c9ee8 + iVar1) = 0;
        *(unsigned int *)(DAT_100c9eec + iVar1) = 0;
        *(unsigned int *)(DAT_100c9ef0 + iVar1) = 0;
        *(unsigned int *)(DAT_100c9ef4 + iVar1) = 0;
        *(unsigned int *)(DAT_100c9ef8 + iVar1) = 0;
        *(unsigned int *)(DAT_100c9efc + iVar1) = 0;
        *(unsigned int *)(DAT_100c9f00 + iVar1) = 0;
        *(unsigned int *)(DAT_100c9f04 + iVar1) = 0;
        *(unsigned int *)(DAT_100c9f08 + iVar1) = 0xffffffffu;
    }
    return;
}
