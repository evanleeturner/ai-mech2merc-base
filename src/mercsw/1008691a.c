/* SPDX-License-Identifier: MIT */
/* mercsw 1008691a */
extern void *DAT_100c9054;
extern void __cdecl FUN_10086336(void *param_1);

int __stdcall FUN_1008691a(void)
{
    int bVar1;
    
    bVar1 = DAT_100c9054 != (void *)0x0;
    if (bVar1) {
        FUN_10086336(DAT_100c9054);
    }
    return bVar1;
}
