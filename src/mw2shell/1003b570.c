/* SPDX-License-Identifier: MIT */
/* mw2shell 1003b570 */
extern int DAT_1009463c;

void __cdecl FUN_1003b570(int index_Likely)
{
    int iVar1;

    iVar1 = (int)((unsigned int)index_Likely + 1u);
    if (DAT_1009463c < iVar1) {
        DAT_1009463c = iVar1;
    }
    return;
}
