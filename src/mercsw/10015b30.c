/* SPDX-License-Identifier: MIT */
/* mercsw 10015b30 */
int __cdecl FixedMul29(int param_1, int param_2)
{
    unsigned long long prod;
    unsigned int lo;
    unsigned int hi;

    prod = (unsigned long long)(long long)param_1 * (unsigned long long)(long long)param_2;
    lo = (unsigned int)prod;
    hi = (unsigned int)(prod >> 32);

    return (int)(((lo >> 0x1d) | (hi << 3)) + (unsigned int)(((lo >> 0x1c) & 1) != 0));
}
