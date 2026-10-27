/* SPDX-License-Identifier: MIT */
/* mercsw 100810c0 */
unsigned int __cdecl FUN_1002cd5d(int param_1);

unsigned int __stdcall FUN_100810c0(void)
{
    if (FUN_1002cd5d(0x100) == 0 && FUN_1002cd5d(0x200) == 0) {
        return 0;
    }
    return 1;
}
