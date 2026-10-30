/* SPDX-License-Identifier: MIT */
/* mw2shell 1000dee0 */
extern void *DAT_1008d150;
extern void *DAT_1008d55c;
extern void *DAT_1008d560;
extern void **DAT_100a725c;
extern void *DAT_100a7560;
extern int DAT_100d1540;
extern void *DAT_100d1544;
extern unsigned char DAT_1008d158[];
extern unsigned char DAT_100c5c30[];
extern char s_GDI_CreateDIBSection_failed___d_1008d9e8[];

unsigned int __stdcall SetDIBColorTable(void *hdc, unsigned int iStart, unsigned int cEntries, const void *prgbq);
void *__stdcall CreateDIBSection(void *hdc, const void *pbmi, unsigned int usage, void **ppvBits, void *hSection, unsigned long offset);
void *__stdcall SelectObject(void *hdc, void *h);
unsigned long __stdcall GetLastError(void);
void __cdecl FUN_100640a0(const char *fmt, ...);

int __stdcall CreateDIBSectionOrSetColorTable(void)
{
    if (DAT_1008d560 != (void *)0) {
        DAT_100d1540 = (int)SetDIBColorTable(DAT_1008d55c, 0, 0x100, (const void *)DAT_1008d158);
        return 1;
    }
    DAT_1008d560 = CreateDIBSection(DAT_1008d150, (const void *)DAT_100c5c30, 1, DAT_100a725c, (void *)0, 0);
    if ((DAT_1008d560 != (void *)0) && (*DAT_100a725c != (void *)0)) {
        DAT_100a7560 = *DAT_100a725c;
        DAT_100d1544 = SelectObject(DAT_1008d55c, DAT_1008d560);
        return 1;
    }
    FUN_100640a0(s_GDI_CreateDIBSection_failed___d_1008d9e8, GetLastError());
    return 0;
}
