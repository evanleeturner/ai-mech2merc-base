/* SPDX-License-Identifier: MIT */
/* mw2shell 1005f920 */
extern int *PTR_DAT_100a7230[];
extern int *PTR_DAT_100a7220[];
extern int *PTR_DAT_100a7234[];
extern int DAT_100a7254;
extern int DAT_100c5c20;
extern int DAT_100c5c24;
extern int DAT_100c5c28;
extern int DAT_100c5c2c;
extern unsigned int DAT_1008d980;
extern int DAT_100a757c;
extern int DAT_100a7580;
extern int *DAT_100a724c;
extern int DAT_100c605c;
extern int DAT_100c6060;
extern int DAT_100c6058;
extern int *DAT_100a7248;
extern unsigned int DAT_100a725c;
extern void *DAT_100d08e8;
extern char s_RefreshMode__d_not_available_100a7594[];

int __stdcall GetSystemMetrics(int nIndex);
int __stdcall AdjustWindowRect(void *lpRect, unsigned long dwStyle, int bMenu);
int __stdcall ShowWindow(void *hWnd, int nCmdShow);
int __stdcall UpdateWindow(void *hWnd);
void __cdecl FUN_10060070(int param_1);
void __cdecl FUN_100640a0(char *param_1, int param_2);

unsigned int __cdecl FUN_1005f920(int param_1, int param_2, unsigned int param_3,
                                  int param_4, int param_5, int param_6)
{
    int *piVar1;
    int iVar2;
    int iVar3;
    int *piVar4;

    piVar4 = PTR_DAT_100a7230[0];
    if (param_1 != -1) {
        if ((param_1 < 0) || (5 < param_1)) {
            return 0;
        }
        piVar4 = PTR_DAT_100a7230[param_1];
    }
    DAT_100a7254 = param_2;
    piVar1 = PTR_DAT_100a7220[piVar4[1]];
    iVar2 = GetSystemMetrics(0);
    iVar3 = GetSystemMetrics(1);
    DAT_100c5c20 = 0;
    DAT_100c5c24 = 0;
    DAT_100c5c28 = param_4;
    DAT_100c5c2c = param_5;
    if ((param_4 < iVar2) || (param_5 < iVar3)) {
        DAT_1008d980 = 0xca0000;
        AdjustWindowRect(&DAT_100c5c20, 0xca0000, param_6);
        DAT_100c5c28 = (int)((unsigned int)DAT_100c5c28 - (unsigned int)DAT_100c5c20);
        DAT_100c5c2c = (int)((unsigned int)DAT_100c5c2c - (unsigned int)DAT_100c5c24);
        DAT_100c5c24 = (int)((unsigned int)iVar3 - (unsigned int)DAT_100c5c2c) / 2;
        DAT_100c5c20 = (int)((unsigned int)iVar2 - (unsigned int)DAT_100c5c28) / 2;
        DAT_100a757c = piVar1[1];
    }
    else {
        DAT_1008d980 = 0x80000000;
        DAT_100a757c = 1;
    }
    if (piVar1[1] == 1) {
        GetSystemMetrics(0);
        GetSystemMetrics(1);
    }
    if (DAT_100a7580 == 0) {
        if (((piVar4 != DAT_100a724c) || (DAT_100c605c != param_4)) || (DAT_100c6060 != param_5)) {
            FUN_10060070((int)piVar1);
            ((void (__cdecl *)(void))DAT_100a724c[5])();
        }
    }
    else {
        DAT_100c605c = param_4;
        DAT_100c6060 = param_5;
        FUN_10060070((int)piVar1);
        DAT_100a7248 = piVar1;
    }
    DAT_100c6058 = (int)((unsigned int)param_5 * (unsigned int)param_4);
    iVar2 = piVar4[2];
    DAT_100c605c = param_4;
    DAT_100c6060 = param_5;
    DAT_100a725c = param_3;
    DAT_100a724c = piVar4;
    while (1) {
        if ((iVar2 == 0) ||
            (iVar2 = ((int (__cdecl *)(unsigned int, int, int))DAT_100a724c[4])(param_3, param_4, param_5),
             iVar2 == 0)) {
            if ((DAT_100a7580 != 0) && (*piVar1 != 2)) {
                ShowWindow(DAT_100d08e8, 10);
                UpdateWindow(DAT_100d08e8);
            }
            DAT_100a7580 = 0;
            return 1;
        }
        FUN_100640a0(s_RefreshMode__d_not_available_100a7594, *DAT_100a724c);
        DAT_100a724c[2] = 0;
        if ((DAT_100a7254 == 0) || (*DAT_100a724c == 5)) {
            break;
        }
        DAT_100a724c = PTR_DAT_100a7234[*DAT_100a724c];
        iVar2 = DAT_100a724c[2];
    }
    return 0;
}
