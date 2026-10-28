/* SPDX-License-Identifier: MIT */
/* mw2shell 1000cec0 */
int __cdecl FUN_10018060(int param_1, int param_2);

unsigned int __cdecl FUN_1000cec0(int param_1)
{
    int iVar1;
    int iVar2;
    unsigned int in_EAX;

    iVar2 = 0;
    if (*(int *)(param_1 + 4) > 0) {
        do {
            iVar1 = FUN_10018060(param_1, iVar2);
            if (*(char *)(iVar1 + 0x2064) == 1 && *(int *)(iVar1 + 0x20) != -1) {
                return (iVar1 >> 8) | 1;
            }
            iVar2 = iVar2 + 1;
            in_EAX = *(unsigned int *)(param_1 + 4);
        } while (iVar2 < (int)in_EAX);
    }
    return 0;
}
