/* SPDX-License-Identifier: MIT */
/* mercsw 1001046c */
extern unsigned char DAT_101ec450[];
extern int DAT_100a9df0;

void __cdecl FUN_100104bb(unsigned int *param_1);

void __stdcall FUN_1001046c(void)
{
    int local_c;

    for (local_c = 0; local_c < 0x60; local_c = local_c + 1) {
        FUN_100104bb((unsigned int *)(DAT_101ec450 + local_c * 8));
    }
    DAT_100a9df0 = 0;
    return;
}
