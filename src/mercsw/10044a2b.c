/* SPDX-License-Identifier: MIT */
/* mercsw 10044a2b */
extern int DAT_100b3904;

int __cdecl FUN_10044a2b(int param_1)
{
    int iVar1;

    if (DAT_100b3904 == 0) {
        iVar1 = 0;
    }
    else {
        iVar1 = (*(int *)(param_1 + 0x1ee) - *(int *)(param_1 + 0xc0)) / DAT_100b3904;
        *(int *)(param_1 + 0x1ee) = *(int *)(param_1 + 0xc0);
    }
    return iVar1;
}
