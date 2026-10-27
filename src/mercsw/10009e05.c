/* SPDX-License-Identifier: MIT */
/* mercsw 10009e05 */
extern int DAT_100eef40[];

unsigned int __cdecl FUN_100354cd(unsigned short *param_1);

unsigned int __cdecl FUN_10009e05(unsigned short *param_1)
{
    unsigned int local_10;

    local_10 = 0;
    if ((param_1[1] & 0xf00) == 0x100) {
        local_10 = (unsigned int)((*(unsigned short *)(DAT_100eef40[param_1[10]] + 0x14) & 0x16) != 0);
    }
    else if (((param_1[1] & 0xf0) == 0x30) || ((param_1[1] & 0xf0) == 0x70)) {
        local_10 = 1;
    }
    if (local_10 == 0) {
        local_10 = FUN_100354cd(param_1);
    }
    return local_10;
}
