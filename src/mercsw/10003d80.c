/* SPDX-License-Identifier: MIT */
/* mercsw 10003d80 */
void __cdecl FUN_10003d80(int *param_1)
{
    *(unsigned int *)*param_1 = 1;
    *(unsigned int *)(*param_1 + 4) = 0;
    return;
}
