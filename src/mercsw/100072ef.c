/* SPDX-License-Identifier: MIT */
/* mercsw 100072ef */
int __cdecl __vsnprintf(char *, unsigned int, const char *, char *);

extern char s_DEBUG_Message_100a42f0[];

void __cdecl FUN_100072ef(char *format)
{
    __vsnprintf(s_DEBUG_Message_100a42f0, 0x50, format, (char *)&format + 4);
    return;
}
