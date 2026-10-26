/* SPDX-License-Identifier: MIT */
/* mercsw 1002cd49 */
extern unsigned int g_disabledBits100aafc0;

void __cdecl FUN_1002cd49(unsigned int toggleMask)
{
    g_disabledBits100aafc0 = g_disabledBits100aafc0 ^ toggleMask;
}
