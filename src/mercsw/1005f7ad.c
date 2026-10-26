/* SPDX-License-Identifier: MIT */
/* mercsw 1005f7ad */
extern unsigned char DAT_10113170[];

void __cdecl FUN_1005f7ad(short param_1, unsigned short param_2)
{
    if (*(short *)(DAT_10113170 + 8 + (int)param_1 * 0xe) != -2) {
        *(unsigned short *)(DAT_10113170 + 6 + (int)param_1 * 0xe) = param_2;
    }
    if (*(short *)(DAT_10113170 + 4 + (int)param_1 * 0xe) == 0) {
        *(unsigned short *)(DAT_10113170 + 4 + (int)param_1 * 0xe) = 0x2d;
    }
}
