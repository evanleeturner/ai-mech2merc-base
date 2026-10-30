/* SPDX-License-Identifier: MIT */
/* mercsw 1003bed0 */
extern int _DAT_10160f48;
extern int _DAT_10160f44;
extern int _DAT_10160f4c;
extern int DAT_10160f38;
extern int DAT_10160f3c;
extern int DAT_10160f40;
extern int DAT_10160f54;
extern int DAT_10160f20;
extern int DAT_10160f24;
extern int DAT_10160f28;
extern int DAT_10160f2c;
extern int DAT_10160f30;
extern int DAT_10160f34;
extern int DAT_10115154;
extern unsigned char *PTR_DAT_100aaf68;

int __cdecl FixedDot3Shift29(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6);
int __cdecl FUN_1003c230(int param_1, int param_2, int param_3, int param_4);

unsigned int __cdecl FUN_1003bed0(unsigned short *param_1)
{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    unsigned int uVar5;
    int iVar6;
    int iVar7;
    int local_14;

    iVar1 = *(int *)(param_1 + 0x20);
    iVar2 = (int)((unsigned int)*(int *)(param_1 + 0x1a) - (unsigned int)_DAT_10160f48);
    iVar3 = (int)((unsigned int)*(int *)(param_1 + 0x1c) - (unsigned int)_DAT_10160f44);
    iVar4 = (int)((unsigned int)*(int *)(param_1 + 0x1e) - (unsigned int)_DAT_10160f4c);
    if ((*param_1 & 0x1000) == 0) {
        iVar6 = FixedDot3Shift29(iVar2, DAT_10160f38, iVar3, DAT_10160f3c, iVar4, DAT_10160f40);
        DAT_10115154 = iVar6;
        if ((int)((unsigned int)iVar6 + (unsigned int)iVar1) < DAT_10160f54) {
            uVar5 = 4;
        }
        else {
            iVar7 = FixedDot3Shift29(iVar2, DAT_10160f20, iVar3, DAT_10160f24, iVar4, DAT_10160f28);
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
                uVar5 = 6;
            }
            else {
                iVar2 = FixedDot3Shift29(iVar2, DAT_10160f2c, iVar3, DAT_10160f30, iVar4, DAT_10160f34);
                if (iVar2 < 1) {
                    local_14 = FUN_1003c230(*(int *)(PTR_DAT_100aaf68 + 0xb0),
                                            (int)(0u - (unsigned int)iVar2),
                                            (int)(0u - (unsigned int)iVar6),
                                            *(int *)(PTR_DAT_100aaf68 + 0xac));
                }
                else {
                    local_14 = FUN_1003c230(*(int *)(PTR_DAT_100aaf68 + 0xb0),
                                            iVar2,
                                            (int)(0u - (unsigned int)iVar6),
                                            *(int *)(PTR_DAT_100aaf68 + 0xac));
                }
                if (iVar1 < local_14) {
                    uVar5 = 7;
                }
                else {
                    uVar5 = 0;
                }
            }
        }
    }
    else {
        uVar5 = 1;
    }
    return uVar5;
}
