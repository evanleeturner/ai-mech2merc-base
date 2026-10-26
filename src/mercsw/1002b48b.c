/* SPDX-License-Identifier: MIT */
/* mercsw 1002b48b */
int __cdecl SwapOneAndTwo(int param_1)
{
    int result;

    if (param_1 == 1) {
        result = 2;
    } else if (param_1 == 2) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}
