/* SPDX-License-Identifier: MIT */
/* mercsw 10072715 */
int __cdecl ScaleBy150Or75Percent(int param_1, int param_2)
{
    int result;

    if (param_1 == 1) {
        result = (int)((unsigned int)(param_2 >> 1) + (unsigned int)param_2);
    }
    else if (param_1 == 2) {
        result = param_2;
    }
    else if (param_1 == 3) {
        result = (int)((unsigned int)param_2 - (unsigned int)(param_2 >> 2));
    }
    else {
        result = param_2;
    }
    return result;
}
