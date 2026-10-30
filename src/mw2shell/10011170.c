/* SPDX-License-Identifier: MIT */
/* mw2shell 10011170 */
extern unsigned int DAT_100b07f0;
extern unsigned int DAT_100b07f8;
extern char DAT_100b0a30[];
extern unsigned int DAT_1008e964;
extern char DAT_1008e968;
extern unsigned int DAT_1008e96c;
extern int DAT_1008e950;
extern char DAT_1008e970[];
extern char s_mw2prm_cfg_1008e974[];
extern char s_launch_scr_100a6b90[];

void __cdecl FUN_10035eb0(void);
void * __cdecl FID_conflict___wfopen(const char *param_1, const char *param_2);
unsigned int __cdecl _fread(void *param_1, unsigned int param_2, unsigned int param_3, void *param_4);
int __cdecl _fclose(void *param_1);

void __cdecl FUN_10011170(unsigned int param_1, unsigned char param_2, char *param_3)
{
    char cVar1;
    char cVar2;
    void *_File;
    unsigned int uVar3;
    unsigned int uVar4;
    int iVar5;
    char *pcVar6;
    char *pcVar7;
    char *pcVar8;
    unsigned int tmp;

    uVar3 = 0xffffffff;
    DAT_100b07f0 = param_1;
    DAT_100b07f8 = (unsigned int)param_2;
    do {
        pcVar6 = param_3;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar6 = param_3 + 1;
        cVar1 = *param_3;
        param_3 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar6 = pcVar6 + -uVar3;
    pcVar8 = DAT_100b0a30;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        __builtin_memcpy(&tmp, pcVar6, 4);
        __builtin_memcpy(pcVar8, &tmp, 4);
        pcVar6 = pcVar6 + 4;
        pcVar8 = pcVar8 + 4;
    }
    for (uVar3 = uVar3 & 3; cVar1 = DAT_1008e968, uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar8 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar8 = pcVar8 + 1;
    }
    iVar5 = -1;
    pcVar6 = DAT_100b0a30;
    do {
        pcVar8 = pcVar6;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar8 = pcVar6 + 1;
        cVar2 = *pcVar6;
        pcVar6 = pcVar8;
    } while (cVar2 != '\0');
    tmp = DAT_1008e964;
    __builtin_memcpy(pcVar8 + -1, &tmp, 4);
    pcVar8[3] = cVar1;
    uVar3 = 0xffffffff;
    pcVar6 = s_launch_scr_100a6b90;
    do {
        pcVar8 = pcVar6;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar8 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    iVar5 = -1;
    pcVar6 = DAT_100b0a30;
    do {
        pcVar7 = pcVar6;
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        pcVar7 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    pcVar6 = pcVar8 + -uVar3;
    pcVar8 = pcVar7 + -1;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        __builtin_memcpy(&tmp, pcVar6, 4);
        __builtin_memcpy(pcVar8, &tmp, 4);
        pcVar6 = pcVar6 + 4;
        pcVar8 = pcVar8 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar8 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar8 = pcVar8 + 1;
    }
    if (DAT_1008e950 != 0) {
        iVar5 = -1;
        pcVar6 = DAT_100b0a30;
        do {
            pcVar8 = pcVar6;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar8 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar8;
        } while (cVar1 != '\0');
        tmp = DAT_1008e96c;
        __builtin_memcpy(pcVar8 + -1, &tmp, 4);
    }
    FUN_10035eb0();
    _File = FID_conflict___wfopen(s_mw2prm_cfg_1008e974, DAT_1008e970);
    if (_File != (void *)0) {
        _fread(&DAT_100b07f0, 0x344, 1, _File);
        _fclose(_File);
    }
    return;
}
