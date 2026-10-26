/* SPDX-License-Identifier: MIT */
/* mercsw 10088ea8 */
extern unsigned char DAT_100c06c0[];

unsigned int __cdecl FUN_10088ea8(short param_1)
{
    return ((((unsigned int)(int)(signed char)((unsigned short)param_1 >> 8)) << 8)
            | (unsigned int)DAT_100c06c0[param_1]) & 0xffff00ffu;
}
