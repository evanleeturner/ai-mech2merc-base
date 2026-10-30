/* SPDX-License-Identifier: MIT */
/* mercsw 1003f893 */
extern int    DAT_100af324;
extern int    DAT_100af318;
extern int    DAT_100af31c;
extern int    DAT_100af320;
extern unsigned int  DAT_100af338;
extern unsigned int *DAT_100af33c;
extern unsigned int *DAT_100af340;
extern unsigned int *DAT_100af344;
extern unsigned int *DAT_100af348;
extern unsigned int *DAT_100af34c;
extern unsigned int *DAT_100af350;
extern unsigned int *DAT_100af354;
extern int    DAT_100af358;
extern int    DAT_100af35c;
extern int    DAT_100af360;
extern int    DAT_100af364;
extern int    DAT_100af368;
extern int    DAT_100af36c;
extern unsigned int DAT_100af370;
extern unsigned int DAT_100af374;
extern int    DAT_100af388;
extern int    DAT_100af38c;
extern int    DAT_100af390;
extern int    DAT_100af394;
extern int    DAT_100af3a8;
extern int    DAT_100af3ac;
extern int    DAT_100af3b0;
extern int    DAT_100af3c8;
extern int    DAT_100af3cc;
extern void  *DAT_100af3d0;
extern int    DAT_100af3d4;
extern char  *DAT_100af334;

void __stdcall RaiseException(DWORD, DWORD, DWORD, const DWORD *);

#define CONCAT21(a, b) ((((unsigned int)(unsigned short)(a)) << 8) | (unsigned int)(unsigned char)(b))
#define CONCAT11(a, b) ((unsigned short)((((unsigned int)(unsigned char)(a)) << 8) | (unsigned int)(unsigned char)(b)))
#define CARRY4(a, b)   ((unsigned int)((((unsigned int)(a)) + ((unsigned int)(b))) < ((unsigned int)(a))))
#define MULSHIFT(l)    (((unsigned int)(l) >> 0x10) | (((unsigned int)((unsigned long long)(l) >> 0x20)) << 0x10))

void __cdecl FUN_1003f893(int *param_1, int param_2, int param_3, unsigned int *param_4)
{
    int *piVar1;
    long long lVar2;
    char cVar3;
    char cVar4;
    char cVar11;
    unsigned short uVar5;
    unsigned int uVar6;
    int iVar7;
    int iVar8;
    unsigned int uVar9;
    int iVar10;
    unsigned int uVar12;
    unsigned int *puVar13;
    unsigned int uVar14;
    int iVar15;
    int iVar16;
    unsigned int uVar17;
    int iVar18;
    unsigned int uVar19;
    unsigned int uVar20;
    unsigned int uVar21;
    unsigned int *puVar22;
    unsigned int uVar23;
    unsigned short *puVar24;
    long long divn;
    int divd;
    long long divq;
    int divr;

    piVar1 = (int *)*param_1;
    DAT_100af324 = piVar1[1] + 1;
    iVar10 = piVar1[1];
    if (param_1[3] <= piVar1[1]) {
        iVar10 = param_1[3];
    }
    uVar21 = 0;
    if ((unsigned int)param_1[1] < 0x80000000) {
        uVar21 = param_1[1];
    }
    iVar7 = (int)((unsigned int)iVar10 - uVar21);
    if ((int)uVar21 <= iVar10) {
        iVar10 = piVar1[2];
        if (param_1[4] <= piVar1[2]) {
            iVar10 = param_1[4];
        }
        uVar23 = 0;
        if ((unsigned int)param_1[2] < 0x80000000) {
            uVar23 = param_1[2];
        }
        iVar8 = (int)((unsigned int)iVar10 - uVar23);
        DAT_100af318 = iVar7;
        if ((int)uVar23 <= iVar10) {
            DAT_100af320 = (int)(uVar23 * (unsigned int)DAT_100af324 + uVar21 + (unsigned int)*piVar1);
            DAT_100af340 = param_4 + param_3 * 6;
            DAT_100af33c = param_4;
            DAT_100af338 = 0;
            uVar21 = 0x7fff;
            uVar23 = 0xffff8000;
            uVar9 = 0xf;
            puVar13 = param_4;
            do {
                uVar12 = (*puVar13 >> 0x1f) << 1 | (((unsigned int)iVar7 - *puVar13) >> 0x1f);
                DAT_100af338 = DAT_100af338 | uVar12;
                uVar19 = puVar13[1];
                if ((int)uVar19 <= (int)uVar21) {
                    uVar21 = uVar19;
                    DAT_100af344 = puVar13;
                }
                if ((int)uVar23 <= (int)uVar19) {
                    uVar23 = uVar19;
                }
                uVar9 = uVar9 & ((uVar12 << 1 | puVar13[1] >> 0x1f) << 1 |
                                 (((unsigned int)iVar8 - puVar13[1]) >> 0x1f));
                puVar13 = puVar13 + 6;
            } while (puVar13 != DAT_100af340);
            DAT_100af31c = iVar8;
            DAT_100af3d0 = (void *)((char *)&param_1 - 8); /* &stack0xfffffffc */
            if (uVar9 == 0) {
                DAT_100af350 = DAT_100af344;
                DAT_100af354 = DAT_100af344;
                puVar13 = DAT_100af350;
                DAT_100af364 = (int)uVar21;
                DAT_100af3d0 = (void *)((char *)&param_1 - 8);
                if (uVar23 != uVar21) {
                    do {
                        DAT_100af350 = puVar13;
                        puVar13 = DAT_100af350 + -6;
                        if ((int)puVar13 < (int)param_4) {
                            puVar13 = DAT_100af340 + -6;
                        }
                    } while ((((int)DAT_100af350[1] < 0) && ((int)puVar13[1] < 1)) ||
                             (DAT_100af358 = (int)(puVar13[1] - DAT_100af350[1]), DAT_100af358 == 0));
                    divn = (long long)((((unsigned long long)(unsigned int)((int)((*puVar13 - *DAT_100af350) * 0x10000) >> 0x10)) << 32) | 0ULL);
                    divd = (int)((unsigned int)DAT_100af358 * 0x10000);
                    if (divd == 0 || (divd == -1 && divn == (-0x7fffffffffffffffLL - 1))) {
                        RaiseException(0xC0000094UL, 0, 0, NULL);
                    } else {
                        divq = divn / divd;
                        if (divq != (long long)(int)divq) {
                            RaiseException(0xC0000094UL, 0, 0, NULL);
                        } else {
                            DAT_100af388 = (int)divq;
                        }
                    }
                    divn = (long long)((((unsigned long long)(unsigned int)((int)(puVar13[2] - DAT_100af350[2]) >> 0x10)) << 32) |
                                       (unsigned long long)(unsigned int)((puVar13[2] - DAT_100af350[2]) * 0x10000));
                    divd = (int)((unsigned int)DAT_100af358 * 0x10000);
                    if (divd == 0 || (divd == -1 && divn == (-0x7fffffffffffffffLL - 1))) {
                        RaiseException(0xC0000094UL, 0, 0, NULL);
                    } else {
                        divq = divn / divd;
                        if (divq != (long long)(int)divq) {
                            RaiseException(0xC0000094UL, 0, 0, NULL);
                        } else {
                            DAT_100af390 = (int)divq;
                        }
                    }
                    DAT_100af368 = (int)(*DAT_100af350 * 0x10000 + 0x8000);
                    DAT_100af370 = DAT_100af350[2] + 0x8000;
                    puVar22 = DAT_100af354;
                    do {
                        DAT_100af354 = puVar22;
                        puVar22 = DAT_100af354 + 6;
                        if ((int)DAT_100af340 <= (int)(DAT_100af354 + 6)) {
                            puVar22 = param_4;
                        }
                    } while ((((int)DAT_100af354[1] < 0) && ((int)puVar22[1] < 1)) ||
                             (DAT_100af35c = (int)(puVar22[1] - DAT_100af354[1]), DAT_100af35c == 0));
                    divn = (long long)((((unsigned long long)(unsigned int)((int)((*puVar22 - *DAT_100af354) * 0x10000) >> 0x10)) << 32) | 0ULL);
                    divd = (int)((unsigned int)DAT_100af35c * 0x10000);
                    if (divd == 0 || (divd == -1 && divn == (-0x7fffffffffffffffLL - 1))) {
                        RaiseException(0xC0000094UL, 0, 0, NULL);
                    } else {
                        divq = divn / divd;
                        if (divq != (long long)(int)divq) {
                            RaiseException(0xC0000094UL, 0, 0, NULL);
                        } else {
                            DAT_100af38c = (int)divq;
                        }
                    }
                    divn = (long long)((((unsigned long long)(unsigned int)((int)(puVar22[2] - DAT_100af354[2]) >> 0x10)) << 32) |
                                       (unsigned long long)(unsigned int)((puVar22[2] - DAT_100af354[2]) * 0x10000));
                    divd = (int)((unsigned int)DAT_100af35c * 0x10000);
                    if (divd == 0 || (divd == -1 && divn == (-0x7fffffffffffffffLL - 1))) {
                        RaiseException(0xC0000094UL, 0, 0, NULL);
                    } else {
                        divq = divn / divd;
                        if (divq != (long long)(int)divq) {
                            RaiseException(0xC0000094UL, 0, 0, NULL);
                        } else {
                            DAT_100af394 = (int)divq;
                        }
                    }
                    DAT_100af36c = (int)(*DAT_100af354 * 0x10000 + 0x8000);
                    DAT_100af374 = DAT_100af354[2] + 0x8000;
                    DAT_100af360 = (int)((unsigned int)iVar8 - uVar21);
                    if (uVar23 - (unsigned int)iVar8 == 0 || (int)uVar23 < iVar8) {
                        DAT_100af360 = (int)((unsigned int)DAT_100af360 + (uVar23 - (unsigned int)iVar8));
                    }
                    DAT_100af3cc = 0;
                    DAT_100af3c8 = param_2;
                    if (-uVar21 != 0 && (int)uVar21 < 1) {
                        DAT_100af360 = (int)((unsigned int)DAT_100af360 + uVar21);
                        if ((-uVar21 & 1) != 0) {
                            DAT_100af3c8 = 0;
                            DAT_100af3cc = param_2;
                        }
                        DAT_100af364 = 0;
                        DAT_100af358 = (int)((unsigned int)DAT_100af358 + DAT_100af350[1]);
                        iVar10 = (int)(DAT_100af350[1] * (unsigned int)-0x10000);
                        lVar2 = (long long)DAT_100af388 * (long long)iVar10;
                        DAT_100af368 = (int)((unsigned int)DAT_100af368 + MULSHIFT(lVar2));
                        lVar2 = (long long)DAT_100af390 * (long long)iVar10;
                        DAT_100af370 = DAT_100af370 + MULSHIFT(lVar2);
                        DAT_100af35c = (int)((unsigned int)DAT_100af35c + DAT_100af354[1]);
                        iVar10 = (int)(DAT_100af354[1] * (unsigned int)-0x10000);
                        lVar2 = (long long)DAT_100af38c * (long long)iVar10;
                        DAT_100af36c = (int)((unsigned int)DAT_100af36c + MULSHIFT(lVar2));
                        lVar2 = (long long)DAT_100af394 * (long long)iVar10;
                        DAT_100af374 = DAT_100af374 + MULSHIFT(lVar2);
                    }
                    iVar10 = (int)((unsigned int)DAT_100af320 + (unsigned int)DAT_100af364 * (unsigned int)DAT_100af324);
                    DAT_100af348 = DAT_100af350;
                    DAT_100af34c = DAT_100af354;
                    DAT_100af354 = puVar22;
                    DAT_100af350 = puVar13;
                    iVar7 = DAT_100af368;
                    iVar8 = DAT_100af36c;
                    uVar21 = DAT_100af370;
                    uVar23 = DAT_100af374;
                    DAT_100af3d0 = (void *)((char *)&param_1 - 8);
joined_r0x1003fbe5:
                    if (DAT_100af338 != 0) goto LAB_1003fdb8;
                    do {
                        iVar18 = iVar7;
                        uVar19 = uVar21;
                        uVar9 = uVar23;
                        iVar15 = iVar8;
                        if (iVar8 <= iVar7) {
                            iVar18 = iVar8;
                            uVar19 = uVar23;
                            uVar9 = uVar21;
                            iVar15 = iVar7;
                        }
                        uVar12 = (unsigned int)(iVar18 >> 0x10);
                        puVar24 = (unsigned short *)(iVar10 + uVar12);
                        uVar14 = (unsigned int)(iVar15 >> 0x10) - uVar12;
                        if (uVar14 != 0) {
                            divn = (long long)((((unsigned long long)(unsigned int)((int)(uVar9 - uVar19) >> 0x10)) << 32) |
                                               (unsigned long long)(unsigned int)((uVar9 - uVar19) * 0x10000));
                            divd = (int)((((unsigned int)((int)uVar14 >> 1) + (unsigned int)((int)uVar14 >> 1 == 0))) * 0x10000);
                            if (divd == 0 || (divd == -1 && divn == (-0x7fffffffffffffffLL - 1))) {
                                RaiseException(0xC0000094UL, 0, 0, NULL);
                            } else {
                                divq = divn / divd;
                                if (divq != (long long)(int)divq) {
                                    RaiseException(0xC0000094UL, 0, 0, NULL);
                                } else {
                                    divr = (int)divq;
                                    uVar12 = (unsigned int)divr;
                                }
                            }
                            uVar9 = uVar12 >> 0x10;
                        }
                        uVar12 = uVar12 * 0x10000;
                        DAT_100af334 = (char *)(uVar14 + (int)puVar24);
                        iVar18 = (int)(uVar19 + (unsigned int)DAT_100af3cc);
                        cVar3 = (char)((uVar19 + (unsigned int)DAT_100af3c8) >> 0x10);
                        cVar4 = (char)uVar9;
                        uVar6 = CONCAT21((short)((unsigned int)iVar18 >> 0x10), cVar3);
                        uVar9 = (uVar19 + (unsigned int)DAT_100af3c8) * 0x10000;
                        uVar19 = (unsigned int)iVar18 * 0x10000;
                        uVar17 = uVar14 + 1;
                        if (((unsigned int)puVar24 & 1) == 0) {
LAB_1003fc6e:
                            uVar5 = (unsigned short)uVar6;
                            if (uVar17 != 1) {
                                iVar18 = (int)((uVar17 >> 1) - 1);
                                do {
                                    if (iVar18 < 5) {
                                        *puVar24 = uVar5;
                                        cVar3 = (char)((char)uVar5 + cVar4 + CARRY4(uVar9, uVar12));
                                        cVar11 = (char)((char)(uVar5 >> 8) + cVar4 + CARRY4(uVar19, uVar12));
                                        uVar5 = CONCAT11(cVar11, cVar3);
                                        uVar6 = (unsigned int)uVar5;
                                        if (-1 < iVar18 + -1) {
                                            puVar24[1] = uVar5;
                                            uVar14 = uVar9 + uVar12 + uVar12;
                                            cVar3 = (char)(cVar3 + cVar4 + CARRY4(uVar9 + uVar12, uVar12));
                                            uVar9 = uVar19 + uVar12 + uVar12;
                                            cVar11 = (char)(cVar11 + cVar4 + CARRY4(uVar19 + uVar12, uVar12));
                                            uVar5 = CONCAT11(cVar11, cVar3);
                                            uVar6 = (unsigned int)uVar5;
                                            if (-1 < iVar18 + -2) {
                                                puVar24[2] = uVar5;
                                                uVar19 = uVar14 + uVar12;
                                                cVar3 = (char)(cVar3 + cVar4 + CARRY4(uVar14, uVar12));
                                                cVar11 = (char)(cVar11 + cVar4 + CARRY4(uVar9, uVar12));
                                                uVar5 = CONCAT11(cVar11, cVar3);
                                                uVar6 = (unsigned int)uVar5;
                                                if (-1 < iVar18 + -3) {
                                                    puVar24[3] = uVar5;
                                                    cVar3 = (char)(cVar3 + cVar4 + CARRY4(uVar19, uVar12));
                                                    uVar5 = CONCAT11((char)(cVar11 + cVar4 + CARRY4(uVar9 + uVar12, uVar12)), cVar3);
                                                    uVar6 = (unsigned int)uVar5;
                                                    if (-1 < iVar18 + -4) {
                                                        puVar24[4] = uVar5;
                                                        uVar6 = (unsigned int)(unsigned char)(cVar3 + cVar4 + CARRY4(uVar19 + uVar12, uVar12));
                                                    }
                                                }
                                            }
                                        }
                                        break;
                                    }
                                    *puVar24 = (unsigned short)uVar6;
                                    cVar3 = (char)((char)uVar6 + cVar4 + CARRY4(uVar9, uVar12));
                                    cVar11 = (char)((char)(uVar6 >> 8) + cVar4 + CARRY4(uVar19, uVar12));
                                    puVar24[1] = CONCAT11(cVar11, cVar3);
                                    uVar14 = uVar9 + uVar12 + uVar12;
                                    cVar3 = (char)(cVar3 + cVar4 + CARRY4(uVar9 + uVar12, uVar12));
                                    uVar20 = uVar19 + uVar12 + uVar12;
                                    cVar11 = (char)(cVar11 + cVar4 + CARRY4(uVar19 + uVar12, uVar12));
                                    puVar24[2] = CONCAT11(cVar11, cVar3);
                                    uVar9 = uVar14 + uVar12;
                                    cVar3 = (char)(cVar3 + cVar4 + CARRY4(uVar14, uVar12));
                                    uVar14 = uVar20 + uVar12;
                                    cVar11 = (char)(cVar11 + cVar4 + CARRY4(uVar20, uVar12));
                                    puVar24[3] = CONCAT11(cVar11, cVar3);
                                    uVar19 = uVar9 + uVar12;
                                    cVar3 = (char)(cVar3 + cVar4 + CARRY4(uVar9, uVar12));
                                    uVar9 = uVar14 + uVar12;
                                    cVar11 = (char)(cVar11 + cVar4 + CARRY4(uVar14, uVar12));
                                    puVar24[4] = CONCAT11(cVar11, cVar3);
                                    uVar14 = uVar19 + uVar12;
                                    cVar3 = (char)(cVar3 + cVar4 + CARRY4(uVar19, uVar12));
                                    uVar20 = uVar9 + uVar12;
                                    cVar11 = (char)(cVar11 + cVar4 + CARRY4(uVar9, uVar12));
                                    puVar24[5] = CONCAT11(cVar11, cVar3);
                                    uVar9 = uVar14 + uVar12;
                                    uVar19 = uVar20 + uVar12;
                                    uVar5 = CONCAT11((char)(cVar11 + cVar4 + CARRY4(uVar20, uVar12)),
                                                     (char)(cVar3 + cVar4 + CARRY4(uVar14, uVar12)));
                                    uVar6 = (unsigned int)uVar5;
                                    puVar24 = puVar24 + 6;
                                    iVar18 = iVar18 + -6;
                                } while (-1 < iVar18);
                                if ((uVar17 & 1) == 0) goto LAB_1003fd2c;
                            }
                            *DAT_100af334 = (char)uVar6;
                        }
                        else {
                            *(char *)puVar24 = cVar3;
                            if (uVar14 != 0) {
                                puVar24 = (unsigned short *)((int)puVar24 + 1);
                                uVar19 = uVar9 + uVar12;
                                uVar6 = (unsigned int)CONCAT11((char)(cVar3 + cVar4 + CARRY4(uVar9, uVar12)),
                                                               (char)((unsigned int)iVar18 >> 0x10));
                                uVar9 = (unsigned int)iVar18 * 0x10000;
                                uVar17 = uVar14;
                                goto LAB_1003fc6e;
                            }
                        }
LAB_1003fd2c:
                        iVar18 = DAT_100af3cc;
                        DAT_100af3cc = DAT_100af3c8;
                        DAT_100af3c8 = iVar18;
                        iVar10 = (int)((unsigned int)iVar10 + (unsigned int)DAT_100af324);
                        DAT_100af360 = DAT_100af360 + -1;
                        if (DAT_100af360 < 0) {
                            return;
                        }
                        if (DAT_100af360 == 0) {
                            iVar7 = (int)((unsigned int)iVar7 + (unsigned int)DAT_100af388);
                            uVar21 = uVar21 + (unsigned int)DAT_100af390;
                            iVar8 = (int)((unsigned int)iVar8 + (unsigned int)DAT_100af38c);
                            uVar23 = uVar23 + (unsigned int)DAT_100af394;
                        }
                        else {
                            DAT_100af358 = DAT_100af358 + -1;
                            if (DAT_100af358 == 0) {
LAB_10040007:
                                DAT_100af348 = DAT_100af350;
                                puVar13 = DAT_100af350 + -6;
                                if ((int)puVar13 < (int)DAT_100af33c) {
                                    puVar13 = DAT_100af340 + -6;
                                }
                                DAT_100af358 = (int)((puVar13[1] - DAT_100af350[1]) +
                                                     (unsigned int)(puVar13[1] - DAT_100af350[1] == 0));
                                divn = (long long)((((unsigned long long)(unsigned int)((int)(puVar13[2] - DAT_100af350[2]) >> 0x10)) << 32) |
                                                   (unsigned long long)(unsigned int)((puVar13[2] - DAT_100af350[2]) * 0x10000));
                                divd = (int)((unsigned int)DAT_100af358 * 0x10000);
                                if (divd == 0 || (divd == -1 && divn == (-0x7fffffffffffffffLL - 1))) {
                                    RaiseException(0xC0000094UL, 0, 0, NULL);
                                } else {
                                    divq = divn / divd;
                                    if (divq != (long long)(int)divq) {
                                        RaiseException(0xC0000094UL, 0, 0, NULL);
                                    } else {
                                        DAT_100af390 = (int)divq;
                                    }
                                }
                                divn = (long long)((((unsigned long long)(unsigned int)((int)((*puVar13 - *DAT_100af350) * 0x10000) >> 0x10)) << 32) | 0ULL);
                                divd = (int)((unsigned int)DAT_100af358 * 0x10000);
                                if (divd == 0 || (divd == -1 && divn == (-0x7fffffffffffffffLL - 1))) {
                                    RaiseException(0xC0000094UL, 0, 0, NULL);
                                } else {
                                    divq = divn / divd;
                                    if (divq != (long long)(int)divq) {
                                        RaiseException(0xC0000094UL, 0, 0, NULL);
                                    } else {
                                        DAT_100af388 = (int)divq;
                                    }
                                }
                                uVar21 = DAT_100af350[2] + 0x8000;
                                iVar7 = (int)(*DAT_100af350 * 0x10000 + 0x8000);
                                DAT_100af350 = puVar13;
                                if (DAT_100af338 != 0) {
LAB_1003ffa6:
                                    DAT_100af35c = DAT_100af35c + -1;
                                    if (DAT_100af35c != 0) {
                                        iVar8 = (int)((unsigned int)iVar8 + (unsigned int)DAT_100af38c);
                                        uVar23 = uVar23 + (unsigned int)DAT_100af394;
LAB_1003fdb8:
                                        do {
                                            iVar18 = iVar7;
                                            uVar9 = uVar21;
                                            uVar19 = uVar23;
                                            iVar15 = iVar8;
                                            if (iVar8 <= iVar7) {
                                                iVar18 = iVar8;
                                                uVar9 = uVar23;
                                                uVar19 = uVar21;
                                                iVar15 = iVar7;
                                            }
                                            iVar18 = iVar18 >> 0x10;
                                            if ((iVar18 <= DAT_100af318) && (iVar15 = iVar15 >> 0x10, -1 < iVar15)) {
                                                puVar24 = (unsigned short *)(iVar10 + iVar18);
                                                uVar12 = (unsigned int)((iVar15 - iVar18) + 1);
                                                if (uVar12 != 1) {
                                                    iVar16 = (iVar15 - iVar18) >> 1;
                                                    divn = (long long)((((unsigned long long)(unsigned int)((int)(uVar19 - uVar9) >> 0x10)) << 32) |
                                                                       (unsigned long long)(unsigned int)((uVar19 - uVar9) * 0x10000));
                                                    divd = (int)((((unsigned int)iVar16 + (unsigned int)(iVar16 == 0))) * 0x10000);
                                                    if (divd == 0 || (divd == -1 && divn == (-0x7fffffffffffffffLL - 1))) {
                                                        RaiseException(0xC0000094UL, 0, 0, NULL);
                                                    } else {
                                                        divq = divn / divd;
                                                        if (divq != (long long)(int)divq) {
                                                            RaiseException(0xC0000094UL, 0, 0, NULL);
                                                        } else {
                                                            DAT_100af3b0 = (int)divq;
                                                        }
                                                    }
                                                }
                                                DAT_100af3d4 = (int)(0u - (unsigned int)iVar18);
                                                if (DAT_100af3d4 == 0 || 0 < iVar18) {
                                                    DAT_100af3d4 = 0;
                                                }
                                                else {
                                                    puVar24 = (unsigned short *)((int)puVar24 + DAT_100af3d4);
                                                    uVar12 = uVar12 + (unsigned int)iVar18;
                                                    lVar2 = (long long)(int)(((unsigned int)DAT_100af3d4 & 0xfffffffeu) << 0xf) *
                                                            (long long)DAT_100af3b0;
                                                    uVar9 = uVar9 + MULSHIFT(lVar2);
                                                }
                                                if (iVar15 - DAT_100af318 != 0 && DAT_100af318 <= iVar15) {
                                                    uVar12 = uVar12 - (unsigned int)(iVar15 - DAT_100af318);
                                                }
                                                DAT_100af334 = (char *)((int)puVar24 + (uVar12 - 1));
                                                cVar3 = (char)((unsigned int)DAT_100af3b0 >> 0x10);
                                                uVar19 = (unsigned int)DAT_100af3b0 * 0x10000;
                                                iVar16 = (int)(uVar9 + (unsigned int)DAT_100af3cc);
                                                cVar4 = (char)((uVar9 + (unsigned int)DAT_100af3c8) >> 0x10);
                                                uVar6 = CONCAT21((short)((unsigned int)iVar16 >> 0x10), cVar4);
                                                uVar9 = (uVar9 + (unsigned int)DAT_100af3c8) * 0x10000;
                                                DAT_100af3a8 = iVar18;
                                                DAT_100af3ac = iVar15;
                                                if ((DAT_100af3d4 & 1) == 0) {
                                                    uVar14 = (unsigned int)iVar16 * 0x10000;
                                                    if (((unsigned int)puVar24 & 1) != 0) {
                                                        *(char *)puVar24 = cVar4;
                                                        uVar12 = uVar12 - 1;
                                                        if (uVar12 == 0) goto LAB_1003ff5d;
                                                        puVar24 = (unsigned short *)((int)puVar24 + 1);
                                                        goto LAB_1003fe97;
                                                    }
                                                }
                                                else {
LAB_1003fe97:
                                                    uVar14 = uVar9 + uVar19;
                                                    uVar6 = (unsigned int)CONCAT11((char)(cVar4 + cVar3 + CARRY4(uVar9, uVar19)),
                                                                                   (char)((unsigned int)iVar16 >> 0x10));
                                                    uVar9 = (unsigned int)iVar16 * 0x10000;
                                                }
                                                uVar5 = (unsigned short)uVar6;
                                                if (uVar12 != 1) {
                                                    iVar18 = (int)((uVar12 >> 1) - 1);
                                                    do {
                                                        if (iVar18 < 5) {
                                                            *puVar24 = uVar5;
                                                            cVar4 = (char)((char)uVar5 + cVar3 + CARRY4(uVar9, uVar19));
                                                            cVar11 = (char)((char)(uVar5 >> 8) + cVar3 + CARRY4(uVar14, uVar19));
                                                            uVar5 = CONCAT11(cVar11, cVar4);
                                                            uVar6 = (unsigned int)uVar5;
                                                            if (-1 < iVar18 + -1) {
                                                                puVar24[1] = uVar5;
                                                                uVar17 = uVar9 + uVar19 + uVar19;
                                                                cVar4 = (char)(cVar4 + cVar3 + CARRY4(uVar9 + uVar19, uVar19));
                                                                uVar9 = uVar14 + uVar19 + uVar19;
                                                                cVar11 = (char)(cVar11 + cVar3 + CARRY4(uVar14 + uVar19, uVar19));
                                                                uVar5 = CONCAT11(cVar11, cVar4);
                                                                uVar6 = (unsigned int)uVar5;
                                                                if (-1 < iVar18 + -2) {
                                                                    puVar24[2] = uVar5;
                                                                    uVar14 = uVar17 + uVar19;
                                                                    cVar4 = (char)(cVar4 + cVar3 + CARRY4(uVar17, uVar19));
                                                                    cVar11 = (char)(cVar11 + cVar3 + CARRY4(uVar9, uVar19));
                                                                    uVar5 = CONCAT11(cVar11, cVar4);
                                                                    uVar6 = (unsigned int)uVar5;
                                                                    if (-1 < iVar18 + -3) {
                                                                        puVar24[3] = uVar5;
                                                                        cVar4 = (char)(cVar4 + cVar3 + CARRY4(uVar14, uVar19));
                                                                        uVar5 = CONCAT11((char)(cVar11 + cVar3 + CARRY4(uVar9 + uVar19, uVar19)), cVar4);
                                                                        uVar6 = (unsigned int)uVar5;
                                                                        if (-1 < iVar18 + -4) {
                                                                            puVar24[4] = uVar5;
                                                                            uVar6 = (unsigned int)(unsigned char)(cVar4 + cVar3 +
                                                                                                                  CARRY4(uVar14 + uVar19, uVar19));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            break;
                                                        }
                                                        *puVar24 = (unsigned short)uVar6;
                                                        cVar4 = (char)((char)uVar6 + cVar3 + CARRY4(uVar9, uVar19));
                                                        cVar11 = (char)((char)(uVar6 >> 8) + cVar3 + CARRY4(uVar14, uVar19));
                                                        puVar24[1] = CONCAT11(cVar11, cVar4);
                                                        uVar17 = uVar9 + uVar19 + uVar19;
                                                        cVar4 = (char)(cVar4 + cVar3 + CARRY4(uVar9 + uVar19, uVar19));
                                                        uVar20 = uVar14 + uVar19 + uVar19;
                                                        cVar11 = (char)(cVar11 + cVar3 + CARRY4(uVar14 + uVar19, uVar19));
                                                        puVar24[2] = CONCAT11(cVar11, cVar4);
                                                        uVar9 = uVar17 + uVar19;
                                                        cVar4 = (char)(cVar4 + cVar3 + CARRY4(uVar17, uVar19));
                                                        uVar17 = uVar20 + uVar19;
                                                        cVar11 = (char)(cVar11 + cVar3 + CARRY4(uVar20, uVar19));
                                                        puVar24[3] = CONCAT11(cVar11, cVar4);
                                                        uVar14 = uVar9 + uVar19;
                                                        cVar4 = (char)(cVar4 + cVar3 + CARRY4(uVar9, uVar19));
                                                        uVar9 = uVar17 + uVar19;
                                                        cVar11 = (char)(cVar11 + cVar3 + CARRY4(uVar17, uVar19));
                                                        puVar24[4] = CONCAT11(cVar11, cVar4);
                                                        uVar17 = uVar14 + uVar19;
                                                        cVar4 = (char)(cVar4 + cVar3 + CARRY4(uVar14, uVar19));
                                                        uVar20 = uVar9 + uVar19;
                                                        cVar11 = (char)(cVar11 + cVar3 + CARRY4(uVar9, uVar19));
                                                        puVar24[5] = CONCAT11(cVar11, cVar4);
                                                        uVar9 = uVar17 + uVar19;
                                                        uVar14 = uVar20 + uVar19;
                                                        uVar5 = CONCAT11((char)(cVar11 + cVar3 + CARRY4(uVar20, uVar19)),
                                                                         (char)(cVar4 + cVar3 + CARRY4(uVar17, uVar19)));
                                                        uVar6 = (unsigned int)uVar5;
                                                        puVar24 = puVar24 + 6;
                                                        iVar18 = iVar18 + -6;
                                                    } while (-1 < iVar18);
                                                    if ((uVar12 & 1) == 0) goto LAB_1003ff5d;
                                                }
                                                *DAT_100af334 = (char)uVar6;
                                            }
LAB_1003ff5d:
                                            iVar18 = DAT_100af3cc;
                                            DAT_100af3cc = DAT_100af3c8;
                                            DAT_100af3c8 = iVar18;
                                            iVar10 = (int)((unsigned int)iVar10 + (unsigned int)DAT_100af324);
                                            DAT_100af360 = DAT_100af360 + -1;
                                            if (DAT_100af360 < 0) {
                                                return;
                                            }
                                            if (DAT_100af360 != 0) goto code_r0x1003ff92;
                                            iVar7 = (int)((unsigned int)iVar7 + (unsigned int)DAT_100af388);
                                            uVar21 = uVar21 + (unsigned int)DAT_100af390;
                                            iVar8 = (int)((unsigned int)iVar8 + (unsigned int)DAT_100af38c);
                                            uVar23 = uVar23 + (unsigned int)DAT_100af394;
                                        } while (1);
                                    }
                                    goto LAB_100400a5;
                                }
                            }
                            else {
                                iVar7 = (int)((unsigned int)iVar7 + (unsigned int)DAT_100af388);
                                uVar21 = uVar21 + (unsigned int)DAT_100af390;
                            }
                            DAT_100af35c = DAT_100af35c + -1;
                            if (DAT_100af35c == 0) goto LAB_100400a5;
                            iVar8 = (int)((unsigned int)iVar8 + (unsigned int)DAT_100af38c);
                            uVar23 = uVar23 + (unsigned int)DAT_100af394;
                        }
                    } while (1);
                }
            }
        }
    }
    return;
code_r0x1003ff92:
    DAT_100af358 = DAT_100af358 + -1;
    if (DAT_100af358 == 0) goto LAB_10040007;
    iVar7 = (int)((unsigned int)iVar7 + (unsigned int)DAT_100af388);
    uVar21 = uVar21 + (unsigned int)DAT_100af390;
    goto LAB_1003ffa6;
LAB_100400a5:
    puVar13 = DAT_100af354 + 6;
    if ((int)DAT_100af340 <= (int)(DAT_100af354 + 6)) {
        puVar13 = DAT_100af33c;
    }
    DAT_100af35c = (int)((puVar13[1] - DAT_100af354[1]) + (unsigned int)(puVar13[1] - DAT_100af354[1] == 0));
    divn = (long long)((((unsigned long long)(unsigned int)((int)(puVar13[2] - DAT_100af354[2]) >> 0x10)) << 32) |
                       (unsigned long long)(unsigned int)((puVar13[2] - DAT_100af354[2]) * 0x10000));
    divd = (int)((unsigned int)DAT_100af35c * 0x10000);
    if (divd == 0 || (divd == -1 && divn == (-0x7fffffffffffffffLL - 1))) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
    } else {
        divq = divn / divd;
        if (divq != (long long)(int)divq) {
            RaiseException(0xC0000094UL, 0, 0, NULL);
        } else {
            DAT_100af394 = (int)divq;
        }
    }
    divn = (long long)((((unsigned long long)(unsigned int)((int)((*puVar13 - *DAT_100af354) * 0x10000) >> 0x10)) << 32) | 0ULL);
    divd = (int)((unsigned int)DAT_100af35c * 0x10000);
    if (divd == 0 || (divd == -1 && divn == (-0x7fffffffffffffffLL - 1))) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
    } else {
        divq = divn / divd;
        if (divq != (long long)(int)divq) {
            RaiseException(0xC0000094UL, 0, 0, NULL);
        } else {
            DAT_100af38c = (int)divq;
        }
    }
    uVar23 = DAT_100af354[2] + 0x8000;
    iVar8 = (int)(*DAT_100af354 * 0x10000 + 0x8000);
    DAT_100af34c = DAT_100af354;
    DAT_100af354 = puVar13;
    goto joined_r0x1003fbe5;
}
