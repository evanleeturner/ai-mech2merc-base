/* SPDX-License-Identifier: MIT */
/* mercsw 10036471 */
extern int DAT_100adcf8;
extern void __cdecl FUN_1002ae60(int param_1, int param_2);

void __cdecl FUN_10036471(int param_1)
{
    if (param_1 < 8) {
        *(int *)(&DAT_100adcf8 + param_1 * 4) = 3;
        FUN_1002ae60(param_1, 5);
    }
    return;
}
