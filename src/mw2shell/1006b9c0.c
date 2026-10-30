/* SPDX-License-Identifier: MIT */
/* mw2shell 1006b9c0 */
extern int DAT_100a67b4;
extern int DAT_100a67b8;
extern int DAT_100aa6e0;
extern int DAT_100aa6e4;
extern char DAT_10082bf0[];

int __cdecl FUN_1000d230(int param_1);
unsigned int __cdecl FUN_1000d260(int param_1, int param_2);
int __cdecl FUN_10018060(int param_1, int param_2);
void __cdecl FUN_10017ec0(int param_1, int param_2, char param_3);
unsigned int __cdecl AppendToCollection(int param_1, void *param_2);

unsigned int __cdecl FUN_1006b9c0(int param_1, char param_2, unsigned int *param_3)
{
    unsigned int uVar2;
    unsigned int *puVar3;
    int *piVar4;
    unsigned int uVar5;
    int iVar6;

    *param_3 = 0;
    iVar6 = FUN_1000d230(param_1);
    uVar2 = FUN_1000d260(iVar6, param_1);
    if (iVar6 == 0) {
        iVar6 = 0;
        if (0 < *(int *)(DAT_100a67b4 + 4)) {
            do {
                puVar3 = (unsigned int *)FUN_10018060(DAT_100a67b4, iVar6);
                if ((*puVar3 == uVar2) && ((char)puVar3[2] == '\0')) {
                    uVar5 = ((unsigned int)puVar3 & 0xffffff00u) | (unsigned int)(unsigned char)param_2;
                    if (param_2 == '\x01') {
                        FUN_10017ec0(DAT_100a67b4, (int)puVar3, '\0');
                        uVar5 = AppendToCollection(DAT_100aa6e0, puVar3);
                    }
                    return (uVar5 & 0xffffff00u) | 1u;
                }
                iVar6 = iVar6 + 1;
            } while (iVar6 < *(int *)(DAT_100a67b4 + 4));
        }
        return (unsigned int)DAT_100a67b4 & 0xffffff00u;
    }
    if (iVar6 == 1) {
        iVar6 = 0;
        if (0 < *(int *)(DAT_100a67b8 + 4)) {
            do {
                puVar3 = (unsigned int *)FUN_10018060(DAT_100a67b8, iVar6);
                if ((*puVar3 == uVar2) && ((char)puVar3[2] == '\x01')) {
                    uVar5 = ((unsigned int)puVar3 & 0xffffff00u) | (unsigned int)(unsigned char)param_2;
                    if (param_2 == '\x01') {
                        FUN_10017ec0(DAT_100a67b8, (int)puVar3, '\0');
                        uVar5 = AppendToCollection(DAT_100aa6e4, puVar3);
                    }
                    return (uVar5 & 0xffffff00u) | 1u;
                }
                iVar6 = iVar6 + 1;
            } while (iVar6 < *(int *)(DAT_100a67b8 + 4));
        }
        return (unsigned int)DAT_100a67b8 & 0xffffff00u;
    }
    if ((iVar6 != 2) || ((int)uVar2 < 0)) {
        return uVar2 & 0xffffff00u;
    }
    iVar6 = (param_1 / 100) * 100;
    if (iVar6 == 8000) {
        iVar6 = 0;
        if (0 < *(int *)(DAT_100a67b4 + 4)) {
            do {
                piVar4 = (int *)FUN_10018060(DAT_100a67b4, iVar6);
                if (((char)piVar4[2] == '\x02') && (*piVar4 == 1)) {
                    uVar5 = 0;
                    if (param_2 == '\x01') {
                        FUN_10017ec0(DAT_100a67b4, (int)piVar4, '\0');
                        uVar5 = AppendToCollection(DAT_100aa6e0, piVar4);
                    }
                    return (uVar5 & 0xffffff00u) | 1u;
                }
                iVar6 = iVar6 + 1;
            } while (iVar6 < *(int *)(DAT_100a67b4 + 4));
        }
        return (unsigned int)DAT_100a67b4 & 0xffffff00u;
    }
    if (iVar6 == 0x2134) {
        iVar6 = 0;
        if (0 < *(int *)(DAT_100a67b4 + 4)) {
            do {
                piVar4 = (int *)FUN_10018060(DAT_100a67b4, iVar6);
                if (((char)piVar4[2] == '\x02') && (*piVar4 == 6)) {
                    uVar5 = 0;
                    if (param_2 == '\x01') {
                        FUN_10017ec0(DAT_100a67b4, (int)piVar4, '\0');
                        uVar5 = AppendToCollection(DAT_100aa6e0, piVar4);
                    }
                    return (uVar5 & 0xffffff00u) | 1u;
                }
                iVar6 = iVar6 + 1;
            } while (iVar6 < *(int *)(DAT_100a67b4 + 4));
        }
        return (unsigned int)DAT_100a67b4 & 0xffffff00u;
    }
    if (iVar6 != 0x254e) {
        *param_3 = *(unsigned int *)(DAT_10082bf0 + uVar2 * 0xc);
        return ((uVar2 * 3u) & 0xffffff00u) | 1u;
    }
    iVar6 = 0;
    if (0 < *(int *)(DAT_100a67b4 + 4)) {
        do {
            piVar4 = (int *)FUN_10018060(DAT_100a67b4, iVar6);
            if (((char)piVar4[2] == '\x02') && (*piVar4 == 5)) {
                uVar5 = 0;
                if (param_2 == '\x01') {
                    FUN_10017ec0(DAT_100a67b4, (int)piVar4, '\0');
                    uVar5 = AppendToCollection(DAT_100aa6e0, piVar4);
                }
                return (uVar5 & 0xffffff00u) | 1u;
            }
            iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(DAT_100a67b4 + 4));
    }
    return (unsigned int)DAT_100a67b4 & 0xffffff00u;
}
