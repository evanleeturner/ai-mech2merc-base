/* SPDX-License-Identifier: MIT */
/* mercsw 1008689c */
extern unsigned short * __cdecl FUN_1008628d(uint param_1, int *param_2);
extern void __cdecl FUN_10086336(unsigned short *param_1);

void __cdecl FUN_1008689c(uint param_1, int *param_2)
{
    unsigned short *puVar1;
    
    puVar1 = FUN_1008628d(param_1, param_2);
    if (puVar1 != (unsigned short *)0x0) {
        FUN_10086336(puVar1);
    }
    return;
}
