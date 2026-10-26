/* SPDX-License-Identifier: MIT */
/* mercsw 10031035 */
extern int DAT_100ada6c;

void __cdecl FUN_10031035(int param_1)
{
    if (param_1 < 1) {
        param_1 = 0;
    }
    else if (0xf < param_1) {
        param_1 = 0xf;
    }
    DAT_100ada6c = param_1;
}
