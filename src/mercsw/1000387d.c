/* SPDX-License-Identifier: MIT */
/* mercsw 1000387d */
extern undefined4 FUN_10051f43(undefined4 param_1);
extern undefined4 DAT_100a40d0[];

undefined4 __stdcall FUN_1000387d(void)
{
    undefined4 uVar1;
    
    uVar1 = FUN_10051f43(10);
    return DAT_100a40d0[uVar1];
}
