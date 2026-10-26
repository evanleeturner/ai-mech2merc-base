/* SPDX-License-Identifier: MIT */
/* mw2shell 1000a140 */
int __cdecl TruncateTo100(int param_1)
{
    int rem = param_1 % 100;
    return (int)((unsigned int)param_1 + (unsigned int)(rem * -1));
}
