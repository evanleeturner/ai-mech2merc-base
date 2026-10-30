/* SPDX-License-Identifier: MIT */
/* mercsw 10016801 */
extern int DAT_100eef40[];
extern int DAT_100adf38;
extern int DAT_100aa578[2];

unsigned int __cdecl FUN_10056489(int *param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7);
int __cdecl FUN_10011e60(int param_1, int param_2, int param_3);
int __cdecl FUN_10067d51(int *param_1);
void __cdecl FUN_10016b61(int *param_1, int param_2, int param_3, int param_4, int param_5, int param_6);

void __cdecl FUN_10016801(int param_1)
{
    int *piVar1;
    int *piVar2;
    int local_24;
    int local_20;
    int local_18;
    int local_8;

    piVar1 = *(int **)(param_1 + 0xa4);
    piVar2 = *(int **)(DAT_100eef40[DAT_100adf38] + 0x20);
    FUN_10056489(piVar1, *(int *)(param_1 + 0x3c), *(int *)(param_1 + 0x40), *(int *)(param_1 + 0x3c),
                 *(int *)(param_1 + 0x48), 0, 10);
    FUN_10056489(piVar1, *(int *)(param_1 + 0x44), *(int *)(param_1 + 0x40), *(int *)(param_1 + 0x44),
                 *(int *)(param_1 + 0x48), 0, 10);
    FUN_10056489(piVar1, *(int *)(param_1 + 0x3c), *(int *)(param_1 + 0x40), *(int *)(param_1 + 0x44),
                 *(int *)(param_1 + 0x40), 0, 10);
    FUN_10056489(piVar1, *(int *)(param_1 + 0x3c), *(int *)(param_1 + 0x48), *(int *)(param_1 + 0x44),
                 *(int *)(param_1 + 0x48), 0, 10);
    local_24 = FUN_10011e60((int)((unsigned int)*(int *)(*(int *)(*piVar2 + 0x4c) + 8) << 0x10),
                            *(int *)(param_1 + 0x38), 0x400);
    if (*(char *)(*(int *)(*piVar2 + 0x4c) + 0x30) != '\0') {
        local_24 = local_24 / -2;
    }
    DAT_100aa578[1] = local_24;
    local_18 = FUN_10067d51(DAT_100aa578);
    local_18 = local_18 >> 0x10;
    local_20 = *(int *)(param_1 + 0x50);
    local_8 = 0xf;
    if (*(char *)(*(int *)(*piVar2 + 0x4c) + 0x30) == '\0') {
        if (*(int *)(param_1 + 0x38) <= local_18) {
            local_18 = (int)((unsigned int)*(int *)(param_1 + 0x38) + 0xffffffffU);
        }
    }
    else {
        local_18 = (int)(0u - (unsigned int)local_18);
        if (*(int *)(param_1 + 0x38) / 2 < local_18) {
            local_18 = *(int *)(param_1 + 0x38) / 2;
        }
        local_8 = 7;
        local_20 = (int)((unsigned int)local_20 + (unsigned int)local_18);
    }
    FUN_10016b61(piVar1, *(int *)(param_1 + 0x4c), local_20,
                 (int)((unsigned int)*(int *)(param_1 + 0x34) + 0xffffffffU),
                 (int)((unsigned int)local_18 + 1u), local_8);
    return;
}
