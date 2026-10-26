/* SPDX-License-Identifier: MIT */
/* mercsw 10068026 */
void __cdecl FUN_10068026(int param_1)
{
    *(int *)(param_1 + 0x30) = (int)((unsigned int)*(int *)(param_1 + 0x30) + 1u);
    if (*(int *)(param_1 + 0x30) == 0xe) {
        *(int *)(param_1 + 0x30) = 0;
    }
    return;
}
