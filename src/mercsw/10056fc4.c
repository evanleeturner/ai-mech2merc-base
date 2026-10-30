/* SPDX-License-Identifier: MIT */
/* mercsw 10056fc4 */
extern int FUN_100573c8(int *param_1, int param_2, int param_3, int param_4);

#define ADD(a, b) ((int)((unsigned int)(a) + (unsigned int)(b)))
#define SUB(a, b) ((int)((unsigned int)(a) - (unsigned int)(b)))

unsigned int __cdecl FUN_10056fc4(int *param_1, int param_2, int param_3, int param_4, int param_5)
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
    unsigned char bVar23;
    unsigned char bVar24;
    unsigned char *local_30;
    unsigned char *local_2c;
    unsigned char *local_28;
    int local_24;
    unsigned int tmp32;

    piVar1 = (int *)*param_1;
    iVar10 = piVar1[1];
    iVar6 = ADD(iVar10, 1);
    if ((iVar6 == 0 || iVar10 < -1) || (iVar11 = piVar1[2], iVar11 < 0)) {
        return 0xffffffff;
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
        return 0xfffffffe;
    }
    iVar2 = ADD(param_4, iVar2);
    iVar3 = ADD(param_5, iVar3);
    iVar19 = ADD(*(int *)ADD(ADD((unsigned int)param_3 * 8u, 8), param_2), param_2);
    iVar11 = ADD(*(int *)ADD(iVar19, 8), iVar2);
    local_24 = ADD(*(int *)ADD(iVar19, 0xc), iVar3);
    iVar12 = ADD(*(int *)ADD(iVar19, 0x10), iVar2);
    iVar13 = ADD(*(int *)ADD(iVar19, 0x14), iVar3);
    pbVar20 = (unsigned char *)ADD(iVar19, 0x18);
    if ((iVar12 < iVar11) || (iVar13 < local_24)) {
        return 0xfffffffc;
    }
    bVar16 = (unsigned char)(((((SUB(iVar11, iVar7) < 0) * 2 + (SUB(iVar9, iVar11) < 0)) * 2 + (SUB(local_24, iVar8) < 0)) * 2) + (SUB(iVar10, local_24) < 0));
    bVar18 = (unsigned char)(((((SUB(iVar12, iVar7) < 0) * 2 + (SUB(iVar9, iVar12) < 0)) * 2 + (SUB(iVar13, iVar8) < 0)) * 2) + (SUB(iVar10, iVar13) < 0));
    if ((bVar18 & bVar16) != 0) {
        return 0xfffffffd;
    }
    if (bVar16 == 0 && bVar18 == 0) {
        FUN_100573c8(param_1, iVar19, SUB(iVar2, param_1[1]), SUB(iVar3, param_1[2]));
        return 0;
    }
    local_28 = (unsigned char *)ADD(ADD((unsigned int)local_24 * (unsigned int)iVar6, *piVar1), iVar11);
LAB_10057170:
    if (local_24 < iVar8) {
        for (;;) {
            bVar5 = *pbVar20;
            pbVar20 = pbVar20 + 1;
            bVar23 = (unsigned char)(bVar5 & 1);
            bVar5 = (unsigned char)(bVar5 >> 1);
            if (bVar23 || bVar5 == 0) {
                if (bVar5 != 0) {
                    pbVar20 = pbVar20 + (bVar5 - 1);
                } else if (!bVar23) {
                    goto code_r0x1005716c;
                }
            }
            pbVar20 = pbVar20 + 1;
        }
    }
    local_2c = local_28 + SUB(iVar7, iVar11);
    local_30 = local_28 + SUB(iVar9, iVar11);
LAB_1005739e:
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
            bVar23 = (unsigned char)(bVar5 & 1);
            bVar5 = (unsigned char)(bVar5 >> 1);
            uVar14 = (unsigned int)bVar5;
            if (!bVar23 && bVar5 != 0) goto LAB_100571db;
            if (bVar5 != 0) goto LAB_10057204;
joined_r0x100571c4:
            if (bVar23) {
                do {
                    while (1) {
                        pbVar21 = pbVar20 + 1;
                        pbVar22 = pbVar22 + *pbVar20;
                        pbVar20 = pbVar20 + 2;
                        bVar23 = (unsigned char)(*pbVar21 & 1);
                        bVar5 = (unsigned char)(*pbVar21 >> 1);
                        uVar14 = (unsigned int)bVar5;
                        if (!bVar23 && bVar5 != 0) goto LAB_100571db;
                        if (bVar5 == 0) break;
LAB_10057204:
                        do {
                            while (1) {
                                uVar14 = uVar14 & 0xff;
LAB_10057207:
                                for (uVar15 = uVar14 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
                                    *pbVar22 = *pbVar20;
                                    pbVar20 = pbVar20 + 1;
                                    pbVar22 = pbVar22 + 1;
                                }
                                pbVar21 = pbVar20;
                                for (uVar14 = uVar14 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                                    __builtin_memcpy(&tmp32, pbVar21, 4);
                                    __builtin_memcpy(pbVar22, &tmp32, 4);
                                    pbVar21 = pbVar21 + 4;
                                    pbVar22 = pbVar22 + 4;
                                }
                                pbVar20 = pbVar21 + 1;
                                bVar23 = (unsigned char)(*pbVar21 & 1);
                                bVar5 = (unsigned char)(*pbVar21 >> 1);
                                uVar14 = (unsigned int)bVar5;
                                if (!bVar23 && bVar5 != 0) break;
                                if (bVar5 == 0) goto joined_r0x100571c4;
                            }
LAB_100571db:
                            do {
                                uVar14 = uVar14 & 0xff;
LAB_100571de:
                                bVar5 = *pbVar20;
                                pbVar21 = pbVar20 + 1;
                                for (uVar15 = uVar14 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
                                    *pbVar22 = bVar5;
                                    pbVar22 = pbVar22 + 1;
                                }
                                for (uVar14 = uVar14 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                                    tmp32 = (unsigned int)bVar5 * 0x01010101u;
                                    __builtin_memcpy(pbVar22, &tmp32, 4);
                                    pbVar22 = pbVar22 + 4;
                                }
                                pbVar20 = pbVar20 + 2;
                                bVar23 = (unsigned char)(*pbVar21 & 1);
                                bVar5 = (unsigned char)(*pbVar21 >> 1);
                                uVar14 = (unsigned int)bVar5;
                            } while (!bVar23 && bVar5 != 0);
                            if (!bVar23) goto LAB_1005738f;
                        } while (bVar5 != 0);
                    }
                } while (bVar23);
            }
        } else {
            bVar5 = *pbVar20;
            pbVar20 = pbVar20 + 1;
            bVar23 = (unsigned char)(bVar5 & 1);
            bVar5 = (unsigned char)(bVar5 >> 1);
            if (!bVar23 && bVar5 != 0) goto LAB_100572d1;
            if (bVar5 != 0) goto LAB_10057314;
joined_r0x100572b6:
            if (bVar23) {
                do {
                    while (1) {
                        pbVar21 = pbVar20 + 1;
                        pbVar22 = pbVar22 + *pbVar20;
                        pbVar20 = pbVar20 + 2;
                        bVar23 = (unsigned char)(*pbVar21 & 1);
                        bVar5 = (unsigned char)(*pbVar21 >> 1);
                        if (!bVar23 && bVar5 != 0) goto LAB_100572d1;
                        if (bVar5 == 0) break;
LAB_10057314:
                        do {
                            while (1) {
                                uVar14 = (unsigned int)bVar5;
LAB_10057317:
                                if ((int)local_30 < (int)pbVar22) goto LAB_10057380;
                                {
                                    int t = ADD((int)pbVar22, SUB(SUB(uVar14, 1), (int)local_30));
                                    uVar17 = ~(unsigned int)(t >> 0x1f) & (unsigned int)t;
                                }
                                for (uVar15 = (uVar14 - uVar17) & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
                                    *pbVar22 = *pbVar20;
                                    pbVar20 = pbVar20 + 1;
                                    pbVar22 = pbVar22 + 1;
                                }
                                for (uVar14 = (uVar14 - uVar17) >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                                    __builtin_memcpy(&tmp32, pbVar20, 4);
                                    __builtin_memcpy(pbVar22, &tmp32, 4);
                                    pbVar20 = pbVar20 + 4;
                                    pbVar22 = pbVar22 + 4;
                                }
                                pbVar22 = pbVar22 + uVar17;
                                bVar5 = pbVar20[uVar17];
                                pbVar20 = pbVar20 + uVar17 + 1;
                                bVar23 = (unsigned char)(bVar5 & 1);
                                bVar5 = (unsigned char)(bVar5 >> 1);
                                if (!bVar23 && bVar5 != 0) break;
                                if (bVar5 == 0) goto joined_r0x100572b6;
                            }
LAB_100572d1:
                            do {
                                uVar14 = (unsigned int)bVar5;
LAB_100572d4:
                                if ((int)local_30 < (int)pbVar22) goto LAB_1005736f;
                                {
                                    int t = ADD((int)pbVar22, SUB(SUB(uVar14, 1), (int)local_30));
                                    uVar17 = ~(unsigned int)(t >> 0x1f) & (unsigned int)t;
                                }
                                uVar14 = uVar14 - uVar17;
                                bVar5 = *pbVar20;
                                pbVar21 = pbVar20 + 1;
                                for (uVar15 = uVar14 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
                                    *pbVar22 = bVar5;
                                    pbVar22 = pbVar22 + 1;
                                }
                                for (uVar14 = uVar14 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                                    tmp32 = (unsigned int)bVar5 * 0x01010101u;
                                    __builtin_memcpy(pbVar22, &tmp32, 4);
                                    pbVar22 = pbVar22 + 4;
                                }
                                pbVar22 = pbVar22 + uVar17;
                                pbVar20 = pbVar20 + 2;
                                bVar23 = (unsigned char)(*pbVar21 & 1);
                                bVar5 = (unsigned char)(*pbVar21 >> 1);
                            } while (!bVar23 && bVar5 != 0);
                            if (!bVar23) goto LAB_1005738f;
                        } while (bVar5 != 0);
                    }
                } while (bVar23);
            }
        }
    } else {
        bVar5 = *pbVar20;
        pbVar20 = pbVar20 + 1;
        bVar23 = (unsigned char)(bVar5 & 1);
        bVar5 = (unsigned char)(bVar5 >> 1);
        if (!bVar23 && bVar5 != 0) goto LAB_10057243;
        if (bVar5 != 0) goto LAB_10057274;
joined_r0x1005722c:
        if (bVar23) {
            do {
                while (1) {
                    pbVar21 = pbVar20 + 1;
                    pbVar22 = pbVar22 + *pbVar20;
                    pbVar20 = pbVar20 + 2;
                    bVar23 = (unsigned char)(*pbVar21 & 1);
                    bVar5 = (unsigned char)(*pbVar21 >> 1);
                    if (!bVar23 && bVar5 != 0) goto LAB_10057243;
                    if (bVar5 == 0) break;
LAB_10057274:
                    do {
                        while (1) {
                            uVar14 = (unsigned int)bVar5;
                            iVar11 = SUB((int)local_2c, (int)pbVar22);
                            if (iVar11 < (int)uVar14) {
                                if (-1 < iVar11) {
                                    pbVar22 = pbVar22 + iVar11;
                                    uVar14 = uVar14 - iVar11;
                                    pbVar20 = pbVar20 + iVar11;
                                }
                                if ((bVar18 & 4) == 0) goto LAB_10057207;
                                goto LAB_10057317;
                            }
                            pbVar22 = pbVar22 + uVar14;
                            bVar5 = pbVar20[uVar14];
                            pbVar20 = pbVar20 + uVar14 + 1;
                            bVar23 = (unsigned char)(bVar5 & 1);
                            bVar5 = (unsigned char)(bVar5 >> 1);
                            if (!bVar23 && bVar5 != 0) break;
                            if (bVar5 == 0) goto joined_r0x1005722c;
                        }
LAB_10057243:
                        do {
                            uVar14 = (unsigned int)bVar5;
                            iVar11 = SUB((int)local_2c, (int)pbVar22);
                            if (iVar11 < (int)uVar14) {
                                if (-1 < iVar11) {
                                    pbVar22 = pbVar22 + iVar11;
                                    uVar14 = uVar14 - iVar11;
                                }
                                if ((bVar18 & 4) == 0) goto LAB_100571de;
                                goto LAB_100572d4;
                            }
                            pbVar22 = pbVar22 + uVar14;
                            pbVar21 = pbVar20 + 1;
                            pbVar20 = pbVar20 + 2;
                            bVar23 = (unsigned char)(*pbVar21 & 1);
                            bVar5 = (unsigned char)(*pbVar21 >> 1);
                        } while (!bVar23 && bVar5 != 0);
                        if (!bVar23) goto LAB_1005738f;
                    } while (bVar5 != 0);
                }
            } while (bVar23);
        }
    }
    goto LAB_1005738f;
code_r0x1005716c:
    local_28 = local_28 + iVar6;
    local_24 = ADD(local_24, 1);
    goto LAB_10057170;
LAB_1005736f:
    do {
        pbVar22 = pbVar20 + 1;
        pbVar20 = pbVar20 + 2;
        bVar23 = (unsigned char)(*pbVar22 & 1);
        bVar5 = (unsigned char)(*pbVar22 >> 1);
    } while (!bVar23 && bVar5 != 0);
    if (bVar23) {
        if (bVar5 == 0) goto LAB_10057357;
        while (1) {
            uVar14 = (unsigned int)bVar5;
LAB_10057380:
            bVar5 = pbVar20[uVar14];
            pbVar20 = pbVar20 + uVar14 + 1;
            bVar23 = (unsigned char)(bVar5 & 1);
            bVar5 = (unsigned char)(bVar5 >> 1);
            bVar24 = (unsigned char)(bVar5 != 0);
            if (!bVar23 && bVar24) break;
            while (!bVar24) {
                if (!bVar23) goto LAB_1005738f;
LAB_10057357:
                pbVar22 = pbVar20 + 1;
                pbVar20 = pbVar20 + 2;
                bVar23 = (unsigned char)(*pbVar22 & 1);
                bVar5 = (unsigned char)(*pbVar22 >> 1);
                bVar24 = (unsigned char)(bVar5 != 0);
                if (!bVar23 && bVar24) goto LAB_1005736f;
            }
        }
        goto LAB_1005736f;
    }
LAB_1005738f:
    local_28 = local_28 + iVar6;
    local_2c = local_2c + iVar6;
    local_30 = local_30 + iVar6;
    local_24 = ADD(local_24, 1);
    goto LAB_1005739e;
}
