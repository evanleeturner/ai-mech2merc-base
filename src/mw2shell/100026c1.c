/* SPDX-License-Identifier: MIT */
/* mw2shell 100026c1 */
void __stdcall RaiseException(DWORD, DWORD, DWORD, const DWORD *);

extern int DAT_10082064;
extern int DAT_10082058;
extern int DAT_1008205c;
extern unsigned int DAT_10082060;
extern unsigned int DAT_10082070;
extern unsigned char *DAT_10082074;
extern unsigned int *DAT_1008207c;
extern unsigned int *DAT_10082080;
extern unsigned int *DAT_10082084;
extern unsigned int *DAT_10082088;
extern unsigned int *DAT_1008208c;
extern unsigned int *DAT_10082090;
extern unsigned int *DAT_10082094;
extern unsigned int DAT_10082098;
extern unsigned int DAT_1008209c;
extern int _DAT_100820a0;
extern unsigned int DAT_100820a4;
extern int DAT_100820a8;
extern int DAT_100820ac;
extern int DAT_100820c8;
extern int DAT_100820cc;
extern unsigned int DAT_100820e8;
extern unsigned int DAT_100820ec;

void __cdecl FUN_100026c1(int *param_1, int param_2, unsigned int *param_3, int param_4)
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
    int d_;
    int e_;
    int k_;
    long long q_;
    unsigned short w_;

    piVar1 = (int *)*param_1;
    DAT_10082064 = (int)((unsigned int)piVar1[1] + 1u);
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
        DAT_10082058 = iVar5;
        if ((int)uVar12 <= iVar4) {
            DAT_10082060 = uVar12 * (unsigned int)DAT_10082064 + uVar10 + (unsigned int)*piVar1;
            DAT_10082080 = param_3 + param_2 * 6;
            DAT_1008207c = param_3;
            uVar10 = 0x7fff;
            uVar12 = 0xffff8000u;
            uVar7 = 0xf;
            puVar8 = param_3;
            do {
                uVar2 = puVar8[1];
                if ((int)uVar2 <= (int)uVar10) {
                    uVar10 = uVar2;
                    DAT_10082084 = puVar8;
                }
                if ((int)uVar12 <= (int)uVar2) {
                    uVar12 = uVar2;
                }
                uVar7 = uVar7 & (((((*puVar8 >> 0x1f) << 1 | (((unsigned int)iVar5 - *puVar8) >> 0x1f)) << 1 |
                                   (puVar8[1] >> 0x1f)) << 1) |
                                 (((unsigned int)iVar6 - puVar8[1]) >> 0x1f));
                puVar8 = puVar8 + 6;
            } while (puVar8 != DAT_10082080);
            DAT_1008205c = iVar6;
            if (uVar7 == 0) {
                DAT_10082090 = DAT_10082084;
                DAT_10082094 = DAT_10082084;
                puVar8 = DAT_10082090;
                DAT_100820a4 = uVar10;
                if (uVar12 != uVar10) {
                    do {
                        DAT_10082090 = puVar8;
                        DAT_10082088 = DAT_10082090;
                        puVar8 = DAT_10082090 + -6;
                        if ((int)puVar8 < (int)param_3) {
                            puVar8 = DAT_10082080 + -6;
                        }
                    } while ((((int)DAT_10082090[1] < 0) && ((int)puVar8[1] < 1)) ||
                             (DAT_10082098 = puVar8[1] - DAT_10082090[1], DAT_10082098 == 0));
                    e_ = (int)((int)((*puVar8 - *DAT_10082090) * 0x10000u) >> 0x10);
                    d_ = (int)(DAT_10082098 * 0x10000u);
                    if (d_ == 0) {
                        RaiseException(0xC0000094UL, 0, 0, (const DWORD *)0);
                        DAT_100820c8 = 0;
                    } else if (d_ == -1) {
                        if (e_ != 0) {
                            RaiseException(0xC0000094UL, 0, 0, (const DWORD *)0);
                        }
                        DAT_100820c8 = 0;
                    } else {
                        q_ = (long long)((unsigned long long)(unsigned int)e_ << 32) / (long long)d_;
                        if (q_ != (long long)(int)q_) {
                            RaiseException(0xC0000094UL, 0, 0, (const DWORD *)0);
                            DAT_100820c8 = 0;
                        } else {
                            DAT_100820c8 = (int)q_;
                        }
                    }
                    DAT_100820a8 = (int)(*DAT_10082090 * 0x10000u + 0x8000u);
                    puVar11 = DAT_10082094;
                    do {
                        DAT_10082094 = puVar11;
                        DAT_1008208c = DAT_10082094;
                        puVar11 = DAT_10082094 + 6;
                        if ((int)DAT_10082080 <= (int)(DAT_10082094 + 6)) {
                            puVar11 = param_3;
                        }
                    } while ((((int)DAT_10082094[1] < 0) && ((int)puVar11[1] < 1)) ||
                             (DAT_1008209c = puVar11[1] - DAT_10082094[1], DAT_1008209c == 0));
                    e_ = (int)((int)((*puVar11 - *DAT_10082094) * 0x10000u) >> 0x10);
                    d_ = (int)(DAT_1008209c * 0x10000u);
                    if (d_ == 0) {
                        RaiseException(0xC0000094UL, 0, 0, (const DWORD *)0);
                        DAT_100820cc = 0;
                    } else if (d_ == -1) {
                        if (e_ != 0) {
                            RaiseException(0xC0000094UL, 0, 0, (const DWORD *)0);
                        }
                        DAT_100820cc = 0;
                    } else {
                        q_ = (long long)((unsigned long long)(unsigned int)e_ << 32) / (long long)d_;
                        if (q_ != (long long)(int)q_) {
                            RaiseException(0xC0000094UL, 0, 0, (const DWORD *)0);
                            DAT_100820cc = 0;
                        } else {
                            DAT_100820cc = (int)q_;
                        }
                    }
                    DAT_100820ac = (int)(*DAT_10082094 * 0x10000u + 0x8000u);
                    _DAT_100820a0 = (int)((unsigned int)iVar6 - uVar10);
                    if (uVar12 - (unsigned int)iVar6 == 0 || (int)uVar12 < iVar6) {
                        _DAT_100820a0 = (int)((unsigned int)_DAT_100820a0 + (uVar12 - (unsigned int)iVar6));
                    }
                    if (0x7fffffffu < uVar10) {
                        _DAT_100820a0 = (int)((unsigned int)_DAT_100820a0 + uVar10);
                        DAT_100820a4 = 0;
                        DAT_10082098 = DAT_10082098 + DAT_10082090[1];
                        lVar3 = (long long)DAT_100820c8 * (long long)(int)(DAT_10082090[1] * 0xffff0000u);
                        DAT_100820a8 = (int)((unsigned int)DAT_100820a8 +
                                             (((unsigned int)lVar3 >> 0x10) |
                                              ((unsigned int)((unsigned long long)lVar3 >> 0x20) << 0x10)));
                        DAT_1008209c = DAT_1008209c + DAT_10082094[1];
                        lVar3 = (long long)DAT_100820cc * (long long)(int)(DAT_10082094[1] * 0xffff0000u);
                        DAT_100820ac = (int)((unsigned int)DAT_100820ac +
                                             (((unsigned int)lVar3 >> 0x10) |
                                              ((unsigned int)((unsigned long long)lVar3 >> 0x20) << 0x10)));
                    }
                    DAT_10082070 = DAT_100820a4 * (unsigned int)DAT_10082064 + DAT_10082060;
                    iVar4 = DAT_100820a8;
                    iVar5 = DAT_100820ac;
                    DAT_10082090 = puVar8;
                    DAT_10082094 = puVar11;
LAB_1000294e:
                    iVar6 = iVar4;
                    iVar9 = iVar5;
                    if (iVar5 <= iVar4) {
                        iVar6 = iVar5;
                        iVar9 = iVar4;
                    }
                    uVar10 = (unsigned int)(iVar6 >> 0x10);
                    if (((int)uVar10 <= DAT_10082058) && (uVar12 = (unsigned int)(iVar9 >> 0x10), -1 < (int)uVar12)) {
                        DAT_100820e8 = uVar10;
                        DAT_100820ec = uVar12;
                        if (uVar12 != uVar10) {
                            if (0x7fffffffu < uVar10) {
                                DAT_100820e8 = 0;
                            }
                            if (uVar12 - (unsigned int)DAT_10082058 != 0 && DAT_10082058 <= (int)uVar12) {
                                DAT_100820ec = uVar12 - (uVar12 - (unsigned int)DAT_10082058);
                            }
                        }
                        pbVar13 = (unsigned char *)(DAT_10082070 + DAT_100820e8);
                        uVar12 = DAT_100820ec - DAT_100820e8;
                        DAT_10082074 = pbVar13 + uVar12;
                        uVar10 = uVar12 + 1;
                        if (((unsigned int)pbVar13 & 1) != 0) {
                            *pbVar13 = *(unsigned char *)((unsigned int)*pbVar13 + (unsigned int)param_4);
                            if (uVar12 == 0) goto LAB_10002adf;
                            pbVar13 = pbVar13 + 1;
                            uVar10 = uVar12;
                        }
                        if (uVar10 != 1) {
                            iVar6 = (int)((uVar10 >> 1) - 1);
                            do {
                                if (iVar6 < 5) {
                                    for (k_ = 0; k_ < 5; k_++) {
                                        if (k_ > 0 && !(-1 < iVar6 - k_)) {
                                            break;
                                        }
                                        __builtin_memcpy(&w_, pbVar13 + k_ * 2, 2);
                                        w_ = (unsigned short)
                                            (((unsigned int)*(unsigned char *)((unsigned int)(unsigned char)(w_ >> 8) + (unsigned int)param_4) << 8) |
                                             (unsigned int)*(unsigned char *)((unsigned int)(unsigned char)w_ + (unsigned int)param_4));
                                        __builtin_memcpy(pbVar13 + k_ * 2, &w_, 2);
                                    }
                                    break;
                                }
                                for (k_ = 0; k_ < 6; k_++) {
                                    __builtin_memcpy(&w_, pbVar13 + k_ * 2, 2);
                                    w_ = (unsigned short)
                                        (((unsigned int)*(unsigned char *)((unsigned int)(unsigned char)(w_ >> 8) + (unsigned int)param_4) << 8) |
                                         (unsigned int)*(unsigned char *)((unsigned int)(unsigned char)w_ + (unsigned int)param_4));
                                    __builtin_memcpy(pbVar13 + k_ * 2, &w_, 2);
                                }
                                pbVar13 = pbVar13 + 0xc;
                                iVar6 = iVar6 + -6;
                            } while (-1 < iVar6);
                            if ((uVar10 & 1) == 0) goto LAB_10002adf;
                        }
                        *DAT_10082074 = *(unsigned char *)((unsigned int)*DAT_10082074 + (unsigned int)param_4);
                    }
LAB_10002adf:
                    DAT_10082070 = DAT_10082070 + (unsigned int)DAT_10082064;
                    _DAT_100820a0 = _DAT_100820a0 + -1;
                    if (-1 < _DAT_100820a0) {
                        if (_DAT_100820a0 == 0) {
                            iVar4 = (int)((unsigned int)iVar4 + (unsigned int)DAT_100820c8);
                            iVar5 = (int)((unsigned int)iVar5 + (unsigned int)DAT_100820cc);
                        }
                        else {
                            DAT_10082098 = DAT_10082098 + -1;
                            if (DAT_10082098 == 0) {
                                DAT_10082088 = DAT_10082090;
                                puVar8 = DAT_10082090 + -6;
                                if ((int)puVar8 < (int)DAT_1008207c) {
                                    puVar8 = DAT_10082080 + -6;
                                }
                                DAT_10082098 = (puVar8[1] - DAT_10082090[1]) +
                                               (unsigned int)(puVar8[1] - DAT_10082090[1] == 0);
                                e_ = (int)((int)((*puVar8 - *DAT_10082090) * 0x10000u) >> 0x10);
                                d_ = (int)(DAT_10082098 * 0x10000u);
                                if (d_ == 0) {
                                    RaiseException(0xC0000094UL, 0, 0, (const DWORD *)0);
                                    DAT_100820c8 = 0;
                                } else if (d_ == -1) {
                                    if (e_ != 0) {
                                        RaiseException(0xC0000094UL, 0, 0, (const DWORD *)0);
                                    }
                                    DAT_100820c8 = 0;
                                } else {
                                    q_ = (long long)((unsigned long long)(unsigned int)e_ << 32) / (long long)d_;
                                    if (q_ != (long long)(int)q_) {
                                        RaiseException(0xC0000094UL, 0, 0, (const DWORD *)0);
                                        DAT_100820c8 = 0;
                                    } else {
                                        DAT_100820c8 = (int)q_;
                                    }
                                }
                                iVar4 = (int)(*DAT_10082090 * 0x10000u + 0x8000u);
                                DAT_10082090 = puVar8;
                            }
                            else {
                                iVar4 = (int)((unsigned int)iVar4 + (unsigned int)DAT_100820c8);
                            }
                            DAT_1008209c = DAT_1008209c + -1;
                            if (DAT_1008209c == 0) {
                                DAT_1008208c = DAT_10082094;
                                puVar8 = DAT_10082094 + 6;
                                if ((int)DAT_10082080 <= (int)(DAT_10082094 + 6)) {
                                    puVar8 = DAT_1008207c;
                                }
                                DAT_1008209c = (puVar8[1] - DAT_10082094[1]) +
                                               (unsigned int)(puVar8[1] - DAT_10082094[1] == 0);
                                e_ = (int)((int)((*puVar8 - *DAT_10082094) * 0x10000u) >> 0x10);
                                d_ = (int)(DAT_1008209c * 0x10000u);
                                if (d_ == 0) {
                                    RaiseException(0xC0000094UL, 0, 0, (const DWORD *)0);
                                    DAT_100820cc = 0;
                                } else if (d_ == -1) {
                                    if (e_ != 0) {
                                        RaiseException(0xC0000094UL, 0, 0, (const DWORD *)0);
                                    }
                                    DAT_100820cc = 0;
                                } else {
                                    q_ = (long long)((unsigned long long)(unsigned int)e_ << 32) / (long long)d_;
                                    if (q_ != (long long)(int)q_) {
                                        RaiseException(0xC0000094UL, 0, 0, (const DWORD *)0);
                                        DAT_100820cc = 0;
                                    } else {
                                        DAT_100820cc = (int)q_;
                                    }
                                }
                                iVar5 = (int)(*DAT_10082094 * 0x10000u + 0x8000u);
                                DAT_10082094 = puVar8;
                            }
                            else {
                                iVar5 = (int)((unsigned int)iVar5 + (unsigned int)DAT_100820cc);
                            }
                        }
                        goto LAB_1000294e;
                    }
                }
            }
        }
    }
    return;
}
