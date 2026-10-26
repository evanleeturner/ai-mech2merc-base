/* SPDX-License-Identifier: MIT */
/* mercsw 1002f37a */
void __cdecl FUN_1002f37a(int param_1, unsigned int param_2, unsigned int param_3, unsigned int param_4)
{
    *(unsigned int *)(param_1 + 0x30) = param_2;
    *(unsigned int *)(param_1 + 0x34) = param_3;
    *(unsigned int *)(param_1 + 0x38) = param_4;
    *(unsigned int *)(param_1 + 0x74) = *(unsigned int *)(param_1 + 0x74) | 1;
}
