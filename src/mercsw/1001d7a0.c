/* SPDX-License-Identifier: MIT */
/* mercsw 1001d7a0 */
extern unsigned int DAT_101e8db0;
extern unsigned int DAT_101e8db4;
extern short DAT_100ab0c8;

void __stdcall FUN_1001d7a0(void)
{
    int iVar1;
    unsigned int *puVar2;
    short *local_c;
    unsigned int local_8;

    puVar2 = &DAT_101e8db0;
    for (iVar1 = 0x960; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = 0xffffffffU;
        puVar2 = puVar2 + 1;
    }
    local_c = &DAT_100ab0c8;
    for (local_8 = 0; local_8 < 0x2e; local_8 = local_8 + 1) {
        iVar1 = (int)*local_c;
        if ((0 < iVar1) && (iVar1 < 0x4b0)) {
            *(short *)(&DAT_101e8db0 + iVar1 * 2) = local_c[1];
            *(short *)((int)&DAT_101e8db0 + iVar1 * 8 + 2) = local_c[2];
            *(short *)(&DAT_101e8db4 + iVar1 * 2) = local_c[3];
            *(unsigned short *)((int)&DAT_101e8db4 + iVar1 * 8 + 2) = 0;
        }
        local_c = local_c + 4;
    }
    return;
}
