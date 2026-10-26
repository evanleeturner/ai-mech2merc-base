/* SPDX-License-Identifier: MIT */
/* mercsw 1000fc30 */
int ApproxLength3(int param_1, int param_2, int param_3)
{
    int iVar1;
    int largest;

    if (param_1 < 0) {
        param_1 = (int)(0u - (unsigned int)param_1);
    }
    if (param_2 < 0) {
        param_2 = (int)(0u - (unsigned int)param_2);
    }
    if (param_3 < 0) {
        param_3 = (int)(0u - (unsigned int)param_3);
    }
    iVar1 = param_1;
    if (param_1 < param_2) {
        iVar1 = param_2;
        param_2 = param_1;
    }
    largest = iVar1;
    if (iVar1 < param_3) {
        largest = param_3;
        param_3 = iVar1;
    }
    return (int)((unsigned int)largest * 4u + (unsigned int)param_2 + (unsigned int)param_3) >> 2;
}
