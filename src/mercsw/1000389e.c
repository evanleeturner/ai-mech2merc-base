/* SPDX-License-Identifier: MIT */
/* mercsw 1000389e */
extern int DAT_100a40f8;
extern int DAT_100a5538;

void __stdcall _AIL_end_sample_4(unsigned int a);

void __cdecl StopAllSamples(int param_1)
{
    int local_8;

    if (DAT_100a40f8 != 0) {
        for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
            if ((*(int *)(DAT_100a40f8 + 0x48 + local_8 * 4) != 0) &&
                ((*(int *)(DAT_100a40f8 + 4 + local_8 * 4) != DAT_100a5538) || (param_1 != 0))) {
                _AIL_end_sample_4(*(unsigned int *)(DAT_100a40f8 + 4 + local_8 * 4));
                *(unsigned int *)(DAT_100a40f8 + 0x48 + local_8 * 4) = 0;
            }
        }
    }
    return;
}
