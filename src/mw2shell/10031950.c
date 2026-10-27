/* SPDX-License-Identifier: MIT */
/* mw2shell 10031950 */
extern void __cdecl FUN_1000a800(int param_1);
extern void __cdecl FUN_1000a890(int param_1);

void __cdecl FUN_10031950(int param_1)
{
    if (*(int *)(param_1 + 0x288) != 0) {
        *(int *)(param_1 + 0x288) = *(int *)(param_1 + 0x288) + -1;
    }
    FUN_1000a800(param_1);
    FUN_1000a890(param_1);
    return;
}
