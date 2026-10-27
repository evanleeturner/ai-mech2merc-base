/* SPDX-License-Identifier: MIT */
/* mercsw 1001b971 */
extern unsigned char DAT_10165944[];

void __stdcall RaiseException(DWORD, DWORD, DWORD, const DWORD *);

int __cdecl FUN_1001b971(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7,
                         int param_8, int param_9, int *param_10, int *param_11, int *param_12)
{
    long long a;
    long long b;
    unsigned long long d;
    unsigned long long ad;
    unsigned int uVar6;
    unsigned int uVar7;
    unsigned int uVar8;
    unsigned int uVar9;
    unsigned int uVar15;
    unsigned int uVar16;
    unsigned int uVar17;
    unsigned int uVar18;
    unsigned int uVar19;
    unsigned int uVar20;
    unsigned int local_28;
    short local_24;
    unsigned int local_20;
    unsigned int local_18;
    short sVar2;
    short sVar5;
    short sVar11;
    unsigned short uVar14;
    unsigned short uVar4;
    unsigned char bVar10;
    int iVar1;
    int iVar12;
    int iVar13;
    unsigned int cnt;
    unsigned long long num;
    long long q;

    /* first cross term */
    a = (long long)(int)((unsigned int)param_5 - (unsigned int)param_2) *
        (long long)(int)((unsigned int)param_9 - (unsigned int)param_6);
    b = (long long)(int)((unsigned int)param_8 - (unsigned int)param_5) *
        (long long)(int)((unsigned int)param_6 - (unsigned int)param_3);
    d = (unsigned long long)a - (unsigned long long)b;
    local_18 = (unsigned int)d;
    uVar15 = (unsigned int)(d >> 32);
    ad = (a < b) ? (0ULL - d) : d;
    uVar7 = (unsigned int)ad;
    uVar16 = (unsigned int)(ad >> 32);

    /* second cross term */
    a = (long long)(int)((unsigned int)param_6 - (unsigned int)param_3) *
        (long long)(int)((unsigned int)param_7 - (unsigned int)param_4);
    b = (long long)(int)((unsigned int)param_9 - (unsigned int)param_6) *
        (long long)(int)((unsigned int)param_4 - (unsigned int)param_1);
    d = (unsigned long long)a - (unsigned long long)b;
    local_20 = (unsigned int)d;
    uVar17 = (unsigned int)(d >> 32);
    ad = (a < b) ? (0ULL - d) : d;
    uVar8 = (unsigned int)ad;
    uVar18 = (unsigned int)(ad >> 32);

    /* third cross term */
    a = (long long)(int)((unsigned int)param_4 - (unsigned int)param_1) *
        (long long)(int)((unsigned int)param_8 - (unsigned int)param_5);
    b = (long long)(int)((unsigned int)param_7 - (unsigned int)param_4) *
        (long long)(int)((unsigned int)param_5 - (unsigned int)param_2);
    d = (unsigned long long)a - (unsigned long long)b;
    local_28 = (unsigned int)d;
    uVar19 = (unsigned int)(d >> 32);
    ad = (a < b) ? (0ULL - d) : d;
    uVar9 = (unsigned int)ad;
    uVar20 = (unsigned int)(ad >> 32);

    uVar7 = uVar9 | uVar8 | uVar7;
    uVar16 = uVar20 | uVar18 | uVar16;

    if (uVar16 == 0) {
        if (uVar7 == 0) {
            *param_12 = -1;
            *param_11 = *param_12;
            *param_10 = *param_11;
            return 0;
        }
        sVar5 = 0x18;
        if ((uVar7 & 0xffff0000U) != 0) {
            sVar5 = 8;
            uVar7 = uVar7 >> 0x10;
        }
        if ((uVar7 & 0xff00U) != 0) {
            sVar5 = (short)(sVar5 - 8);
            uVar7 = uVar7 >> 8;
        }
        sVar2 = 0xf;
        uVar14 = (unsigned short)(uVar7 << 8);
        if (uVar14 != 0) {
            for (; (uVar14 >> sVar2) == 0; sVar2 = (short)(sVar2 - 1)) {
            }
        }
        sVar11 = (short)((0xd - sVar2) + sVar5);
        local_24 = 0;
        if (sVar11 != 0) {
            if (sVar11 > 0) {
                bVar10 = (unsigned char)sVar11;
                local_18 = local_18 << (bVar10 & 0x1f);
                local_20 = local_20 << (bVar10 & 0x1f);
                local_28 = local_28 << (bVar10 & 0x1f);
                local_24 = (short)(0x1d - sVar11);
                goto LAB_1001bb2d;
            }
            local_24 = (short)(-sVar11);
            cnt = (unsigned char)local_24 & 0x1f;
            if (cnt != 0) {
                local_18 = (local_18 >> cnt) | (uVar15 << (0x20 - cnt));
                local_20 = (local_20 >> cnt) | (uVar17 << (0x20 - cnt));
                local_28 = (local_28 >> cnt) | (uVar19 << (0x20 - cnt));
            }
        }
        local_24 = (short)(local_24 + 0x1d);
    } else {
        local_24 = 0;
        if ((uVar16 & 0xffff0000U) != 0) {
            local_24 = 0x10;
            uVar16 = uVar16 >> 0x10;
        }
        if ((uVar16 & 0xff00U) != 0) {
            local_24 = (short)(local_24 + 8);
            uVar16 = uVar16 >> 8;
        }
        sVar5 = 0xf;
        uVar14 = (unsigned short)(uVar16 << 8);
        if (uVar14 != 0) {
            for (; (uVar14 >> sVar5) == 0; sVar5 = (short)(sVar5 - 1)) {
            }
        }
        local_24 = (short)(sVar5 - 5 + local_24);
        cnt = (unsigned char)local_24 & 0x1f;
        if (cnt != 0) {
            local_18 = (local_18 >> cnt) | (uVar15 << (0x20 - cnt));
            local_20 = (local_20 >> cnt) | (uVar17 << (0x20 - cnt));
            local_28 = (local_28 >> cnt) | (uVar19 << (0x20 - cnt));
        } else {
            /* shrd with count 0 leaves the low dword unchanged */
        }
        local_24 = (short)(local_24 + 0x1d);
    }
LAB_1001bb2d:
    sVar5 = (short)(local_18 >> 0x10);
    iVar1 = (int)((unsigned int)(int)sVar5 * (unsigned int)(int)sVar5);
    uVar14 = (unsigned short)iVar1;
    sVar5 = (short)(local_20 >> 0x10);
    iVar12 = (int)((unsigned int)(int)sVar5 * (unsigned int)(int)sVar5);
    uVar4 = (unsigned short)iVar12;
    sVar5 = (short)(local_28 >> 0x10);
    iVar13 = (int)((unsigned int)(int)sVar5 * (unsigned int)(int)sVar5);
    uVar6 = (unsigned int)*(unsigned short *)
            ((unsigned int)(unsigned short)(((unsigned short)((unsigned short)((unsigned int)iVar1 >> 0x10) +
                                                              (unsigned short)((unsigned int)iVar12 >> 0x10) +
                                                              (unsigned short)((((unsigned int)uVar14 + (unsigned int)uVar4) > 0xffffU) ? 1 : 0) +
                                                              (unsigned short)((unsigned int)iVar13 >> 0x10) +
                                                              (unsigned short)((((unsigned int)(unsigned short)(uVar14 + uVar4) + (unsigned int)(unsigned short)iVar13) > 0xffffU) ? 1 : 0)) >> 4) << 1)
             + (unsigned int)DAT_10165944);

    /* param_10 */
    num = ((unsigned long long)(((unsigned int)((int)local_18 >> 0x1f) << 0xd) | (local_18 >> 0x13)) << 32) |
          (unsigned long long)(local_18 << 0xd);
    if (uVar6 == 0) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
        q = 0;
    } else {
        q = (long long)num / (long long)(int)uVar6;
        if (q != (long long)(int)q) {
            RaiseException(0xC0000094UL, 0, 0, NULL);
        }
    }
    *param_10 = (int)(0U - (unsigned int)(int)q);

    /* param_11 */
    num = ((unsigned long long)(((unsigned int)((int)local_20 >> 0x1f) << 0xd) | (local_20 >> 0x13)) << 32) |
          (unsigned long long)(local_20 << 0xd);
    if (uVar6 == 0) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
        q = 0;
    } else {
        q = (long long)num / (long long)(int)uVar6;
        if (q != (long long)(int)q) {
            RaiseException(0xC0000094UL, 0, 0, NULL);
        }
    }
    *param_11 = (int)(0U - (unsigned int)(int)q);

    /* param_12 */
    num = ((unsigned long long)(((unsigned int)((int)local_28 >> 0x1f) << 0xd) | (local_28 >> 0x13)) << 32) |
          (unsigned long long)(local_28 << 0xd);
    if (uVar6 == 0) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
        q = 0;
    } else {
        q = (long long)num / (long long)(int)uVar6;
        if (q != (long long)(int)q) {
            RaiseException(0xC0000094UL, 0, 0, NULL);
        }
    }
    *param_12 = (int)(0U - (unsigned int)(int)q);

    return (int)local_24;
}
