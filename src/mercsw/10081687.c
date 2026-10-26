/* SPDX-License-Identifier: MIT */
/* mercsw 10081687 */
unsigned int __cdecl FUN_10081687(int param_1, int param_2)
{
    int iVar1;
    unsigned int uVar2;

    /* The subtraction wraps in the original, so it is done on unsigned operands. */
    iVar1 = (int)((unsigned int)*(int *)(param_2 + 4) - (unsigned int)*(int *)(param_1 + 4));
    if (iVar1 < 0) {
        uVar2 = 0xffffffffu;
    }
    else if (iVar1 < 1) {
        uVar2 = 0;
    }
    else {
        uVar2 = 1;
    }
    return uVar2;
}
