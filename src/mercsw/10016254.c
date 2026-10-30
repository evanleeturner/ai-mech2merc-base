/* SPDX-License-Identifier: MIT */
/* mercsw 10016254 */
extern int DAT_100eef40[];
extern int DAT_100adf38;
extern int DAT_100aa568;
extern int DAT_100aa56c;
extern int DAT_10114e28;

unsigned int __cdecl FUN_10056489(int *param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7);
int __cdecl FUN_10011e60(int param_1, int param_2, int param_3);
int __cdecl FUN_10067d51(int *param_1);
int __cdecl FUN_10002570(int param_1, int param_2);
int __cdecl FixedMul16(int param_1, int param_2);
void __cdecl FUN_1001608d(int *param_1, int param_2, int param_3, int param_4);

void __cdecl FUN_10016254(int param_1)
{
    int *piVar1;
    int iVar2;
    int iVar3;
    int local_2c;
    int local_18;
    int local_14;

    piVar1 = *(int **)(param_1 + 0xa4);
    local_14 = 0xe;
    iVar3 = *(int *)(param_1 + 0x8c);
    DAT_100aa56c = FUN_10011e60(*(int *)(*(int *)(DAT_100eef40[DAT_100adf38] + 0x20) + 0x3cc), iVar3, 100);
    iVar2 = FUN_10067d51(&DAT_100aa568);
    FUN_10056489(piVar1,
                 (int)((unsigned int)piVar1[3] - (unsigned int)piVar1[1] + 1u) >> 1,
                 0,
                 (int)((unsigned int)piVar1[3] - (unsigned int)piVar1[1] + 1u) >> 1,
                 (int)((unsigned int)piVar1[4] - (unsigned int)piVar1[2] + 1u) >> 1,
                 0, 2);
    if ((iVar2 >> 0x10) < iVar3) {
        iVar3 = FUN_10002570((int)((unsigned int)(iVar2 >> 0x10) << 0x10),
                             (int)((unsigned int)iVar3 << 0x10));
        local_18 = FixedMul16(iVar3, 0x1680000);
        local_18 = local_18 >> 0x10;
    }
    else {
        local_18 = 0x163;
    }
    if (local_18 != 0) {
        for (local_2c = 0; local_2c < local_18; local_2c = local_2c + 0xf) {
            if ((local_2c < 0x79) || (0x10d < local_2c)) {
                if (0x10d < local_2c) {
                    local_14 = 10;
                }
            }
            else {
                local_14 = 3;
            }
            FUN_1001608d(piVar1,
                         (int)((unsigned int)((local_2c + 0x10e) % 0x168) << 0x10),
                         local_14,
                         *(int *)(DAT_10114e28 + 0xa4));
        }
        if ((local_18 < 0x79) || (0x10d < local_18)) {
            if (0x10d < local_18) {
                local_14 = 10;
            }
        }
        else {
            local_14 = 3;
        }
        FUN_1001608d(piVar1,
                     (int)((unsigned int)((local_18 + 0x10e) % 0x168) << 0x10),
                     local_14,
                     *(int *)(DAT_10114e28 + 0xa4));
    }
    return;
}
