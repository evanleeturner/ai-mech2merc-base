/* SPDX-License-Identifier: MIT */
/* mercsw 1000d332 */
extern char DAT_101f64ac[];

void __cdecl FUN_1000d332(int param_1, unsigned int param_2)
{
    unsigned int iVar1;

    iVar1 = (unsigned int)param_1 * 0x7cu;
    *(unsigned int *)(DAT_101f64ac + iVar1) = *(unsigned int *)(DAT_101f64ac + iVar1) & 0xffff0fffu;
    *(unsigned int *)(DAT_101f64ac + iVar1) = *(unsigned int *)(DAT_101f64ac + iVar1) | ((param_2 & 0xfu) << 0xc);
}
