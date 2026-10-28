/* SPDX-License-Identifier: MIT */
/* mw2shell 10035d10 */
extern int DAT_10092000;
extern int DAT_10092004;
extern int DAT_10091ffc;
extern int DAT_100a6798;

unsigned int __cdecl FUN_10030160(int param_1, int param_2);

void __stdcall FUN_10035d10(void)
{
    unsigned int uVar1;
    
    uVar1 = FUN_10030160(DAT_10092000, DAT_10092004);
    if ((char)uVar1 == 1) {
        DAT_10091ffc = DAT_10091ffc + 1;
        if (*(int *)(DAT_100a6798 + 4) <= DAT_10091ffc) {
            DAT_10091ffc = 0;
        }
    }
    return;
}
