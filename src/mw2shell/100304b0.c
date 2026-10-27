/* SPDX-License-Identifier: MIT */
/* mw2shell 100304b0 */
void __cdecl FUN_1000d7f0(int param_1);
void __cdecl FUN_10030090(void);
void __cdecl FUN_100304e0(int param_1);

void __cdecl FUN_100304b0(int param_1)
{
    FUN_1000d7f0(param_1);
    FUN_10030090();
    *(unsigned char *)(param_1 + 0x84c) = 1;
    FUN_100304e0(0);
    return;
}
