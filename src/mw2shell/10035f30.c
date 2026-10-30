/* SPDX-License-Identifier: MIT */
/* mw2shell 10035f30 */
extern char *PTR_DAT_10093b2c;
extern char *PTR_DAT_10083d8c[];
extern unsigned int DAT_10093b30;
extern unsigned short DAT_10093b34;

int __cdecl __strnicmp(const char *param_1, const char *param_2, unsigned int param_3);
char *__cdecl _strncpy(char *param_1, const char *param_2, unsigned int param_3);

unsigned int __cdecl FUN_10035f30(int param_1, char *param_2, char *param_3, char *param_4)
{
    char cVar2;
    int iVar3;
    unsigned int uVar4;
    unsigned int uVar5;
    int iVar6;
    int iVar9;
    char *pcVar8;
    char *pcVar10;
    unsigned int uTmp;

    if (param_1 < 0) {
        param_1 = *(int *)(PTR_DAT_10093b2c + 4);
    } else {
        *(int *)(PTR_DAT_10093b2c + 4) = param_1;
    }
    if (param_3 != (char *)0) {
        uVar4 = 0xffffffffu;
        do {
            pcVar8 = param_3;
            if (uVar4 == 0) {
                break;
            }
            uVar4 = uVar4 - 1u;
            pcVar8 = param_3 + 1;
            cVar2 = *param_3;
            param_3 = pcVar8;
        } while (cVar2 != '\0');
        uVar4 = ~uVar4;
        pcVar8 = pcVar8 - uVar4;
        pcVar10 = PTR_DAT_10093b2c + (int)((unsigned int)param_1 * 0x40u) + 0x28;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1u) {
            __builtin_memcpy(&uTmp, pcVar8, 4);
            __builtin_memcpy(pcVar10, &uTmp, 4);
            pcVar8 = pcVar8 + 4;
            pcVar10 = pcVar10 + 4;
        }
        for (uVar4 = uVar4 & 3u; uVar4 != 0; uVar4 = uVar4 - 1u) {
            *pcVar10 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar10 = pcVar10 + 1;
        }
    }
    if (param_4 != (char *)0) {
        uVar4 = 0xffffffffu;
        do {
            pcVar8 = param_4;
            if (uVar4 == 0) {
                break;
            }
            uVar4 = uVar4 - 1u;
            pcVar8 = param_4 + 1;
            cVar2 = *param_4;
            param_4 = pcVar8;
        } while (cVar2 != '\0');
        uVar4 = ~uVar4;
        pcVar8 = pcVar8 - uVar4;
        pcVar10 = PTR_DAT_10093b2c + (int)((unsigned int)param_1 * 0x40u) + 0x3e;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1u) {
            __builtin_memcpy(&uTmp, pcVar8, 4);
            __builtin_memcpy(pcVar10, &uTmp, 4);
            pcVar8 = pcVar8 + 4;
            pcVar10 = pcVar10 + 4;
        }
        for (uVar4 = uVar4 & 3u; uVar4 != 0; uVar4 = uVar4 - 1u) {
            *pcVar10 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar10 = pcVar10 + 1;
        }
    }
    if (param_2 != (char *)0) {
        iVar9 = 0;
        if (PTR_DAT_10083d8c[0] != (char *)0) {
            do {
                iVar3 = __strnicmp(param_2, PTR_DAT_10083d8c[iVar9 * 10], 3);
                if (iVar3 == 0) {
                    break;
                }
                iVar9 = (int)((unsigned int)iVar9 + 1u);
            } while (PTR_DAT_10083d8c[iVar9 * 10] != (char *)0);
        }
        if (PTR_DAT_10083d8c[iVar9 * 10] == (char *)0) {
            if (param_1 != 0) {
                if ((int)((unsigned int)*(int *)(PTR_DAT_10093b2c + 0xc) - (unsigned int)param_1) == 1) {
                    *(int *)(PTR_DAT_10093b2c + 0xc) =
                        (int)((unsigned int)*(int *)(PTR_DAT_10093b2c + 0xc) - 1u);
                    return 0xffffffffu;
                }
            }
            return (unsigned int)(*(int *)(PTR_DAT_10093b2c + 0xc) <= param_1);
        }
        if (*(int *)(PTR_DAT_10093b2c + 0x10) <
            *(int *)((char *)PTR_DAT_10083d8c + (int)((unsigned int)iVar9 * 0x28u) + 0xc)) {
            return 0;
        }
        iVar6 = (int)((unsigned int)param_1 * 0x40u);
        _strncpy(PTR_DAT_10093b2c + iVar6 + 0x18, param_2, 8);
        PTR_DAT_10093b2c[iVar6 + 0x20] = 0;
        iVar3 = -1;
        do {
            if (iVar3 == 0) {
                break;
            }
            iVar3 = (int)((unsigned int)iVar3 - 1u);
            cVar2 = *param_2;
            param_2 = param_2 + 1;
        } while (cVar2 != '\0');
        if (iVar3 == -5) {
            iVar3 = -1;
            pcVar8 = PTR_DAT_10093b2c + iVar6 + 0x18;
            do {
                pcVar10 = pcVar8;
                if (iVar3 == 0) {
                    break;
                }
                iVar3 = (int)((unsigned int)iVar3 - 1u);
                pcVar10 = pcVar8 + 1;
                cVar2 = *pcVar8;
                pcVar8 = pcVar10;
            } while (cVar2 != '\0');
            __builtin_memcpy(pcVar10 - 1, &DAT_10093b30, 4);
            __builtin_memcpy(pcVar10 + 3, &DAT_10093b34, 2);
        }
        *(int *)(PTR_DAT_10093b2c + iVar6 + 0x14) = iVar9;
    }
    *(int *)(PTR_DAT_10093b2c + 0xc) = 0;
    iVar9 = 0;
    if (0 < *(int *)(PTR_DAT_10093b2c + 8)) {
        iVar3 = 0;
        do {
            if (-1 < *(int *)(PTR_DAT_10093b2c + iVar3 + 0x14)) {
                *(int *)(PTR_DAT_10093b2c + 0xc) =
                    (int)((unsigned int)*(int *)(PTR_DAT_10093b2c + 0xc) + 1u);
            }
            iVar3 = (int)((unsigned int)iVar3 + 0x40u);
            iVar9 = (int)((unsigned int)iVar9 + 1u);
        } while (iVar9 < *(int *)(PTR_DAT_10093b2c + 8));
    }
    return 0xffffffffu;
}
