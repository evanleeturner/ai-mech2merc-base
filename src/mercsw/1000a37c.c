/* SPDX-License-Identifier: MIT */
/* mercsw 1000a37c */
extern int DAT_100a7178;
extern int DAT_100a7180;

int __cdecl FUN_10002570(int param_1, int param_2);
int __cdecl FixedMul16(int param_1, int param_2);

int __cdecl FUN_1000a37c(int param_1, int param_2)
{
    int iVar1;
    int local_8;

    iVar1 = FUN_10002570(
        (int)(((unsigned int)*(int *)(param_1 + 0x18) - (unsigned int)(param_2 >> 2))
              - (unsigned int)DAT_100a7178),
        DAT_100a7180);
    local_8 = FixedMul16(iVar1, 0x10);
    if (local_8 < 0) {
        local_8 = 0;
    }
    else if (0xf < local_8) {
        local_8 = 0xf;
    }
    return local_8;
}
