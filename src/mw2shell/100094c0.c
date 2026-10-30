/* SPDX-License-Identifier: MIT */
/* mw2shell 100094c0 */
extern int DAT_100ae180;
extern char DAT_100ad6e0[];
extern unsigned int DAT_10083510[0x215];
extern char DAT_100ad508[];
extern int DAT_100ae148;
extern int DAT_10082d6c;
extern int *DAT_10082d08;
extern int *DAT_10082d0c;

void __cdecl FUN_10006d80(char *param_1);
void __cdecl FUN_10063ea0(int *param_1);
void __cdecl FUN_10063de0(int *param_1);

void __stdcall FUN_100094c0(void)
{
    char cVar1;
    int iVar2;
    char *pcVar3;
    unsigned int uVar4;
    unsigned int uVar5;
    char *pcVar6;

    if (DAT_100ae180 == 0) {
        DAT_100ae180 = 200;
    }
    iVar2 = (int)((unsigned int)DAT_100ae180 - 1u);
    if (-1 < iVar2) {
        pcVar3 = (char *)((unsigned int)DAT_100ae180 + 0x100ad6dfu + (unsigned int)iVar2 * 0xcu);
        DAT_100ae180 = iVar2;
        do {
            iVar2 = DAT_100ae180;
            if (*pcVar3 != '\0') break;
            pcVar3 = pcVar3 + -0xd;
            DAT_100ae180 = (int)((unsigned int)DAT_100ae180 - 1u);
            iVar2 = DAT_100ae180;
        } while ((char *)0x100ad6df < pcVar3);
    }
    DAT_100ae180 = iVar2;
    if (DAT_100ae180 < 0) {
        DAT_100ae180 = 0;
    }
    FUN_10006d80((char *)((unsigned int)DAT_100ad6e0 + (unsigned int)DAT_100ae180 * 0xdu));
    ((char *)DAT_10083510)[0] = 0x7e;
    uVar4 = 0xffffffff;
    pcVar3 = *(char **)(*(int *)(DAT_100ae148 + DAT_10082d6c * 4) + 0xc);
    do {
        pcVar6 = pcVar3;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar6 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar6;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar3 = pcVar6 + -uVar4;
    pcVar6 = DAT_100ad508;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        __builtin_memcpy(pcVar6, pcVar3, 4);
        pcVar3 = pcVar3 + 4;
        pcVar6 = pcVar6 + 4;
    }
    uVar5 = 0;
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar6 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar6 = pcVar6 + 1;
    }
    iVar2 = -1;
    pcVar3 = DAT_100ad508;
    do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (iVar2 != -2) {
        do {
            if ((DAT_100ad508[uVar5] == ' ') &&
                (DAT_100ad508[uVar5 + 1] == ' ')) break;
            uVar5 = uVar5 + 1;
            uVar4 = 0xffffffff;
            pcVar3 = DAT_100ad508;
            do {
                if (uVar4 == 0) break;
                uVar4 = uVar4 - 1;
                cVar1 = *pcVar3;
                pcVar3 = pcVar3 + 1;
            } while (cVar1 != '\0');
        } while (uVar5 < ~uVar4 - 1);
    }
    uVar4 = 0xffffffff;
    DAT_100ad508[uVar5] = 0;
    pcVar3 = DAT_100ad508;
    do {
        pcVar6 = pcVar3;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar6 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar6;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar3 = pcVar6 + -uVar4;
    pcVar6 = (char *)DAT_10083510 + 1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        __builtin_memcpy(pcVar6, pcVar3, 4);
        pcVar3 = pcVar3 + 4;
        pcVar6 = pcVar6 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar6 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar6 = pcVar6 + 1;
    }
    FUN_10063ea0(DAT_10082d08);
    DAT_10082d08 = (int *)0;
    FUN_10063de0(DAT_10082d0c);
    return;
}
