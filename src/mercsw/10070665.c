/* SPDX-License-Identifier: MIT */
/* mercsw 10070665 */
extern unsigned int DAT_100eeda0[];

void __stdcall FUN_10070665(void)
{
    int local_8;

    for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
        DAT_100eeda0[local_8] = 0;
    }
}
