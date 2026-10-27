/* SPDX-License-Identifier: MIT */
/* mercsw 1000d7f5 */
extern int DAT_100a7584;
extern char DAT_101f64a0[];

bool __stdcall FUN_1000d7f5(void)
{
    unsigned char bVar1;
    int local_8;

    bVar1 = 0;
    local_8 = 0;
    while (local_8 < DAT_100a7584 && !bVar1) {
        if (*(int *)(DAT_101f64a0 + (unsigned int)local_8 * 0x7cu) == -1) {
            bVar1 = 1;
        }
        local_8 = (int)((unsigned int)local_8 + 1u);
    }
    return !bVar1;
}
