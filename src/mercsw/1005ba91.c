/* SPDX-License-Identifier: MIT */
/* mercsw 1005ba91 */
extern unsigned char DAT_100b24f9[];
extern unsigned char DAT_100b1af9[];
extern unsigned char DAT_100b17f9[];
extern unsigned char DAT_100b1bf9[];
extern unsigned char DAT_100b27f9[];
extern void (__cdecl *DAT_100b12a0)(unsigned int, unsigned char *);
extern void (__cdecl *DAT_100b12a4)(unsigned int, unsigned char *);
extern void (__cdecl *DAT_100b1294)(void);

void __stdcall RaiseException(DWORD, DWORD, DWORD, const DWORD *);

void __cdecl FUN_1005ba91(unsigned int *param_1, int param_2, unsigned int param_3)
{
    short sVar1;
    int bVar2;
    unsigned char bVar3;
    char cVar4;
    unsigned char uVar5;
    unsigned int iVar6;
    unsigned int uVar7;
    int iVar8;
    unsigned char *pbVar9;
    unsigned int uVar10;
    unsigned int *puVar11;
    unsigned char *pbVar12;
    unsigned char *pbVar13;
    unsigned int local_14;
    unsigned int local_c;
    unsigned int local_8;

    puVar11 = (unsigned int *)DAT_100b24f9;
    for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 - 1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
    }
    iVar6 = (param_1[2] + 1) * (param_1[1] + 1);
    local_8 = 0xffffffff;
    pbVar9 = (unsigned char *)*param_1;
    pbVar12 = DAT_100b1af9;
    do {
        bVar3 = *pbVar9;
        uVar7 = (unsigned int)bVar3;
        pbVar13 = pbVar12;
        if (DAT_100b24f9[uVar7] == 0) {
            DAT_100b24f9[uVar7] = DAT_100b24f9[uVar7] | 1;
            pbVar13 = pbVar12 + 1;
            *pbVar12 = bVar3;
            local_8 = local_8 + 1;
            (*DAT_100b12a0)(uVar7, DAT_100b17f9 + uVar7 * 3);
        }
        iVar6 = iVar6 - 1;
        pbVar9 = pbVar9 + 1;
        pbVar12 = pbVar13;
    } while (iVar6 != 0);
    local_c = 0;
    uVar7 = local_8;
    do {
        iVar6 = (unsigned int)DAT_100b1af9[uVar7] * 3;
        iVar8 = 2;
        do {
            bVar3 = (unsigned char)(DAT_100b17f9[iVar6] - *(unsigned char *)(iVar6 + param_2));
            uVar5 = 0xff;
            if ((char)DAT_100b17f9[iVar6] < *(char *)(iVar6 + param_2)) {
                bVar3 = (unsigned char)(0 - bVar3);
                uVar5 = 1;
            }
            DAT_100b24f9[iVar6] = uVar5;
            DAT_100b1bf9[iVar6] = bVar3;
            if ((char)(unsigned char)local_c < (char)bVar3) {
                local_c = (unsigned int)bVar3;
            }
            iVar6 = iVar6 + 1;
            iVar8 = iVar8 - 1;
        } while (-1 < iVar8);
        uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
    bVar3 = (unsigned char)((unsigned char)local_c >> 1);
    pbVar9 = DAT_100b27f9;
    for (uVar7 = local_8 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
        pbVar9[0] = bVar3;
        pbVar9[1] = bVar3;
        pbVar9 = pbVar9 + 2;
    }
    for (uVar7 = (unsigned int)((local_8 & 1) != 0); uVar7 != 0; uVar7 = uVar7 - 1) {
        *pbVar9 = bVar3;
        pbVar9 = pbVar9 + 1;
    }
    if (local_c != 0) {
        local_14 = 0x8000;
        uVar7 = local_8;
        uVar10 = local_c;
        do {
            do {
                iVar6 = (unsigned int)DAT_100b1af9[uVar7] * 3;
                iVar8 = 2;
                do {
                    cVar4 = (char)(DAT_100b27f9[iVar6 + iVar8] + DAT_100b1bf9[iVar6 + iVar8]);
                    if ((char)(unsigned char)local_c <= cVar4) {
                        cVar4 = (char)(cVar4 - (unsigned char)local_c);
                        DAT_100b17f9[iVar6 + iVar8] =
                            (unsigned char)(DAT_100b17f9[iVar6 + iVar8] + DAT_100b24f9[iVar6 + iVar8]);
                    }
                    DAT_100b27f9[iVar6 + iVar8] = (unsigned char)cVar4;
                    iVar8 = iVar8 - 1;
                } while (-1 < iVar8);
                (*DAT_100b12a4)(DAT_100b1af9[uVar7], DAT_100b17f9 + iVar6);
                uVar7 = uVar7 - 1;
            } while (-1 < (int)uVar7);
            {
                unsigned int hi = param_3 >> 0x10;
                unsigned int lo = param_3 << 0x10;
                unsigned long long num;
                unsigned int quot;
                if (local_c == 0 || hi >= local_c) {
                    RaiseException(0xC0000094UL, 0, 0, NULL);
                }
                num = ((unsigned long long)hi << 32) | (unsigned long long)lo;
                quot = (unsigned int)(num / local_c);
                iVar6 = local_14 + quot;
            }
            bVar2 = 0 < (short)(iVar6 >> 0x10);
            local_14 = iVar6;
            if (bVar2) {
                do {
                    (*DAT_100b1294)();
                    sVar1 = (short)((short)(local_14 >> 0x10) - 1);
                    local_14 = ((unsigned int)(unsigned short)sVar1 << 16) | (local_14 & 0xffff);
                } while (sVar1 != 0);
            }
            uVar10 = uVar10 - 1;
            uVar7 = local_8;
        } while (uVar10 != 0);
    }
    return;
}
