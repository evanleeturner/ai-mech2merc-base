/* SPDX-License-Identifier: MIT */
/* mercsw 1000c859 */
extern int DAT_10215620;
extern int DAT_100a7564;
extern int DAT_100a7560;

unsigned int __cdecl FUN_1000c859(int param_1)
{
    unsigned int local_c;
    unsigned int local_8;

    local_8 = 0xffffffffu;
    for (local_c = 0; (int)local_c < DAT_10215620; local_c = local_c + 1u) {
        if (*(int *)((unsigned int)DAT_100a7564 + local_c * 4u) == param_1) {
            local_8 = *(unsigned int *)((unsigned int)DAT_100a7560 + local_c * 4u);
        }
    }
    return local_8;
}
