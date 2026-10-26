/* SPDX-License-Identifier: MIT */
/* mw2shell 1000a120 */
int __cdecl RoundUpTo100(int param_1)
{
    int rem = param_1 % 100;
    if (rem != 0) {
        return (int)(((unsigned int)param_1 - (unsigned int)rem) + 100u);
    }
    return param_1;
}
