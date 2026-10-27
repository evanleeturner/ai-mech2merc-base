/* SPDX-License-Identifier: MIT */
/* mercsw 10036969 */
extern int DAT_100add18;
extern int FUN_10036726(int param_1);
extern void FUN_10036504(int param_1, int param_2);

void __stdcall FUN_10036969(void)
{
    int iVar1;
    int local_arg2;
    
    iVar1 = FUN_10036726(*(int *)(DAT_100add18 + 0x1c));
    if (-1 < iVar1) {
        __builtin_memcpy(&local_arg2, (void *)(DAT_100add18 + 0x42), 4);
        FUN_10036504(iVar1, local_arg2);
    }
    return;
}
