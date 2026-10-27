/* SPDX-License-Identifier: MIT */
/* mercsw 1003689b */
extern int FUN_10036142(int);
extern void FUN_1002ae60(int, int);

void __stdcall FUN_1003689b(void)
{
    int iVar1;
    
    iVar1 = FUN_10036142(4);
    if (iVar1 != 0) {
        FUN_1002ae60(4, 5);
    }
    return;
}
