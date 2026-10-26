/* SPDX-License-Identifier: MIT */
/* mercsw 1007074a */
extern int DAT_100adf38;

void __cdecl FUN_1007074a(int param_1)
{
    if (*(int *)(param_1 + 4) != DAT_100adf38) {
        *(unsigned int *)(param_1 + 0x90) = 0x11a;
    }
    *(unsigned int *)(param_1 + 0x8c) = 0;
    *(unsigned int *)(param_1 + 0x88) = 0xffffffffu;
    return;
}
