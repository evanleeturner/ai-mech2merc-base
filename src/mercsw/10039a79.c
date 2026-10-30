/* SPDX-License-Identifier: MIT */
/* mercsw 10039a79 */
extern unsigned int DAT_10160f60[32];
extern unsigned char DAT_10160fe0[];
extern unsigned char DAT_10160fec[];
extern unsigned char DAT_10160ff0[];
extern unsigned char DAT_10160ff4[];
extern unsigned char DAT_10160ff8[];
extern unsigned char DAT_101610c4[];
extern unsigned char DAT_101610c8[];
extern unsigned char DAT_101610cc[];
extern unsigned char DAT_101610d4[];
extern unsigned char DAT_101610d8[];
extern unsigned char DAT_10161730[];
extern unsigned char DAT_10161734[];

void __stdcall FUN_10039a79(void)
{
    unsigned char *puVar1;
    int iVar2;
    int iVar3;
    unsigned int *puVar4;
    unsigned int *puVar5;
    int local_1c;
    unsigned int local_18;
    int local_14;
    unsigned int local_10;

    /* _DAT_10160fdc .. DAT_10160f60 are the 32 dwords of DAT_10160f60[] */
    DAT_10160f60[31] = 0xe8;
    DAT_10160f60[30] = 0xe8;
    DAT_10160f60[29] = 0xe9;
    DAT_10160f60[28] = 0xe9;
    DAT_10160f60[27] = 0xea;
    DAT_10160f60[26] = 0xea;
    DAT_10160f60[25] = 0xeb;
    DAT_10160f60[24] = 0xeb;
    DAT_10160f60[23] = 0xec;
    DAT_10160f60[22] = 0xec;
    DAT_10160f60[21] = 0xed;
    DAT_10160f60[20] = 0xed;
    DAT_10160f60[19] = 0xee;
    DAT_10160f60[18] = 0xee;
    DAT_10160f60[17] = 0xef;
    DAT_10160f60[16] = 0xef;
    DAT_10160f60[15] = 0xf7;
    DAT_10160f60[14] = 0xf7;
    DAT_10160f60[13] = 0xf8;
    DAT_10160f60[12] = 0xf8;
    DAT_10160f60[11] = 0xf9;
    DAT_10160f60[10] = 0xf9;
    DAT_10160f60[9] = 0xfa;
    DAT_10160f60[8] = 0xfa;
    DAT_10160f60[7] = 0xfb;
    DAT_10160f60[6] = 0xfb;
    DAT_10160f60[5] = 0xfc;
    DAT_10160f60[4] = 0xfc;
    DAT_10160f60[3] = 0xfd;
    DAT_10160f60[2] = 0xfd;
    DAT_10160f60[1] = 0xfe;
    DAT_10160f60[0] = 0xfe;

    for (local_14 = 0; local_14 < 9; local_14 = local_14 + 1) {
        iVar2 = local_14 * 0x80c;
        puVar1 = DAT_10160fe0 + iVar2;
        *(unsigned int *)(DAT_10161734 + iVar2) = 0;
        *(unsigned int *)(DAT_10161730 + iVar2) = 0x2d;
        switch (local_14) {
        case 0:
            local_10 = 0xffffc000;
            local_18 = 0xffffc000;
            break;
        case 1:
            local_10 = 0;
            local_18 = 0xffffc000;
            break;
        case 2:
            local_10 = 0x4000;
            local_18 = 0xffffc000;
            break;
        case 3:
            local_10 = 0xffffc000;
            local_18 = 0;
            break;
        case 4:
            local_10 = 0;
            local_18 = 0;
            break;
        case 5:
            local_10 = 0x4000;
            local_18 = 0;
            break;
        case 6:
            local_10 = 0xffffc000;
            local_18 = 0x4000;
            break;
        case 7:
            local_10 = 0;
            local_18 = 0x4000;
            break;
        case 8:
            local_10 = 0x4000;
            local_18 = 0x4000;
        }
        *(unsigned int *)(DAT_10160fec + iVar2) = local_10;
        *(unsigned int *)(DAT_10160ff0 + iVar2) = 10000;
        *(unsigned int *)(DAT_10160ff4 + iVar2) = local_18;
        *(unsigned int *)(DAT_101610c4 + iVar2) = 20000;
        *(unsigned int *)(DAT_101610c8 + iVar2) = 0;
        *(unsigned int *)(DAT_101610cc + iVar2) = 20000;
        *(unsigned int *)(DAT_101610d4 + iVar2) = 0;
        *(unsigned int *)(DAT_101610d8 + iVar2) = 0;
        for (local_1c = 0; local_1c < 0x2d; local_1c = local_1c + 1) {
            *(int *)(DAT_10161734 + 4 + iVar2 + local_1c * 4) = local_1c;
            *(unsigned int *)(puVar1 + local_1c * 0x24 + 0x100) = 0xffffffff;
            *(int *)(puVar1 + local_1c * 0x24 + 0xfc) = local_1c;
            *(unsigned char **)(puVar1 + local_1c * 0x24 + 0x11c) = puVar1;
        }
        puVar4 = DAT_10160f60;
        puVar5 = (unsigned int *)(DAT_10160ff8 + iVar2);
        for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
        }
    }
    return;
}
