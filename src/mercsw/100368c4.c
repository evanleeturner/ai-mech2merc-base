/* SPDX-License-Identifier: MIT */
/* mercsw 100368c4 */
extern int DAT_100add18;
extern int FUN_10036726(int param_1);
extern void __cdecl FUN_100364a2(int param_1, int param_2);

void __stdcall FUN_100368c4(void)
{
    int iVar1;
    int local_arg2;
    
    iVar1 = FUN_10036726(*(int *)(DAT_100add18 + 0x1c));
    if (-1 < iVar1) {
        __builtin_memcpy(&local_arg2, (void *)(DAT_100add18 + 0x42), 4);
        FUN_100364a2(iVar1, local_arg2);
    }
    return;
}
