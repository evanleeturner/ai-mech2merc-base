/* SPDX-License-Identifier: MIT */
/* mercsw 100547e0 */
int __cdecl FUN_100544ee(int *param_1, int *param_2);

void __cdecl FUN_100547e0(int *param_1, int *param_2)
{
    int iVar1;
    int *piVar2;
    int *piVar3;
    int bVar4;
    int *local_10;
    int *local_c;

    if (param_1 < param_2) {
        local_c = param_1;
        local_10 = param_2 + 8;
        piVar3 = local_c;
        while (1) {
            do {
                local_c = piVar3;
                piVar3 = local_c + 8;
                bVar4 = FUN_100544ee(param_1, piVar3);
                piVar2 = local_10;
            } while (bVar4 != 0);
            do {
                local_10 = piVar2;
                piVar2 = local_10 - 8;
                bVar4 = FUN_100544ee(piVar2, param_1);
            } while (bVar4 != 0);
            if (piVar2 <= piVar3) {
                break;
            }
            iVar1 = *piVar3;
            *piVar3 = *piVar2;
            *piVar2 = iVar1;
            iVar1 = local_c[9];
            local_c[9] = local_10[-7];
            local_10[-7] = iVar1;
            local_10 = piVar2;
        }
        iVar1 = *param_1;
        *param_1 = *piVar2;
        *piVar2 = iVar1;
        iVar1 = param_1[1];
        param_1[1] = local_10[-7];
        local_10[-7] = iVar1;
        if (param_1 < local_10 + -0x10) {
            FUN_100547e0(param_1, local_10 + -0x10);
        }
        if (local_10 < param_2) {
            FUN_100547e0(local_10, param_2);
        }
    }
    return;
}
