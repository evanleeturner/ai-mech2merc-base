/* SPDX-License-Identifier: MIT */
/* mercsw 1001c9e8 */
void __cdecl FUN_1001c9e8(unsigned short *param_1, unsigned short param_2)
{
    *param_1 = (unsigned short)((*param_1 & 0x810f) | (param_2 & 0x7ef0) | 0x8000);
}
