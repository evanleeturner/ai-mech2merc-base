/* SPDX-License-Identifier: MIT */
/* mercsw 10013b09 */
extern char s_WinSock_IPX_Connection_For_Direc_100aa2d8[];
extern unsigned int DAT_100aa214;

unsigned int __stdcall FUN_10013b09(unsigned int param_1, char *param_2)
{
    int iVar1;
    char *pcVar2;
    int in_ZF;

    in_ZF = 0;
    iVar1 = 0x26;
    pcVar2 = s_WinSock_IPX_Connection_For_Direc_100aa2d8;
    do {
        if (iVar1 == 0) {
            break;
        }
        iVar1 = (int)((unsigned int)iVar1 - 1U);
        in_ZF = (*param_2 == *pcVar2);
        param_2 = param_2 + 1;
        pcVar2 = pcVar2 + 1;
    } while (in_ZF);
    if (in_ZF) {
        DAT_100aa214 = param_1;
    }
    return 1;
}
