/* SPDX-License-Identifier: MIT */
/* mercsw 100837cb */
extern int FUN_10083808(void);
extern undefined4 FUN_1002f28d(int param_1);

undefined4 __stdcall FUN_100837cb(void)
{
    int iVar1;
    undefined4 uVar2;
    
    iVar1 = FUN_10083808();
    if (iVar1 == 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = FUN_1002f28d(iVar1);
    }
    return uVar2;
}
