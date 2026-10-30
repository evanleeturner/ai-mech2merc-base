/* SPDX-License-Identifier: MIT */
/* mercsw 1003a8ca */
extern int DAT_101f52e0;

void __cdecl FUN_1002f322(int param_1, int *param_2, int *param_3, int *param_4);
int __cdecl FUN_1003ba89(int *param_1, int *param_2, int *param_3);
unsigned long long __cdecl FUN_100563b3(int *param_1, int param_2, int param_3);
unsigned int __cdecl FUN_10056489(int *param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7);

unsigned int __cdecl FUN_1003a8ca(int param_1)
{
    unsigned int uVar1;
    int iVar2;
    unsigned int uVar3;
    unsigned int uVar4;
    unsigned long long uVar5;
    int local_40;
    int local_3c;
    int local_38;
    int local_34;
    int local_30;
    int local_2c;
    int local_28;
    int local_24;
    int local_20;
    int local_1c;
    int local_18;
    int local_14;
    int local_10;
    int local_c;
    int local_8;
    unsigned char *p;
    int t0;
    int t1;
    int t2;
    int off;

    if (param_1 == 0) {
        uVar1 = 0;
    }
    else {
        p = (unsigned char *)param_1;

        __builtin_memcpy(&t0, p + 0x1d2, 4);
        FUN_1002f322(t0, &local_40, &local_10, &local_18);

        __builtin_memcpy(&local_1c, p + 0x1f6, 4);

        __builtin_memcpy(&t0, p + 0x1ea, 4);
        local_34 = t0 >> 4;
        __builtin_memcpy(&t0, p + 0x1ee, 4);
        local_3c = t0 >> 4;
        __builtin_memcpy(&t0, p + 0x1f2, 4);
        local_c = t0 >> 4;
        __builtin_memcpy(&local_20, p + 0x1e6, 4);

        for (local_28 = 0; local_28 < 2; local_28 = local_28 + 1) {
            off = (int)((unsigned int)local_28 * 0xeu);

            __builtin_memcpy(&t0, p + 0x12 + off, 4);
            local_24 = (int)((unsigned int)t0 + (unsigned int)local_40);
            __builtin_memcpy(&t1, p + 0x16 + off, 4);
            local_2c = (int)((unsigned int)t1 + (unsigned int)local_10);
            __builtin_memcpy(&t2, p + 0x1a + off, 4);
            local_30 = (int)((unsigned int)t2 + (unsigned int)local_18);

            iVar2 = FUN_1003ba89(&local_24, &local_2c, &local_30);
            if (iVar2 != 0) {
                __builtin_memcpy(&t0, p + 0x12 + off, 4);
                local_38 = (int)((unsigned int)t0 + (unsigned int)local_34 + (unsigned int)local_40);
                __builtin_memcpy(&t1, p + 0x16 + off, 4);
                local_8 = (int)((unsigned int)t1 + (unsigned int)local_3c + (unsigned int)local_10);
                __builtin_memcpy(&t2, p + 0x1a + off, 4);
                local_14 = (int)((unsigned int)t2 + (unsigned int)local_c + (unsigned int)local_18);

                FUN_1003ba89(&local_38, &local_8, &local_14);

                uVar5 = FUN_100563b3(&DAT_101f52e0, local_24, local_2c);
                uVar3 = (unsigned int)uVar5;
                uVar4 = (unsigned int)((int)uVar3 >> 0x1f);
                if (((((uVar3 ^ uVar4) - uVar4 & 0xf) ^ uVar4) - uVar4) == 0xf) {
                    local_20 = (int)(uVar3 - 1u);
                }
                else {
                    local_20 = (int)(uVar3 + 1u);
                }
                FUN_10056489(&DAT_101f52e0, local_24, local_2c, local_38, local_8, 0, local_20);
            }
        }
        uVar1 = 1;
    }
    return uVar1;
}
