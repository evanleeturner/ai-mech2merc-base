/* SPDX-License-Identifier: MIT */
/* mercsw 1001a080 */
int __cdecl FixedDot3Shift27(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6)
{
    unsigned long long sum;
    unsigned int lo;
    unsigned int hi;

    sum = (unsigned long long)(long long)param_1 * (unsigned long long)(long long)param_2;
    sum = sum + (unsigned long long)(long long)param_3 * (unsigned long long)(long long)param_4;
    sum = sum + (unsigned long long)(long long)param_6 * (unsigned long long)(long long)param_5;

    lo = (unsigned int)sum;
    hi = (unsigned int)(sum >> 32);

    return (int)(((lo >> 0x1b) | (hi << 5)) + (unsigned int)(((lo >> 0x1a) & 1) != 0));
}
