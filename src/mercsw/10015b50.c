/* SPDX-License-Identifier: MIT */
/* mercsw 10015b50 */
void __cdecl ScalePointBySize(int param_1, int *param_2, int *param_3);

void __cdecl FUN_10015b50(int param_1)
{
    *(unsigned int *)(param_1 + 0x74) = 0;
    *(unsigned int *)(param_1 + 0x78) = 0x8000;
    *(unsigned int *)(param_1 + 0x7c) = 0x8000;
    *(unsigned int *)(param_1 + 0x80) = 0x2db7;
    ScalePointBySize(*(int *)(param_1 + 0xa4), (int *)(param_1 + 0x7c), (int *)(param_1 + 0x7c));
    ScalePointBySize(*(int *)(param_1 + 0xa4), (int *)(param_1 + 0x74), (int *)(param_1 + 0x74));
    return;
}
