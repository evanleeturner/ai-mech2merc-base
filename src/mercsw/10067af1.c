/* SPDX-License-Identifier: MIT */
/* mercsw 10067af1 */
extern int DAT_100b38fc;

int __cdecl FUN_10067af1(int *param_1)
{
    int iVar1;
    int iVar2;

    iVar1 = (int)((unsigned int)param_1[1] - (unsigned int)param_1[2]);
    if (iVar1 != 0) {
        iVar2 = ((int)(((unsigned int)DAT_100b38fc - (unsigned int)*param_1) * (unsigned int)iVar1)) / param_1[3];
        if (((iVar1 < 0) && (iVar2 <= iVar1)) || ((0 < iVar1) && (iVar1 <= iVar2))) {
            param_1[2] = param_1[1];
        }
        else {
            param_1[2] = (int)((unsigned int)param_1[2] + (unsigned int)iVar2);
        }
    }
    *param_1 = DAT_100b38fc;
    return param_1[2];
}
