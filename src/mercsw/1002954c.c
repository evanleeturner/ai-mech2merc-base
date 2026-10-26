/* SPDX-License-Identifier: MIT */
/* mercsw 1002954c */
extern unsigned char DAT_10215680[];

int __cdecl FUN_1002954c(unsigned short param_1)
{
    unsigned short uVar1;
    int local_8;

    uVar1 = (unsigned short)(param_1 & 0xf00);
    if (uVar1 == 0x100) {
        local_8 = *(int *)(DAT_10215680 + ((unsigned int)(int)(short)param_1 & 0xffU) * 0x54U);
    } else if ((uVar1 == 0x200) || (uVar1 == 0x400)) {
        local_8 = 10000;
    } else {
        local_8 = 100;
    }
    if (local_8 < 100) {
        local_8 = 100;
    }
    return local_8;
}
