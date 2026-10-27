/* SPDX-License-Identifier: MIT */
/* mercsw 1000c8ee */
extern int DAT_101f5518;
extern int DAT_100a7574;
extern int DAT_100a7570;

unsigned int __cdecl FUN_1000c8ee(int param_1)
{
    unsigned int local_c;
    unsigned int local_8;

    local_8 = 0xffffffffu;
    if (-1 < param_1) {
        for (local_c = 0; (int)local_c < DAT_101f5518; local_c = local_c + 1u) {
            if (*(int *)((unsigned int)DAT_100a7574 + local_c * 4u) == param_1) {
                local_8 = *(unsigned int *)((unsigned int)DAT_100a7570 + local_c * 4u);
            }
        }
    }
    return local_8;
}
