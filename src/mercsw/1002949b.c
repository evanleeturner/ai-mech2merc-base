/* SPDX-License-Identifier: MIT */
/* mercsw 1002949b */
short __cdecl FUN_1002949b(short ch_Likely, short param_2, short param_3, short param_4)
{
    short result;

    result = ch_Likely;
    if (ch_Likely == 0x40) {
        result = param_2;
    } else if (ch_Likely == 0x25) {
        result = param_3;
    } else if (ch_Likely == 0x2a) {
        result = param_4;
    }
    return result;
}
