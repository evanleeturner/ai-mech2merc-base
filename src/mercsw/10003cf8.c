/* SPDX-License-Identifier: MIT */
/* mercsw 10003cf8 */
int QuadraticFalloffPercent(int param_1)
{
    int percent;
    int iVar2;

    if (param_1 < 0xc351) {
        iVar2 = param_1 / 100;
        iVar2 = (int)((unsigned int)iVar2 * (unsigned int)iVar2);
        iVar2 = (int)((unsigned int)iVar2 * 100u);
        iVar2 = iVar2 / 250000;
        percent = (int)(100u - (unsigned int)iVar2);
    }
    else {
        percent = 0;
    }
    return percent;
}
