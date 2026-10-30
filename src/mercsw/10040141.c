/* SPDX-License-Identifier: MIT */
/* mercsw 10040141 */
void __stdcall RaiseException(DWORD, DWORD, DWORD, const DWORD *);

extern int DAT_100af324;
extern int DAT_100af318;
extern int DAT_100af31c;
extern int DAT_100af320;
extern unsigned int DAT_100af330;
extern unsigned char *DAT_100af334;
extern unsigned int *DAT_100af33c;
extern unsigned int *DAT_100af340;
extern unsigned int *DAT_100af344;
extern unsigned int *DAT_100af348;
extern unsigned int *DAT_100af34c;
extern unsigned int *DAT_100af350;
extern unsigned int *DAT_100af354;
extern int DAT_100af358;
extern int DAT_100af35c;
extern int _DAT_100af360;
extern int DAT_100af364;
extern int DAT_100af368;
extern int DAT_100af36c;
extern int DAT_100af388;
extern int DAT_100af38c;
extern unsigned int DAT_100af3a8;
extern unsigned int DAT_100af3ac;

void __cdecl FUN_10040141(int *param_1, int param_2, unsigned int *param_3, int param_4)
{
    int *piVar1;
    unsigned int uVar2;
    long long lVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    unsigned int uVar7;
    unsigned int *puVar8;
    int iVar9;
    unsigned int uVar10;
    unsigned int *puVar11;
    unsigned int uVar12;
    unsigned char *pbVar13;
    long long lVar14;
    int iVar15;

    piVar1 = (int *)*param_1;
    DAT_100af324 = (int)((unsigned int)piVar1[1] + 1u);
    iVar4 = piVar1[1];
    if (param_1[3] <= piVar1[1]) {
        iVar4 = param_1[3];
    }
    uVar10 = 0;
    if ((unsigned int)param_1[1] < 0x80000000u) {
        uVar10 = (unsigned int)param_1[1];
    }
    iVar5 = (int)((unsigned int)iVar4 - uVar10);
    if ((int)uVar10 <= iVar4) {
        iVar4 = piVar1[2];
        if (param_1[4] <= piVar1[2]) {
            iVar4 = param_1[4];
        }
        uVar12 = 0;
        if ((unsigned int)param_1[2] < 0x80000000u) {
            uVar12 = (unsigned int)param_1[2];
        }
        iVar6 = (int)((unsigned int)iVar4 - uVar12);
        DAT_100af318 = iVar5;
        if ((int)uVar12 <= iVar4) {
            DAT_100af320 = (int)(uVar12 * (unsigned int)DAT_100af324 + uVar10 + (unsigned int)*piVar1);
            DAT_100af340 = param_3 + (int)((unsigned int)param_2 * 6u);
            DAT_100af33c = param_3;
            uVar10 = 0x7fff;
            uVar12 = 0xffff8000u;
            uVar7 = 0xf;
            puVar8 = param_3;
            do {
                uVar2 = puVar8[1];
                if ((int)uVar2 <= (int)uVar10) {
                    uVar10 = uVar2;
                    DAT_100af344 = puVar8;
                }
                if ((int)uVar12 <= (int)uVar2) {
                    uVar12 = uVar2;
                }
                uVar7 = uVar7 & ((((((*puVar8 >> 0x1f) << 1) | (((unsigned int)iVar5 - *puVar8) >> 0x1f)) << 1 |
                                   (puVar8[1] >> 0x1f)) << 1) |
                                 (((unsigned int)iVar6 - puVar8[1]) >> 0x1f));
                puVar8 = puVar8 + 6;
            } while (puVar8 != DAT_100af340);
            DAT_100af31c = iVar6;
            if (uVar7 == 0) {
                DAT_100af350 = DAT_100af344;
                DAT_100af354 = DAT_100af344;
                puVar8 = DAT_100af350;
                DAT_100af364 = (int)uVar10;
                if (uVar12 != uVar10) {
                    do {
                        DAT_100af350 = puVar8;
                        DAT_100af348 = DAT_100af350;
                        puVar8 = DAT_100af350 - 6;
                        if ((int)puVar8 < (int)param_3) {
                            puVar8 = DAT_100af340 - 6;
                        }
                    } while ((((int)DAT_100af350[1] < 0) && ((int)puVar8[1] < 1)) ||
                             (DAT_100af358 = (int)(puVar8[1] - DAT_100af350[1]), DAT_100af358 == 0));
                    lVar3 = (long long)((unsigned long long)(unsigned int)((int)((*puVar8 - *DAT_100af350) * 0x10000u) >> 0x10) << 0x20);
                    iVar15 = (int)((unsigned int)DAT_100af358 * 0x10000u);
                    if (iVar15 == 0 || (iVar15 == -1 && lVar3 == (-0x7fffffffffffffffLL - 1))) {
                        RaiseException(0xC0000094UL, 0, 0, 0);
                    } else {
                        lVar14 = lVar3 / iVar15;
                        if (lVar14 != (long long)(int)lVar14) {
                            RaiseException(0xC0000094UL, 0, 0, 0);
                        } else {
                            DAT_100af388 = (int)lVar14;
                        }
                    }
                    DAT_100af368 = (int)(*DAT_100af350 * 0x10000u + 0x8000u);
                    puVar11 = DAT_100af354;
                    do {
                        DAT_100af354 = puVar11;
                        DAT_100af34c = DAT_100af354;
                        puVar11 = DAT_100af354 + 6;
                        if ((int)DAT_100af340 <= (int)(DAT_100af354 + 6)) {
                            puVar11 = param_3;
                        }
                    } while ((((int)DAT_100af354[1] < 0) && ((int)puVar11[1] < 1)) ||
                             (DAT_100af35c = (int)(puVar11[1] - DAT_100af354[1]), DAT_100af35c == 0));
                    lVar3 = (long long)((unsigned long long)(unsigned int)((int)((*puVar11 - *DAT_100af354) * 0x10000u) >> 0x10) << 0x20);
                    iVar15 = (int)((unsigned int)DAT_100af35c * 0x10000u);
                    if (iVar15 == 0 || (iVar15 == -1 && lVar3 == (-0x7fffffffffffffffLL - 1))) {
                        RaiseException(0xC0000094UL, 0, 0, 0);
                    } else {
                        lVar14 = lVar3 / iVar15;
                        if (lVar14 != (long long)(int)lVar14) {
                            RaiseException(0xC0000094UL, 0, 0, 0);
                        } else {
                            DAT_100af38c = (int)lVar14;
                        }
                    }
                    DAT_100af36c = (int)(*DAT_100af354 * 0x10000u + 0x8000u);
                    _DAT_100af360 = (int)((unsigned int)iVar6 - uVar10);
                    if (uVar12 - (unsigned int)iVar6 == 0 || (int)uVar12 < iVar6) {
                        _DAT_100af360 = (int)((unsigned int)_DAT_100af360 + (uVar12 - (unsigned int)iVar6));
                    }
                    if (0x7fffffffu < uVar10) {
                        _DAT_100af360 = (int)((unsigned int)_DAT_100af360 + uVar10);
                        DAT_100af364 = 0;
                        DAT_100af358 = (int)((unsigned int)DAT_100af358 + DAT_100af350[1]);
                        lVar3 = (long long)DAT_100af388 * (long long)(int)(DAT_100af350[1] * 0xFFFF0000u);
                        DAT_100af368 = (int)((unsigned int)DAT_100af368 +
                                             (((unsigned int)lVar3 >> 0x10) |
                                              ((unsigned int)(int)((unsigned long long)lVar3 >> 0x20) << 0x10)));
                        DAT_100af35c = (int)((unsigned int)DAT_100af35c + DAT_100af354[1]);
                        lVar3 = (long long)DAT_100af38c * (long long)(int)(DAT_100af354[1] * 0xFFFF0000u);
                        DAT_100af36c = (int)((unsigned int)DAT_100af36c +
                                             (((unsigned int)lVar3 >> 0x10) |
                                              ((unsigned int)(int)((unsigned long long)lVar3 >> 0x20) << 0x10)));
                    }
                    DAT_100af330 = (unsigned int)DAT_100af364 * (unsigned int)DAT_100af324 + (unsigned int)DAT_100af320;
                    iVar4 = DAT_100af368;
                    iVar5 = DAT_100af36c;
                    DAT_100af350 = puVar8;
                    DAT_100af354 = puVar11;
LAB_100403ce:
                    iVar6 = iVar4;
                    iVar9 = iVar5;
                    if (iVar5 <= iVar4) {
                        iVar6 = iVar5;
                        iVar9 = iVar4;
                    }
                    uVar10 = (unsigned int)(iVar6 >> 0x10);
                    if (((int)uVar10 <= DAT_100af318) && (uVar12 = (unsigned int)(iVar9 >> 0x10), -1 < (int)uVar12)) {
                        DAT_100af3a8 = uVar10;
                        DAT_100af3ac = uVar12;
                        if (uVar12 != uVar10) {
                            if (0x7fffffffu < uVar10) {
                                DAT_100af3a8 = 0;
                            }
                            if (uVar12 - (unsigned int)DAT_100af318 != 0 && DAT_100af318 <= (int)uVar12) {
                                DAT_100af3ac = uVar12 - (uVar12 - (unsigned int)DAT_100af318);
                            }
                        }
                        pbVar13 = (unsigned char *)(DAT_100af330 + DAT_100af3a8);
                        uVar12 = DAT_100af3ac - DAT_100af3a8;
                        DAT_100af334 = pbVar13 + uVar12;
                        uVar10 = uVar12 + 1u;
                        if (((unsigned int)pbVar13 & 1) != 0) {
                            *pbVar13 = ((unsigned char *)param_4)[*pbVar13];
                            if (uVar12 == 0) goto LAB_1004055f;
                            pbVar13 = pbVar13 + 1;
                            uVar10 = uVar12;
                        }
                        if (uVar10 != 1) {
                            iVar6 = (int)((uVar10 >> 1) - 1u);
                            do {
                                if (iVar6 < 5) {
                                    *(unsigned short *)pbVar13 =
                                        (unsigned short)(((unsigned int)((unsigned char *)param_4)[(unsigned char)(*(unsigned short *)pbVar13 >> 8)] << 8) |
                                                         (unsigned int)((unsigned char *)param_4)[(unsigned char)*(unsigned short *)pbVar13]);
                                    if (-1 < (int)((unsigned int)iVar6 - 1u)) {
                                        *(unsigned short *)(pbVar13 + 2) =
                                            (unsigned short)(((unsigned int)((unsigned char *)param_4)[(unsigned char)(*(unsigned short *)(pbVar13 + 2) >> 8)] << 8) |
                                                             (unsigned int)((unsigned char *)param_4)[(unsigned char)*(unsigned short *)(pbVar13 + 2)]);
                                        if (-1 < (int)((unsigned int)iVar6 - 2u)) {
                                            *(unsigned short *)(pbVar13 + 4) =
                                                (unsigned short)(((unsigned int)((unsigned char *)param_4)[(unsigned char)(*(unsigned short *)(pbVar13 + 4) >> 8)] << 8) |
                                                                 (unsigned int)((unsigned char *)param_4)[(unsigned char)*(unsigned short *)(pbVar13 + 4)]);
                                            if (-1 < (int)((unsigned int)iVar6 - 3u)) {
                                                *(unsigned short *)(pbVar13 + 6) =
                                                    (unsigned short)(((unsigned int)((unsigned char *)param_4)[(unsigned char)(*(unsigned short *)(pbVar13 + 6) >> 8)] << 8) |
                                                                     (unsigned int)((unsigned char *)param_4)[(unsigned char)*(unsigned short *)(pbVar13 + 6)]);
                                                if (-1 < (int)((unsigned int)iVar6 - 4u)) {
                                                    *(unsigned short *)(pbVar13 + 8) =
                                                        (unsigned short)(((unsigned int)((unsigned char *)param_4)[(unsigned char)(*(unsigned short *)(pbVar13 + 8) >> 8)] << 8) |
                                                                         (unsigned int)((unsigned char *)param_4)[(unsigned char)*(unsigned short *)(pbVar13 + 8)]);
                                                }
                                            }
                                        }
                                    }
                                    break;
                                }
                                *(unsigned short *)pbVar13 =
                                    (unsigned short)(((unsigned int)((unsigned char *)param_4)[(unsigned char)(*(unsigned short *)pbVar13 >> 8)] << 8) |
                                                     (unsigned int)((unsigned char *)param_4)[(unsigned char)*(unsigned short *)pbVar13]);
                                *(unsigned short *)(pbVar13 + 2) =
                                    (unsigned short)(((unsigned int)((unsigned char *)param_4)[(unsigned char)(*(unsigned short *)(pbVar13 + 2) >> 8)] << 8) |
                                                     (unsigned int)((unsigned char *)param_4)[(unsigned char)*(unsigned short *)(pbVar13 + 2)]);
                                *(unsigned short *)(pbVar13 + 4) =
                                    (unsigned short)(((unsigned int)((unsigned char *)param_4)[(unsigned char)(*(unsigned short *)(pbVar13 + 4) >> 8)] << 8) |
                                                     (unsigned int)((unsigned char *)param_4)[(unsigned char)*(unsigned short *)(pbVar13 + 4)]);
                                *(unsigned short *)(pbVar13 + 6) =
                                    (unsigned short)(((unsigned int)((unsigned char *)param_4)[(unsigned char)(*(unsigned short *)(pbVar13 + 6) >> 8)] << 8) |
                                                     (unsigned int)((unsigned char *)param_4)[(unsigned char)*(unsigned short *)(pbVar13 + 6)]);
                                *(unsigned short *)(pbVar13 + 8) =
                                    (unsigned short)(((unsigned int)((unsigned char *)param_4)[(unsigned char)(*(unsigned short *)(pbVar13 + 8) >> 8)] << 8) |
                                                     (unsigned int)((unsigned char *)param_4)[(unsigned char)*(unsigned short *)(pbVar13 + 8)]);
                                *(unsigned short *)(pbVar13 + 10) =
                                    (unsigned short)(((unsigned int)((unsigned char *)param_4)[(unsigned char)(*(unsigned short *)(pbVar13 + 10) >> 8)] << 8) |
                                                     (unsigned int)((unsigned char *)param_4)[(unsigned char)*(unsigned short *)(pbVar13 + 10)]);
                                pbVar13 = pbVar13 + 0xc;
                                iVar6 = (int)((unsigned int)iVar6 - 6u);
                            } while (-1 < iVar6);
                            if ((uVar10 & 1) == 0) goto LAB_1004055f;
                        }
                        *DAT_100af334 = ((unsigned char *)param_4)[*DAT_100af334];
                    }
LAB_1004055f:
                    DAT_100af330 = DAT_100af330 + (unsigned int)DAT_100af324;
                    _DAT_100af360 = (int)((unsigned int)_DAT_100af360 - 1u);
                    if (-1 < _DAT_100af360) {
                        if (_DAT_100af360 == 0) {
                            iVar4 = (int)((unsigned int)iVar4 + (unsigned int)DAT_100af388);
                            iVar5 = (int)((unsigned int)iVar5 + (unsigned int)DAT_100af38c);
                        } else {
                            DAT_100af358 = (int)((unsigned int)DAT_100af358 - 1u);
                            if (DAT_100af358 == 0) {
                                DAT_100af348 = DAT_100af350;
                                puVar8 = DAT_100af350 - 6;
                                if ((int)puVar8 < (int)DAT_100af33c) {
                                    puVar8 = DAT_100af340 - 6;
                                }
                                DAT_100af358 = (int)((puVar8[1] - DAT_100af350[1]) +
                                                     (unsigned int)(puVar8[1] - DAT_100af350[1] == 0));
                                lVar3 = (long long)((unsigned long long)(unsigned int)((int)((*puVar8 - *DAT_100af350) * 0x10000u) >> 0x10) << 0x20);
                                iVar15 = (int)((unsigned int)DAT_100af358 * 0x10000u);
                                if (iVar15 == 0 || (iVar15 == -1 && lVar3 == (-0x7fffffffffffffffLL - 1))) {
                                    RaiseException(0xC0000094UL, 0, 0, 0);
                                } else {
                                    lVar14 = lVar3 / iVar15;
                                    if (lVar14 != (long long)(int)lVar14) {
                                        RaiseException(0xC0000094UL, 0, 0, 0);
                                    } else {
                                        DAT_100af388 = (int)lVar14;
                                    }
                                }
                                iVar4 = (int)(*DAT_100af350 * 0x10000u + 0x8000u);
                                DAT_100af350 = puVar8;
                            } else {
                                iVar4 = (int)((unsigned int)iVar4 + (unsigned int)DAT_100af388);
                            }
                            DAT_100af35c = (int)((unsigned int)DAT_100af35c - 1u);
                            if (DAT_100af35c == 0) {
                                DAT_100af34c = DAT_100af354;
                                puVar8 = DAT_100af354 + 6;
                                if ((int)DAT_100af340 <= (int)(DAT_100af354 + 6)) {
                                    puVar8 = DAT_100af33c;
                                }
                                DAT_100af35c = (int)((puVar8[1] - DAT_100af354[1]) +
                                                     (unsigned int)(puVar8[1] - DAT_100af354[1] == 0));
                                lVar3 = (long long)((unsigned long long)(unsigned int)((int)((*puVar8 - *DAT_100af354) * 0x10000u) >> 0x10) << 0x20);
                                iVar15 = (int)((unsigned int)DAT_100af35c * 0x10000u);
                                if (iVar15 == 0 || (iVar15 == -1 && lVar3 == (-0x7fffffffffffffffLL - 1))) {
                                    RaiseException(0xC0000094UL, 0, 0, 0);
                                } else {
                                    lVar14 = lVar3 / iVar15;
                                    if (lVar14 != (long long)(int)lVar14) {
                                        RaiseException(0xC0000094UL, 0, 0, 0);
                                    } else {
                                        DAT_100af38c = (int)lVar14;
                                    }
                                }
                                iVar5 = (int)(*DAT_100af354 * 0x10000u + 0x8000u);
                                DAT_100af354 = puVar8;
                            } else {
                                iVar5 = (int)((unsigned int)iVar5 + (unsigned int)DAT_100af38c);
                            }
                        }
                        goto LAB_100403ce;
                    }
                }
            }
        }
    }
    return;
}
