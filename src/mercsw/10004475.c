/* SPDX-License-Identifier: MIT */
/* mercsw 10004475 */
void __cdecl FUN_10004475(int *param_1)
{
    int iVar1;
    unsigned int uVar2;

    if (param_1[0xfc] != 1) {
        iVar1 = *param_1;
        uVar2 = (unsigned int)*(int *)(iVar1 + 0x60) + 0x1680000u + (unsigned int)param_1[3];
        *(int *)(iVar1 + 0xfc) = (int)uVar2 % 0x1680000;
    }
}
