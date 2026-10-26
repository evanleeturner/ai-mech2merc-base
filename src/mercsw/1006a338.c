/* SPDX-License-Identifier: MIT */
/* mercsw 1006a338 */
extern unsigned char DAT_100b3a1c;
extern unsigned int DAT_100b3a18;
extern unsigned int DAT_100b3a14;

void __stdcall FUN_1006a338(void)
{
    int local_8;

    for (local_8 = 3; local_8 < 0x18; local_8 = (int)((unsigned int)local_8 + 1u)) {
    }
    DAT_100b3a1c = 0;
    DAT_100b3a18 = 3;
    DAT_100b3a14 = 3;
    return;
}
