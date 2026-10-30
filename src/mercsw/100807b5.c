/* SPDX-License-Identifier: MIT */
/* mercsw 100807b5 */
extern int DAT_100c96b0;
extern int DAT_100c9ec4;
extern int DAT_100c9ec8;
extern int DAT_100c9ec0;
extern int DAT_10165944;

void __stdcall RaiseException(DWORD, DWORD, DWORD, const DWORD *);

int __cdecl FUN_100807b5(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6)
{
    int bVar1;
    short sVar2;
    long long lVar3;
    unsigned int uVar4;
    unsigned int uVar5;
    unsigned int uVar6;
    unsigned char bVar7;
    short sVar8;
    short sVar9;
    unsigned short uVar10;
    unsigned int uVar11;
    int iVar12;
    short local_14;
    unsigned int local_10;
    unsigned int local_c;
    unsigned int local_8;

    local_8 = (unsigned int)param_1;
    local_c = (unsigned int)param_2;
    local_10 = (unsigned int)param_3;
    if (DAT_100c96b0 != 0) {
        local_10 = 0;
        local_c = 0;
        local_8 = 0;
    }
    uVar4 = (unsigned int)DAT_100c9ec4 - local_8;
    bVar1 = DAT_100c9ec4 < (int)local_8;
    local_8 = uVar4;
    if (bVar1) {
        local_8 = 0u - uVar4;
    }
    uVar5 = (unsigned int)DAT_100c9ec8 - local_c;
    bVar1 = DAT_100c9ec8 < (int)local_c;
    local_c = uVar5;
    if (bVar1) {
        local_c = 0u - uVar5;
    }
    uVar6 = (unsigned int)DAT_100c9ec0 - local_10;
    bVar1 = DAT_100c9ec0 < (int)local_10;
    local_10 = uVar6;
    if (bVar1) {
        local_10 = 0u - uVar6;
    }
    uVar11 = local_8 | local_c | local_10;
    if (uVar11 == 0) {
        local_14 = 0x7f;
        goto LAB_1008090b;
    }
    lVar3 = (long long)((unsigned long long)((long long)(int)uVar4 * (long long)param_4)
                        + (unsigned long long)((long long)(int)uVar5 * (long long)param_5)
                        + (unsigned long long)((long long)(int)uVar6 * (long long)param_6)) >> 0x10;
    uVar4 = (unsigned int)lVar3;
    iVar12 = (int)((unsigned long long)lVar3 >> 0x20);
    sVar8 = 0;
    if ((uVar11 & 0xff000000u) == 0) {
        if ((uVar11 & 0xffff0000u) != 0) {
            sVar8 = 8;
            goto LAB_1008088b;
        }
    }
    else {
        sVar8 = 0x10;
LAB_1008088b:
        uVar11 = uVar11 >> (unsigned char)sVar8;
    }
    sVar2 = 0xf;
    if ((unsigned short)uVar11 != 0) {
        for (; (unsigned short)((unsigned short)uVar11 >> sVar2) == 0; sVar2 = (short)(sVar2 + -1)) {
        }
    }
    sVar9 = (short)(sVar8 + sVar2 + -7);
    if (sVar9 != 0) {
        bVar7 = (unsigned char)sVar9;
        if ((short)(sVar8 + sVar2) < 7) {
            bVar7 = (unsigned char)(0 - bVar7);
            local_8 = local_8 << (bVar7 & 0x1f);
            local_c = local_c << (bVar7 & 0x1f);
            local_10 = local_10 << (bVar7 & 0x1f);
            lVar3 = (long long)(((unsigned long long)(((unsigned int)iVar12 << (bVar7 & 0x1f))
                                                      | (uVar4 >> (0x20 - (bVar7 & 0x1f)))) << 32)
                                | (unsigned long long)(uVar4 << (bVar7 & 0x1f)));
        }
        else {
            local_8 = local_8 >> (bVar7 & 0x1f);
            local_c = local_c >> (bVar7 & 0x1f);
            local_10 = local_10 >> (bVar7 & 0x1f);
            lVar3 = (long long)(((unsigned long long)(unsigned int)(iVar12 >> (bVar7 & 0x1f)) << 32)
                                | (unsigned long long)((uVar4 >> (bVar7 & 0x1f))
                                                       | ((unsigned int)iVar12 << (0x20 - (bVar7 & 0x1f)))));
        }
    }
    uVar10 = (unsigned short)((unsigned short)(unsigned char)local_8 * (unsigned short)(unsigned char)local_8
                              + (unsigned short)(unsigned char)local_c * (unsigned short)(unsigned char)local_c);
    iVar12 = (int)*(short *)(int)((unsigned int)((((int)(unsigned short)(
                 ((unsigned short)(uVar10 + (unsigned short)(unsigned char)local_10 * (unsigned short)(unsigned char)local_10) >> 7)
                 | (unsigned short)(
                     (((unsigned int)((unsigned short)(unsigned char)local_8 * (unsigned short)(unsigned char)local_8)
                       + (unsigned int)((unsigned short)(unsigned char)local_c * (unsigned short)(unsigned char)local_c)) > 0xffffu)
                     + (((unsigned int)uVar10
                         + (unsigned int)((unsigned short)(unsigned char)local_10 * (unsigned short)(unsigned char)local_10)) > 0xffffu))))
                 * 0x200) & 0xfffe)
                 + (unsigned int)DAT_10165944);
    local_14 = 0;
    if (iVar12 == 0) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
    }
    else {
        if (iVar12 == -1) {
            lVar3 = (long long)(0ULL - (unsigned long long)lVar3);
        }
        else {
            lVar3 = lVar3 / (long long)iVar12;
        }
        if (lVar3 != (long long)(int)lVar3) {
            RaiseException(0xC0000094UL, 0, 0, NULL);
        }
        else {
            local_14 = (short)lVar3;
        }
    }
LAB_1008090b:
    return (int)local_14;
}
