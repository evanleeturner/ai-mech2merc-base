/* SPDX-License-Identifier: MIT */
/* mercsw 1001648d */
extern int DAT_100adf38;
extern int DAT_100eef40[];
extern int DAT_100aa568;
extern int _DAT_100aa56c;

int __cdecl FUN_10011e60(int, int, int);
int __cdecl FUN_10067d51(int *);
void __cdecl FUN_10016cdd(int *, int, int, int, int, int);

void __cdecl FUN_1001648d(int param_1)
{
    int *piVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int local_4c;
    int local_40;

    piVar1 = *(int **)(param_1 + 0xa4);
    iVar8 = *(int *)(param_1 + 0x74);
    iVar2 = *(int *)(param_1 + 0x78);
    iVar3 = *(int *)(param_1 + 0x7c);
    iVar4 = *(int *)(param_1 + 0x74);
    iVar5 = *(int *)(param_1 + 0x78);
    iVar7 = *(int *)(param_1 + 0x7c);
    iVar6 = (int)((unsigned int)*(int *)(param_1 + 0x80) - 1u);
    _DAT_100aa56c =
        FUN_10011e60(*(int *)(*(int *)(DAT_100eef40[DAT_100adf38] + 0x20) + 0x3cc), iVar7, 100);
    local_40 = FUN_10067d51((int *)&DAT_100aa568);
    local_40 = local_40 >> 0x10;
    if (local_40 < iVar7) {
        if (local_40 < 1) {
            FUN_10016cdd(piVar1, iVar8, iVar2, iVar3, iVar6, 7);
        }
        else {
            if (local_40 < (iVar7 >> 1)) {
                local_4c = 7;
            }
            else {
                local_40 = (int)((unsigned int)iVar7 - (unsigned int)local_40);
                local_4c = 0xb;
            }
            iVar7 = (int)((unsigned int)iVar7 + (unsigned int)local_40 * 0xfffffffeu);
            iVar8 = (int)((unsigned int)local_40 + (unsigned int)iVar4 + 1u);
            FUN_10016cdd(piVar1, iVar4, iVar5, local_40, iVar6, 3);
            FUN_10016cdd(piVar1, iVar8, iVar5, iVar7, iVar6, local_4c);
            FUN_10016cdd(piVar1, (int)((unsigned int)iVar8 + (unsigned int)iVar7), iVar5, local_40, iVar6, 3);
        }
    }
    else {
        FUN_10016cdd(piVar1, iVar8, iVar2, iVar3, iVar6, 0xb);
    }
    return;
}
