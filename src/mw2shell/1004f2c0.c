/* SPDX-License-Identifier: MIT */
/* mw2shell 1004f2c0 */
extern int DAT_1009bdf8;
extern HWND DAT_1009bdfc;
extern unsigned int DAT_1009be00;
extern char s_DEBUG_Message_1009bf08[];

int __cdecl __vsnprintf(char *buf, unsigned int count, const char *fmt, __builtin_va_list args);
void FUN_1004f180(char *format);
void FUN_1004f1e0(char *format);
void __stdcall OutputDebugStringA(const char *lpOutputString);
int __stdcall MessageBoxA(HWND hWnd, const char *lpText, const char *lpCaption, unsigned int uType);

void __cdecl FUN_1004f2c0(char *format, ...)
{
    char local_100[256];
    __builtin_va_list args;

    __builtin_va_start(args, format);
    __vsnprintf(local_100, 0x100, format, args);
    __builtin_va_end(args);

    switch (DAT_1009bdf8) {
    case 1:
        FUN_1004f180(local_100);
        return;
    case 2:
        OutputDebugStringA(local_100);
        return;
    case 3:
        if (DAT_1009bdfc != (HWND)0) {
            MessageBoxA(DAT_1009bdfc, local_100, s_DEBUG_Message_1009bf08, DAT_1009be00);
            return;
        }
        break;
    case 4:
        FUN_1004f1e0(local_100);
    }
    return;
}
