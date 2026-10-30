/* SPDX-License-Identifier: MIT */
/* mercsw 1004e27d */
extern int DAT_100aa1ac;
extern int DAT_100adf34;
extern int DAT_100b0710;
extern unsigned char DAT_10123240[];
extern unsigned char DAT_1012327b[];
extern unsigned char DAT_101232ee[];
extern unsigned short DAT_101658a2[];
extern unsigned char DAT_10165922[];

void __stdcall FUN_1004e27d(void)
{
    int bVar1;
    int bVar2;
    int iVar3;
    unsigned int uVar4;
    int local_34;
    int local_28;
    int local_24;
    int local_1c;
    int local_18;
    int local_14;
    int local_c;
    int cnt;
    int tmp;

    local_c = -0x7fff;
    bVar2 = 0;
    if ((DAT_100aa1ac != 0) && (*(char *)(DAT_100adf34 + 10) == '\0')) {
        local_34 = 0;
        bVar1 = 0;
        for (local_18 = 0; ; local_18 = local_18 + 1) {
            __builtin_memcpy(&cnt, DAT_10123240 + (unsigned int)DAT_100b0710 * 0x3c0aU, 4);
            if (!(local_18 < cnt)) {
                break;
            }
            iVar3 = (int)((unsigned int)DAT_100b0710 * 0x3c0aU + (unsigned int)local_18 * 0x13fU);
            local_34 = (int)((unsigned int)local_34 + (unsigned int)DAT_101232ee[iVar3]);
            if ((DAT_101232ee[iVar3] != 0) && (DAT_1012327b[iVar3] == 2)) {
                bVar1 = 1;
            }
        }
        if ((bVar1) && (local_34 == 1)) {
            bVar2 = 1;
        }
        if (bVar2) {
            local_14 = 0;
            for (local_1c = 0; local_1c < 8; local_1c = local_1c + 1) {
                local_28 = 0;
                for (local_24 = 0; local_24 < 8; local_24 = local_24 + 1) {
                    if (local_24 == local_1c) {
                        uVar4 = 0U - (unsigned int)DAT_101658a2[local_1c * 8 + local_24];
                    } else {
                        uVar4 = (unsigned int)DAT_101658a2[local_1c * 8 + local_24];
                    }
                    local_28 = (int)((unsigned int)local_28 + uVar4);
                }
                if (local_c < local_28) {
                    local_c = local_28;
                    local_14 = local_1c;
                } else if (local_c == local_28) {
                    local_14 = -2;
                }
            }
            tmp = local_14;
            __builtin_memcpy(DAT_10165922, &tmp, 4);
        }
    }
    return;
}
