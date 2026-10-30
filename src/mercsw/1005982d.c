/* SPDX-License-Identifier: MIT */
/* mercsw 1005982d */
unsigned int __cdecl FUN_10056489(int *param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7);

unsigned int __cdecl FUN_1005982d(int *param_1, int param_2, int param_3, int param_4, int param_5, int param_6)
{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    unsigned int uVar5;
    unsigned char uVar6;
    unsigned int uVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    unsigned int uVar14;
    int iVar15;
    int iVar16;
    int *piVar17;
    int local_30;
    int local_2c;
    int local_28;
    int local_14;
    int local_10;

    if ((param_4 == 0) || (param_5 == 0)) {
        uVar7 = FUN_10056489(param_1,
                             (int)((unsigned int)param_2 - (unsigned int)param_4),
                             (int)((unsigned int)param_3 - (unsigned int)param_5),
                             (int)((unsigned int)param_2 + (unsigned int)param_4),
                             (int)((unsigned int)param_3 + (unsigned int)param_5),
                             0, param_6);
    }
    else {
        piVar17 = (int *)*param_1;
        iVar12 = piVar17[1];
        iVar8 = (int)((unsigned int)iVar12 + 1U);
        if ((iVar8 == 0 || iVar12 < -1) || (iVar1 = piVar17[2], iVar1 < 0)) {
            return 0xffffffff;
        }
        iVar2 = param_1[1];
        iVar9 = iVar2;
        if (iVar2 < 1) {
            iVar9 = 0;
        }
        iVar3 = param_1[2];
        iVar10 = iVar3;
        if (iVar3 < 1) {
            iVar10 = 0;
        }
        iVar11 = param_1[3];
        if (iVar12 <= param_1[3]) {
            iVar11 = iVar12;
        }
        iVar12 = param_1[4];
        if (iVar1 <= param_1[4]) {
            iVar12 = iVar1;
        }
        if ((iVar11 < iVar9) || (iVar12 < iVar10)) {
            return 0xfffffffe;
        }
        iVar1 = *piVar17;
        uVar6 = (unsigned char)param_6;
        param_6 = (int)(((unsigned int)uVar6 << 24) | ((unsigned int)uVar6 << 16) |
                        ((unsigned int)uVar6 << 8) | (unsigned int)uVar6);
        iVar2 = (int)((unsigned int)param_2 + (unsigned int)iVar2);
        iVar3 = (int)((unsigned int)param_3 + (unsigned int)iVar3);
        local_10 = 0;
        local_14 = param_5;
        iVar4 = (int)((unsigned int)param_5 * (unsigned int)param_5);
        uVar5 = (unsigned int)param_4 * (unsigned int)param_4;
        local_28 = 0;
        local_2c = (int)(uVar5 * 2U * (unsigned int)param_5);
        local_30 = (int)(((uVar5 >> 2) + (unsigned int)iVar4) - uVar5 * (unsigned int)param_5);
        while ((int)((unsigned int)local_28 - (unsigned int)local_2c) < 0) {
            iVar15 = (int)((unsigned int)iVar2 + (unsigned int)local_10);
            if (iVar9 <= iVar15) {
                if (iVar11 <= iVar15) {
                    iVar15 = iVar11;
                }
                iVar16 = (int)((unsigned int)iVar2 - (unsigned int)local_10);
                if (iVar16 <= iVar11) {
                    if (iVar16 <= iVar9) {
                        iVar16 = iVar9;
                    }
                    iVar13 = (int)((unsigned int)iVar3 + (unsigned int)local_14);
                    if (iVar10 <= iVar13) {
                        if (iVar13 <= iVar12) {
                            uVar7 = (unsigned int)iVar15 - (unsigned int)iVar16 + 1U;
                            uVar14 = uVar7 & 3;
                            piVar17 = (int *)(unsigned int)((unsigned int)iVar13 * (unsigned int)iVar8 +
                                                            (unsigned int)iVar1 + (unsigned int)iVar16);
                            for (uVar7 = uVar7 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                                __builtin_memcpy(piVar17, &param_6, 4);
                                piVar17 = piVar17 + 1;
                            }
                            for (; uVar14 != 0; uVar14 = uVar14 - 1) {
                                *(unsigned char *)piVar17 = uVar6;
                                piVar17 = (int *)((int)piVar17 + 1);
                            }
                        }
                        iVar13 = (int)((unsigned int)iVar3 - (unsigned int)local_14);
                        if ((iVar10 <= iVar13) && (iVar13 <= iVar12)) {
                            uVar7 = (unsigned int)iVar15 - (unsigned int)iVar16 + 1U;
                            uVar14 = uVar7 & 3;
                            piVar17 = (int *)(unsigned int)((unsigned int)iVar13 * (unsigned int)iVar8 +
                                                            (unsigned int)iVar1 + (unsigned int)iVar16);
                            for (uVar7 = uVar7 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                                __builtin_memcpy(piVar17, &param_6, 4);
                                piVar17 = piVar17 + 1;
                            }
                            for (; uVar14 != 0; uVar14 = uVar14 - 1) {
                                *(unsigned char *)piVar17 = uVar6;
                                piVar17 = (int *)((int)piVar17 + 1);
                            }
                        }
                    }
                }
            }
            if (-1 < local_30) {
                local_14 = (int)((unsigned int)local_14 - 1U);
                param_5 = (int)((unsigned int)param_5 - 1U);
                local_2c = (int)((unsigned int)local_2c + uVar5 * (unsigned int)-2);
                local_30 = (int)((unsigned int)local_30 - (unsigned int)local_2c);
            }
            local_10 = (int)((unsigned int)local_10 + 1U);
            local_28 = (int)((unsigned int)local_28 + (unsigned int)iVar4 * 2U);
            local_30 = (int)((unsigned int)local_30 + (unsigned int)local_28 + (unsigned int)iVar4);
        }
        local_30 = (int)((unsigned int)local_30 +
                   (unsigned int)((int)(((((unsigned int)((int)(uVar5 - (unsigned int)iVar4) >> 1)) +
                                          (uVar5 - (unsigned int)iVar4)) -
                                         (unsigned int)local_28) -
                                        (unsigned int)local_2c) >> 1));
        do {
            iVar15 = (int)((unsigned int)iVar2 + (unsigned int)local_10);
            if (iVar9 <= iVar15) {
                if (iVar11 <= iVar15) {
                    iVar15 = iVar11;
                }
                iVar16 = (int)((unsigned int)iVar2 - (unsigned int)local_10);
                if (iVar16 <= iVar11) {
                    if (iVar16 <= iVar9) {
                        iVar16 = iVar9;
                    }
                    iVar13 = (int)((unsigned int)iVar3 + (unsigned int)local_14);
                    if (iVar10 <= iVar13) {
                        if (iVar13 <= iVar12) {
                            uVar7 = (unsigned int)iVar15 - (unsigned int)iVar16 + 1U;
                            uVar14 = uVar7 & 3;
                            piVar17 = (int *)(unsigned int)((unsigned int)iVar13 * (unsigned int)iVar8 +
                                                            (unsigned int)iVar1 + (unsigned int)iVar16);
                            for (uVar7 = uVar7 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                                __builtin_memcpy(piVar17, &param_6, 4);
                                piVar17 = piVar17 + 1;
                            }
                            for (; uVar14 != 0; uVar14 = uVar14 - 1) {
                                *(unsigned char *)piVar17 = uVar6;
                                piVar17 = (int *)((int)piVar17 + 1);
                            }
                        }
                        iVar13 = (int)((unsigned int)iVar3 - (unsigned int)local_14);
                        if ((iVar10 <= iVar13) && (iVar13 <= iVar12)) {
                            uVar7 = (unsigned int)iVar15 - (unsigned int)iVar16 + 1U;
                            uVar14 = uVar7 & 3;
                            piVar17 = (int *)(unsigned int)((unsigned int)iVar13 * (unsigned int)iVar8 +
                                                            (unsigned int)iVar1 + (unsigned int)iVar16);
                            for (uVar7 = uVar7 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                                __builtin_memcpy(piVar17, &param_6, 4);
                                piVar17 = piVar17 + 1;
                            }
                            for (; uVar14 != 0; uVar14 = uVar14 - 1) {
                                *(unsigned char *)piVar17 = uVar6;
                                piVar17 = (int *)((int)piVar17 + 1);
                            }
                        }
                    }
                }
            }
            if (local_30 < 0) {
                local_10 = (int)((unsigned int)local_10 + 1U);
                local_28 = (int)((unsigned int)local_28 + (unsigned int)iVar4 * 2U);
                local_30 = (int)((unsigned int)local_30 + (unsigned int)local_28);
            }
            local_14 = (int)((unsigned int)local_14 - 1U);
            local_2c = (int)((unsigned int)local_2c + uVar5 * (unsigned int)-2);
            uVar7 = (unsigned int)local_2c - uVar5;
            local_30 = (int)((unsigned int)local_30 - uVar7);
            param_5 = (int)((unsigned int)param_5 - 1U);
        } while (-1 < param_5);
    }
    return uVar7;
}
