/* SPDX-License-Identifier: MIT */
/* mercsw 1000c674 */
extern int DAT_100a7578;
extern int DAT_100a757c;
extern int DAT_100a7580;

bool __cdecl FUN_1000c674(unsigned int param_1, unsigned int param_2)
{
    bool bVar1;

    bVar1 = DAT_100a7578 < DAT_100a757c;
    if (bVar1) {
        *(unsigned int *)((unsigned int)DAT_100a7580 + (unsigned int)DAT_100a7578 * 8u) = param_1;
        *(unsigned int *)((unsigned int)DAT_100a7580 + 4u + (unsigned int)DAT_100a7578 * 8u) = param_2;
        DAT_100a7578 = (int)((unsigned int)DAT_100a7578 + 1u);
    }
    return bVar1;
}
