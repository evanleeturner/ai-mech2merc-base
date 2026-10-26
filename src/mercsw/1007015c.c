/* SPDX-License-Identifier: MIT */
/* mercsw 1007015c */
extern unsigned char DAT_100eeda0[16];

unsigned int __cdecl FUN_1007015c(unsigned int param_1, unsigned int param_2, int param_3)
{
    int local_8;

    if (((DAT_100eeda0[15] & 1) == 0) && (param_3 != 0)) {
        for (local_8 = 0; local_8 < 4; local_8 = (int)((unsigned int)local_8 + 1u)) {
            *(unsigned int *)(param_3 + local_8 * 4) = *(unsigned int *)(DAT_100eeda0 + local_8 * 4);
        }
    }
    return 0;
}
