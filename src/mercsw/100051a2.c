/* SPDX-License-Identifier: MIT */
/* mercsw 100051a2 */
extern void __cdecl FUN_10005624(int param_1, int param_2, int param_3, int param_4, int param_5);

void __cdecl FUN_100051a2(int param_1, int param_2, int param_3)
{
    int local_8;
    int sVar1;
    
    sVar1 = *(short *)(*(int *)(param_2 + 0x58) + param_3 * 0x28 - 4);
    for (local_8 = 0; local_8 < sVar1; local_8 = local_8 + 1) {
        FUN_10005624(param_1, param_2, param_3, 0, 1);
    }
    return;
}
