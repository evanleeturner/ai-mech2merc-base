/* SPDX-License-Identifier: MIT */
/* mw2shell 10069597 */
void __cdecl FUN_10069597(int param_1, int param_2, uint *param_3)
{
    unsigned long long prod;
    unsigned int lo;
    unsigned short hi16;
    unsigned short rounded_hi;

    prod = (unsigned long long)(long long)param_1 * (unsigned long long)(long long)param_2;
    lo = (unsigned int)prod;
    rounded_hi = (unsigned short)((lo + 0x8000u) >> 16);
    hi16 = (unsigned short)((unsigned short)(prod >> 32) + (unsigned short)(0xffff7fffu < lo));
    *param_3 = (unsigned int)rounded_hi | ((unsigned int)hi16 << 16);
    return;
}
