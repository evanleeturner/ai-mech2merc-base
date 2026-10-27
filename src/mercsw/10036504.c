/* SPDX-License-Identifier: MIT */
/* mercsw 10036504 */
extern int DAT_100adcf8;
extern void __cdecl FUN_1002ae60(int param_1, int param_2);

void __cdecl FUN_10036504(int param_1)
{
    if (param_1 < 8) {
        *(int *)(&DAT_100adcf8 + param_1 * 4) = 6;
        FUN_1002ae60(param_1, 0xb);
    }
    return;
}
