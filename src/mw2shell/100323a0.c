/* SPDX-License-Identifier: MIT */
/* mw2shell 100323a0 */
extern unsigned int DAT_10083508;
extern int DAT_1009200c;
extern int DAT_100a67b8;
extern int DAT_100a67c8;
extern unsigned char DAT_10082be8[];

int __cdecl FUN_10032640(int param_1, int param_2, int param_3);
char __cdecl FUN_1000d230(int param_1);
int __cdecl FUN_1000d260(int param_1, int param_2);
int *__cdecl FUN_1000c5d0(int param_1, int param_2);
void __cdecl AppendToCollection(int param_1, int *param_2);
int __cdecl FUN_10018060(int param_1, int param_2);
void __cdecl FUN_10017ec0(int param_1, int param_2, char param_3);

unsigned int __cdecl FUN_100323a0(int param_1, int param_2, int param_3)
{
    char cVar1;
    int iVar2;
    int iVar3;
    int *piVar4;
    int iVar5;
    int iFlag;

    if (param_2 < 1) {
        return 0;
    }
    iVar2 = FUN_10032640(param_1, param_2, param_3);
    if (iVar2 != 1) {
        return 0;
    }
    cVar1 = FUN_1000d230(param_2);
    iVar2 = (int)(unsigned int)(unsigned char)cVar1;
    iVar3 = FUN_1000d260(iVar2, param_2);
    if (iVar2 == 0) {
        __builtin_memcpy(&iFlag, (const char *)(DAT_10083508 + 0x23bb), 4);
        if (iFlag == 1) {
            piVar4 = FUN_1000c5d0(iVar3, 0);
            if (piVar4 != (int *)0) {
                *(unsigned char *)(piVar4 + 2) = 0;
                AppendToCollection(DAT_1009200c, piVar4);
                return 1;
            }
        }
    }
    else if (iVar2 == 1) {
        iVar2 = 0;
        if (0 < *(int *)(DAT_100a67b8 + 4)) {
            while (1) {
                __builtin_memcpy(&iFlag, (const char *)(DAT_10083508 + 0x23bb), 4);
                if (iFlag == 1) {
                    piVar4 = (int *)FUN_10018060(DAT_100a67b8, iVar2);
                    if (piVar4 != (int *)0 && *piVar4 == iVar3) {
                        break;
                    }
                }
                iVar2 = iVar2 + 1;
                if (*(int *)(DAT_100a67b8 + 4) <= iVar2) {
                    return 1;
                }
            }
            FUN_10017ec0(DAT_100a67b8, (int)piVar4, '\0');
            *(unsigned char *)(piVar4 + 2) = 1;
            AppendToCollection(DAT_1009200c, piVar4);
            return 1;
        }
    }
    else if (iVar2 == 2) {
        iVar5 = 0;
        iVar2 = *(int *)(DAT_10082be8 + (unsigned int)iVar3 * 0xcu);
        if (0 < *(int *)(DAT_100a67c8 + 4)) {
            do {
                __builtin_memcpy(&iFlag, (const char *)(DAT_10083508 + 0x23bb), 4);
                if (iFlag == 1) {
                    piVar4 = (int *)FUN_10018060(DAT_100a67c8, iVar5);
                    if ((char)piVar4[2] == '\x02') {
                        if (iVar2 < 0x1f41) {
                            if (iVar2 == 8000) {
                                if ((*piVar4 == 1) || (*piVar4 == 2)) {
                                    FUN_10017ec0(DAT_100a67c8, (int)piVar4, '\0');
                                    AppendToCollection(DAT_1009200c, piVar4);
                                    return 1;
                                }
                            }
                            else if ((iVar2 == 7000) && (*piVar4 == 10)) {
                                FUN_10017ec0(DAT_100a67c8, (int)piVar4, '\0');
                                AppendToCollection(DAT_1009200c, piVar4);
                                return 1;
                            }
                        }
                        else if (iVar2 == 0x2134) {
                            if (*piVar4 == 6) {
                                FUN_10017ec0(DAT_100a67c8, (int)piVar4, '\0');
                                AppendToCollection(DAT_1009200c, piVar4);
                                return 1;
                            }
                        }
                        else if (((iVar2 != 0x251c) && (iVar2 == 0x254e)) && (*piVar4 == 5)) {
                            FUN_10017ec0(DAT_100a67c8, (int)piVar4, '\0');
                            AppendToCollection(DAT_1009200c, piVar4);
                            return 1;
                        }
                    }
                }
                iVar5 = iVar5 + 1;
                if (*(int *)(DAT_100a67c8 + 4) <= iVar5) {
                    return 1;
                }
            } while (1);
        }
    }
    return 1;
}
