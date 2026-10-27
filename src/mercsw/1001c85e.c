/* SPDX-License-Identifier: MIT */
/* mercsw 1001c85e */
void __cdecl FUN_1001c85e(int param_1, int param_2, undefined1 param_3)
{
    if (*(int *)(param_1 + 0x20) != 0) {
        *(undefined1 *)((unsigned int)*(unsigned short *)(param_2 + 2) + *(int *)(param_2 + 4) + param_2) = param_3;
        *(short *)(param_2 + 2) = (short)((unsigned int)(int)*(short *)(param_2 + 2) + 1u);
    }
    return;
}
