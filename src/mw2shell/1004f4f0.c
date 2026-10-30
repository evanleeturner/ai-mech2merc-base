/* SPDX-License-Identifier: MIT */
/* mw2shell 1004f4f0 */
extern char DAT_1009bffc;
extern char DAT_1009c000;
extern char DAT_1009c004;
extern char DAT_1009c048[];
extern unsigned short DAT_1009c04c;
extern char s__b_03d_1009c038[];
extern char s__g_03d_1009c040[];

int __cdecl _sprintf(char *param_1, char *param_2, ...);
int __cdecl _atoi(char *param_1);
/* calling convention of FUN_1004f4c0 is not confirmed by the evidence; __stdcall assumed */
int __stdcall FUN_1004f4c0(int param_1, int *param_2, int param_3);

unsigned int __stdcall FUN_1004f4f0(int param_1, char *param_2, int *param_3, int param_4, int *param_5, int *param_6)
{
    char cVar1;
    unsigned char bVar2;
    unsigned int uVar3;
    unsigned int uVar4;
    int iVar5;
    char *pcVar6;
    int iVar7;
    int iVar8;
    char *pcVar9;
    char local_8[4];
    unsigned short tmp;
    unsigned int dtmp;

    if (param_4 <= *param_3) {
        return 0;
    }
    if (DAT_1009c000 == 1) {
        DAT_1009c000 = 0;
        _sprintf(param_2, s__b_03d_1009c038, *param_6);
        return 4;
    }
    if (DAT_1009c004 == 1) {
        DAT_1009c004 = 0;
        _sprintf(param_2, s__g_03d_1009c040, *param_6);
        return 4;
    }
    uVar3 = 0xffffffffu;
    pcVar6 = DAT_1009c048;
    do {
        pcVar9 = pcVar6;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar9 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar9;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar6 = pcVar9 - uVar3;
    pcVar9 = param_2;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        __builtin_memcpy(&dtmp, pcVar6, 4);
        __builtin_memcpy(pcVar9, &dtmp, 4);
        pcVar6 = pcVar6 + 4;
        pcVar9 = pcVar9 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar9 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar9 = pcVar9 + 1;
    }
    iVar5 = 0;
    iVar7 = *param_3;
    while (iVar7 < param_4) {
        do {
            bVar2 = *(unsigned char *)(param_1 + iVar7);
            if ((bVar2 == 0x20) || (bVar2 == 0x5c)) break;
            iVar7 = (int)((unsigned int)iVar7 + 1u);
            param_2[iVar5] = (char)(bVar2 & 0x7f);
            iVar5 = (int)((unsigned int)iVar5 + 1u);
        } while (iVar7 < param_4);
        if (param_4 <= iVar7) break;
        cVar1 = *(char *)(param_1 + iVar7);
        if (((cVar1 == '\\') || (cVar1 == ' ')) && (0 < iVar5)) {
            param_2[iVar5] = '\0';
            *param_3 = iVar7;
            iVar7 = FUN_1004f4c0(param_1, param_3, param_4);
            if (0 < iVar7) {
                do {
                    iVar5 = -1;
                    pcVar6 = param_2;
                    do {
                        pcVar9 = pcVar6;
                        if (iVar5 == 0) break;
                        iVar5 = iVar5 + -1;
                        pcVar9 = pcVar6 + 1;
                        cVar1 = *pcVar6;
                        pcVar6 = pcVar9;
                    } while (cVar1 != '\0');
                    iVar7 = iVar7 + -1;
                    tmp = DAT_1009c04c;
                    __builtin_memcpy(pcVar9 - 1, &tmp, 2);
                } while (iVar7 != 0);
            }
            return 4;
        }
        if (cVar1 != '\\') {
            return 4;
        }
        iVar8 = (int)((unsigned int)iVar7 + 1u);
        switch (*(unsigned char *)(param_1 + 1 + iVar7)) {
        case 0x41:
        case 0x61:
            local_8[0] = *(char *)(param_1 + 1 + iVar8);
            local_8[2] = 0;
            local_8[1] = *(char *)(param_1 + iVar7 + 3);
            DAT_1009bffc = 1;
            iVar5 = _atoi(local_8);
            *param_5 = iVar5;
            *param_3 = (int)((unsigned int)iVar7 + 4u);
            FUN_1004f4c0(param_1, param_3, param_4);
            return 6;
        case 0x42:
        case 0x62:
            local_8[0] = *(char *)(param_1 + 1 + iVar8);
            local_8[3] = 0;
            local_8[1] = *(char *)(param_1 + iVar7 + 3);
            local_8[2] = *(char *)(param_1 + iVar7 + 4);
            DAT_1009c000 = 1;
            iVar5 = _atoi(local_8);
            *param_6 = iVar5;
            *param_3 = (int)((unsigned int)iVar7 + 5u);
            FUN_1004f4c0(param_1, param_3, param_4);
            return 7;
        case 0x43:
        case 0x63:
            *param_3 = (int)((unsigned int)iVar7 + 2u);
            FUN_1004f4c0(param_1, param_3, param_4);
            return 2;
        default:
            param_2[iVar5] = '\\';
            iVar7 = (int)((unsigned int)iVar7 + 2u);
            iVar5 = (int)((unsigned int)iVar5 + 1u);
            break;
        case 0x47:
        case 0x67:
            local_8[0] = *(char *)(param_1 + 1 + iVar8);
            local_8[3] = 0;
            local_8[1] = *(char *)(param_1 + iVar7 + 3);
            local_8[2] = *(char *)(param_1 + iVar7 + 4);
            DAT_1009c004 = 1;
            iVar5 = _atoi(local_8);
            *param_6 = iVar5;
            *param_3 = (int)((unsigned int)iVar7 + 5u);
            FUN_1004f4c0(param_1, param_3, param_4);
            return 8;
        case 0x4c:
        case 0x6c:
            *param_3 = (int)((unsigned int)iVar7 + 2u);
            FUN_1004f4c0(param_1, param_3, param_4);
            return 9;
        case 0x4e:
        case 0x6e:
            *param_3 = (int)((unsigned int)iVar7 + 2u);
            FUN_1004f4c0(param_1, param_3, param_4);
            return 1;
        case 0x53:
        case 0x73:
            *param_3 = (int)((unsigned int)iVar7 + 2u);
            FUN_1004f4c0(param_1, param_3, param_4);
            return 3;
        case 0x54:
        case 0x74:
            *param_3 = (int)((unsigned int)iVar7 + 2u);
            FUN_1004f4c0(param_1, param_3, param_4);
            return 5;
        }
    }
    param_2[iVar5] = '\0';
    *param_3 = iVar7;
    return 0;
}
