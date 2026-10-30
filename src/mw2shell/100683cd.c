/* SPDX-License-Identifier: MIT */
/* mw2shell 100683cd */
uint FUN_10065029(int *param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7);

uint __cdecl FUN_100683cd(int *param_1, int param_2, int param_3, int param_4, int param_5, int param_6)
{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    uint uVar5;
    unsigned char uVar6;
    uint uVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    uint uVar14;
    int iVar15;
    int iVar16;
    int *piVar17;
    int local_30;
    int local_2c;
    int local_28;
    int local_14;
    int local_10;

    if ((param_4 == 0) || (param_5 == 0)) {
        uVar7 = FUN_10065029(param_1,
                             (int)((uint)param_2 - (uint)param_4),
                             (int)((uint)param_3 - (uint)param_5),
                             (int)((uint)param_2 + (uint)param_4),
                             (int)((uint)param_3 + (uint)param_5),
                             0, param_6);
    }
    else {
        piVar17 = (int *)*param_1;
        iVar12 = piVar17[1];
        iVar8 = (int)((uint)iVar12 + 1u);
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
        param_6 = (int)(((uint)uVar6 << 24) | ((uint)uVar6 << 16) | ((uint)uVar6 << 8) | (uint)uVar6);
        iVar2 = (int)((uint)param_2 + (uint)iVar2);
        iVar3 = (int)((uint)param_3 + (uint)iVar3);
        local_10 = 0;
        local_14 = param_5;
        iVar4 = (int)((uint)param_5 * (uint)param_5);
        uVar5 = (uint)param_4 * (uint)param_4;
        local_28 = 0;
        local_2c = (int)(uVar5 * 2u * (uint)param_5);
        local_30 = (int)(((uVar5 >> 2) + (uint)iVar4) - uVar5 * (uint)param_5);
        while ((int)((uint)local_28 - (uint)local_2c) < 0) {
            iVar15 = (int)((uint)iVar2 + (uint)local_10);
            if (iVar9 <= iVar15) {
                if (iVar11 <= iVar15) {
                    iVar15 = iVar11;
                }
                iVar16 = (int)((uint)iVar2 - (uint)local_10);
                if (iVar16 <= iVar11) {
                    if (iVar16 <= iVar9) {
                        iVar16 = iVar9;
                    }
                    iVar13 = (int)((uint)iVar3 + (uint)local_14);
                    if (iVar10 <= iVar13) {
                        if (iVar13 <= iVar12) {
                            uVar7 = (uint)((int)((uint)iVar15 - (uint)iVar16) + 1);
                            uVar14 = uVar7 & 3;
                            piVar17 = (int *)((uint)iVar13 * (uint)iVar8 + (uint)iVar1 + (uint)iVar16);
                            for (uVar7 = uVar7 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                                *piVar17 = param_6;
                                piVar17 = piVar17 + 1;
                            }
                            for (; uVar14 != 0; uVar14 = uVar14 - 1) {
                                *(unsigned char *)piVar17 = uVar6;
                                piVar17 = (int *)((int)piVar17 + 1);
                            }
                        }
                        iVar13 = (int)((uint)iVar3 - (uint)local_14);
                        if ((iVar10 <= iVar13) && (iVar13 <= iVar12)) {
                            uVar7 = (uint)((int)((uint)iVar15 - (uint)iVar16) + 1);
                            uVar14 = uVar7 & 3;
                            piVar17 = (int *)((uint)iVar13 * (uint)iVar8 + (uint)iVar1 + (uint)iVar16);
                            for (uVar7 = uVar7 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                                *piVar17 = param_6;
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
                local_14 = (int)((uint)local_14 - 1u);
                param_5 = (int)((uint)param_5 - 1u);
                local_2c = (int)((uint)local_2c + uVar5 * (uint)-2);
                local_30 = (int)((uint)local_30 - (uint)local_2c);
            }
            local_10 = (int)((uint)local_10 + 1u);
            local_28 = (int)((uint)local_28 + (uint)iVar4 * 2u);
            local_30 = (int)((uint)local_30 + (uint)local_28 + (uint)iVar4);
        }
        local_30 = (int)((uint)local_30 +
                   (uint)((int)(((((uint)((int)(uVar5 - (uint)iVar4) >> 1) + (uVar5 - (uint)iVar4))
                                  - (uint)local_28) - (uint)local_2c)) >> 1));
        do {
            iVar15 = (int)((uint)iVar2 + (uint)local_10);
            if (iVar9 <= iVar15) {
                if (iVar11 <= iVar15) {
                    iVar15 = iVar11;
                }
                iVar16 = (int)((uint)iVar2 - (uint)local_10);
                if (iVar16 <= iVar11) {
                    if (iVar16 <= iVar9) {
                        iVar16 = iVar9;
                    }
                    iVar13 = (int)((uint)iVar3 + (uint)local_14);
                    if (iVar10 <= iVar13) {
                        if (iVar13 <= iVar12) {
                            uVar7 = (uint)((int)((uint)iVar15 - (uint)iVar16) + 1);
                            uVar14 = uVar7 & 3;
                            piVar17 = (int *)((uint)iVar13 * (uint)iVar8 + (uint)iVar1 + (uint)iVar16);
                            for (uVar7 = uVar7 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                                *piVar17 = param_6;
                                piVar17 = piVar17 + 1;
                            }
                            for (; uVar14 != 0; uVar14 = uVar14 - 1) {
                                *(unsigned char *)piVar17 = uVar6;
                                piVar17 = (int *)((int)piVar17 + 1);
                            }
                        }
                        iVar13 = (int)((uint)iVar3 - (uint)local_14);
                        if ((iVar10 <= iVar13) && (iVar13 <= iVar12)) {
                            uVar7 = (uint)((int)((uint)iVar15 - (uint)iVar16) + 1);
                            uVar14 = uVar7 & 3;
                            piVar17 = (int *)((uint)iVar13 * (uint)iVar8 + (uint)iVar1 + (uint)iVar16);
                            for (uVar7 = uVar7 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                                *piVar17 = param_6;
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
                local_10 = (int)((uint)local_10 + 1u);
                local_28 = (int)((uint)local_28 + (uint)iVar4 * 2u);
                local_30 = (int)((uint)local_30 + (uint)local_28);
            }
            local_14 = (int)((uint)local_14 - 1u);
            local_2c = (int)((uint)local_2c + uVar5 * (uint)-2);
            uVar7 = (uint)local_2c - uVar5;
            local_30 = (int)((uint)local_30 - uVar7);
            param_5 = (int)((uint)param_5 - 1u);
        } while (-1 < param_5);
    }
    return uVar7;
}
