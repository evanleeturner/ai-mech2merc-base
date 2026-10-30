/* SPDX-License-Identifier: MIT */
/* mercsw 100456d9 */
extern void *DAT_100afbc0;
extern void *DAT_100b9d30;
extern unsigned int DAT_100c9680;
extern int DAT_10160bec;
extern unsigned char g_bitmapHeader100c9250_Likely[];
extern char s_GDI_BitBlt_Rect_err___d_100b0490[];

int __stdcall GetSystemMetrics(int);
unsigned long __stdcall GetLastError(void);
int __stdcall SetDIBitsToDevice(void *, int, int, unsigned long, unsigned long,
                                int, int, unsigned int, unsigned int,
                                void *, void *, unsigned int);
void __cdecl FUN_10002168(char *, ...);

unsigned int __cdecl FUN_100456d9(int xDest, int param_2, int param_3, int param_4)
{
    unsigned long h;
    unsigned long w;
    int iVar1;
    unsigned int uVar2;

    h = (unsigned long)((unsigned int)param_4 - (unsigned int)param_2 + 1u);
    w = (unsigned long)((unsigned int)param_3 - (unsigned int)xDest + 1u);
    iVar1 = GetSystemMetrics(0xf);
    DAT_10160bec = SetDIBitsToDevice(DAT_100afbc0, xDest,
                                     (int)((unsigned int)param_2 - (unsigned int)iVar1),
                                     w, h, xDest, param_2, 0,
                                     DAT_100c9680, DAT_100b9d30,
                                     (void *)&g_bitmapHeader100c9250_Likely, 1);
    if (DAT_10160bec == 0) {
        /* GetLastError result is passed as the %d argument (decompiler dropped it) */
        FUN_10002168(s_GDI_BitBlt_Rect_err___d_100b0490, GetLastError());
    }
    if ((unsigned int)DAT_10160bec == DAT_100c9680) {
        uVar2 = 0;
    }
    else {
        uVar2 = 0xffffffffu;
    }
    return uVar2;
}
