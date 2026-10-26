/* SPDX-License-Identifier: MIT */
/* mw2shell 1000a690 */
void __cdecl FUN_1000a690(int param_1)
{
    int iVar1;
    int num;

    if (*(int *)(param_1 + 0x200) == 0) {
        *(int *)(param_1 + 0x200) = 1;
    }
    num = (int)((unsigned int)*(int *)(param_1 + 0x210) * 100u);
    iVar1 = num / *(int *)(param_1 + 0x200);
    *(int *)(param_1 + 0x280) = iVar1;
    *(int *)(param_1 + 0x284) = (int)((unsigned int)iVar1 * 3u + 2u) / 2;
    return;
}
