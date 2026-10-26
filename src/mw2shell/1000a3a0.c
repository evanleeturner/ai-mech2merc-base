/* SPDX-License-Identifier: MIT */
/* mw2shell 1000a3a0 */
int __cdecl FUN_1000a3a0(int param_1)
{
    extern int DAT_1008379c[];
    int iVar1;
    int *piVar2;
    int iTarget;

    iVar1 = 0;
    piVar2 = DAT_1008379c;
    iTarget = (int)((((unsigned int)param_1 * 4u) + 400u) * 0x19u) / 100;
    do {
        if (*piVar2 == -1) {
            return iVar1;
        }
        if (*piVar2 / 100 == iTarget) {
            iVar1 = iVar1 + 1;
        }
        piVar2 = piVar2 + 1;
    } while (piVar2 < &DAT_1008379c[25]);
    return iVar1;
}
