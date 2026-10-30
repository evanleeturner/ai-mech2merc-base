/* SPDX-License-Identifier: MIT */
/* mercsw 1001c8a3 */
extern HANDLE DAT_100adf74;

BOOL __stdcall HeapFree(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem);

void __cdecl FUN_1001c8a3(LPVOID mem);

void __cdecl FUN_1001c8a3(LPVOID mem)
{
    if (mem != (LPVOID)0x0) {
        HeapFree(DAT_100adf74, 1, mem);
    }
    return;
}
