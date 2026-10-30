/* SPDX-License-Identifier: MIT */
/* mercsw 1006c340 */
unsigned int __cdecl FillBitGroups_Likely(unsigned int param_1)
{
    if ((param_1 & 0x730) != 0) {
        param_1 = param_1 | 0x730;
    }
    if ((param_1 & 3) != 0) {
        param_1 = param_1 | 3;
    }
    return param_1;
}
