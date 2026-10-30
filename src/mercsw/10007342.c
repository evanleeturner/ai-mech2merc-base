/* SPDX-License-Identifier: MIT */
/* mercsw 10007342 */
extern int DAT_100a41e0;
extern void *DAT_100a41e4;
extern unsigned int DAT_100a41e8;
extern char s_DEBUG_Message_100a42f0[];

int __cdecl __vsnprintf(char *, unsigned int, char *, char *);
void __cdecl FUN_100071a9(char *);
void __cdecl FUN_10007218(char *);
void __stdcall OutputDebugStringA(const char *);
int __stdcall MessageBoxA(void *, const char *, const char *, unsigned int);

void __cdecl FUN_10007342(char *format)
{
    char local_104[256];

    __vsnprintf(local_104, 0x100, format, (char *)&format + 4);
    switch (DAT_100a41e0) {
    case 1:
        FUN_100071a9(local_104);
        break;
    case 2:
        OutputDebugStringA(local_104);
        break;
    case 3:
        if (DAT_100a41e4 != 0) {
            MessageBoxA(DAT_100a41e4, local_104, s_DEBUG_Message_100a42f0, DAT_100a41e8);
        }
        break;
    case 4:
        FUN_10007218(local_104);
    }
    return;
}
