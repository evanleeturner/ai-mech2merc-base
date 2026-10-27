/* SPDX-License-Identifier: MIT */
/* mw2shell 10042730 */
short *FUN_10042370(int param_1, int *param_2);
void FUN_100423d0(short *param_1);

void __cdecl FUN_10042730(int param_1, int *param_2)
{
    short *psVar1;
    
    psVar1 = FUN_10042370(param_1, param_2);
    if (psVar1 != (short *)0x0) {
        FUN_100423d0(psVar1);
    }
    return;
}
