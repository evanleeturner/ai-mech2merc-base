/* SPDX-License-Identifier: MIT */
/* mercsw 1004d69b */
extern int __cdecl FUN_1004d5e3(int param_1);

int __cdecl FUN_1004d69b(int param_1, int param_2)
{
    int iVar1;
    int iVar2;
    
    iVar1 = FUN_1004d5e3(param_2);
    iVar2 = FUN_1004d5e3(param_1);
    return iVar1 == iVar2;
}
