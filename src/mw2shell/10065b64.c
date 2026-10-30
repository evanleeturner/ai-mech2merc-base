/* SPDX-License-Identifier: MIT */
/* mw2shell 10065b64 */
void __cdecl FUN_10065f68(int *param_1, int param_2, int param_3, int param_4);

unsigned int __cdecl FUN_10065b64(int *param_1, int param_2, int param_3, int param_4, int param_5)
{
    int *piVar1;
    int iVar2;
    int iVar3;
    unsigned char bVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    unsigned int uVar14;
    unsigned int uVar15;
    unsigned char bVar16;
    unsigned char bVar18;
    unsigned int uVar17;
    int iVar19;
    unsigned char *pbVar20;
    unsigned char *pbVar21;
    unsigned char *pbVar22;
    int bVar23;
    int bVar24;
    unsigned char *local_30;
    unsigned char *local_2c;
    unsigned char *local_28;
    int local_24;
    int t;
    unsigned int w;

    piVar1 = (int *)*param_1;
    iVar10 = piVar1[1];
    iVar6 = (int)((unsigned int)iVar10 + 1u);
    if ((iVar6 == 0 || iVar10 < -1) || (iVar11 = piVar1[2], iVar11 < 0)) {
        return 0xffffffffu;
    }
    iVar2 = param_1[1];
    iVar7 = iVar2;
    if (iVar2 < 1) {
        iVar7 = 0;
    }
    iVar3 = param_1[2];
    iVar8 = iVar3;
    if (iVar3 < 1) {
        iVar8 = 0;
    }
    iVar9 = param_1[3];
    if (iVar10 <= param_1[3]) {
        iVar9 = iVar10;
    }
    iVar10 = param_1[4];
    if (iVar11 <= param_1[4]) {
        iVar10 = iVar11;
    }
    if ((iVar9 < iVar7) || (iVar10 < iVar8)) {
        return 0xfffffffeu;
    }
    iVar2 = (int)((unsigned int)param_4 + (unsigned int)iVar2);
    iVar3 = (int)((unsigned int)param_5 + (unsigned int)iVar3);
    iVar19 = (int)((unsigned int)*(int *)((unsigned int)param_3 * 8u + 8u + (unsigned int)param_2) + (unsigned int)param_2);
    iVar11 = (int)((unsigned int)*(int *)(iVar19 + 8) + (unsigned int)iVar2);
    local_24 = (int)((unsigned int)*(int *)(iVar19 + 0xc) + (unsigned int)iVar3);
    iVar12 = (int)((unsigned int)*(int *)(iVar19 + 0x10) + (unsigned int)iVar2);
    iVar13 = (int)((unsigned int)*(int *)(iVar19 + 0x14) + (unsigned int)iVar3);
    pbVar20 = (unsigned char *)(iVar19 + 0x18);
    if ((iVar12 < iVar11) || (iVar13 < local_24)) {
        return 0xfffffffcu;
    }
    bVar16 = (unsigned char)(((((int)((unsigned int)iVar11 - (unsigned int)iVar7) < 0) * 2 + ((int)((unsigned int)iVar9 - (unsigned int)iVar11) < 0)) * 2
             + ((int)((unsigned int)local_24 - (unsigned int)iVar8) < 0)) * 2 + ((int)((unsigned int)iVar10 - (unsigned int)local_24) < 0));
    bVar18 = (unsigned char)(((((int)((unsigned int)iVar12 - (unsigned int)iVar7) < 0) * 2 + ((int)((unsigned int)iVar9 - (unsigned int)iVar12) < 0)) * 2
             + ((int)((unsigned int)iVar13 - (unsigned int)iVar8) < 0)) * 2 + ((int)((unsigned int)iVar10 - (unsigned int)iVar13) < 0));
    if ((bVar18 & bVar16) != 0) {
        return 0xfffffffdu;
    }
    if (bVar16 == 0 && bVar18 == 0) {
        FUN_10065f68(param_1, iVar19, (int)((unsigned int)iVar2 - (unsigned int)param_1[1]),
                     (int)((unsigned int)iVar3 - (unsigned int)param_1[2]));
        return 0;
    }
    local_28 = (unsigned char *)((unsigned int)local_24 * (unsigned int)iVar6 + (unsigned int)*piVar1 + (unsigned int)iVar11);
LAB_10065d10:
    if (local_24 < iVar8) {
        do {
            bVar5 = *pbVar20;
            pbVar20 = pbVar20 + 1;
            bVar23 = (bVar5 & 1);
            bVar5 = bVar5 >> 1;
            if (bVar23 || bVar5 == 0) {
                if (bVar5 != 0) {
                    pbVar20 = pbVar20 + (bVar5 - 1);
                }
                else if (!bVar23) goto code_r0x10065d0c;
            }
            pbVar20 = pbVar20 + 1;
        } while (1);
    }
    local_2c = local_28 + (iVar7 - iVar11);
    local_30 = local_28 + (iVar9 - iVar11);
LAB_10065f3e:
    if (iVar13 < local_24) {
        return 0;
    }
    if (iVar10 < local_24) {
        return 0;
    }
    pbVar22 = local_28;
    if ((bVar16 & 8) == 0) {
        if ((bVar18 & 4) == 0) {
            bVar5 = *pbVar20;
            pbVar20 = pbVar20 + 1;
            bVar23 = (bVar5 & 1);
            bVar5 = bVar5 >> 1;
            uVar14 = (unsigned int)bVar5;
            if (!bVar23 && bVar5 != 0) goto LAB_10065d7b;
            if (bVar5 != 0) goto LAB_10065da4;
joined_r0x10065d64:
            if (bVar23) {
                do {
                    for (;;) {
                        pbVar21 = pbVar20 + 1;
                        pbVar22 = pbVar22 + *pbVar20;
                        pbVar20 = pbVar20 + 2;
                        bVar23 = (*pbVar21 & 1);
                        bVar5 = *pbVar21 >> 1;
                        uVar14 = (unsigned int)bVar5;
                        if (!bVar23 && bVar5 != 0) goto LAB_10065d7b;
                        if (bVar5 == 0) break;
LAB_10065da4:
                        do {
                            for (;;) {
                                uVar14 = uVar14 & 0xff;
LAB_10065da7:
                                for (uVar15 = uVar14 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
                                    *pbVar22 = *pbVar20;
                                    pbVar20 = pbVar20 + 1;
                                    pbVar22 = pbVar22 + 1;
                                }
                                pbVar21 = pbVar20;
                                for (uVar14 = uVar14 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                                    __builtin_memcpy(&w, pbVar21, 4);
                                    __builtin_memcpy(pbVar22, &w, 4);
                                    pbVar21 = pbVar21 + 4;
                                    pbVar22 = pbVar22 + 4;
                                }
                                pbVar20 = pbVar21 + 1;
                                bVar23 = (*pbVar21 & 1);
                                bVar5 = *pbVar21 >> 1;
                                uVar14 = (unsigned int)bVar5;
                                if (!bVar23 && bVar5 != 0) break;
                                if (bVar5 == 0) goto joined_r0x10065d64;
                            }
LAB_10065d7b:
                            do {
                                uVar14 = uVar14 & 0xff;
LAB_10065d7e:
                                bVar5 = *pbVar20;
                                pbVar21 = pbVar20 + 1;
                                for (uVar15 = uVar14 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
                                    *pbVar22 = bVar5;
                                    pbVar22 = pbVar22 + 1;
                                }
                                w = (unsigned int)bVar5 * 0x01010101u;
                                for (uVar14 = uVar14 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                                    __builtin_memcpy(pbVar22, &w, 4);
                                    pbVar22 = pbVar22 + 4;
                                }
                                pbVar20 = pbVar20 + 2;
                                bVar23 = (*pbVar21 & 1);
                                bVar5 = *pbVar21 >> 1;
                                uVar14 = (unsigned int)bVar5;
                            } while (!bVar23 && bVar5 != 0);
                            if (!bVar23) goto LAB_10065f2f;
                        } while (bVar5 != 0);
                    }
                } while (bVar23);
            }
        }
        else {
            bVar5 = *pbVar20;
            pbVar20 = pbVar20 + 1;
            bVar23 = (bVar5 & 1);
            bVar5 = bVar5 >> 1;
            if (!bVar23 && bVar5 != 0) goto LAB_10065e71;
            if (bVar5 != 0) goto LAB_10065eb4;
joined_r0x10065e56:
            if (bVar23) {
                do {
                    for (;;) {
                        pbVar21 = pbVar20 + 1;
                        pbVar22 = pbVar22 + *pbVar20;
                        pbVar20 = pbVar20 + 2;
                        bVar23 = (*pbVar21 & 1);
                        bVar5 = *pbVar21 >> 1;
                        if (!bVar23 && bVar5 != 0) goto LAB_10065e71;
                        if (bVar5 == 0) break;
LAB_10065eb4:
                        do {
                            for (;;) {
                                uVar14 = (unsigned int)bVar5;
LAB_10065eb7:
                                if ((int)local_30 < (int)pbVar22) goto LAB_10065f20;
                                t = (int)((unsigned int)pbVar22 + ((uVar14 - 1u) - (unsigned int)local_30));
                                uVar17 = ~((unsigned int)(t >> 0x1f)) & (unsigned int)t;
                                for (uVar15 = (uVar14 - uVar17) & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
                                    *pbVar22 = *pbVar20;
                                    pbVar20 = pbVar20 + 1;
                                    pbVar22 = pbVar22 + 1;
                                }
                                for (uVar14 = (uVar14 - uVar17) >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                                    __builtin_memcpy(&w, pbVar20, 4);
                                    __builtin_memcpy(pbVar22, &w, 4);
                                    pbVar20 = pbVar20 + 4;
                                    pbVar22 = pbVar22 + 4;
                                }
                                pbVar22 = pbVar22 + uVar17;
                                bVar5 = pbVar20[uVar17];
                                pbVar20 = pbVar20 + uVar17 + 1;
                                bVar23 = (bVar5 & 1);
                                bVar5 = bVar5 >> 1;
                                if (!bVar23 && bVar5 != 0) break;
                                if (bVar5 == 0) goto joined_r0x10065e56;
                            }
LAB_10065e71:
                            do {
                                uVar14 = (unsigned int)bVar5;
LAB_10065e74:
                                if ((int)local_30 < (int)pbVar22) goto LAB_10065f0f;
                                t = (int)((unsigned int)pbVar22 + ((uVar14 - 1u) - (unsigned int)local_30));
                                uVar17 = ~((unsigned int)(t >> 0x1f)) & (unsigned int)t;
                                uVar14 = uVar14 - uVar17;
                                bVar5 = *pbVar20;
                                pbVar21 = pbVar20 + 1;
                                for (uVar15 = uVar14 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
                                    *pbVar22 = bVar5;
                                    pbVar22 = pbVar22 + 1;
                                }
                                w = (unsigned int)bVar5 * 0x01010101u;
                                for (uVar14 = uVar14 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                                    __builtin_memcpy(pbVar22, &w, 4);
                                    pbVar22 = pbVar22 + 4;
                                }
                                pbVar22 = pbVar22 + uVar17;
                                pbVar20 = pbVar20 + 2;
                                bVar23 = (*pbVar21 & 1);
                                bVar5 = *pbVar21 >> 1;
                            } while (!bVar23 && bVar5 != 0);
                            if (!bVar23) goto LAB_10065f2f;
                        } while (bVar5 != 0);
                    }
                } while (bVar23);
            }
        }
    }
    else {
        bVar5 = *pbVar20;
        pbVar20 = pbVar20 + 1;
        bVar23 = (bVar5 & 1);
        bVar5 = bVar5 >> 1;
        if (!bVar23 && bVar5 != 0) goto LAB_10065de3;
        if (bVar5 != 0) goto LAB_10065e14;
joined_r0x10065dcc:
        if (bVar23) {
            do {
                for (;;) {
                    pbVar21 = pbVar20 + 1;
                    pbVar22 = pbVar22 + *pbVar20;
                    pbVar20 = pbVar20 + 2;
                    bVar23 = (*pbVar21 & 1);
                    bVar5 = *pbVar21 >> 1;
                    if (!bVar23 && bVar5 != 0) goto LAB_10065de3;
                    if (bVar5 == 0) break;
LAB_10065e14:
                    do {
                        for (;;) {
                            uVar14 = (unsigned int)bVar5;
                            iVar11 = (int)((unsigned int)local_2c - (unsigned int)pbVar22);
                            if (iVar11 < (int)uVar14) {
                                if (-1 < iVar11) {
                                    pbVar22 = pbVar22 + iVar11;
                                    uVar14 = uVar14 - (unsigned int)iVar11;
                                    pbVar20 = pbVar20 + iVar11;
                                }
                                if ((bVar18 & 4) == 0) goto LAB_10065da7;
                                goto LAB_10065eb7;
                            }
                            pbVar22 = pbVar22 + uVar14;
                            bVar5 = pbVar20[uVar14];
                            pbVar20 = pbVar20 + uVar14 + 1;
                            bVar23 = (bVar5 & 1);
                            bVar5 = bVar5 >> 1;
                            if (!bVar23 && bVar5 != 0) break;
                            if (bVar5 == 0) goto joined_r0x10065dcc;
                        }
LAB_10065de3:
                        do {
                            uVar14 = (unsigned int)bVar5;
                            iVar11 = (int)((unsigned int)local_2c - (unsigned int)pbVar22);
                            if (iVar11 < (int)uVar14) {
                                if (-1 < iVar11) {
                                    pbVar22 = pbVar22 + iVar11;
                                    uVar14 = uVar14 - (unsigned int)iVar11;
                                }
                                if ((bVar18 & 4) == 0) goto LAB_10065d7e;
                                goto LAB_10065e74;
                            }
                            pbVar22 = pbVar22 + uVar14;
                            pbVar21 = pbVar20 + 1;
                            pbVar20 = pbVar20 + 2;
                            bVar23 = (*pbVar21 & 1);
                            bVar5 = *pbVar21 >> 1;
                        } while (!bVar23 && bVar5 != 0);
                        if (!bVar23) goto LAB_10065f2f;
                    } while (bVar5 != 0);
                }
            } while (bVar23);
        }
    }
    goto LAB_10065f2f;
code_r0x10065d0c:
    local_28 = local_28 + iVar6;
    local_24 = (int)((unsigned int)local_24 + 1u);
    goto LAB_10065d10;
LAB_10065f0f:
    do {
        pbVar22 = pbVar20 + 1;
        pbVar20 = pbVar20 + 2;
        bVar23 = (*pbVar22 & 1);
        bVar5 = *pbVar22 >> 1;
    } while (!bVar23 && bVar5 != 0);
    if (bVar23) {
        if (bVar5 == 0) goto LAB_10065ef7;
        for (;;) {
            uVar14 = (unsigned int)bVar5;
LAB_10065f20:
            bVar5 = pbVar20[uVar14];
            pbVar20 = pbVar20 + uVar14 + 1;
            bVar23 = (bVar5 & 1);
            bVar5 = bVar5 >> 1;
            bVar24 = bVar5 != 0;
            if (!bVar23 && bVar24) break;
            while (!bVar24) {
                if (!bVar23) goto LAB_10065f2f;
LAB_10065ef7:
                pbVar22 = pbVar20 + 1;
                pbVar20 = pbVar20 + 2;
                bVar23 = (*pbVar22 & 1);
                bVar5 = *pbVar22 >> 1;
                bVar24 = bVar5 != 0;
                if (!bVar23 && bVar24) goto LAB_10065f0f;
            }
        }
        goto LAB_10065f0f;
    }
LAB_10065f2f:
    local_28 = local_28 + iVar6;
    local_2c = local_2c + iVar6;
    local_30 = local_30 + iVar6;
    local_24 = (int)((unsigned int)local_24 + 1u);
    goto LAB_10065f3e;
}
