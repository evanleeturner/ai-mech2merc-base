/* SPDX-License-Identifier: MIT */
/* mercsw 1003106f */
extern int DAT_100ada68;

int __cdecl FUN_1003106f(int param_1)
{
    if (param_1 == -1) {
        param_1 = DAT_100ada68;
    }
    DAT_100ada68 = param_1;
    return param_1;
}
