/* SPDX-License-Identifier: MIT */
/* mercsw 10054d99 */
extern void __cdecl FUN_1003b2f0(void *param_1);
extern void __cdecl FUN_1003cd85(int *param_1);
extern void __cdecl FUN_10054925(int param_1);
extern int DAT_10160c00;

void __cdecl FUN_10054d99(undefined4 param_1, int *param_2)
{
    int local_c;
    int local_8;
    
    FUN_1003b2f0((void *)param_2);
    FUN_1003cd85(param_2);
    local_c = 0;
    local_8 = DAT_10160c00;
    while (local_8 != 0) {
        FUN_10054925(local_8);
        local_c = local_c + 1;
        local_8 = *(int *)((char *)&DAT_10160c00 + local_c * 4);
    }
    return;
}
