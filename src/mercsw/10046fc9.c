/* SPDX-License-Identifier: MIT */
/* mercsw 10046fc9 */
extern int DAT_100b04b8;
extern int DAT_100b04bc;

unsigned int __cdecl IsWithinBounds(int param_1)
{
    if ((param_1 < DAT_100b04b8) || (DAT_100b04bc < param_1)) {
        return 0;
    }
    return 1;
}
