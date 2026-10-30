/* SPDX-License-Identifier: MIT */
/* mercsw 10010683 */
extern int DAT_100af17c;
extern int DAT_101686f0;
extern int DAT_100b38fc;
extern int *DAT_101ec430[];
extern unsigned char *PTR_DAT_100af0b4;

void __stdcall RaiseException(DWORD, DWORD, DWORD, const DWORD *);

unsigned short * __cdecl FUN_1008668b(int param_1, int param_2, int *param_3);
void __cdecl FUN_100105ba(int param_1);
int __cdecl FUN_1005b6c7(int param_1);
unsigned int __cdecl FUN_10056fc4(int *param_1, int param_2, int param_3, int param_4, int param_5);

void __cdecl FUN_10010683(int *param_1, int param_2, int param_3, int param_4)
{
    int *piVar1;
    unsigned short *puVar2;
    int iVar3;
    unsigned int local_10;
    unsigned int local_8;

    if ((((param_2 < 0) || (param_2 < 7)) &&
         (piVar1 = DAT_101ec430[param_2], piVar1 != (int *)0)) && (*piVar1 != 1)) {
        if (piVar1[6] == 0) {
            puVar2 = FUN_1008668b(DAT_100af17c,
                                  (int)((unsigned int)piVar1[5] + (unsigned int)DAT_101686f0),
                                  (int *)PTR_DAT_100af0b4);
            piVar1[6] = (int)puVar2;
            if (piVar1[6] == 0) {
                FUN_100105ba(param_2);
                return;
            }
            iVar3 = FUN_1005b6c7(piVar1[6]);
            piVar1[1] = iVar3;
        }
        if (*piVar1 == 0) {
            *piVar1 = 2;
        }
        if (piVar1[3] == 0) {
            local_8 = 0;
            piVar1[3] = DAT_100b38fc;
        }
        else {
            int num = (int)((unsigned int)DAT_100b38fc - (unsigned int)piVar1[3]);
            int den = piVar1[2];
            if (den == 0 || (num == (int)0x80000000 && den == -1)) {
                RaiseException(0xC0000094UL, 0, 0, NULL);
            }
            local_8 = (unsigned int)(num / den);
            if ((int)local_8 < 0) {
                local_8 = 0;
            }
        }
        if ((*(unsigned char *)(piVar1 + 4) & 1) == 0) {
            int den = piVar1[1];
            if (den == 0 || ((int)local_8 == (int)0x80000000 && den == -1)) {
                RaiseException(0xC0000094UL, 0, 0, NULL);
            }
            local_10 = (unsigned int)((int)local_8 % den) & 0xffff;
        }
        else if ((int)local_8 < piVar1[1]) {
            local_10 = local_8 & 0xffff;
        }
        else if ((*(unsigned char *)(piVar1 + 4) & 2) == 0) {
            *piVar1 = 1;
        }
        else {
            local_10 = (unsigned int)(unsigned short)((short)piVar1[1] - 1);
            *piVar1 = 3;
        }
        if (*piVar1 == 1) {
            if ((*(unsigned char *)(piVar1 + 4) & 8) != 0) {
                FUN_100105ba(param_2);
            }
        }
        else {
            FUN_10056fc4(param_1, piVar1[6], (int)(local_10 & 0xffff), param_3, param_4);
        }
    }
    return;
}
