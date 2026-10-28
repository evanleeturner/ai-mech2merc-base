/* SPDX-License-Identifier: MIT */
/* mw2shell 100640a0 */
int __cdecl __vsnprintf(char *dst, int size, char *fmt, char *args);
void __cdecl FUN_1004f2c0(char *format);
extern char DAT_100c5940[];

void __cdecl FUN_100640a0(char *format, ...)
{
    __vsnprintf(DAT_100c5940, 0x100, format, (char *)(&format + 1));
    FUN_1004f2c0(DAT_100c5940);
    return;
}
