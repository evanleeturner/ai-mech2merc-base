/* SPDX-License-Identifier: MIT */
/* mercsw 1005f8a2 */
extern unsigned char DAT_10113170[];

void __cdecl FUN_1005f8a2(short param_1, unsigned short param_2)
{
    *(unsigned short *)(DAT_10113170 + 4 + (int)param_1 * 0xe) = param_2;
}
