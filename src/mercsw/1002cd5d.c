/* SPDX-License-Identifier: MIT */
/* mercsw 1002cd5d */
extern unsigned int g_disabledBits100aafc0;

bool __cdecl FUN_1002cd5d(unsigned int mask)
{
    return (mask & g_disabledBits100aafc0) == 0;
}
