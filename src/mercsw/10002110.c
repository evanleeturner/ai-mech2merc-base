/* SPDX-License-Identifier: MIT */
/* mercsw 10002110 */
extern char DAT_10218080[];
extern HWND DAT_100adf6c;
extern char s_Mecenaries__Legacy_Message_100a4060[];

int __cdecl __vsnprintf(char *param_1, unsigned int param_2, const char *param_3, char *param_4);
void __stdcall OutputDebugStringA(const char *lpOutputString);
int __stdcall MessageBoxA(HWND hWnd, const char *lpText, const char *lpCaption, unsigned int uType);

void __cdecl FUN_10002110(char *param_1)
{
    /* &stack0x00000008 is the first variadic argument, directly above param_1 on the stack. */
    __vsnprintf(DAT_10218080, 0x100, param_1, (char *)(&param_1 + 1));
    OutputDebugStringA(DAT_10218080);
    MessageBoxA(DAT_100adf6c, DAT_10218080, s_Mecenaries__Legacy_Message_100a4060, 0x40);
    return;
}
