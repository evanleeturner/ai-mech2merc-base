/* SPDX-License-Identifier: MIT */
/* mercsw 10069ad8 */
extern unsigned char DAT_100eee70[];
extern unsigned char DAT_100eeec0;

void __stdcall FUN_10069ad8(void)
{
    int local_8;

    for (local_8 = 0; local_8 < 0x50; local_8 = local_8 + 1) {
        DAT_100eee70[local_8] = 0x20;
    }
    DAT_100eeec0 = 0;
}
