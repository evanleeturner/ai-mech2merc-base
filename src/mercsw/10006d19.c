/* SPDX-License-Identifier: MIT */
/* mercsw 10006d19 */
int __cdecl FUN_10006bbb(uint param_1);

int __cdecl FUN_10006d19(uint param_1)
{
    int iVar1;
    
    iVar1 = FUN_10006bbb(param_1);
    return 0x5a0000 - iVar1;
}
