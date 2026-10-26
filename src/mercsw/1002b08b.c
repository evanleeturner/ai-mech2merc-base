/* SPDX-License-Identifier: MIT */
/* mercsw 1002b08b */
int __cdecl ClampedAdd1024(int param_1, int param_2, int matchSign)
{
    if ((matchSign != 0) &&
        ((((param_2 < 0) - 1 & 2) - 1) != (((param_1 < 0) - 1 & 2) - 1))) {
        param_2 = (int)(0u - (unsigned int)param_2);
    }
    param_1 = (int)((unsigned int)param_1 + (unsigned int)param_2);
    if (param_1 < 0x401) {
        if (param_1 < -0x400) {
            param_1 = -0x400;
        }
    } else {
        param_1 = 0x400;
    }
    return param_1;
}
