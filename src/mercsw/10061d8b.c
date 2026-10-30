/* SPDX-License-Identifier: MIT */
/* mercsw 10061d8b */
extern int DAT_100b378c;
extern int DAT_100adf38;
extern int DAT_100b3790;
extern int DAT_100b38fc;
extern int DAT_100b3904;
extern int DAT_100ab094;
extern unsigned char *PTR_DAT_100aaf68;
extern unsigned char DAT_100a7ba0[];
extern void *PTR_FUN_100a7ba4[];
extern unsigned char DAT_100a7ba8[];
extern unsigned char DAT_100a7bb8[];
extern unsigned char DAT_100a7bbc[];
extern unsigned char DAT_100a7bc0[];
extern unsigned char DAT_100a7bc8[];
extern unsigned char DAT_100a7bcc[];
extern unsigned char DAT_100a7bd4[];
extern unsigned char DAT_100a7be4[];
extern unsigned char DAT_100a7bf4[];
extern unsigned char DAT_100a7bf8[];
extern unsigned char DAT_100f2ff0[];

extern void __cdecl FUN_100082c4(int, int);
extern void __cdecl FUN_10063930(int);
extern void __cdecl FUN_100636e5(int *);
extern void __cdecl FUN_10063818(int *);
extern int __cdecl FUN_1006312b(int, int);
extern void __cdecl FUN_10044cc4(int, int *);
extern void __cdecl FUN_10003742(int, int, int, int, int);
extern void __cdecl FUN_10062d5f(int, int);
extern void __cdecl FUN_1004ab11(unsigned int, int);
extern void __cdecl FUN_10003783(int, int, unsigned int, int, int, int);
extern void __cdecl FUN_10003686(unsigned int, int, unsigned int, unsigned int, int, int);

#define I32(base, off) (*(int *)((unsigned char *)(base) + (off)))
#define U32(base, off) (*(unsigned int *)((unsigned char *)(base) + (off)))
#define OBJ(off) (*(char *)(*(int *)(*param_1 + 0x4c) + (off)))
#define ADDU(a, b) ((int)((unsigned int)(a) + (unsigned int)(b)))
#define SUBU(a, b) ((int)((unsigned int)(a) - (unsigned int)(b)))
#define MULU(a, b) ((int)((unsigned int)(a) * (unsigned int)(b)))

void __cdecl FUN_10061d8b(int *param_1)
{
    int *piVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    unsigned int uVar5;
    int iVar6;
    unsigned int uVar7;
    int local_28;
    int local_24;
    int local_20;
    int local_18;
    unsigned short *flags;

    flags = (unsigned short *)(param_1 + 0x110);

    if (param_1[0xf5] == 2) {
        param_1[0xfb] = param_1[0xf8];
        if (OBJ(0x2c) != '\0') {
            if (DAT_100b378c == 0) {
                DAT_100b378c = 1;
                FUN_100082c4(6, 1);
            } else {
                DAT_100b378c = 0;
                FUN_100082c4(7, 1);
            }
        }
        if ((*flags & 0x4000) == 0) {
            if (param_1[0xf8] != -1) {
                iVar3 = ADDU(MULU(param_1[0xf8], 0x40), param_1[0x15]);
                iVar4 = MULU(I32(iVar3, 4), 0x68);
                if (((DAT_100b378c == 0) && (I32(*param_1, 4) == DAT_100adf38)) &&
                    (OBJ(0x2b) == '\0')) {
                    OBJ(0x27) = OBJ(0x25);
                    OBJ(0x25) = 0;
                }
                if (OBJ(0x27) == '\0') {
                    if (OBJ(0x2d) == '\0') {
                        if (OBJ(0x28) == '\0') {
                            if (OBJ(0x29) == '\0') {
                                if (OBJ(0x2a) == '\0') {
                                    if (OBJ(0x25) == '\0') {
                                        if ((*flags & 1) != 0) {
                                            *flags = *flags & 0xfffe;
                                            FUN_10062d5f((int)param_1, 0);
                                        }
                                    } else if ((*flags & 1) == 0) {
                                        *flags = *flags | 1;
                                        if (I32(iVar3, 8) == 1) {
                                            I32(iVar3, 8) = 2;
                                            I32(iVar3, 0x24) = I32(DAT_100a7bcc, iVar4);
                                            I32(iVar3, 0x10) = 0;
                                            FUN_10044cc4(iVar3, param_1);
                                            if ((I32(DAT_100a7bc8, iVar4) == 0) ||
                                                ((*flags & 0x80) == 0)) {
                                                I32(iVar3, 0x1c) = 0;
                                                I32(iVar3, 0x18) = I32(iVar3, 0x1c);
                                            } else {
                                                U32(iVar3, 0x18) = U32(*param_1, 0xdc) & 0xff;
                                                U32(iVar3, 0x1c) = U32(*param_1, 0xdc) & 0xf00;
                                            }
                                        } else {
                                            FUN_10003742(0x15d, 100, 0x40, 5, 0x32);
                                        }
                                    }
                                } else if ((*flags & 1) == 0) {
                                    *flags = *flags | 1;
                                    iVar4 = FUN_1006312b((int)param_1, 2);
                                    if (iVar4 != 0) {
                                        FUN_100636e5(param_1);
                                    }
                                }
                            } else if ((*flags & 1) == 0) {
                                *flags = *flags | 1;
                                iVar4 = FUN_1006312b((int)param_1, 1);
                                if (iVar4 != 0) {
                                    FUN_100636e5(param_1);
                                }
                            }
                        } else if ((*flags & 1) == 0) {
                            *flags = *flags | 1;
                            iVar4 = FUN_1006312b((int)param_1, 0);
                            if (iVar4 != 0) {
                                FUN_100636e5(param_1);
                            }
                        }
                    } else {
                        if ((*flags & 1) == 0) {
                            *flags = *flags | 1;
                            FUN_10063818(param_1);
                        }
                        OBJ(0x2d) = 0;
                    }
                } else if ((*flags & 1) == 0) {
                    *flags = *flags | 1;
                    FUN_100636e5(param_1);
                }
            }
        } else {
            FUN_10063930((int)param_1);
        }
        for (local_20 = 0; local_20 < 0xe; local_20 = local_20 + 1) {
            iVar4 = ADDU(param_1[0x15], MULU(local_20, 0x40));
            if (-1 < I32(iVar4, 4)) {
                iVar2 = I32(iVar4, 4);
                iVar3 = MULU(iVar2, 0x68);
                piVar1 = (int *)(DAT_100a7ba0 + iVar3);
                if (*piVar1 != 0) {
                    ((void (__cdecl *)(int, int *, int))*piVar1)(*param_1, piVar1, iVar4);
                }
                iVar6 = I32(iVar4, 8);
                if (iVar6 == 0) {
                    if (I32(DAT_100a7bf4, iVar3) <= SUBU(DAT_100b38fc, I32(iVar4, 0x10))) {
                        I32(iVar4, 8) = 1;
                        I32(iVar4, 0x10) = 0;
                    }
                } else if (iVar6 == 2) {
                    if (I32(iVar4, 0x24) < 1) {
                        I32(iVar4, 0x10) = DAT_100b38fc;
                        I32(iVar4, 8) = 0;
                        I32(iVar4, 0x24) = 0;
                    } else {
                        if (I32(iVar4, 0x24) == I32(DAT_100a7bcc, iVar3)) {
                            DAT_100b3790 = 1;
                        }
                        local_18 = ADDU(I32(iVar4, 0x10), DAT_100b3904);
                        do {
                            while (1) {
                                if ((local_18 < I32(DAT_100a7bf8, iVar3)) || (I32(iVar4, 0x24) < 1))
                                    goto LAB_10062704;
                                I32(*param_1, 0x48) = param_1[I32(iVar4, 0x28) + 0xe6];
                                local_24 = 0;
                                if (PTR_FUN_100a7ba4[iVar2 * 0x1a] != 0) {
                                    local_24 = ((int (__cdecl *)(int, int *, int))PTR_FUN_100a7ba4[iVar2 * 0x1a])(*param_1, piVar1, iVar4);
                                }
                                if (local_24 != 0) break;
                                *flags = *flags & 0xfffe;
                                I32(iVar4, 0x24) = 0;
                            }
                            FUN_1004ab11(U32(DAT_100a7bb8, iVar3), *param_1);
                            FUN_1004ab11(U32(DAT_100a7bbc, iVar3), *param_1);
                            I32(iVar4, 0x24) = SUBU(I32(iVar4, 0x24), local_24);
                            local_18 = SUBU(local_18, I32(DAT_100a7bf8, iVar3));
                            I32(iVar4, 0x10) = local_18;
                            param_1[0xf1] = ADDU(param_1[0xf1], I32(DAT_100a7be4, iVar3));
                            if (I32(iVar4, 4) == 0x1e) {
                                FUN_100082c4(0x23, -1);
                            }
                            if ((((DAT_100a7ba8[iVar3] & 1) != 0) && (DAT_100b3790 != 0)) ||
                                ((DAT_100a7ba8[iVar3] & 2) != 0)) {
                                DAT_100b3790 = 0;
                                if (I32(*param_1, 4) == DAT_100adf38) {
                                    I32(DAT_100f2ff0, MULU(I32(iVar4, 0x30), 4)) = 1;
                                }
                                if (0 < I32(DAT_100a7bd4, iVar3)) {
                                    if ((I32(*param_1, 4) == DAT_100adf38) && (DAT_100ab094 != 0)) {
                                        switch (I32(iVar4, 0x28)) {
                                        case 2:
                                        case 5:
                                            local_28 = 0x4f;
                                            break;
                                        default:
                                            local_28 = 0x40;
                                            break;
                                        case 4:
                                        case 6:
                                            local_28 = 0x2f;
                                        }
                                        if ((DAT_100a7ba8[iVar3] & 2) == 0) {
                                            FUN_10003783(0, 0, U32(DAT_100a7bd4, iVar3), 0x32, local_28, 0x32);
                                        } else {
                                            FUN_10003783(0, 0, U32(DAT_100a7bd4, iVar3), 0x32, local_28, 0x432);
                                        }
                                    } else {
                                        uVar5 = SUBU(I32(PTR_DAT_100aaf68, 0), I32(*param_1, 0x50));
                                        iVar6 = SUBU(I32(PTR_DAT_100aaf68, 4), I32(*param_1, 0x54));
                                        uVar7 = SUBU(I32(PTR_DAT_100aaf68, 8), I32(*param_1, 0x58));
                                        if ((DAT_100a7ba8[iVar3] & 2) == 0) {
                                            FUN_10003686(uVar5, iVar6, uVar7, U32(DAT_100a7bd4, iVar3), DAT_100ab094, 0x32);
                                        } else {
                                            FUN_10003686(uVar5, iVar6, uVar7, U32(DAT_100a7bd4, iVar3), DAT_100ab094, 0x432);
                                        }
                                    }
                                }
                            }
                        } while (((I32(iVar4, 0x24) != 0) || (I32(DAT_100a7bc0, iVar3) == 0)) ||
                                 ((OBJ(0x25) == '\0' &&
                                   (((OBJ(0x27) == '\0' && (OBJ(0x28) == '\0')) &&
                                     (OBJ(0x29) == '\0')) &&
                                    (OBJ(0x2a) == '\0')))));
                        I32(iVar4, 0x10) = DAT_100b38fc;
                        I32(iVar4, 8) = 3;
                        I32(iVar4, 0x24) = I32(DAT_100a7bcc, iVar3);
LAB_10062704:
                        if (I32(iVar4, 8) != 3) {
                            I32(iVar4, 0x10) = local_18;
                        }
                    }
                } else if ((iVar6 == 3) &&
                           (I32(DAT_100a7bf4, iVar3) <= SUBU(DAT_100b38fc, I32(iVar4, 0x10)))) {
                    if (((ADDU(MULU(param_1[0xf8], 0x40), param_1[0x15]) == iVar4) ||
                         ((OBJ(0x27) != '\0') || (OBJ(0x28) != '\0'))) ||
                        (OBJ(0x29) != '\0') || (OBJ(0x2a) != '\0')) {
                        I32(iVar4, 8) = 2;
                    } else {
                        I32(iVar4, 8) = 1;
                    }
                    I32(iVar4, 0x10) = 0;
                }
            }
        }
    }
    return;
}
