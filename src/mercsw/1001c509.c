/* SPDX-License-Identifier: MIT */
/* mercsw 1001c509 */
void __cdecl FUN_1001c509(int param_1, undefined4 param_2)
{
    if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0) {
        **(undefined4 **)(param_1 + 0x20) = param_2;
    }
    return;
}
