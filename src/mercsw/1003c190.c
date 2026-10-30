/* SPDX-License-Identifier: MIT */
/* mercsw 1003c190 */
unsigned int __cdecl IsWithinRadius3_Likely(int param_1, int param_2, int param_3, int radius_Likely)
{
    unsigned long long a;
    unsigned long long b;
    unsigned long long c;
    unsigned long long d;
    unsigned long long sum;

    a = (unsigned long long)((long long)param_1) * (unsigned long long)((long long)param_1);
    b = (unsigned long long)((long long)param_2) * (unsigned long long)((long long)param_2);
    c = (unsigned long long)((long long)param_3) * (unsigned long long)((long long)param_3);
    d = (unsigned long long)((long long)radius_Likely) * (unsigned long long)((long long)radius_Likely);

    sum = a + b + c;

    if (sum < d) {
        return 1;
    }
    /* high words are deliberately ignored here to match the original binary */
    if ((unsigned int)sum == (unsigned int)d) {
        return 1;
    }
    return 0;
}
