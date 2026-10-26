/* SPDX-License-Identifier: MIT */
/* mercsw 1002f3a7 */
void __cdecl FUN_1002f3a7(int param_1, int param_2, int param_3, int param_4)
{
    *(unsigned int *)(param_1 + 0x30) = (unsigned int)*(int *)(param_1 + 0x30) + (unsigned int)param_2;
    *(unsigned int *)(param_1 + 0x34) = (unsigned int)*(int *)(param_1 + 0x34) + (unsigned int)param_3;
    *(unsigned int *)(param_1 + 0x38) = (unsigned int)*(int *)(param_1 + 0x38) + (unsigned int)param_4;
    *(unsigned int *)(param_1 + 0x74) = *(unsigned int *)(param_1 + 0x74) | 1;
}
