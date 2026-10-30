/* SPDX-License-Identifier: MIT */
/* mercsw 10040f65 */
void __stdcall RaiseException(DWORD, DWORD, DWORD, const DWORD *);

extern int DAT_100af324;
extern int DAT_100af318;
extern int DAT_100af320;
extern int _DAT_100af32c;
extern int DAT_100af328;
extern unsigned int *DAT_100af340;
extern unsigned int *DAT_100af33c;
extern unsigned int *DAT_100af344;
extern int DAT_100af364;
extern int DAT_100af31c;
extern unsigned int *DAT_100af350;
extern unsigned int *DAT_100af354;
extern unsigned int *DAT_100af348;
extern unsigned int *DAT_100af34c;
extern int DAT_100af358;
extern int DAT_100af35c;
extern int _DAT_100af360;
extern int DAT_100af388;
extern int DAT_100af398;
extern int DAT_100af3a0;
extern int DAT_100af38c;
extern int DAT_100af39c;
extern int DAT_100af3a4;
extern int DAT_100af368;
extern int DAT_100af378;
extern int DAT_100af380;
extern int DAT_100af36c;
extern int DAT_100af37c;
extern int DAT_100af384;
extern int DAT_100af330;
extern void (__cdecl *_DAT_100af3c4)(void);
extern void (__cdecl *PTR_DAT_100414a8[])(void);
extern int DAT_100af3a8;
extern int DAT_100af3ac;
extern int DAT_100af3bc;
extern unsigned int DAT_100af3b4;
extern unsigned int DAT_100af3b8;
extern int _DAT_100af3e4;
extern int _DAT_100af3e0;
extern int _DAT_100af3d8;
extern int _DAT_100af3dc;

#define SHL16(x) ((int)((unsigned int)(x) * 0x10000u))
#define NUM_A(x) ((long long)(((unsigned long long)(unsigned int)((int)((unsigned int)(x) * 0x10000u) >> 16)) << 32))
#define NUM_B(x) ((long long)(int)(x) * 65536LL)
#define FMUL(a, b) ((((unsigned int)(long long)((long long)(a) * (long long)(b))) >> 16) | \
                    ((unsigned int)((unsigned long long)((long long)(a) * (long long)(b)) >> 32) << 16))

void __cdecl FUN_10040f65(int *param_1, int param_2, unsigned int *param_3, unsigned int *param_4, int param_5)
{
    int *piVar1;
    unsigned int uVar2;
    unsigned int uVar3;
    int iVar5;
    int iVar6;
    int iVar7;
    unsigned int uVar8;
    int iVar9;
    int iVar10;
    short sVar11;
    int iVar12;
    int iVar13;
    unsigned int *puVar14;
    int iVar15;
    int iVar16;
    unsigned int uVar17;
    unsigned int *puVar18;
    int iVar19;
    int iVar20;
    unsigned int uVar21;
    int iVar22;
    int iVar23;
    long long lN;
    long long lD;
    long long lQ;

    piVar1 = (int *)*param_1;
    DAT_100af324 = piVar1[1] + 1;
    iVar9 = piVar1[1];
    if (param_1[3] <= piVar1[1]) {
        iVar9 = param_1[3];
    }
    uVar17 = 0;
    if ((unsigned int)param_1[1] < 0x80000000u) {
        uVar17 = param_1[1];
    }
    iVar6 = (int)((unsigned int)iVar9 - uVar17);
    if ((int)uVar17 <= iVar9) {
        iVar9 = piVar1[2];
        if (param_1[4] <= piVar1[2]) {
            iVar9 = param_1[4];
        }
        uVar21 = 0;
        if ((unsigned int)param_1[2] < 0x80000000u) {
            uVar21 = param_1[2];
        }
        iVar7 = (int)((unsigned int)iVar9 - uVar21);
        DAT_100af318 = iVar6;
        if ((int)uVar21 <= iVar9) {
            DAT_100af320 = (int)(uVar21 * (unsigned int)DAT_100af324 + uVar17 + (unsigned int)*piVar1);
            _DAT_100af32c = (int)*param_4;
            DAT_100af328 = (int)(param_4[1] + 1);
            DAT_100af340 = param_3 + param_2 * 6;
            DAT_100af33c = param_3;
            uVar17 = 0x7fff;
            uVar21 = 0xffff8000u;
            uVar8 = 0xf;
            puVar14 = param_3;
            do {
                uVar2 = puVar14[1];
                if ((int)uVar2 <= (int)uVar17) {
                    uVar17 = uVar2;
                    DAT_100af344 = puVar14;
                }
                if ((int)uVar21 <= (int)uVar2) {
                    uVar21 = uVar2;
                }
                uVar8 = uVar8 & ((((((*puVar14 >> 0x1f) << 1) | (((unsigned int)iVar6 - *puVar14) >> 0x1f)) << 1 |
                                   (puVar14[1] >> 0x1f)) << 1) |
                                 (((unsigned int)iVar7 - puVar14[1]) >> 0x1f));
                puVar14 = puVar14 + 6;
            } while (puVar14 != DAT_100af340);
            DAT_100af31c = iVar7;
            if (uVar8 == 0) {
                DAT_100af350 = DAT_100af344;
                DAT_100af354 = DAT_100af344;
                puVar14 = DAT_100af350;
                DAT_100af364 = (int)uVar17;
                if (uVar21 != uVar17) {
                    do {
                        DAT_100af350 = puVar14;
                        DAT_100af348 = DAT_100af350;
                        puVar14 = DAT_100af350 - 6;
                        if ((int)puVar14 < (int)param_3) {
                            puVar14 = DAT_100af340 - 6;
                        }
                    } while ((((int)DAT_100af350[1] < 0) && ((int)puVar14[1] < 1)) ||
                             ((DAT_100af358 = (int)(puVar14[1] - DAT_100af350[1])), DAT_100af358 == 0));

                    lN = NUM_A(*puVar14 - *DAT_100af350); lD = (long long)SHL16(DAT_100af358); lQ = 0;
                    if (lD == 0) { RaiseException(0xC0000094UL, 0, 0, NULL); } else { if (lD == -1) { lQ = (long long)(0ULL - (unsigned long long)lN); } else { lQ = lN / lD; } if (lQ != (long long)(int)lQ) { RaiseException(0xC0000094UL, 0, 0, NULL); } }
                    DAT_100af388 = (int)lQ;
                    lN = NUM_B(puVar14[3] - DAT_100af350[3]); lD = (long long)SHL16(DAT_100af358); lQ = 0;
                    if (lD == 0) { RaiseException(0xC0000094UL, 0, 0, NULL); } else { if (lD == -1) { lQ = (long long)(0ULL - (unsigned long long)lN); } else { lQ = lN / lD; } if (lQ != (long long)(int)lQ) { RaiseException(0xC0000094UL, 0, 0, NULL); } }
                    DAT_100af398 = (int)lQ;
                    lN = NUM_B(puVar14[4] - DAT_100af350[4]); lD = (long long)SHL16(DAT_100af358); lQ = 0;
                    if (lD == 0) { RaiseException(0xC0000094UL, 0, 0, NULL); } else { if (lD == -1) { lQ = (long long)(0ULL - (unsigned long long)lN); } else { lQ = lN / lD; } if (lQ != (long long)(int)lQ) { RaiseException(0xC0000094UL, 0, 0, NULL); } }
                    DAT_100af3a0 = (int)lQ;

                    DAT_100af368 = (int)(*DAT_100af350 * 0x10000u + 0x8000u);
                    DAT_100af378 = (int)(DAT_100af350[3] + 0x8000u);
                    DAT_100af380 = (int)(DAT_100af350[4] + 0x8000u);
                    puVar18 = DAT_100af354;
                    do {
                        DAT_100af354 = puVar18;
                        DAT_100af34c = DAT_100af354;
                        puVar18 = DAT_100af354 + 6;
                        if ((int)DAT_100af340 <= (int)(DAT_100af354 + 6)) {
                            puVar18 = param_3;
                        }
                    } while ((((int)DAT_100af354[1] < 0) && ((int)puVar18[1] < 1)) ||
                             ((DAT_100af35c = (int)(puVar18[1] - DAT_100af354[1])), DAT_100af35c == 0));

                    lN = NUM_A(*puVar18 - *DAT_100af354); lD = (long long)SHL16(DAT_100af35c); lQ = 0;
                    if (lD == 0) { RaiseException(0xC0000094UL, 0, 0, NULL); } else { if (lD == -1) { lQ = (long long)(0ULL - (unsigned long long)lN); } else { lQ = lN / lD; } if (lQ != (long long)(int)lQ) { RaiseException(0xC0000094UL, 0, 0, NULL); } }
                    DAT_100af38c = (int)lQ;
                    lN = NUM_B(puVar18[3] - DAT_100af354[3]); lD = (long long)SHL16(DAT_100af35c); lQ = 0;
                    if (lD == 0) { RaiseException(0xC0000094UL, 0, 0, NULL); } else { if (lD == -1) { lQ = (long long)(0ULL - (unsigned long long)lN); } else { lQ = lN / lD; } if (lQ != (long long)(int)lQ) { RaiseException(0xC0000094UL, 0, 0, NULL); } }
                    DAT_100af39c = (int)lQ;
                    lN = NUM_B(puVar18[4] - DAT_100af354[4]); lD = (long long)SHL16(DAT_100af35c); lQ = 0;
                    if (lD == 0) { RaiseException(0xC0000094UL, 0, 0, NULL); } else { if (lD == -1) { lQ = (long long)(0ULL - (unsigned long long)lN); } else { lQ = lN / lD; } if (lQ != (long long)(int)lQ) { RaiseException(0xC0000094UL, 0, 0, NULL); } }
                    DAT_100af3a4 = (int)lQ;

                    DAT_100af36c = (int)(*DAT_100af354 * 0x10000u + 0x8000u);
                    DAT_100af37c = (int)(DAT_100af354[3] + 0x8000u);
                    DAT_100af384 = (int)(DAT_100af354[4] + 0x8000u);
                    _DAT_100af360 = (int)((unsigned int)iVar7 - uVar17);
                    if (uVar21 - (unsigned int)iVar7 == 0 || (int)uVar21 < iVar7) {
                        _DAT_100af360 = (int)((unsigned int)_DAT_100af360 + (uVar21 - (unsigned int)iVar7));
                    }
                    if (0x7fffffffu < uVar17) {
                        _DAT_100af360 = (int)((unsigned int)_DAT_100af360 + uVar17);
                        DAT_100af364 = 0;
                        DAT_100af358 = (int)((unsigned int)DAT_100af358 + DAT_100af350[1]);
                        iVar9 = (int)(DAT_100af350[1] * 0xffff0000u);
                        DAT_100af368 = (int)((unsigned int)DAT_100af368 + FMUL(DAT_100af388, iVar9));
                        DAT_100af378 = (int)((unsigned int)DAT_100af378 + FMUL(DAT_100af398, iVar9));
                        DAT_100af380 = (int)((unsigned int)DAT_100af380 + FMUL(DAT_100af3a0, iVar9));
                        DAT_100af35c = (int)((unsigned int)DAT_100af35c + DAT_100af354[1]);
                        iVar9 = (int)(DAT_100af354[1] * 0xffff0000u);
                        DAT_100af36c = (int)((unsigned int)DAT_100af36c + FMUL(DAT_100af38c, iVar9));
                        DAT_100af37c = (int)((unsigned int)DAT_100af37c + FMUL(DAT_100af39c, iVar9));
                        DAT_100af384 = (int)((unsigned int)DAT_100af384 + FMUL(DAT_100af3a4, iVar9));
                    }
                    DAT_100af330 = (int)((unsigned int)DAT_100af364 * (unsigned int)DAT_100af324 + (unsigned int)DAT_100af320);
                    _DAT_100af3c4 = PTR_DAT_100414a8[param_5];
                    iVar9 = DAT_100af368;
                    iVar7 = DAT_100af378;
                    iVar13 = DAT_100af37c;
                    iVar16 = DAT_100af36c;
                    iVar20 = DAT_100af380;
                    iVar23 = DAT_100af384;
                    DAT_100af350 = puVar14;
                    DAT_100af354 = puVar18;
                    while (1) {
                        iVar5 = iVar9;
                        iVar10 = iVar7;
                        iVar12 = iVar13;
                        iVar15 = iVar16;
                        iVar19 = iVar20;
                        iVar22 = iVar23;
                        if (iVar16 <= iVar9) {
                            iVar5 = iVar16;
                            iVar10 = iVar13;
                            iVar12 = iVar7;
                            iVar15 = iVar9;
                            iVar19 = iVar23;
                            iVar22 = iVar20;
                        }
                        uVar17 = (unsigned int)(iVar5 >> 0x10);
                        if (((int)uVar17 <= iVar6) && (iVar15 = iVar15 >> 0x10, -1 < iVar15)) {
                            iVar9 = (int)((unsigned int)iVar15 - uVar17);
                            DAT_100af3a8 = (int)uVar17;
                            DAT_100af3ac = iVar15;
                            DAT_100af3bc = iVar10;
                            if (iVar9 != 0) {
                                lN = NUM_B((unsigned int)iVar12 - (unsigned int)iVar10); lD = (long long)SHL16(iVar9); lQ = 0;
                                if (lD == 0) { RaiseException(0xC0000094UL, 0, 0, NULL); } else { if (lD == -1) { lQ = (long long)(0ULL - (unsigned long long)lN); } else { lQ = lN / lD; } if (lQ != (long long)(int)lQ) { RaiseException(0xC0000094UL, 0, 0, NULL); } }
                                uVar3 = (unsigned int)lQ;
                                DAT_100af3b4 = uVar3;
                                uVar21 = DAT_100af3b4 >> 0x10;
                                iVar7 = 1;
                                if ((uVar21 & 0x8000) != 0) {
                                    iVar7 = -1;
                                    uVar21 = ((uVar21 | 0xffff0000u) + 1) - (unsigned int)((uVar3 & 0xffff) == 0);
                                }
                                lN = NUM_B((unsigned int)iVar22 - (unsigned int)iVar19); lD = (long long)SHL16(iVar9); lQ = 0;
                                if (lD == 0) { RaiseException(0xC0000094UL, 0, 0, NULL); } else { if (lD == -1) { lQ = (long long)(0ULL - (unsigned long long)lN); } else { lQ = lN / lD; } if (lQ != (long long)(int)lQ) { RaiseException(0xC0000094UL, 0, 0, NULL); } }
                                uVar3 = (unsigned int)lQ;
                                DAT_100af3b8 = uVar3;
                                sVar11 = (short)(uVar3 >> 0x10);
                                _DAT_100af3e4 = DAT_100af328;
                                if (((DAT_100af3b8 >> 0x10) & 0x8000) != 0) {
                                    _DAT_100af3e4 = (int)(0u - (unsigned int)DAT_100af328);
                                    sVar11 = (short)((sVar11 + 1) - (unsigned short)((uVar3 & 0xffff) == 0));
                                }
                                _DAT_100af3e0 = (int)(short)((short)DAT_100af328 * sVar11);
                                _DAT_100af3d8 = (int)(uVar21 + (unsigned int)_DAT_100af3e0);
                                _DAT_100af3dc = (int)((unsigned int)_DAT_100af3d8 + (unsigned int)_DAT_100af3e4);
                                _DAT_100af3e0 = (int)((unsigned int)iVar7 + uVar21 + (unsigned int)_DAT_100af3e0);
                                _DAT_100af3e4 = (int)((unsigned int)_DAT_100af3e0 + (unsigned int)_DAT_100af3e4);
                                if (0x7fffffffu < uVar17) {
                                    DAT_100af3a8 = 0;
                                    DAT_100af3bc = (int)((unsigned int)iVar10 +
                                                         FMUL((int)DAT_100af3b4, (int)(uVar17 * 0xffff0000u)));
                                }
                                if (iVar15 - iVar6 != 0 && iVar6 <= iVar15) {
                                    DAT_100af3ac = iVar15 - (iVar15 - iVar6);
                                }
                            }
                            (*_DAT_100af3c4)();
                            return;
                        }
                        DAT_100af330 = (int)((unsigned int)DAT_100af330 + (unsigned int)DAT_100af324);
                        _DAT_100af360 = _DAT_100af360 + -1;
                        if (_DAT_100af360 < 0) break;
                        if (_DAT_100af360 == 0) {
                            iVar9 = (int)((unsigned int)iVar9 + (unsigned int)DAT_100af388);
                            iVar7 = (int)((unsigned int)iVar7 + (unsigned int)DAT_100af398);
                            iVar20 = (int)((unsigned int)iVar20 + (unsigned int)DAT_100af3a0);
                            iVar16 = (int)((unsigned int)iVar16 + (unsigned int)DAT_100af38c);
                            iVar13 = (int)((unsigned int)iVar13 + (unsigned int)DAT_100af39c);
                            iVar23 = (int)((unsigned int)iVar23 + (unsigned int)DAT_100af3a4);
                        } else {
                            DAT_100af358 = DAT_100af358 + -1;
                            if (DAT_100af358 == 0) {
                                DAT_100af348 = DAT_100af350;
                                puVar14 = DAT_100af350 - 6;
                                if ((int)puVar14 < (int)param_3) {
                                    puVar14 = DAT_100af340 - 6;
                                }
                                DAT_100af358 = (int)((puVar14[1] - DAT_100af350[1]) +
                                                     (unsigned int)(puVar14[1] - DAT_100af350[1] == 0));
                                lN = NUM_A(*puVar14 - *DAT_100af350); lD = (long long)SHL16(DAT_100af358); lQ = 0;
                                if (lD == 0) { RaiseException(0xC0000094UL, 0, 0, NULL); } else { if (lD == -1) { lQ = (long long)(0ULL - (unsigned long long)lN); } else { lQ = lN / lD; } if (lQ != (long long)(int)lQ) { RaiseException(0xC0000094UL, 0, 0, NULL); } }
                                DAT_100af388 = (int)lQ;
                                lN = NUM_B(puVar14[3] - DAT_100af350[3]); lD = (long long)SHL16(DAT_100af358); lQ = 0;
                                if (lD == 0) { RaiseException(0xC0000094UL, 0, 0, NULL); } else { if (lD == -1) { lQ = (long long)(0ULL - (unsigned long long)lN); } else { lQ = lN / lD; } if (lQ != (long long)(int)lQ) { RaiseException(0xC0000094UL, 0, 0, NULL); } }
                                DAT_100af398 = (int)lQ;
                                lN = NUM_B(puVar14[4] - DAT_100af350[4]); lD = (long long)SHL16(DAT_100af358); lQ = 0;
                                if (lD == 0) { RaiseException(0xC0000094UL, 0, 0, NULL); } else { if (lD == -1) { lQ = (long long)(0ULL - (unsigned long long)lN); } else { lQ = lN / lD; } if (lQ != (long long)(int)lQ) { RaiseException(0xC0000094UL, 0, 0, NULL); } }
                                DAT_100af3a0 = (int)lQ;
                                iVar9 = (int)(*DAT_100af350 * 0x10000u + 0x8000u);
                                iVar7 = (int)(DAT_100af350[3] + 0x8000u);
                                iVar20 = (int)(DAT_100af350[4] + 0x8000u);
                                DAT_100af350 = puVar14;
                            } else {
                                iVar9 = (int)((unsigned int)iVar9 + (unsigned int)DAT_100af388);
                                iVar7 = (int)((unsigned int)iVar7 + (unsigned int)DAT_100af398);
                                iVar20 = (int)((unsigned int)iVar20 + (unsigned int)DAT_100af3a0);
                            }
                            DAT_100af35c = DAT_100af35c + -1;
                            if (DAT_100af35c == 0) {
                                DAT_100af34c = DAT_100af354;
                                puVar14 = DAT_100af354 + 6;
                                if ((int)DAT_100af340 <= (int)(DAT_100af354 + 6)) {
                                    puVar14 = param_3;
                                }
                                DAT_100af35c = (int)((puVar14[1] - DAT_100af354[1]) +
                                                     (unsigned int)(puVar14[1] - DAT_100af354[1] == 0));
                                lN = NUM_A(*puVar14 - *DAT_100af354); lD = (long long)SHL16(DAT_100af35c); lQ = 0;
                                if (lD == 0) { RaiseException(0xC0000094UL, 0, 0, NULL); } else { if (lD == -1) { lQ = (long long)(0ULL - (unsigned long long)lN); } else { lQ = lN / lD; } if (lQ != (long long)(int)lQ) { RaiseException(0xC0000094UL, 0, 0, NULL); } }
                                DAT_100af38c = (int)lQ;
                                lN = NUM_B(puVar14[3] - DAT_100af354[3]); lD = (long long)SHL16(DAT_100af35c); lQ = 0;
                                if (lD == 0) { RaiseException(0xC0000094UL, 0, 0, NULL); } else { if (lD == -1) { lQ = (long long)(0ULL - (unsigned long long)lN); } else { lQ = lN / lD; } if (lQ != (long long)(int)lQ) { RaiseException(0xC0000094UL, 0, 0, NULL); } }
                                DAT_100af39c = (int)lQ;
                                lN = NUM_B(puVar14[4] - DAT_100af354[4]); lD = (long long)SHL16(DAT_100af35c); lQ = 0;
                                if (lD == 0) { RaiseException(0xC0000094UL, 0, 0, NULL); } else { if (lD == -1) { lQ = (long long)(0ULL - (unsigned long long)lN); } else { lQ = lN / lD; } if (lQ != (long long)(int)lQ) { RaiseException(0xC0000094UL, 0, 0, NULL); } }
                                DAT_100af3a4 = (int)lQ;
                                iVar13 = (int)(DAT_100af354[3] + 0x8000u);
                                iVar23 = (int)(DAT_100af354[4] + 0x8000u);
                                iVar16 = (int)(*DAT_100af354 * 0x10000u + 0x8000u);
                                DAT_100af354 = puVar14;
                            } else {
                                iVar16 = (int)((unsigned int)iVar16 + (unsigned int)DAT_100af38c);
                                iVar13 = (int)((unsigned int)iVar13 + (unsigned int)DAT_100af39c);
                                iVar23 = (int)((unsigned int)iVar23 + (unsigned int)DAT_100af3a4);
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}
