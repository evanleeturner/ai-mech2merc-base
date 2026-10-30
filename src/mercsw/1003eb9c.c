/* SPDX-License-Identifier: MIT */
/* mercsw 1003eb9c */
void __stdcall RaiseException(DWORD, DWORD, DWORD, const DWORD *);

extern int DAT_100af324;
extern int DAT_100af318;
extern int DAT_100af31c;
extern int DAT_100af320;
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
extern unsigned int DAT_100af338;
extern unsigned int DAT_100af3c0;

void __cdecl FUN_1003eb9c(int *param_1, int param_2, unsigned int *param_3)
{
    int *piVar1;
    unsigned int uVar2;
    long long lVar3;
    unsigned int uVar4;
    unsigned char uVar5;
    unsigned short uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    unsigned int uVar11;
    unsigned int uVar12;
    int iVar13;
    unsigned int *puVar14;
    unsigned int uVar15;
    unsigned int *puVar16;
    unsigned int uVar17;
    unsigned int *puVar18;
    long long dn;
    long long dq;
    int dd;
    unsigned int de;

    piVar1 = (int *)*param_1;
    DAT_100af324 = (int)((unsigned int)piVar1[1] + 1u);
    iVar7 = piVar1[1];
    if (param_1[3] <= piVar1[1]) {
        iVar7 = param_1[3];
    }
    uVar15 = 0;
    if ((unsigned int)param_1[1] < 0x80000000u) {
        uVar15 = (unsigned int)param_1[1];
    }
    iVar9 = (int)((unsigned int)iVar7 - uVar15);
    if ((int)uVar15 <= iVar7) {
        iVar7 = piVar1[2];
        if (param_1[4] <= piVar1[2]) {
            iVar7 = param_1[4];
        }
        uVar17 = 0;
        if ((unsigned int)param_1[2] < 0x80000000u) {
            uVar17 = (unsigned int)param_1[2];
        }
        iVar10 = (int)((unsigned int)iVar7 - uVar17);
        DAT_100af318 = iVar9;
        if ((int)uVar17 <= iVar7) {
            DAT_100af320 = (int)(uVar17 * (unsigned int)DAT_100af324 + uVar15 + (unsigned int)*piVar1);
            DAT_100af340 = param_3 + param_2 * 6;
            DAT_100af33c = param_3;
            uVar5 = (unsigned char)((param_3[2] + 0x8000u) >> 0x10);
            uVar6 = (unsigned short)(((unsigned int)uVar5 << 8) | uVar5);
            DAT_100af3c0 = ((unsigned int)uVar6 << 16) | uVar6;
            DAT_100af338 = 0;
            uVar15 = 0x7fff;
            uVar17 = 0xffff8000u;
            uVar11 = 0xf;
            puVar14 = param_3;
            do {
                uVar12 = (*puVar14 >> 0x1f) << 1 | ((unsigned int)iVar9 - *puVar14) >> 0x1f;
                DAT_100af338 = DAT_100af338 | uVar12;
                uVar2 = puVar14[1];
                if ((int)uVar2 <= (int)uVar15) {
                    uVar15 = uVar2;
                    DAT_100af344 = puVar14;
                }
                if ((int)uVar17 <= (int)uVar2) {
                    uVar17 = uVar2;
                }
                uVar11 = uVar11 & (((uVar12 << 1 | puVar14[1] >> 0x1f) << 1) | (((unsigned int)iVar10 - puVar14[1]) >> 0x1f));
                puVar14 = puVar14 + 6;
            } while (puVar14 != DAT_100af340);
            DAT_100af31c = iVar10;
            if (uVar11 == 0) {
                DAT_100af350 = DAT_100af344;
                DAT_100af354 = DAT_100af344;
                puVar14 = DAT_100af350;
                DAT_100af364 = (int)uVar15;
                if (uVar17 != uVar15) {
                    do {
                        DAT_100af350 = puVar14;
                        DAT_100af348 = DAT_100af350;
                        puVar14 = DAT_100af350 + -6;
                        if ((int)puVar14 < (int)param_3) {
                            puVar14 = DAT_100af340 + -6;
                        }
                    } while ((((int)DAT_100af350[1] < 0) && ((int)puVar14[1] < 1)) ||
                             (DAT_100af358 = (int)(puVar14[1] - DAT_100af350[1]), DAT_100af358 == 0));
                    de = (unsigned int)((int)((*puVar14 - *DAT_100af350) * 0x10000u) >> 0x10);
                    dd = (int)((unsigned int)DAT_100af358 * 0x10000u);
                    if (dd == 0) {
                        RaiseException(0xC0000094UL, 0, 0, NULL);
                        dq = 0;
                    } else {
                        dn = (long long)((unsigned long long)de << 32);
                        dq = dn / dd;
                        if (dq != (long long)(int)dq) {
                            RaiseException(0xC0000094UL, 0, 0, NULL);
                        }
                    }
                    DAT_100af388 = (int)dq;
                    DAT_100af368 = (int)(*DAT_100af350 * 0x10000u + 0x8000u);
                    puVar16 = DAT_100af354;
                    do {
                        DAT_100af354 = puVar16;
                        DAT_100af34c = DAT_100af354;
                        puVar16 = DAT_100af354 + 6;
                        if ((int)DAT_100af340 <= (int)(DAT_100af354 + 6)) {
                            puVar16 = param_3;
                        }
                    } while ((((int)DAT_100af354[1] < 0) && ((int)puVar16[1] < 1)) ||
                             (DAT_100af35c = (int)(puVar16[1] - DAT_100af354[1]), DAT_100af35c == 0));
                    de = (unsigned int)((int)((*puVar16 - *DAT_100af354) * 0x10000u) >> 0x10);
                    dd = (int)((unsigned int)DAT_100af35c * 0x10000u);
                    if (dd == 0) {
                        RaiseException(0xC0000094UL, 0, 0, NULL);
                        dq = 0;
                    } else {
                        dn = (long long)((unsigned long long)de << 32);
                        dq = dn / dd;
                        if (dq != (long long)(int)dq) {
                            RaiseException(0xC0000094UL, 0, 0, NULL);
                        }
                    }
                    DAT_100af38c = (int)dq;
                    DAT_100af36c = (int)(*DAT_100af354 * 0x10000u + 0x8000u);
                    _DAT_100af360 = (int)((unsigned int)iVar10 - uVar15);
                    if (uVar17 - (unsigned int)iVar10 == 0 || (int)uVar17 < iVar10) {
                        _DAT_100af360 = (int)((unsigned int)_DAT_100af360 + (uVar17 - (unsigned int)iVar10));
                    }
                    if (0x7fffffffu < uVar15) {
                        _DAT_100af360 = (int)((unsigned int)_DAT_100af360 + uVar15);
                        DAT_100af364 = 0;
                        DAT_100af358 = (int)((unsigned int)DAT_100af358 + DAT_100af350[1]);
                        lVar3 = (long long)DAT_100af388 * (long long)(int)(DAT_100af350[1] * 0xffff0000u);
                        DAT_100af368 = (int)((unsigned int)DAT_100af368 +
                                       (((unsigned int)lVar3 >> 0x10) |
                                        ((unsigned int)(int)((unsigned long long)lVar3 >> 0x20) << 0x10)));
                        DAT_100af35c = (int)((unsigned int)DAT_100af35c + DAT_100af354[1]);
                        lVar3 = (long long)DAT_100af38c * (long long)(int)(DAT_100af354[1] * 0xffff0000u);
                        DAT_100af36c = (int)((unsigned int)DAT_100af36c +
                                       (((unsigned int)lVar3 >> 0x10) |
                                        ((unsigned int)(int)((unsigned long long)lVar3 >> 0x20) << 0x10)));
                    }
                    iVar10 = (int)((unsigned int)DAT_100af320 + (unsigned int)DAT_100af364 * (unsigned int)DAT_100af324);
                    iVar7 = DAT_100af368;
                    iVar9 = DAT_100af36c;
                    DAT_100af350 = puVar14;
                    DAT_100af354 = puVar16;
                    if (DAT_100af338 != 0) goto LAB_1003eed0;
                    while (1) {
                        uVar4 = DAT_100af3c0;
                        iVar8 = iVar7;
                        iVar13 = iVar9;
                        if (iVar9 <= iVar7) {
                            iVar8 = iVar9;
                            iVar13 = iVar7;
                        }
                        uVar17 = (unsigned int)(((iVar13 >> 0x10) - (iVar8 >> 0x10)) + 1);
                        puVar18 = (unsigned int *)(iVar10 + (iVar8 >> 0x10));
                        for (uVar15 = uVar17 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
                            *(char *)puVar18 = (char)uVar4;
                            puVar18 = (unsigned int *)((int)puVar18 + 1);
                        }
                        for (uVar17 = uVar17 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                            *puVar18 = uVar4;
                            puVar18 = puVar18 + 1;
                        }
                        iVar10 = (int)((unsigned int)iVar10 + (unsigned int)DAT_100af324);
                        _DAT_100af360 = (int)((unsigned int)_DAT_100af360 - 1u);
                        if (_DAT_100af360 < 0) break;
                        if (_DAT_100af360 == 0) {
                            iVar7 = (int)((unsigned int)iVar7 + (unsigned int)DAT_100af388);
                            iVar9 = (int)((unsigned int)iVar9 + (unsigned int)DAT_100af38c);
                        } else {
                            DAT_100af358 = DAT_100af358 - 1;
                            if (DAT_100af358 == 0) goto LAB_1003ef62;
                            iVar7 = (int)((unsigned int)iVar7 + (unsigned int)DAT_100af388);
LAB_1003eea5:
                            DAT_100af35c = DAT_100af35c - 1;
                            if (DAT_100af35c == 0) {
                                while (1) {
                                    DAT_100af34c = DAT_100af354;
                                    puVar14 = DAT_100af354 + 6;
                                    if ((int)DAT_100af340 <= (int)(DAT_100af354 + 6)) {
                                        puVar14 = DAT_100af33c;
                                    }
                                    DAT_100af35c = (int)((puVar14[1] - DAT_100af354[1]) +
                                                   (unsigned int)(puVar14[1] - DAT_100af354[1] == 0));
                                    de = (unsigned int)((int)((*puVar14 - *DAT_100af354) * 0x10000u) >> 0x10);
                                    dd = (int)((unsigned int)DAT_100af35c * 0x10000u);
                                    if (dd == 0) {
                                        RaiseException(0xC0000094UL, 0, 0, NULL);
                                        dq = 0;
                                    } else {
                                        dn = (long long)((unsigned long long)de << 32);
                                        dq = dn / dd;
                                        if (dq != (long long)(int)dq) {
                                            RaiseException(0xC0000094UL, 0, 0, NULL);
                                        }
                                    }
                                    DAT_100af38c = (int)dq;
                                    iVar9 = (int)(*DAT_100af354 * 0x10000u + 0x8000u);
                                    DAT_100af354 = puVar14;
                                    if (DAT_100af338 == 0) break;
LAB_1003eed0:
                                    while (1) {
                                        while (1) {
                                            uVar4 = DAT_100af3c0;
                                            iVar8 = iVar7;
                                            iVar13 = iVar9;
                                            if (iVar9 <= iVar7) {
                                                iVar8 = iVar9;
                                                iVar13 = iVar7;
                                            }
                                            iVar8 = iVar8 >> 0x10;
                                            iVar13 = iVar13 >> 0x10;
                                            if ((iVar8 <= DAT_100af318) && (-1 < iVar13)) {
                                                uVar15 = (unsigned int)((iVar13 - iVar8) + 1);
                                                puVar18 = (unsigned int *)(iVar10 + iVar8);
                                                if (iVar8 < 0) {
                                                    puVar18 = (unsigned int *)((int)puVar18 - iVar8);
                                                    uVar15 = uVar15 + (unsigned int)iVar8;
                                                }
                                                if (iVar13 - DAT_100af318 != 0 && DAT_100af318 <= iVar13) {
                                                    uVar15 = uVar15 - (unsigned int)(iVar13 - DAT_100af318);
                                                }
                                                for (uVar17 = uVar15 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
                                                    *(char *)puVar18 = (char)uVar4;
                                                    puVar18 = (unsigned int *)((int)puVar18 + 1);
                                                }
                                                for (uVar15 = uVar15 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
                                                    *puVar18 = uVar4;
                                                    puVar18 = puVar18 + 1;
                                                }
                                            }
                                            iVar10 = (int)((unsigned int)iVar10 + (unsigned int)DAT_100af324);
                                            _DAT_100af360 = (int)((unsigned int)_DAT_100af360 - 1u);
                                            if (_DAT_100af360 < 0) {
                                                return;
                                            }
                                            if (_DAT_100af360 != 0) break;
                                            iVar7 = (int)((unsigned int)iVar7 + (unsigned int)DAT_100af388);
                                            iVar9 = (int)((unsigned int)iVar9 + (unsigned int)DAT_100af38c);
                                        }
                                        DAT_100af358 = DAT_100af358 - 1;
                                        if (DAT_100af358 == 0) {
LAB_1003ef62:
                                            DAT_100af348 = DAT_100af350;
                                            puVar14 = DAT_100af350 + -6;
                                            if ((int)puVar14 < (int)DAT_100af33c) {
                                                puVar14 = DAT_100af340 + -6;
                                            }
                                            DAT_100af358 = (int)((puVar14[1] - DAT_100af350[1]) +
                                                           (unsigned int)(puVar14[1] - DAT_100af350[1] == 0));
                                            de = (unsigned int)((int)((*puVar14 - *DAT_100af350) * 0x10000u) >> 0x10);
                                            dd = (int)((unsigned int)DAT_100af358 * 0x10000u);
                                            if (dd == 0) {
                                                RaiseException(0xC0000094UL, 0, 0, NULL);
                                                dq = 0;
                                            } else {
                                                dn = (long long)((unsigned long long)de << 32);
                                                dq = dn / dd;
                                                if (dq != (long long)(int)dq) {
                                                    RaiseException(0xC0000094UL, 0, 0, NULL);
                                                }
                                            }
                                            DAT_100af388 = (int)dq;
                                            iVar7 = (int)(*DAT_100af350 * 0x10000u + 0x8000u);
                                            DAT_100af350 = puVar14;
                                            if (DAT_100af338 == 0) goto LAB_1003eea5;
                                        } else {
                                            iVar7 = (int)((unsigned int)iVar7 + (unsigned int)DAT_100af388);
                                        }
                                        DAT_100af35c = DAT_100af35c - 1;
                                        if (DAT_100af35c == 0) break;
                                        iVar9 = (int)((unsigned int)iVar9 + (unsigned int)DAT_100af38c);
                                    }
                                }
                            } else {
                                iVar9 = (int)((unsigned int)iVar9 + (unsigned int)DAT_100af38c);
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}
