/* SPDX-License-Identifier: MIT */
/* mercsw 10056489 */
void __stdcall RaiseException(DWORD, DWORD, DWORD, const DWORD *);

unsigned int __cdecl
FUN_10056489(int *param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7)
{
    int *piVar1;
    unsigned long long uVar2;
    unsigned long long lVar3;
    unsigned char bVar4;
    unsigned int uVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    unsigned int uVar9;
    unsigned int uVar10;
    unsigned int uVar11;
    unsigned int uVar12;
    unsigned int uVar13;
    unsigned int uVar14;
    unsigned char *pbVar15;
    int iVar16;
    int iVar17;
    unsigned char bVar18;
    unsigned char bVar22;
    unsigned int uVar19;
    unsigned int uVar20;
    unsigned int uVar23;
    int iVar29;
    unsigned int bVar30;
    unsigned int uDivQ;
    unsigned int uDivR;
    unsigned int uHi;
    int local_34;
    int local_30;
    int local_2c;
    int local_28;

    piVar1 = (int *)*param_1;
    iVar29 = piVar1[1];
    uVar5 = (unsigned int)iVar29 + 1u;
    if ((uVar5 == 0 || iVar29 < -1) || (iVar16 = piVar1[2], iVar16 < 0)) {
        return 0xffffffff;
    }
    local_30 = param_1[1];
    iVar6 = local_30;
    if (local_30 < 1) {
        iVar6 = 0;
    }
    local_34 = param_1[2];
    iVar7 = local_34;
    if (local_34 < 1) {
        iVar7 = 0;
    }
    iVar8 = param_1[3];
    if (iVar29 <= param_1[3]) {
        iVar8 = iVar29;
    }
    iVar29 = param_1[4];
    if (iVar16 <= param_1[4]) {
        iVar29 = iVar16;
    }
    if ((iVar8 < iVar6) || (iVar29 < iVar7)) {
        return 0xfffffffe;
    }
    iVar16 = (int)((unsigned int)param_2 + (unsigned int)local_30);
    local_30 = (int)((unsigned int)param_4 + (unsigned int)local_30);
    iVar17 = (int)((unsigned int)param_3 + (unsigned int)local_34);
    local_34 = (int)((unsigned int)param_5 + (unsigned int)local_34);
    uVar9 = (unsigned int)local_30 - (unsigned int)iVar16;
    uVar19 = (unsigned int)((int)uVar9 >> 0x1f);
    uVar10 = (uVar9 ^ uVar19) - uVar19;
    uVar11 = (unsigned int)local_34 - (unsigned int)iVar17;
    uVar20 = (unsigned int)((int)uVar11 >> 0x1f);
    uVar12 = (uVar11 ^ uVar20) - uVar20;
    bVar4 = (unsigned char)param_7;
    local_28 = iVar16;
    if (uVar9 == 0) {
        if ((iVar16 < iVar6) || (iVar8 < iVar16)) {
            return 2;
        }
        iVar16 = iVar17;
        if (iVar17 <= local_34) {
            iVar16 = local_34;
        }
        if (iVar16 < iVar7) {
            return 2;
        }
        iVar16 = iVar17;
        if (local_34 <= iVar17) {
            iVar16 = local_34;
        }
        if (iVar29 < iVar16) {
            return 2;
        }
        if (iVar17 <= iVar7) {
            iVar17 = iVar7;
        }
        local_2c = iVar17;
        if (iVar29 <= iVar17) {
            local_2c = iVar29;
        }
        if (local_34 <= iVar7) {
            local_34 = iVar7;
        }
        if (iVar29 <= local_34) {
            local_34 = iVar29;
        }
        uVar12 = (uVar5 ^ uVar20) - uVar20;
        uVar10 = (unsigned int)((int)((unsigned int)local_34 - (unsigned int)local_2c) >> 0x1f);
        iVar29 = (int)((((unsigned int)local_34 - (unsigned int)local_2c ^ uVar10) - uVar10) + 1u);
    }
    else {
        local_2c = iVar17;
        if (uVar11 == 0) {
            if (iVar17 < iVar7) {
                return 2;
            }
            if (iVar29 < iVar17) {
                return 2;
            }
            iVar29 = iVar16;
            if (iVar16 <= local_30) {
                iVar29 = local_30;
            }
            if (iVar29 < iVar6) {
                return 2;
            }
            iVar29 = iVar16;
            if (local_30 <= iVar16) {
                iVar29 = local_30;
            }
            if (iVar8 < iVar29) {
                return 2;
            }
            if (iVar16 <= iVar6) {
                iVar16 = iVar6;
            }
            if (iVar8 <= iVar16) {
                iVar16 = iVar8;
            }
            if (local_30 <= iVar6) {
                local_30 = iVar6;
            }
            if (iVar8 <= local_30) {
                local_30 = iVar8;
            }
            uVar12 = uVar19 + 1u | uVar19;
            uVar10 = (unsigned int)((int)((unsigned int)local_30 - (unsigned int)iVar16) >> 0x1f);
            iVar29 = (int)((((unsigned int)local_30 - (unsigned int)iVar16 ^ uVar10) - uVar10) + 1u);
            local_28 = iVar16;
        }
        else {
            uVar13 = (unsigned int)((int)(uVar9 ^ uVar11) >> 0x1f);
            uVar14 = 0xffffffff;
            if (uVar10 != uVar12) {
                uVar14 = uVar10;
                uVar23 = uVar12;
                if ((int)uVar12 <= (int)uVar10) {
                    uVar14 = uVar12;
                    uVar23 = uVar10;
                }
                if (uVar23 == 0 || uVar14 >= uVar23) {
                    RaiseException(0xC0000094UL, 0, 0, NULL);
                    uVar14 = 0;
                }
                else {
                    uVar14 = (unsigned int)(((unsigned long long)uVar14 << 0x20) / (unsigned long long)uVar23);
                }
            }
            while (1) {
                bVar18 = (unsigned char)(((((((int)((unsigned int)local_28 - (unsigned int)iVar6) < 0) * 2 +
                                             ((int)((unsigned int)iVar8 - (unsigned int)local_28) < 0)) * 2 +
                                            ((int)((unsigned int)local_2c - (unsigned int)iVar7) < 0)) * 2) +
                                         ((int)((unsigned int)iVar29 - (unsigned int)local_2c) < 0)));
                bVar22 = (unsigned char)(((((((int)((unsigned int)local_30 - (unsigned int)iVar6) < 0) * 2 +
                                             ((int)((unsigned int)iVar8 - (unsigned int)local_30) < 0)) * 2 +
                                            ((int)((unsigned int)local_34 - (unsigned int)iVar7) < 0)) * 2) +
                                         ((int)((unsigned int)iVar29 - (unsigned int)local_34) < 0)));
                if (bVar18 == 0 && bVar22 == 0) {
                    break;
                }
                if ((bVar22 & bVar18) != 0) {
                    return 2;
                }
                if ((int)uVar10 < (int)uVar12) {
                    if ((bVar18 & 8) == 0) {
                        if ((bVar18 & 4) == 0) {
                            if ((bVar18 & 2) == 0) {
                                if ((bVar18 & 1) == 0) {
                                    if ((bVar22 & 8) == 0) {
                                        if ((bVar22 & 4) == 0) {
                                            if ((bVar22 & 2) == 0) {
                                                if ((bVar22 & 1) != 0) {
                                                    local_34 = iVar29;
                                                    lVar3 = (unsigned long long)((unsigned int)iVar29 - (unsigned int)iVar17) * (unsigned long long)uVar14;
                                                    local_30 = (int)(((((unsigned int)(lVar3 >> 32) + (unsigned int)(0x7fffffffu < (unsigned int)lVar3)) ^ uVar13) - uVar13) + (unsigned int)iVar16);
                                                }
                                            }
                                            else {
                                                local_34 = iVar7;
                                                lVar3 = (unsigned long long)(0u - ((unsigned int)iVar7 - (unsigned int)iVar17)) * (unsigned long long)uVar14;
                                                local_30 = (int)(((((unsigned int)(lVar3 >> 32) + (unsigned int)(0x7fffffffu < (unsigned int)lVar3)) ^ ~uVar13) - ~uVar13) + (unsigned int)iVar16);
                                            }
                                        }
                                        else {
                                            uHi = (unsigned int)iVar8 - (unsigned int)iVar16;
                                            uDivQ = 0;
                                            uDivR = 0;
                                            uVar2 = ((unsigned long long)uHi << 32) | 0x80000000ULL;
                                            if (uVar14 == 0 || uHi >= uVar14) {
                                                RaiseException(0xC0000094UL, 0, 0, NULL);
                                            } else {
                                                uDivQ = (unsigned int)(uVar2 / (unsigned long long)uVar14);
                                                uDivR = (unsigned int)(uVar2 % (unsigned long long)uVar14);
                                            }
                                            local_34 = (int)(((((uDivQ + 0u) - (unsigned int)(uDivR == 0)) ^ uVar13) - uVar13) + (unsigned int)iVar17);
                                            local_30 = iVar8;
                                        }
                                    }
                                    else {
                                        uHi = 0u - ((unsigned int)iVar6 - (unsigned int)iVar16);
                                        uDivQ = 0;
                                        uDivR = 0;
                                        uVar2 = ((unsigned long long)uHi << 32) | 0x80000000ULL;
                                        if (uVar14 == 0 || uHi >= uVar14) {
                                            RaiseException(0xC0000094UL, 0, 0, NULL);
                                        } else {
                                            uDivQ = (unsigned int)(uVar2 / (unsigned long long)uVar14);
                                            uDivR = (unsigned int)(uVar2 % (unsigned long long)uVar14);
                                        }
                                        local_34 = (int)(((((uDivQ + 0u) - (unsigned int)(uDivR == 0)) ^ ~uVar13) - ~uVar13) + (unsigned int)iVar17);
                                        local_30 = iVar6;
                                    }
                                }
                                else {
                                    local_2c = iVar29;
                                    lVar3 = (unsigned long long)(0u - ((unsigned int)iVar29 - (unsigned int)iVar17)) * (unsigned long long)uVar14;
                                    local_28 = (int)(((((unsigned int)(lVar3 >> 32) + (unsigned int)(0x7fffffffu < (unsigned int)lVar3)) ^ ~uVar13) - ~uVar13) + (unsigned int)iVar16);
                                }
                            }
                            else {
                                local_2c = iVar7;
                                lVar3 = (unsigned long long)((unsigned int)iVar7 - (unsigned int)iVar17) * (unsigned long long)uVar14;
                                local_28 = (int)(((((unsigned int)(lVar3 >> 32) + (unsigned int)(0x7fffffffu < (unsigned int)lVar3)) ^ uVar13) - uVar13) + (unsigned int)iVar16);
                            }
                        }
                        else {
                            uHi = 0xffffffffu - ((unsigned int)iVar8 - (unsigned int)iVar16);
                            uDivQ = 0;
                            uDivR = 0;
                            uVar2 = ((unsigned long long)uHi << 32) | 0x80000000ULL;
                            if (uVar14 == 0 || uHi >= uVar14) {
                                RaiseException(0xC0000094UL, 0, 0, NULL);
                            } else {
                                uDivQ = (unsigned int)(uVar2 / (unsigned long long)uVar14);
                                uDivR = (unsigned int)(uVar2 % (unsigned long long)uVar14);
                            }
                            local_2c = (int)(((((uDivQ + 1u) - (unsigned int)(uDivR == 0)) ^ ~uVar13) - ~uVar13) + (unsigned int)iVar17);
                            local_28 = iVar8;
                        }
                    }
                    else {
                        uHi = ((unsigned int)iVar6 - (unsigned int)iVar16) - 1u;
                        uDivQ = 0;
                        uDivR = 0;
                        uVar2 = ((unsigned long long)uHi << 32) | 0x80000000ULL;
                        if (uVar14 == 0 || uHi >= uVar14) {
                            RaiseException(0xC0000094UL, 0, 0, NULL);
                        } else {
                            uDivQ = (unsigned int)(uVar2 / (unsigned long long)uVar14);
                            uDivR = (unsigned int)(uVar2 % (unsigned long long)uVar14);
                        }
                        local_2c = (int)(((((uDivQ + 1u) - (unsigned int)(uDivR == 0)) ^ uVar13) - uVar13) + (unsigned int)iVar17);
                        local_28 = iVar6;
                    }
                }
                else if ((bVar18 & 8) == 0) {
                    if ((bVar18 & 4) == 0) {
                        if ((bVar18 & 2) == 0) {
                            if ((bVar18 & 1) == 0) {
                                if ((bVar22 & 8) == 0) {
                                    if ((bVar22 & 4) == 0) {
                                        if ((bVar22 & 2) == 0) {
                                            if ((bVar22 & 1) != 0) {
                                                local_34 = iVar29;
                                                uHi = (unsigned int)iVar29 - (unsigned int)iVar17;
                                                uDivQ = 0;
                                                uDivR = 0;
                                                uVar2 = ((unsigned long long)uHi << 32) | 0x80000000ULL;
                                                if (uVar14 == 0 || uHi >= uVar14) {
                                                    RaiseException(0xC0000094UL, 0, 0, NULL);
                                                } else {
                                                    uDivQ = (unsigned int)(uVar2 / (unsigned long long)uVar14);
                                                    uDivR = (unsigned int)(uVar2 % (unsigned long long)uVar14);
                                                }
                                                local_30 = (int)(((((uDivQ + 0u) - (unsigned int)(uDivR == 0)) ^ uVar13) - uVar13) + (unsigned int)iVar16);
                                            }
                                        }
                                        else {
                                            local_34 = iVar7;
                                            uHi = 0u - ((unsigned int)iVar7 - (unsigned int)iVar17);
                                            uDivQ = 0;
                                            uDivR = 0;
                                            uVar2 = ((unsigned long long)uHi << 32) | 0x80000000ULL;
                                            if (uVar14 == 0 || uHi >= uVar14) {
                                                RaiseException(0xC0000094UL, 0, 0, NULL);
                                            } else {
                                                uDivQ = (unsigned int)(uVar2 / (unsigned long long)uVar14);
                                                uDivR = (unsigned int)(uVar2 % (unsigned long long)uVar14);
                                            }
                                            local_30 = (int)(((((uDivQ + 0u) - (unsigned int)(uDivR == 0)) ^ ~uVar13) - ~uVar13) + (unsigned int)iVar16);
                                        }
                                    }
                                    else {
                                        lVar3 = (unsigned long long)((unsigned int)iVar8 - (unsigned int)iVar16) * (unsigned long long)uVar14;
                                        local_34 = (int)(((((unsigned int)(lVar3 >> 32) + (unsigned int)(0x7fffffffu < (unsigned int)lVar3)) ^ uVar13) - uVar13) + (unsigned int)iVar17);
                                        local_30 = iVar8;
                                    }
                                }
                                else {
                                    lVar3 = (unsigned long long)(0u - ((unsigned int)iVar6 - (unsigned int)iVar16)) * (unsigned long long)uVar14;
                                    local_34 = (int)(((((unsigned int)(lVar3 >> 32) + (unsigned int)(0x7fffffffu < (unsigned int)lVar3)) ^ ~uVar13) - ~uVar13) + (unsigned int)iVar17);
                                    local_30 = iVar6;
                                }
                            }
                            else {
                                local_2c = iVar29;
                                uHi = 0xffffffffu - ((unsigned int)iVar29 - (unsigned int)iVar17);
                                uDivQ = 0;
                                uDivR = 0;
                                uVar2 = ((unsigned long long)uHi << 32) | 0x80000000ULL;
                                if (uVar14 == 0 || uHi >= uVar14) {
                                    RaiseException(0xC0000094UL, 0, 0, NULL);
                                } else {
                                    uDivQ = (unsigned int)(uVar2 / (unsigned long long)uVar14);
                                    uDivR = (unsigned int)(uVar2 % (unsigned long long)uVar14);
                                }
                                local_28 = (int)(((((uDivQ + 1u) - (unsigned int)(uDivR == 0)) ^ ~uVar13) - ~uVar13) + (unsigned int)iVar16);
                            }
                        }
                        else {
                            local_2c = iVar7;
                            uHi = ((unsigned int)iVar7 - (unsigned int)iVar17) - 1u;
                            uDivQ = 0;
                            uDivR = 0;
                            uVar2 = ((unsigned long long)uHi << 32) | 0x80000000ULL;
                            if (uVar14 == 0 || uHi >= uVar14) {
                                RaiseException(0xC0000094UL, 0, 0, NULL);
                            } else {
                                uDivQ = (unsigned int)(uVar2 / (unsigned long long)uVar14);
                                uDivR = (unsigned int)(uVar2 % (unsigned long long)uVar14);
                            }
                            local_28 = (int)(((((uDivQ + 1u) - (unsigned int)(uDivR == 0)) ^ uVar13) - uVar13) + (unsigned int)iVar16);
                        }
                    }
                    else {
                        lVar3 = (unsigned long long)(0u - ((unsigned int)iVar8 - (unsigned int)iVar16)) * (unsigned long long)uVar14;
                        local_2c = (int)(((((unsigned int)(lVar3 >> 32) + (unsigned int)(0x7fffffffu < (unsigned int)lVar3)) ^ ~uVar13) - ~uVar13) + (unsigned int)iVar17);
                        local_28 = iVar8;
                    }
                }
                else {
                    lVar3 = (unsigned long long)((unsigned int)iVar6 - (unsigned int)iVar16) * (unsigned long long)uVar14;
                    local_2c = (int)(((((unsigned int)(lVar3 >> 32) + (unsigned int)(0x7fffffffu < (unsigned int)lVar3)) ^ uVar13) - uVar13) + (unsigned int)iVar17);
                    local_28 = iVar6;
                }
            }
            pbVar15 = (unsigned char *)((unsigned int)local_2c * uVar5 + (unsigned int)*piVar1 + (unsigned int)local_28);
            iVar29 = (int)((uVar5 ^ uVar20) - uVar20);
            if (uVar10 != uVar12) {
                if ((int)uVar10 < (int)uVar12) {
                    uVar5 = (unsigned int)((int)((unsigned int)local_34 - (unsigned int)local_2c) >> 0x1f);
                    iVar16 = (int)((((unsigned int)local_34 - (unsigned int)local_2c ^ uVar5) - uVar5) + 1u);
                    uVar5 = (unsigned int)((int)((unsigned int)local_2c - (unsigned int)iVar17) >> 0x1f);
                    uVar5 = ((((unsigned int)local_2c - (unsigned int)iVar17) ^ uVar5) - uVar5) * uVar14 + 0x80000000u;
                    if ((int)uVar9 < 0) {
                        if (param_6 == 1) {
                            do {
                                *pbVar15 = ((unsigned char *)param_7)[*pbVar15];
                                pbVar15 = pbVar15 + ((unsigned int)iVar29 - (unsigned int)(uVar5 + uVar14 < uVar5));
                                if (iVar16 == 1) break;
                                *pbVar15 = ((unsigned char *)param_7)[*pbVar15];
                                uVar9 = uVar5 + uVar14 + uVar14;
                                pbVar15 = pbVar15 + ((unsigned int)iVar29 - (unsigned int)(uVar5 + uVar14 + uVar14 < uVar5 + uVar14));
                                if (iVar16 == 2) break;
                                *pbVar15 = ((unsigned char *)param_7)[*pbVar15];
                                uVar10 = uVar9 + uVar14;
                                pbVar15 = pbVar15 + ((unsigned int)iVar29 - (unsigned int)(uVar9 + uVar14 < uVar9));
                                if (iVar16 == 3) break;
                                *pbVar15 = ((unsigned char *)param_7)[*pbVar15];
                                uVar5 = uVar10 + uVar14;
                                pbVar15 = pbVar15 + ((unsigned int)iVar29 - (unsigned int)(uVar10 + uVar14 < uVar10));
                                iVar16 = iVar16 + -4;
                            } while (iVar16 != 0);
                        }
                        else if (param_6 < 2) {
                            do {
                                *pbVar15 = bVar4;
                                pbVar15 = pbVar15 + ((unsigned int)iVar29 - (unsigned int)(uVar5 + uVar14 < uVar5));
                                if (iVar16 == 1) break;
                                *pbVar15 = bVar4;
                                uVar9 = uVar5 + uVar14 + uVar14;
                                pbVar15 = pbVar15 + ((unsigned int)iVar29 - (unsigned int)(uVar5 + uVar14 + uVar14 < uVar5 + uVar14));
                                if (iVar16 == 2) break;
                                *pbVar15 = bVar4;
                                uVar10 = uVar9 + uVar14;
                                if (iVar16 == 3) break;
                                pbVar15[(unsigned int)iVar29 - (unsigned int)(uVar9 + uVar14 < uVar9)] = bVar4;
                                uVar5 = uVar10 + uVar14;
                                pbVar15 = pbVar15 + ((unsigned int)iVar29 - (unsigned int)(uVar9 + uVar14 < uVar9)) +
                                          ((unsigned int)iVar29 - (unsigned int)(uVar10 + uVar14 < uVar10));
                                iVar16 = iVar16 + -4;
                            } while (iVar16 != 0);
                        }
                        else {
                            local_28 = local_28 - param_1[1];
                            local_2c = local_2c - param_1[2];
                            do {
                                ((void (__cdecl *)(int, int))param_7)(local_28, local_2c);
                                bVar30 = (unsigned int)(uVar5 + uVar14 < uVar5);
                                uVar5 = uVar5 + uVar14;
                                if (bVar30) {
                                    local_28 = local_28 + -1;
                                }
                                local_2c = (int)((unsigned int)local_2c + (uVar20 * 2u + 1u));
                                iVar16 = iVar16 + -1;
                            } while (iVar16 != 0);
                        }
                    }
                    else if (param_6 == 1) {
                        do {
                            *pbVar15 = ((unsigned char *)param_7)[*pbVar15];
                            pbVar15 = pbVar15 + ((unsigned int)(uVar5 + uVar14 < uVar5) + (unsigned int)iVar29);
                            if (iVar16 == 1) break;
                            *pbVar15 = ((unsigned char *)param_7)[*pbVar15];
                            uVar9 = uVar5 + uVar14 + uVar14;
                            pbVar15 = pbVar15 + ((unsigned int)(uVar5 + uVar14 + uVar14 < uVar5 + uVar14) + (unsigned int)iVar29);
                            if (iVar16 == 2) break;
                            *pbVar15 = ((unsigned char *)param_7)[*pbVar15];
                            uVar10 = uVar9 + uVar14;
                            pbVar15 = pbVar15 + ((unsigned int)(uVar9 + uVar14 < uVar9) + (unsigned int)iVar29);
                            if (iVar16 == 3) break;
                            *pbVar15 = ((unsigned char *)param_7)[*pbVar15];
                            uVar5 = uVar10 + uVar14;
                            pbVar15 = pbVar15 + ((unsigned int)(uVar10 + uVar14 < uVar10) + (unsigned int)iVar29);
                            iVar16 = iVar16 + -4;
                        } while (iVar16 != 0);
                    }
                    else if (param_6 < 2) {
                        do {
                            *pbVar15 = bVar4;
                            pbVar15 = pbVar15 + ((unsigned int)(uVar5 + uVar14 < uVar5) + (unsigned int)iVar29);
                            if (iVar16 == 1) break;
                            *pbVar15 = bVar4;
                            uVar9 = uVar5 + uVar14 + uVar14;
                            pbVar15 = pbVar15 + ((unsigned int)(uVar5 + uVar14 + uVar14 < uVar5 + uVar14) + (unsigned int)iVar29);
                            if (iVar16 == 2) break;
                            *pbVar15 = bVar4;
                            uVar10 = uVar9 + uVar14;
                            if (iVar16 == 3) break;
                            pbVar15[(unsigned int)(uVar9 + uVar14 < uVar9) + (unsigned int)iVar29] = bVar4;
                            uVar5 = uVar10 + uVar14;
                            pbVar15 = pbVar15 + ((unsigned int)(uVar9 + uVar14 < uVar9) + (unsigned int)iVar29 +
                                                 (unsigned int)(uVar10 + uVar14 < uVar10) + (unsigned int)iVar29);
                            iVar16 = iVar16 + -4;
                        } while (iVar16 != 0);
                    }
                    else {
                        local_28 = local_28 - param_1[1];
                        local_2c = local_2c - param_1[2];
                        do {
                            ((void (__cdecl *)(int, int))param_7)(local_28, local_2c);
                            bVar30 = (unsigned int)(uVar5 + uVar14 < uVar5);
                            uVar5 = uVar5 + uVar14;
                            if (bVar30) {
                                local_28 = local_28 + 1;
                            }
                            local_2c = (int)((unsigned int)local_2c + (uVar20 * 2u + 1u));
                            iVar16 = iVar16 + -1;
                        } while (iVar16 != 0);
                    }
                }
                else {
                    uVar5 = (unsigned int)((int)((unsigned int)local_30 - (unsigned int)local_28) >> 0x1f);
                    iVar6 = (int)((((unsigned int)local_30 - (unsigned int)local_28 ^ uVar5) - uVar5) + 1u);
                    uVar5 = (unsigned int)((int)((unsigned int)local_28 - (unsigned int)iVar16) >> 0x1f);
                    uVar5 = ((((unsigned int)local_28 - (unsigned int)iVar16) ^ uVar5) - uVar5) * uVar14 + 0x80000000u;
                    if ((int)uVar9 < 0) {
                        if (param_6 == 1) {
                            do {
                                *pbVar15 = ((unsigned char *)param_7)[*pbVar15];
                                pbVar15 = pbVar15 + -1;
                                if (uVar5 + uVar14 < uVar5) {
                                    pbVar15 = pbVar15 + iVar29;
                                }
                                if (iVar6 == 1) break;
                                *pbVar15 = ((unsigned char *)param_7)[*pbVar15];
                                pbVar15 = pbVar15 + -1;
                                uVar9 = uVar5 + uVar14 + uVar14;
                                if (uVar5 + uVar14 + uVar14 < uVar5 + uVar14) {
                                    pbVar15 = pbVar15 + iVar29;
                                }
                                if (iVar6 == 2) break;
                                *pbVar15 = ((unsigned char *)param_7)[*pbVar15];
                                pbVar15 = pbVar15 + -1;
                                uVar10 = uVar9 + uVar14;
                                if (uVar9 + uVar14 < uVar9) {
                                    pbVar15 = pbVar15 + iVar29;
                                }
                                if (iVar6 == 3) break;
                                *pbVar15 = ((unsigned char *)param_7)[*pbVar15];
                                pbVar15 = pbVar15 + -1;
                                uVar5 = uVar10 + uVar14;
                                if (uVar10 + uVar14 < uVar10) {
                                    pbVar15 = pbVar15 + iVar29;
                                }
                                iVar6 = iVar6 + -4;
                            } while (iVar6 != 0);
                        }
                        else if (param_6 < 2) {
                            do {
                                *pbVar15 = bVar4;
                                pbVar15 = pbVar15 + -1;
                                if (uVar5 + uVar14 < uVar5) {
                                    pbVar15 = pbVar15 + iVar29;
                                }
                                if (iVar6 == 1) break;
                                *pbVar15 = bVar4;
                                pbVar15 = pbVar15 + -1;
                                uVar9 = uVar5 + uVar14 + uVar14;
                                if (uVar5 + uVar14 + uVar14 < uVar5 + uVar14) {
                                    pbVar15 = pbVar15 + iVar29;
                                }
                                if (iVar6 == 2) break;
                                *pbVar15 = bVar4;
                                pbVar15 = pbVar15 + -1;
                                uVar10 = uVar9 + uVar14;
                                if (uVar9 + uVar14 < uVar9) {
                                    pbVar15 = pbVar15 + iVar29;
                                }
                                if (iVar6 == 3) break;
                                *pbVar15 = bVar4;
                                pbVar15 = pbVar15 + -1;
                                uVar5 = uVar10 + uVar14;
                                if (uVar10 + uVar14 < uVar10) {
                                    pbVar15 = pbVar15 + iVar29;
                                }
                                iVar6 = iVar6 + -4;
                            } while (iVar6 != 0);
                        }
                        else {
                            local_28 = local_28 - param_1[1];
                            local_2c = local_2c - param_1[2];
                            do {
                                ((void (__cdecl *)(int, int))param_7)(local_28, local_2c);
                                bVar30 = (unsigned int)(uVar5 + uVar14 < uVar5);
                                uVar5 = uVar5 + uVar14;
                                if (bVar30) {
                                    local_2c = local_2c + -1;
                                }
                                local_28 = (int)((unsigned int)local_28 + (uVar20 * 2u + 1u));
                                iVar6 = iVar6 + -1;
                            } while (iVar6 != 0);
                        }
                    }
                    else if (param_6 == 1) {
                        do {
                            *pbVar15 = ((unsigned char *)param_7)[*pbVar15];
                            pbVar15 = pbVar15 + 1;
                            if (uVar5 + uVar14 < uVar5) {
                                pbVar15 = pbVar15 + iVar29;
                            }
                            if (iVar6 == 1) break;
                            *pbVar15 = ((unsigned char *)param_7)[*pbVar15];
                            pbVar15 = pbVar15 + 1;
                            uVar9 = uVar5 + uVar14 + uVar14;
                            if (uVar5 + uVar14 + uVar14 < uVar5 + uVar14) {
                                pbVar15 = pbVar15 + iVar29;
                            }
                            if (iVar6 == 2) break;
                            *pbVar15 = ((unsigned char *)param_7)[*pbVar15];
                            pbVar15 = pbVar15 + 1;
                            uVar10 = uVar9 + uVar14;
                            if (uVar9 + uVar14 < uVar9) {
                                pbVar15 = pbVar15 + iVar29;
                            }
                            if (iVar6 == 3) break;
                            *pbVar15 = ((unsigned char *)param_7)[*pbVar15];
                            pbVar15 = pbVar15 + 1;
                            uVar5 = uVar10 + uVar14;
                            if (uVar10 + uVar14 < uVar10) {
                                pbVar15 = pbVar15 + iVar29;
                            }
                            iVar6 = iVar6 + -4;
                        } while (iVar6 != 0);
                    }
                    else if (param_6 < 2) {
                        do {
                            *pbVar15 = bVar4;
                            pbVar15 = pbVar15 + 1;
                            if (uVar5 + uVar14 < uVar5) {
                                pbVar15 = pbVar15 + iVar29;
                            }
                            if (iVar6 == 1) break;
                            *pbVar15 = bVar4;
                            pbVar15 = pbVar15 + 1;
                            uVar9 = uVar5 + uVar14 + uVar14;
                            if (uVar5 + uVar14 + uVar14 < uVar5 + uVar14) {
                                pbVar15 = pbVar15 + iVar29;
                            }
                            if (iVar6 == 2) break;
                            *pbVar15 = bVar4;
                            pbVar15 = pbVar15 + 1;
                            uVar10 = uVar9 + uVar14;
                            if (uVar9 + uVar14 < uVar9) {
                                pbVar15 = pbVar15 + iVar29;
                            }
                            if (iVar6 == 3) break;
                            *pbVar15 = bVar4;
                            pbVar15 = pbVar15 + 1;
                            uVar5 = uVar10 + uVar14;
                            if (uVar10 + uVar14 < uVar10) {
                                pbVar15 = pbVar15 + iVar29;
                            }
                            iVar6 = iVar6 + -4;
                        } while (iVar6 != 0);
                    }
                    else {
                        local_28 = local_28 - param_1[1];
                        local_2c = local_2c - param_1[2];
                        do {
                            ((void (__cdecl *)(int, int))param_7)(local_28, local_2c);
                            bVar30 = (unsigned int)(uVar5 + uVar14 < uVar5);
                            uVar5 = uVar5 + uVar14;
                            if (bVar30) {
                                local_2c = local_2c + 1;
                            }
                            local_28 = (int)((unsigned int)local_28 + (uVar20 * 2u + 1u));
                            iVar6 = iVar6 + -1;
                        } while (iVar6 != 0);
                    }
                }
                return (unsigned int)(local_34 != 0);
            }
            uVar12 = ((uVar5 ^ uVar20) - uVar20) + (uVar19 + 1u | uVar19);
            uVar10 = (unsigned int)((int)((unsigned int)local_30 - (unsigned int)local_28) >> 0x1f);
            iVar29 = (int)((((unsigned int)local_30 - (unsigned int)local_28 ^ uVar10) - uVar10) + 1u);
        }
    }
    pbVar15 = (unsigned char *)((unsigned int)((int)((unsigned int)local_2c * uVar5)) + (unsigned int)*piVar1 + (unsigned int)local_28);
    if (param_6 == 1) {
        do {
            *pbVar15 = ((unsigned char *)param_7)[*pbVar15];
            pbVar15 = pbVar15 + uVar12;
            if (iVar29 == 1) break;
            *pbVar15 = ((unsigned char *)param_7)[*pbVar15];
            pbVar15 = pbVar15 + uVar12;
            if (iVar29 == 2) break;
            *pbVar15 = ((unsigned char *)param_7)[*pbVar15];
            pbVar15 = pbVar15 + uVar12;
            if (iVar29 == 3) break;
            *pbVar15 = ((unsigned char *)param_7)[*pbVar15];
            pbVar15 = pbVar15 + uVar12;
            iVar29 = iVar29 + -4;
        } while (iVar29 != 0);
    }
    else if (param_6 < 2) {
        do {
            *pbVar15 = bVar4;
            pbVar15 = pbVar15 + uVar12;
            if (iVar29 == 1) break;
            *pbVar15 = bVar4;
            pbVar15 = pbVar15 + uVar12;
            if (iVar29 == 2) break;
            *pbVar15 = bVar4;
            if (iVar29 == 3) break;
            pbVar15[uVar12] = bVar4;
            pbVar15 = pbVar15 + uVar12 + uVar12;
            iVar29 = iVar29 + -4;
        } while (iVar29 != 0);
    }
    else {
        local_28 = local_28 - param_1[1];
        local_2c = local_2c - param_1[2];
        uVar19 = (unsigned int)(uVar9 != 0) | uVar19;
        do {
            ((void (__cdecl *)(int, int))param_7)(local_28, local_2c);
            local_2c = (int)((unsigned int)local_2c + ((unsigned int)(uVar11 != 0) | uVar20));
            local_28 = (int)((unsigned int)local_28 + uVar19);
            iVar29 = iVar29 + -1;
        } while (iVar29 != 0);
    }
    return (unsigned int)(local_34 != 0);
}
