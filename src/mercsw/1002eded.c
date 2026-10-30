/* SPDX-License-Identifier: MIT */
/* mercsw 1002eded */
extern int DAT_100adf38;
extern int DAT_100eef40[];
extern int DAT_100af17c;
extern int DAT_101686f0;
extern int *PTR_DAT_100af0b8;
extern int DAT_10114e18;
extern unsigned char DAT_100eebb0[];
extern double _DAT_100a1140;
extern char s___2f_m_100ada38[];

unsigned short * __cdecl FUN_1008668b(int, int, int *);
int __cdecl FUN_1005aae4(int);
void __cdecl FUN_1005acaa(int *, int, int, int, unsigned char *, int);
int __cdecl _sprintf(char *, const char *, ...);
void __cdecl FUN_1008664f(int, int *);
void __cdecl FUN_100169fb(int);

void __cdecl FUN_1002eded(int param_1)
{
    int *piVar1;
    unsigned short *puVar2;
    unsigned char *pbVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    unsigned short *puVar7;
    unsigned char *puVar8;
    unsigned char local_48[64];
    int local_8;

    piVar1 = *(int **)(DAT_100eef40[DAT_100adf38] + 0x20);
    if ((*(short *)(param_1 + 4) != 0) &&
        (puVar2 = FUN_1008668b(DAT_100af17c, DAT_101686f0 + 1, PTR_DAT_100af0b8),
         puVar2 != (unsigned short *)0)) {
        local_8 = (int)(((unsigned int)*(int *)(*piVar1 + 0x54) - (unsigned int)piVar1[0x100]) * 1000u);
        (**(void (__cdecl **)(int))(param_1 + 0xcc))(param_1);
        pbVar3 = (unsigned char *)(param_1 + 0x10);
        puVar8 = DAT_100eebb0;
        puVar7 = puVar2;
        iVar4 = FUN_1005aae4((int)puVar2);
        iVar5 = FUN_1005aae4((int)puVar2);
        FUN_1005acaa(*(int **)(param_1 + 0xa4), **(int **)(DAT_10114e18 + 0xa8),
                     (int)((unsigned int)iVar4 + (unsigned int)iVar5 +
                           (unsigned int)*(int *)(*(int *)(DAT_10114e18 + 0xa8) + 4)),
                     (int)puVar7, pbVar3, (int)puVar8);
        _sprintf((char *)local_48, s___2f_m_100ada38, (double)local_8 / _DAT_100a1140);
        pbVar3 = local_48;
        puVar8 = DAT_100eebb0;
        puVar7 = puVar2;
        iVar4 = FUN_1005aae4((int)puVar2);
        iVar5 = FUN_1005aae4((int)puVar2);
        iVar6 = FUN_1005aae4((int)puVar2);
        FUN_1005acaa(*(int **)(param_1 + 0xa4), **(int **)(DAT_10114e18 + 0xa8),
                     (int)((unsigned int)iVar4 + (unsigned int)iVar5 + (unsigned int)iVar6 +
                           (unsigned int)*(int *)(*(int *)(DAT_10114e18 + 0xa8) + 4)),
                     (int)puVar7, pbVar3, (int)puVar8);
        if (-1 < *(int *)(*(int *)(DAT_100eef40[DAT_100adf38] + 0x20) + 0x3f4)) {
            (**(void (__cdecl **)(int))(param_1 + 0xcc))(param_1);
            FUN_1005acaa(*(int **)(param_1 + 0xa4), **(int **)(DAT_10114e18 + 0xa8),
                         *(int *)(*(int *)(DAT_10114e18 + 0xa8) + 4), (int)puVar2,
                         (unsigned char *)(param_1 + 0x10), (int)DAT_100eebb0);
            FUN_1008664f(DAT_101686f0 + 1, PTR_DAT_100af0b8);
            FUN_100169fb(param_1);
        }
    }
    return;
}
