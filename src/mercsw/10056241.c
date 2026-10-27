/* SPDX-License-Identifier: MIT */
/* mercsw 10056241 */
extern uint __cdecl FUN_10055f9e(int param_1, int param_2, int *param_3, int param_4, int param_5);
extern void __cdecl FUN_1006065d(int param_1, int param_2, int param_3);

uint __cdecl FUN_10056241(int param_1, int param_2, int *param_3)
{
    uint uVar1;
    
    uVar1 = FUN_10055f9e(param_1, param_2, param_3, 0xf, 0);
    if (0x3c < (int)uVar1) {
        FUN_1006065d(0x11, 0xb5, 1);
    }
    return uVar1;
}
