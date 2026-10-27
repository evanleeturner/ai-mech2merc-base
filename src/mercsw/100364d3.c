/* SPDX-License-Identifier: MIT */
/* mercsw 100364d3 */
extern int DAT_100adcf8;
extern void __cdecl FUN_1002ae60(int param_1, int param_2);

void __cdecl FUN_100364d3(int param_1)
{
    if (param_1 < 8) {
        *(int *)(&DAT_100adcf8 + param_1 * 4) = 5;
        FUN_1002ae60(param_1, 8);
    }
    return;
}
