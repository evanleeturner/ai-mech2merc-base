/* SPDX-License-Identifier: MIT */
/* mercsw 1002cd87 */
extern unsigned int g_disabledBits100aafc0;

void __cdecl FUN_1002cd87(unsigned int param_1, int enable)
{
    if (enable == 0) {
        g_disabledBits100aafc0 = g_disabledBits100aafc0 | param_1;
    } else {
        g_disabledBits100aafc0 = g_disabledBits100aafc0 & ~param_1;
    }
}
