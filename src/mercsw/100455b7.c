/* SPDX-License-Identifier: MIT */
/* mercsw 100455b7 */
extern void *DAT_100afbc0;
extern int DAT_100c967c;
extern int DAT_100c9680;
extern void *DAT_100b9d30;
extern unsigned char g_bitmapHeader100c9250_Likely[];
extern int DAT_10160bec;
extern char s_GDI_StretchBlt_err___d_100b045c[];

int __stdcall SetDIBitsToDevice(void *, int, int, unsigned int, unsigned int, int, int, unsigned int, unsigned int, const void *, const void *, unsigned int);
unsigned long __stdcall GetLastError(void);
void __cdecl FUN_10002168(char *, unsigned long);

unsigned int __stdcall FUN_100455b7(void)
{
    unsigned int uVar1;

    DAT_10160bec = SetDIBitsToDevice(DAT_100afbc0, 0, 0,
                                     (unsigned int)DAT_100c967c,
                                     (unsigned int)DAT_100c9680,
                                     0, 0, 0,
                                     (unsigned int)DAT_100c9680,
                                     DAT_100b9d30,
                                     (const void *)g_bitmapHeader100c9250_Likely, 1);
    if (DAT_10160bec == 0) {
        FUN_10002168(s_GDI_StretchBlt_err___d_100b045c, GetLastError());
    }
    if (DAT_10160bec == DAT_100c9680) {
        uVar1 = 0;
    }
    else {
        uVar1 = 0xffffffffu;
    }
    return uVar1;
}
