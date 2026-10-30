/* SPDX-License-Identifier: MIT */
/* mw2shell 1006a631 */
typedef unsigned long DWORD;

void __stdcall RaiseException(DWORD, DWORD, DWORD, const DWORD *);

extern unsigned char DAT_100a9cb1[];
extern unsigned char DAT_100a92b1[];
extern unsigned char DAT_100a8fb1[];
extern unsigned char DAT_100a93b1[];
extern unsigned char DAT_100a9fb1[];
extern void (__cdecl *DAT_100a8a58)(unsigned int, unsigned char *);
extern void (__cdecl *DAT_100a8a5c)(unsigned int, unsigned char *);
extern void (__cdecl *DAT_100a8a4c)(void);

void __cdecl FUN_1006a631(unsigned int *param_1, int param_2, unsigned int param_3)
{
    short sVar1;
    _Bool bVar2;
    unsigned char bVar3;
    signed char cVar4;
    unsigned char uVar5;
    int iVar6;
    unsigned int uVar7;
    int iVar8;
    unsigned char *pbVar9;
    unsigned int uVar10;
    unsigned char *pbVar12;
    unsigned char *pbVar13;
    unsigned int local_14;
    unsigned int local_c;
    unsigned int local_8;
    unsigned int i;
    unsigned int hi;

    /* 0x40 dwords cleared, done bytewise (address is unaligned) */
    for (i = 0; i < 0x100; i++) {
        DAT_100a9cb1[i] = 0;
    }

    iVar6 = (int)((param_1[2] + 1u) * (param_1[1] + 1u));
    local_8 = 0xffffffff;
    pbVar9 = (unsigned char *)*param_1;
    pbVar12 = DAT_100a92b1;
    do {
        bVar3 = *pbVar9;
        uVar7 = (unsigned int)bVar3;
        pbVar13 = pbVar12;
        if (DAT_100a9cb1[uVar7] == 0) {
            DAT_100a9cb1[uVar7] = DAT_100a9cb1[uVar7] | 1;
            pbVar13 = pbVar12 + 1;
            *pbVar12 = bVar3;
            local_8 = local_8 + 1;
            (*DAT_100a8a58)(uVar7, &DAT_100a8fb1[uVar7 * 3]);
        }
        iVar6 = iVar6 - 1;
        pbVar9 = pbVar9 + 1;
        pbVar12 = pbVar13;
    } while (iVar6 != 0);

    local_c = 0;
    uVar7 = local_8;
    do {
        iVar6 = (int)((unsigned int)DAT_100a92b1[uVar7] * 3u);
        iVar8 = 2;
        do {
            bVar3 = (unsigned char)(DAT_100a8fb1[iVar6] - *(unsigned char *)(iVar6 + param_2));
            uVar5 = 0xff;
            if ((signed char)DAT_100a8fb1[iVar6] < *(signed char *)(iVar6 + param_2)) {
                bVar3 = (unsigned char)(0 - bVar3);
                uVar5 = 1;
            }
            DAT_100a9cb1[iVar6] = uVar5;
            DAT_100a93b1[iVar6] = bVar3;
            if ((signed char)(unsigned char)local_c < (signed char)bVar3) {
                local_c = (unsigned int)bVar3;
            }
            iVar6 = iVar6 + 1;
            iVar8 = iVar8 - 1;
        } while (-1 < iVar8);
        uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);

    bVar3 = (unsigned char)((unsigned char)local_c >> 1);
    for (i = 0; i < local_8; i++) {
        DAT_100a9fb1[i] = bVar3;
    }

    if (local_c != 0) {
        local_14 = 0x8000;
        uVar7 = local_8;
        uVar10 = local_c;
        do {
            do {
                iVar6 = (int)((unsigned int)DAT_100a92b1[uVar7] * 3u);
                iVar8 = 2;
                do {
                    cVar4 = (signed char)(DAT_100a9fb1[iVar6 + iVar8] + DAT_100a93b1[iVar6 + iVar8]);
                    if ((signed char)(unsigned char)local_c <= cVar4) {
                        cVar4 = (signed char)(cVar4 - (unsigned char)local_c);
                        DAT_100a8fb1[iVar6 + iVar8] =
                            (unsigned char)(DAT_100a8fb1[iVar6 + iVar8] + DAT_100a9cb1[iVar6 + iVar8]);
                    }
                    DAT_100a9fb1[iVar6 + iVar8] = (unsigned char)cVar4;
                    iVar8 = iVar8 - 1;
                } while (-1 < iVar8);
                (*DAT_100a8a5c)((unsigned int)DAT_100a92b1[uVar7], &DAT_100a8fb1[iVar6]);
                uVar7 = uVar7 - 1;
            } while (-1 < (int)uVar7);

            hi = param_3 >> 16;
            if (local_c == 0 || hi >= local_c) {
                RaiseException(0xC0000094UL, 0, 0, NULL);
            }
            local_14 = local_14 +
                       (unsigned int)(((unsigned long long)param_3 << 16) /
                                      (unsigned long long)local_c);
            bVar2 = 0 < (short)(local_14 >> 16);
            if (bVar2) {
                do {
                    (*DAT_100a8a4c)();
                    sVar1 = (short)((short)(local_14 >> 16) - 1);
                    local_14 = ((unsigned int)(unsigned short)sVar1 << 16) | (local_14 & 0xffff);
                } while (sVar1 != 0);
            }
            uVar10 = uVar10 - 1;
            uVar7 = local_8;
        } while (uVar10 != 0);
    }
    return;
}
