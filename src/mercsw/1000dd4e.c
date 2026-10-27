/* SPDX-License-Identifier: MIT */
/* mercsw 1000dd4e */
extern int DAT_100a7584;
extern char DAT_101f64c0[];

unsigned int __cdecl FUN_1000dd4e(int param_1)
{
    unsigned int local_8;

    local_8 = 0;
    if ((param_1 < DAT_100a7584) && (-1 < param_1)) {
        local_8 = *(unsigned int *)(DAT_101f64c0 + (unsigned int)param_1 * 0x7cu);
    }
    return local_8;
}
