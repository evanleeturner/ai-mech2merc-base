/* SPDX-License-Identifier: MIT */
/* mercsw 10007218 */
void * __cdecl _fopen(const char *, const char *);
int __cdecl _fputs(const char *, void *);
int __cdecl _fflush(void *);
int __cdecl _fclose(void *);

extern void *DAT_100a41ec;
extern char s_debug_log_100a41f0[];
extern char DAT_100a4344[];

void __cdecl FUN_10007218(char *str)
{
    if (DAT_100a41ec == (void *)0) {
        DAT_100a41ec = _fopen(s_debug_log_100a41f0, DAT_100a4344);
    }
    if (DAT_100a41ec != (void *)0) {
        _fputs(str, DAT_100a41ec);
        _fflush(DAT_100a41ec);
        _fclose(DAT_100a41ec);
        DAT_100a41ec = (void *)0;
    }
    return;
}
