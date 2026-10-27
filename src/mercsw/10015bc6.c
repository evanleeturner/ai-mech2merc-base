/* SPDX-License-Identifier: MIT */
/* mercsw 10015bc6 */
void __cdecl ScalePointBySize(int param_1, int *param_2, int *param_3);

void __cdecl FUN_10015bc6(int param_1)
{
    *(unsigned int *)(param_1 + 0x84) = 0;
    *(unsigned int *)(param_1 + 0x88) = 0x3333;
    *(unsigned int *)(param_1 + 0x8c) = 0xea4e;
    *(unsigned int *)(param_1 + 0x90) = 0x5555;
    ScalePointBySize(*(int *)(param_1 + 0xa4), (int *)(param_1 + 0x8c), (int *)(param_1 + 0x8c));
    ScalePointBySize(*(int *)(param_1 + 0xa4), (int *)(param_1 + 0x84), (int *)(param_1 + 0x84));
}
