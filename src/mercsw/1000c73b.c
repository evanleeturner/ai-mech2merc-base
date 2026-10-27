/* SPDX-License-Identifier: MIT */
/* mercsw 1000c73b */
extern LPVOID DAT_100a7580;
extern LPVOID DAT_100a7570;
extern LPVOID DAT_100a7560;
extern LPVOID DAT_100a7574;
extern LPVOID DAT_100a7564;
extern HANDLE DAT_100adf74;
extern int DAT_100a7578;
extern int DAT_100a757c;
extern int DAT_101f5510;
extern int DAT_10215624;
extern int DAT_10215620;
extern int DAT_101f5518;

BOOL __stdcall HeapFree(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem);

void __stdcall FUN_1000c73b(void)
{
    if (DAT_100a7580 != (LPVOID)0) {
        HeapFree(DAT_100adf74, 1, DAT_100a7580);
        DAT_100a7580 = (LPVOID)0;
    }
    if (DAT_100a7570 != (LPVOID)0) {
        HeapFree(DAT_100adf74, 1, DAT_100a7570);
        DAT_100a7570 = (LPVOID)0;
    }
    if (DAT_100a7560 != (LPVOID)0) {
        HeapFree(DAT_100adf74, 1, DAT_100a7560);
        DAT_100a7560 = (LPVOID)0;
    }
    if (DAT_100a7574 != (LPVOID)0) {
        HeapFree(DAT_100adf74, 1, DAT_100a7574);
        DAT_100a7574 = (LPVOID)0;
    }
    if (DAT_100a7564 != (LPVOID)0) {
        HeapFree(DAT_100adf74, 1, DAT_100a7564);
        DAT_100a7564 = (LPVOID)0;
    }
    DAT_100a7578 = 0;
    DAT_100a757c = 0;
    DAT_101f5510 = 0;
    DAT_10215624 = 0;
    DAT_10215620 = 0;
    DAT_101f5518 = 0;
    return;
}
