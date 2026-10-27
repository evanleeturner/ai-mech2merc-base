/* SPDX-License-Identifier: MIT */
/* mercsw 1000278e */
extern LPVOID DAT_100a40f8;
extern HANDLE DAT_100adf74;

void __stdcall _AIL_end_sample_4(unsigned int a);
BOOL __stdcall HeapFree(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem);

void __stdcall FUN_1000278e(void)
{
    unsigned int local_8;

    if (DAT_100a40f8 != (LPVOID)0x0) {
        for (local_8 = 0; local_8 < *(unsigned int *)((int)DAT_100a40f8 + 0x44); local_8 = local_8 + 1) {
            if (*(int *)((int)DAT_100a40f8 + local_8 * 4 + 0x48) != 0) {
                _AIL_end_sample_4(*(unsigned int *)((int)DAT_100a40f8 + local_8 * 4 + 4));
                *(unsigned int *)((int)DAT_100a40f8 + local_8 * 4 + 0x48) = 0;
            }
            HeapFree(DAT_100adf74, 1, *(LPVOID *)((int)DAT_100a40f8 + local_8 * 8 + 0x2a8));
        }
        HeapFree(DAT_100adf74, 1, DAT_100a40f8);
        DAT_100a40f8 = (LPVOID)0x0;
    }
    return;
}
