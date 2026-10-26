/* SPDX-License-Identifier: MIT */
/* mercsw 1001a060 */
int __cdecl FixedMul30(int param_1, int param_2)
{
    unsigned long long prod;
    unsigned int lo;
    unsigned int hi;

    prod = (unsigned long long)(long long)param_1 * (unsigned long long)(long long)param_2;
    lo = (unsigned int)prod;
    hi = (unsigned int)(prod >> 32);

    return (int)(((lo >> 0x1e) | (hi << 2)) + (unsigned int)(((lo >> 0x1d) & 1) != 0));
}
