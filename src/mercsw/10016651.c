/* SPDX-License-Identifier: MIT */
/* mercsw 10016651 */
extern int DAT_100aa588;
extern int DAT_100aa58c;
extern int DAT_100adf38;
extern int DAT_100b3904;
extern int DAT_100eef40[];

/* Signatures unresolved; all assumed __cdecl, arguments inferred from the call sites. */
int __cdecl FUN_10067d51(int *param_1);
int __cdecl FUN_10011e60(int param_1, int param_2, int param_3);
void __cdecl FUN_10016cdd(int *param_1, int param_2, int param_3, int param_4, int param_5, int param_6);

void __cdecl FUN_10016651(int param_1)
{
    int *piVar1;
    int local_14;
    int local_10;
    int local_c;
    int local_8;

    piVar1 = *(int **)(param_1 + 0xa4);
    local_10 = 0;
    DAT_100aa58c = (int)((unsigned int)*(int *)(*(int *)(DAT_100eef40[DAT_100adf38] + 0x20) + 0x3c4) -
                         (unsigned int)*(int *)(*(int *)(DAT_100eef40[DAT_100adf38] + 0x20) + 0x3d0) *
                             (unsigned int)DAT_100b3904) >> 6;
    local_8 = FUN_10067d51((int *)&DAT_100aa588);
    if (local_8 < 1) {
        local_14 = 7;
        local_c = 7;
        local_8 = 0;
    }
    else if (local_8 < 0x300) {
        local_14 = 3;
        local_c = 7;
    }
    else {
        local_14 = 0xb;
        local_c = 3;
        local_8 = (int)((unsigned int)local_8 - 0x300u);
    }
    if (0 < local_8) {
        local_10 = FUN_10011e60(*(int *)(param_1 + 0x9c), local_8, 0x300);
        if (local_10 < 0) {
            local_10 = 0;
        }
        else if (*(int *)(param_1 + 0x9c) < local_10) {
            local_10 = *(int *)(param_1 + 0x9c);
        }
    }
    if (0 < local_10) {
        FUN_10016cdd(piVar1, *(int *)(param_1 + 0x94), *(int *)(param_1 + 0x98), local_10,
                     (int)((unsigned int)*(int *)(param_1 + 0xa0) - 1u), local_14);
    }
    if (local_10 < *(int *)(param_1 + 0x9c)) {
        FUN_10016cdd(piVar1, (int)((unsigned int)*(int *)(param_1 + 0x94) + (unsigned int)local_10),
                     *(int *)(param_1 + 0x98),
                     (int)((unsigned int)*(int *)(param_1 + 0x9c) - (unsigned int)local_10),
                     (int)((unsigned int)*(int *)(param_1 + 0xa0) - 1u), local_c);
    }
    return;
}
