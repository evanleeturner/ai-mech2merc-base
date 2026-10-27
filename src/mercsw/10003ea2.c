/* SPDX-License-Identifier: MIT */
/* mercsw 10003ea2 */
extern int DAT_100b3904;

int __cdecl FUN_10002570(int param_1, int param_2);
void __cdecl LerpRect(int param_1, int param_2, int param_3, int param_4, int param_5);

unsigned int * __cdecl FUN_10003ea2(int param_1, int * param_2)
{
    int *piVar1;
    int *piVar2;
    int iVar3;
    unsigned int *puVar4;
    unsigned int *local_20;
    unsigned int *local_1c;
    unsigned int *local_14;
    int local_10;

    piVar1 = (int *)*param_2;
    piVar2 = (int *)param_2[1];
    local_1c = (unsigned int *)0;
    local_10 = *piVar1;
    if (local_10 == 1) {
        local_1c = (unsigned int *)piVar2[3];
        if (param_1 == 0) {
            local_14 = (unsigned int *)piVar2[1];
            local_20 = (unsigned int *)piVar2[2];
        }
        else {
            local_14 = (unsigned int *)piVar2[2];
            local_20 = (unsigned int *)piVar2[1];
        }
        if (piVar1[1] == 0) {
            puVar4 = local_1c;
            for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 - 1) {
                *puVar4 = *local_14;
                local_14 = local_14 + 1;
                puVar4 = puVar4 + 1;
            }
            piVar1[2] = 0;
        }
        else {
            piVar1[2] = (int)((unsigned int)piVar1[2] + (unsigned int)DAT_100b3904);
            iVar3 = FUN_10002570(piVar1[2], *piVar2);
            if (iVar3 < 0x10000) {
                LerpRect((int)local_14, (int)local_20, (int)local_1c, iVar3, 0);
            }
            else {
                puVar4 = local_1c;
                for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 - 1) {
                    *puVar4 = *local_20;
                    local_20 = local_20 + 1;
                    puVar4 = puVar4 + 1;
                }
                piVar1[2] = 0;
                local_10 = 0;
            }
        }
    }
    piVar1[1] = *piVar1;
    *piVar1 = local_10;
    return local_1c;
}
