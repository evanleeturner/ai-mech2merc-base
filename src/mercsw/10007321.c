/* SPDX-License-Identifier: MIT */
/* mercsw 10007321 */
char * __cdecl _strncpy(char *, const char *, unsigned int);

extern char s_debug_log_100a41f0[];

void __cdecl FUN_10007321(char *param_1)
{
    _strncpy(s_debug_log_100a41f0, param_1, 0x100);
    return;
}
