/* SPDX-License-Identifier: MIT */
/* mercsw 1002f462 */
void __cdecl FUN_1002f462(int param_1, unsigned int *param_2)
{
    *(unsigned int *)(param_1 + 0xc) = param_2[0];
    *(unsigned int *)(param_1 + 0x10) = param_2[1];
    *(unsigned int *)(param_1 + 0x14) = param_2[2];
    *(unsigned int *)(param_1 + 0x18) = param_2[3];
    *(unsigned int *)(param_1 + 0x1c) = param_2[4];
    *(unsigned int *)(param_1 + 0x20) = param_2[5];
    *(unsigned int *)(param_1 + 0x24) = param_2[6];
    *(unsigned int *)(param_1 + 0x28) = param_2[7];
    *(unsigned int *)(param_1 + 0x2c) = param_2[8];
    *(unsigned int *)(param_1 + 0x74) = *(unsigned int *)(param_1 + 0x74) | 1;
}
