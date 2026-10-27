/* SPDX-License-Identifier: MIT */
/* mercsw 10015c4d */
void __cdecl ScalePointBySize(int param_1, int *param_2, int *param_3);

void __cdecl FUN_10015c4d(int param_1)
{
    *(unsigned int *)(param_1 + 0x94) = 0;
    *(unsigned int *)(param_1 + 0x98) = 0x8000;
    *(unsigned int *)(param_1 + 0x9c) = 0x8000;
    *(unsigned int *)(param_1 + 0xa0) = 0x2db7;
    ScalePointBySize(*(int *)(param_1 + 0xa4), (int *)(param_1 + 0x9c), (int *)(param_1 + 0x9c));
    ScalePointBySize(*(int *)(param_1 + 0xa4), (int *)(param_1 + 0x94), (int *)(param_1 + 0x94));
}
