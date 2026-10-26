/* SPDX-License-Identifier: MIT */
/* mercsw 1000728c */
extern int DAT_100a41e0;

unsigned int __cdecl FUN_1000728c(int param_1)
{
    if ((param_1 < 0) || (4 < param_1)) {
        return 2;
    }
    DAT_100a41e0 = param_1;
    return 0;
}
