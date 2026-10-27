/* SPDX-License-Identifier: MIT */
/* mw2shell 10036390 */
extern int __cdecl FUN_1005e020(uint param_1, char *param_2);

int __thiscall FUN_10036390(void *this, char *param_1, uint param_2)
{
    if (*(int *)this < 0) {
        return -1;
    }
    return FUN_1005e020(param_2, param_1);
}
