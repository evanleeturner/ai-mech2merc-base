/* SPDX-License-Identifier: MIT */
/* mercsw 100071f6 */
void * __cdecl _fopen(const char *, const char *);

extern void *DAT_100a41ec;
extern char s_debug_log_100a41f0[];
extern char DAT_100a4340[];

void __stdcall FUN_100071f6(void)
{
    DAT_100a41ec = _fopen(s_debug_log_100a41f0, DAT_100a4340);
    return;
}
