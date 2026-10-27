/* SPDX-License-Identifier: MIT */
/* mercsw 1003640f */
extern int DAT_100adcf8;
extern void __cdecl FUN_1002ae60(int param_1, int param_2);

void __cdecl FUN_1003640f(int param_1)
{
    if (param_1 < 8) {
        *(int *)(&DAT_100adcf8 + param_1 * 4) = 2;
        FUN_1002ae60(param_1, 2);
    }
    return;
}
