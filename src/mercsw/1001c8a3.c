/* SPDX-License-Identifier: MIT */
/* mercsw 1001c8a3 */
extern HANDLE DAT_100adf74;

BOOL __stdcall HeapFree(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem);

void __cdecl FUN_1001c8a3(LPVOID param_1);

void __cdecl FUN_1001c8a3(LPVOID param_1)
{
    if (param_1 != (LPVOID)0x0) {
        HeapFree(DAT_100adf74, 1, param_1);
    }
    return;
}
