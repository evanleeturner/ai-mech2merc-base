/* SPDX-License-Identifier: MIT */
/* mercsw 1001d615 */
void __cdecl FUN_1001d615(unsigned short *param_1, unsigned short param_2)
{
    *param_1 = (unsigned short)((*param_1 & 0xfef0) | (param_2 & 0x10f) | 0x8000);
}
