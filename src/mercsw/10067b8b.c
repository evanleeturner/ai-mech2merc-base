/* SPDX-License-Identifier: MIT */
/* mercsw 10067b8b */
extern undefined4 DAT_100b38fc;
long long __ftol(void);

bool __cdecl FUN_10067b8b(undefined4 *param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    long long lVar1;
    
    param_1[1] = param_2;
    param_1[2] = param_3;
    lVar1 = __ftol();
    param_1[3] = (int)lVar1;
    *param_1 = DAT_100b38fc;
    param_1[4] = param_6;
    return 0 < (int)param_1[3];
}
