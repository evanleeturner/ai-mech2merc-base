/* SPDX-License-Identifier: MIT */
/* mercsw 1005a9f7 */
void __cdecl FUN_1005a9f7(int param_1, int param_2, unsigned int *param_3)
{
    long long lVar1;
    unsigned int uVar1;
    unsigned short uVar2;
    unsigned short uVar3;

    lVar1 = (long long)param_1 * (long long)param_2;
    uVar1 = (unsigned int)lVar1;
    uVar2 = (unsigned short)((uVar1 + 0x8000u) >> 0x10);
    uVar3 = (unsigned short)((unsigned short)((unsigned long long)lVar1 >> 0x20) +
                             (unsigned short)(0xffff7fffu < uVar1));
    *param_3 = (unsigned int)uVar2 | ((unsigned int)uVar3 << 0x10);
}
