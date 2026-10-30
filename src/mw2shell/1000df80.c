/* SPDX-License-Identifier: MIT */
/* mw2shell 1000df80 */
extern void *DAT_1008d150;
extern int DAT_100c605c;
extern int DAT_100c6060;
extern void *DAT_1008d55c;
extern int DAT_100d1540;
extern char s_GDI_StretchBlt_err___d_1008da0c[];

int __stdcall BitBlt(void *hdc, int x, int y, int cx, int cy, void *hdcSrc, int x1, int y1, unsigned long rop);
unsigned long __stdcall GetLastError(void);
void __cdecl FUN_100640a0(const char *fmt, ...);

int __stdcall BlitBufferToScreen_Likely(void)
{
    DAT_100d1540 = BitBlt(DAT_1008d150, 0, 0, DAT_100c605c, DAT_100c6060, DAT_1008d55c, 0, 0, 0xcc0020);
    if (DAT_100d1540 == 0) {
        FUN_100640a0(s_GDI_StretchBlt_err___d_1008da0c, GetLastError());
    }
    return (int)((unsigned int)(DAT_100c6060 == DAT_100d1540) - 1u);
}
