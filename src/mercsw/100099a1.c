/* SPDX-License-Identifier: MIT */
/* mercsw 100099a1 */
extern double _DAT_100a1048;
extern int DAT_100af17c;
extern int DAT_101686f0;
extern int DAT_100adf38;
extern int DAT_100eef40[];
extern int DAT_10215658;
extern unsigned char *PTR_DAT_100af0b8;
extern char s__s_3_1lf_s_100a7318[];
extern char s__s_3_1lf_100a7324[];

unsigned short * __cdecl FUN_1008668b(int param_1, int param_2, int *param_3);
int __cdecl FUN_10002570(unsigned int param_1, int param_2);
int __cdecl _sprintf(char *param_1, const char *param_2, ...);
void __cdecl FUN_1005acaa(int *param_1, unsigned int param_2, unsigned int param_3, int param_4, unsigned char *param_5, int param_6);
void __cdecl FUN_1008664f(int param_1, int *param_2);

void __cdecl FUN_100099a1(unsigned int *param_1)
{
    int *piVar1;
    unsigned short *puVar2;
    unsigned int uVar3;
    int iVar4;
    int local_14;
    unsigned int local_10;

    piVar1 = (int *)*param_1;
    iVar4 = DAT_100eef40[DAT_100adf38];
    puVar2 = FUN_1008668b(DAT_100af17c, (int)(param_1[0xc] + DAT_101686f0), (int *)PTR_DAT_100af0b8);
    if (puVar2 != (unsigned short *)0) {
        if (param_1[6] != param_1[7]) {
            uVar3 = (unsigned int)((int)param_1[6] / 2);
            if ((int)uVar3 < 100000) {
                local_14 = FUN_10002570(uVar3, 100);
                local_10 = param_1[0x14];
            }
            else {
                local_14 = FUN_10002570(uVar3, 100000);
                local_10 = param_1[0x15];
            }
            _sprintf((char *)param_1[0x10], s__s_3_1lf_s_100a7318, param_1[0xf],
                     (double)local_14 / _DAT_100a1048, local_10);
            param_1[7] = param_1[6];
        }
        FUN_1005acaa(piVar1, param_1[0x18], param_1[0x19], (int)puVar2,
                     (unsigned char *)param_1[0x10], 0x100eebb0);
        if (DAT_10215658 == 4) {
            iVar4 = (*(int *)(iVar4 + 0x60) % 0x1680000 + 0x1680000) % 0x1680000;
            if ((int)param_1[0x13] != iVar4) {
                _sprintf((char *)param_1[0x12], s__s_3_1lf_100a7324, param_1[0x11],
                         (double)iVar4 / _DAT_100a1048);
                param_1[0x13] = (unsigned int)iVar4;
            }
            FUN_1005acaa(piVar1, param_1[0x1a], param_1[0x1b], (int)puVar2,
                         (unsigned char *)param_1[0x12], 0x100eebb0);
        }
        FUN_1008664f((int)(param_1[0xc] + DAT_101686f0), (int *)PTR_DAT_100af0b8);
    }
    return;
}
