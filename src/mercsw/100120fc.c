/* SPDX-License-Identifier: MIT */
/* mercsw 100120fc */
extern int __cdecl __strcmpi(const char *a, const char *b);
extern int __cdecl _sprintf(char *buf, const char *fmt, ...);

extern int FUN_10065e16(void);
extern int FUN_10006fc9(void);
extern int FUN_10011e80(int param_1);
extern void FUN_1002f783(int param_1);
extern void FUN_1002f853(int param_1);
extern void FUN_1002fbc0(int *param_1);
extern void FUN_100140da(void);
extern void FUN_10012c5d(int param_1, int param_2);
extern void FUN_100134c7(int param_1, int param_2);
extern void FUN_100135fe(int param_1, int param_2);
extern void FUN_10013763(char *param_1, int param_2);
extern void FUN_100138d2(int param_1, int param_2);
extern void FUN_100139e1(char *param_1, int param_2);
extern void FUN_10004b19(int param_1, int *param_2);
extern void FUN_1005be24(char *param_1, int param_2, int param_3, int param_4);
extern void FUN_10012be0(int param_1, int param_2);
extern void FUN_1002f727(int param_1);
extern void FUN_1002f7f7(int param_1);
extern void FUN_1001261d(void);
extern void FUN_100133f8(void);
extern void FUN_10013817(void);
extern void FUN_10013716(void);
extern int FUN_10065d96(void);
extern void FUN_10065db4(void);

extern int DAT_100aa1f0;
extern int DAT_100adf28;
extern short DAT_100aa1b4;
extern int DAT_100b3900;
extern int _DAT_100aa1c4;
extern int _DAT_100aa1c8;
extern int DAT_100adf38;
extern int DAT_100eef40[];
extern char *DAT_101eb4c0;
extern int DAT_101eb4d0[];
extern char DAT_100aa21c[];
extern char DAT_100aa220[];
extern char DAT_100aa224[];
extern char DAT_100aa228[];
extern char DAT_100aa22c[];
extern char DAT_100aa230[];
extern char DAT_100aa234[];
extern char DAT_100aa250[];
extern char s___s__exited_the_game__100aa238[];
extern int DAT_100b0a1c;
extern int DAT_100aa218;
extern int DAT_100aa1a8;
extern short DAT_100aa1d0;
extern int DAT_100aa1f4;
extern int DAT_101eb510[];
extern int DAT_100aa1c0;
extern int DAT_100b38fc;

unsigned int __stdcall FUN_100120fc(void)
{
    int iVar1;
    char local_68[80];
    int local_18;
    int local_14;
    int local_10;
    char local_c[3];
    int local_8;

    if ((DAT_100aa1f0 == 1) && (DAT_100adf28 == 0)) {
        DAT_100aa1b4 = 0;
        DAT_100b3900 = FUN_10065e16();
        while ((local_14 = FUN_10006fc9()) != -1) {
            _DAT_100aa1c4 = (int)((unsigned int)_DAT_100aa1c4 + 1u);
            local_8 = FUN_10011e80(local_14);
            if ((local_8 != DAT_100adf38) && (-1 < local_8) &&
                ((local_18 = DAT_100eef40[local_8]) != 0)) {
                local_c[0] = *DAT_101eb4c0;
                local_c[1] = DAT_101eb4c0[1];
                local_c[2] = 0;
                DAT_101eb4d0[local_8] = DAT_100b3900;
                if ((*(unsigned short *)(local_18 + 0x14) & 0x4000) != 0) {
                    FUN_1002f783(*(int *)(local_18 + 0x40));
                    FUN_1002f853(*(int *)(local_18 + 0x40));
                    FUN_1002fbc0(*(int **)(local_18 + 0x40));
                    *(unsigned short *)(local_18 + 0x14) =
                        *(unsigned short *)(local_18 + 0x14) & 0xb7ff;
                    FUN_100140da();
                }
                iVar1 = __strcmpi(local_c, DAT_100aa21c);
                if (iVar1 == 0) {
                    FUN_10012c5d((int)DAT_101eb4c0, local_8);
                } else {
                    iVar1 = __strcmpi(local_c, DAT_100aa220);
                    if (iVar1 == 0) {
                        FUN_100134c7((int)DAT_101eb4c0, local_8);
                    } else {
                        iVar1 = __strcmpi(local_c, DAT_100aa224);
                        if (iVar1 == 0) {
                            FUN_100135fe((int)DAT_101eb4c0, local_8);
                        } else {
                            iVar1 = __strcmpi(local_c, DAT_100aa228);
                            if (iVar1 == 0) {
                                FUN_10013763(DAT_101eb4c0, local_8);
                            } else {
                                iVar1 = __strcmpi(local_c, DAT_100aa22c);
                                if (iVar1 == 0) {
                                    FUN_100138d2((int)DAT_101eb4c0, local_8);
                                } else {
                                    iVar1 = __strcmpi(local_c, DAT_100aa230);
                                    if (iVar1 == 0) {
                                        FUN_100139e1(DAT_101eb4c0, local_8);
                                    } else {
                                        iVar1 = __strcmpi(local_c, DAT_100aa234);
                                        if (iVar1 == 0) {
                                            if (DAT_100b0a1c == 0) {
                                                FUN_10004b19(-2, *(int **)(local_18 + 0x20));
                                            }
                                            FUN_100140da();
                                            _sprintf(local_68, s___s__exited_the_game__100aa238,
                                                     local_18 + 0x110);
                                            FUN_1005be24(local_68, 1, 0x712, 0x50);
                                            break;
                                        }
                                        iVar1 = __strcmpi(local_c, DAT_100aa250);
                                        if (iVar1 == 0) {
                                            FUN_10012be0((int)DAT_101eb4c0, local_8);
                                        } else {
                                            _DAT_100aa1c8 = (int)((unsigned int)_DAT_100aa1c8 + 1u);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (DAT_100aa218 <= DAT_100b3900) {
            DAT_100aa218 = (int)((unsigned int)DAT_100aa1a8 + (unsigned int)DAT_100b3900);
            for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
                if ((local_10 != DAT_100adf38) && (DAT_100eef40[local_10] != 0) &&
                    ((*(unsigned short *)(DAT_100eef40[local_10] + 0x14) & 0x4000) == 0) &&
                    (0x38e < (int)((unsigned int)DAT_100b3900 -
                                   (unsigned int)DAT_101eb4d0[local_10]))) {
                    FUN_1002f727(*(int *)(DAT_100eef40[local_10] + 0x40));
                    FUN_1002f7f7(*(int *)(DAT_100eef40[local_10] + 0x40));
                    *(unsigned short *)(DAT_100eef40[local_10] + 0x14) =
                        *(unsigned short *)(DAT_100eef40[local_10] + 0x14) | 0x4800;
                    FUN_100140da();
                }
            }
            if (DAT_100aa1d0 == 0) {
                if (DAT_100aa1f4 == 2) {
                    FUN_10013716();
                } else {
                    DAT_101eb510[DAT_100adf38] = 1;
                }
            } else {
                FUN_1001261d();
                FUN_100133f8();
                DAT_100aa1c0 = (int)((unsigned int)DAT_100aa1c0 + 1u);
                if ((DAT_100aa1c0 & 1) != 0) {
                    FUN_10013817();
                }
            }
        }
        if ((DAT_100aa1b4 == 0) && (DAT_100aa1f4 == 2)) {
            iVar1 = FUN_10065d96();
            DAT_100b38fc = (int)((unsigned int)DAT_100b38fc + (unsigned int)iVar1);
        }
        if (DAT_100aa1f4 == 2) {
            FUN_10065db4();
        }
    }
    return 1;
}
