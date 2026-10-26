/* SPDX-License-Identifier: MIT */
/* mw2shell 1000d260 */
extern int DAT_10082cf0[];

int __cdecl FUN_1000d260(int param_1, int param_2)
{
    int *piVar1;
    int iVar2;

    if (param_1 == 0) {
        return param_2 / 100;
    }
    if (param_1 != 1) {
        if (param_1 != 2) {
            return -1;
        }
        iVar2 = 0x16;
        piVar1 = DAT_10082cf0;
        do {
            if (*piVar1 / 0x32 == param_2 / 0x32) {
                return iVar2;
            }
            piVar1 = piVar1 - 3;
            iVar2 = (int)((unsigned int)iVar2 - 1u);
        } while ((int *)0x10082be7 < piVar1);
        return -1;
    }
    return (int)((unsigned int)param_2 - 10000u) / 10000;
}
