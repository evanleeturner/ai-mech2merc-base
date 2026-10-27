/* SPDX-License-Identifier: MIT */
/* mercsw 1000c6d4 */
extern int DAT_100a7578;
extern int DAT_100a7580;

unsigned int __cdecl FUN_1000c6d4(int param_1)
{
    int local_c;

    local_c = DAT_100a7578;
    do {
        local_c = (int)((unsigned int)local_c - 1u);
        if (local_c < 0) {
            return 0;
        }
    } while (*(int *)((unsigned int)DAT_100a7580 + (unsigned int)local_c * 8u) != param_1);
    return *(unsigned int *)((unsigned int)DAT_100a7580 + 4u + (unsigned int)local_c * 8u);
}
