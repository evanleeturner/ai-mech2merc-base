/* SPDX-License-Identifier: MIT */
/* mercsw 10003d60 */
int FixedMul16(int param_1, int param_2)
{
    long long product;
    unsigned int lo;
    unsigned int hi;
    unsigned int result;

    product = (long long)param_1 * (long long)param_2;
    lo = (unsigned int)product;
    hi = (unsigned int)((unsigned long long)product >> 32);

    result = (lo >> 16) | (hi << 16);
    result = result + (unsigned int)(((lo >> 15) & 1u) != 0);
    return (int)result;
}
