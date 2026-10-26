/* SPDX-License-Identifier: MIT */
/* mw2shell 10035e60 */
extern int DAT_10093a24;
extern int DAT_10093914;
extern int DAT_1009390c;

unsigned int __cdecl FUN_10035e60(int param_1)
{
    if (param_1 != 0) {
        return (unsigned int)DAT_10093a24;
    }
    if (DAT_10093914 < 0) {
        return 0xffffffff;
    }
    return (unsigned int)DAT_1009390c;
}
