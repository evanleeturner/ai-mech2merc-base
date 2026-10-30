/* SPDX-License-Identifier: MIT */
/* mercsw 1004563f */
extern void *DAT_100afbc0;
extern int DAT_100c9680;
extern void *DAT_100b9d30;
extern unsigned char g_bitmapHeader100c9250_Likely[];
extern int DAT_10160bec;
extern char s_GDI_BitBlt_Rect_err___d_100b0474[];

int __stdcall SetDIBitsToDevice(void *, int, int, unsigned int, unsigned int, int, int, unsigned int, unsigned int, const void *, const void *, unsigned int);
unsigned long __stdcall GetLastError(void);
void __cdecl FUN_10002168(char *, unsigned long);

unsigned int __cdecl FUN_1004563f(int param_1, int yDest, int param_3, int param_4)
{
    unsigned int uVar1;

    DAT_10160bec = SetDIBitsToDevice(DAT_100afbc0, param_1, yDest,
                                     (unsigned int)(((unsigned int)param_3 - (unsigned int)param_1) + 1u),
                                     (unsigned int)(((unsigned int)param_4 - (unsigned int)yDest) + 1u),
                                     param_1,
                                     (int)(((unsigned int)DAT_100c9680 - (unsigned int)param_4) + 0xffffffffu),
                                     0, (unsigned int)DAT_100c9680, DAT_100b9d30,
                                     (const void *)g_bitmapHeader100c9250_Likely, 1);
    if (DAT_10160bec == 0) {
        FUN_10002168(s_GDI_BitBlt_Rect_err___d_100b0474, GetLastError());
    }
    if (DAT_10160bec == DAT_100c9680) {
        uVar1 = 0;
    }
    else {
        uVar1 = 0xffffffffu;
    }
    return uVar1;
}
