/* SPDX-License-Identifier: MIT */
/* mw2shell 10069ca4 */
unsigned int __cdecl FUN_10069ca4(int param_1)
{
    unsigned short hi;
    unsigned short lo;

    hi = (unsigned short)((unsigned int)(unsigned short)(*(short *)(param_1 + 8)) - (unsigned int)(unsigned short)(*(short *)(param_1 + 4)) + 1u);
    lo = (unsigned short)((unsigned int)(unsigned short)(*(short *)(param_1 + 10)) - (unsigned int)(unsigned short)(*(short *)(param_1 + 6)) + 1u);
    return ((unsigned int)hi << 16) | (unsigned int)lo;
}
