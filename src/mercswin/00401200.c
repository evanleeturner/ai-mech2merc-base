/* SPDX-License-Identifier: MIT */
/* mercswin 00401200 */
extern int DAT_00408048;
extern HWND DAT_0040804c;
extern UINT DAT_00408050;
extern char s_DEBUG_Message_00408158[];

int __cdecl __vsnprintf(char *, unsigned int, const char *, char *);
void __cdecl FUN_00401160(char *format);
void __cdecl FUN_004011a0(char *format);
void __stdcall OutputDebugStringA(const char *);
int __stdcall MessageBoxA(HWND, const char *, const char *, UINT);

void __cdecl FUN_00401200(char *format)
{
    char local_100[256];

    __vsnprintf(local_100, 0x100, format, (char *)(&format + 1));

    switch (DAT_00408048) {
    case 1:
        FUN_00401160(local_100);
        return;
    case 2:
        OutputDebugStringA(local_100);
        return;
    case 3:
        if (DAT_0040804c != (HWND)0) {
            MessageBoxA(DAT_0040804c, local_100, s_DEBUG_Message_00408158, DAT_00408050);
            return;
        }
        break;
    case 4:
        FUN_004011a0(local_100);
    }
    return;
}
