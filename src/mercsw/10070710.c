/* SPDX-License-Identifier: MIT */
/* mercsw 10070710 */
extern unsigned int DAT_100eecb0[];

void __stdcall FUN_10070710(void)
{
    int local_8;

    for (local_8 = 0; local_8 < 0x3c; local_8 = local_8 + 1) {
        DAT_100eecb0[local_8] = 0xfffffffeUL;
    }
}
