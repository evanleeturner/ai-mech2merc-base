/* SPDX-License-Identifier: MIT */
/* mercsw 1003ae65 */
extern int DAT_101f52e0;

void __cdecl FUN_1002f322(int param_1, int *param_2, int *param_3, int *param_4);
int __cdecl FUN_1003ba89(int *param_1, int *param_2, int *param_3);
long long __cdecl __ftol(void);
unsigned int __cdecl FUN_10056489(int *param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7);

unsigned int __cdecl FUN_1003ae65(int param_1)
{
    unsigned int uVar1;
    int iVar2;
    long long lVar3;
    int local_44;
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
    int tmp;
    int vx;
    int vy;
    int vz;

    if (param_1 == 0) {
        uVar1 = 0;
    }
    else {
        __builtin_memcpy(&tmp, (char *)param_1 + 0x1d2, 4);
        FUN_1002f322(tmp, &local_44, &local_14, &local_1c);
        __builtin_memcpy(&local_20, (char *)param_1 + 0x1f6, 4);
        local_8 = *(int *)(local_20 + 0x20);
        local_38 = *(int *)(local_20 + 0x14) >> 2;
        local_40 = *(int *)(local_20 + 0x18) >> 2;
        local_10 = *(int *)(local_20 + 0x1c) >> 2;
        for (local_2c = 0; local_2c < 1; local_2c = local_2c + 1) {
            __builtin_memcpy(&vx, (char *)param_1 + 0x12 + local_2c * 0xe, 4);
            __builtin_memcpy(&vy, (char *)param_1 + 0x16 + local_2c * 0xe, 4);
            __builtin_memcpy(&vz, (char *)param_1 + 0x1a + local_2c * 0xe, 4);
            local_28 = (int)((unsigned int)vx + (unsigned int)local_44);
            local_30 = (int)((unsigned int)vy + (unsigned int)local_14);
            local_34 = (int)((unsigned int)vz + (unsigned int)local_1c);
            iVar2 = FUN_1003ba89(&local_28, &local_30, &local_34);
            if (iVar2 != 0) {
                lVar3 = __ftol();
                local_24 = (int)lVar3;
                if (local_24 < 0) {
                    local_24 = 0;
                }
                else if (0x1f < local_24) {
                    local_24 = 0x1f;
                }
                local_24 = *(int *)(local_8 + 0x18 + local_24 * 4);
                local_3c = (int)((unsigned int)vx + (unsigned int)local_38 + (unsigned int)local_44);
                local_c = (int)((unsigned int)vy + (unsigned int)local_40 + (unsigned int)local_14);
                local_18 = (int)((unsigned int)vz + (unsigned int)local_10 + (unsigned int)local_1c);
                FUN_1003ba89(&local_3c, &local_c, &local_18);
                FUN_10056489(&DAT_101f52e0, local_28, local_30, local_3c, local_c, 0, local_24);
            }
        }
        uVar1 = 1;
    }
    return uVar1;
}
