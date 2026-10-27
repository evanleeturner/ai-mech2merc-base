/* SPDX-License-Identifier: MIT */
/* mercsw 10011e80 */
extern int DAT_100aa1d8;

int __cdecl FUN_10011e80(int param_1)
{
    int iVar1;
    int local_8;

    if (DAT_100aa1d8 == 0) {
        iVar1 = (int)((unsigned int)param_1 + 0xffffffffU);
    }
    else {
        for (local_8 = 0; local_8 < 8; local_8 = (int)((unsigned int)local_8 + 1U)) {
            if (*(int *)((unsigned int)*(int *)((unsigned int)DAT_100aa1d8 + 0x10U) + (unsigned int)local_8 * 4U) == param_1) {
                return local_8;
            }
        }
        iVar1 = 0;
    }
    return iVar1;
}
