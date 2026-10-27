/* SPDX-License-Identifier: MIT */
/* mercsw 100640ee */
/* Parameter and return types of the callee are inferred from the call site only. */
void __cdecl FUN_1002f322(int a, undefined4 *b, undefined4 *c, undefined4 *d);

void __cdecl FUN_100640ee(int param_1, undefined4 *param_2, undefined4 *param_3, undefined4 *param_4)
{
    FUN_1002f322(*(int *)(param_1 + 0x48), param_2, param_3, param_4);
    return;
}
