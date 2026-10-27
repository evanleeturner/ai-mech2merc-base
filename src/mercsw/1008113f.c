/* SPDX-License-Identifier: MIT */
/* mercsw 1008113f */
unsigned int __cdecl FUN_1002cd5d(int param_1);

extern int DAT_100ae750;

unsigned int __stdcall FUN_1008113f(void)
{
    if (FUN_1002cd5d(0x800) == 0 && DAT_100ae750 == 0) {
        return 0;
    }
    return 1;
}
