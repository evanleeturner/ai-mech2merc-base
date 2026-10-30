/* SPDX-License-Identifier: MIT */
/* mw2shell 10056bb0 */
int __cdecl IsPointInsideRect(int *param_1, short param_2, short param_3)
{
    if (param_1[1] < (int)param_2 && (int)param_2 < param_1[3] &&
        param_1[2] < (int)param_3 && (int)param_3 < *param_1) {
        return 1;
    }
    return 0;
}
