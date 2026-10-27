/* SPDX-License-Identifier: MIT */
/* mercsw 1000204d */
extern int DAT_10123230;
extern unsigned char DAT_10168410[];

void __stdcall FUN_1000204d(void)
{
    int local_c;
    int local_8;

    for (local_c = 0; local_c < DAT_10123230; local_c = local_c + 1) {
        if (*(int *)(DAT_10168410 + (int)((unsigned int)local_c * 4u)) != 0) {
            for (local_8 = 0; local_8 < 0x30; local_8 = local_8 + 1) {
            }
        }
    }
    return;
}
