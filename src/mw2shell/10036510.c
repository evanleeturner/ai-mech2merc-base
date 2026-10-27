/* SPDX-License-Identifier: MIT */
/* mw2shell 10036510 */
int __thiscall FUN_10036390(void *this, char *param_1, uint param_2);
void __stdcall FUN_100364f0(int param_1, int *param_2);

void __thiscall FUN_10036510(void *this, char *param_1, uint param_2, int *param_3)
{
    int iVar1;
    
    iVar1 = FUN_10036390(this, param_1, param_2);
    FUN_100364f0(iVar1, param_3);
    return;
}
