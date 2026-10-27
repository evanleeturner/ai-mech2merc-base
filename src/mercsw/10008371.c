/* SPDX-License-Identifier: MIT */
/* mercsw 10008371 */
extern int DAT_100a5030[];

void __cdecl FUN_10008371(int param_1, int param_2)
{
    int iVar1;

    iVar1 = (int)((unsigned int)param_1 - 1u);
    if ((((-1 < iVar1) && (iVar1 < 5)) && (-1 < param_2)) && ((param_2 < 0x21 && (iVar1 != 3)))) {
        DAT_100a5030[iVar1 * 2] = param_2;
    }
    return;
}
