/* SPDX-License-Identifier: MIT */
/* mercsw 10015cd4 */
void __cdecl ScalePointBySize(int param_1, int *param_2, int *param_3);

void __cdecl FUN_10015cd4(int param_1)
{
    *(int *)(param_1 + 0x34) = 0x1e7a;
    *(int *)(param_1 + 0x38) = 0x8dc9;
    ScalePointBySize(*(int *)(param_1 + 0xa4), (int *)(param_1 + 0x34), (int *)(param_1 + 0x34));
    *(int *)(param_1 + 0x3c) =
        (int)(((unsigned int)(int)*(short *)(param_1 + 0xb8) - (unsigned int)*(int *)(param_1 + 0x34))
              + 0xFFFFFFFFu);
    *(int *)(param_1 + 0x40) =
        (int)(((unsigned int)(int)*(short *)(param_1 + 0xba) -
               ((unsigned int)*(int *)(param_1 + 0x38) +
                (unsigned int)(*(int *)(param_1 + 0x38) / 2)))
              + 0xFFFFFFFDu);
    *(int *)(param_1 + 0x44) = (int)*(short *)(param_1 + 0xb8) + -1;
    *(int *)(param_1 + 0x48) = (int)*(short *)(param_1 + 0xba) + -1;
    *(int *)(param_1 + 0x4c) = (int)((unsigned int)*(int *)(param_1 + 0x3c) + 1u);
    *(int *)(param_1 + 0x50) =
        (int)(((unsigned int)(int)*(short *)(param_1 + 0xba) -
               (unsigned int)(*(int *)(param_1 + 0x38) / 2))
              + 0xFFFFFFFEu);
}
