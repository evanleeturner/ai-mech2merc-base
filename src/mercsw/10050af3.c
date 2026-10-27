/* SPDX-License-Identifier: MIT */
/* mercsw 10050af3 */
extern uint DAT_101155e0;

void __cdecl FUN_10050af3(int param_1, uint param_2)
{
    *(uint *)(&DAT_101155e0 + param_1 * 0x48) = param_2 & 0xffff;
    return;
}
