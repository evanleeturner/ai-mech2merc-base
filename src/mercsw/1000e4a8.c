/* SPDX-License-Identifier: MIT */
/* mercsw 1000e4a8 */
extern int __cdecl FUN_1002f28d(int param_1);
extern void __cdecl FUN_1002fe1e(int *param_1, void *param_2);
extern void __cdecl FUN_1001d671(void);

void __cdecl FUN_1000e4a8(int *param_1)
{
    int iVar1;
    void *local_8;
    
    local_8 = (void *)0x0;
    if (param_1 != (int *)0x0) {
        iVar1 = FUN_1002f28d((int)param_1);
        if (iVar1 != 0) {
            local_8 = (void *)FUN_1001d671;
        }
        FUN_1002fe1e(param_1, local_8);
    }
    return;
}
