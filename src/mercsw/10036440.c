/* SPDX-License-Identifier: MIT */
/* mercsw 10036440 */
extern int DAT_100adcf8;
extern void __cdecl FUN_1002ae60(int param_1, int param_2);

void __cdecl FUN_10036440(int param_1)
{
    if (param_1 < 8) {
        *(int *)(&DAT_100adcf8 + param_1 * 4) = 1;
        FUN_1002ae60(param_1, 3);
    }
    return;
}
