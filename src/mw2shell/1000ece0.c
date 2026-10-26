/* SPDX-License-Identifier: MIT */
/* mw2shell 1000ece0 */
unsigned int __cdecl FUN_1000ece0(int param_1, unsigned int param_2)
{
    if (*(unsigned int *)(param_1 + 0x48) <= param_2) {
        *(unsigned int *)(param_1 + 0x48) = (unsigned int)*(int *)(param_1 + 0x44) + param_2;
        return 0;
    }
    return 0xffffffffu;
}
