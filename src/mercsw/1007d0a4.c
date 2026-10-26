/* SPDX-License-Identifier: MIT */
/* mercsw 1007d0a4 */
extern int DAT_100b6824;

int __cdecl FUN_1007d0a4(int param_1)
{
    if (param_1 == -1) {
        param_1 = DAT_100b6824;
    }
    DAT_100b6824 = param_1;
    return param_1;
}
