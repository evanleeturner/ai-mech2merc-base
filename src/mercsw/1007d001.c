/* SPDX-License-Identifier: MIT */
/* mercsw 1007d001 */
extern int DAT_100b6814;

void __cdecl FUN_1007d001(int param_1)
{
    if (param_1 < 1) {
        param_1 = 0;
    }
    else if (0x80 < param_1) {
        param_1 = 0x80;
    }
    DAT_100b6814 = param_1;
    return;
}
