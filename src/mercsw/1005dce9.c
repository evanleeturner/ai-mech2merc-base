/* SPDX-License-Identifier: MIT */
/* mercsw 1005dce9 */
long __cdecl _time(long *);
char * __cdecl _ctime(const long *);
int __cdecl _sprintf(char *, const char *, ...);
void __cdecl FUN_1005dd5a(char *);
int __cdecl _fclose(void *);

extern void *DAT_100b3448;
extern const char s_end_of_MW2__s_100b348c[];

bool __stdcall FUN_1005dce9(void)
{
    char local_58[80];
    long local_8;
    bool bVar2;
    long tVar3;
    char *pcVar1;

    bVar2 = DAT_100b3448 != (void *)0x0;
    if (bVar2) {
        tVar3 = _time((long *)0x0);
        local_8 = tVar3;
        pcVar1 = _ctime(&local_8);
        _sprintf(local_58, s_end_of_MW2__s_100b348c, pcVar1);
        FUN_1005dd5a(local_58);
        _fclose(DAT_100b3448);
    }
    return bVar2;
}
