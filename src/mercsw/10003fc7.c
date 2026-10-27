/* SPDX-License-Identifier: MIT */
/* mercsw 10003fc7 */
extern int DAT_100b3904;

int __cdecl FUN_10002570(int param_1, int param_2);
int __cdecl FixedMul16(int param_1, int param_2);
void __cdecl LerpRect(int param_1, int param_2, int param_3, int param_4, int param_5);

unsigned int * __cdecl FUN_10003fc7(int param_1, int * param_2)
{
    int *piVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    unsigned int *puVar5;
    unsigned int *puVar6;
    unsigned int *local_28;
    unsigned int *local_24;
    int local_20;
    int local_1c;
    unsigned int *local_14;
    int local_10;

    piVar1 = (int *)*param_2;
    piVar2 = (int *)param_2[1];
    local_24 = (unsigned int *)0;
    local_10 = *piVar1;
    if (local_10 == 1) {
        local_24 = (unsigned int *)piVar2[3];
        if (param_1 == 0) {
            local_14 = (unsigned int *)piVar2[1];
            local_28 = (unsigned int *)piVar2[2];
            local_20 = 1;
            local_1c = 2;
        }
        else {
            local_14 = (unsigned int *)piVar2[2];
            local_28 = (unsigned int *)piVar2[1];
            local_20 = 2;
            local_1c = 1;
        }
        if (piVar1[1] == 0) {
            puVar5 = local_24;
            for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar5 = *local_14;
                local_14 = local_14 + 1;
                puVar5 = puVar5 + 1;
            }
            piVar1[2] = 0;
        }
        else {
            piVar1[2] = (int)((unsigned int)piVar1[2] + (unsigned int)DAT_100b3904);
            iVar3 = FUN_10002570(piVar1[2], *piVar2);
            if (iVar3 < 0x10000) {
                if (iVar3 < 0x8001) {
                    puVar5 = local_14;
                    puVar6 = local_24;
                    for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
                        *puVar6 = *puVar5;
                        puVar5 = puVar5 + 1;
                        puVar6 = puVar6 + 1;
                    }
                    iVar3 = FixedMul16(iVar3, 0x20000);
                    LerpRect((int)local_14, (int)local_28, (int)local_24, iVar3, local_20);
                }
                else {
                    puVar5 = local_28;
                    puVar6 = local_24;
                    for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
                        *puVar6 = *puVar5;
                        puVar5 = puVar5 + 1;
                        puVar6 = puVar6 + 1;
                    }
                    iVar3 = FixedMul16((int)((unsigned int)iVar3 - 0x8000u), 0x20000);
                    LerpRect((int)local_14, (int)local_28, (int)local_24, iVar3, local_1c);
                }
            }
            else {
                puVar5 = local_24;
                for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
                    *puVar5 = *local_28;
                    local_28 = local_28 + 1;
                    puVar5 = puVar5 + 1;
                }
                piVar1[2] = 0;
                local_10 = 0;
            }
        }
    }
    piVar1[1] = *piVar1;
    *piVar1 = local_10;
    return local_24;
}
