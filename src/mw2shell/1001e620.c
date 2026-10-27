/* SPDX-License-Identifier: MIT */
/* mw2shell 1001e620 */
extern unsigned int FUN_10017f30(int param_1, int param_2);
extern void FUN_10017ec0(int param_1, int param_2, char param_3);

void __thiscall FUN_1001e620(void *this, int param_1)
{
    unsigned int uVar1;
    
    uVar1 = FUN_10017f30(*(int *)this, param_1);
    if ((int)uVar1 >= 0) {
        FUN_10017ec0(*(int *)this, param_1, '\0');
    }
    return;
}
