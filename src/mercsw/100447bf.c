/* SPDX-License-Identifier: MIT */
/* mercsw 100447bf */
int __cdecl ClampSymmetric(int param_1, int limit)
{
    if (limit < param_1) {
        param_1 = limit;
    }
    else if ((int)(0u - (unsigned int)param_1) != limit &&
             param_1 <= (int)(0u - (unsigned int)limit)) {
        param_1 = (int)(0u - (unsigned int)limit);
    }
    return param_1;
}
