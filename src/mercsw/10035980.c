/* SPDX-License-Identifier: MIT */
/* mercsw 10035980 */
int __cdecl FixedDot3Shift29(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6)
{
    unsigned long long sum;
    unsigned int lo;
    unsigned int hi;
    unsigned int r;

    sum = (unsigned long long)((long long)param_1 * (long long)param_2)
        + (unsigned long long)((long long)param_3 * (long long)param_4)
        + (unsigned long long)((long long)param_6 * (long long)param_5);

    lo = (unsigned int)sum;
    hi = (unsigned int)(sum >> 32);

    r = ((lo >> 0x1d) | (hi * 8u)) + (unsigned int)(((lo >> 0x1c) & 1u) != 0);
    return (int)r;
}
