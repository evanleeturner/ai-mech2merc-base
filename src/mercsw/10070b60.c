/* SPDX-License-Identifier: MIT */
/* mercsw 10070b60 */
extern unsigned char DAT_100eebb0[];

void __stdcall FUN_10070b60(void)
{
    int local_8;

    for (local_8 = 0; local_8 < 0x100; local_8 = local_8 + 1) {
        DAT_100eebb0[local_8] = (unsigned char)local_8;
    }
}
