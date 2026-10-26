/* SPDX-License-Identifier: MIT */
/* mw2shell 1000d230 */
char __cdecl FUN_1000d230(int param_1)
{
    if ((param_1 != -1) && (param_1 != 0)) {
        if (param_1 < 7000) {
            return (char)0;
        }
        return (char)((param_1 < 10000) + 1);
    }
    return (char)3;
}
