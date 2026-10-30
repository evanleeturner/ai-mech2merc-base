/* SPDX-License-Identifier: MIT */
/* mw2shell 10067399 */
extern unsigned char DAT_100a8a79[4];
extern unsigned char DAT_100a8a81[4];
extern unsigned char DAT_100a8a85[4];
extern unsigned char DAT_100a8a89[4];
extern unsigned char DAT_100a8aa1[4];
extern unsigned char DAT_100a8aa5[4];
extern unsigned char DAT_100a8aa9[4];
extern unsigned char DAT_100a8aad[4];

void __cdecl FUN_100676ae(int param_1, unsigned char param_2, int param_3);

int __cdecl FUN_10067399(int *param_1, unsigned char param_2, int param_3, int param_4, unsigned int *param_5)
{
    int *piVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    unsigned char *pbVar13;
    int bVar14;
    int local_14;
    int t0;
    int t1;
    unsigned char *p0;
    unsigned char *p1;
    unsigned int *pu;

    piVar1 = (int *)*param_1;
    iVar11 = piVar1[1];
    iVar6 = (int)((unsigned int)iVar11 + 1u);
    if ((iVar6 == 0 || iVar11 < -1) || (iVar2 = piVar1[2], iVar2 < 0)) {
        return -1;
    }
    iVar3 = param_1[1];
    iVar7 = iVar3;
    if (iVar3 < 1) {
        iVar7 = 0;
    }
    iVar4 = param_1[2];
    local_14 = iVar4;
    if (iVar4 < 1) {
        local_14 = 0;
    }
    iVar8 = param_1[3];
    if (iVar11 <= param_1[3]) {
        iVar8 = iVar11;
    }
    iVar11 = param_1[4];
    if (iVar2 <= param_1[4]) {
        iVar11 = iVar2;
    }
    if ((iVar8 < iVar7) || (iVar11 < local_14)) {
        return -2;
    }
    iVar2 = *piVar1;
    __builtin_memcpy(DAT_100a8a79, &param_5, 4);
    if (param_5 != (unsigned int *)0) {
        *param_5 = ((unsigned int)(unsigned short)((short)param_1[3] - (short)param_1[1]) << 16)
                   | (unsigned int)(unsigned short)((short)param_1[4] - (short)param_1[2]);
        param_5[1] = ((unsigned int)(unsigned short)(short)param_3 << 16)
                     | (unsigned int)(unsigned short)(short)param_4;
        param_5[2] = 0;
        param_5[3] = 0;
        param_5[4] = 0xffffffffu;
        param_5[5] = 0xffffffffu;
    }
    iVar9 = (int)(((unsigned int)iVar8 + 1u) - (unsigned int)iVar7);
    t0 = 0x7fffffff;
    __builtin_memcpy(DAT_100a8aa1, &t0, 4);
    __builtin_memcpy(DAT_100a8aa5, &t0, 4);
    t0 = -0x7fffffff;
    __builtin_memcpy(DAT_100a8aa9, &t0, 4);
    __builtin_memcpy(DAT_100a8aad, &t0, 4);
    p0 = (unsigned char *)((unsigned int)local_14 * (unsigned int)iVar6
                           + (unsigned int)iVar2 + (unsigned int)iVar7);
    __builtin_memcpy(DAT_100a8a81, &p0, 4);
    do {
        bVar14 = (local_14 == iVar11);
        if (iVar11 < local_14) {
            if (param_5 != (unsigned int *)0) {
                __builtin_memcpy(&t0, DAT_100a8aa1, 4);
                param_5[2] = (unsigned int)t0 - ((unsigned int)param_3 + (unsigned int)iVar3);
                __builtin_memcpy(&t0, DAT_100a8aa5, 4);
                param_5[3] = (unsigned int)t0 - ((unsigned int)param_4 + (unsigned int)iVar4);
                __builtin_memcpy(&t0, DAT_100a8aa9, 4);
                param_5[4] = (unsigned int)t0 - ((unsigned int)param_3 + (unsigned int)iVar3);
                __builtin_memcpy(&t0, DAT_100a8aad, 4);
                param_5[5] = (unsigned int)t0 - ((unsigned int)param_4 + (unsigned int)iVar4);
            }
            pu = param_5 + 6;
            __builtin_memcpy(DAT_100a8a89, &pu, 4);
            __builtin_memcpy(&t0, DAT_100a8aa9, 4);
            __builtin_memcpy(&t1, DAT_100a8aa1, 4);
            iVar11 = (int)(((unsigned int)t0 + 1u) - (unsigned int)t1);
            __builtin_memcpy(&t0, DAT_100a8aa5, 4);
            __builtin_memcpy(&t1, DAT_100a8aa1, 4);
            p0 = (unsigned char *)((unsigned int)t0 * (unsigned int)iVar6
                                   + (unsigned int)iVar2 + (unsigned int)t1);
            __builtin_memcpy(DAT_100a8a81, &p0, 4);
            __builtin_memcpy(&local_14, DAT_100a8aa5, 4);
            for (;;) {
                __builtin_memcpy(&t0, DAT_100a8aad, 4);
                if (!(local_14 <= t0)) {
                    break;
                }
                FUN_100676ae(iVar11, param_2, iVar7);
                __builtin_memcpy(&p0, DAT_100a8a81, 4);
                p0 = p0 + iVar6;
                __builtin_memcpy(DAT_100a8a81, &p0, 4);
                local_14 = (int)((unsigned int)local_14 + 1u);
            }
            __builtin_memcpy(&pu, DAT_100a8a89, 4);
            return (int)((unsigned int)pu - (unsigned int)param_5);
        }
        __builtin_memcpy(&p0, DAT_100a8a81, 4);
        __builtin_memcpy(DAT_100a8a85, &p0, 4);
        iVar12 = iVar9;
        pbVar13 = p0;
        do {
            if (iVar12 == 0) break;
            iVar12 = iVar12 + -1;
            bVar14 = (param_2 == *pbVar13);
            pbVar13 = pbVar13 + 1;
        } while (bVar14);
        __builtin_memcpy(&iVar5, DAT_100a8aa9, 4);
        if (!bVar14) {
            __builtin_memcpy(&t0, DAT_100a8aa5, 4);
            if (local_14 <= t0) {
                __builtin_memcpy(DAT_100a8aa5, &local_14, 4);
            }
            __builtin_memcpy(&t0, DAT_100a8aad, 4);
            if (t0 <= local_14) {
                __builtin_memcpy(DAT_100a8aad, &local_14, 4);
            }
            iVar10 = (int)((unsigned int)iVar8 - (unsigned int)iVar12);
            __builtin_memcpy(&t0, DAT_100a8aa1, 4);
            if (t0 <= (int)((unsigned int)iVar8 - (unsigned int)iVar12)) {
                iVar10 = t0;
            }
            __builtin_memcpy(&p0, DAT_100a8a81, 4);
            p1 = p0 + iVar9 + -1;
            __builtin_memcpy(DAT_100a8a85, &p1, 4);
            bVar14 = (p1 == (unsigned char *)0);
            iVar12 = iVar9;
            pbVar13 = p1;
            do {
                if (iVar12 == 0) break;
                iVar12 = iVar12 + -1;
                bVar14 = (param_2 == *pbVar13);
                pbVar13 = pbVar13 + -1;
            } while (bVar14);
            __builtin_memcpy(DAT_100a8aa1, &iVar10, 4);
            if (!bVar14) {
                iVar5 = (int)((unsigned int)iVar7 + (unsigned int)iVar12);
                __builtin_memcpy(&t0, DAT_100a8aa9, 4);
                if ((int)((unsigned int)iVar7 + (unsigned int)iVar12) <= t0) {
                    iVar5 = t0;
                }
            }
        }
        __builtin_memcpy(DAT_100a8aa9, &iVar5, 4);
        __builtin_memcpy(&p0, DAT_100a8a81, 4);
        p0 = p0 + iVar6;
        __builtin_memcpy(DAT_100a8a81, &p0, 4);
        local_14 = (int)((unsigned int)local_14 + 1u);
    } while (1);
}
