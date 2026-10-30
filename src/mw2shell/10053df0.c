/* SPDX-License-Identifier: MIT */
/* mw2shell 10053df0 */
extern int DAT_100bfed8[64];

int __cdecl EntryAddress120_Likely(int param_1);
int __cdecl __strcmpi(const char *param_1, const char *param_2);
char * __cdecl _strncpy(char *param_1, const char *param_2, unsigned int param_3);

void __cdecl RemapEntryIndicesByName_Likely(int param_1)
{
    int *piVar1;
    int iVar2;
    int iVar3;
    int *piVar4;
    int *piVar5;
    char *_Str1;
    int iVar6;
    int local_44;
    int local_40[16];

    piVar1 = DAT_100bfed8;
    piVar5 = local_40;
    do {
        if (*piVar1 == -1) {
            *piVar5 = 0;
        }
        else {
            *piVar5 = 1;
            *piVar1 = -1;
        }
        piVar5 = piVar5 + 1;
        piVar1 = piVar1 + 4;
    } while (piVar1 < DAT_100bfed8 + 64);

    local_44 = 0;
    piVar5 = DAT_100bfed8;
    do {
        iVar2 = EntryAddress120_Likely(local_44);
        if (iVar2 == 0) break;
        iVar6 = 0;
        _Str1 = (char *)(DAT_100bfed8 + 1);
        do {
            if (*(char *)(iVar2 + 0x50) == '\0') break;
            iVar3 = __strcmpi(_Str1, (char *)(iVar2 + 0x50));
            if ((iVar3 == 0) && (*piVar5 == -1)) {
                DAT_100bfed8[iVar6 * 4] = local_44;
                break;
            }
            _Str1 = _Str1 + 0x10;
            iVar6 = iVar6 + 1;
        } while (_Str1 < (char *)DAT_100bfed8 + 0x104);
        piVar5 = piVar5 + 4;
        local_44 = local_44 + 1;
    } while (piVar5 < DAT_100bfed8 + 64);

    piVar1 = DAT_100bfed8;
    piVar5 = local_40;
    do {
        if (((*piVar5 != 0) && (*piVar1 == -1)) && ((char)piVar1[1] != '\0')) {
            iVar2 = 0;
            do {
                iVar6 = EntryAddress120_Likely(iVar2);
                if ((iVar6 != 0) && (*(char *)(iVar6 + 4) == 'j')) {
                    iVar6 = 0;
                    piVar4 = DAT_100bfed8;
                    do {
                        if (*piVar4 == iVar2) break;
                        piVar4 = piVar4 + 4;
                        iVar6 = iVar6 + 1;
                    } while (piVar4 < DAT_100bfed8 + 64);
                    if (iVar6 == 0x10) {
                        *piVar1 = iVar2;
                        break;
                    }
                }
                iVar2 = iVar2 + 1;
            } while (iVar2 < 0x10);
        }
        piVar1 = piVar1 + 4;
        piVar5 = piVar5 + 1;
    } while (piVar5 < local_40 + 16);

    iVar2 = 0x94;
    piVar5 = (int *)(param_1 + 4);
    do {
        if ((-1 < *piVar5) && (iVar6 = EntryAddress120_Likely(DAT_100bfed8[*piVar5 * 4]), iVar6 != 0)) {
            if ((piVar5[-1] == 0) && (piVar5[4] == -1)) {
                if (*(int *)(iVar6 + 0x5c) <= piVar5[3]) {
LAB_10053f5e:
                    *piVar5 = -1;
                }
            }
            else if (*(int *)(iVar6 + 0x60) <= piVar5[3]) goto LAB_10053f5e;
            if (-1 < *piVar5) {
                *piVar5 = DAT_100bfed8[*piVar5 * 4];
            }
        }
        piVar5 = piVar5 + 6;
        iVar2 = iVar2 + -1;
        if (iVar2 == 0) {
            iVar2 = 0;
            piVar5 = DAT_100bfed8;
            do {
                iVar6 = EntryAddress120_Likely(iVar2);
                if (iVar6 == 0) {
                    *piVar5 = -1;
                    *(unsigned char *)(piVar5 + 1) = 0;
                }
                else {
                    *piVar5 = iVar2;
                    _strncpy((char *)(piVar5 + 1), (char *)(iVar6 + 0x50), 0x10);
                }
                piVar5 = piVar5 + 4;
                iVar2 = iVar2 + 1;
            } while (piVar5 < DAT_100bfed8 + 64);
            return;
        }
    } while (1);
}
