/* SPDX-License-Identifier: MIT */
/* mercsw 1002f272 */
void __cdecl FUN_1002f272(int param_1, unsigned int param_2)
{
    *(unsigned int *)(param_1 + 0x6c) = param_2;
    *(unsigned int *)(param_1 + 0x74) = *(unsigned int *)(param_1 + 0x74) | 1;
}
