/* SPDX-License-Identifier: MIT */
/* mercsw 1004890b */
extern int * __cdecl FUN_100496bb(int param_1);

void __cdecl FUN_1004890b(int param_1)
{
    int *piVar1;
    
    piVar1 = FUN_100496bb(param_1);
    if (piVar1 != (int *)0x0) {
        piVar1[2] = 0;
    }
    return;
}
