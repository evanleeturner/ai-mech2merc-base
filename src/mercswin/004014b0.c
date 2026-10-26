/* SPDX-License-Identifier: MIT */
/* mercswin 004014b0 */
typedef struct HINSTANCE__ *HMODULE;
typedef int (__stdcall *FARPROC)(void);

HMODULE __stdcall LoadLibraryA(const char *lpLibFileName);
FARPROC __stdcall GetProcAddress(HMODULE hModule, const char *lpProcName);
int __stdcall FreeLibrary(HMODULE hLibModule);

typedef int (__stdcall *SimMainFn)(HMODULE, int, unsigned int, unsigned int, unsigned int, unsigned int);

FARPROC DAT_004081b0;

void __cdecl FUN_00401200(const char *fmt, ...);

int __cdecl FUN_004014b0(unsigned int param_1, unsigned int param_2, unsigned int param_3, unsigned int param_4)
{
    HMODULE hModule;
    FARPROC pFVar1;
    int iVar2;

    hModule = LoadLibraryA("MERCSW.DLL");
    if (hModule == (HMODULE)0) {
        return 1;
    }
    pFVar1 = GetProcAddress(hModule, "SimMain");
    if (pFVar1 == (FARPROC)0) {
        return 1;
    }
    DAT_004081b0 = GetProcAddress(hModule, "SimWindowProc");
    if (DAT_004081b0 == (FARPROC)0) {
        return 1;
    }
    FUN_00401200("Entering Sim...\n");
    iVar2 = ((SimMainFn)pFVar1)(hModule, 0, param_2, param_3, param_4, param_1);
    FUN_00401200("Returned from Sim, retval=%d.\n", iVar2);
    FreeLibrary(hModule);
    return iVar2;
}
