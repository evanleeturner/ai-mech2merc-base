/* SPDX-License-Identifier: MIT */
/* mw2shell 10031980 */
extern void FUN_1000a6f0(int param_1);
extern void FUN_1000a890(int param_1);

void __cdecl FUN_10031980(int param_1)
{
    *(int *)(param_1 + 0x22c) = *(int *)(param_1 + 0x22c) + -100;
    FUN_1000a6f0(param_1);
    FUN_1000a890(param_1);
    return;
}
