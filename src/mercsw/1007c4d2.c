/* SPDX-License-Identifier: MIT */
/* mercsw 1007c4d2 */
extern int DAT_100b3904;
extern int DAT_100b67f8;
extern unsigned char DAT_100cded0[];
extern unsigned char DAT_100cded4[];

extern int __cdecl FUN_1002f28d(int param_1);
extern int __cdecl FUN_1001cac9(int param_1, int *param_2, int *param_3, int *param_4);
extern void __cdecl FUN_1001b520(int *param_1, int *param_2, int param_3, int param_4);
extern int __cdecl FUN_100142b4(int param_1, int param_2, int param_3);
extern void __cdecl FUN_1007cbc4(int *param_1);
extern int __cdecl FUN_10051f43(int param_1);
extern int __cdecl FixedMul16(int param_1, int param_2);
extern void __cdecl FUN_1002f3a7(int param_1, int param_2, int param_3, int param_4);
extern void __cdecl FUN_1002f6a8(void *param_1, int param_2, int param_3, int param_4, int param_5);
extern void __cdecl FUN_1002fbc0(int *param_1);
extern void __cdecl FUN_1002f322(int param_1, int *param_2, int *param_3, int *param_4);
extern void __cdecl FUN_1007c97d(int param_1);
extern void __cdecl FUN_10024b86(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6);

void __cdecl FUN_1007c4d2(int param_1)
{
    int iVar1;
    int *piVar2;
    int *piVar3;
    int *piVar4;
    int local_5c;
    unsigned int local_58;
    int local_54;
    int *local_50;
    int local_4c;
    int local_48;
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

    local_54 = 0;
    iVar1 = (int)((unsigned int)param_1 * 0x24u);
    local_50 = (int *)(DAT_100cded0 + iVar1);
    if (*(int *)(DAT_100cded4 + iVar1) != 0) {
        piVar4 = &local_3c;
        piVar3 = &local_30;
        piVar2 = &local_28;
        iVar1 = FUN_1002f28d(*(int *)(DAT_100cded4 + iVar1));
        local_48 = FUN_1001cac9(iVar1, piVar2, piVar3, piVar4);
        local_38 = local_28;
        local_40 = local_30;
        local_44 = local_3c;
        local_30 = (int)((unsigned int)local_30 - (unsigned int)(local_48 >> 1));
        local_5c = local_50[3];
        local_58 = (unsigned int)(0 < local_5c);
        local_10 = local_30;
        FUN_1001b520(&local_10, &local_5c, local_50[8], DAT_100b3904);
        if ((local_5c < 1) &&
            (local_4c = FUN_100142b4(local_28, local_30, local_3c), local_10 <= local_4c)) {
            if (local_58 != 0) {
                FUN_1007cbc4((int *)local_50[1]);
                local_54 = 1;
            }
            if (-0x8d6f < local_5c) {
                local_54 = 1;
            }
            local_10 = local_4c;
            local_5c = (int)(0u - (unsigned int)(local_5c >> 2));
            iVar1 = FUN_10051f43(2);
            if (iVar1 != 0) {
                local_5c = local_5c >> 1;
                local_50[2] = (int)(0u - (unsigned int)(local_50[2] >> 1));
                local_50[4] = (int)(0u - (unsigned int)(local_50[4] >> 1));
            }
            local_50[5] = (int)(0u - (unsigned int)(local_50[5] >> 1));
            local_50[6] = (int)(0u - (unsigned int)(local_50[6] >> 1));
            local_50[7] = (int)(0u - (unsigned int)(local_50[7] >> 1));
        }
        local_50[3] = local_5c;
        local_c = FixedMul16(local_50[2], DAT_100b3904);
        local_8 = (int)((unsigned int)local_10 - (unsigned int)local_30);
        local_14 = FixedMul16(local_50[4], DAT_100b3904);
        local_20 = FixedMul16(local_50[5], (int)((unsigned int)DAT_100b3904 << 0x10));
        local_2c = FixedMul16(local_50[6], (int)((unsigned int)DAT_100b3904 << 0x10));
        local_34 = FixedMul16(local_50[7], (int)((unsigned int)DAT_100b3904 << 0x10));
        FUN_1002f3a7(local_50[1], local_c, local_8, local_14);
        FUN_1002f6a8((void *)local_50[1], local_20, local_2c, local_34, 0);
        FUN_1002fbc0((int *)local_50[1]);
        FUN_1002f322(local_50[1], &local_18, &local_1c, &local_24);
        if (local_54 == 0) {
            if (*local_50 == 1) {
                FUN_10024b86(local_38, local_40, local_44,
                             (int)((unsigned int)local_18 - (unsigned int)local_38),
                             (int)((unsigned int)local_1c - (unsigned int)local_40),
                             (int)((unsigned int)local_24 - (unsigned int)local_44));
            }
        }
        else {
            DAT_100b67f8 = (int)((unsigned int)DAT_100b67f8 + 0xffffffffu);
            FUN_1007c97d(param_1);
        }
    }
    return;
}
