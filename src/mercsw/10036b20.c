/* SPDX-License-Identifier: MIT */
/* mercsw 10036b20 */
extern unsigned int DAT_100add1c;

void __cdecl FUN_10036b20(unsigned short param_1, short set)
{
    unsigned int mask;

    mask = 0;
    if ((param_1 & 0x80) != 0) {
        mask = 0x200;
    }
    if ((param_1 & 0x100) != 0) {
        mask = mask | 0x100;
    }
    if (set == 0) {
        DAT_100add1c = DAT_100add1c & ~mask;
    }
    else {
        DAT_100add1c = DAT_100add1c | mask;
    }
}
