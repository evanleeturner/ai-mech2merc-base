/* SPDX-License-Identifier: MIT */
/* mercsw 10014718 */
typedef unsigned int (__cdecl *PFN_100aa4e0)(int, unsigned int, unsigned int, unsigned int);

extern PFN_100aa4e0 PTR_FUN_100aa4e0[];

unsigned int __cdecl FUN_10014718(int param_1, unsigned int param_2, unsigned int param_3, unsigned int param_4)
{
    unsigned int uVar1;

    if (PTR_FUN_100aa4e0[(unsigned int)*(int *)(param_1 + 0x24) * 3U] == (PFN_100aa4e0)0) {
        uVar1 = 1;
    }
    else {
        uVar1 = PTR_FUN_100aa4e0[(unsigned int)*(int *)(param_1 + 0x24) * 3U](param_1, param_2, param_3, param_4);
    }
    return uVar1;
}
