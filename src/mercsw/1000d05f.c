/* SPDX-License-Identifier: MIT */
/* mercsw 1000d05f */
extern char DAT_101f64a0[];
extern char DAT_101f64a4[];
extern char DAT_101f64a8[];
extern char DAT_101f64ac[];
extern char DAT_101f64b0[];
extern char DAT_101f64b4[];
extern char DAT_101f64b8[];
extern char DAT_101f64bc[];
extern char DAT_101f64c0[];
extern char DAT_101f64c4[];
extern char DAT_101f64c8[];
extern char DAT_101f64cc[];
extern char DAT_101f64d0[];
extern char DAT_101f64d4[];
extern char DAT_101f64d8[];
extern char DAT_101f64dc[];
extern char DAT_101f64e0[];
extern char DAT_101f64e4[];
extern char DAT_101f6518[];

void __cdecl FUN_1000d05f(int param_1)
{
    unsigned int iVar1;

    iVar1 = (unsigned int)param_1 * 0x7cu;
    *(unsigned int *)(DAT_101f64a0 + iVar1) = 0xffffffffu;
    *(unsigned int *)(DAT_101f64a4 + iVar1) = 0xffffffffu;
    *(unsigned int *)(DAT_101f64a8 + iVar1) = 0xffffffffu;
    *(unsigned int *)(DAT_101f64ac + iVar1) = 0;
    *(unsigned int *)(DAT_101f64b0 + iVar1) = 0;
    *(unsigned int *)(DAT_101f64b4 + iVar1) = 0xffffffffu;
    *(unsigned int *)(DAT_101f64b8 + iVar1) = 0xffffffffu;
    *(unsigned int *)(DAT_101f64bc + iVar1) = 0;
    *(unsigned int *)(DAT_101f64c0 + iVar1) = 0;
    *(unsigned int *)(DAT_101f64cc + iVar1) = 1;
    *(unsigned int *)(DAT_101f64c8 + iVar1) = *(unsigned int *)(DAT_101f64cc + iVar1);
    *(unsigned int *)(DAT_101f64c4 + iVar1) = *(unsigned int *)(DAT_101f64c8 + iVar1);
    *(unsigned int *)(DAT_101f64d8 + iVar1) = 0;
    *(unsigned int *)(DAT_101f64d4 + iVar1) = *(unsigned int *)(DAT_101f64d8 + iVar1);
    *(unsigned int *)(DAT_101f64d0 + iVar1) = *(unsigned int *)(DAT_101f64d4 + iVar1);
    *(unsigned int *)(DAT_101f64e4 + iVar1) = 0;
    *(unsigned int *)(DAT_101f64e0 + iVar1) = *(unsigned int *)(DAT_101f64e4 + iVar1);
    *(unsigned int *)(DAT_101f64dc + iVar1) = *(unsigned int *)(DAT_101f64e0 + iVar1);
    *(unsigned int *)(DAT_101f6518 + iVar1) = 0;
    return;
}
