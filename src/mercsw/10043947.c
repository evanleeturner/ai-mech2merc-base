/* SPDX-License-Identifier: MIT */
/* mercsw 10043947 */
extern void __cdecl FUN_1002950f(int param_1, short param_2);
extern int __cdecl FUN_1002a132(int param_1);
extern void __cdecl FUN_10022b70(int param_1, int param_2);

int __cdecl FUN_10043947(int param_1, short param_2)
{
    int iVar1;
    
    FUN_1002950f(param_1, param_2);
    iVar1 = FUN_1002a132(param_1);
    FUN_10022b70(param_1, iVar1);
    return 0;
}
