/* SPDX-License-Identifier: MIT */
/* mercsw 1002974a */
void __cdecl ClampedAdd1024(int unusedArg1, int param_2, int param_3);

void __cdecl FUN_1002974a(unsigned int unusedArg1, int param_2, int param_3)
{
    ClampedAdd1024(param_2 / 0x2d00, (int)((unsigned int)param_3 * 2u), 1);
    return;
}
