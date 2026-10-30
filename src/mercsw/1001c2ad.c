/* SPDX-License-Identifier: MIT */
/* mercsw 1001c2ad */
void __cdecl SetCurrentNode(int param_1, int param_2);

void __cdecl FUN_1001c2ad(int param_1)
{
    if ((*(int *)(param_1 + 0x20) == 0) || (*(int *)(*(int *)(param_1 + 0x20) + 0xc) == 0)) {
        SetCurrentNode(param_1, *(int *)(param_1 + 0x1c));
    }
    else {
        SetCurrentNode(param_1, *(int *)(*(int *)(param_1 + 0x20) + 0xc));
    }
    return;
}
