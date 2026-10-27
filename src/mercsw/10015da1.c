/* SPDX-License-Identifier: MIT */
/* mercsw 10015da1 */
void __cdecl ScalePointBySize(int param_1, int *param_2, int *param_3);

void __cdecl FUN_10015da1(int param_1)
{
    *(int *)(param_1 + 0x5c) = 0x1e7a;
    *(int *)(param_1 + 0x60) = 0x8dc9;
    *(int *)(param_1 + 0x54) = 0;
    *(int *)(param_1 + 0x58) = 0;
    ScalePointBySize(*(int *)(param_1 + 0xa4), (int *)(param_1 + 0x5c), (int *)(param_1 + 0x5c));
    ScalePointBySize(*(int *)(param_1 + 0xa4), (int *)(param_1 + 0x54), (int *)(param_1 + 0x54));
    *(int *)(param_1 + 0x64) = 0;
    *(int *)(param_1 + 0x68) =
        (int)(((unsigned int)(int)*(short *)(param_1 + 0xba) -
               ((unsigned int)*(int *)(param_1 + 0x60) +
                (unsigned int)(*(int *)(param_1 + 0x60) / 2)))
              + 0xFFFFFFFDu);
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x70) = (int)*(short *)(param_1 + 0xba) + -1;
    *(int *)(param_1 + 0x54) = (int)((unsigned int)*(int *)(param_1 + 0x64) + 1u);
    *(int *)(param_1 + 0x58) = (int)*(short *)(param_1 + 0xba) + -2;
    *(int *)(param_1 + 0x60) =
        (int)(((unsigned int)*(int *)(param_1 + 0x70) -
               (unsigned int)*(int *)(param_1 + 0x68)) + 0xFFFFFFFEu);
}
