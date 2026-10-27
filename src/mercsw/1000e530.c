/* SPDX-License-Identifier: MIT */
/* mercsw 1000e530 */
extern void *DAT_100adf74;
extern int DAT_100adf78;
extern int DAT_100adf7c;

extern int *DAT_101f52c8;
extern int DAT_101f52cc;
extern int DAT_101f52d4;
extern int DAT_101f52d8;
extern int DAT_101f52dc;
extern int DAT_101f52f4;
extern int DAT_101f52f8;
extern int DAT_101f52fc;

void * __stdcall HeapAlloc(void *hHeap, unsigned int dwFlags, unsigned int dwBytes);

bool __stdcall FUN_1000e530(void)
{
    bool bVar1;

    DAT_101f52c8 = (int *)HeapAlloc(DAT_100adf74, 9, 0x18);
    bVar1 = (DAT_101f52c8 != (int *)0);
    if (bVar1) {
        *DAT_101f52c8 = DAT_100adf78;
        DAT_101f52c8[1] = DAT_100adf7c;
        DAT_101f52c8[2] = 1;
        DAT_101f52c8[3] = 0x100;
        DAT_101f52c8[4] = 1;
        DAT_101f52c8[5] = 0;
        DAT_101f52d8 = (int)((unsigned int)DAT_100adf7c * (unsigned int)DAT_100adf78);
        DAT_101f52dc = DAT_100adf78;
        DAT_101f52cc = DAT_100adf7c;
        DAT_101f52f4 = (int)((unsigned int)DAT_100adf78 - 1u);
        DAT_101f52d4 = (int)((unsigned int)DAT_100adf7c - 1u);
        DAT_101f52f8 = DAT_100adf78 / 2;
        DAT_101f52fc = DAT_100adf7c / 2;
    }
    return bVar1;
}
