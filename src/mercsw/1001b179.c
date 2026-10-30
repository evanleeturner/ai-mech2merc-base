/* SPDX-License-Identifier: MIT */
/* mercsw 1001b179 */
extern unsigned char *PTR_DAT_100aaf68;
extern int DAT_100ab07c;
extern int DAT_100ab318;
extern int DAT_100ab060;
extern int DAT_100ab074;
extern int DAT_100ab078;
extern int DAT_100b38fc;
/* DAT_101eb460 / _DAT_101eb464 / _DAT_101eb468 overlap: three adjacent ints,
   and &DAT_101eb460 is passed to FUN_10067af1 as an int * */
extern int DAT_101eb460[3];

int  __cdecl FUN_10006b20(int param_1);
int  __cdecl FUN_10006b9a(int param_1);
int  __cdecl FixedMul16(int param_1, int param_2);
void __cdecl FUN_1001a635(int param_1);
int  __cdecl FUN_10067af1(int *param_1);
int  __cdecl FUN_1001a58f(int *param_1);

void __cdecl FUN_1001b179(int param_1, int param_2, int param_3, int param_4, int param_5)
{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int local_18;

    iVar1 = FUN_10006b20(*(int *)(PTR_DAT_100aaf68 + 0xc));
    iVar2 = FUN_10006b9a(*(int *)(PTR_DAT_100aaf68 + 0xc));
    FUN_10006b20(*(int *)(PTR_DAT_100aaf68 + 0x10));
    iVar3 = FUN_10006b9a(*(int *)(PTR_DAT_100aaf68 + 0x10));
    if (DAT_100ab07c != 2) {
        if (DAT_100ab318 != 0) {
            iVar4 = FixedMul16(DAT_100ab060, iVar1);
            *(int *)PTR_DAT_100aaf68 =
                (int)((unsigned int)*(int *)PTR_DAT_100aaf68 - (unsigned int)(iVar4 >> 0xd));
            iVar4 = FixedMul16(DAT_100ab060, iVar2);
            *(int *)(PTR_DAT_100aaf68 + 8) =
                (int)((unsigned int)*(int *)(PTR_DAT_100aaf68 + 8) - (unsigned int)(iVar4 >> 0xd));
        }
        *(int *)(PTR_DAT_100aaf68 + 0x14) = 0;
        DAT_101eb460[2] = 0;
        DAT_101eb460[0] = DAT_100b38fc;
        DAT_100ab078 = DAT_100ab074;
        FUN_1001a635(0);
    }
    iVar4 = FixedMul16(param_3, iVar2);
    *(int *)PTR_DAT_100aaf68 =
        (int)((unsigned int)*(int *)PTR_DAT_100aaf68 + (unsigned int)(iVar4 >> 0xb));
    iVar4 = FixedMul16(param_3, iVar1);
    *(int *)(PTR_DAT_100aaf68 + 8) =
        (int)((unsigned int)*(int *)(PTR_DAT_100aaf68 + 8) - (unsigned int)(iVar4 >> 0xb));
    *(int *)(PTR_DAT_100aaf68 + 0x10) =
        (int)((unsigned int)*(int *)(PTR_DAT_100aaf68 + 0x10) - (unsigned int)param_5);
    if (*(int *)(PTR_DAT_100aaf68 + 0x10) < 0x5a0001) {
        if (*(int *)(PTR_DAT_100aaf68 + 0x10) < -0x5a0000) {
            *(unsigned int *)(PTR_DAT_100aaf68 + 0x10) = 0xffa60000u;
        }
    }
    else {
        *(int *)(PTR_DAT_100aaf68 + 0x10) = 0x5a0000;
    }
    *(int *)(PTR_DAT_100aaf68 + 4) =
        (int)((unsigned int)*(int *)(PTR_DAT_100aaf68 + 4) + (unsigned int)param_1 * 4u);
    DAT_101eb460[1] = (int)((unsigned int)param_2 << 4);
    local_18 = FUN_10067af1((int *)&DAT_101eb460[0]);
    if ((local_18 < 0x20) && (-0x20 < local_18)) {
        local_18 = 0;
    }
    *(int *)(PTR_DAT_100aaf68 + 0xc) =
        (int)((unsigned int)*(int *)(PTR_DAT_100aaf68 + 0xc) + (unsigned int)param_4);
    iVar4 = iVar3;
    iVar1 = FixedMul16(local_18, iVar1);
    iVar1 = FixedMul16(iVar1 >> 0xd, iVar4);
    *(int *)PTR_DAT_100aaf68 =
        (int)((unsigned int)*(int *)PTR_DAT_100aaf68 - (unsigned int)(iVar1 >> 0xd));
    iVar1 = FixedMul16(local_18, iVar2);
    iVar1 = FixedMul16(iVar1 >> 0xd, iVar3);
    *(int *)(PTR_DAT_100aaf68 + 8) =
        (int)((unsigned int)*(int *)(PTR_DAT_100aaf68 + 8) - (unsigned int)(iVar1 >> 0xd));
    iVar1 = FUN_1001a58f((int *)PTR_DAT_100aaf68);
    if (*(int *)(PTR_DAT_100aaf68 + 4) < iVar1) {
        iVar2 = *(int *)(PTR_DAT_100aaf68 + 4);
        if (*(int *)(PTR_DAT_100aaf68 + 4) <= iVar1) {
            iVar2 = iVar1;
        }
        *(int *)(PTR_DAT_100aaf68 + 4) = iVar2;
    }
    return;
}
