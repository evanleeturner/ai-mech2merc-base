/* SPDX-License-Identifier: MIT */
/* mercsw 1001c569 */
void __cdecl FUN_1001c569(int param_1, undefined2 param_2)
{
    if (*(int *)(param_1 + 0x20) != 0) {
        *(undefined2 *)(*(int *)(param_1 + 0x20) + 0x14) = param_2;
    }
    return;
}
