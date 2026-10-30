/* SPDX-License-Identifier: MIT */
/* mercsw 10002110 */
extern char DAT_10218080[];
extern HWND DAT_100adf6c;
extern char s_Mecenaries__Legacy_Message_100a4060[];

int __cdecl __vsnprintf(char *format, unsigned int param_2, const char *param_3, char *param_4);
void __stdcall OutputDebugStringA(const char *lpOutputString);
int __stdcall MessageBoxA(HWND hWnd, const char *lpText, const char *lpCaption, unsigned int uType);

void __cdecl FUN_10002110(char *format)
{
    /* &stack0x00000008 is the first variadic argument, directly above format on the stack. */
    __vsnprintf(DAT_10218080, 0x100, format, (char *)(&format + 1));
    OutputDebugStringA(DAT_10218080);
    MessageBoxA(DAT_100adf6c, DAT_10218080, s_Mecenaries__Legacy_Message_100a4060, 0x40);
    return;
}
