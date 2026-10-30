/* SPDX-License-Identifier: MIT */
/* mercsw 10055b60 */
unsigned int __cdecl ScaledDiffShift_Likely(int param_1, int param_2, int param_3, unsigned char shift)
{
    int diff;
    unsigned long long prod;
    unsigned int lo;
    unsigned int hi;
    unsigned int n;

    diff = (int)(((unsigned int)param_1 - (unsigned int)param_2) * 4u);
    prod = (unsigned long long)(long long)diff * (unsigned long long)(long long)param_3;
    lo = (unsigned int)prod;
    hi = (unsigned int)(prod >> 32);
    n = shift & 0x1f;

    /* the 32-bit shift-right-double: a count of 0 leaves the low word as-is */
    if (n == 0) {
        return lo;
    }
    return (lo >> n) | (hi << (0x20 - n));
}
