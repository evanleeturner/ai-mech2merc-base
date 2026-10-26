/* SPDX-License-Identifier: MIT */
/* mercsw 1001b520 */
void __cdecl FUN_1001b520(int *param_1, int *param_2, int param_3, int param_4)
{
    unsigned int prod;
    int iVar1;
    int mid;
    long long lVar2;
    unsigned int lo;
    unsigned int hi;

    iVar1 = *param_2;
    prod = (unsigned int)param_3 * (unsigned int)param_4;
    *param_2 = (int)((unsigned int)iVar1 + prod);
    mid = (int)((unsigned int)((int)prod >> 1) + (unsigned int)iVar1);
    lVar2 = (long long)mid * (long long)param_4;
    lo = (unsigned int)lVar2;
    hi = (unsigned int)((unsigned long long)lVar2 >> 32);
    *param_1 = (int)((unsigned int)*param_1 + ((lo >> 0x10) | (hi << 0x10)));
    return;
}
