/* SPDX-License-Identifier: MIT */
/* mw2shell 10009370 */
extern int DAT_100ae180;
extern char DAT_100ad6e0[];
extern char DAT_100ad660[];
extern char DAT_100ae108[];
extern char DAT_10083510[];
extern int DAT_100ae148;
extern int DAT_10082d6c;
extern int *DAT_10082d08;
extern int *DAT_10082d0c;

void __cdecl FUN_10006d80(char *param_1);
void __cdecl FUN_10063ea0(int *param_1);
void __cdecl FUN_10063de0(int *param_1);

void __stdcall FUN_10009370(void)
{
    char cVar1;
    int iVar2;
    char *pcVar3;
    unsigned int uVar4;
    unsigned int uVar5;
    char *pcVar6;

    iVar2 = (int)((unsigned int)DAT_100ae180 + 1u);
    if (iVar2 < 200) {
        pcVar3 = (char *)((unsigned int)DAT_100ae180 + 0x100ad6e1u + (unsigned int)iVar2 * 0xcu);
        DAT_100ae180 = iVar2;
        do {
            iVar2 = DAT_100ae180;
            if (*pcVar3 != '\0') break;
            pcVar3 = pcVar3 + 0xd;
            DAT_100ae180 = (int)((unsigned int)DAT_100ae180 + 1u);
            iVar2 = DAT_100ae180;
        } while (pcVar3 < DAT_100ae108);
    }
    DAT_100ae180 = iVar2;
    if (199 < DAT_100ae180) {
        DAT_100ae180 = 0;
    }
    FUN_10006d80(DAT_100ad6e0 + (unsigned int)DAT_100ae180 * 0xdu);
    DAT_10083510[0] = 0x7e;

    uVar4 = 0xffffffffu;
    pcVar3 = *(char **)(*(int *)((unsigned int)DAT_100ae148 + (unsigned int)DAT_10082d6c * 4u) + 0xc);
    do {
        pcVar6 = pcVar3;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1u;
        pcVar6 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar6;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar3 = pcVar6 - uVar4;
    pcVar6 = DAT_100ad660;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1u) {
        __builtin_memcpy(pcVar6, pcVar3, 4);
        pcVar3 = pcVar3 + 4;
        pcVar6 = pcVar6 + 4;
    }
    uVar5 = 0;
    for (uVar4 = uVar4 & 3u; uVar4 != 0; uVar4 = uVar4 - 1u) {
        *pcVar6 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar6 = pcVar6 + 1;
    }

    iVar2 = -1;
    pcVar3 = DAT_100ad660;
    do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (iVar2 != -2) {
        do {
            if ((DAT_100ad660[uVar5] == ' ') && (DAT_100ad660[uVar5 + 1] == ' ')) break;
            uVar5 = uVar5 + 1u;
            uVar4 = 0xffffffffu;
            pcVar3 = DAT_100ad660;
            do {
                if (uVar4 == 0) break;
                uVar4 = uVar4 - 1u;
                cVar1 = *pcVar3;
                pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
        } while (uVar5 < ~uVar4 - 1u);
    }
    uVar4 = 0xffffffffu;
    DAT_100ad660[uVar5] = 0;
    pcVar3 = DAT_100ad660;
    do {
        pcVar6 = pcVar3;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1u;
        pcVar6 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar6;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar3 = pcVar6 - uVar4;
    pcVar6 = DAT_10083510 + 1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1u) {
        __builtin_memcpy(pcVar6, pcVar3, 4);
        pcVar3 = pcVar3 + 4;
        pcVar6 = pcVar6 + 4;
    }
    for (uVar4 = uVar4 & 3u; uVar4 != 0; uVar4 = uVar4 - 1u) {
        *pcVar6 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar6 = pcVar6 + 1;
    }
    FUN_10063ea0(DAT_10082d08);
    DAT_10082d08 = (int *)0;
    FUN_10063de0(DAT_10082d0c);
    return;
}
