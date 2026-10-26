/* SPDX-License-Identifier: MIT */
/* mercsw 1007bdc0 */
extern unsigned char DAT_100cded4[];

bool __stdcall FUN_1007bdc0(void)
{
    int local_8;

    for (local_8 = 0; (local_8 < 0x80 && (*(int *)(DAT_100cded4 + (unsigned int)(local_8 * 0x24)) != 0));
        local_8 = local_8 + 1) {
    }
    return local_8 == 0x80;
}
