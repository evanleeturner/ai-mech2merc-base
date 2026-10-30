/* SPDX-License-Identifier: MIT */
/* mercsw 10081cf7 */
extern int *DAT_100b9a1c;
extern int DAT_100b9a28;
extern int DAT_100b9a24;
extern int DAT_100b9d60;
extern unsigned int DAT_100c8500;
extern int DAT_100c8504;
extern int DAT_100b9a2c;
extern int DAT_100c967c;
extern int DAT_100c9680;
extern int *PTR_DAT_100b9a04[];
extern char s_Refresh_mode__d_start___u__d__en_100b9d84[];
extern char s_Refresh_mode__d_not_available_100b9db8[];

int __stdcall QueryPerformanceCounter(void *);
void __cdecl FUN_10002168(char *, ...);
void __cdecl FUN_10081ef2(void);

void __stdcall FUN_10081cf7(void)
{
    int BVar1;
    int iVar2;
    struct {
        unsigned int LowPart;
        int HighPart;
    } local_c;

    if (DAT_100b9a28 < *DAT_100b9a1c) {
        DAT_100b9a24 = 0;
    }
    else if (DAT_100b9d60 == 1) {
        BVar1 = QueryPerformanceCounter((void *)&DAT_100c8500);
        if (BVar1 == 0) {
            DAT_100b9a24 = 0;
        }
        else {
            DAT_100b9d60 = (int)((unsigned int)DAT_100b9d60 + 1u);
        }
    }
    else if (DAT_100b9d60 == 5) {
        BVar1 = QueryPerformanceCounter((void *)&local_c);
        if (BVar1 == 0) {
            DAT_100b9a24 = 0;
        }
        else {
            if (local_c.HighPart == DAT_100c8504) {
                DAT_100b9a1c[3] = (int)(local_c.LowPart - DAT_100c8500);
            }
            else {
                DAT_100b9a1c[3] = (int)(~DAT_100c8500 + local_c.LowPart + 1u);
            }
            FUN_10002168(s_Refresh_mode__d_start___u__d__en_100b9d84,
                         *DAT_100b9a1c,
                         DAT_100c8500,
                         DAT_100c8504,
                         local_c.LowPart,
                         local_c.HighPart,
                         DAT_100b9a1c[3]);
            if (*DAT_100b9a1c == DAT_100b9a28) {
                DAT_100b9a24 = 0;
            }
            else {
                while (*DAT_100b9a1c < DAT_100b9a28) {
                    ((void (__cdecl *)(void))DAT_100b9a1c[5])();
                    DAT_100b9a1c = PTR_DAT_100b9a04[*DAT_100b9a1c];
                    if ((DAT_100b9a1c[2] != 0) &&
                        (iVar2 = ((int (__cdecl *)(int, int, int))DAT_100b9a1c[4])(DAT_100b9a2c, DAT_100c967c, DAT_100c9680),
                         iVar2 == 0)) {
                        DAT_100b9d60 = 0;
                        break;
                    }
                    FUN_10002168(s_Refresh_mode__d_not_available_100b9db8, *DAT_100b9a1c);
                    DAT_100b9a1c[2] = 0;
                    if (*DAT_100b9a1c == DAT_100b9a28) {
                        DAT_100b9a24 = 0;
                    }
                }
            }
            if (DAT_100b9a24 == 0) {
                FUN_10081ef2();
            }
        }
    }
    else {
        DAT_100b9d60 = (int)((unsigned int)DAT_100b9d60 + 1u);
    }
    return;
}
