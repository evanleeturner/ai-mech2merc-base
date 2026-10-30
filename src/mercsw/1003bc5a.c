/* SPDX-License-Identifier: MIT */
/* mercsw 1003bc5a */
extern int DAT_100ab094;
extern char *PTR_DAT_100aaf68;
extern int DAT_10115154;
extern int DAT_10160ef0;
extern int DAT_10160f20;
extern int DAT_10160f24;
extern int DAT_10160f28;
extern int DAT_10160f2c;
extern int DAT_10160f30;
extern int DAT_10160f34;
extern int DAT_10160f38;
extern int DAT_10160f3c;
extern int DAT_10160f40;
extern int _DAT_10160f44;
extern int _DAT_10160f48;
extern int _DAT_10160f4c;
extern int DAT_10160f54;

extern int __cdecl IsWithinRadius3_Likely(int a, int b, int c, int d);
extern int __cdecl FixedDot3Shift29(int a, int b, int c, int d, int e, int f);
extern int __cdecl FUN_1003c230(int a, int b, int c, int d);

unsigned int __cdecl FUN_1003bc5a(int param_1)
{
    int iVar1;
    unsigned int uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int local_14;

    if ((DAT_100ab094 == 0) ||
        (((unsigned char)*(unsigned short *)(param_1 + 2) & 0xf0) != 0xa0)) {
        iVar1 = *(int *)(param_1 + 0x40);
        iVar3 = (int)((unsigned int)*(int *)(param_1 + 0x34) - (unsigned int)_DAT_10160f48);
        iVar4 = (int)((unsigned int)*(int *)(param_1 + 0x38) - (unsigned int)_DAT_10160f44);
        iVar5 = (int)((unsigned int)*(int *)(param_1 + 0x3c) - (unsigned int)_DAT_10160f4c);
        iVar6 = IsWithinRadius3_Likely(iVar3, iVar4, iVar5,
                             (int)((unsigned int)*(int *)(PTR_DAT_100aaf68 + 0xb4) + (unsigned int)iVar1));
        if (iVar6 == 0) {
            uVar2 = 5;
        }
        else {
            iVar6 = FixedDot3Shift29(iVar3, DAT_10160f38, iVar4, DAT_10160f3c, iVar5, DAT_10160f40);
            DAT_10115154 = iVar6;
            if ((int)((unsigned int)iVar1 + (unsigned int)iVar6) < DAT_10160f54) {
                uVar2 = 4;
            }
            else if (DAT_10160ef0 < (int)((unsigned int)iVar6 - (unsigned int)iVar1)) {
                uVar2 = 5;
            }
            else {
                iVar7 = FixedDot3Shift29(iVar3, DAT_10160f20, iVar4, DAT_10160f24, iVar5, DAT_10160f28);
                if (iVar7 < 1) {
                    local_14 = FUN_1003c230(*(int *)(PTR_DAT_100aaf68 + 0x18),
                                            (int)(0u - (unsigned int)iVar7),
                                            (int)(0u - (unsigned int)iVar6),
                                            *(int *)(PTR_DAT_100aaf68 + 0xa8));
                }
                else {
                    local_14 = FUN_1003c230(*(int *)(PTR_DAT_100aaf68 + 0x18),
                                            iVar7,
                                            (int)(0u - (unsigned int)iVar6),
                                            *(int *)(PTR_DAT_100aaf68 + 0xa8));
                }
                if (iVar1 < local_14) {
                    uVar2 = 6;
                }
                else {
                    iVar3 = FixedDot3Shift29(iVar3, DAT_10160f2c, iVar4, DAT_10160f30, iVar5, DAT_10160f34);
                    if (iVar3 < 1) {
                        local_14 = FUN_1003c230(*(int *)(PTR_DAT_100aaf68 + 0xb0),
                                                (int)(0u - (unsigned int)iVar3),
                                                (int)(0u - (unsigned int)iVar6),
                                                *(int *)(PTR_DAT_100aaf68 + 0xac));
                    }
                    else {
                        local_14 = FUN_1003c230(*(int *)(PTR_DAT_100aaf68 + 0xb0),
                                                iVar3,
                                                (int)(0u - (unsigned int)iVar6),
                                                *(int *)(PTR_DAT_100aaf68 + 0xac));
                    }
                    if (iVar1 < local_14) {
                        uVar2 = 7;
                    }
                    else {
                        uVar2 = 0;
                    }
                }
            }
        }
    }
    else {
        uVar2 = 1;
    }
    return uVar2;
}
